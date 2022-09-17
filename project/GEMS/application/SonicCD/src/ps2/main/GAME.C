typedef struct _anon0;
typedef struct tagPALETTEENTRY;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct dlink_export;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef union _anon10;
typedef struct _anon11;
typedef union _anon12;
typedef struct _anon13;
typedef struct _anon14;

typedef void(*type_1)();
typedef void(*type_2)(char***, void**);
typedef void(*type_3)();
typedef void(*type_6)(short);
typedef void(*type_7)();
typedef int(*type_8)();
typedef void(*type_9)(short);
typedef void(*type_10)(unsigned short, unsigned char, char*);
typedef void(*type_11)(short);
typedef int(*type_12)();
typedef void(*type_13)(short, short);
typedef void(*type_14)(int, int);
typedef void(*type_16)(char*);
typedef void(*type_17)(unsigned int);
typedef void(*type_20)();
typedef void(*type_21)(char*, char*);
typedef void(*type_23)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef int(*type_25)();
typedef void(*type_29)(void*, unsigned char, int);
typedef void(*type_31)(void*, void*, int);
typedef int(*type_33)(char*);
typedef int(*type_38)(int, void*, int);
typedef int(*type_39)(int);
typedef void(*type_42)(int);
typedef int(*type_45)(int, int, int, int);
typedef void(*type_46)(short, short, unsigned short, unsigned short, unsigned short);

typedef _anon14 type_0[20];
typedef unsigned char type_4[6];
typedef _anon14 type_5[0];
typedef int type_15[128];
typedef char type_18[4];
typedef unsigned char type_19[7];
typedef unsigned char type_22[7];
typedef unsigned char type_24[4096];
typedef _anon7 type_26[192];
typedef unsigned char type_27[2];
typedef unsigned char type_28[22];
typedef unsigned char type_30[3];
typedef unsigned char type_32[0];
typedef _anon3 type_34[700];
typedef _anon6 type_35[8];
typedef _anon1* type_36[63];
typedef unsigned char type_37[766];
typedef _anon1 type_40[128];
typedef unsigned char type_41[766];
typedef unsigned char type_43[4];
typedef unsigned char type_44[4][7];
typedef unsigned char type_47[32];
typedef unsigned char type_48[6];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon14 spra[20];
		_anon14 spr[0];
	};
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon7 xposi;
	_anon7 yposi;
	_anon10 xspeed;
	_anon10 yspeed;
	_anon10 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon10 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon10 direc;
	_anon10 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon2
{
	short plring;
	int plscore;
	_anon10 stageno;
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
	_anon10 demoflag;
	_anon10 hintposi;
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

struct _anon4
{
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
};

struct _anon5
{
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
};

struct _anon6
{
	int cnt;
	_anon1* pActwk[63];
};

union _anon7
{
	int l;
	_anon8 w;
	_anon9 b;
};

struct _anon8
{
	short l;
	short h;
};

struct _anon9
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon10
{
	short w;
	_anon11 b;
};

struct _anon11
{
	char l;
	char h;
};

union _anon12
{
	unsigned short w;
	_anon13 b;
};

struct _anon13
{
	unsigned char l;
	unsigned char h;
};

struct _anon14
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

short Interupt_Counter;
unsigned int PauseIcon;
_anon2* lpKeepWork;
_anon3 SprBmp[700];
void(*sMemCpy)(void*, void*, int);
unsigned char flagwork[766];
unsigned char flagworkcnt2;
unsigned char flagworkcnt;
unsigned char emie3end;
int extrascore;
unsigned char projector_flag;
unsigned char gf_flag;
unsigned char ta_flag;
unsigned char clrspflg_save;
unsigned char plflag;
unsigned char time_flag;
unsigned char generate_flag;
unsigned char pl_suu;
unsigned char play_start;
_anon10 stageno;
int plscore;
short plring;
unsigned int* lpghWnd;
int* lpFadeFlag;
_anon7* lphscrollbuff;
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
void(*sMemSet)(void*, unsigned char, int);
void(*WaveAllStop)();
void(*ChangeTileBmp)(int, int);
void(*CDPause)(short);
void(*CDPlay)(short);
void(*WaveRequest)(short);
void(*ClrSpriteDebug)();
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
int(*SetGrid)(int, int, int, int);
_anon7 vscroll;
_anon7 scra_h_posiw;
_anon7 scrb_h_posiw;
_anon10 debugflag;
_anon7 systemtimer;
_anon12 pauseflag;
_anon12 scrflagzw;
_anon12 scrflagz;
_anon12 scrflagcw;
_anon12 scrflagc;
_anon12 scrflagbw;
_anon12 scrflagb;
_anon12 scrflagaw;
_anon12 scrflaga;
_anon7 scrz_v_posiw;
_anon7 scrz_v_posit;
_anon7 scrz_h_posiw;
_anon7 scrz_h_posit;
_anon7 scrc_v_posiw;
_anon7 scrc_v_posit;
_anon7 scrc_h_posiw;
_anon7 scrc_h_posit;
_anon7 scrb_v_posiw;
_anon7 scrb_v_posit;
_anon7 scrb_h_posit;
_anon7 scra_v_posiw;
_anon7 scra_v_posit;
_anon7 scra_h_posit;
short time_stop;
short scralim_n_down;
short scralim_down;
_anon1 actwk[128];
_anon10 editmode;
_anon10 gameflag;
_anon7 pltime;
unsigned char special_flag;
short demo_cnt;
_anon10 gametimer;
_anon10 demoflag;
unsigned char markerno;
_anon12 swdata1;
_anon12 swdata2;
unsigned char init_flag;
_anon10 gmmode;
unsigned char tv_flag;
unsigned char colorcnt;
unsigned char startcolor;
short swbufcnt;
unsigned char plscore_f;
unsigned char plring_f;
unsigned char pltime_f;
unsigned char pl_suu_f;
unsigned char pltimeover_f;
unsigned char plpower_b;
unsigned char plpower_m;
unsigned char plpower_s;
unsigned char plpower_a;
unsigned char plring_f2;
unsigned char enkeino;
_anon10 byecnt1;
_anon10 byecnt0;
_anon12 swdata;
unsigned char enecgflg;
unsigned char plautoflag;
short pl_air;
int linework[128];
unsigned char mapwrt_cnt;
unsigned char chibi_flag;
unsigned char st6clrchg;
unsigned char shut_flag;
unsigned char boss_sound;
unsigned char prio_flag;
unsigned char sysdirec;
unsigned char edit_user;
_anon10 col_x;
_anon10 col_y;
short blkno;
short mapcheck;
short editstack2;
short editstack;
short sys_ringtimer;
unsigned char sys_patno4;
unsigned char sys_pattim4;
unsigned char sys_patno3;
unsigned char sys_pattim3;
unsigned char sys_patno2;
unsigned char sys_pattim2;
unsigned char sys_patno;
unsigned char sys_pattim;
short edittimer;
_anon10 editno;
unsigned char switchflag[32];
unsigned char ms_wflg;
_anon10 waterdirec;
unsigned char edplayflag;
unsigned char bonus_f;
short ringbonus;
short timebonus;
short emyscorecnt;
unsigned char dai2rmvflag;
unsigned char specflag;
unsigned char sekichyuflag;
unsigned char mizuflag;
unsigned char waterstop;
unsigned char watercoliflag;
unsigned char clchgtim[7];
unsigned char clchgcnt[7];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
unsigned char bossstart;
_anon12 plposiwkadr;
unsigned char bossflag;
short scra_hline;
unsigned char* scdadr;
unsigned int demo_adr;
unsigned char scr_cnt;
short backto_cnt;
char time_item;
_anon5* asetadrz2;
_anon5* asetadrz;
_anon4* asetadr2;
_anon4* asetadr;
short asetposi;
_anon10 actset_rno;
char dirstk[4];
unsigned char playwrtflag;
unsigned char playpatno;
short plretspdwk;
short pladdspdwk;
short plmaxspdwk;
unsigned char kusya_flag;
unsigned char playpatno1;
unsigned char limmoveflag;
unsigned char scrz_v_count;
unsigned char scrz_h_count;
unsigned char scrc_v_count;
unsigned char scrc_h_count;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scra_v_count;
unsigned char scra_h_count;
_anon10 scr_timer;
_anon12 scr_die;
_anon10 scroll_start;
_anon12 zone_flag;
unsigned char scrv_flag;
unsigned char scrh_flag;
short scra_vline;
short scra_vz;
short scra_hz;
short scra_v_keep;
short scra_h_keep;
short scrar_no;
short scralim_up;
short scralim_right;
short scralim_left;
short scralim_n_up;
short scralim_n_right;
short scralim_n_left;
unsigned char cgchgtim[6];
unsigned char cgchgcnt[6];
unsigned char waterflag2;
unsigned char waterflag;
unsigned char water_flag;
unsigned char waterspeed;
short watermoveposi;
short waterposi_m;
short waterposi;
int dmastack;
short cgwrttim;
short cgwrtcnt;
int ranum;
int cltbladr;
unsigned char linkdata;
unsigned char int_flg;
_anon10 intcnt;
unsigned char flowwk[4096];
_anon7 flowerposi[192];
_anon6 pbuffer[8];
unsigned char flowercnt[3];
unsigned char plsubchg_flag;
unsigned char start_flag;
unsigned char main_play;
unsigned char zone1scd[0];
dlink_export ExportedFunctions;
int(*sGetFileSize)(int);

void DLL_meminit(char*** pBufTbl, void** pFuncTbl);
void DLL_memfree();
void Print_Msg();
int Get_vscroll();
int Get_scra_h_posiw();
int Get_scrb_h_posiw();
void SetDebugFlag(unsigned int NewVal);
int game();
void game_init();
void play_act_set();
void flow_act_set();
void scdset();
void syspatchg();
void back_to_cnt();
void bye_cnt();
void sdfdout();
void sdfdin();
void da_set();

// 
// Start address: 0x1017a10
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	// Line 193, Address: 0x1017a10, Func Offset: 0
	// Line 198, Address: 0x1017a20, Func Offset: 0x10
	// Line 199, Address: 0x1017a38, Func Offset: 0x28
	// Line 200, Address: 0x1017a50, Func Offset: 0x40
	// Line 201, Address: 0x1017a68, Func Offset: 0x58
	// Line 202, Address: 0x1017a80, Func Offset: 0x70
	// Line 203, Address: 0x1017a98, Func Offset: 0x88
	// Line 204, Address: 0x1017ab0, Func Offset: 0xa0
	// Line 205, Address: 0x1017ac8, Func Offset: 0xb8
	// Line 206, Address: 0x1017ad4, Func Offset: 0xc4
	// Line 207, Address: 0x1017ae0, Func Offset: 0xd0
	// Line 208, Address: 0x1017aec, Func Offset: 0xdc
	// Line 210, Address: 0x1017b04, Func Offset: 0xf4
	// Line 211, Address: 0x1017b10, Func Offset: 0x100
	// Line 212, Address: 0x1017b1c, Func Offset: 0x10c
	// Line 213, Address: 0x1017b34, Func Offset: 0x124
	// Line 214, Address: 0x1017b4c, Func Offset: 0x13c
	// Line 215, Address: 0x1017b58, Func Offset: 0x148
	// Line 216, Address: 0x1017b70, Func Offset: 0x160
	// Line 217, Address: 0x1017b7c, Func Offset: 0x16c
	// Line 218, Address: 0x1017b88, Func Offset: 0x178
	// Line 219, Address: 0x1017b94, Func Offset: 0x184
	// Line 220, Address: 0x1017bac, Func Offset: 0x19c
	// Line 221, Address: 0x1017bc4, Func Offset: 0x1b4
	// Line 222, Address: 0x1017bdc, Func Offset: 0x1cc
	// Line 223, Address: 0x1017bf4, Func Offset: 0x1e4
	// Line 224, Address: 0x1017c0c, Func Offset: 0x1fc
	// Line 254, Address: 0x1017c18, Func Offset: 0x208
	// Line 255, Address: 0x1017c34, Func Offset: 0x224
	// Line 256, Address: 0x1017c50, Func Offset: 0x240
	// Line 257, Address: 0x1017c6c, Func Offset: 0x25c
	// Line 258, Address: 0x1017c88, Func Offset: 0x278
	// Line 259, Address: 0x1017ca4, Func Offset: 0x294
	// Line 260, Address: 0x1017cc0, Func Offset: 0x2b0
	// Line 261, Address: 0x1017cd8, Func Offset: 0x2c8
	// Line 262, Address: 0x1017cf0, Func Offset: 0x2e0
	// Line 263, Address: 0x1017cfc, Func Offset: 0x2ec
	// Line 266, Address: 0x1017d14, Func Offset: 0x304
	// Line 267, Address: 0x1017d28, Func Offset: 0x318
	// Line 268, Address: 0x1017d3c, Func Offset: 0x32c
	// Line 269, Address: 0x1017d50, Func Offset: 0x340
	// Line 270, Address: 0x1017d64, Func Offset: 0x354
	// Line 271, Address: 0x1017d78, Func Offset: 0x368
	// Line 272, Address: 0x1017d8c, Func Offset: 0x37c
	// Line 273, Address: 0x1017da0, Func Offset: 0x390
	// Line 274, Address: 0x1017db4, Func Offset: 0x3a4
	// Line 275, Address: 0x1017dc8, Func Offset: 0x3b8
	// Line 276, Address: 0x1017ddc, Func Offset: 0x3cc
	// Line 277, Address: 0x1017df0, Func Offset: 0x3e0
	// Line 278, Address: 0x1017e04, Func Offset: 0x3f4
	// Line 279, Address: 0x1017e18, Func Offset: 0x408
	// Line 281, Address: 0x1017e2c, Func Offset: 0x41c
	// Line 282, Address: 0x1017e40, Func Offset: 0x430
	// Line 283, Address: 0x1017e54, Func Offset: 0x444
	// Line 285, Address: 0x1017e7c, Func Offset: 0x46c
	// Line 288, Address: 0x1017e90, Func Offset: 0x480
	// Func End, Address: 0x1017ea0, Func Offset: 0x490
}

// 
// Start address: 0x1017ea0
void DLL_memfree()
{
	// Line 292, Address: 0x1017ea0, Func Offset: 0
	// Func End, Address: 0x1017ea8, Func Offset: 0x8
}

// 
// Start address: 0x1017eb0
void Print_Msg()
{
	// Line 297, Address: 0x1017eb0, Func Offset: 0
	// Func End, Address: 0x1017eb8, Func Offset: 0x8
}

// 
// Start address: 0x1017ec0
int Get_vscroll()
{
	// Line 299, Address: 0x1017ec0, Func Offset: 0
	// Line 301, Address: 0x1017ec8, Func Offset: 0x8
	// Line 302, Address: 0x1017ed0, Func Offset: 0x10
	// Line 303, Address: 0x1017ed8, Func Offset: 0x18
	// Func End, Address: 0x1017ee8, Func Offset: 0x28
}

// 
// Start address: 0x1017ef0
int Get_scra_h_posiw()
{
	// Line 306, Address: 0x1017ef0, Func Offset: 0
	// Line 307, Address: 0x1017ef8, Func Offset: 0x8
	// Func End, Address: 0x1017f00, Func Offset: 0x10
}

// 
// Start address: 0x1017f00
int Get_scrb_h_posiw()
{
	// Line 310, Address: 0x1017f00, Func Offset: 0
	// Line 311, Address: 0x1017f08, Func Offset: 0x8
	// Func End, Address: 0x1017f10, Func Offset: 0x10
}

// 
// Start address: 0x1017f10
void SetDebugFlag(unsigned int NewVal)
{
	// Line 314, Address: 0x1017f10, Func Offset: 0
	// Line 315, Address: 0x1017f18, Func Offset: 0x8
	// Line 316, Address: 0x1017f44, Func Offset: 0x34
	// Line 318, Address: 0x1017f5c, Func Offset: 0x4c
	// Func End, Address: 0x1017f68, Func Offset: 0x58
}

// 
// Start address: 0x1017f70
int game()
{
	// Line 323, Address: 0x1017f70, Func Offset: 0
	// Line 325, Address: 0x1017f78, Func Offset: 0x8
	// Line 326, Address: 0x1017f90, Func Offset: 0x20
	// Line 327, Address: 0x1017fa0, Func Offset: 0x30
	// Line 328, Address: 0x1017fb8, Func Offset: 0x48
	// Line 329, Address: 0x1017fd8, Func Offset: 0x68
	// Line 330, Address: 0x1017fe8, Func Offset: 0x78
	// Line 331, Address: 0x1017ffc, Func Offset: 0x8c
	// Line 332, Address: 0x1018004, Func Offset: 0x94
	// Line 333, Address: 0x101803c, Func Offset: 0xcc
	// Line 334, Address: 0x1018048, Func Offset: 0xd8
	// Line 357, Address: 0x101805c, Func Offset: 0xec
	// Line 358, Address: 0x1018074, Func Offset: 0x104
	// Line 360, Address: 0x101807c, Func Offset: 0x10c
	// Line 362, Address: 0x1018098, Func Offset: 0x128
	// Line 363, Address: 0x10180a0, Func Offset: 0x130
	// Line 364, Address: 0x10180a8, Func Offset: 0x138
	// Line 365, Address: 0x10180b0, Func Offset: 0x140
	// Line 366, Address: 0x10180bc, Func Offset: 0x14c
	// Line 367, Address: 0x10180cc, Func Offset: 0x15c
	// Line 368, Address: 0x10180e0, Func Offset: 0x170
	// Line 369, Address: 0x1018100, Func Offset: 0x190
	// Line 371, Address: 0x1018108, Func Offset: 0x198
	// Line 372, Address: 0x1018114, Func Offset: 0x1a4
	// Line 373, Address: 0x101811c, Func Offset: 0x1ac
	// Line 376, Address: 0x1018124, Func Offset: 0x1b4
	// Line 379, Address: 0x1018148, Func Offset: 0x1d8
	// Line 380, Address: 0x1018164, Func Offset: 0x1f4
	// Line 381, Address: 0x101816c, Func Offset: 0x1fc
	// Line 382, Address: 0x1018180, Func Offset: 0x210
	// Line 383, Address: 0x1018188, Func Offset: 0x218
	// Line 385, Address: 0x1018190, Func Offset: 0x220
	// Line 388, Address: 0x10181a8, Func Offset: 0x238
	// Line 392, Address: 0x10181b8, Func Offset: 0x248
	// Line 393, Address: 0x10181cc, Func Offset: 0x25c
	// Line 394, Address: 0x10181e0, Func Offset: 0x270
	// Line 395, Address: 0x10181f4, Func Offset: 0x284
	// Line 396, Address: 0x1018208, Func Offset: 0x298
	// Line 397, Address: 0x101821c, Func Offset: 0x2ac
	// Line 398, Address: 0x1018230, Func Offset: 0x2c0
	// Line 399, Address: 0x1018244, Func Offset: 0x2d4
	// Line 400, Address: 0x1018258, Func Offset: 0x2e8
	// Line 401, Address: 0x101826c, Func Offset: 0x2fc
	// Line 402, Address: 0x1018280, Func Offset: 0x310
	// Line 403, Address: 0x1018294, Func Offset: 0x324
	// Line 404, Address: 0x10182a8, Func Offset: 0x338
	// Line 405, Address: 0x10182bc, Func Offset: 0x34c
	// Line 407, Address: 0x10182d0, Func Offset: 0x360
	// Line 408, Address: 0x10182ec, Func Offset: 0x37c
	// Line 410, Address: 0x10182f4, Func Offset: 0x384
	// Line 411, Address: 0x1018308, Func Offset: 0x398
	// Line 412, Address: 0x101831c, Func Offset: 0x3ac
	// Line 414, Address: 0x1018344, Func Offset: 0x3d4
	// Line 416, Address: 0x1018360, Func Offset: 0x3f0
	// Line 417, Address: 0x10183c8, Func Offset: 0x458
	// Line 418, Address: 0x10183d0, Func Offset: 0x460
	// Line 419, Address: 0x10183ec, Func Offset: 0x47c
	// Line 421, Address: 0x10183fc, Func Offset: 0x48c
	// Line 423, Address: 0x1018414, Func Offset: 0x4a4
	// Line 424, Address: 0x1018424, Func Offset: 0x4b4
	// Line 425, Address: 0x101842c, Func Offset: 0x4bc
	// Line 427, Address: 0x1018434, Func Offset: 0x4c4
	// Line 428, Address: 0x101844c, Func Offset: 0x4dc
	// Line 429, Address: 0x101845c, Func Offset: 0x4ec
	// Line 430, Address: 0x101846c, Func Offset: 0x4fc
	// Line 433, Address: 0x1018474, Func Offset: 0x504
	// Line 438, Address: 0x101847c, Func Offset: 0x50c
	// Line 439, Address: 0x1018484, Func Offset: 0x514
	// Line 440, Address: 0x1018494, Func Offset: 0x524
	// Line 443, Address: 0x101849c, Func Offset: 0x52c
	// Line 446, Address: 0x10184a4, Func Offset: 0x534
	// Line 447, Address: 0x10184b4, Func Offset: 0x544
	// Line 448, Address: 0x10184c4, Func Offset: 0x554
	// Line 449, Address: 0x10184d4, Func Offset: 0x564
	// Line 450, Address: 0x10184e4, Func Offset: 0x574
	// Line 451, Address: 0x10184f4, Func Offset: 0x584
	// Line 452, Address: 0x1018504, Func Offset: 0x594
	// Line 453, Address: 0x1018514, Func Offset: 0x5a4
	// Line 454, Address: 0x1018524, Func Offset: 0x5b4
	// Line 455, Address: 0x1018534, Func Offset: 0x5c4
	// Line 456, Address: 0x1018544, Func Offset: 0x5d4
	// Line 457, Address: 0x1018554, Func Offset: 0x5e4
	// Line 458, Address: 0x1018564, Func Offset: 0x5f4
	// Line 459, Address: 0x101856c, Func Offset: 0x5fc
	// Line 461, Address: 0x1018574, Func Offset: 0x604
	// Line 464, Address: 0x101857c, Func Offset: 0x60c
	// Line 465, Address: 0x101858c, Func Offset: 0x61c
	// Line 466, Address: 0x1018594, Func Offset: 0x624
	// Line 469, Address: 0x101859c, Func Offset: 0x62c
	// Line 470, Address: 0x10185b0, Func Offset: 0x640
	// Line 471, Address: 0x10185b4, Func Offset: 0x644
	// Func End, Address: 0x10185c4, Func Offset: 0x654
}

// 
// Start address: 0x10185d0
void game_init()
{
	// Line 475, Address: 0x10185d0, Func Offset: 0
	// Line 477, Address: 0x10185d8, Func Offset: 0x8
	// Line 478, Address: 0x10185e0, Func Offset: 0x10
	// Line 481, Address: 0x10185e8, Func Offset: 0x18
	// Line 482, Address: 0x10185f0, Func Offset: 0x20
	// Line 483, Address: 0x101861c, Func Offset: 0x4c
	// Line 487, Address: 0x1018628, Func Offset: 0x58
	// Line 488, Address: 0x1018630, Func Offset: 0x60
	// Line 489, Address: 0x1018638, Func Offset: 0x68
	// Line 490, Address: 0x1018640, Func Offset: 0x70
	// Line 492, Address: 0x1018648, Func Offset: 0x78
	// Line 493, Address: 0x1018660, Func Offset: 0x90
	// Line 494, Address: 0x1018674, Func Offset: 0xa4
	// Line 495, Address: 0x101867c, Func Offset: 0xac
	// Line 496, Address: 0x1018684, Func Offset: 0xb4
	// Line 497, Address: 0x1018690, Func Offset: 0xc0
	// Line 498, Address: 0x1018698, Func Offset: 0xc8
	// Line 499, Address: 0x10186a0, Func Offset: 0xd0
	// Line 500, Address: 0x10186a8, Func Offset: 0xd8
	// Line 501, Address: 0x10186b0, Func Offset: 0xe0
	// Line 502, Address: 0x10186bc, Func Offset: 0xec
	// Line 503, Address: 0x10186d0, Func Offset: 0x100
	// Line 505, Address: 0x10186dc, Func Offset: 0x10c
	// Line 507, Address: 0x10186e4, Func Offset: 0x114
	// Line 511, Address: 0x10186f8, Func Offset: 0x128
	// Line 515, Address: 0x1018700, Func Offset: 0x130
	// Line 516, Address: 0x1018708, Func Offset: 0x138
	// Line 517, Address: 0x1018728, Func Offset: 0x158
	// Line 518, Address: 0x1018748, Func Offset: 0x178
	// Line 519, Address: 0x1018768, Func Offset: 0x198
	// Line 520, Address: 0x1018788, Func Offset: 0x1b8
	// Line 524, Address: 0x10187a8, Func Offset: 0x1d8
	// Line 525, Address: 0x10187b0, Func Offset: 0x1e0
	// Line 526, Address: 0x10187b8, Func Offset: 0x1e8
	// Line 527, Address: 0x10187c0, Func Offset: 0x1f0
	// Line 528, Address: 0x10187c8, Func Offset: 0x1f8
	// Line 529, Address: 0x10187d0, Func Offset: 0x200
	// Line 530, Address: 0x10187d8, Func Offset: 0x208
	// Line 531, Address: 0x10187e0, Func Offset: 0x210
	// Line 532, Address: 0x10187e8, Func Offset: 0x218
	// Line 533, Address: 0x10187f0, Func Offset: 0x220
	// Line 534, Address: 0x10187f8, Func Offset: 0x228
	// Line 535, Address: 0x1018800, Func Offset: 0x230
	// Line 536, Address: 0x1018808, Func Offset: 0x238
	// Line 537, Address: 0x1018810, Func Offset: 0x240
	// Line 538, Address: 0x1018818, Func Offset: 0x248
	// Line 539, Address: 0x1018820, Func Offset: 0x250
	// Line 540, Address: 0x1018828, Func Offset: 0x258
	// Line 541, Address: 0x1018848, Func Offset: 0x278
	// Line 544, Address: 0x1018868, Func Offset: 0x298
	// Line 545, Address: 0x1018870, Func Offset: 0x2a0
	// Line 546, Address: 0x1018878, Func Offset: 0x2a8
	// Line 547, Address: 0x1018880, Func Offset: 0x2b0
	// Line 548, Address: 0x1018888, Func Offset: 0x2b8
	// Line 549, Address: 0x1018890, Func Offset: 0x2c0
	// Line 550, Address: 0x1018898, Func Offset: 0x2c8
	// Line 551, Address: 0x10188a0, Func Offset: 0x2d0
	// Line 552, Address: 0x10188a8, Func Offset: 0x2d8
	// Line 553, Address: 0x10188b0, Func Offset: 0x2e0
	// Line 554, Address: 0x10188b8, Func Offset: 0x2e8
	// Line 555, Address: 0x10188c0, Func Offset: 0x2f0
	// Line 556, Address: 0x10188c8, Func Offset: 0x2f8
	// Line 557, Address: 0x10188d0, Func Offset: 0x300
	// Line 558, Address: 0x10188d8, Func Offset: 0x308
	// Line 559, Address: 0x10188e0, Func Offset: 0x310
	// Line 560, Address: 0x10188e8, Func Offset: 0x318
	// Line 561, Address: 0x10188f0, Func Offset: 0x320
	// Line 562, Address: 0x10188f8, Func Offset: 0x328
	// Line 563, Address: 0x1018900, Func Offset: 0x330
	// Line 564, Address: 0x1018908, Func Offset: 0x338
	// Line 565, Address: 0x1018910, Func Offset: 0x340
	// Line 566, Address: 0x1018918, Func Offset: 0x348
	// Line 567, Address: 0x1018920, Func Offset: 0x350
	// Line 568, Address: 0x1018928, Func Offset: 0x358
	// Line 569, Address: 0x1018930, Func Offset: 0x360
	// Line 570, Address: 0x1018938, Func Offset: 0x368
	// Line 571, Address: 0x1018940, Func Offset: 0x370
	// Line 572, Address: 0x1018948, Func Offset: 0x378
	// Line 573, Address: 0x1018950, Func Offset: 0x380
	// Line 574, Address: 0x1018958, Func Offset: 0x388
	// Line 575, Address: 0x1018960, Func Offset: 0x390
	// Line 576, Address: 0x1018968, Func Offset: 0x398
	// Line 577, Address: 0x1018970, Func Offset: 0x3a0
	// Line 578, Address: 0x1018978, Func Offset: 0x3a8
	// Line 579, Address: 0x1018980, Func Offset: 0x3b0
	// Line 580, Address: 0x1018988, Func Offset: 0x3b8
	// Line 581, Address: 0x1018990, Func Offset: 0x3c0
	// Line 582, Address: 0x1018998, Func Offset: 0x3c8
	// Line 583, Address: 0x10189a0, Func Offset: 0x3d0
	// Line 584, Address: 0x10189a8, Func Offset: 0x3d8
	// Line 585, Address: 0x10189b0, Func Offset: 0x3e0
	// Line 586, Address: 0x10189b8, Func Offset: 0x3e8
	// Line 587, Address: 0x10189c0, Func Offset: 0x3f0
	// Line 588, Address: 0x10189c8, Func Offset: 0x3f8
	// Line 589, Address: 0x10189d0, Func Offset: 0x400
	// Line 590, Address: 0x10189d8, Func Offset: 0x408
	// Line 591, Address: 0x10189e0, Func Offset: 0x410
	// Line 592, Address: 0x10189e8, Func Offset: 0x418
	// Line 593, Address: 0x1018a08, Func Offset: 0x438
	// Line 594, Address: 0x1018a10, Func Offset: 0x440
	// Line 595, Address: 0x1018a18, Func Offset: 0x448
	// Line 596, Address: 0x1018a20, Func Offset: 0x450
	// Line 597, Address: 0x1018a28, Func Offset: 0x458
	// Line 598, Address: 0x1018a30, Func Offset: 0x460
	// Line 599, Address: 0x1018a38, Func Offset: 0x468
	// Line 600, Address: 0x1018a40, Func Offset: 0x470
	// Line 601, Address: 0x1018a48, Func Offset: 0x478
	// Line 602, Address: 0x1018a50, Func Offset: 0x480
	// Line 603, Address: 0x1018a58, Func Offset: 0x488
	// Line 604, Address: 0x1018a60, Func Offset: 0x490
	// Line 605, Address: 0x1018a68, Func Offset: 0x498
	// Line 606, Address: 0x1018a70, Func Offset: 0x4a0
	// Line 607, Address: 0x1018a78, Func Offset: 0x4a8
	// Line 608, Address: 0x1018a80, Func Offset: 0x4b0
	// Line 609, Address: 0x1018a88, Func Offset: 0x4b8
	// Line 610, Address: 0x1018a90, Func Offset: 0x4c0
	// Line 611, Address: 0x1018a98, Func Offset: 0x4c8
	// Line 612, Address: 0x1018aa0, Func Offset: 0x4d0
	// Line 613, Address: 0x1018aa8, Func Offset: 0x4d8
	// Line 614, Address: 0x1018ab0, Func Offset: 0x4e0
	// Line 615, Address: 0x1018ab8, Func Offset: 0x4e8
	// Line 616, Address: 0x1018ac0, Func Offset: 0x4f0
	// Line 617, Address: 0x1018ae0, Func Offset: 0x510
	// Line 618, Address: 0x1018b00, Func Offset: 0x530
	// Line 619, Address: 0x1018b08, Func Offset: 0x538
	// Line 620, Address: 0x1018b10, Func Offset: 0x540
	// Line 621, Address: 0x1018b18, Func Offset: 0x548
	// Line 622, Address: 0x1018b20, Func Offset: 0x550
	// Line 623, Address: 0x1018b28, Func Offset: 0x558
	// Line 624, Address: 0x1018b30, Func Offset: 0x560
	// Line 625, Address: 0x1018b38, Func Offset: 0x568
	// Line 626, Address: 0x1018b40, Func Offset: 0x570
	// Line 627, Address: 0x1018b48, Func Offset: 0x578
	// Line 628, Address: 0x1018b50, Func Offset: 0x580
	// Line 629, Address: 0x1018b58, Func Offset: 0x588
	// Line 630, Address: 0x1018b60, Func Offset: 0x590
	// Line 631, Address: 0x1018b68, Func Offset: 0x598
	// Line 632, Address: 0x1018b70, Func Offset: 0x5a0
	// Line 635, Address: 0x1018b90, Func Offset: 0x5c0
	// Line 638, Address: 0x1018b98, Func Offset: 0x5c8
	// Line 639, Address: 0x1018ba0, Func Offset: 0x5d0
	// Line 640, Address: 0x1018ba8, Func Offset: 0x5d8
	// Line 641, Address: 0x1018bb0, Func Offset: 0x5e0
	// Line 642, Address: 0x1018bb8, Func Offset: 0x5e8
	// Line 643, Address: 0x1018bc0, Func Offset: 0x5f0
	// Line 644, Address: 0x1018bc8, Func Offset: 0x5f8
	// Line 645, Address: 0x1018bd0, Func Offset: 0x600
	// Line 646, Address: 0x1018bd8, Func Offset: 0x608
	// Line 647, Address: 0x1018be0, Func Offset: 0x610
	// Line 648, Address: 0x1018be8, Func Offset: 0x618
	// Line 649, Address: 0x1018bf0, Func Offset: 0x620
	// Line 650, Address: 0x1018bf8, Func Offset: 0x628
	// Line 651, Address: 0x1018c00, Func Offset: 0x630
	// Line 652, Address: 0x1018c08, Func Offset: 0x638
	// Line 653, Address: 0x1018c10, Func Offset: 0x640
	// Line 654, Address: 0x1018c18, Func Offset: 0x648
	// Line 655, Address: 0x1018c20, Func Offset: 0x650
	// Line 656, Address: 0x1018c28, Func Offset: 0x658
	// Line 657, Address: 0x1018c30, Func Offset: 0x660
	// Line 658, Address: 0x1018c38, Func Offset: 0x668
	// Line 659, Address: 0x1018c40, Func Offset: 0x670
	// Line 660, Address: 0x1018c48, Func Offset: 0x678
	// Line 661, Address: 0x1018c50, Func Offset: 0x680
	// Line 662, Address: 0x1018c58, Func Offset: 0x688
	// Line 663, Address: 0x1018c60, Func Offset: 0x690
	// Line 664, Address: 0x1018c68, Func Offset: 0x698
	// Line 665, Address: 0x1018c70, Func Offset: 0x6a0
	// Line 666, Address: 0x1018c78, Func Offset: 0x6a8
	// Line 667, Address: 0x1018c80, Func Offset: 0x6b0
	// Line 668, Address: 0x1018c88, Func Offset: 0x6b8
	// Line 669, Address: 0x1018c90, Func Offset: 0x6c0
	// Line 670, Address: 0x1018c98, Func Offset: 0x6c8
	// Line 671, Address: 0x1018ca0, Func Offset: 0x6d0
	// Line 672, Address: 0x1018ca8, Func Offset: 0x6d8
	// Line 673, Address: 0x1018cb0, Func Offset: 0x6e0
	// Line 674, Address: 0x1018cb8, Func Offset: 0x6e8
	// Line 675, Address: 0x1018cc0, Func Offset: 0x6f0
	// Line 676, Address: 0x1018cc8, Func Offset: 0x6f8
	// Line 677, Address: 0x1018cd0, Func Offset: 0x700
	// Line 678, Address: 0x1018cd8, Func Offset: 0x708
	// Line 679, Address: 0x1018ce0, Func Offset: 0x710
	// Line 680, Address: 0x1018ce8, Func Offset: 0x718
	// Line 682, Address: 0x1018d08, Func Offset: 0x738
	// Line 685, Address: 0x1018d10, Func Offset: 0x740
	// Line 687, Address: 0x1018d1c, Func Offset: 0x74c
	// Line 688, Address: 0x1018d28, Func Offset: 0x758
	// Line 691, Address: 0x1018d34, Func Offset: 0x764
	// Line 692, Address: 0x1018d3c, Func Offset: 0x76c
	// Line 693, Address: 0x1018d44, Func Offset: 0x774
	// Line 695, Address: 0x1018d58, Func Offset: 0x788
	// Line 696, Address: 0x1018d60, Func Offset: 0x790
	// Line 698, Address: 0x1018d68, Func Offset: 0x798
	// Line 699, Address: 0x1018d70, Func Offset: 0x7a0
	// Line 704, Address: 0x1018d78, Func Offset: 0x7a8
	// Line 705, Address: 0x1018d80, Func Offset: 0x7b0
	// Line 706, Address: 0x1018d8c, Func Offset: 0x7bc
	// Line 707, Address: 0x1018d98, Func Offset: 0x7c8
	// Line 708, Address: 0x1018da4, Func Offset: 0x7d4
	// Line 709, Address: 0x1018db0, Func Offset: 0x7e0
	// Line 713, Address: 0x1018dbc, Func Offset: 0x7ec
	// Line 714, Address: 0x1018dc8, Func Offset: 0x7f8
	// Line 716, Address: 0x1018dd4, Func Offset: 0x804
	// Line 717, Address: 0x1018dec, Func Offset: 0x81c
	// Line 718, Address: 0x1018e00, Func Offset: 0x830
	// Line 719, Address: 0x1018e0c, Func Offset: 0x83c
	// Line 720, Address: 0x1018e18, Func Offset: 0x848
	// Line 724, Address: 0x1018e20, Func Offset: 0x850
	// Line 725, Address: 0x1018e28, Func Offset: 0x858
	// Line 726, Address: 0x1018e30, Func Offset: 0x860
	// Line 727, Address: 0x1018e38, Func Offset: 0x868
	// Line 728, Address: 0x1018e40, Func Offset: 0x870
	// Line 729, Address: 0x1018e48, Func Offset: 0x878
	// Line 731, Address: 0x1018e50, Func Offset: 0x880
	// Line 732, Address: 0x1018e64, Func Offset: 0x894
	// Line 733, Address: 0x1018e6c, Func Offset: 0x89c
	// Line 734, Address: 0x1018e74, Func Offset: 0x8a4
	// Line 737, Address: 0x1018e7c, Func Offset: 0x8ac
	// Line 738, Address: 0x1018eb4, Func Offset: 0x8e4
	// Line 739, Address: 0x1018edc, Func Offset: 0x90c
	// Line 740, Address: 0x1018ee4, Func Offset: 0x914
	// Line 741, Address: 0x1018f14, Func Offset: 0x944
	// Line 743, Address: 0x1018f20, Func Offset: 0x950
	// Line 745, Address: 0x1018f2c, Func Offset: 0x95c
	// Line 746, Address: 0x1018f34, Func Offset: 0x964
	// Line 747, Address: 0x1018f40, Func Offset: 0x970
	// Line 749, Address: 0x1018f4c, Func Offset: 0x97c
	// Line 751, Address: 0x1018f54, Func Offset: 0x984
	// Line 754, Address: 0x1018f60, Func Offset: 0x990
	// Line 755, Address: 0x1018f74, Func Offset: 0x9a4
	// Line 758, Address: 0x1018f80, Func Offset: 0x9b0
	// Line 759, Address: 0x1018f88, Func Offset: 0x9b8
	// Line 760, Address: 0x1018f9c, Func Offset: 0x9cc
	// Line 761, Address: 0x1018fa4, Func Offset: 0x9d4
	// Line 763, Address: 0x1018fb8, Func Offset: 0x9e8
	// Line 765, Address: 0x1018fd0, Func Offset: 0xa00
	// Line 766, Address: 0x1018fd8, Func Offset: 0xa08
	// Line 771, Address: 0x1018fe0, Func Offset: 0xa10
	// Line 774, Address: 0x1018fe8, Func Offset: 0xa18
	// Func End, Address: 0x1018ff8, Func Offset: 0xa28
}

// 
// Start address: 0x1019000
void play_act_set()
{
	// Line 780, Address: 0x1019000, Func Offset: 0
	// Line 781, Address: 0x101900c, Func Offset: 0xc
	// Line 782, Address: 0x101901c, Func Offset: 0x1c
	// Line 784, Address: 0x1019028, Func Offset: 0x28
	// Func End, Address: 0x1019030, Func Offset: 0x30
}

// 
// Start address: 0x1019030
void flow_act_set()
{
	int i;
	int time;
	int fcnt;
	_anon1* pAct;
	// Line 787, Address: 0x1019030, Func Offset: 0
	// Line 791, Address: 0x1019044, Func Offset: 0x14
	// Line 792, Address: 0x1019054, Func Offset: 0x24
	// Line 793, Address: 0x1019068, Func Offset: 0x38
	// Line 794, Address: 0x1019070, Func Offset: 0x40
	// Line 795, Address: 0x1019074, Func Offset: 0x44
	// Line 796, Address: 0x101907c, Func Offset: 0x4c
	// Line 798, Address: 0x1019080, Func Offset: 0x50
	// Line 800, Address: 0x1019088, Func Offset: 0x58
	// Line 801, Address: 0x10190a8, Func Offset: 0x78
	// Line 802, Address: 0x10190c8, Func Offset: 0x98
	// Line 803, Address: 0x10190cc, Func Offset: 0x9c
	// Line 804, Address: 0x10190d0, Func Offset: 0xa0
	// Line 805, Address: 0x10190d4, Func Offset: 0xa4
	// Line 808, Address: 0x10190dc, Func Offset: 0xac
	// Func End, Address: 0x10190f8, Func Offset: 0xc8
}

// 
// Start address: 0x1019100
void scdset()
{
	// Line 813, Address: 0x1019100, Func Offset: 0
	// Line 815, Address: 0x1019110, Func Offset: 0x10
	// Func End, Address: 0x1019118, Func Offset: 0x18
}

// 
// Start address: 0x1019120
void syspatchg()
{
	// Line 819, Address: 0x1019120, Func Offset: 0
	// Line 820, Address: 0x1019148, Func Offset: 0x28
	// Line 821, Address: 0x1019154, Func Offset: 0x34
	// Line 823, Address: 0x1019174, Func Offset: 0x54
	// Line 824, Address: 0x101919c, Func Offset: 0x7c
	// Line 825, Address: 0x10191a8, Func Offset: 0x88
	// Line 827, Address: 0x10191c8, Func Offset: 0xa8
	// Line 828, Address: 0x10191f0, Func Offset: 0xd0
	// Line 829, Address: 0x10191fc, Func Offset: 0xdc
	// Line 831, Address: 0x101922c, Func Offset: 0x10c
	// Line 832, Address: 0x101923c, Func Offset: 0x11c
	// Line 835, Address: 0x1019264, Func Offset: 0x144
	// Line 836, Address: 0x1019288, Func Offset: 0x168
	// Line 839, Address: 0x101929c, Func Offset: 0x17c
	// Func End, Address: 0x10192a4, Func Offset: 0x184
}

// 
// Start address: 0x10192b0
void back_to_cnt()
{
	// Line 843, Address: 0x10192b0, Func Offset: 0
	// Line 844, Address: 0x10192c0, Func Offset: 0x10
	// Line 845, Address: 0x10192d0, Func Offset: 0x20
	// Line 849, Address: 0x10192e4, Func Offset: 0x34
	// Func End, Address: 0x10192ec, Func Offset: 0x3c
}

// 
// Start address: 0x10192f0
void bye_cnt()
{
	// Line 855, Address: 0x10192f0, Func Offset: 0
	// Line 856, Address: 0x1019300, Func Offset: 0x10
	// Line 859, Address: 0x1019314, Func Offset: 0x24
	// Line 860, Address: 0x1019324, Func Offset: 0x34
	// Line 864, Address: 0x1019338, Func Offset: 0x48
	// Func End, Address: 0x1019340, Func Offset: 0x50
}

// 
// Start address: 0x1019340
void sdfdout()
{
	// Line 869, Address: 0x1019340, Func Offset: 0
	// Line 870, Address: 0x1019348, Func Offset: 0x8
	// Line 871, Address: 0x1019354, Func Offset: 0x14
	// Line 874, Address: 0x101936c, Func Offset: 0x2c
	// Line 875, Address: 0x1019380, Func Offset: 0x40
	// Line 877, Address: 0x1019398, Func Offset: 0x58
	// Line 878, Address: 0x10193b8, Func Offset: 0x78
	// Line 879, Address: 0x10193c4, Func Offset: 0x84
	// Line 883, Address: 0x10193cc, Func Offset: 0x8c
	// Line 885, Address: 0x10193d8, Func Offset: 0x98
	// Func End, Address: 0x10193e8, Func Offset: 0xa8
}

// 
// Start address: 0x10193f0
void sdfdin()
{
	// Line 888, Address: 0x10193f0, Func Offset: 0
	// Line 889, Address: 0x10193f8, Func Offset: 0x8
	// Line 892, Address: 0x1019410, Func Offset: 0x20
	// Line 893, Address: 0x1019424, Func Offset: 0x34
	// Line 895, Address: 0x101943c, Func Offset: 0x4c
	// Line 896, Address: 0x101945c, Func Offset: 0x6c
	// Line 897, Address: 0x1019468, Func Offset: 0x78
	// Line 901, Address: 0x1019470, Func Offset: 0x80
	// Line 903, Address: 0x101947c, Func Offset: 0x8c
	// Func End, Address: 0x101948c, Func Offset: 0x9c
}

// 
// Start address: 0x1019490
void da_set()
{
	unsigned short wD0;
	unsigned char da_tbl[4][7];
	// Line 910, Address: 0x1019490, Func Offset: 0
	// Line 922, Address: 0x101949c, Func Offset: 0xc
	// Line 923, Address: 0x10194b4, Func Offset: 0x24
	// Line 924, Address: 0x10194c4, Func Offset: 0x34
	// Line 925, Address: 0x10194d4, Func Offset: 0x44
	// Line 929, Address: 0x10194e8, Func Offset: 0x58
	// Line 932, Address: 0x1019528, Func Offset: 0x98
	// Func End, Address: 0x101953c, Func Offset: 0xac
}

