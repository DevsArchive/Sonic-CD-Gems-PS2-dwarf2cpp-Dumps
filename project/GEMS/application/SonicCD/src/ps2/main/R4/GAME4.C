typedef struct _anon0;
typedef struct tagPALETTEENTRY;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
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
typedef struct dlink_export;

typedef void(*type_1)(int, int);
typedef void(*type_2)();
typedef void(*type_3)(char***, void**);
typedef void(*type_4)(char*, char*);
typedef void(*type_6)();
typedef void(*type_10)(short, short);
typedef int(*type_11)();
typedef void(*type_12)();
typedef int(*type_13)();
typedef int(*type_14)();
typedef void(*type_15)(unsigned int);
typedef void(*type_17)(unsigned short, unsigned char, char*);
typedef void(*type_18)(void*, unsigned char, int);
typedef void(*type_19)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_21)(void*, void*, int);
typedef int(*type_26)(char*);
typedef int(*type_28)(int, void*, int);
typedef int(*type_33)(int);
typedef void(*type_36)();
typedef void(*type_38)(int);
typedef int(*type_41)(int, int, int, int);
typedef void(*type_43)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_46)();
typedef void(*type_47)(short);
typedef void(*type_48)(short);
typedef void(*type_49)(short);
typedef void(*type_51)(char*);

typedef _anon14 type_0[20];
typedef unsigned short type_5[12];
typedef unsigned char type_7[6];
typedef _anon10 type_8[0];
typedef _anon14 type_9[0];
typedef unsigned char type_16[1000];
typedef _anon3 type_20[700];
typedef int type_22[128];
typedef char type_23[4];
typedef unsigned char type_24[7];
typedef unsigned char type_25[7];
typedef unsigned char type_27[4096];
typedef _anon7 type_29[192];
typedef unsigned char type_30[2];
typedef unsigned char type_31[22];
typedef unsigned char type_32[3];
typedef unsigned char type_34[4];
typedef unsigned char type_35[4][7];
typedef void(*type_37)()[3];
typedef _anon6 type_39[8];
typedef _anon1* type_40[63];
typedef unsigned char type_42[766];
typedef _anon1 type_44[128];
typedef unsigned char type_45[766];
typedef unsigned char type_50[32];
typedef unsigned char type_52[6];

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
_anon10 byecnt1;
_anon10 byecnt0;
_anon12 swdata;
unsigned char enecgflg;
unsigned char plautoflag;
short pl_air;
unsigned char waterspeed;
unsigned char waterflag;
unsigned char water_flag;
short watermoveposi;
short waterposi_m;
short waterposi;
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
unsigned char zone1scd[1000];
_anon10 hintposi;
_anon10 watercolitbl[0];
dlink_export ExportedFunctions;
int(*sGetFileSize)(int);

void DLL_meminit(char*** pBufTbl, void** pFuncTbl);
void DLL_memfree();
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
void water1chk();
void water2chk();
void water3chk();
void watercntsub();
void watercnt();
void watercoli();

// 
// Start address: 0x1017bf0
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	// Line 136, Address: 0x1017bf0, Func Offset: 0
	// Line 139, Address: 0x1017c00, Func Offset: 0x10
	// Line 140, Address: 0x1017c18, Func Offset: 0x28
	// Line 141, Address: 0x1017c30, Func Offset: 0x40
	// Line 142, Address: 0x1017c48, Func Offset: 0x58
	// Line 143, Address: 0x1017c60, Func Offset: 0x70
	// Line 144, Address: 0x1017c78, Func Offset: 0x88
	// Line 145, Address: 0x1017c90, Func Offset: 0xa0
	// Line 146, Address: 0x1017ca8, Func Offset: 0xb8
	// Line 147, Address: 0x1017cb4, Func Offset: 0xc4
	// Line 148, Address: 0x1017cc0, Func Offset: 0xd0
	// Line 149, Address: 0x1017ccc, Func Offset: 0xdc
	// Line 151, Address: 0x1017ce4, Func Offset: 0xf4
	// Line 152, Address: 0x1017cf0, Func Offset: 0x100
	// Line 153, Address: 0x1017cfc, Func Offset: 0x10c
	// Line 154, Address: 0x1017d14, Func Offset: 0x124
	// Line 155, Address: 0x1017d2c, Func Offset: 0x13c
	// Line 156, Address: 0x1017d38, Func Offset: 0x148
	// Line 157, Address: 0x1017d50, Func Offset: 0x160
	// Line 158, Address: 0x1017d5c, Func Offset: 0x16c
	// Line 159, Address: 0x1017d68, Func Offset: 0x178
	// Line 160, Address: 0x1017d74, Func Offset: 0x184
	// Line 161, Address: 0x1017d8c, Func Offset: 0x19c
	// Line 162, Address: 0x1017da4, Func Offset: 0x1b4
	// Line 163, Address: 0x1017dbc, Func Offset: 0x1cc
	// Line 164, Address: 0x1017dd4, Func Offset: 0x1e4
	// Line 165, Address: 0x1017dec, Func Offset: 0x1fc
	// Line 170, Address: 0x1017df8, Func Offset: 0x208
	// Line 171, Address: 0x1017e14, Func Offset: 0x224
	// Line 172, Address: 0x1017e30, Func Offset: 0x240
	// Line 173, Address: 0x1017e4c, Func Offset: 0x25c
	// Line 174, Address: 0x1017e68, Func Offset: 0x278
	// Line 175, Address: 0x1017e84, Func Offset: 0x294
	// Line 176, Address: 0x1017ea0, Func Offset: 0x2b0
	// Line 177, Address: 0x1017eb8, Func Offset: 0x2c8
	// Line 178, Address: 0x1017ed0, Func Offset: 0x2e0
	// Line 179, Address: 0x1017edc, Func Offset: 0x2ec
	// Line 181, Address: 0x1017ef4, Func Offset: 0x304
	// Line 182, Address: 0x1017f08, Func Offset: 0x318
	// Line 183, Address: 0x1017f1c, Func Offset: 0x32c
	// Line 184, Address: 0x1017f30, Func Offset: 0x340
	// Line 185, Address: 0x1017f44, Func Offset: 0x354
	// Line 186, Address: 0x1017f58, Func Offset: 0x368
	// Line 187, Address: 0x1017f6c, Func Offset: 0x37c
	// Line 188, Address: 0x1017f80, Func Offset: 0x390
	// Line 189, Address: 0x1017f94, Func Offset: 0x3a4
	// Line 190, Address: 0x1017fa8, Func Offset: 0x3b8
	// Line 191, Address: 0x1017fbc, Func Offset: 0x3cc
	// Line 192, Address: 0x1017fd0, Func Offset: 0x3e0
	// Line 193, Address: 0x1017fe4, Func Offset: 0x3f4
	// Line 194, Address: 0x1017ff8, Func Offset: 0x408
	// Line 196, Address: 0x101800c, Func Offset: 0x41c
	// Line 197, Address: 0x1018020, Func Offset: 0x430
	// Line 198, Address: 0x1018034, Func Offset: 0x444
	// Line 200, Address: 0x101805c, Func Offset: 0x46c
	// Line 203, Address: 0x1018070, Func Offset: 0x480
	// Func End, Address: 0x1018080, Func Offset: 0x490
}

// 
// Start address: 0x1018080
void DLL_memfree()
{
	// Line 207, Address: 0x1018080, Func Offset: 0
	// Func End, Address: 0x1018088, Func Offset: 0x8
}

// 
// Start address: 0x1018090
int Get_vscroll()
{
	// Line 211, Address: 0x1018090, Func Offset: 0
	// Line 212, Address: 0x1018098, Func Offset: 0x8
	// Func End, Address: 0x10180a0, Func Offset: 0x10
}

// 
// Start address: 0x10180a0
int Get_scra_h_posiw()
{
	// Line 215, Address: 0x10180a0, Func Offset: 0
	// Line 216, Address: 0x10180a8, Func Offset: 0x8
	// Func End, Address: 0x10180b0, Func Offset: 0x10
}

// 
// Start address: 0x10180b0
int Get_scrb_h_posiw()
{
	// Line 219, Address: 0x10180b0, Func Offset: 0
	// Line 220, Address: 0x10180b8, Func Offset: 0x8
	// Func End, Address: 0x10180c0, Func Offset: 0x10
}

// 
// Start address: 0x10180c0
void SetDebugFlag(unsigned int NewVal)
{
	// Line 223, Address: 0x10180c0, Func Offset: 0
	// Line 224, Address: 0x10180c8, Func Offset: 0x8
	// Line 225, Address: 0x10180f4, Func Offset: 0x34
	// Line 227, Address: 0x101810c, Func Offset: 0x4c
	// Func End, Address: 0x1018118, Func Offset: 0x58
}

// 
// Start address: 0x1018120
int game()
{
	// Line 232, Address: 0x1018120, Func Offset: 0
	// Line 233, Address: 0x1018128, Func Offset: 0x8
	// Line 234, Address: 0x1018140, Func Offset: 0x20
	// Line 235, Address: 0x1018150, Func Offset: 0x30
	// Line 236, Address: 0x1018168, Func Offset: 0x48
	// Line 237, Address: 0x1018188, Func Offset: 0x68
	// Line 238, Address: 0x1018198, Func Offset: 0x78
	// Line 239, Address: 0x10181ac, Func Offset: 0x8c
	// Line 240, Address: 0x10181b4, Func Offset: 0x94
	// Line 241, Address: 0x10181ec, Func Offset: 0xcc
	// Line 242, Address: 0x10181f8, Func Offset: 0xd8
	// Line 257, Address: 0x101820c, Func Offset: 0xec
	// Line 258, Address: 0x1018224, Func Offset: 0x104
	// Line 260, Address: 0x101822c, Func Offset: 0x10c
	// Line 262, Address: 0x1018248, Func Offset: 0x128
	// Line 263, Address: 0x1018250, Func Offset: 0x130
	// Line 264, Address: 0x1018258, Func Offset: 0x138
	// Line 265, Address: 0x1018260, Func Offset: 0x140
	// Line 266, Address: 0x101826c, Func Offset: 0x14c
	// Line 267, Address: 0x101827c, Func Offset: 0x15c
	// Line 268, Address: 0x1018290, Func Offset: 0x170
	// Line 269, Address: 0x10182b0, Func Offset: 0x190
	// Line 271, Address: 0x10182b8, Func Offset: 0x198
	// Line 272, Address: 0x10182c4, Func Offset: 0x1a4
	// Line 273, Address: 0x10182cc, Func Offset: 0x1ac
	// Line 276, Address: 0x10182d4, Func Offset: 0x1b4
	// Line 279, Address: 0x10182f8, Func Offset: 0x1d8
	// Line 280, Address: 0x1018314, Func Offset: 0x1f4
	// Line 281, Address: 0x101831c, Func Offset: 0x1fc
	// Line 282, Address: 0x1018330, Func Offset: 0x210
	// Line 283, Address: 0x1018338, Func Offset: 0x218
	// Line 285, Address: 0x1018340, Func Offset: 0x220
	// Line 288, Address: 0x1018358, Func Offset: 0x238
	// Line 292, Address: 0x1018368, Func Offset: 0x248
	// Line 293, Address: 0x101837c, Func Offset: 0x25c
	// Line 294, Address: 0x1018390, Func Offset: 0x270
	// Line 295, Address: 0x10183a4, Func Offset: 0x284
	// Line 296, Address: 0x10183b8, Func Offset: 0x298
	// Line 297, Address: 0x10183cc, Func Offset: 0x2ac
	// Line 298, Address: 0x10183e0, Func Offset: 0x2c0
	// Line 299, Address: 0x10183f4, Func Offset: 0x2d4
	// Line 300, Address: 0x1018408, Func Offset: 0x2e8
	// Line 301, Address: 0x101841c, Func Offset: 0x2fc
	// Line 302, Address: 0x1018430, Func Offset: 0x310
	// Line 303, Address: 0x1018444, Func Offset: 0x324
	// Line 304, Address: 0x1018458, Func Offset: 0x338
	// Line 305, Address: 0x101846c, Func Offset: 0x34c
	// Line 307, Address: 0x1018480, Func Offset: 0x360
	// Line 308, Address: 0x101849c, Func Offset: 0x37c
	// Line 310, Address: 0x10184a4, Func Offset: 0x384
	// Line 311, Address: 0x10184b8, Func Offset: 0x398
	// Line 312, Address: 0x10184cc, Func Offset: 0x3ac
	// Line 314, Address: 0x10184f4, Func Offset: 0x3d4
	// Line 316, Address: 0x1018510, Func Offset: 0x3f0
	// Line 317, Address: 0x1018598, Func Offset: 0x478
	// Line 318, Address: 0x10185a0, Func Offset: 0x480
	// Line 319, Address: 0x10185bc, Func Offset: 0x49c
	// Line 321, Address: 0x10185cc, Func Offset: 0x4ac
	// Line 323, Address: 0x10185e4, Func Offset: 0x4c4
	// Line 324, Address: 0x10185f4, Func Offset: 0x4d4
	// Line 325, Address: 0x10185fc, Func Offset: 0x4dc
	// Line 327, Address: 0x1018604, Func Offset: 0x4e4
	// Line 328, Address: 0x101861c, Func Offset: 0x4fc
	// Line 329, Address: 0x101862c, Func Offset: 0x50c
	// Line 330, Address: 0x101863c, Func Offset: 0x51c
	// Line 333, Address: 0x1018644, Func Offset: 0x524
	// Line 338, Address: 0x101864c, Func Offset: 0x52c
	// Line 339, Address: 0x1018654, Func Offset: 0x534
	// Line 340, Address: 0x101865c, Func Offset: 0x53c
	// Line 341, Address: 0x101866c, Func Offset: 0x54c
	// Line 344, Address: 0x1018674, Func Offset: 0x554
	// Line 347, Address: 0x101867c, Func Offset: 0x55c
	// Line 354, Address: 0x1018684, Func Offset: 0x564
	// Line 355, Address: 0x1018694, Func Offset: 0x574
	// Line 356, Address: 0x10186a4, Func Offset: 0x584
	// Line 357, Address: 0x10186b4, Func Offset: 0x594
	// Line 358, Address: 0x10186c4, Func Offset: 0x5a4
	// Line 359, Address: 0x10186d4, Func Offset: 0x5b4
	// Line 360, Address: 0x10186e4, Func Offset: 0x5c4
	// Line 361, Address: 0x10186f4, Func Offset: 0x5d4
	// Line 362, Address: 0x1018704, Func Offset: 0x5e4
	// Line 363, Address: 0x1018714, Func Offset: 0x5f4
	// Line 364, Address: 0x1018724, Func Offset: 0x604
	// Line 365, Address: 0x1018734, Func Offset: 0x614
	// Line 366, Address: 0x1018744, Func Offset: 0x624
	// Line 367, Address: 0x101874c, Func Offset: 0x62c
	// Line 369, Address: 0x1018754, Func Offset: 0x634
	// Line 370, Address: 0x1018764, Func Offset: 0x644
	// Line 371, Address: 0x101876c, Func Offset: 0x64c
	// Line 374, Address: 0x1018774, Func Offset: 0x654
	// Line 375, Address: 0x1018788, Func Offset: 0x668
	// Line 376, Address: 0x101878c, Func Offset: 0x66c
	// Func End, Address: 0x101879c, Func Offset: 0x67c
}

// 
// Start address: 0x10187a0
void game_init()
{
	unsigned short waterpositbl[12];
	// Line 380, Address: 0x10187a0, Func Offset: 0
	// Line 382, Address: 0x10187a8, Func Offset: 0x8
	// Line 390, Address: 0x10187dc, Func Offset: 0x3c
	// Line 391, Address: 0x10187e4, Func Offset: 0x44
	// Line 393, Address: 0x10187ec, Func Offset: 0x4c
	// Line 394, Address: 0x10187f4, Func Offset: 0x54
	// Line 395, Address: 0x10187fc, Func Offset: 0x5c
	// Line 396, Address: 0x1018828, Func Offset: 0x88
	// Line 400, Address: 0x1018834, Func Offset: 0x94
	// Line 401, Address: 0x101883c, Func Offset: 0x9c
	// Line 402, Address: 0x1018844, Func Offset: 0xa4
	// Line 403, Address: 0x101884c, Func Offset: 0xac
	// Line 405, Address: 0x1018854, Func Offset: 0xb4
	// Line 406, Address: 0x101886c, Func Offset: 0xcc
	// Line 407, Address: 0x1018880, Func Offset: 0xe0
	// Line 408, Address: 0x1018888, Func Offset: 0xe8
	// Line 409, Address: 0x1018890, Func Offset: 0xf0
	// Line 410, Address: 0x101889c, Func Offset: 0xfc
	// Line 411, Address: 0x10188a4, Func Offset: 0x104
	// Line 412, Address: 0x10188ac, Func Offset: 0x10c
	// Line 413, Address: 0x10188b4, Func Offset: 0x114
	// Line 414, Address: 0x10188bc, Func Offset: 0x11c
	// Line 415, Address: 0x10188c8, Func Offset: 0x128
	// Line 416, Address: 0x10188dc, Func Offset: 0x13c
	// Line 418, Address: 0x10188e8, Func Offset: 0x148
	// Line 420, Address: 0x10188f0, Func Offset: 0x150
	// Line 424, Address: 0x1018904, Func Offset: 0x164
	// Line 428, Address: 0x101890c, Func Offset: 0x16c
	// Line 429, Address: 0x1018914, Func Offset: 0x174
	// Line 430, Address: 0x1018934, Func Offset: 0x194
	// Line 431, Address: 0x1018954, Func Offset: 0x1b4
	// Line 432, Address: 0x1018974, Func Offset: 0x1d4
	// Line 433, Address: 0x1018994, Func Offset: 0x1f4
	// Line 437, Address: 0x10189b4, Func Offset: 0x214
	// Line 438, Address: 0x10189bc, Func Offset: 0x21c
	// Line 439, Address: 0x10189c4, Func Offset: 0x224
	// Line 440, Address: 0x10189cc, Func Offset: 0x22c
	// Line 441, Address: 0x10189d4, Func Offset: 0x234
	// Line 442, Address: 0x10189dc, Func Offset: 0x23c
	// Line 443, Address: 0x10189e4, Func Offset: 0x244
	// Line 444, Address: 0x10189ec, Func Offset: 0x24c
	// Line 445, Address: 0x10189f4, Func Offset: 0x254
	// Line 446, Address: 0x10189fc, Func Offset: 0x25c
	// Line 447, Address: 0x1018a04, Func Offset: 0x264
	// Line 448, Address: 0x1018a0c, Func Offset: 0x26c
	// Line 449, Address: 0x1018a14, Func Offset: 0x274
	// Line 450, Address: 0x1018a1c, Func Offset: 0x27c
	// Line 451, Address: 0x1018a24, Func Offset: 0x284
	// Line 452, Address: 0x1018a2c, Func Offset: 0x28c
	// Line 453, Address: 0x1018a34, Func Offset: 0x294
	// Line 454, Address: 0x1018a54, Func Offset: 0x2b4
	// Line 457, Address: 0x1018a74, Func Offset: 0x2d4
	// Line 458, Address: 0x1018a7c, Func Offset: 0x2dc
	// Line 459, Address: 0x1018a84, Func Offset: 0x2e4
	// Line 460, Address: 0x1018a8c, Func Offset: 0x2ec
	// Line 461, Address: 0x1018a94, Func Offset: 0x2f4
	// Line 462, Address: 0x1018a9c, Func Offset: 0x2fc
	// Line 463, Address: 0x1018aa4, Func Offset: 0x304
	// Line 464, Address: 0x1018aac, Func Offset: 0x30c
	// Line 465, Address: 0x1018ab4, Func Offset: 0x314
	// Line 466, Address: 0x1018abc, Func Offset: 0x31c
	// Line 467, Address: 0x1018ac4, Func Offset: 0x324
	// Line 468, Address: 0x1018acc, Func Offset: 0x32c
	// Line 469, Address: 0x1018ad4, Func Offset: 0x334
	// Line 470, Address: 0x1018adc, Func Offset: 0x33c
	// Line 471, Address: 0x1018ae4, Func Offset: 0x344
	// Line 472, Address: 0x1018aec, Func Offset: 0x34c
	// Line 473, Address: 0x1018af4, Func Offset: 0x354
	// Line 474, Address: 0x1018afc, Func Offset: 0x35c
	// Line 475, Address: 0x1018b04, Func Offset: 0x364
	// Line 476, Address: 0x1018b0c, Func Offset: 0x36c
	// Line 477, Address: 0x1018b14, Func Offset: 0x374
	// Line 478, Address: 0x1018b1c, Func Offset: 0x37c
	// Line 479, Address: 0x1018b24, Func Offset: 0x384
	// Line 480, Address: 0x1018b2c, Func Offset: 0x38c
	// Line 481, Address: 0x1018b34, Func Offset: 0x394
	// Line 482, Address: 0x1018b3c, Func Offset: 0x39c
	// Line 483, Address: 0x1018b44, Func Offset: 0x3a4
	// Line 484, Address: 0x1018b4c, Func Offset: 0x3ac
	// Line 485, Address: 0x1018b54, Func Offset: 0x3b4
	// Line 486, Address: 0x1018b5c, Func Offset: 0x3bc
	// Line 487, Address: 0x1018b64, Func Offset: 0x3c4
	// Line 488, Address: 0x1018b6c, Func Offset: 0x3cc
	// Line 489, Address: 0x1018b74, Func Offset: 0x3d4
	// Line 490, Address: 0x1018b7c, Func Offset: 0x3dc
	// Line 491, Address: 0x1018b84, Func Offset: 0x3e4
	// Line 492, Address: 0x1018b8c, Func Offset: 0x3ec
	// Line 493, Address: 0x1018b94, Func Offset: 0x3f4
	// Line 494, Address: 0x1018b9c, Func Offset: 0x3fc
	// Line 495, Address: 0x1018ba4, Func Offset: 0x404
	// Line 496, Address: 0x1018bac, Func Offset: 0x40c
	// Line 497, Address: 0x1018bb4, Func Offset: 0x414
	// Line 498, Address: 0x1018bbc, Func Offset: 0x41c
	// Line 499, Address: 0x1018bc4, Func Offset: 0x424
	// Line 500, Address: 0x1018bcc, Func Offset: 0x42c
	// Line 501, Address: 0x1018bd4, Func Offset: 0x434
	// Line 502, Address: 0x1018bdc, Func Offset: 0x43c
	// Line 503, Address: 0x1018be4, Func Offset: 0x444
	// Line 504, Address: 0x1018bec, Func Offset: 0x44c
	// Line 505, Address: 0x1018bf4, Func Offset: 0x454
	// Line 506, Address: 0x1018c14, Func Offset: 0x474
	// Line 507, Address: 0x1018c1c, Func Offset: 0x47c
	// Line 508, Address: 0x1018c24, Func Offset: 0x484
	// Line 509, Address: 0x1018c2c, Func Offset: 0x48c
	// Line 510, Address: 0x1018c34, Func Offset: 0x494
	// Line 511, Address: 0x1018c3c, Func Offset: 0x49c
	// Line 512, Address: 0x1018c44, Func Offset: 0x4a4
	// Line 513, Address: 0x1018c4c, Func Offset: 0x4ac
	// Line 514, Address: 0x1018c54, Func Offset: 0x4b4
	// Line 515, Address: 0x1018c5c, Func Offset: 0x4bc
	// Line 516, Address: 0x1018c64, Func Offset: 0x4c4
	// Line 517, Address: 0x1018c6c, Func Offset: 0x4cc
	// Line 518, Address: 0x1018c74, Func Offset: 0x4d4
	// Line 519, Address: 0x1018c7c, Func Offset: 0x4dc
	// Line 520, Address: 0x1018c84, Func Offset: 0x4e4
	// Line 521, Address: 0x1018c8c, Func Offset: 0x4ec
	// Line 522, Address: 0x1018c94, Func Offset: 0x4f4
	// Line 523, Address: 0x1018c9c, Func Offset: 0x4fc
	// Line 524, Address: 0x1018ca4, Func Offset: 0x504
	// Line 525, Address: 0x1018cac, Func Offset: 0x50c
	// Line 526, Address: 0x1018cb4, Func Offset: 0x514
	// Line 527, Address: 0x1018cbc, Func Offset: 0x51c
	// Line 528, Address: 0x1018cc4, Func Offset: 0x524
	// Line 529, Address: 0x1018ccc, Func Offset: 0x52c
	// Line 530, Address: 0x1018cec, Func Offset: 0x54c
	// Line 531, Address: 0x1018d0c, Func Offset: 0x56c
	// Line 532, Address: 0x1018d14, Func Offset: 0x574
	// Line 533, Address: 0x1018d1c, Func Offset: 0x57c
	// Line 534, Address: 0x1018d24, Func Offset: 0x584
	// Line 535, Address: 0x1018d2c, Func Offset: 0x58c
	// Line 536, Address: 0x1018d34, Func Offset: 0x594
	// Line 537, Address: 0x1018d3c, Func Offset: 0x59c
	// Line 538, Address: 0x1018d44, Func Offset: 0x5a4
	// Line 539, Address: 0x1018d4c, Func Offset: 0x5ac
	// Line 540, Address: 0x1018d54, Func Offset: 0x5b4
	// Line 541, Address: 0x1018d5c, Func Offset: 0x5bc
	// Line 542, Address: 0x1018d64, Func Offset: 0x5c4
	// Line 543, Address: 0x1018d6c, Func Offset: 0x5cc
	// Line 544, Address: 0x1018d74, Func Offset: 0x5d4
	// Line 545, Address: 0x1018d7c, Func Offset: 0x5dc
	// Line 548, Address: 0x1018d9c, Func Offset: 0x5fc
	// Line 551, Address: 0x1018da4, Func Offset: 0x604
	// Line 552, Address: 0x1018dac, Func Offset: 0x60c
	// Line 553, Address: 0x1018db4, Func Offset: 0x614
	// Line 554, Address: 0x1018dbc, Func Offset: 0x61c
	// Line 555, Address: 0x1018dc4, Func Offset: 0x624
	// Line 556, Address: 0x1018dcc, Func Offset: 0x62c
	// Line 557, Address: 0x1018dd4, Func Offset: 0x634
	// Line 558, Address: 0x1018ddc, Func Offset: 0x63c
	// Line 559, Address: 0x1018de4, Func Offset: 0x644
	// Line 560, Address: 0x1018dec, Func Offset: 0x64c
	// Line 561, Address: 0x1018df4, Func Offset: 0x654
	// Line 562, Address: 0x1018dfc, Func Offset: 0x65c
	// Line 563, Address: 0x1018e04, Func Offset: 0x664
	// Line 564, Address: 0x1018e0c, Func Offset: 0x66c
	// Line 565, Address: 0x1018e14, Func Offset: 0x674
	// Line 566, Address: 0x1018e1c, Func Offset: 0x67c
	// Line 567, Address: 0x1018e24, Func Offset: 0x684
	// Line 568, Address: 0x1018e2c, Func Offset: 0x68c
	// Line 569, Address: 0x1018e34, Func Offset: 0x694
	// Line 570, Address: 0x1018e3c, Func Offset: 0x69c
	// Line 571, Address: 0x1018e44, Func Offset: 0x6a4
	// Line 572, Address: 0x1018e4c, Func Offset: 0x6ac
	// Line 573, Address: 0x1018e54, Func Offset: 0x6b4
	// Line 574, Address: 0x1018e5c, Func Offset: 0x6bc
	// Line 575, Address: 0x1018e64, Func Offset: 0x6c4
	// Line 576, Address: 0x1018e6c, Func Offset: 0x6cc
	// Line 577, Address: 0x1018e74, Func Offset: 0x6d4
	// Line 578, Address: 0x1018e7c, Func Offset: 0x6dc
	// Line 579, Address: 0x1018e84, Func Offset: 0x6e4
	// Line 580, Address: 0x1018e8c, Func Offset: 0x6ec
	// Line 581, Address: 0x1018e94, Func Offset: 0x6f4
	// Line 582, Address: 0x1018e9c, Func Offset: 0x6fc
	// Line 583, Address: 0x1018ea4, Func Offset: 0x704
	// Line 584, Address: 0x1018eac, Func Offset: 0x70c
	// Line 585, Address: 0x1018eb4, Func Offset: 0x714
	// Line 586, Address: 0x1018ebc, Func Offset: 0x71c
	// Line 587, Address: 0x1018ec4, Func Offset: 0x724
	// Line 588, Address: 0x1018ecc, Func Offset: 0x72c
	// Line 589, Address: 0x1018ed4, Func Offset: 0x734
	// Line 590, Address: 0x1018edc, Func Offset: 0x73c
	// Line 591, Address: 0x1018ee4, Func Offset: 0x744
	// Line 592, Address: 0x1018eec, Func Offset: 0x74c
	// Line 593, Address: 0x1018ef4, Func Offset: 0x754
	// Line 595, Address: 0x1018f14, Func Offset: 0x774
	// Line 598, Address: 0x1018f1c, Func Offset: 0x77c
	// Line 601, Address: 0x1018f38, Func Offset: 0x798
	// Line 602, Address: 0x1018f74, Func Offset: 0x7d4
	// Line 603, Address: 0x1018fb0, Func Offset: 0x810
	// Line 605, Address: 0x1018fec, Func Offset: 0x84c
	// Line 606, Address: 0x1018ff4, Func Offset: 0x854
	// Line 607, Address: 0x1018ffc, Func Offset: 0x85c
	// Line 609, Address: 0x1019008, Func Offset: 0x868
	// Line 613, Address: 0x1019010, Func Offset: 0x870
	// Line 615, Address: 0x101901c, Func Offset: 0x87c
	// Line 616, Address: 0x1019028, Func Offset: 0x888
	// Line 619, Address: 0x1019034, Func Offset: 0x894
	// Line 620, Address: 0x101903c, Func Offset: 0x89c
	// Line 621, Address: 0x1019044, Func Offset: 0x8a4
	// Line 622, Address: 0x1019058, Func Offset: 0x8b8
	// Line 623, Address: 0x1019060, Func Offset: 0x8c0
	// Line 625, Address: 0x1019068, Func Offset: 0x8c8
	// Line 626, Address: 0x1019070, Func Offset: 0x8d0
	// Line 631, Address: 0x1019078, Func Offset: 0x8d8
	// Line 632, Address: 0x1019080, Func Offset: 0x8e0
	// Line 633, Address: 0x101908c, Func Offset: 0x8ec
	// Line 634, Address: 0x1019098, Func Offset: 0x8f8
	// Line 635, Address: 0x10190a4, Func Offset: 0x904
	// Line 636, Address: 0x10190b0, Func Offset: 0x910
	// Line 640, Address: 0x10190bc, Func Offset: 0x91c
	// Line 641, Address: 0x10190c8, Func Offset: 0x928
	// Line 642, Address: 0x10190d4, Func Offset: 0x934
	// Line 643, Address: 0x10190ec, Func Offset: 0x94c
	// Line 644, Address: 0x1019100, Func Offset: 0x960
	// Line 645, Address: 0x101910c, Func Offset: 0x96c
	// Line 646, Address: 0x1019118, Func Offset: 0x978
	// Line 649, Address: 0x1019120, Func Offset: 0x980
	// Line 650, Address: 0x101912c, Func Offset: 0x98c
	// Line 651, Address: 0x1019134, Func Offset: 0x994
	// Line 652, Address: 0x101913c, Func Offset: 0x99c
	// Line 653, Address: 0x1019144, Func Offset: 0x9a4
	// Line 654, Address: 0x101914c, Func Offset: 0x9ac
	// Line 657, Address: 0x1019154, Func Offset: 0x9b4
	// Line 658, Address: 0x1019168, Func Offset: 0x9c8
	// Line 659, Address: 0x1019170, Func Offset: 0x9d0
	// Line 660, Address: 0x1019178, Func Offset: 0x9d8
	// Line 663, Address: 0x1019180, Func Offset: 0x9e0
	// Line 664, Address: 0x10191b8, Func Offset: 0xa18
	// Line 665, Address: 0x10191e0, Func Offset: 0xa40
	// Line 666, Address: 0x10191e8, Func Offset: 0xa48
	// Line 667, Address: 0x1019218, Func Offset: 0xa78
	// Line 669, Address: 0x1019224, Func Offset: 0xa84
	// Line 671, Address: 0x1019230, Func Offset: 0xa90
	// Line 672, Address: 0x1019238, Func Offset: 0xa98
	// Line 673, Address: 0x1019244, Func Offset: 0xaa4
	// Line 677, Address: 0x1019250, Func Offset: 0xab0
	// Line 680, Address: 0x101925c, Func Offset: 0xabc
	// Line 681, Address: 0x1019284, Func Offset: 0xae4
	// Line 682, Address: 0x1019298, Func Offset: 0xaf8
	// Line 685, Address: 0x10192a4, Func Offset: 0xb04
	// Line 686, Address: 0x10192ac, Func Offset: 0xb0c
	// Line 687, Address: 0x10192c0, Func Offset: 0xb20
	// Line 688, Address: 0x10192c8, Func Offset: 0xb28
	// Line 690, Address: 0x10192dc, Func Offset: 0xb3c
	// Line 692, Address: 0x10192f4, Func Offset: 0xb54
	// Line 693, Address: 0x10192fc, Func Offset: 0xb5c
	// Line 698, Address: 0x1019304, Func Offset: 0xb64
	// Line 701, Address: 0x101930c, Func Offset: 0xb6c
	// Func End, Address: 0x101931c, Func Offset: 0xb7c
}

// 
// Start address: 0x1019320
void play_act_set()
{
	// Line 707, Address: 0x1019320, Func Offset: 0
	// Line 708, Address: 0x101932c, Func Offset: 0xc
	// Line 709, Address: 0x101933c, Func Offset: 0x1c
	// Line 711, Address: 0x1019348, Func Offset: 0x28
	// Func End, Address: 0x1019350, Func Offset: 0x30
}

// 
// Start address: 0x1019350
void flow_act_set()
{
	// Line 737, Address: 0x1019350, Func Offset: 0
	// Func End, Address: 0x1019358, Func Offset: 0x8
}

// 
// Start address: 0x1019360
void scdset()
{
	// Line 741, Address: 0x1019360, Func Offset: 0
	// Line 743, Address: 0x1019370, Func Offset: 0x10
	// Func End, Address: 0x1019378, Func Offset: 0x18
}

// 
// Start address: 0x1019380
void syspatchg()
{
	// Line 747, Address: 0x1019380, Func Offset: 0
	// Line 748, Address: 0x10193a8, Func Offset: 0x28
	// Line 749, Address: 0x10193b4, Func Offset: 0x34
	// Line 751, Address: 0x10193d4, Func Offset: 0x54
	// Line 752, Address: 0x10193fc, Func Offset: 0x7c
	// Line 753, Address: 0x1019408, Func Offset: 0x88
	// Line 755, Address: 0x1019428, Func Offset: 0xa8
	// Line 756, Address: 0x1019450, Func Offset: 0xd0
	// Line 757, Address: 0x101945c, Func Offset: 0xdc
	// Line 759, Address: 0x101948c, Func Offset: 0x10c
	// Line 760, Address: 0x101949c, Func Offset: 0x11c
	// Line 763, Address: 0x10194c4, Func Offset: 0x144
	// Line 764, Address: 0x10194e8, Func Offset: 0x168
	// Line 767, Address: 0x10194fc, Func Offset: 0x17c
	// Func End, Address: 0x1019504, Func Offset: 0x184
}

// 
// Start address: 0x1019510
void back_to_cnt()
{
	// Line 771, Address: 0x1019510, Func Offset: 0
	// Line 772, Address: 0x1019520, Func Offset: 0x10
	// Line 773, Address: 0x1019530, Func Offset: 0x20
	// Line 777, Address: 0x1019544, Func Offset: 0x34
	// Func End, Address: 0x101954c, Func Offset: 0x3c
}

// 
// Start address: 0x1019550
void bye_cnt()
{
	// Line 783, Address: 0x1019550, Func Offset: 0
	// Line 784, Address: 0x1019560, Func Offset: 0x10
	// Line 787, Address: 0x1019574, Func Offset: 0x24
	// Line 788, Address: 0x1019584, Func Offset: 0x34
	// Line 792, Address: 0x1019598, Func Offset: 0x48
	// Func End, Address: 0x10195a0, Func Offset: 0x50
}

// 
// Start address: 0x10195a0
void sdfdout()
{
	// Line 797, Address: 0x10195a0, Func Offset: 0
	// Line 798, Address: 0x10195a8, Func Offset: 0x8
	// Line 799, Address: 0x10195b4, Func Offset: 0x14
	// Line 802, Address: 0x10195cc, Func Offset: 0x2c
	// Line 803, Address: 0x10195e0, Func Offset: 0x40
	// Line 805, Address: 0x10195f8, Func Offset: 0x58
	// Line 806, Address: 0x1019618, Func Offset: 0x78
	// Line 807, Address: 0x1019624, Func Offset: 0x84
	// Line 811, Address: 0x101962c, Func Offset: 0x8c
	// Line 813, Address: 0x1019638, Func Offset: 0x98
	// Func End, Address: 0x1019648, Func Offset: 0xa8
}

// 
// Start address: 0x1019650
void sdfdin()
{
	// Line 816, Address: 0x1019650, Func Offset: 0
	// Line 817, Address: 0x1019658, Func Offset: 0x8
	// Line 820, Address: 0x1019670, Func Offset: 0x20
	// Line 821, Address: 0x1019684, Func Offset: 0x34
	// Line 823, Address: 0x101969c, Func Offset: 0x4c
	// Line 824, Address: 0x10196bc, Func Offset: 0x6c
	// Line 825, Address: 0x10196c8, Func Offset: 0x78
	// Line 829, Address: 0x10196d0, Func Offset: 0x80
	// Line 831, Address: 0x10196dc, Func Offset: 0x8c
	// Func End, Address: 0x10196ec, Func Offset: 0x9c
}

// 
// Start address: 0x10196f0
void da_set()
{
	unsigned short wD0;
	unsigned char da_tbl[4][7];
	// Line 838, Address: 0x10196f0, Func Offset: 0
	// Line 850, Address: 0x10196fc, Func Offset: 0xc
	// Line 851, Address: 0x1019714, Func Offset: 0x24
	// Line 852, Address: 0x1019724, Func Offset: 0x34
	// Line 853, Address: 0x1019734, Func Offset: 0x44
	// Line 857, Address: 0x1019748, Func Offset: 0x58
	// Line 860, Address: 0x1019788, Func Offset: 0x98
	// Func End, Address: 0x101979c, Func Offset: 0xac
}

// 
// Start address: 0x10197a0
void water1chk()
{
	short wD1;
	// Line 867, Address: 0x10197a0, Func Offset: 0
	// Line 870, Address: 0x10197a8, Func Offset: 0x8
	// Line 872, Address: 0x10197c0, Func Offset: 0x20
	// Line 873, Address: 0x10197dc, Func Offset: 0x3c
	// Line 874, Address: 0x10197e8, Func Offset: 0x48
	// Line 875, Address: 0x1019810, Func Offset: 0x70
	// Line 878, Address: 0x1019818, Func Offset: 0x78
	// Line 879, Address: 0x1019824, Func Offset: 0x84
	// Line 880, Address: 0x1019840, Func Offset: 0xa0
	// Line 881, Address: 0x101984c, Func Offset: 0xac
	// Line 882, Address: 0x1019868, Func Offset: 0xc8
	// Line 883, Address: 0x1019874, Func Offset: 0xd4
	// Line 888, Address: 0x1019880, Func Offset: 0xe0
	// Line 889, Address: 0x1019888, Func Offset: 0xe8
	// Func End, Address: 0x1019898, Func Offset: 0xf8
}

// 
// Start address: 0x10198a0
void water2chk()
{
	short wD1;
	// Line 893, Address: 0x10198a0, Func Offset: 0
	// Line 896, Address: 0x10198a8, Func Offset: 0x8
	// Line 898, Address: 0x10198cc, Func Offset: 0x2c
	// Line 899, Address: 0x10198e8, Func Offset: 0x48
	// Line 900, Address: 0x10198f0, Func Offset: 0x50
	// Line 901, Address: 0x10198f8, Func Offset: 0x58
	// Line 903, Address: 0x1019900, Func Offset: 0x60
	// Line 904, Address: 0x101991c, Func Offset: 0x7c
	// Line 905, Address: 0x1019938, Func Offset: 0x98
	// Line 906, Address: 0x1019954, Func Offset: 0xb4
	// Line 907, Address: 0x101995c, Func Offset: 0xbc
	// Line 908, Address: 0x1019964, Func Offset: 0xc4
	// Line 913, Address: 0x101996c, Func Offset: 0xcc
	// Line 914, Address: 0x1019984, Func Offset: 0xe4
	// Line 915, Address: 0x1019990, Func Offset: 0xf0
	// Line 916, Address: 0x1019998, Func Offset: 0xf8
	// Line 917, Address: 0x10199a0, Func Offset: 0x100
	// Line 920, Address: 0x10199a8, Func Offset: 0x108
	// Line 921, Address: 0x10199c4, Func Offset: 0x124
	// Line 922, Address: 0x10199d0, Func Offset: 0x130
	// Line 923, Address: 0x10199ec, Func Offset: 0x14c
	// Line 924, Address: 0x10199f8, Func Offset: 0x158
	// Line 925, Address: 0x1019a14, Func Offset: 0x174
	// Line 926, Address: 0x1019a20, Func Offset: 0x180
	// Line 927, Address: 0x1019a3c, Func Offset: 0x19c
	// Line 928, Address: 0x1019a58, Func Offset: 0x1b8
	// Line 929, Address: 0x1019a64, Func Offset: 0x1c4
	// Line 933, Address: 0x1019a80, Func Offset: 0x1e0
	// Line 936, Address: 0x1019a88, Func Offset: 0x1e8
	// Line 937, Address: 0x1019a94, Func Offset: 0x1f4
	// Line 938, Address: 0x1019ab0, Func Offset: 0x210
	// Line 939, Address: 0x1019abc, Func Offset: 0x21c
	// Line 940, Address: 0x1019ad8, Func Offset: 0x238
	// Line 941, Address: 0x1019ae4, Func Offset: 0x244
	// Line 946, Address: 0x1019b0c, Func Offset: 0x26c
	// Line 947, Address: 0x1019b14, Func Offset: 0x274
	// Func End, Address: 0x1019b24, Func Offset: 0x284
}

// 
// Start address: 0x1019b30
void water3chk()
{
	short wD1;
	// Line 951, Address: 0x1019b30, Func Offset: 0
	// Line 954, Address: 0x1019b38, Func Offset: 0x8
	// Line 955, Address: 0x1019b5c, Func Offset: 0x2c
	// Line 958, Address: 0x1019b88, Func Offset: 0x58
	// Line 959, Address: 0x1019b94, Func Offset: 0x64
	// Line 960, Address: 0x1019bb0, Func Offset: 0x80
	// Line 961, Address: 0x1019bbc, Func Offset: 0x8c
	// Line 965, Address: 0x1019bc8, Func Offset: 0x98
	// Line 966, Address: 0x1019bd0, Func Offset: 0xa0
	// Func End, Address: 0x1019be0, Func Offset: 0xb0
}

// 
// Start address: 0x1019be0
void watercntsub()
{
	unsigned short wD1;
	void(*watertbl)()[3];
	// Line 970, Address: 0x1019be0, Func Offset: 0
	// Line 973, Address: 0x1019bec, Func Offset: 0xc
	// Line 979, Address: 0x1019c10, Func Offset: 0x30
	// Line 981, Address: 0x1019c34, Func Offset: 0x54
	// Line 982, Address: 0x1019c44, Func Offset: 0x64
	// Line 983, Address: 0x1019c6c, Func Offset: 0x8c
	// Line 985, Address: 0x1019ca4, Func Offset: 0xc4
	// Line 988, Address: 0x1019cc0, Func Offset: 0xe0
	// Func End, Address: 0x1019cd4, Func Offset: 0xf4
}

// 
// Start address: 0x1019ce0
void watercnt()
{
	short wD0;
	short wD1;
	// Line 992, Address: 0x1019ce0, Func Offset: 0
	// Line 995, Address: 0x1019ce8, Func Offset: 0x8
	// Line 996, Address: 0x1019cf8, Func Offset: 0x18
	// Line 998, Address: 0x1019d18, Func Offset: 0x38
	// Line 999, Address: 0x1019d20, Func Offset: 0x40
	// Line 1000, Address: 0x1019d34, Func Offset: 0x54
	// Line 1001, Address: 0x1019d4c, Func Offset: 0x6c
	// Line 1003, Address: 0x1019d98, Func Offset: 0xb8
	// Line 1004, Address: 0x1019dc8, Func Offset: 0xe8
	// Line 1005, Address: 0x1019df4, Func Offset: 0x114
	// Line 1006, Address: 0x1019e08, Func Offset: 0x128
	// Line 1007, Address: 0x1019e14, Func Offset: 0x134
	// Line 1011, Address: 0x1019e20, Func Offset: 0x140
	// Line 1013, Address: 0x1019e40, Func Offset: 0x160
	// Line 1016, Address: 0x1019e58, Func Offset: 0x178
	// Line 1017, Address: 0x1019e6c, Func Offset: 0x18c
	// Line 1018, Address: 0x1019e80, Func Offset: 0x1a0
	// Func End, Address: 0x1019e90, Func Offset: 0x1b0
}

// 
// Start address: 0x1019e90
void watercoli()
{
	int i;
	// Line 1022, Address: 0x1019e90, Func Offset: 0
	// Line 1025, Address: 0x1019e98, Func Offset: 0x8
	// Line 1027, Address: 0x1019eb4, Func Offset: 0x24
	// Line 1029, Address: 0x1019ecc, Func Offset: 0x3c
	// Line 1031, Address: 0x1019edc, Func Offset: 0x4c
	// Line 1033, Address: 0x1019eec, Func Offset: 0x5c
	// Line 1037, Address: 0x1019f08, Func Offset: 0x78
	// Line 1038, Address: 0x1019f14, Func Offset: 0x84
	// Line 1039, Address: 0x1019f4c, Func Offset: 0xbc
	// Line 1040, Address: 0x1019f88, Func Offset: 0xf8
	// Line 1041, Address: 0x1019fc4, Func Offset: 0x134
	// Line 1043, Address: 0x101a000, Func Offset: 0x170
	// Line 1044, Address: 0x101a02c, Func Offset: 0x19c
	// Line 1047, Address: 0x101a06c, Func Offset: 0x1dc
	// Line 1048, Address: 0x101a084, Func Offset: 0x1f4
	// Line 1049, Address: 0x101a08c, Func Offset: 0x1fc
	// Line 1051, Address: 0x101a094, Func Offset: 0x204
	// Line 1052, Address: 0x101a0a0, Func Offset: 0x210
	// Line 1053, Address: 0x101a0a8, Func Offset: 0x218
	// Line 1054, Address: 0x101a0c8, Func Offset: 0x238
	// Line 1055, Address: 0x101a0e8, Func Offset: 0x258
	// Line 1056, Address: 0x101a0f4, Func Offset: 0x264
	// Line 1058, Address: 0x101a108, Func Offset: 0x278
	// Line 1059, Address: 0x101a134, Func Offset: 0x2a4
	// Line 1060, Address: 0x101a174, Func Offset: 0x2e4
	// Line 1061, Address: 0x101a188, Func Offset: 0x2f8
	// Line 1065, Address: 0x101a19c, Func Offset: 0x30c
	// Line 1067, Address: 0x101a1c8, Func Offset: 0x338
	// Line 1069, Address: 0x101a1f4, Func Offset: 0x364
	// Line 1071, Address: 0x101a220, Func Offset: 0x390
	// Line 1073, Address: 0x101a24c, Func Offset: 0x3bc
	// Line 1078, Address: 0x101a254, Func Offset: 0x3c4
	// Line 1080, Address: 0x101a27c, Func Offset: 0x3ec
	// Line 1082, Address: 0x101a28c, Func Offset: 0x3fc
	// Line 1084, Address: 0x101a294, Func Offset: 0x404
	// Line 1085, Address: 0x101a29c, Func Offset: 0x40c
	// Func End, Address: 0x101a2ac, Func Offset: 0x41c
}

