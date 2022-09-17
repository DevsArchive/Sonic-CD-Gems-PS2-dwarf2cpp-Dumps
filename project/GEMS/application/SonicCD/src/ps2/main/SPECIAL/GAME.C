typedef struct dlink_export;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct tagPALETTEENTRY;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef void(*type_1)();
typedef void(*type_3)(unsigned int);
typedef void(*type_4)(short);
typedef void(*type_7)(short);
typedef void(*type_8)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_11)();
typedef void(*type_12)();
typedef void(*type_16)(char***, void**);
typedef void(*type_17)();
typedef void(*type_18)(short, short);
typedef void(*type_22)(char*);
typedef int(*type_24)();
typedef void(*type_26)(char*, char*);
typedef int(*type_29)();
typedef int(*type_31)();
typedef void(*type_32)(unsigned short, unsigned char, char*);
typedef void(*type_34)(void*, unsigned char, int);
typedef void(*type_37)(void*, void*, int);
typedef int(*type_40)(char*);
typedef int(*type_44)(int, void*, int);
typedef void(*type_45)();
typedef int(*type_48)(int);
typedef void(*type_51)(int);
typedef void(*type_59)();
typedef int(*type_71)(int, int, int, int, int);
typedef void(*type_77)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_81)();
typedef void(*type_84)(short);

typedef char type_0[128];
typedef void(*type_2)()[8];
typedef char type_5[80];
typedef unsigned char type_6[1008];
typedef tagPALETTEENTRY type_9[32];
typedef tagPALETTEENTRY type_10[40];
typedef int type_13[192];
typedef tagPALETTEENTRY type_14[32];
typedef _anon10 type_15[700];
typedef unsigned short type_19[16384];
typedef tagPALETTEENTRY type_20[32];
typedef unsigned char type_21[3];
typedef unsigned short type_23[52];
typedef unsigned char type_25[48];
typedef tagPALETTEENTRY type_27[32];
typedef unsigned short type_28[46];
typedef tagPALETTEENTRY type_30[64];
typedef unsigned short type_33[12];
typedef tagPALETTEENTRY type_35[7];
typedef unsigned short type_36[8];
typedef unsigned char type_38[80];
typedef unsigned short type_39[4];
typedef unsigned char type_41[766];
typedef tagPALETTEENTRY type_42[26];
typedef unsigned short type_43[4];
typedef void(*type_46)()[8];
typedef unsigned short type_47[4];
typedef _anon13 type_49[48];
typedef unsigned short type_50[4];
typedef tagPALETTEENTRY type_52[26];
typedef int type_53[111];
typedef unsigned int type_54[128];
typedef tagPALETTEENTRY type_55[12];
typedef tagPALETTEENTRY type_56[32];
typedef _anon8 type_57[20];
typedef tagPALETTEENTRY type_58[32];
typedef _anon8 type_60[0];
typedef void(*type_61)()[8];
typedef tagPALETTEENTRY type_62[28];
typedef tagPALETTEENTRY type_63[26];
typedef tagPALETTEENTRY type_64[16];
typedef tagPALETTEENTRY type_65[32];
typedef _anon0 type_66[16];
typedef tagPALETTEENTRY type_67[32];
typedef unsigned short type_68[42];
typedef _anon9* type_69[64];
typedef tagPALETTEENTRY type_70[12];
typedef tagPALETTEENTRY type_72[64];
typedef tagPALETTEENTRY type_73[8];
typedef unsigned short type_74[30];
typedef tagPALETTEENTRY type_75[8];
typedef unsigned short type_76[8];
typedef tagPALETTEENTRY type_78[24];
typedef unsigned short type_79[10];
typedef unsigned short type_80[4];
typedef tagPALETTEENTRY type_82[6];
typedef unsigned short type_83[4];
typedef short type_85[4];
typedef unsigned short type_86[4];

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

struct _anon0
{
	unsigned short* tbl;
	unsigned short vadr;
	unsigned short xsize;
	unsigned short ysize;
};

union _anon1
{
	int l;
	_anon2 w;
	_anon3 b;
};

struct _anon2
{
	short l;
	short h;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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
	unsigned short w;
	_anon7 b;
};

struct _anon7
{
	unsigned char l;
	unsigned char h;
};

struct _anon8
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon9
{
	unsigned char cnt;
	union
	{
		_anon8 spra[20];
		_anon8 spr[0];
	};
};

struct _anon10
{
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
};

struct _anon11
{
	short plring;
	int plscore;
	_anon4 stageno;
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
	_anon4 demoflag;
	_anon4 hintposi;
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

struct _anon12
{
	unsigned char cnt;
	char timer;
	_anon9* spr[64];
};

struct _anon13
{
	unsigned char actno;
	unsigned char cgno;
	unsigned char actflg;
	unsigned char exeno;
	unsigned short sprcolor;
	_anon12** pattbl;
	unsigned char pattblno;
	unsigned char patno;
	char pctime;
	char pctime_b;
	unsigned char scno_ce;
	unsigned char scno_ul;
	unsigned char scno_ur;
	unsigned char scno_dr;
	unsigned char scno_dl;
	unsigned char scno_sdir;
	short spdcnt;
	short spdcnt_shock;
	short spdcnt_max;
	_anon1 x_posi;
	_anon1 y_posi;
	_anon1 z_posi;
	_anon1 sx_posi;
	_anon1 sy_posi;
	_anon1 x_speed;
	_anon1 y_speed;
	_anon1 z_speed;
	_anon1 sx_speed;
	_anon1 sy_speed;
	unsigned char colliflg;
	unsigned char dummy[3];
	unsigned char actfree[48];
};

int time_bonus;
int ring_bonus;
unsigned char seregiflg;
unsigned char scroll_stop;
unsigned short hscrcnt;
unsigned int PauseIcon;
tagPALETTEENTRY colortbl[64];
tagPALETTEENTRY dispcolor[64];
tagPALETTEENTRY coltbl0[32];
tagPALETTEENTRY coltbl1[32];
tagPALETTEENTRY coltbl2[32];
tagPALETTEENTRY coltbl3[32];
tagPALETTEENTRY coltbl4[32];
tagPALETTEENTRY coltbl5[32];
tagPALETTEENTRY coltbl6[32];
tagPALETTEENTRY coltbl7[32];
unsigned char cltbl[1008];
int hdatatbl4[111];
char hdatatbl5[128];
_anon11* lpKeepWork;
int tv_adr[192];
_anon10 SprBmp[700];
unsigned short sm_adr0[16384];
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
int(*sOpenFile)(char*);
void(*sPrintf)(char*, char*);
unsigned char spgmmode;
unsigned char pl_suu;
int game_score;
unsigned int extra_score;
unsigned char clrspflg_save;
unsigned char clrspflg;
unsigned char stagenm;
short plring_dmy;
int* lpFadeFlag;
unsigned int* hdatabuf;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk;
unsigned short* pmapwk;
void(*sOutputDebugString)(char*);
int(*sRandom)();
void(*sMemCpy)(void*, void*, int);
void(*sMemSet)(void*, unsigned char, int);
void(*WaveAllStop)();
void(*CDPause)(short);
void(*CDPlay)(short);
void(*WaveRequest)(short);
void(*ClrSpriteDebug)();
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
int(*SetGrid)(int, int, int, int, int);
_anon1 vscroll;
_anon1 scra_h_posiw;
_anon1 scrb_h_posiw;
unsigned short intmode;
unsigned char gmclrflg;
unsigned char pldeadflg;
unsigned char rlscrflg;
unsigned char rlscrflg_save;
_anon6 swdata1;
_anon1 spe_time;
_anon13 actwk[48];
unsigned char game_start;
short rufo_getnm;
unsigned char tcnt20;
unsigned char time_stop;
unsigned char ufoleft;
unsigned short ringno;
_anon1 overint;
unsigned char pauseflg;
unsigned char demoflg;
unsigned short sonicup_no;
short gmtime0;
unsigned char specialflg;
int scoreup_setm;
_anon6 swdata2;
unsigned short mp01[4];
unsigned short mp02[4];
unsigned short mp03[4];
unsigned short mp04[4];
unsigned short mp05[4];
unsigned short mp06[4];
unsigned short mp07[4];
unsigned short mp08[10];
unsigned short mp09[8];
unsigned short mp10[8];
unsigned short mp11[12];
unsigned short mp14[30];
unsigned short mp21[46];
unsigned short mp22[42];
unsigned short mp23[52];
_anon0 bwrtTbl[16];
unsigned char stone_timer;
tagPALETTEENTRY stone_color_set_tbl[40];
unsigned char intflg;
unsigned char SeToWavTbl[80];
unsigned int hdatabuf_l[128];
unsigned char hscrflg;
int hsdata0;
int hsdata1;
unsigned short hscrcnt4;
int hsdata2;
int hsdata5;
int hsdata3;
int hsdata4;
void(*hscrltbl)()[8];
short clchgcnt[4];
dlink_export ExportedFunctions;
_anon1 scrb_v_posiw;
_anon1 scra_v_posiw;
_anon1 hscroll;
_anon1* lphscrollbuff;
int(*sGetFileSize)(int);

void SetUseOk();
void m2mainchk();
void m2subset();
void DLL_meminit(char*** pBufTbl, void** pFuncTbl);
void DLL_memfree();
int Get_vscroll();
int Get_scra_h_posiw();
int Get_scrb_h_posiw();
int game();
int ufochk();
void game_clear();
void game_over();
void game_init();
void syspatchg();
void sdfdout();
void sdfdin();
void disp();
int disp_main();
void gsc_up20();
void gsc_up(int lScore);
short pause_chk();
void map_init();
void bwrtset(unsigned int tblno4);
void stone_color_set();
void panel_box();
void colset(tagPALETTEENTRY* lpPeSrc);
void sinit0();
void sinit1();
void sinit2();
void sinit3();
void sinit4();
void sinit5();
void sinit6();
void sinit7();
void stage_init();
void soundset(short ReqNo);
void sub_sync(short ReqNo);
void key_set(short ReqNo);
void SWdataSet(_anon6 sw1, _anon6 sw2);
void hscal_1();
void hscal_2();
void hscal0_0();
void hscal1_0();
void hscal2_0();
void hscal0(short* a0, short* a1, int d0, int d1, short d3, short d4, short d7);
void hscal0_4();
void hscal1_4();
void hscal2_4();
void hscal4(short* a0, short* a1, int* a2, short d0, short d7);
void hscal0_5();
void hscal1_5();
void hscal2_5();
void hscal5(short* a0, char* a2, short d0, short d2, short d7);
void rlspd_get(int* d0, int* d1);
void hscrspd_get(int* lD0, int* lD1);
void hscrl0();
void hscrl1();
void hscrl2();
void hscrl3();
void hscrl4();
void hscrl5();
void hscrl6();
void hscrl7();
void hscal();
void colchg0();
void colchg1();
void colchg2();
void colchg3();
void colchg4();
void colchg5();
void colchg6();
void colchg7();
void color_change();

// 
// Start address: 0x1005100
void SetUseOk()
{
	// Line 135, Address: 0x1005100, Func Offset: 0
	// Line 136, Address: 0x1005104, Func Offset: 0x4
	// Func End, Address: 0x1005110, Func Offset: 0x10
}

// 
// Start address: 0x1005110
void m2mainchk()
{
	// Line 378, Address: 0x1005110, Func Offset: 0
	// Func End, Address: 0x1005118, Func Offset: 0x8
}

// 
// Start address: 0x1005120
void m2subset()
{
	// Line 382, Address: 0x1005120, Func Offset: 0
	// Func End, Address: 0x1005128, Func Offset: 0x8
}

// 
// Start address: 0x1005130
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	unsigned int hf;
	char fn[80];
	// Line 392, Address: 0x1005130, Func Offset: 0
	// Line 398, Address: 0x1005144, Func Offset: 0x14
	// Line 399, Address: 0x100515c, Func Offset: 0x2c
	// Line 400, Address: 0x1005174, Func Offset: 0x44
	// Line 401, Address: 0x100518c, Func Offset: 0x5c
	// Line 402, Address: 0x10051a4, Func Offset: 0x74
	// Line 403, Address: 0x10051bc, Func Offset: 0x8c
	// Line 404, Address: 0x10051d4, Func Offset: 0xa4
	// Line 405, Address: 0x10051e0, Func Offset: 0xb0
	// Line 406, Address: 0x10051ec, Func Offset: 0xbc
	// Line 407, Address: 0x10051f8, Func Offset: 0xc8
	// Line 408, Address: 0x1005204, Func Offset: 0xd4
	// Line 410, Address: 0x100521c, Func Offset: 0xec
	// Line 411, Address: 0x1005228, Func Offset: 0xf8
	// Line 412, Address: 0x1005234, Func Offset: 0x104
	// Line 413, Address: 0x100524c, Func Offset: 0x11c
	// Line 414, Address: 0x1005264, Func Offset: 0x134
	// Line 415, Address: 0x1005270, Func Offset: 0x140
	// Line 416, Address: 0x1005288, Func Offset: 0x158
	// Line 417, Address: 0x1005294, Func Offset: 0x164
	// Line 418, Address: 0x10052a0, Func Offset: 0x170
	// Line 419, Address: 0x10052ac, Func Offset: 0x17c
	// Line 420, Address: 0x10052c4, Func Offset: 0x194
	// Line 421, Address: 0x10052dc, Func Offset: 0x1ac
	// Line 422, Address: 0x10052f4, Func Offset: 0x1c4
	// Line 423, Address: 0x100530c, Func Offset: 0x1dc
	// Line 424, Address: 0x1005324, Func Offset: 0x1f4
	// Line 430, Address: 0x1005330, Func Offset: 0x200
	// Line 431, Address: 0x100534c, Func Offset: 0x21c
	// Line 432, Address: 0x1005368, Func Offset: 0x238
	// Line 433, Address: 0x1005384, Func Offset: 0x254
	// Line 434, Address: 0x10053a0, Func Offset: 0x270
	// Line 435, Address: 0x10053bc, Func Offset: 0x28c
	// Line 436, Address: 0x10053d8, Func Offset: 0x2a8
	// Line 437, Address: 0x10053f0, Func Offset: 0x2c0
	// Line 439, Address: 0x1005408, Func Offset: 0x2d8
	// Line 440, Address: 0x100541c, Func Offset: 0x2ec
	// Line 441, Address: 0x1005430, Func Offset: 0x300
	// Line 442, Address: 0x1005444, Func Offset: 0x314
	// Line 443, Address: 0x1005458, Func Offset: 0x328
	// Line 444, Address: 0x100546c, Func Offset: 0x33c
	// Line 445, Address: 0x1005480, Func Offset: 0x350
	// Line 447, Address: 0x1005494, Func Offset: 0x364
	// Line 448, Address: 0x100549c, Func Offset: 0x36c
	// Line 449, Address: 0x10054b0, Func Offset: 0x380
	// Line 454, Address: 0x10054c4, Func Offset: 0x394
	// Line 455, Address: 0x10054f0, Func Offset: 0x3c0
	// Line 456, Address: 0x1005508, Func Offset: 0x3d8
	// Line 457, Address: 0x1005528, Func Offset: 0x3f8
	// Line 459, Address: 0x100553c, Func Offset: 0x40c
	// Line 460, Address: 0x1005550, Func Offset: 0x420
	// Line 461, Address: 0x1005564, Func Offset: 0x434
	// Line 463, Address: 0x1005578, Func Offset: 0x448
	// Func End, Address: 0x100558c, Func Offset: 0x45c
}

// 
// Start address: 0x1005590
void DLL_memfree()
{
	// Line 467, Address: 0x1005590, Func Offset: 0
	// Func End, Address: 0x1005598, Func Offset: 0x8
}

// 
// Start address: 0x10055a0
int Get_vscroll()
{
	// Line 471, Address: 0x10055a0, Func Offset: 0
	// Line 472, Address: 0x10055a8, Func Offset: 0x8
	// Func End, Address: 0x10055b0, Func Offset: 0x10
}

// 
// Start address: 0x10055b0
int Get_scra_h_posiw()
{
	// Line 475, Address: 0x10055b0, Func Offset: 0
	// Line 476, Address: 0x10055b8, Func Offset: 0x8
	// Func End, Address: 0x10055c0, Func Offset: 0x10
}

// 
// Start address: 0x10055c0
int Get_scrb_h_posiw()
{
	// Line 479, Address: 0x10055c0, Func Offset: 0
	// Line 480, Address: 0x10055c8, Func Offset: 0x8
	// Func End, Address: 0x10055d0, Func Offset: 0x10
}

// 
// Start address: 0x10055d0
int game()
{
	int i;
	// Line 484, Address: 0x10055d0, Func Offset: 0
	// Line 487, Address: 0x10055dc, Func Offset: 0xc
	// Line 488, Address: 0x1005608, Func Offset: 0x38
	// Line 489, Address: 0x100561c, Func Offset: 0x4c
	// Line 490, Address: 0x1005630, Func Offset: 0x60
	// Line 491, Address: 0x1005638, Func Offset: 0x68
	// Line 492, Address: 0x100564c, Func Offset: 0x7c
	// Line 493, Address: 0x1005664, Func Offset: 0x94
	// Line 495, Address: 0x1005680, Func Offset: 0xb0
	// Line 500, Address: 0x1005694, Func Offset: 0xc4
	// Line 501, Address: 0x10056a8, Func Offset: 0xd8
	// Line 503, Address: 0x10056ec, Func Offset: 0x11c
	// Line 504, Address: 0x10056fc, Func Offset: 0x12c
	// Line 505, Address: 0x1005704, Func Offset: 0x134
	// Line 506, Address: 0x100571c, Func Offset: 0x14c
	// Line 508, Address: 0x1005728, Func Offset: 0x158
	// Line 510, Address: 0x1005734, Func Offset: 0x164
	// Line 511, Address: 0x1005740, Func Offset: 0x170
	// Line 513, Address: 0x1005750, Func Offset: 0x180
	// Line 514, Address: 0x1005764, Func Offset: 0x194
	// Line 515, Address: 0x1005778, Func Offset: 0x1a8
	// Line 516, Address: 0x100578c, Func Offset: 0x1bc
	// Line 517, Address: 0x100579c, Func Offset: 0x1cc
	// Line 519, Address: 0x10057a4, Func Offset: 0x1d4
	// Line 520, Address: 0x10057b4, Func Offset: 0x1e4
	// Line 521, Address: 0x10057bc, Func Offset: 0x1ec
	// Line 522, Address: 0x10057c4, Func Offset: 0x1f4
	// Line 523, Address: 0x10057cc, Func Offset: 0x1fc
	// Line 524, Address: 0x10057d4, Func Offset: 0x204
	// Line 526, Address: 0x10057e0, Func Offset: 0x210
	// Line 527, Address: 0x10057f0, Func Offset: 0x220
	// Line 528, Address: 0x1005804, Func Offset: 0x234
	// Line 530, Address: 0x1005810, Func Offset: 0x240
	// Line 532, Address: 0x1005820, Func Offset: 0x250
	// Line 533, Address: 0x1005854, Func Offset: 0x284
	// Line 534, Address: 0x1005884, Func Offset: 0x2b4
	// Line 535, Address: 0x10058a4, Func Offset: 0x2d4
	// Line 536, Address: 0x10058b8, Func Offset: 0x2e8
	// Line 538, Address: 0x10058c4, Func Offset: 0x2f4
	// Line 543, Address: 0x10058d0, Func Offset: 0x300
	// Line 544, Address: 0x10058e8, Func Offset: 0x318
	// Line 546, Address: 0x1005904, Func Offset: 0x334
	// Line 547, Address: 0x1005914, Func Offset: 0x344
	// Line 548, Address: 0x1005928, Func Offset: 0x358
	// Line 549, Address: 0x1005938, Func Offset: 0x368
	// Line 550, Address: 0x100594c, Func Offset: 0x37c
	// Line 551, Address: 0x1005960, Func Offset: 0x390
	// Line 554, Address: 0x100596c, Func Offset: 0x39c
	// Line 556, Address: 0x1005988, Func Offset: 0x3b8
	// Line 557, Address: 0x10059a0, Func Offset: 0x3d0
	// Line 558, Address: 0x10059b8, Func Offset: 0x3e8
	// Line 559, Address: 0x10059c8, Func Offset: 0x3f8
	// Line 560, Address: 0x10059dc, Func Offset: 0x40c
	// Line 561, Address: 0x10059ec, Func Offset: 0x41c
	// Line 569, Address: 0x10059f8, Func Offset: 0x428
	// Line 570, Address: 0x1005a08, Func Offset: 0x438
	// Line 578, Address: 0x1005a10, Func Offset: 0x440
	// Line 579, Address: 0x1005a18, Func Offset: 0x448
	// Line 580, Address: 0x1005a20, Func Offset: 0x450
	// Line 581, Address: 0x1005a28, Func Offset: 0x458
	// Line 582, Address: 0x1005a30, Func Offset: 0x460
	// Line 583, Address: 0x1005a48, Func Offset: 0x478
	// Line 584, Address: 0x1005a50, Func Offset: 0x480
	// Line 585, Address: 0x1005a78, Func Offset: 0x4a8
	// Line 587, Address: 0x1005a84, Func Offset: 0x4b4
	// Line 588, Address: 0x1005a94, Func Offset: 0x4c4
	// Line 589, Address: 0x1005a9c, Func Offset: 0x4cc
	// Line 590, Address: 0x1005aa4, Func Offset: 0x4d4
	// Line 591, Address: 0x1005abc, Func Offset: 0x4ec
	// Line 592, Address: 0x1005acc, Func Offset: 0x4fc
	// Line 594, Address: 0x1005ad8, Func Offset: 0x508
	// Line 595, Address: 0x1005ae8, Func Offset: 0x518
	// Line 598, Address: 0x1005af4, Func Offset: 0x524
	// Line 599, Address: 0x1005b04, Func Offset: 0x534
	// Line 600, Address: 0x1005b0c, Func Offset: 0x53c
	// Line 601, Address: 0x1005b14, Func Offset: 0x544
	// Line 602, Address: 0x1005b24, Func Offset: 0x554
	// Line 604, Address: 0x1005b30, Func Offset: 0x560
	// Line 605, Address: 0x1005b38, Func Offset: 0x568
	// Line 606, Address: 0x1005b40, Func Offset: 0x570
	// Line 607, Address: 0x1005b48, Func Offset: 0x578
	// Line 608, Address: 0x1005b50, Func Offset: 0x580
	// Line 609, Address: 0x1005b58, Func Offset: 0x588
	// Line 610, Address: 0x1005b60, Func Offset: 0x590
	// Line 612, Address: 0x1005b68, Func Offset: 0x598
	// Line 613, Address: 0x1005b6c, Func Offset: 0x59c
	// Func End, Address: 0x1005b80, Func Offset: 0x5b0
}

// 
// Start address: 0x1005b80
int ufochk()
{
	int i;
	// Line 616, Address: 0x1005b80, Func Offset: 0
	// Line 619, Address: 0x1005b88, Func Offset: 0x8
	// Line 620, Address: 0x1005b94, Func Offset: 0x14
	// Line 621, Address: 0x1005bc8, Func Offset: 0x48
	// Line 622, Address: 0x1005bd8, Func Offset: 0x58
	// Line 623, Address: 0x1005bdc, Func Offset: 0x5c
	// Func End, Address: 0x1005bec, Func Offset: 0x6c
}

// 
// Start address: 0x1005bf0
void game_clear()
{
	// Line 626, Address: 0x1005bf0, Func Offset: 0
	// Line 627, Address: 0x1005bf8, Func Offset: 0x8
	// Line 628, Address: 0x1005c24, Func Offset: 0x34
	// Line 629, Address: 0x1005c38, Func Offset: 0x48
	// Line 630, Address: 0x1005c40, Func Offset: 0x50
	// Func End, Address: 0x1005c50, Func Offset: 0x60
}

// 
// Start address: 0x1005c50
void game_over()
{
	unsigned char d0;
	// Line 633, Address: 0x1005c50, Func Offset: 0
	// Line 640, Address: 0x1005c58, Func Offset: 0x8
	// Line 642, Address: 0x1005c64, Func Offset: 0x14
	// Line 643, Address: 0x1005c6c, Func Offset: 0x1c
	// Line 644, Address: 0x1005c7c, Func Offset: 0x2c
	// Line 646, Address: 0x1005c80, Func Offset: 0x30
	// Line 649, Address: 0x1005c98, Func Offset: 0x48
	// Line 655, Address: 0x1005cbc, Func Offset: 0x6c
	// Func End, Address: 0x1005ccc, Func Offset: 0x7c
}

// 
// Start address: 0x1005cd0
void game_init()
{
	tagPALETTEENTRY* lpPeDest;
	int i;
	// Line 668, Address: 0x1005cd0, Func Offset: 0
	// Line 674, Address: 0x1005ce0, Func Offset: 0x10
	// Line 676, Address: 0x1005cec, Func Offset: 0x1c
	// Line 679, Address: 0x1005d0c, Func Offset: 0x3c
	// Line 680, Address: 0x1005d14, Func Offset: 0x44
	// Line 681, Address: 0x1005d20, Func Offset: 0x50
	// Line 683, Address: 0x1005d68, Func Offset: 0x98
	// Line 690, Address: 0x1005d70, Func Offset: 0xa0
	// Line 691, Address: 0x1005d7c, Func Offset: 0xac
	// Line 692, Address: 0x1005d88, Func Offset: 0xb8
	// Line 696, Address: 0x1005d90, Func Offset: 0xc0
	// Line 697, Address: 0x1005d98, Func Offset: 0xc8
	// Line 698, Address: 0x1005da0, Func Offset: 0xd0
	// Line 702, Address: 0x1005dac, Func Offset: 0xdc
	// Line 704, Address: 0x1005db4, Func Offset: 0xe4
	// Line 705, Address: 0x1005dbc, Func Offset: 0xec
	// Line 707, Address: 0x1005dc4, Func Offset: 0xf4
	// Line 708, Address: 0x1005dd0, Func Offset: 0x100
	// Line 709, Address: 0x1005ddc, Func Offset: 0x10c
	// Line 710, Address: 0x1005de8, Func Offset: 0x118
	// Line 712, Address: 0x1005df4, Func Offset: 0x124
	// Line 714, Address: 0x1005dfc, Func Offset: 0x12c
	// Line 715, Address: 0x1005e08, Func Offset: 0x138
	// Line 716, Address: 0x1005e14, Func Offset: 0x144
	// Line 718, Address: 0x1005e20, Func Offset: 0x150
	// Line 719, Address: 0x1005e38, Func Offset: 0x168
	// Line 722, Address: 0x1005e44, Func Offset: 0x174
	// Line 724, Address: 0x1005e58, Func Offset: 0x188
	// Func End, Address: 0x1005e70, Func Offset: 0x1a0
}

// 
// Start address: 0x1005e70
void syspatchg()
{
	// Line 752, Address: 0x1005e70, Func Offset: 0
	// Func End, Address: 0x1005e78, Func Offset: 0x8
}

// 
// Start address: 0x1005e80
void sdfdout()
{
	// Line 756, Address: 0x1005e80, Func Offset: 0
	// Line 757, Address: 0x1005e88, Func Offset: 0x8
	// Line 767, Address: 0x1005e94, Func Offset: 0x14
	// Func End, Address: 0x1005ea4, Func Offset: 0x24
}

// 
// Start address: 0x1005eb0
void sdfdin()
{
	// Line 781, Address: 0x1005eb0, Func Offset: 0
	// Func End, Address: 0x1005eb8, Func Offset: 0x8
}

// 
// Start address: 0x1005ec0
void disp()
{
	short i;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	// Line 795, Address: 0x1005ec0, Func Offset: 0
	// Line 799, Address: 0x1005ed4, Func Offset: 0x14
	// Line 800, Address: 0x1005ef4, Func Offset: 0x34
	// Line 802, Address: 0x1005f10, Func Offset: 0x50
	// Line 803, Address: 0x1005f18, Func Offset: 0x58
	// Line 807, Address: 0x1005f20, Func Offset: 0x60
	// Line 809, Address: 0x1005f30, Func Offset: 0x70
	// Line 810, Address: 0x1005f38, Func Offset: 0x78
	// Line 811, Address: 0x1005f40, Func Offset: 0x80
	// Line 812, Address: 0x1005f4c, Func Offset: 0x8c
	// Line 813, Address: 0x1005f7c, Func Offset: 0xbc
	// Line 815, Address: 0x1005f9c, Func Offset: 0xdc
	// Line 816, Address: 0x1005fa4, Func Offset: 0xe4
	// Line 817, Address: 0x1005fac, Func Offset: 0xec
	// Line 818, Address: 0x1005fb4, Func Offset: 0xf4
	// Line 819, Address: 0x1005fc0, Func Offset: 0x100
	// Line 821, Address: 0x1005fc8, Func Offset: 0x108
	// Func End, Address: 0x1005fe4, Func Offset: 0x124
}

// 
// Start address: 0x1005ff0
int disp_main()
{
	// Line 833, Address: 0x1005ff0, Func Offset: 0
	// Line 834, Address: 0x1005ff8, Func Offset: 0x8
	// Line 836, Address: 0x1006010, Func Offset: 0x20
	// Line 837, Address: 0x1006018, Func Offset: 0x28
	// Line 838, Address: 0x100602c, Func Offset: 0x3c
	// Line 839, Address: 0x1006034, Func Offset: 0x44
	// Line 842, Address: 0x100604c, Func Offset: 0x5c
	// Line 843, Address: 0x1006060, Func Offset: 0x70
	// Line 846, Address: 0x1006068, Func Offset: 0x78
	// Line 848, Address: 0x100607c, Func Offset: 0x8c
	// Line 850, Address: 0x10060a0, Func Offset: 0xb0
	// Line 851, Address: 0x10060c0, Func Offset: 0xd0
	// Line 853, Address: 0x10060cc, Func Offset: 0xdc
	// Line 857, Address: 0x10060d8, Func Offset: 0xe8
	// Line 860, Address: 0x1006108, Func Offset: 0x118
	// Line 863, Address: 0x1006124, Func Offset: 0x134
	// Line 864, Address: 0x1006134, Func Offset: 0x144
	// Line 865, Address: 0x1006140, Func Offset: 0x150
	// Line 866, Address: 0x1006148, Func Offset: 0x158
	// Line 867, Address: 0x100614c, Func Offset: 0x15c
	// Func End, Address: 0x100615c, Func Offset: 0x16c
}

// 
// Start address: 0x1006160
void gsc_up20()
{
	// Line 881, Address: 0x1006160, Func Offset: 0
	// Line 883, Address: 0x1006168, Func Offset: 0x8
	// Line 884, Address: 0x1006190, Func Offset: 0x30
	// Line 885, Address: 0x100619c, Func Offset: 0x3c
	// Line 886, Address: 0x10061a8, Func Offset: 0x48
	// Func End, Address: 0x10061b8, Func Offset: 0x58
}

// 
// Start address: 0x10061c0
void gsc_up(int lScore)
{
	// Line 888, Address: 0x10061c0, Func Offset: 0
	// Line 891, Address: 0x10061cc, Func Offset: 0xc
	// Line 894, Address: 0x10061e0, Func Offset: 0x20
	// Line 896, Address: 0x10061e8, Func Offset: 0x28
	// Line 897, Address: 0x10061fc, Func Offset: 0x3c
	// Line 898, Address: 0x1006210, Func Offset: 0x50
	// Line 899, Address: 0x1006224, Func Offset: 0x64
	// Line 900, Address: 0x1006234, Func Offset: 0x74
	// Line 901, Address: 0x1006240, Func Offset: 0x80
	// Line 902, Address: 0x1006258, Func Offset: 0x98
	// Line 903, Address: 0x1006264, Func Offset: 0xa4
	// Line 905, Address: 0x100627c, Func Offset: 0xbc
	// Line 906, Address: 0x1006288, Func Offset: 0xc8
	// Line 907, Address: 0x10062a4, Func Offset: 0xe4
	// Line 909, Address: 0x10062b4, Func Offset: 0xf4
	// Func End, Address: 0x10062c4, Func Offset: 0x104
}

// 
// Start address: 0x10062d0
short pause_chk()
{
	// Line 921, Address: 0x10062d0, Func Offset: 0
	// Line 923, Address: 0x10062d8, Func Offset: 0x8
	// Line 924, Address: 0x10062f0, Func Offset: 0x20
	// Line 926, Address: 0x1006308, Func Offset: 0x38
	// Line 927, Address: 0x1006320, Func Offset: 0x50
	// Line 928, Address: 0x1006338, Func Offset: 0x68
	// Line 929, Address: 0x1006348, Func Offset: 0x78
	// Line 930, Address: 0x100635c, Func Offset: 0x8c
	// Line 931, Address: 0x1006364, Func Offset: 0x94
	// Line 935, Address: 0x1006370, Func Offset: 0xa0
	// Line 936, Address: 0x1006384, Func Offset: 0xb4
	// Line 937, Address: 0x1006398, Func Offset: 0xc8
	// Line 941, Address: 0x10063a4, Func Offset: 0xd4
	// Line 945, Address: 0x10063b0, Func Offset: 0xe0
	// Line 947, Address: 0x10063c8, Func Offset: 0xf8
	// Line 948, Address: 0x10063e0, Func Offset: 0x110
	// Line 949, Address: 0x1006404, Func Offset: 0x134
	// Line 950, Address: 0x1006418, Func Offset: 0x148
	// Line 951, Address: 0x100642c, Func Offset: 0x15c
	// Line 957, Address: 0x1006438, Func Offset: 0x168
	// Line 959, Address: 0x100643c, Func Offset: 0x16c
	// Func End, Address: 0x100644c, Func Offset: 0x17c
}

// 
// Start address: 0x1006450
void map_init()
{
	unsigned int d5;
	int i;
	// Line 976, Address: 0x1006450, Func Offset: 0
	// Line 980, Address: 0x1006460, Func Offset: 0x10
	// Line 981, Address: 0x1006470, Func Offset: 0x20
	// Line 982, Address: 0x1006494, Func Offset: 0x44
	// Line 983, Address: 0x1006498, Func Offset: 0x48
	// Line 985, Address: 0x10064a0, Func Offset: 0x50
	// Line 987, Address: 0x10064a4, Func Offset: 0x54
	// Line 989, Address: 0x10064b0, Func Offset: 0x60
	// Line 991, Address: 0x10064bc, Func Offset: 0x6c
	// Line 992, Address: 0x10064dc, Func Offset: 0x8c
	// Line 994, Address: 0x10064e8, Func Offset: 0x98
	// Line 995, Address: 0x10064f8, Func Offset: 0xa8
	// Line 996, Address: 0x1006508, Func Offset: 0xb8
	// Line 998, Address: 0x1006514, Func Offset: 0xc4
	// Func End, Address: 0x100652c, Func Offset: 0xdc
}

// 
// Start address: 0x1006530
void bwrtset(unsigned int tblno4)
{
	int i;
	int xbase;
	int ybase;
	int x;
	int y;
	int tileno;
	unsigned short col;
	unsigned short tblno;
	// Line 1101, Address: 0x1006530, Func Offset: 0
	// Line 1108, Address: 0x100655c, Func Offset: 0x2c
	// Line 1109, Address: 0x1006574, Func Offset: 0x44
	// Line 1110, Address: 0x100657c, Func Offset: 0x4c
	// Line 1111, Address: 0x1006584, Func Offset: 0x54
	// Line 1112, Address: 0x10065c4, Func Offset: 0x94
	// Line 1113, Address: 0x1006600, Func Offset: 0xd0
	// Line 1114, Address: 0x1006604, Func Offset: 0xd4
	// Line 1115, Address: 0x1006610, Func Offset: 0xe0
	// Line 1116, Address: 0x100661c, Func Offset: 0xec
	// Line 1117, Address: 0x1006650, Func Offset: 0x120
	// Line 1118, Address: 0x100668c, Func Offset: 0x15c
	// Line 1119, Address: 0x1006690, Func Offset: 0x160
	// Line 1120, Address: 0x10066a0, Func Offset: 0x170
	// Line 1121, Address: 0x10066a4, Func Offset: 0x174
	// Line 1122, Address: 0x10066ac, Func Offset: 0x17c
	// Line 1123, Address: 0x10066bc, Func Offset: 0x18c
	// Line 1124, Address: 0x10066c0, Func Offset: 0x190
	// Line 1125, Address: 0x10066c8, Func Offset: 0x198
	// Line 1126, Address: 0x10066d8, Func Offset: 0x1a8
	// Line 1128, Address: 0x10066dc, Func Offset: 0x1ac
	// Line 1129, Address: 0x1006700, Func Offset: 0x1d0
	// Line 1130, Address: 0x1006734, Func Offset: 0x204
	// Line 1135, Address: 0x1006768, Func Offset: 0x238
	// Line 1136, Address: 0x1006774, Func Offset: 0x244
	// Line 1138, Address: 0x100677c, Func Offset: 0x24c
	// Func End, Address: 0x10067ac, Func Offset: 0x27c
}

// 
// Start address: 0x10067b0
void stone_color_set()
{
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	short i;
	// Line 1162, Address: 0x10067b0, Func Offset: 0
	// Line 1166, Address: 0x10067c0, Func Offset: 0x10
	// Line 1167, Address: 0x10067d4, Func Offset: 0x24
	// Line 1168, Address: 0x10067e8, Func Offset: 0x38
	// Line 1171, Address: 0x100680c, Func Offset: 0x5c
	// Line 1172, Address: 0x1006834, Func Offset: 0x84
	// Line 1173, Address: 0x1006840, Func Offset: 0x90
	// Line 1174, Address: 0x100684c, Func Offset: 0x9c
	// Line 1175, Address: 0x100687c, Func Offset: 0xcc
	// Line 1183, Address: 0x100689c, Func Offset: 0xec
	// Line 1185, Address: 0x10068b0, Func Offset: 0x100
	// Func End, Address: 0x10068c8, Func Offset: 0x118
}

// 
// Start address: 0x10068d0
void panel_box()
{
	// Line 1201, Address: 0x10068d0, Func Offset: 0
	// Func End, Address: 0x10068d8, Func Offset: 0x8
}

// 
// Start address: 0x10068e0
void colset(tagPALETTEENTRY* lpPeSrc)
{
	tagPALETTEENTRY* lpPeDest;
	int i;
	// Line 1204, Address: 0x10068e0, Func Offset: 0
	// Line 1208, Address: 0x10068f0, Func Offset: 0x10
	// Line 1209, Address: 0x10068fc, Func Offset: 0x1c
	// Line 1210, Address: 0x1006908, Func Offset: 0x28
	// Line 1211, Address: 0x100693c, Func Offset: 0x5c
	// Line 1213, Address: 0x100694c, Func Offset: 0x6c
	// Func End, Address: 0x1006960, Func Offset: 0x80
}

// 
// Start address: 0x1006960
void sinit0()
{
	// Line 1216, Address: 0x1006960, Func Offset: 0
	// Line 1220, Address: 0x1006968, Func Offset: 0x8
	// Line 1222, Address: 0x1006970, Func Offset: 0x10
	// Line 1223, Address: 0x1006980, Func Offset: 0x20
	// Func End, Address: 0x1006990, Func Offset: 0x30
}

// 
// Start address: 0x1006990
void sinit1()
{
	// Line 1225, Address: 0x1006990, Func Offset: 0
	// Line 1226, Address: 0x1006998, Func Offset: 0x8
	// Line 1228, Address: 0x10069a0, Func Offset: 0x10
	// Line 1229, Address: 0x10069b0, Func Offset: 0x20
	// Func End, Address: 0x10069c0, Func Offset: 0x30
}

// 
// Start address: 0x10069c0
void sinit2()
{
	// Line 1231, Address: 0x10069c0, Func Offset: 0
	// Line 1232, Address: 0x10069c8, Func Offset: 0x8
	// Line 1234, Address: 0x10069d0, Func Offset: 0x10
	// Line 1235, Address: 0x10069e0, Func Offset: 0x20
	// Func End, Address: 0x10069f0, Func Offset: 0x30
}

// 
// Start address: 0x10069f0
void sinit3()
{
	// Line 1237, Address: 0x10069f0, Func Offset: 0
	// Line 1238, Address: 0x10069f8, Func Offset: 0x8
	// Line 1240, Address: 0x1006a00, Func Offset: 0x10
	// Line 1241, Address: 0x1006a10, Func Offset: 0x20
	// Func End, Address: 0x1006a20, Func Offset: 0x30
}

// 
// Start address: 0x1006a20
void sinit4()
{
	short i;
	// Line 1243, Address: 0x1006a20, Func Offset: 0
	// Line 1246, Address: 0x1006a2c, Func Offset: 0xc
	// Line 1248, Address: 0x1006a34, Func Offset: 0x14
	// Line 1250, Address: 0x1006a44, Func Offset: 0x24
	// Line 1251, Address: 0x1006a90, Func Offset: 0x70
	// Func End, Address: 0x1006aa4, Func Offset: 0x84
}

// 
// Start address: 0x1006ab0
void sinit5()
{
	// Line 1253, Address: 0x1006ab0, Func Offset: 0
	// Line 1254, Address: 0x1006ab8, Func Offset: 0x8
	// Line 1256, Address: 0x1006ac0, Func Offset: 0x10
	// Line 1257, Address: 0x1006ad0, Func Offset: 0x20
	// Func End, Address: 0x1006ae0, Func Offset: 0x30
}

// 
// Start address: 0x1006ae0
void sinit6()
{
	// Line 1259, Address: 0x1006ae0, Func Offset: 0
	// Line 1260, Address: 0x1006ae8, Func Offset: 0x8
	// Line 1262, Address: 0x1006af0, Func Offset: 0x10
	// Line 1263, Address: 0x1006b00, Func Offset: 0x20
	// Func End, Address: 0x1006b10, Func Offset: 0x30
}

// 
// Start address: 0x1006b10
void sinit7()
{
	// Line 1265, Address: 0x1006b10, Func Offset: 0
	// Line 1266, Address: 0x1006b18, Func Offset: 0x8
	// Line 1268, Address: 0x1006b20, Func Offset: 0x10
	// Line 1269, Address: 0x1006b30, Func Offset: 0x20
	// Func End, Address: 0x1006b40, Func Offset: 0x30
}

// 
// Start address: 0x1006b40
void stage_init()
{
	void(*jptbl)()[8];
	// Line 1272, Address: 0x1006b40, Func Offset: 0
	// Line 1273, Address: 0x1006b48, Func Offset: 0x8
	// Line 1277, Address: 0x1006b7c, Func Offset: 0x3c
	// Line 1278, Address: 0x1006b9c, Func Offset: 0x5c
	// Func End, Address: 0x1006bac, Func Offset: 0x6c
}

// 
// Start address: 0x1006bb0
void soundset(short ReqNo)
{
	// Line 1303, Address: 0x1006bb0, Func Offset: 0
	// Line 1304, Address: 0x1006bbc, Func Offset: 0xc
	// Line 1308, Address: 0x1006bd4, Func Offset: 0x24
	// Line 1309, Address: 0x1006be0, Func Offset: 0x30
	// Line 1311, Address: 0x1006c0c, Func Offset: 0x5c
	// Line 1312, Address: 0x1006c20, Func Offset: 0x70
	// Func End, Address: 0x1006c30, Func Offset: 0x80
}

// 
// Start address: 0x1006c30
void sub_sync(short ReqNo)
{
	// Line 1317, Address: 0x1006c30, Func Offset: 0
	// Line 1322, Address: 0x1006c3c, Func Offset: 0xc
	// Line 1323, Address: 0x1006c6c, Func Offset: 0x3c
	// Line 1324, Address: 0x1006c94, Func Offset: 0x64
	// Line 1325, Address: 0x1006c9c, Func Offset: 0x6c
	// Line 1326, Address: 0x1006ccc, Func Offset: 0x9c
	// Line 1327, Address: 0x1006cf4, Func Offset: 0xc4
	// Line 1328, Address: 0x1006cfc, Func Offset: 0xcc
	// Line 1329, Address: 0x1006d2c, Func Offset: 0xfc
	// Line 1330, Address: 0x1006d54, Func Offset: 0x124
	// Line 1331, Address: 0x1006d5c, Func Offset: 0x12c
	// Line 1332, Address: 0x1006d74, Func Offset: 0x144
	// Line 1333, Address: 0x1006d88, Func Offset: 0x158
	// Line 1334, Address: 0x1006d90, Func Offset: 0x160
	// Line 1335, Address: 0x1006dc0, Func Offset: 0x190
	// Line 1336, Address: 0x1006de8, Func Offset: 0x1b8
	// Line 1337, Address: 0x1006e08, Func Offset: 0x1d8
	// Line 1339, Address: 0x1006e1c, Func Offset: 0x1ec
	// Func End, Address: 0x1006e2c, Func Offset: 0x1fc
}

// 
// Start address: 0x1006e30
void key_set(short ReqNo)
{
	// Line 1342, Address: 0x1006e30, Func Offset: 0
	// Line 1343, Address: 0x1006e3c, Func Offset: 0xc
	// Line 1344, Address: 0x1006e48, Func Offset: 0x18
	// Func End, Address: 0x1006e58, Func Offset: 0x28
}

// 
// Start address: 0x1006e60
void SWdataSet(_anon6 sw1, _anon6 sw2)
{
	// Line 1349, Address: 0x1006e60, Func Offset: 0
	// Line 1350, Address: 0x1006e6c, Func Offset: 0xc
	// Line 1351, Address: 0x1006e78, Func Offset: 0x18
	// Line 1353, Address: 0x1006e84, Func Offset: 0x24
	// Func End, Address: 0x1006e90, Func Offset: 0x30
}

// 
// Start address: 0x1006e90
void hscal_1()
{
	// Line 1363, Address: 0x1006e90, Func Offset: 0
	// Line 1364, Address: 0x1006e98, Func Offset: 0x8
	// Line 1365, Address: 0x1006ea8, Func Offset: 0x18
	// Line 1366, Address: 0x1006ecc, Func Offset: 0x3c
	// Line 1367, Address: 0x1006ef4, Func Offset: 0x64
	// Line 1369, Address: 0x1006f14, Func Offset: 0x84
	// Func End, Address: 0x1006f24, Func Offset: 0x94
}

// 
// Start address: 0x1006f30
void hscal_2()
{
	// Line 1371, Address: 0x1006f30, Func Offset: 0
	// Line 1372, Address: 0x1006f38, Func Offset: 0x8
	// Line 1373, Address: 0x1006f48, Func Offset: 0x18
	// Line 1374, Address: 0x1006f6c, Func Offset: 0x3c
	// Line 1375, Address: 0x1006f94, Func Offset: 0x64
	// Line 1377, Address: 0x1006fb4, Func Offset: 0x84
	// Func End, Address: 0x1006fc4, Func Offset: 0x94
}

// 
// Start address: 0x1006fd0
void hscal0_0()
{
	int d0;
	int d1;
	short* a0;
	short* a1;
	short d3;
	short d4;
	short d7;
	// Line 1382, Address: 0x1006fd0, Func Offset: 0
	// Line 1387, Address: 0x1006fec, Func Offset: 0x1c
	// Line 1388, Address: 0x1006ff4, Func Offset: 0x24
	// Line 1389, Address: 0x1006ff8, Func Offset: 0x28
	// Line 1390, Address: 0x1007008, Func Offset: 0x38
	// Line 1391, Address: 0x1007020, Func Offset: 0x50
	// Line 1392, Address: 0x100702c, Func Offset: 0x5c
	// Line 1396, Address: 0x1007044, Func Offset: 0x74
	// Line 1397, Address: 0x1007054, Func Offset: 0x84
	// Line 1398, Address: 0x1007068, Func Offset: 0x98
	// Line 1399, Address: 0x1007080, Func Offset: 0xb0
	// Line 1400, Address: 0x100708c, Func Offset: 0xbc
	// Line 1402, Address: 0x1007098, Func Offset: 0xc8
	// Line 1405, Address: 0x10070a0, Func Offset: 0xd0
	// Line 1406, Address: 0x10070d0, Func Offset: 0x100
	// Line 1407, Address: 0x10070d8, Func Offset: 0x108
	// Line 1411, Address: 0x10070e0, Func Offset: 0x110
	// Line 1412, Address: 0x10070e8, Func Offset: 0x118
	// Line 1413, Address: 0x10070f0, Func Offset: 0x120
	// Line 1414, Address: 0x10070f8, Func Offset: 0x128
	// Line 1415, Address: 0x1007100, Func Offset: 0x130
	// Line 1416, Address: 0x1007104, Func Offset: 0x134
	// Line 1417, Address: 0x1007108, Func Offset: 0x138
	// Line 1418, Address: 0x1007114, Func Offset: 0x144
	// Line 1419, Address: 0x1007138, Func Offset: 0x168
	// Func End, Address: 0x100715c, Func Offset: 0x18c
}

// 
// Start address: 0x1007160
void hscal1_0()
{
	int d0;
	int d1;
	short* a0;
	short* a1;
	short d3;
	short d4;
	short d7;
	// Line 1422, Address: 0x1007160, Func Offset: 0
	// Line 1427, Address: 0x1007184, Func Offset: 0x24
	// Line 1428, Address: 0x1007190, Func Offset: 0x30
	// Line 1429, Address: 0x1007198, Func Offset: 0x38
	// Line 1430, Address: 0x100719c, Func Offset: 0x3c
	// Line 1431, Address: 0x10071a0, Func Offset: 0x40
	// Line 1432, Address: 0x10071bc, Func Offset: 0x5c
	// Line 1433, Address: 0x10071c0, Func Offset: 0x60
	// Line 1435, Address: 0x10071cc, Func Offset: 0x6c
	// Line 1436, Address: 0x10071f0, Func Offset: 0x90
	// Func End, Address: 0x100721c, Func Offset: 0xbc
}

// 
// Start address: 0x1007220
void hscal2_0()
{
	int d0;
	int d1;
	short* a0;
	short* a1;
	short d3;
	short d4;
	short d7;
	// Line 1438, Address: 0x1007220, Func Offset: 0
	// Line 1443, Address: 0x1007244, Func Offset: 0x24
	// Line 1444, Address: 0x1007250, Func Offset: 0x30
	// Line 1445, Address: 0x1007258, Func Offset: 0x38
	// Line 1446, Address: 0x100725c, Func Offset: 0x3c
	// Line 1447, Address: 0x1007260, Func Offset: 0x40
	// Line 1448, Address: 0x100727c, Func Offset: 0x5c
	// Line 1449, Address: 0x1007280, Func Offset: 0x60
	// Line 1451, Address: 0x100728c, Func Offset: 0x6c
	// Line 1452, Address: 0x10072b0, Func Offset: 0x90
	// Func End, Address: 0x10072dc, Func Offset: 0xbc
}

// 
// Start address: 0x10072e0
void hscal0(short* a0, short* a1, int d0, int d1, short d3, short d4, short d7)
{
	_anon1 d2;
	// Line 1455, Address: 0x10072e0, Func Offset: 0
	// Line 1458, Address: 0x1007300, Func Offset: 0x20
	// Line 1461, Address: 0x1007310, Func Offset: 0x30
	// Line 1462, Address: 0x1007324, Func Offset: 0x44
	// Line 1463, Address: 0x1007338, Func Offset: 0x58
	// Line 1464, Address: 0x1007344, Func Offset: 0x64
	// Line 1465, Address: 0x1007350, Func Offset: 0x70
	// Line 1466, Address: 0x1007360, Func Offset: 0x80
	// Line 1467, Address: 0x1007374, Func Offset: 0x94
	// Line 1468, Address: 0x1007388, Func Offset: 0xa8
	// Line 1469, Address: 0x1007398, Func Offset: 0xb8
	// Line 1470, Address: 0x10073bc, Func Offset: 0xdc
	// Line 1474, Address: 0x10073c4, Func Offset: 0xe4
	// Line 1475, Address: 0x10073d8, Func Offset: 0xf8
	// Line 1476, Address: 0x10073ec, Func Offset: 0x10c
	// Line 1477, Address: 0x10073f8, Func Offset: 0x118
	// Line 1478, Address: 0x1007404, Func Offset: 0x124
	// Line 1479, Address: 0x1007414, Func Offset: 0x134
	// Line 1480, Address: 0x1007428, Func Offset: 0x148
	// Line 1481, Address: 0x100743c, Func Offset: 0x15c
	// Line 1482, Address: 0x100744c, Func Offset: 0x16c
	// Line 1484, Address: 0x1007470, Func Offset: 0x190
	// Func End, Address: 0x100747c, Func Offset: 0x19c
}

// 
// Start address: 0x1007480
void hscal0_4()
{
	int d0;
	int d1;
	short* a0;
	short* a1;
	int* a2;
	short d7;
	// Line 1488, Address: 0x1007480, Func Offset: 0
	// Line 1494, Address: 0x1007498, Func Offset: 0x18
	// Line 1495, Address: 0x10074a0, Func Offset: 0x20
	// Line 1496, Address: 0x10074a4, Func Offset: 0x24
	// Line 1497, Address: 0x10074b4, Func Offset: 0x34
	// Line 1504, Address: 0x10074cc, Func Offset: 0x4c
	// Line 1505, Address: 0x10074d4, Func Offset: 0x54
	// Line 1507, Address: 0x10074ec, Func Offset: 0x6c
	// Line 1508, Address: 0x10074f8, Func Offset: 0x78
	// Line 1509, Address: 0x100750c, Func Offset: 0x8c
	// Line 1510, Address: 0x1007520, Func Offset: 0xa0
	// Line 1513, Address: 0x100753c, Func Offset: 0xbc
	// Line 1515, Address: 0x1007554, Func Offset: 0xd4
	// Line 1516, Address: 0x1007560, Func Offset: 0xe0
	// Line 1517, Address: 0x1007574, Func Offset: 0xf4
	// Line 1518, Address: 0x1007588, Func Offset: 0x108
	// Line 1521, Address: 0x10075a4, Func Offset: 0x124
	// Line 1522, Address: 0x10075ac, Func Offset: 0x12c
	// Line 1523, Address: 0x10075b4, Func Offset: 0x134
	// Line 1524, Address: 0x10075bc, Func Offset: 0x13c
	// Line 1525, Address: 0x10075c0, Func Offset: 0x140
	// Line 1528, Address: 0x10075cc, Func Offset: 0x14c
	// Line 1529, Address: 0x10075d4, Func Offset: 0x154
	// Line 1530, Address: 0x10075dc, Func Offset: 0x15c
	// Line 1531, Address: 0x10075e0, Func Offset: 0x160
	// Line 1532, Address: 0x10075e4, Func Offset: 0x164
	// Line 1533, Address: 0x1007608, Func Offset: 0x188
	// Line 1534, Address: 0x1007614, Func Offset: 0x194
	// Line 1535, Address: 0x1007630, Func Offset: 0x1b0
	// Func End, Address: 0x1007650, Func Offset: 0x1d0
}

// 
// Start address: 0x1007650
void hscal1_4()
{
	short* a0;
	short* a1;
	int* a2;
	short d7;
	// Line 1537, Address: 0x1007650, Func Offset: 0
	// Line 1542, Address: 0x1007668, Func Offset: 0x18
	// Line 1543, Address: 0x1007674, Func Offset: 0x24
	// Line 1544, Address: 0x100767c, Func Offset: 0x2c
	// Line 1546, Address: 0x1007684, Func Offset: 0x34
	// Line 1548, Address: 0x1007690, Func Offset: 0x40
	// Line 1549, Address: 0x10076bc, Func Offset: 0x6c
	// Func End, Address: 0x10076dc, Func Offset: 0x8c
}

// 
// Start address: 0x10076e0
void hscal2_4()
{
	short* a0;
	short* a1;
	int* a2;
	short d7;
	// Line 1551, Address: 0x10076e0, Func Offset: 0
	// Line 1556, Address: 0x10076f8, Func Offset: 0x18
	// Line 1557, Address: 0x1007704, Func Offset: 0x24
	// Line 1558, Address: 0x100770c, Func Offset: 0x2c
	// Line 1560, Address: 0x1007714, Func Offset: 0x34
	// Line 1562, Address: 0x1007720, Func Offset: 0x40
	// Line 1563, Address: 0x100774c, Func Offset: 0x6c
	// Func End, Address: 0x100776c, Func Offset: 0x8c
}

// 
// Start address: 0x1007770
void hscal4(short* a0, short* a1, int* a2, short d0, short d7)
{
	_anon1 d2;
	// Line 1566, Address: 0x1007770, Func Offset: 0
	// Line 1569, Address: 0x1007788, Func Offset: 0x18
	// Line 1572, Address: 0x10077a0, Func Offset: 0x30
	// Line 1573, Address: 0x10077b4, Func Offset: 0x44
	// Line 1574, Address: 0x10077c8, Func Offset: 0x58
	// Line 1575, Address: 0x10077dc, Func Offset: 0x6c
	// Line 1576, Address: 0x10077ec, Func Offset: 0x7c
	// Line 1577, Address: 0x1007810, Func Offset: 0xa0
	// Line 1579, Address: 0x1007818, Func Offset: 0xa8
	// Line 1580, Address: 0x100782c, Func Offset: 0xbc
	// Line 1584, Address: 0x100784c, Func Offset: 0xdc
	// Line 1585, Address: 0x1007860, Func Offset: 0xf0
	// Line 1586, Address: 0x1007874, Func Offset: 0x104
	// Line 1587, Address: 0x1007880, Func Offset: 0x110
	// Line 1588, Address: 0x100788c, Func Offset: 0x11c
	// Line 1589, Address: 0x10078a8, Func Offset: 0x138
	// Line 1590, Address: 0x10078bc, Func Offset: 0x14c
	// Line 1591, Address: 0x10078d0, Func Offset: 0x160
	// Line 1592, Address: 0x10078f4, Func Offset: 0x184
	// Line 1597, Address: 0x10078fc, Func Offset: 0x18c
	// Line 1598, Address: 0x1007910, Func Offset: 0x1a0
	// Line 1599, Address: 0x1007924, Func Offset: 0x1b4
	// Line 1600, Address: 0x1007930, Func Offset: 0x1c0
	// Line 1601, Address: 0x100793c, Func Offset: 0x1cc
	// Line 1602, Address: 0x1007958, Func Offset: 0x1e8
	// Line 1603, Address: 0x100796c, Func Offset: 0x1fc
	// Line 1604, Address: 0x1007980, Func Offset: 0x210
	// Line 1606, Address: 0x10079a4, Func Offset: 0x234
	// Func End, Address: 0x10079b0, Func Offset: 0x240
}

// 
// Start address: 0x10079b0
void hscal0_5()
{
	int d0;
	int d1;
	short* a0;
	char* a2;
	short d2;
	short d7;
	// Line 1611, Address: 0x10079b0, Func Offset: 0
	// Line 1617, Address: 0x10079c8, Func Offset: 0x18
	// Line 1618, Address: 0x10079d0, Func Offset: 0x20
	// Line 1619, Address: 0x10079d4, Func Offset: 0x24
	// Line 1620, Address: 0x10079e4, Func Offset: 0x34
	// Line 1622, Address: 0x10079fc, Func Offset: 0x4c
	// Line 1623, Address: 0x1007a04, Func Offset: 0x54
	// Line 1624, Address: 0x1007a0c, Func Offset: 0x5c
	// Line 1625, Address: 0x1007a10, Func Offset: 0x60
	// Line 1626, Address: 0x1007a20, Func Offset: 0x70
	// Line 1627, Address: 0x1007a2c, Func Offset: 0x7c
	// Line 1628, Address: 0x1007a38, Func Offset: 0x88
	// Line 1629, Address: 0x1007a40, Func Offset: 0x90
	// Line 1631, Address: 0x1007a4c, Func Offset: 0x9c
	// Line 1632, Address: 0x1007a68, Func Offset: 0xb8
	// Func End, Address: 0x1007a88, Func Offset: 0xd8
}

// 
// Start address: 0x1007a90
void hscal1_5()
{
	short* a0;
	char* a2;
	short d2;
	short d7;
	// Line 1634, Address: 0x1007a90, Func Offset: 0
	// Line 1639, Address: 0x1007aa8, Func Offset: 0x18
	// Line 1640, Address: 0x1007ab4, Func Offset: 0x24
	// Line 1642, Address: 0x1007abc, Func Offset: 0x2c
	// Line 1643, Address: 0x1007acc, Func Offset: 0x3c
	// Line 1645, Address: 0x1007ad8, Func Offset: 0x48
	// Line 1646, Address: 0x1007b04, Func Offset: 0x74
	// Func End, Address: 0x1007b24, Func Offset: 0x94
}

// 
// Start address: 0x1007b30
void hscal2_5()
{
	short* a0;
	char* a2;
	short d2;
	short d7;
	// Line 1648, Address: 0x1007b30, Func Offset: 0
	// Line 1653, Address: 0x1007b48, Func Offset: 0x18
	// Line 1654, Address: 0x1007b54, Func Offset: 0x24
	// Line 1656, Address: 0x1007b5c, Func Offset: 0x2c
	// Line 1657, Address: 0x1007b6c, Func Offset: 0x3c
	// Line 1659, Address: 0x1007b78, Func Offset: 0x48
	// Line 1660, Address: 0x1007ba4, Func Offset: 0x74
	// Func End, Address: 0x1007bc4, Func Offset: 0x94
}

// 
// Start address: 0x1007bd0
void hscal5(short* a0, char* a2, short d0, short d2, short d7)
{
	short d1;
	// Line 1662, Address: 0x1007bd0, Func Offset: 0
	// Line 1666, Address: 0x1007bec, Func Offset: 0x1c
	// Line 1667, Address: 0x1007c00, Func Offset: 0x30
	// Line 1668, Address: 0x1007c28, Func Offset: 0x58
	// Line 1669, Address: 0x1007c38, Func Offset: 0x68
	// Line 1670, Address: 0x1007c44, Func Offset: 0x74
	// Line 1671, Address: 0x1007c50, Func Offset: 0x80
	// Line 1672, Address: 0x1007c74, Func Offset: 0xa4
	// Line 1673, Address: 0x1007c80, Func Offset: 0xb0
	// Func End, Address: 0x1007c90, Func Offset: 0xc0
}

// 
// Start address: 0x1007c90
void rlspd_get(int* d0, int* d1)
{
	// Line 1677, Address: 0x1007c90, Func Offset: 0
	// Line 1678, Address: 0x1007c9c, Func Offset: 0xc
	// Line 1679, Address: 0x1007cb4, Func Offset: 0x24
	// Line 1680, Address: 0x1007cc8, Func Offset: 0x38
	// Line 1681, Address: 0x1007cdc, Func Offset: 0x4c
	// Line 1682, Address: 0x1007cf4, Func Offset: 0x64
	// Line 1683, Address: 0x1007cfc, Func Offset: 0x6c
	// Line 1684, Address: 0x1007d04, Func Offset: 0x74
	// Func End, Address: 0x1007d10, Func Offset: 0x80
}

// 
// Start address: 0x1007d10
void hscrspd_get(int* lD0, int* lD1)
{
	// Line 1686, Address: 0x1007d10, Func Offset: 0
	// Line 1697, Address: 0x1007d20, Func Offset: 0x10
	// Line 1698, Address: 0x1007d2c, Func Offset: 0x1c
	// Line 1699, Address: 0x1007d3c, Func Offset: 0x2c
	// Line 1700, Address: 0x1007d58, Func Offset: 0x48
	// Line 1701, Address: 0x1007d80, Func Offset: 0x70
	// Line 1702, Address: 0x1007d9c, Func Offset: 0x8c
	// Line 1703, Address: 0x1007dc4, Func Offset: 0xb4
	// Line 1705, Address: 0x1007de0, Func Offset: 0xd0
	// Func End, Address: 0x1007df0, Func Offset: 0xe0
}

// 
// Start address: 0x1007df0
void hscrl0()
{
	// Line 1708, Address: 0x1007df0, Func Offset: 0
	// Line 1709, Address: 0x1007df8, Func Offset: 0x8
	// Line 1710, Address: 0x1007e00, Func Offset: 0x10
	// Line 1711, Address: 0x1007e08, Func Offset: 0x18
	// Line 1713, Address: 0x1007e10, Func Offset: 0x20
	// Func End, Address: 0x1007e20, Func Offset: 0x30
}

// 
// Start address: 0x1007e20
void hscrl1()
{
	int lD0;
	int lD1;
	int i;
	// Line 1715, Address: 0x1007e20, Func Offset: 0
	// Line 1731, Address: 0x1007e2c, Func Offset: 0xc
	// Line 1732, Address: 0x1007e38, Func Offset: 0x18
	// Line 1733, Address: 0x1007e48, Func Offset: 0x28
	// Line 1734, Address: 0x1007e5c, Func Offset: 0x3c
	// Line 1735, Address: 0x1007e70, Func Offset: 0x50
	// Line 1737, Address: 0x1007e80, Func Offset: 0x60
	// Func End, Address: 0x1007e94, Func Offset: 0x74
}

// 
// Start address: 0x1007ea0
void hscrl2()
{
	int lD0;
	int lD1;
	int i;
	// Line 1739, Address: 0x1007ea0, Func Offset: 0
	// Line 1744, Address: 0x1007eac, Func Offset: 0xc
	// Line 1745, Address: 0x1007eb8, Func Offset: 0x18
	// Line 1746, Address: 0x1007ec0, Func Offset: 0x20
	// Line 1747, Address: 0x1007ec8, Func Offset: 0x28
	// Line 1749, Address: 0x1007ed8, Func Offset: 0x38
	// Line 1750, Address: 0x1007ef0, Func Offset: 0x50
	// Line 1751, Address: 0x1007f00, Func Offset: 0x60
	// Line 1752, Address: 0x1007f18, Func Offset: 0x78
	// Line 1753, Address: 0x1007f28, Func Offset: 0x88
	// Line 1754, Address: 0x1007f40, Func Offset: 0xa0
	// Line 1755, Address: 0x1007f50, Func Offset: 0xb0
	// Line 1756, Address: 0x1007f68, Func Offset: 0xc8
	// Line 1757, Address: 0x1007f78, Func Offset: 0xd8
	// Line 1758, Address: 0x1007f90, Func Offset: 0xf0
	// Line 1759, Address: 0x1007fa0, Func Offset: 0x100
	// Line 1762, Address: 0x1007fb8, Func Offset: 0x118
	// Line 1764, Address: 0x1007fcc, Func Offset: 0x12c
	// Line 1765, Address: 0x1007fe0, Func Offset: 0x140
	// Line 1766, Address: 0x1007ff4, Func Offset: 0x154
	// Line 1767, Address: 0x1008008, Func Offset: 0x168
	// Line 1768, Address: 0x100801c, Func Offset: 0x17c
	// Line 1770, Address: 0x100802c, Func Offset: 0x18c
	// Func End, Address: 0x1008040, Func Offset: 0x1a0
}

// 
// Start address: 0x1008040
void hscrl3()
{
	int lD0;
	int lD1;
	int i;
	// Line 1772, Address: 0x1008040, Func Offset: 0
	// Line 1778, Address: 0x100804c, Func Offset: 0xc
	// Line 1779, Address: 0x1008058, Func Offset: 0x18
	// Line 1780, Address: 0x1008068, Func Offset: 0x28
	// Line 1781, Address: 0x100807c, Func Offset: 0x3c
	// Line 1782, Address: 0x1008090, Func Offset: 0x50
	// Line 1783, Address: 0x10080a4, Func Offset: 0x64
	// Line 1785, Address: 0x10080b4, Func Offset: 0x74
	// Func End, Address: 0x10080c8, Func Offset: 0x88
}

// 
// Start address: 0x10080d0
void hscrl4()
{
	// Line 1787, Address: 0x10080d0, Func Offset: 0
	// Line 1788, Address: 0x10080d8, Func Offset: 0x8
	// Line 1789, Address: 0x10080e0, Func Offset: 0x10
	// Line 1790, Address: 0x10080e8, Func Offset: 0x18
	// Line 1792, Address: 0x10080f0, Func Offset: 0x20
	// Func End, Address: 0x1008100, Func Offset: 0x30
}

// 
// Start address: 0x1008100
void hscrl5()
{
	// Line 1794, Address: 0x1008100, Func Offset: 0
	// Line 1795, Address: 0x1008108, Func Offset: 0x8
	// Line 1796, Address: 0x1008110, Func Offset: 0x10
	// Line 1797, Address: 0x1008118, Func Offset: 0x18
	// Line 1799, Address: 0x1008120, Func Offset: 0x20
	// Func End, Address: 0x1008130, Func Offset: 0x30
}

// 
// Start address: 0x1008130
void hscrl6()
{
	int lD0;
	int lD1;
	int i;
	// Line 1801, Address: 0x1008130, Func Offset: 0
	// Line 1806, Address: 0x100813c, Func Offset: 0xc
	// Line 1807, Address: 0x1008148, Func Offset: 0x18
	// Line 1808, Address: 0x1008150, Func Offset: 0x20
	// Line 1809, Address: 0x100815c, Func Offset: 0x2c
	// Line 1811, Address: 0x100816c, Func Offset: 0x3c
	// Line 1812, Address: 0x1008184, Func Offset: 0x54
	// Line 1813, Address: 0x1008194, Func Offset: 0x64
	// Line 1814, Address: 0x10081ac, Func Offset: 0x7c
	// Line 1815, Address: 0x10081bc, Func Offset: 0x8c
	// Line 1816, Address: 0x10081d4, Func Offset: 0xa4
	// Line 1817, Address: 0x10081e4, Func Offset: 0xb4
	// Line 1819, Address: 0x10081fc, Func Offset: 0xcc
	// Line 1820, Address: 0x1008210, Func Offset: 0xe0
	// Line 1821, Address: 0x1008224, Func Offset: 0xf4
	// Line 1822, Address: 0x1008238, Func Offset: 0x108
	// Line 1823, Address: 0x100824c, Func Offset: 0x11c
	// Line 1825, Address: 0x100825c, Func Offset: 0x12c
	// Func End, Address: 0x1008270, Func Offset: 0x140
}

// 
// Start address: 0x1008270
void hscrl7()
{
	// Line 1829, Address: 0x1008270, Func Offset: 0
	// Func End, Address: 0x1008278, Func Offset: 0x8
}

// 
// Start address: 0x1008280
void hscal()
{
	// Line 1838, Address: 0x1008280, Func Offset: 0
	// Line 1839, Address: 0x1008288, Func Offset: 0x8
	// Line 1840, Address: 0x1008298, Func Offset: 0x18
	// Line 1843, Address: 0x10082c0, Func Offset: 0x40
	// Func End, Address: 0x10082d0, Func Offset: 0x50
}

// 
// Start address: 0x10082d0
void colchg0()
{
	unsigned short d0;
	unsigned short d1;
	unsigned short d5;
	unsigned short d6;
	unsigned short d7;
	tagPALETTEENTRY* lpPeDest;
	tagPALETTEENTRY dummy;
	int i;
	// Line 1851, Address: 0x10082d0, Func Offset: 0
	// Line 1857, Address: 0x10082f4, Func Offset: 0x24
	// Line 1858, Address: 0x10082fc, Func Offset: 0x2c
	// Line 1859, Address: 0x1008300, Func Offset: 0x30
	// Line 1860, Address: 0x1008308, Func Offset: 0x38
	// Line 1861, Address: 0x1008334, Func Offset: 0x64
	// Line 1862, Address: 0x100833c, Func Offset: 0x6c
	// Line 1863, Address: 0x1008348, Func Offset: 0x78
	// Line 1864, Address: 0x1008354, Func Offset: 0x84
	// Line 1865, Address: 0x100837c, Func Offset: 0xac
	// Line 1867, Address: 0x1008394, Func Offset: 0xc4
	// Line 1868, Address: 0x10083a0, Func Offset: 0xd0
	// Line 1869, Address: 0x10083b4, Func Offset: 0xe4
	// Line 1870, Address: 0x10083c4, Func Offset: 0xf4
	// Line 1871, Address: 0x10083d8, Func Offset: 0x108
	// Line 1872, Address: 0x10083e0, Func Offset: 0x110
	// Line 1873, Address: 0x100840c, Func Offset: 0x13c
	// Line 1874, Address: 0x100841c, Func Offset: 0x14c
	// Func End, Address: 0x1008448, Func Offset: 0x178
}

// 
// Start address: 0x1008450
void colchg1()
{
	short d0;
	tagPALETTEENTRY* lpPeDest;
	tagPALETTEENTRY cltbl[8];
	int i;
	// Line 1877, Address: 0x1008450, Func Offset: 0
	// Line 1880, Address: 0x1008460, Func Offset: 0x10
	// Line 1886, Address: 0x1008494, Func Offset: 0x44
	// Line 1887, Address: 0x10084c4, Func Offset: 0x74
	// Line 1889, Address: 0x10084d0, Func Offset: 0x80
	// Line 1890, Address: 0x10084dc, Func Offset: 0x8c
	// Line 1891, Address: 0x10084f8, Func Offset: 0xa8
	// Line 1892, Address: 0x1008514, Func Offset: 0xc4
	// Line 1893, Address: 0x1008530, Func Offset: 0xe0
	// Line 1902, Address: 0x1008540, Func Offset: 0xf0
	// Func End, Address: 0x1008558, Func Offset: 0x108
}

// 
// Start address: 0x1008560
void colchg2()
{
	unsigned short d0;
	unsigned short d5;
	unsigned short d6;
	unsigned short d7;
	tagPALETTEENTRY* lpPeDest;
	tagPALETTEENTRY cltbl0[24];
	tagPALETTEENTRY cltbl1[6];
	// Line 1904, Address: 0x1008560, Func Offset: 0
	// Line 1907, Address: 0x100857c, Func Offset: 0x1c
	// Line 1915, Address: 0x10085b0, Func Offset: 0x50
	// Line 1919, Address: 0x10085e4, Func Offset: 0x84
	// Line 1920, Address: 0x10085ec, Func Offset: 0x8c
	// Line 1921, Address: 0x10085f0, Func Offset: 0x90
	// Line 1922, Address: 0x10085f8, Func Offset: 0x98
	// Line 1923, Address: 0x1008624, Func Offset: 0xc4
	// Line 1924, Address: 0x100862c, Func Offset: 0xcc
	// Line 1925, Address: 0x1008634, Func Offset: 0xd4
	// Line 1926, Address: 0x1008640, Func Offset: 0xe0
	// Line 1927, Address: 0x1008678, Func Offset: 0x118
	// Line 1928, Address: 0x10086b4, Func Offset: 0x154
	// Line 1929, Address: 0x10086f0, Func Offset: 0x190
	// Line 1931, Address: 0x1008724, Func Offset: 0x1c4
	// Line 1932, Address: 0x100872c, Func Offset: 0x1cc
	// Line 1933, Address: 0x1008730, Func Offset: 0x1d0
	// Line 1934, Address: 0x1008738, Func Offset: 0x1d8
	// Line 1935, Address: 0x1008764, Func Offset: 0x204
	// Line 1936, Address: 0x1008774, Func Offset: 0x214
	// Line 1937, Address: 0x100877c, Func Offset: 0x21c
	// Line 1938, Address: 0x1008780, Func Offset: 0x220
	// Line 1939, Address: 0x1008788, Func Offset: 0x228
	// Line 1940, Address: 0x10087b4, Func Offset: 0x254
	// Line 1941, Address: 0x10087bc, Func Offset: 0x25c
	// Line 1942, Address: 0x10087c8, Func Offset: 0x268
	// Line 1943, Address: 0x10087f8, Func Offset: 0x298
	// Func End, Address: 0x100881c, Func Offset: 0x2bc
}

// 
// Start address: 0x1008820
void colchg3()
{
	short d0;
	short d5;
	short d6;
	short d7;
	tagPALETTEENTRY* lpPeDest;
	tagPALETTEENTRY cltbl0[16];
	tagPALETTEENTRY cltbl1[8];
	// Line 1945, Address: 0x1008820, Func Offset: 0
	// Line 1948, Address: 0x100883c, Func Offset: 0x1c
	// Line 1954, Address: 0x1008870, Func Offset: 0x50
	// Line 1958, Address: 0x10088a4, Func Offset: 0x84
	// Line 1959, Address: 0x10088b4, Func Offset: 0x94
	// Line 1960, Address: 0x10088c8, Func Offset: 0xa8
	// Line 1961, Address: 0x10088d4, Func Offset: 0xb4
	// Line 1962, Address: 0x10088e0, Func Offset: 0xc0
	// Line 1963, Address: 0x10088ec, Func Offset: 0xcc
	// Line 1964, Address: 0x1008928, Func Offset: 0x108
	// Line 1965, Address: 0x1008968, Func Offset: 0x148
	// Line 1966, Address: 0x10089a8, Func Offset: 0x188
	// Line 1968, Address: 0x10089e0, Func Offset: 0x1c0
	// Line 1969, Address: 0x10089ec, Func Offset: 0x1cc
	// Line 1970, Address: 0x10089f0, Func Offset: 0x1d0
	// Line 1971, Address: 0x10089fc, Func Offset: 0x1dc
	// Line 1972, Address: 0x1008a28, Func Offset: 0x208
	// Line 1974, Address: 0x1008a30, Func Offset: 0x210
	// Line 1975, Address: 0x1008a40, Func Offset: 0x220
	// Line 1976, Address: 0x1008a54, Func Offset: 0x234
	// Line 1977, Address: 0x1008a60, Func Offset: 0x240
	// Line 1979, Address: 0x1008a6c, Func Offset: 0x24c
	// Line 1980, Address: 0x1008a78, Func Offset: 0x258
	// Line 1981, Address: 0x1008ab4, Func Offset: 0x294
	// Func End, Address: 0x1008ad8, Func Offset: 0x2b8
}

// 
// Start address: 0x1008ae0
void colchg4()
{
	tagPALETTEENTRY tbl0[7];
	tagPALETTEENTRY tbl1[26];
	tagPALETTEENTRY tbl2[26];
	tagPALETTEENTRY tbl3[28];
	unsigned short d0;
	unsigned short d5;
	unsigned short d6;
	unsigned short d7;
	tagPALETTEENTRY* lpPeDest;
	// Line 1983, Address: 0x1008ae0, Func Offset: 0
	// Line 1984, Address: 0x1008afc, Func Offset: 0x1c
	// Line 1988, Address: 0x1008b30, Func Offset: 0x50
	// Line 1997, Address: 0x1008b64, Func Offset: 0x84
	// Line 2006, Address: 0x1008b98, Func Offset: 0xb8
	// Line 2018, Address: 0x1008bcc, Func Offset: 0xec
	// Line 2019, Address: 0x1008bd4, Func Offset: 0xf4
	// Line 2020, Address: 0x1008bd8, Func Offset: 0xf8
	// Line 2021, Address: 0x1008be0, Func Offset: 0x100
	// Line 2022, Address: 0x1008c0c, Func Offset: 0x12c
	// Line 2023, Address: 0x1008c14, Func Offset: 0x134
	// Line 2024, Address: 0x1008c20, Func Offset: 0x140
	// Line 2026, Address: 0x1008c50, Func Offset: 0x170
	// Line 2027, Address: 0x1008c58, Func Offset: 0x178
	// Line 2028, Address: 0x1008c5c, Func Offset: 0x17c
	// Line 2029, Address: 0x1008c64, Func Offset: 0x184
	// Line 2030, Address: 0x1008c90, Func Offset: 0x1b0
	// Line 2031, Address: 0x1008c98, Func Offset: 0x1b8
	// Line 2032, Address: 0x1008ca4, Func Offset: 0x1c4
	// Line 2034, Address: 0x1008cd4, Func Offset: 0x1f4
	// Line 2035, Address: 0x1008cdc, Func Offset: 0x1fc
	// Line 2036, Address: 0x1008ce0, Func Offset: 0x200
	// Line 2037, Address: 0x1008ce8, Func Offset: 0x208
	// Line 2038, Address: 0x1008d14, Func Offset: 0x234
	// Line 2039, Address: 0x1008d1c, Func Offset: 0x23c
	// Line 2040, Address: 0x1008d28, Func Offset: 0x248
	// Line 2042, Address: 0x1008d58, Func Offset: 0x278
	// Line 2043, Address: 0x1008d60, Func Offset: 0x280
	// Line 2044, Address: 0x1008d64, Func Offset: 0x284
	// Line 2045, Address: 0x1008d6c, Func Offset: 0x28c
	// Line 2046, Address: 0x1008da0, Func Offset: 0x2c0
	// Line 2047, Address: 0x1008da8, Func Offset: 0x2c8
	// Line 2048, Address: 0x1008db4, Func Offset: 0x2d4
	// Line 2049, Address: 0x1008de4, Func Offset: 0x304
	// Func End, Address: 0x1008e08, Func Offset: 0x328
}

// 
// Start address: 0x1008e10
void colchg5()
{
	unsigned short d0;
	unsigned short d5;
	unsigned short d6;
	unsigned short d7;
	tagPALETTEENTRY* lpPeDest;
	short i;
	tagPALETTEENTRY tbl1[12];
	tagPALETTEENTRY tbl0[26];
	// Line 2051, Address: 0x1008e10, Func Offset: 0
	// Line 2070, Address: 0x1008e30, Func Offset: 0x20
	// Line 2071, Address: 0x1008e38, Func Offset: 0x28
	// Line 2072, Address: 0x1008e3c, Func Offset: 0x2c
	// Line 2073, Address: 0x1008e44, Func Offset: 0x34
	// Line 2075, Address: 0x1008e78, Func Offset: 0x68
	// Line 2076, Address: 0x1008e80, Func Offset: 0x70
	// Line 2078, Address: 0x1008e8c, Func Offset: 0x7c
	// Line 2079, Address: 0x1008e98, Func Offset: 0x88
	// Line 2080, Address: 0x1008ee0, Func Offset: 0xd0
	// Line 2081, Address: 0x1008f00, Func Offset: 0xf0
	// Line 2082, Address: 0x1008f08, Func Offset: 0xf8
	// Line 2083, Address: 0x1008f0c, Func Offset: 0xfc
	// Line 2084, Address: 0x1008f14, Func Offset: 0x104
	// Line 2085, Address: 0x1008f48, Func Offset: 0x138
	// Line 2086, Address: 0x1008f50, Func Offset: 0x140
	// Line 2087, Address: 0x1008f5c, Func Offset: 0x14c
	// Line 2088, Address: 0x1008fa4, Func Offset: 0x194
	// Line 2089, Address: 0x1008fd8, Func Offset: 0x1c8
	// Func End, Address: 0x1009000, Func Offset: 0x1f0
}

// 
// Start address: 0x1009000
void colchg6()
{
	tagPALETTEENTRY tbl[12];
	unsigned short d0;
	unsigned short d5;
	unsigned short d6;
	unsigned short d7;
	tagPALETTEENTRY* lpPeDest;
	// Line 2093, Address: 0x1009000, Func Offset: 0
	// Line 2094, Address: 0x100901c, Func Offset: 0x1c
	// Line 2102, Address: 0x1009050, Func Offset: 0x50
	// Line 2103, Address: 0x1009058, Func Offset: 0x58
	// Line 2104, Address: 0x100905c, Func Offset: 0x5c
	// Line 2105, Address: 0x1009064, Func Offset: 0x64
	// Line 2106, Address: 0x1009098, Func Offset: 0x98
	// Line 2107, Address: 0x10090a0, Func Offset: 0xa0
	// Line 2108, Address: 0x10090ac, Func Offset: 0xac
	// Line 2109, Address: 0x10090dc, Func Offset: 0xdc
	// Func End, Address: 0x1009100, Func Offset: 0x100
}

// 
// Start address: 0x1009100
void colchg7()
{
	// Line 2113, Address: 0x1009100, Func Offset: 0
	// Func End, Address: 0x1009108, Func Offset: 0x8
}

// 
// Start address: 0x1009110
void color_change()
{
	void(*jptbl)()[8];
	// Line 2115, Address: 0x1009110, Func Offset: 0
	// Line 2116, Address: 0x1009118, Func Offset: 0x8
	// Line 2120, Address: 0x100914c, Func Offset: 0x3c
	// Line 2121, Address: 0x100916c, Func Offset: 0x5c
	// Func End, Address: 0x100917c, Func Offset: 0x6c
}

