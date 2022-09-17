typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct tagPALETTEENTRY;
typedef struct _anon10;
typedef struct _anon11;
typedef struct dlink_export;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;

typedef int(*type_0)(int, int, int, int);
typedef void(*type_1)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_5)(char***, void**);
typedef void(*type_6)();
typedef void(*type_7)();
typedef void(*type_8)();
typedef void(*type_9)(short);
typedef int(*type_12)();
typedef void(*type_13)(char*);
typedef void(*type_14)(short);
typedef void(*type_15)(unsigned short, unsigned char, char*);
typedef int(*type_16)();
typedef void(*type_17)(char*, char*);
typedef void(*type_18)(short);
typedef void(*type_19)(short, short);
typedef void(*type_20)(unsigned int);
typedef void(*type_21)(int, int);
typedef int(*type_22)();
typedef void(*type_24)(void*, unsigned char, int);
typedef void(*type_25)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_26)();
typedef void(*type_31)(void*, void*, int);
typedef int(*type_34)(char*);
typedef int(*type_35)(int, void*, int);
typedef int(*type_37)(int);
typedef void(*type_41)(int);

typedef _anon1 type_2[8];
typedef _anon2* type_3[63];
typedef unsigned char type_4[766];
typedef _anon2 type_10[128];
typedef unsigned char type_11[766];
typedef unsigned char type_23[32];
typedef unsigned char type_27[4];
typedef unsigned char type_28[4][7];
typedef unsigned char type_29[6];
typedef _anon11 type_30[20];
typedef unsigned char type_32[6];
typedef _anon11 type_33[0];
typedef unsigned char type_36[1000];
typedef _anon13 type_38[700];
typedef int type_39[128];
typedef char type_40[4];
typedef unsigned char type_42[7];
typedef unsigned char type_43[7];
typedef unsigned char type_44[4096];
typedef _anon3 type_45[192];
typedef unsigned char type_46[2];
typedef unsigned char type_47[22];
typedef unsigned char type_48[3];

struct _anon0
{
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
};

struct _anon1
{
	int cnt;
	_anon2* pActwk[63];
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon12** patbase;
	_anon3 xposi;
	_anon3 yposi;
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

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
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

struct _anon8
{
	short plring;
	int plscore;
	_anon6 stageno;
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
	_anon6 demoflag;
	_anon6 hintposi;
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

union _anon9
{
	unsigned short w;
	_anon10 b;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
};

struct _anon14
{
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
};

short Interupt_Counter;
unsigned int PauseIcon;
_anon8* lpKeepWork;
_anon13 SprBmp[700];
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
_anon6 stageno;
int plscore;
short plring;
unsigned int* lpghWnd;
int* lpFadeFlag;
_anon3* lphscrollbuff;
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
_anon3 vscroll;
_anon3 scra_h_posiw;
_anon3 scrb_h_posiw;
_anon6 debugflag;
_anon3 systemtimer;
_anon9 pauseflag;
unsigned char mapwrt_cnt;
_anon9 scrflagzw;
_anon9 scrflagz;
_anon9 scrflagcw;
_anon9 scrflagc;
_anon9 scrflagbw;
_anon9 scrflagb;
_anon9 scrflagaw;
_anon9 scrflaga;
_anon3 scrz_v_posiw;
_anon3 scrz_v_posit;
_anon3 scrz_h_posiw;
_anon3 scrz_h_posit;
_anon3 scrc_v_posiw;
_anon3 scrc_v_posit;
_anon3 scrc_h_posiw;
_anon3 scrc_h_posit;
_anon3 scrb_v_posiw;
_anon3 scrb_v_posit;
_anon3 scrb_h_posit;
_anon3 scra_v_posiw;
_anon3 scra_v_posit;
_anon3 scra_h_posit;
short scralim_n_down;
short scralim_down;
_anon2 actwk[128];
_anon6 editmode;
_anon6 gameflag;
_anon3 pltime;
unsigned char special_flag;
unsigned char enkeino;
short demo_cnt;
_anon6 gametimer;
_anon6 demoflag;
unsigned char markerno;
_anon9 swdata1;
_anon9 swdata2;
unsigned char init_flag;
_anon6 gmmode;
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
_anon6 byecnt1;
_anon6 byecnt0;
_anon9 swdata;
unsigned char enecgflg;
unsigned char plautoflag;
short pl_air;
int linework[128];
unsigned char chibi_flag;
unsigned char st6clrchg;
unsigned char shut_flag;
unsigned char boss_sound;
unsigned char prio_flag;
unsigned char sysdirec;
unsigned char edit_user;
_anon6 col_x;
_anon6 col_y;
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
short time_stop;
short edittimer;
_anon6 editno;
unsigned char switchflag[32];
unsigned char ms_wflg;
_anon6 waterdirec;
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
_anon9 plposiwkadr;
unsigned char bossflag;
short scra_hline;
unsigned char* scdadr;
unsigned int demo_adr;
unsigned char scr_cnt;
short backto_cnt;
char time_item;
_anon0* asetadrz2;
_anon0* asetadrz;
_anon14* asetadr2;
_anon14* asetadr;
short asetposi;
_anon6 actset_rno;
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
_anon6 scr_timer;
_anon9 scr_die;
_anon6 scroll_start;
_anon9 zone_flag;
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
_anon6 intcnt;
unsigned char flowwk[4096];
_anon3 flowerposi[192];
_anon1 pbuffer[8];
unsigned char flowercnt[3];
unsigned char plsubchg_flag;
unsigned char start_flag;
unsigned char main_play;
unsigned char zone1scd[1000];
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

// 
// Start address: 0x1017e10
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	// Line 125, Address: 0x1017e10, Func Offset: 0
	// Line 128, Address: 0x1017e20, Func Offset: 0x10
	// Line 129, Address: 0x1017e38, Func Offset: 0x28
	// Line 130, Address: 0x1017e50, Func Offset: 0x40
	// Line 131, Address: 0x1017e68, Func Offset: 0x58
	// Line 132, Address: 0x1017e80, Func Offset: 0x70
	// Line 133, Address: 0x1017e98, Func Offset: 0x88
	// Line 134, Address: 0x1017eb0, Func Offset: 0xa0
	// Line 135, Address: 0x1017ec8, Func Offset: 0xb8
	// Line 136, Address: 0x1017ed4, Func Offset: 0xc4
	// Line 137, Address: 0x1017ee0, Func Offset: 0xd0
	// Line 138, Address: 0x1017eec, Func Offset: 0xdc
	// Line 140, Address: 0x1017f04, Func Offset: 0xf4
	// Line 141, Address: 0x1017f10, Func Offset: 0x100
	// Line 142, Address: 0x1017f1c, Func Offset: 0x10c
	// Line 143, Address: 0x1017f34, Func Offset: 0x124
	// Line 144, Address: 0x1017f4c, Func Offset: 0x13c
	// Line 145, Address: 0x1017f58, Func Offset: 0x148
	// Line 146, Address: 0x1017f70, Func Offset: 0x160
	// Line 147, Address: 0x1017f7c, Func Offset: 0x16c
	// Line 148, Address: 0x1017f88, Func Offset: 0x178
	// Line 149, Address: 0x1017f94, Func Offset: 0x184
	// Line 150, Address: 0x1017fac, Func Offset: 0x19c
	// Line 151, Address: 0x1017fc4, Func Offset: 0x1b4
	// Line 152, Address: 0x1017fdc, Func Offset: 0x1cc
	// Line 153, Address: 0x1017ff4, Func Offset: 0x1e4
	// Line 154, Address: 0x101800c, Func Offset: 0x1fc
	// Line 160, Address: 0x1018018, Func Offset: 0x208
	// Line 161, Address: 0x1018034, Func Offset: 0x224
	// Line 162, Address: 0x1018050, Func Offset: 0x240
	// Line 163, Address: 0x101806c, Func Offset: 0x25c
	// Line 164, Address: 0x1018088, Func Offset: 0x278
	// Line 165, Address: 0x10180a4, Func Offset: 0x294
	// Line 166, Address: 0x10180c0, Func Offset: 0x2b0
	// Line 167, Address: 0x10180d8, Func Offset: 0x2c8
	// Line 168, Address: 0x10180f0, Func Offset: 0x2e0
	// Line 169, Address: 0x10180fc, Func Offset: 0x2ec
	// Line 171, Address: 0x1018114, Func Offset: 0x304
	// Line 172, Address: 0x1018128, Func Offset: 0x318
	// Line 173, Address: 0x101813c, Func Offset: 0x32c
	// Line 174, Address: 0x1018150, Func Offset: 0x340
	// Line 175, Address: 0x1018164, Func Offset: 0x354
	// Line 176, Address: 0x1018178, Func Offset: 0x368
	// Line 177, Address: 0x101818c, Func Offset: 0x37c
	// Line 178, Address: 0x10181a0, Func Offset: 0x390
	// Line 179, Address: 0x10181b4, Func Offset: 0x3a4
	// Line 180, Address: 0x10181c8, Func Offset: 0x3b8
	// Line 181, Address: 0x10181dc, Func Offset: 0x3cc
	// Line 182, Address: 0x10181f0, Func Offset: 0x3e0
	// Line 183, Address: 0x1018204, Func Offset: 0x3f4
	// Line 184, Address: 0x1018218, Func Offset: 0x408
	// Line 186, Address: 0x101822c, Func Offset: 0x41c
	// Line 187, Address: 0x1018240, Func Offset: 0x430
	// Line 188, Address: 0x1018254, Func Offset: 0x444
	// Line 190, Address: 0x101827c, Func Offset: 0x46c
	// Line 193, Address: 0x1018290, Func Offset: 0x480
	// Func End, Address: 0x10182a0, Func Offset: 0x490
}

// 
// Start address: 0x10182a0
void DLL_memfree()
{
	// Line 197, Address: 0x10182a0, Func Offset: 0
	// Func End, Address: 0x10182a8, Func Offset: 0x8
}

// 
// Start address: 0x10182b0
int Get_vscroll()
{
	// Line 201, Address: 0x10182b0, Func Offset: 0
	// Line 202, Address: 0x10182b8, Func Offset: 0x8
	// Func End, Address: 0x10182c0, Func Offset: 0x10
}

// 
// Start address: 0x10182c0
int Get_scra_h_posiw()
{
	// Line 205, Address: 0x10182c0, Func Offset: 0
	// Line 206, Address: 0x10182c8, Func Offset: 0x8
	// Func End, Address: 0x10182d0, Func Offset: 0x10
}

// 
// Start address: 0x10182d0
int Get_scrb_h_posiw()
{
	// Line 209, Address: 0x10182d0, Func Offset: 0
	// Line 210, Address: 0x10182d8, Func Offset: 0x8
	// Func End, Address: 0x10182e0, Func Offset: 0x10
}

// 
// Start address: 0x10182e0
void SetDebugFlag(unsigned int NewVal)
{
	// Line 213, Address: 0x10182e0, Func Offset: 0
	// Line 214, Address: 0x10182e8, Func Offset: 0x8
	// Line 215, Address: 0x1018314, Func Offset: 0x34
	// Line 217, Address: 0x101832c, Func Offset: 0x4c
	// Func End, Address: 0x1018338, Func Offset: 0x58
}

// 
// Start address: 0x1018340
int game()
{
	// Line 222, Address: 0x1018340, Func Offset: 0
	// Line 223, Address: 0x1018348, Func Offset: 0x8
	// Line 224, Address: 0x1018360, Func Offset: 0x20
	// Line 225, Address: 0x1018370, Func Offset: 0x30
	// Line 226, Address: 0x1018388, Func Offset: 0x48
	// Line 227, Address: 0x10183a8, Func Offset: 0x68
	// Line 228, Address: 0x10183b8, Func Offset: 0x78
	// Line 229, Address: 0x10183cc, Func Offset: 0x8c
	// Line 230, Address: 0x10183d4, Func Offset: 0x94
	// Line 231, Address: 0x101840c, Func Offset: 0xcc
	// Line 232, Address: 0x1018418, Func Offset: 0xd8
	// Line 247, Address: 0x101842c, Func Offset: 0xec
	// Line 248, Address: 0x1018444, Func Offset: 0x104
	// Line 250, Address: 0x101844c, Func Offset: 0x10c
	// Line 252, Address: 0x1018468, Func Offset: 0x128
	// Line 253, Address: 0x1018470, Func Offset: 0x130
	// Line 254, Address: 0x1018478, Func Offset: 0x138
	// Line 255, Address: 0x1018480, Func Offset: 0x140
	// Line 256, Address: 0x101848c, Func Offset: 0x14c
	// Line 257, Address: 0x101849c, Func Offset: 0x15c
	// Line 258, Address: 0x10184b0, Func Offset: 0x170
	// Line 259, Address: 0x10184d0, Func Offset: 0x190
	// Line 261, Address: 0x10184d8, Func Offset: 0x198
	// Line 262, Address: 0x10184e4, Func Offset: 0x1a4
	// Line 263, Address: 0x10184ec, Func Offset: 0x1ac
	// Line 266, Address: 0x10184f4, Func Offset: 0x1b4
	// Line 269, Address: 0x1018518, Func Offset: 0x1d8
	// Line 270, Address: 0x1018534, Func Offset: 0x1f4
	// Line 271, Address: 0x101853c, Func Offset: 0x1fc
	// Line 272, Address: 0x1018550, Func Offset: 0x210
	// Line 273, Address: 0x1018558, Func Offset: 0x218
	// Line 275, Address: 0x1018560, Func Offset: 0x220
	// Line 277, Address: 0x101857c, Func Offset: 0x23c
	// Line 279, Address: 0x1018584, Func Offset: 0x244
	// Line 283, Address: 0x1018594, Func Offset: 0x254
	// Line 284, Address: 0x10185a8, Func Offset: 0x268
	// Line 285, Address: 0x10185bc, Func Offset: 0x27c
	// Line 286, Address: 0x10185d0, Func Offset: 0x290
	// Line 287, Address: 0x10185e4, Func Offset: 0x2a4
	// Line 288, Address: 0x10185f8, Func Offset: 0x2b8
	// Line 289, Address: 0x101860c, Func Offset: 0x2cc
	// Line 290, Address: 0x1018620, Func Offset: 0x2e0
	// Line 291, Address: 0x1018634, Func Offset: 0x2f4
	// Line 292, Address: 0x1018648, Func Offset: 0x308
	// Line 293, Address: 0x101865c, Func Offset: 0x31c
	// Line 294, Address: 0x1018670, Func Offset: 0x330
	// Line 295, Address: 0x1018684, Func Offset: 0x344
	// Line 296, Address: 0x1018698, Func Offset: 0x358
	// Line 298, Address: 0x10186ac, Func Offset: 0x36c
	// Line 299, Address: 0x10186c8, Func Offset: 0x388
	// Line 301, Address: 0x10186d0, Func Offset: 0x390
	// Line 302, Address: 0x10186e4, Func Offset: 0x3a4
	// Line 303, Address: 0x10186f8, Func Offset: 0x3b8
	// Line 305, Address: 0x1018720, Func Offset: 0x3e0
	// Line 307, Address: 0x101873c, Func Offset: 0x3fc
	// Line 308, Address: 0x10187c4, Func Offset: 0x484
	// Line 309, Address: 0x10187cc, Func Offset: 0x48c
	// Line 310, Address: 0x10187e8, Func Offset: 0x4a8
	// Line 314, Address: 0x10187f8, Func Offset: 0x4b8
	// Line 316, Address: 0x1018810, Func Offset: 0x4d0
	// Line 317, Address: 0x1018820, Func Offset: 0x4e0
	// Line 318, Address: 0x1018828, Func Offset: 0x4e8
	// Line 320, Address: 0x1018830, Func Offset: 0x4f0
	// Line 321, Address: 0x1018848, Func Offset: 0x508
	// Line 322, Address: 0x1018858, Func Offset: 0x518
	// Line 323, Address: 0x1018868, Func Offset: 0x528
	// Line 326, Address: 0x1018870, Func Offset: 0x530
	// Line 331, Address: 0x1018878, Func Offset: 0x538
	// Line 333, Address: 0x1018880, Func Offset: 0x540
	// Line 336, Address: 0x1018888, Func Offset: 0x548
	// Line 339, Address: 0x1018890, Func Offset: 0x550
	// Line 340, Address: 0x10188a0, Func Offset: 0x560
	// Line 341, Address: 0x10188b0, Func Offset: 0x570
	// Line 342, Address: 0x10188c0, Func Offset: 0x580
	// Line 343, Address: 0x10188d0, Func Offset: 0x590
	// Line 344, Address: 0x10188e0, Func Offset: 0x5a0
	// Line 345, Address: 0x10188f0, Func Offset: 0x5b0
	// Line 346, Address: 0x1018900, Func Offset: 0x5c0
	// Line 347, Address: 0x1018910, Func Offset: 0x5d0
	// Line 348, Address: 0x1018920, Func Offset: 0x5e0
	// Line 349, Address: 0x1018930, Func Offset: 0x5f0
	// Line 350, Address: 0x1018940, Func Offset: 0x600
	// Line 353, Address: 0x1018950, Func Offset: 0x610
	// Line 354, Address: 0x1018968, Func Offset: 0x628
	// Line 355, Address: 0x101897c, Func Offset: 0x63c
	// Line 356, Address: 0x1018984, Func Offset: 0x644
	// Line 357, Address: 0x101898c, Func Offset: 0x64c
	// Line 359, Address: 0x1018994, Func Offset: 0x654
	// Line 360, Address: 0x101899c, Func Offset: 0x65c
	// Line 362, Address: 0x10189a4, Func Offset: 0x664
	// Line 363, Address: 0x10189b4, Func Offset: 0x674
	// Line 364, Address: 0x10189bc, Func Offset: 0x67c
	// Line 367, Address: 0x10189c4, Func Offset: 0x684
	// Line 368, Address: 0x10189d8, Func Offset: 0x698
	// Line 369, Address: 0x10189dc, Func Offset: 0x69c
	// Func End, Address: 0x10189ec, Func Offset: 0x6ac
}

// 
// Start address: 0x10189f0
void game_init()
{
	// Line 373, Address: 0x10189f0, Func Offset: 0
	// Line 375, Address: 0x10189f8, Func Offset: 0x8
	// Line 376, Address: 0x1018a00, Func Offset: 0x10
	// Line 378, Address: 0x1018a08, Func Offset: 0x18
	// Line 379, Address: 0x1018a10, Func Offset: 0x20
	// Line 380, Address: 0x1018a18, Func Offset: 0x28
	// Line 381, Address: 0x1018a44, Func Offset: 0x54
	// Line 385, Address: 0x1018a50, Func Offset: 0x60
	// Line 386, Address: 0x1018a58, Func Offset: 0x68
	// Line 387, Address: 0x1018a60, Func Offset: 0x70
	// Line 388, Address: 0x1018a68, Func Offset: 0x78
	// Line 390, Address: 0x1018a70, Func Offset: 0x80
	// Line 391, Address: 0x1018a88, Func Offset: 0x98
	// Line 392, Address: 0x1018a9c, Func Offset: 0xac
	// Line 393, Address: 0x1018aa4, Func Offset: 0xb4
	// Line 394, Address: 0x1018aac, Func Offset: 0xbc
	// Line 395, Address: 0x1018ab8, Func Offset: 0xc8
	// Line 396, Address: 0x1018ac0, Func Offset: 0xd0
	// Line 397, Address: 0x1018ac8, Func Offset: 0xd8
	// Line 398, Address: 0x1018ad0, Func Offset: 0xe0
	// Line 399, Address: 0x1018ad8, Func Offset: 0xe8
	// Line 400, Address: 0x1018ae4, Func Offset: 0xf4
	// Line 401, Address: 0x1018af8, Func Offset: 0x108
	// Line 403, Address: 0x1018b04, Func Offset: 0x114
	// Line 405, Address: 0x1018b0c, Func Offset: 0x11c
	// Line 409, Address: 0x1018b20, Func Offset: 0x130
	// Line 413, Address: 0x1018b28, Func Offset: 0x138
	// Line 414, Address: 0x1018b30, Func Offset: 0x140
	// Line 415, Address: 0x1018b50, Func Offset: 0x160
	// Line 416, Address: 0x1018b70, Func Offset: 0x180
	// Line 417, Address: 0x1018b90, Func Offset: 0x1a0
	// Line 418, Address: 0x1018bb0, Func Offset: 0x1c0
	// Line 422, Address: 0x1018bd0, Func Offset: 0x1e0
	// Line 423, Address: 0x1018bd8, Func Offset: 0x1e8
	// Line 424, Address: 0x1018be0, Func Offset: 0x1f0
	// Line 425, Address: 0x1018be8, Func Offset: 0x1f8
	// Line 426, Address: 0x1018bf0, Func Offset: 0x200
	// Line 427, Address: 0x1018bf8, Func Offset: 0x208
	// Line 428, Address: 0x1018c00, Func Offset: 0x210
	// Line 429, Address: 0x1018c08, Func Offset: 0x218
	// Line 430, Address: 0x1018c10, Func Offset: 0x220
	// Line 431, Address: 0x1018c18, Func Offset: 0x228
	// Line 432, Address: 0x1018c20, Func Offset: 0x230
	// Line 433, Address: 0x1018c28, Func Offset: 0x238
	// Line 434, Address: 0x1018c30, Func Offset: 0x240
	// Line 435, Address: 0x1018c38, Func Offset: 0x248
	// Line 436, Address: 0x1018c40, Func Offset: 0x250
	// Line 437, Address: 0x1018c48, Func Offset: 0x258
	// Line 438, Address: 0x1018c50, Func Offset: 0x260
	// Line 439, Address: 0x1018c70, Func Offset: 0x280
	// Line 442, Address: 0x1018c90, Func Offset: 0x2a0
	// Line 443, Address: 0x1018c98, Func Offset: 0x2a8
	// Line 444, Address: 0x1018ca0, Func Offset: 0x2b0
	// Line 445, Address: 0x1018ca8, Func Offset: 0x2b8
	// Line 446, Address: 0x1018cb0, Func Offset: 0x2c0
	// Line 447, Address: 0x1018cb8, Func Offset: 0x2c8
	// Line 448, Address: 0x1018cc0, Func Offset: 0x2d0
	// Line 449, Address: 0x1018cc8, Func Offset: 0x2d8
	// Line 450, Address: 0x1018cd0, Func Offset: 0x2e0
	// Line 451, Address: 0x1018cd8, Func Offset: 0x2e8
	// Line 452, Address: 0x1018ce0, Func Offset: 0x2f0
	// Line 453, Address: 0x1018ce8, Func Offset: 0x2f8
	// Line 454, Address: 0x1018cf0, Func Offset: 0x300
	// Line 455, Address: 0x1018cf8, Func Offset: 0x308
	// Line 456, Address: 0x1018d00, Func Offset: 0x310
	// Line 457, Address: 0x1018d08, Func Offset: 0x318
	// Line 458, Address: 0x1018d10, Func Offset: 0x320
	// Line 459, Address: 0x1018d18, Func Offset: 0x328
	// Line 460, Address: 0x1018d20, Func Offset: 0x330
	// Line 461, Address: 0x1018d28, Func Offset: 0x338
	// Line 462, Address: 0x1018d30, Func Offset: 0x340
	// Line 463, Address: 0x1018d38, Func Offset: 0x348
	// Line 464, Address: 0x1018d40, Func Offset: 0x350
	// Line 465, Address: 0x1018d48, Func Offset: 0x358
	// Line 466, Address: 0x1018d50, Func Offset: 0x360
	// Line 467, Address: 0x1018d58, Func Offset: 0x368
	// Line 468, Address: 0x1018d60, Func Offset: 0x370
	// Line 469, Address: 0x1018d68, Func Offset: 0x378
	// Line 470, Address: 0x1018d70, Func Offset: 0x380
	// Line 471, Address: 0x1018d78, Func Offset: 0x388
	// Line 472, Address: 0x1018d80, Func Offset: 0x390
	// Line 473, Address: 0x1018d88, Func Offset: 0x398
	// Line 474, Address: 0x1018d90, Func Offset: 0x3a0
	// Line 475, Address: 0x1018d98, Func Offset: 0x3a8
	// Line 476, Address: 0x1018da0, Func Offset: 0x3b0
	// Line 477, Address: 0x1018da8, Func Offset: 0x3b8
	// Line 478, Address: 0x1018db0, Func Offset: 0x3c0
	// Line 479, Address: 0x1018db8, Func Offset: 0x3c8
	// Line 480, Address: 0x1018dc0, Func Offset: 0x3d0
	// Line 481, Address: 0x1018dc8, Func Offset: 0x3d8
	// Line 482, Address: 0x1018dd0, Func Offset: 0x3e0
	// Line 483, Address: 0x1018dd8, Func Offset: 0x3e8
	// Line 484, Address: 0x1018de0, Func Offset: 0x3f0
	// Line 485, Address: 0x1018de8, Func Offset: 0x3f8
	// Line 486, Address: 0x1018df0, Func Offset: 0x400
	// Line 487, Address: 0x1018df8, Func Offset: 0x408
	// Line 488, Address: 0x1018e00, Func Offset: 0x410
	// Line 489, Address: 0x1018e08, Func Offset: 0x418
	// Line 490, Address: 0x1018e10, Func Offset: 0x420
	// Line 491, Address: 0x1018e30, Func Offset: 0x440
	// Line 492, Address: 0x1018e38, Func Offset: 0x448
	// Line 493, Address: 0x1018e40, Func Offset: 0x450
	// Line 494, Address: 0x1018e48, Func Offset: 0x458
	// Line 495, Address: 0x1018e50, Func Offset: 0x460
	// Line 496, Address: 0x1018e58, Func Offset: 0x468
	// Line 497, Address: 0x1018e60, Func Offset: 0x470
	// Line 498, Address: 0x1018e68, Func Offset: 0x478
	// Line 499, Address: 0x1018e70, Func Offset: 0x480
	// Line 500, Address: 0x1018e78, Func Offset: 0x488
	// Line 501, Address: 0x1018e80, Func Offset: 0x490
	// Line 502, Address: 0x1018e88, Func Offset: 0x498
	// Line 503, Address: 0x1018e90, Func Offset: 0x4a0
	// Line 504, Address: 0x1018e98, Func Offset: 0x4a8
	// Line 505, Address: 0x1018ea0, Func Offset: 0x4b0
	// Line 506, Address: 0x1018ea8, Func Offset: 0x4b8
	// Line 507, Address: 0x1018eb0, Func Offset: 0x4c0
	// Line 508, Address: 0x1018eb8, Func Offset: 0x4c8
	// Line 509, Address: 0x1018ec0, Func Offset: 0x4d0
	// Line 510, Address: 0x1018ec8, Func Offset: 0x4d8
	// Line 511, Address: 0x1018ed0, Func Offset: 0x4e0
	// Line 512, Address: 0x1018ed8, Func Offset: 0x4e8
	// Line 513, Address: 0x1018ee0, Func Offset: 0x4f0
	// Line 514, Address: 0x1018ee8, Func Offset: 0x4f8
	// Line 515, Address: 0x1018f08, Func Offset: 0x518
	// Line 516, Address: 0x1018f28, Func Offset: 0x538
	// Line 517, Address: 0x1018f30, Func Offset: 0x540
	// Line 518, Address: 0x1018f38, Func Offset: 0x548
	// Line 519, Address: 0x1018f40, Func Offset: 0x550
	// Line 520, Address: 0x1018f48, Func Offset: 0x558
	// Line 521, Address: 0x1018f50, Func Offset: 0x560
	// Line 522, Address: 0x1018f58, Func Offset: 0x568
	// Line 523, Address: 0x1018f60, Func Offset: 0x570
	// Line 524, Address: 0x1018f68, Func Offset: 0x578
	// Line 525, Address: 0x1018f70, Func Offset: 0x580
	// Line 526, Address: 0x1018f78, Func Offset: 0x588
	// Line 527, Address: 0x1018f80, Func Offset: 0x590
	// Line 528, Address: 0x1018f88, Func Offset: 0x598
	// Line 529, Address: 0x1018f90, Func Offset: 0x5a0
	// Line 530, Address: 0x1018f98, Func Offset: 0x5a8
	// Line 533, Address: 0x1018fb8, Func Offset: 0x5c8
	// Line 536, Address: 0x1018fc0, Func Offset: 0x5d0
	// Line 537, Address: 0x1018fc8, Func Offset: 0x5d8
	// Line 538, Address: 0x1018fd0, Func Offset: 0x5e0
	// Line 539, Address: 0x1018fd8, Func Offset: 0x5e8
	// Line 540, Address: 0x1018fe0, Func Offset: 0x5f0
	// Line 541, Address: 0x1018fe8, Func Offset: 0x5f8
	// Line 542, Address: 0x1018ff0, Func Offset: 0x600
	// Line 543, Address: 0x1018ff8, Func Offset: 0x608
	// Line 544, Address: 0x1019000, Func Offset: 0x610
	// Line 545, Address: 0x1019008, Func Offset: 0x618
	// Line 546, Address: 0x1019010, Func Offset: 0x620
	// Line 547, Address: 0x1019018, Func Offset: 0x628
	// Line 548, Address: 0x1019020, Func Offset: 0x630
	// Line 549, Address: 0x1019028, Func Offset: 0x638
	// Line 550, Address: 0x1019030, Func Offset: 0x640
	// Line 551, Address: 0x1019038, Func Offset: 0x648
	// Line 552, Address: 0x1019040, Func Offset: 0x650
	// Line 553, Address: 0x1019048, Func Offset: 0x658
	// Line 554, Address: 0x1019050, Func Offset: 0x660
	// Line 555, Address: 0x1019058, Func Offset: 0x668
	// Line 556, Address: 0x1019060, Func Offset: 0x670
	// Line 557, Address: 0x1019068, Func Offset: 0x678
	// Line 558, Address: 0x1019070, Func Offset: 0x680
	// Line 559, Address: 0x1019078, Func Offset: 0x688
	// Line 560, Address: 0x1019080, Func Offset: 0x690
	// Line 561, Address: 0x1019088, Func Offset: 0x698
	// Line 562, Address: 0x1019090, Func Offset: 0x6a0
	// Line 563, Address: 0x1019098, Func Offset: 0x6a8
	// Line 564, Address: 0x10190a0, Func Offset: 0x6b0
	// Line 565, Address: 0x10190a8, Func Offset: 0x6b8
	// Line 566, Address: 0x10190b0, Func Offset: 0x6c0
	// Line 567, Address: 0x10190b8, Func Offset: 0x6c8
	// Line 568, Address: 0x10190c0, Func Offset: 0x6d0
	// Line 569, Address: 0x10190c8, Func Offset: 0x6d8
	// Line 570, Address: 0x10190d0, Func Offset: 0x6e0
	// Line 571, Address: 0x10190d8, Func Offset: 0x6e8
	// Line 572, Address: 0x10190e0, Func Offset: 0x6f0
	// Line 573, Address: 0x10190e8, Func Offset: 0x6f8
	// Line 574, Address: 0x10190f0, Func Offset: 0x700
	// Line 575, Address: 0x10190f8, Func Offset: 0x708
	// Line 576, Address: 0x1019100, Func Offset: 0x710
	// Line 577, Address: 0x1019108, Func Offset: 0x718
	// Line 578, Address: 0x1019110, Func Offset: 0x720
	// Line 580, Address: 0x1019130, Func Offset: 0x740
	// Line 583, Address: 0x1019138, Func Offset: 0x748
	// Line 588, Address: 0x1019144, Func Offset: 0x754
	// Line 589, Address: 0x101914c, Func Offset: 0x75c
	// Line 590, Address: 0x1019154, Func Offset: 0x764
	// Line 591, Address: 0x1019168, Func Offset: 0x778
	// Line 592, Address: 0x1019170, Func Offset: 0x780
	// Line 594, Address: 0x1019178, Func Offset: 0x788
	// Line 595, Address: 0x1019180, Func Offset: 0x790
	// Line 600, Address: 0x1019188, Func Offset: 0x798
	// Line 601, Address: 0x1019190, Func Offset: 0x7a0
	// Line 602, Address: 0x101919c, Func Offset: 0x7ac
	// Line 603, Address: 0x10191a8, Func Offset: 0x7b8
	// Line 604, Address: 0x10191b4, Func Offset: 0x7c4
	// Line 605, Address: 0x10191c0, Func Offset: 0x7d0
	// Line 609, Address: 0x10191cc, Func Offset: 0x7dc
	// Line 610, Address: 0x10191d8, Func Offset: 0x7e8
	// Line 611, Address: 0x10191e4, Func Offset: 0x7f4
	// Line 612, Address: 0x10191fc, Func Offset: 0x80c
	// Line 613, Address: 0x1019210, Func Offset: 0x820
	// Line 614, Address: 0x101921c, Func Offset: 0x82c
	// Line 615, Address: 0x1019228, Func Offset: 0x838
	// Line 618, Address: 0x1019230, Func Offset: 0x840
	// Line 619, Address: 0x101923c, Func Offset: 0x84c
	// Line 620, Address: 0x1019244, Func Offset: 0x854
	// Line 621, Address: 0x101924c, Func Offset: 0x85c
	// Line 622, Address: 0x1019254, Func Offset: 0x864
	// Line 623, Address: 0x101925c, Func Offset: 0x86c
	// Line 626, Address: 0x1019264, Func Offset: 0x874
	// Line 627, Address: 0x1019278, Func Offset: 0x888
	// Line 628, Address: 0x1019280, Func Offset: 0x890
	// Line 629, Address: 0x1019288, Func Offset: 0x898
	// Line 632, Address: 0x1019290, Func Offset: 0x8a0
	// Line 633, Address: 0x10192c8, Func Offset: 0x8d8
	// Line 634, Address: 0x10192f0, Func Offset: 0x900
	// Line 635, Address: 0x10192f8, Func Offset: 0x908
	// Line 636, Address: 0x1019328, Func Offset: 0x938
	// Line 638, Address: 0x1019334, Func Offset: 0x944
	// Line 640, Address: 0x1019340, Func Offset: 0x950
	// Line 641, Address: 0x1019348, Func Offset: 0x958
	// Line 642, Address: 0x1019354, Func Offset: 0x964
	// Line 644, Address: 0x1019360, Func Offset: 0x970
	// Line 645, Address: 0x1019368, Func Offset: 0x978
	// Line 647, Address: 0x1019370, Func Offset: 0x980
	// Line 648, Address: 0x101937c, Func Offset: 0x98c
	// Line 650, Address: 0x1019388, Func Offset: 0x998
	// Line 651, Address: 0x10193a0, Func Offset: 0x9b0
	// Line 652, Address: 0x10193ac, Func Offset: 0x9bc
	// Line 655, Address: 0x10193b8, Func Offset: 0x9c8
	// Line 656, Address: 0x10193c0, Func Offset: 0x9d0
	// Line 657, Address: 0x10193c8, Func Offset: 0x9d8
	// Line 660, Address: 0x10193d4, Func Offset: 0x9e4
	// Line 661, Address: 0x10193e8, Func Offset: 0x9f8
	// Line 664, Address: 0x10193f4, Func Offset: 0xa04
	// Line 665, Address: 0x10193fc, Func Offset: 0xa0c
	// Line 666, Address: 0x1019410, Func Offset: 0xa20
	// Line 667, Address: 0x1019418, Func Offset: 0xa28
	// Line 669, Address: 0x101942c, Func Offset: 0xa3c
	// Line 671, Address: 0x1019444, Func Offset: 0xa54
	// Line 672, Address: 0x101944c, Func Offset: 0xa5c
	// Line 677, Address: 0x1019454, Func Offset: 0xa64
	// Line 680, Address: 0x101945c, Func Offset: 0xa6c
	// Func End, Address: 0x101946c, Func Offset: 0xa7c
}

// 
// Start address: 0x1019470
void play_act_set()
{
	// Line 686, Address: 0x1019470, Func Offset: 0
	// Line 687, Address: 0x101947c, Func Offset: 0xc
	// Line 688, Address: 0x101948c, Func Offset: 0x1c
	// Line 690, Address: 0x1019498, Func Offset: 0x28
	// Func End, Address: 0x10194a0, Func Offset: 0x30
}

// 
// Start address: 0x10194a0
void flow_act_set()
{
	int i;
	int time;
	int fcnt;
	_anon2* pAct;
	// Line 693, Address: 0x10194a0, Func Offset: 0
	// Line 697, Address: 0x10194b4, Func Offset: 0x14
	// Line 698, Address: 0x10194c4, Func Offset: 0x24
	// Line 699, Address: 0x10194d8, Func Offset: 0x38
	// Line 700, Address: 0x10194e0, Func Offset: 0x40
	// Line 701, Address: 0x10194e4, Func Offset: 0x44
	// Line 702, Address: 0x10194ec, Func Offset: 0x4c
	// Line 704, Address: 0x10194f0, Func Offset: 0x50
	// Line 706, Address: 0x10194f8, Func Offset: 0x58
	// Line 707, Address: 0x1019518, Func Offset: 0x78
	// Line 708, Address: 0x1019538, Func Offset: 0x98
	// Line 709, Address: 0x101953c, Func Offset: 0x9c
	// Line 710, Address: 0x1019540, Func Offset: 0xa0
	// Line 711, Address: 0x1019544, Func Offset: 0xa4
	// Line 714, Address: 0x101954c, Func Offset: 0xac
	// Func End, Address: 0x1019568, Func Offset: 0xc8
}

// 
// Start address: 0x1019570
void scdset()
{
	// Line 718, Address: 0x1019570, Func Offset: 0
	// Line 720, Address: 0x1019580, Func Offset: 0x10
	// Func End, Address: 0x1019588, Func Offset: 0x18
}

// 
// Start address: 0x1019590
void syspatchg()
{
	// Line 728, Address: 0x1019590, Func Offset: 0
	// Line 729, Address: 0x10195b8, Func Offset: 0x28
	// Line 730, Address: 0x10195c4, Func Offset: 0x34
	// Line 736, Address: 0x10195e4, Func Offset: 0x54
	// Line 737, Address: 0x10195f4, Func Offset: 0x64
	// Line 740, Address: 0x101961c, Func Offset: 0x8c
	// Line 741, Address: 0x1019640, Func Offset: 0xb0
	// Line 744, Address: 0x1019654, Func Offset: 0xc4
	// Func End, Address: 0x101965c, Func Offset: 0xcc
}

// 
// Start address: 0x1019660
void back_to_cnt()
{
	// Line 748, Address: 0x1019660, Func Offset: 0
	// Line 749, Address: 0x1019670, Func Offset: 0x10
	// Line 750, Address: 0x1019680, Func Offset: 0x20
	// Line 754, Address: 0x1019694, Func Offset: 0x34
	// Func End, Address: 0x101969c, Func Offset: 0x3c
}

// 
// Start address: 0x10196a0
void bye_cnt()
{
	// Line 760, Address: 0x10196a0, Func Offset: 0
	// Line 761, Address: 0x10196b0, Func Offset: 0x10
	// Line 764, Address: 0x10196c4, Func Offset: 0x24
	// Line 765, Address: 0x10196d4, Func Offset: 0x34
	// Line 769, Address: 0x10196e8, Func Offset: 0x48
	// Func End, Address: 0x10196f0, Func Offset: 0x50
}

// 
// Start address: 0x10196f0
void sdfdout()
{
	// Line 774, Address: 0x10196f0, Func Offset: 0
	// Line 775, Address: 0x10196f8, Func Offset: 0x8
	// Line 776, Address: 0x1019704, Func Offset: 0x14
	// Line 779, Address: 0x101971c, Func Offset: 0x2c
	// Line 780, Address: 0x1019730, Func Offset: 0x40
	// Line 782, Address: 0x1019748, Func Offset: 0x58
	// Line 783, Address: 0x1019768, Func Offset: 0x78
	// Line 784, Address: 0x1019774, Func Offset: 0x84
	// Line 788, Address: 0x101977c, Func Offset: 0x8c
	// Line 790, Address: 0x1019788, Func Offset: 0x98
	// Func End, Address: 0x1019798, Func Offset: 0xa8
}

// 
// Start address: 0x10197a0
void sdfdin()
{
	// Line 793, Address: 0x10197a0, Func Offset: 0
	// Line 794, Address: 0x10197a8, Func Offset: 0x8
	// Line 797, Address: 0x10197c0, Func Offset: 0x20
	// Line 798, Address: 0x10197d4, Func Offset: 0x34
	// Line 800, Address: 0x10197ec, Func Offset: 0x4c
	// Line 801, Address: 0x101980c, Func Offset: 0x6c
	// Line 802, Address: 0x1019818, Func Offset: 0x78
	// Line 806, Address: 0x1019820, Func Offset: 0x80
	// Line 808, Address: 0x101982c, Func Offset: 0x8c
	// Func End, Address: 0x101983c, Func Offset: 0x9c
}

// 
// Start address: 0x1019840
void da_set()
{
	unsigned short wD0;
	unsigned char da_tbl[4][7];
	// Line 815, Address: 0x1019840, Func Offset: 0
	// Line 827, Address: 0x101984c, Func Offset: 0xc
	// Line 828, Address: 0x1019864, Func Offset: 0x24
	// Line 829, Address: 0x1019874, Func Offset: 0x34
	// Line 830, Address: 0x1019884, Func Offset: 0x44
	// Line 834, Address: 0x1019898, Func Offset: 0x58
	// Line 837, Address: 0x10198d8, Func Offset: 0x98
	// Func End, Address: 0x10198ec, Func Offset: 0xac
}

