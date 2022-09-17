typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct dlink_export;

typedef void(*type_1)(char***, void**);
typedef void(*type_2)();
typedef void(*type_3)(short, short);
typedef int(*type_5)();
typedef int(*type_7)();
typedef void(*type_8)(unsigned int);
typedef void(*type_9)(unsigned short, unsigned char, char*);
typedef void(*type_10)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef int(*type_11)(int, int, int, int);
typedef void(*type_12)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_13)();
typedef void(*type_14)(char*);
typedef void(*type_15)(char*, char*);
typedef void(*type_16)(short);
typedef int(*type_18)();
typedef void(*type_21)(short);
typedef void(*type_22)(void*, unsigned char, int);
typedef void(*type_24)(void*, void*, int);
typedef void(*type_25)(int, int);
typedef int(*type_26)(char*);
typedef void(*type_27)(_anon0*);
typedef int(*type_32)(int, void*, int);
typedef void(*type_33)();
typedef int(*type_35)(int);
typedef void(*type_37)(int);

typedef _anon11 type_0[20];
typedef _anon11 type_4[0];
typedef tagPALETTEENTRY type_6[28];
typedef tagPALETTEENTRY type_17[64];
typedef unsigned char type_19[2];
typedef unsigned char type_20[22];
typedef unsigned char type_23[80];
typedef tagPALETTEENTRY type_28[32];
typedef void(*type_29)(_anon0*)[2];
typedef unsigned char type_30[766];
typedef _anon1* type_31[5];
typedef _anon1* type_34[5];
typedef _anon0 type_36[128];
typedef unsigned short type_38[3];
typedef _anon3 type_39[700];
typedef unsigned short type_40[2];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon4 xposi;
	_anon4 yposi;
	_anon7 xspeed;
	_anon7 yspeed;
	_anon7 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon7 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon7 direc;
	_anon7 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon11 spra[20];
		_anon11 spr[0];
	};
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon2
{
	short plring;
	int plscore;
	_anon7 stageno;
	unsigned int TimeWarp;
	void* pSprBmp;
	unsigned int GamePass;
	unsigned char play_start;
	unsigned char pl_suu;
	unsigned char generate_flag;
	unsigned char time_flag;
	unsigned char special_flag;
	int pltime_sb;
	short plxposi_sb;
	short plyposi_sb;
	short scralim_down_sb;
	short scra_h_posit_sb;
	short scra_v_posit_sb;
	short scrb_h_posit_sb;
	short scrb_v_posit_sb;
	short scrc_h_posit_sb;
	short scrc_v_posit_sb;
	short scrz_h_posit_sb;
	short scrz_v_posit_sb;
	short waterposi_m_sb;
	short plmspd_sb;
	short plxspd_sb;
	short plyspd_sb;
	unsigned char plflag_sb;
	unsigned char cddat_sb;
	unsigned char water_flag_sb;
	unsigned char waterflag_sb;
	unsigned char chibi_sb;
	unsigned char prio_sb;
	short plring_s;
	unsigned char plring_f2_s;
	unsigned char plflag;
	_anon7 demoflag;
	_anon7 hintposi;
	unsigned char waterflag;
	unsigned short* ptv_adr;
	unsigned short* sm_adr0;
	int SPEMode;
	unsigned char stagenm;
	unsigned char clrspflg_save;
	unsigned char ta_flag;
	unsigned char gf_flag;
	unsigned char projector_flag;
	unsigned char flagworkcnt;
	unsigned char flagworkcnt2;
	unsigned char flagwork[766];
	unsigned int ta_time;
	unsigned char ta_Menu1;
	unsigned char ta_Round;
	unsigned char ta_Zone;
	unsigned char EndingMesType;
	int extrascore;
	unsigned char emie3end;
	unsigned char SpecialTime;
	unsigned char bRestart;
	unsigned char User;
	unsigned short wReserved1;
	unsigned short wReserved2;
};

struct _anon3
{
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
};

union _anon4
{
	int l;
	_anon5 w;
	_anon6 b;
};

struct _anon5
{
	short l;
	short h;
};

struct _anon6
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon7
{
	short w;
	_anon8 b;
};

struct _anon8
{
	char l;
	char h;
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

struct dlink_export
{
	void(*game_init)();
	void(*game)();
	void(*dll_meminit)(char***, void**);
	void(*dll_memfree)();
	void(*SWdataSet)(short, short);
	int(*Get_vscroll)();
	int(*Get_scra_h_posiw)();
	int(*Get_scrb_h_posiw)();
	int(*FadeProc)();
	void(*SetDebugFlag)(unsigned int);
	void(*GetRoundStr)(unsigned short, unsigned char, char*);
	void(*Special_block_chg)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
};

unsigned short clchg_cnt[2];
tagPALETTEENTRY colortbl[32];
tagPALETTEENTRY clchg_tbl[28];
void(*act_tbl)(_anon0*)[2];
_anon2* lpKeepWork;
_anon3 SprBmp[700];
int* lpFadeFlag;
_anon4* lphscrollbuff;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk;
unsigned short* pmapwk;
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
int(*sOpenFile)(char*);
void(*sOutputDebugString)(char*);
void(*sPrintf)(char*, char*);
int(*sRandom)();
void(*sMemCpy)(void*, void*, int);
void(*sMemSet)(void*, unsigned char, int);
void(*ChangeTileBmp)(int, int);
void(*CDPlay)(short);
void(*WaveRequest)(short);
void(*ClrSpriteDebug)();
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
int(*SetGrid)(int, int, int, int);
_anon4 vscroll;
_anon4 scra_h_posiw;
_anon4 scrb_h_posiw;
_anon7 debugflag;
unsigned short gmtime0;
_anon4 scrz_v_posit;
_anon4 scrz_h_posit;
_anon4 scrc_v_posit;
_anon4 scrc_h_posit;
_anon4 scrb_v_posit;
_anon4 scrb_h_posit;
_anon4 scra_v_posit;
_anon4 scra_h_posit;
_anon0 actwk[128];
unsigned short setcnt;
_anon9 swdata;
unsigned short gmtime1;
_anon1 snc0;
_anon1 snc1;
_anon1 snc2;
_anon1 snc3;
_anon1 snc4;
_anon1* ptsonic[5];
_anon1 atm0;
_anon1 atm1;
_anon1 atm2;
_anon1 atm3;
_anon1 atm4;
_anon1* spr_atom[5];
unsigned short code_tbl[3];
unsigned short wColwk;
int FadeCount;
unsigned char clfflg;
tagPALETTEENTRY colorsave[64];
unsigned char byMskwk;
unsigned char SeToWavTbl[80];
dlink_export ExportedFunctions;
int(*sGetFileSize)(int);

void DLL_meminit(char*** pBufTbl, void** pFuncTbl);
void DLL_memfree();
int Get_vscroll();
int Get_scra_h_posiw();
int Get_scrb_h_posiw();
void SetDebugFlag(unsigned int NewVal);
void game_init();
_anon0* atomwk_search();
int game();
void sonic0(_anon0* pActwk);
void sonic1(_anon0* pActwk);
void sonic2(_anon0* pActwk);
void sonic3(_anon0* pActwk);
void sonic_act(_anon0* pActwk);
void atom1(_anon0* pActwk);
void atom0(_anon0* pActwk);
void atom(_anon0* pActwk);
void clchg();
void clwout();
void clwout_new();
void woutcolor(unsigned short wD1);
void clwin_init();
void clwin();
void clwin_new();
void wincolor(unsigned char byD0, unsigned short wD1);
int FadeProc();
void soundset(short ReqNo);

// 
// Start address: 0x1000000
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	// Line 94, Address: 0x1000000, Func Offset: 0
	// Line 97, Address: 0x100000c, Func Offset: 0xc
	// Line 98, Address: 0x1000024, Func Offset: 0x24
	// Line 99, Address: 0x100003c, Func Offset: 0x3c
	// Line 100, Address: 0x1000054, Func Offset: 0x54
	// Line 101, Address: 0x100006c, Func Offset: 0x6c
	// Line 102, Address: 0x1000084, Func Offset: 0x84
	// Line 103, Address: 0x1000090, Func Offset: 0x90
	// Line 104, Address: 0x10000a8, Func Offset: 0xa8
	// Line 105, Address: 0x10000b4, Func Offset: 0xb4
	// Line 106, Address: 0x10000c0, Func Offset: 0xc0
	// Line 107, Address: 0x10000cc, Func Offset: 0xcc
	// Line 109, Address: 0x10000d8, Func Offset: 0xd8
	// Line 110, Address: 0x10000e4, Func Offset: 0xe4
	// Line 111, Address: 0x10000f0, Func Offset: 0xf0
	// Line 112, Address: 0x1000108, Func Offset: 0x108
	// Line 113, Address: 0x1000120, Func Offset: 0x120
	// Line 114, Address: 0x100012c, Func Offset: 0x12c
	// Line 115, Address: 0x1000144, Func Offset: 0x144
	// Line 116, Address: 0x1000150, Func Offset: 0x150
	// Line 117, Address: 0x100015c, Func Offset: 0x15c
	// Line 118, Address: 0x1000168, Func Offset: 0x168
	// Line 119, Address: 0x1000180, Func Offset: 0x180
	// Line 120, Address: 0x1000198, Func Offset: 0x198
	// Line 121, Address: 0x10001b0, Func Offset: 0x1b0
	// Line 122, Address: 0x10001c8, Func Offset: 0x1c8
	// Line 126, Address: 0x10001e0, Func Offset: 0x1e0
	// Line 127, Address: 0x10001fc, Func Offset: 0x1fc
	// Line 128, Address: 0x1000218, Func Offset: 0x218
	// Line 129, Address: 0x1000234, Func Offset: 0x234
	// Line 130, Address: 0x1000250, Func Offset: 0x250
	// Line 131, Address: 0x100026c, Func Offset: 0x26c
	// Line 132, Address: 0x1000288, Func Offset: 0x288
	// Line 133, Address: 0x10002a0, Func Offset: 0x2a0
	// Line 135, Address: 0x10002b8, Func Offset: 0x2b8
	// Line 138, Address: 0x10002cc, Func Offset: 0x2cc
	// Func End, Address: 0x10002d8, Func Offset: 0x2d8
}

// 
// Start address: 0x10002e0
void DLL_memfree()
{
	// Line 142, Address: 0x10002e0, Func Offset: 0
	// Func End, Address: 0x10002e8, Func Offset: 0x8
}

// 
// Start address: 0x10002f0
int Get_vscroll()
{
	// Line 146, Address: 0x10002f0, Func Offset: 0
	// Line 147, Address: 0x10002f8, Func Offset: 0x8
	// Func End, Address: 0x1000300, Func Offset: 0x10
}

// 
// Start address: 0x1000300
int Get_scra_h_posiw()
{
	// Line 150, Address: 0x1000300, Func Offset: 0
	// Line 151, Address: 0x1000308, Func Offset: 0x8
	// Func End, Address: 0x1000310, Func Offset: 0x10
}

// 
// Start address: 0x1000310
int Get_scrb_h_posiw()
{
	// Line 154, Address: 0x1000310, Func Offset: 0
	// Line 155, Address: 0x1000318, Func Offset: 0x8
	// Func End, Address: 0x1000320, Func Offset: 0x10
}

// 
// Start address: 0x1000320
void SetDebugFlag(unsigned int NewVal)
{
	// Line 158, Address: 0x1000320, Func Offset: 0
	// Line 159, Address: 0x1000328, Func Offset: 0x8
	// Line 160, Address: 0x1000354, Func Offset: 0x34
	// Line 162, Address: 0x100036c, Func Offset: 0x4c
	// Func End, Address: 0x1000378, Func Offset: 0x58
}

// 
// Start address: 0x1000380
void game_init()
{
	int i;
	// Line 170, Address: 0x1000380, Func Offset: 0
	// Line 173, Address: 0x100038c, Func Offset: 0xc
	// Line 175, Address: 0x10003ac, Func Offset: 0x2c
	// Line 176, Address: 0x10003b4, Func Offset: 0x34
	// Line 177, Address: 0x10003bc, Func Offset: 0x3c
	// Line 178, Address: 0x10003c4, Func Offset: 0x44
	// Line 179, Address: 0x10003cc, Func Offset: 0x4c
	// Line 180, Address: 0x10003d4, Func Offset: 0x54
	// Line 181, Address: 0x10003dc, Func Offset: 0x5c
	// Line 182, Address: 0x10003e4, Func Offset: 0x64
	// Line 184, Address: 0x10003ec, Func Offset: 0x6c
	// Line 185, Address: 0x10003f8, Func Offset: 0x78
	// Line 186, Address: 0x1000438, Func Offset: 0xb8
	// Line 187, Address: 0x1000448, Func Offset: 0xc8
	// Line 188, Address: 0x1000454, Func Offset: 0xd4
	// Line 189, Address: 0x100045c, Func Offset: 0xdc
	// Line 190, Address: 0x1000468, Func Offset: 0xe8
	// Line 192, Address: 0x1000470, Func Offset: 0xf0
	// Func End, Address: 0x1000484, Func Offset: 0x104
}

// 
// Start address: 0x1000490
_anon0* atomwk_search()
{
	int i;
	// Line 196, Address: 0x1000490, Func Offset: 0
	// Line 200, Address: 0x1000498, Func Offset: 0x8
	// Line 201, Address: 0x10004a4, Func Offset: 0x14
	// Line 202, Address: 0x10004e8, Func Offset: 0x58
	// Line 203, Address: 0x10004f8, Func Offset: 0x68
	// Line 204, Address: 0x1000500, Func Offset: 0x70
	// Func End, Address: 0x1000510, Func Offset: 0x80
}

// 
// Start address: 0x1000510
int game()
{
	_anon0* pActwk;
	unsigned short wD0;
	// Line 208, Address: 0x1000510, Func Offset: 0
	// Line 212, Address: 0x1000520, Func Offset: 0x10
	// Line 213, Address: 0x1000530, Func Offset: 0x20
	// Line 215, Address: 0x100053c, Func Offset: 0x2c
	// Line 216, Address: 0x1000544, Func Offset: 0x34
	// Line 217, Address: 0x100055c, Func Offset: 0x4c
	// Line 218, Address: 0x1000564, Func Offset: 0x54
	// Line 219, Address: 0x100057c, Func Offset: 0x6c
	// Line 220, Address: 0x1000590, Func Offset: 0x80
	// Line 223, Address: 0x10005b4, Func Offset: 0xa4
	// Line 224, Address: 0x10005cc, Func Offset: 0xbc
	// Line 225, Address: 0x10005d4, Func Offset: 0xc4
	// Line 226, Address: 0x10005e0, Func Offset: 0xd0
	// Line 229, Address: 0x10005e8, Func Offset: 0xd8
	// Line 230, Address: 0x10005f0, Func Offset: 0xe0
	// Line 232, Address: 0x10005f8, Func Offset: 0xe8
	// Line 233, Address: 0x100060c, Func Offset: 0xfc
	// Line 234, Address: 0x1000620, Func Offset: 0x110
	// Line 236, Address: 0x1000634, Func Offset: 0x124
	// Line 237, Address: 0x100065c, Func Offset: 0x14c
	// Line 238, Address: 0x1000664, Func Offset: 0x154
	// Line 240, Address: 0x100066c, Func Offset: 0x15c
	// Line 241, Address: 0x1000670, Func Offset: 0x160
	// Func End, Address: 0x1000688, Func Offset: 0x178
}

// 
// Start address: 0x1000690
void sonic0(_anon0* pActwk)
{
	// Line 267, Address: 0x1000690, Func Offset: 0
	// Line 268, Address: 0x1000698, Func Offset: 0x8
	// Line 269, Address: 0x10006a4, Func Offset: 0x14
	// Line 270, Address: 0x10006b4, Func Offset: 0x24
	// Line 271, Address: 0x10006c0, Func Offset: 0x30
	// Line 272, Address: 0x10006cc, Func Offset: 0x3c
	// Line 273, Address: 0x10006dc, Func Offset: 0x4c
	// Func End, Address: 0x10006e8, Func Offset: 0x58
}

// 
// Start address: 0x10006f0
void sonic1(_anon0* pActwk)
{
	// Line 275, Address: 0x10006f0, Func Offset: 0
	// Line 276, Address: 0x10006f8, Func Offset: 0x8
	// Line 277, Address: 0x1000708, Func Offset: 0x18
	// Line 278, Address: 0x1000724, Func Offset: 0x34
	// Line 279, Address: 0x1000734, Func Offset: 0x44
	// Line 282, Address: 0x1000740, Func Offset: 0x50
	// Func End, Address: 0x100074c, Func Offset: 0x5c
}

// 
// Start address: 0x1000750
void sonic2(_anon0* pActwk)
{
	// Line 284, Address: 0x1000750, Func Offset: 0
	// Line 285, Address: 0x1000758, Func Offset: 0x8
	// Line 286, Address: 0x1000768, Func Offset: 0x18
	// Line 287, Address: 0x100077c, Func Offset: 0x2c
	// Line 290, Address: 0x100078c, Func Offset: 0x3c
	// Func End, Address: 0x1000798, Func Offset: 0x48
}

// 
// Start address: 0x10007a0
void sonic3(_anon0* pActwk)
{
	// Line 292, Address: 0x10007a0, Func Offset: 0
	// Line 293, Address: 0x10007a8, Func Offset: 0x8
	// Line 294, Address: 0x10007b8, Func Offset: 0x18
	// Line 295, Address: 0x10007d4, Func Offset: 0x34
	// Line 298, Address: 0x10007e4, Func Offset: 0x44
	// Func End, Address: 0x10007f0, Func Offset: 0x50
}

// 
// Start address: 0x10007f0
void sonic_act(_anon0* pActwk)
{
	// Line 300, Address: 0x10007f0, Func Offset: 0
	// Line 301, Address: 0x10007fc, Func Offset: 0xc
	// Line 302, Address: 0x1000814, Func Offset: 0x24
	// Line 303, Address: 0x1000824, Func Offset: 0x34
	// Line 305, Address: 0x1000844, Func Offset: 0x54
	// Line 308, Address: 0x1000854, Func Offset: 0x64
	// Line 310, Address: 0x1000894, Func Offset: 0xa4
	// Line 311, Address: 0x10008a0, Func Offset: 0xb0
	// Line 313, Address: 0x10008a8, Func Offset: 0xb8
	// Line 314, Address: 0x10008b4, Func Offset: 0xc4
	// Line 316, Address: 0x10008bc, Func Offset: 0xcc
	// Line 317, Address: 0x10008c8, Func Offset: 0xd8
	// Line 319, Address: 0x10008d0, Func Offset: 0xe0
	// Line 326, Address: 0x10008dc, Func Offset: 0xec
	// Line 328, Address: 0x10008e8, Func Offset: 0xf8
	// Func End, Address: 0x10008f8, Func Offset: 0x108
}

// 
// Start address: 0x1000900
void atom1(_anon0* pActwk)
{
	int lD0;
	// Line 353, Address: 0x1000900, Func Offset: 0
	// Line 356, Address: 0x1000910, Func Offset: 0x10
	// Line 357, Address: 0x100091c, Func Offset: 0x1c
	// Line 359, Address: 0x100092c, Func Offset: 0x2c
	// Line 360, Address: 0x1000938, Func Offset: 0x38
	// Line 362, Address: 0x1000948, Func Offset: 0x48
	// Line 363, Address: 0x1000958, Func Offset: 0x58
	// Line 364, Address: 0x1000968, Func Offset: 0x68
	// Line 365, Address: 0x1000974, Func Offset: 0x74
	// Line 367, Address: 0x100097c, Func Offset: 0x7c
	// Line 370, Address: 0x1000988, Func Offset: 0x88
	// Func End, Address: 0x100099c, Func Offset: 0x9c
}

// 
// Start address: 0x10009a0
void atom0(_anon0* pActwk)
{
	_anon4 lD0;
	_anon4 lD1;
	// Line 373, Address: 0x10009a0, Func Offset: 0
	// Line 375, Address: 0x10009ac, Func Offset: 0xc
	// Line 376, Address: 0x10009b8, Func Offset: 0x18
	// Line 377, Address: 0x10009c8, Func Offset: 0x28
	// Line 380, Address: 0x10009d8, Func Offset: 0x38
	// Line 381, Address: 0x10009f0, Func Offset: 0x50
	// Line 382, Address: 0x1000a00, Func Offset: 0x60
	// Line 383, Address: 0x1000a10, Func Offset: 0x70
	// Line 384, Address: 0x1000a1c, Func Offset: 0x7c
	// Line 385, Address: 0x1000a50, Func Offset: 0xb0
	// Line 386, Address: 0x1000a74, Func Offset: 0xd4
	// Line 387, Address: 0x1000a80, Func Offset: 0xe0
	// Line 388, Address: 0x1000a8c, Func Offset: 0xec
	// Func End, Address: 0x1000a9c, Func Offset: 0xfc
}

// 
// Start address: 0x1000aa0
void atom(_anon0* pActwk)
{
	// Line 391, Address: 0x1000aa0, Func Offset: 0
	// Line 392, Address: 0x1000aac, Func Offset: 0xc
	// Line 393, Address: 0x1000ac4, Func Offset: 0x24
	// Line 394, Address: 0x1000ad4, Func Offset: 0x34
	// Line 396, Address: 0x1000af4, Func Offset: 0x54
	// Line 398, Address: 0x1000b1c, Func Offset: 0x7c
	// Line 399, Address: 0x1000b28, Func Offset: 0x88
	// Line 401, Address: 0x1000b30, Func Offset: 0x90
	// Line 406, Address: 0x1000b3c, Func Offset: 0x9c
	// Func End, Address: 0x1000b4c, Func Offset: 0xac
}

// 
// Start address: 0x1000b50
void clchg()
{
	unsigned short wD0;
	int i;
	// Line 410, Address: 0x1000b50, Func Offset: 0
	// Line 414, Address: 0x1000b5c, Func Offset: 0xc
	// Line 415, Address: 0x1000b70, Func Offset: 0x20
	// Line 418, Address: 0x1000b88, Func Offset: 0x38
	// Line 419, Address: 0x1000b94, Func Offset: 0x44
	// Line 420, Address: 0x1000ba8, Func Offset: 0x58
	// Line 421, Address: 0x1000bc0, Func Offset: 0x70
	// Line 423, Address: 0x1000bc8, Func Offset: 0x78
	// Line 424, Address: 0x1000bd4, Func Offset: 0x84
	// Line 425, Address: 0x1000c24, Func Offset: 0xd4
	// Line 427, Address: 0x1000c34, Func Offset: 0xe4
	// Func End, Address: 0x1000c48, Func Offset: 0xf8
}

// 
// Start address: 0x1000c50
void clwout()
{
	// Line 458, Address: 0x1000c50, Func Offset: 0
	// Line 459, Address: 0x1000c5c, Func Offset: 0xc
	// Line 460, Address: 0x1000c6c, Func Offset: 0x1c
	// Line 461, Address: 0x1000c78, Func Offset: 0x28
	// Line 462, Address: 0x1000c80, Func Offset: 0x30
	// Func End, Address: 0x1000c88, Func Offset: 0x38
}

// 
// Start address: 0x1000c90
void clwout_new()
{
	// Line 465, Address: 0x1000c90, Func Offset: 0
	// Line 466, Address: 0x1000c98, Func Offset: 0x8
	// Line 468, Address: 0x1000cb0, Func Offset: 0x20
	// Line 469, Address: 0x1000cbc, Func Offset: 0x2c
	// Line 471, Address: 0x1000cc4, Func Offset: 0x34
	// Line 473, Address: 0x1000ce0, Func Offset: 0x50
	// Line 474, Address: 0x1000d08, Func Offset: 0x78
	// Line 477, Address: 0x1000d10, Func Offset: 0x80
	// Line 478, Address: 0x1000d1c, Func Offset: 0x8c
	// Line 480, Address: 0x1000d30, Func Offset: 0xa0
	// Func End, Address: 0x1000d40, Func Offset: 0xb0
}

// 
// Start address: 0x1000d40
void woutcolor(unsigned short wD1)
{
	short i;
	tagPALETTEENTRY* lpColwk;
	// Line 492, Address: 0x1000d40, Func Offset: 0
	// Line 497, Address: 0x1000d50, Func Offset: 0x10
	// Line 498, Address: 0x1000d58, Func Offset: 0x18
	// Line 500, Address: 0x1000d64, Func Offset: 0x24
	// Line 503, Address: 0x1000d98, Func Offset: 0x58
	// Line 504, Address: 0x1000dac, Func Offset: 0x6c
	// Line 506, Address: 0x1000db8, Func Offset: 0x78
	// Line 508, Address: 0x1000dc0, Func Offset: 0x80
	// Line 509, Address: 0x1000dd4, Func Offset: 0x94
	// Line 511, Address: 0x1000de0, Func Offset: 0xa0
	// Line 513, Address: 0x1000de8, Func Offset: 0xa8
	// Line 514, Address: 0x1000dfc, Func Offset: 0xbc
	// Line 518, Address: 0x1000e08, Func Offset: 0xc8
	// Line 520, Address: 0x1000e2c, Func Offset: 0xec
	// Func End, Address: 0x1000e40, Func Offset: 0x100
}

// 
// Start address: 0x1000e40
void clwin_init()
{
	short i;
	tagPALETTEENTRY* lpColwk;
	tagPALETTEENTRY* lpSavewk;
	tagPALETTEENTRY tmp;
	// Line 532, Address: 0x1000e40, Func Offset: 0
	// Line 536, Address: 0x1000e50, Func Offset: 0x10
	// Line 538, Address: 0x1000e64, Func Offset: 0x24
	// Line 539, Address: 0x1000e6c, Func Offset: 0x2c
	// Line 540, Address: 0x1000e74, Func Offset: 0x34
	// Line 542, Address: 0x1000e80, Func Offset: 0x40
	// Line 543, Address: 0x1000ea8, Func Offset: 0x68
	// Line 544, Address: 0x1000ed4, Func Offset: 0x94
	// Line 545, Address: 0x1000ef4, Func Offset: 0xb4
	// Func End, Address: 0x1000f0c, Func Offset: 0xcc
}

// 
// Start address: 0x1000f10
void clwin()
{
	// Line 558, Address: 0x1000f10, Func Offset: 0
	// Line 559, Address: 0x1000f20, Func Offset: 0x10
	// Line 560, Address: 0x1000f2c, Func Offset: 0x1c
	// Line 561, Address: 0x1000f34, Func Offset: 0x24
	// Line 562, Address: 0x1000f40, Func Offset: 0x30
	// Func End, Address: 0x1000f48, Func Offset: 0x38
}

// 
// Start address: 0x1000f50
void clwin_new()
{
	// Line 565, Address: 0x1000f50, Func Offset: 0
	// Line 566, Address: 0x1000f58, Func Offset: 0x8
	// Line 568, Address: 0x1000f70, Func Offset: 0x20
	// Line 569, Address: 0x1000f7c, Func Offset: 0x2c
	// Line 571, Address: 0x1000f84, Func Offset: 0x34
	// Line 573, Address: 0x1000fa0, Func Offset: 0x50
	// Line 574, Address: 0x1000fd0, Func Offset: 0x80
	// Line 575, Address: 0x1000fe4, Func Offset: 0x94
	// Line 578, Address: 0x1000fec, Func Offset: 0x9c
	// Line 579, Address: 0x1000ff8, Func Offset: 0xa8
	// Line 580, Address: 0x1001004, Func Offset: 0xb4
	// Line 582, Address: 0x1001018, Func Offset: 0xc8
	// Func End, Address: 0x1001028, Func Offset: 0xd8
}

// 
// Start address: 0x1001030
void wincolor(unsigned char byD0, unsigned short wD1)
{
	short i;
	unsigned char byColwk;
	tagPALETTEENTRY* lpColwk;
	tagPALETTEENTRY* lpSavewk;
	// Line 594, Address: 0x1001030, Func Offset: 0
	// Line 599, Address: 0x100104c, Func Offset: 0x1c
	// Line 600, Address: 0x1001054, Func Offset: 0x24
	// Line 601, Address: 0x100105c, Func Offset: 0x2c
	// Line 603, Address: 0x1001068, Func Offset: 0x38
	// Line 606, Address: 0x100109c, Func Offset: 0x6c
	// Line 607, Address: 0x10010a4, Func Offset: 0x74
	// Line 608, Address: 0x10010c4, Func Offset: 0x94
	// Line 609, Address: 0x10010c8, Func Offset: 0x98
	// Line 611, Address: 0x10010d0, Func Offset: 0xa0
	// Line 612, Address: 0x10010d8, Func Offset: 0xa8
	// Line 613, Address: 0x10010f8, Func Offset: 0xc8
	// Line 614, Address: 0x10010fc, Func Offset: 0xcc
	// Line 616, Address: 0x1001104, Func Offset: 0xd4
	// Line 617, Address: 0x100110c, Func Offset: 0xdc
	// Line 618, Address: 0x100112c, Func Offset: 0xfc
	// Line 621, Address: 0x1001130, Func Offset: 0x100
	// Line 622, Address: 0x1001134, Func Offset: 0x104
	// Line 623, Address: 0x1001138, Func Offset: 0x108
	// Line 626, Address: 0x1001158, Func Offset: 0x128
	// Func End, Address: 0x1001174, Func Offset: 0x144
}

// 
// Start address: 0x1001180
int FadeProc()
{
	// Line 639, Address: 0x1001180, Func Offset: 0
	// Line 640, Address: 0x1001188, Func Offset: 0x8
	// Line 643, Address: 0x10011b4, Func Offset: 0x34
	// Line 644, Address: 0x10011bc, Func Offset: 0x3c
	// Line 646, Address: 0x10011c4, Func Offset: 0x44
	// Line 649, Address: 0x10011cc, Func Offset: 0x4c
	// Line 650, Address: 0x10011d0, Func Offset: 0x50
	// Func End, Address: 0x10011e0, Func Offset: 0x60
}

// 
// Start address: 0x10011e0
void soundset(short ReqNo)
{
	// Line 665, Address: 0x10011e0, Func Offset: 0
	// Line 666, Address: 0x10011ec, Func Offset: 0xc
	// Line 670, Address: 0x1001204, Func Offset: 0x24
	// Line 671, Address: 0x1001210, Func Offset: 0x30
	// Line 673, Address: 0x100123c, Func Offset: 0x5c
	// Line 674, Address: 0x1001250, Func Offset: 0x70
	// Func End, Address: 0x1001260, Func Offset: 0x80
}

