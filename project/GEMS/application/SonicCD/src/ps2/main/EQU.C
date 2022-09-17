typedef struct _anon0;
typedef struct tagPALETTEENTRY;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef union _anon14;
typedef struct _anon15;
typedef struct _anon16;


typedef _anon16 type_0[20];
typedef unsigned char type_1[32];
typedef _anon16 type_2[0];
typedef _anon6 type_3[192];
typedef unsigned char type_4[3];
typedef unsigned char type_5[7];
typedef unsigned char type_6[7];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef int type_9[128];
typedef unsigned short type_10[4];
typedef unsigned short type_11[4][1024];
typedef unsigned char type_12[4096];
typedef short type_13[256];
typedef _anon1* type_14[63];
typedef _anon5 type_15[8];
typedef unsigned char type_16[766];
typedef short type_17[128];
typedef unsigned char type_18[6];
typedef _anon1 type_19[128];
typedef unsigned char type_20[6];
typedef unsigned int type_21[24];
typedef unsigned char type_22[766];
typedef char type_23[4];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon16 spra[20];
		_anon16 spr[0];
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
	_anon6 xposi;
	_anon6 yposi;
	_anon9 xspeed;
	_anon9 yspeed;
	_anon9 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon9 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon9 direc;
	_anon9 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon2
{
	short plring;
	int plscore;
	_anon9 stageno;
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
	_anon9 demoflag;
	_anon9 hintposi;
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
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
};

struct _anon4
{
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
};

struct _anon5
{
	int cnt;
	_anon1* pActwk[63];
};

union _anon6
{
	int l;
	_anon7 w;
	_anon8 b;
};

struct _anon7
{
	short l;
	short h;
};

struct _anon8
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon9
{
	short w;
	_anon10 b;
};

struct _anon10
{
	char l;
	char h;
};

union _anon11
{
	unsigned int l;
	_anon12 w;
	_anon13 b;
};

struct _anon12
{
	unsigned short l;
	unsigned short h;
};

struct _anon13
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon14
{
	unsigned short w;
	_anon15 b;
};

struct _anon15
{
	unsigned char l;
	unsigned char h;
};

struct _anon16
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char ta_flag;
unsigned char clrspflg_save;
unsigned char flagworkcnt;
unsigned char flagworkcnt2;
unsigned char play_status;
unsigned char pl_suu;
unsigned char main_play;
short pl_air;
unsigned char pltimeover_f;
unsigned char plring_f2;
unsigned char pl_suu_f;
unsigned char plring_f;
unsigned char pltime_f;
unsigned char plscore_f;
short plring;
int plscore;
unsigned char play_start;
unsigned char start_flag;
unsigned char plpower_b;
unsigned char plpower_m;
unsigned char plpower_s;
unsigned char plpower_a;
unsigned char plflag;
unsigned char plflag_s;
short plxposi_s;
short plyposi_s;
short plring_s;
int pltime_s;
unsigned char time_flag;
short scralim_down_s;
short scra_h_posit_s;
short scra_v_posit_s;
short scrb_h_posit_s;
short scrb_v_posit_s;
short scrc_h_posit_s;
short scrc_v_posit_s;
short scrz_h_posit_s;
short scrz_v_posit_s;
short waterposi_m_s;
unsigned char water_flag_s;
unsigned char waterflag_s;
unsigned char plring_f2_s;
unsigned char generate_flag;
unsigned char plsubchg_flag;
unsigned char enkeino;
unsigned char projector_flag;
unsigned char special_flag;
unsigned char conbine_flag;
unsigned char enecgflg;
unsigned char enecgpnt;
unsigned char emie3end;
int extrascore;
short demono;
short enddemono;
unsigned char mdstatus;
unsigned int resetflg;
unsigned char markerno;
unsigned char colrevflag;
unsigned char gf_flag;
unsigned char chibi_s;
unsigned char prio_s;
unsigned char tv_flag;
short edittimer;
short time_stop;
unsigned char sys_pattim;
unsigned char sys_patno;
unsigned char sys_pattim2;
unsigned char sys_patno2;
unsigned char sys_pattim3;
unsigned char sys_patno3;
unsigned char sys_pattim4;
unsigned char sys_patno4;
short sys_ringtimer;
short editstack;
short editstack2;
short mapcheck;
short blkno;
unsigned char edit_user;
unsigned char sysdirec;
unsigned char prio_flag;
unsigned char init_flag;
unsigned char boss_sound;
unsigned char shut_flag;
unsigned char st6clrchg;
unsigned char chibi_flag;
unsigned char mapwrt_cnt;
unsigned int sbufadr;
int stacksave;
short sprpage;
short waittimer;
unsigned char startcolor;
unsigned char colorcnt;
unsigned char int_flg;
unsigned char linkdata;
int cltbladr;
int ranum;
short cgwrtcnt;
short cgwrttim;
int dmastack;
short waterposi;
short waterposi_m;
short watermoveposi;
unsigned char waterspeed;
unsigned char water_flag;
unsigned char waterflag;
unsigned char waterflag2;
unsigned short bitdevadr;
short bitdevcnt;
short bitdevcnt2;
unsigned short hintflag;
short scralim_n_left;
short scralim_n_right;
short scralim_n_up;
short scralim_n_down;
short scralim_left;
short scralim_right;
short scralim_up;
short scralim_down;
short scrar_no;
short scra_h_keep;
short scra_v_keep;
short scra_hz;
short scra_vz;
short scra_vline;
unsigned char scrh_flag;
unsigned char scrv_flag;
unsigned char scra_h_count;
unsigned char scra_v_count;
unsigned char scrb_h_count;
unsigned char scrb_v_count;
unsigned char scrc_h_count;
unsigned char scrc_v_count;
unsigned char scrz_h_count;
unsigned char scrz_v_count;
unsigned char limmoveflag;
unsigned char playpatno1;
unsigned char kusya_flag;
short plmaxspdwk;
short pladdspdwk;
short plretspdwk;
unsigned char playpatno;
unsigned char playwrtflag;
short asetposi;
char time_item;
short backto_cnt;
unsigned char scr_cnt;
unsigned int demo_adr;
short demo_cnt;
short swbufcnt;
short scra_hline;
unsigned char bossflag;
unsigned char bossstart;
unsigned char loopmapno;
unsigned char loopmapno2;
unsigned char ballmapno;
unsigned char ballmapno2;
unsigned char watercoliflag;
unsigned char waterstop;
unsigned char mizuflag;
unsigned char sekichyuflag;
unsigned char plautoflag;
unsigned char specflag;
unsigned char dai2rmvflag;
short emyscorecnt;
short timebonus;
short ringbonus;
unsigned char bonus_f;
unsigned char edplayflag;
unsigned char ms_wflg;
_anon2* lpKeepWork;
int* lpFadeFlag;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk;
unsigned char switchflag[32];
_anon9 waterdirec;
unsigned char clchgtim[7];
unsigned char clchgcnt[7];
_anon14 plposiwkadr;
unsigned char* scdadr;
_anon9 byecnt1;
_anon9 byecnt0;
_anon4* asetadrz2;
_anon4* asetadrz;
_anon3* asetadr2;
_anon3* asetadr;
_anon9 actset_rno;
char dirstk[4];
_anon14 scrflagz;
_anon14 scrflagc;
_anon14 scrflagb;
_anon14 scrflaga;
_anon9 scr_timer;
_anon14 scr_die;
_anon9 scroll_start;
_anon14 zone_flag;
_anon6 scrz_v_posit;
_anon6 scrz_h_posit;
_anon6 scrc_v_posit;
_anon6 scrc_h_posit;
_anon6 scrb_v_posit;
_anon6 scrb_h_posit;
_anon6 scra_v_posit;
_anon6 scra_h_posit;
unsigned int divdevwk[24];
unsigned char cgchgtim[6];
unsigned char cgchgcnt[6];
_anon14 pauseflag;
_anon9 intcnt;
_anon9 hintposi;
_anon6 hscroll;
_anon6 vscroll;
_anon14 swdata2;
_anon14 swdata1;
_anon14 swdata;
_anon9 gmmode;
_anon1 actwk[128];
_anon6* lphscrollbuff;
short playposiwk[128];
_anon5 pbuffer[8];
short hscrollwork[256];
unsigned char flowwk[4096];
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
int linework[128];
_anon9 col_x;
_anon9 col_y;
_anon14 scrflagzw;
_anon14 scrflagcw;
_anon14 scrflagbw;
_anon14 scrflagaw;
_anon6 scrz_v_posiw;
_anon6 scrz_h_posiw;
_anon6 scrc_v_posiw;
_anon6 scrc_h_posiw;
_anon6 scrb_v_posiw;
_anon6 scrb_h_posiw;
_anon6 scra_v_posiw;
_anon6 scra_h_posiw;
_anon6 systemtimer;
_anon9 editmode;
_anon9 editno;
unsigned char flowercnt[3];
_anon6 flowerposi[192];
_anon9 debugflag;
_anon9 demoflag;
_anon11 debugwork;
_anon6 pltime;
_anon9 stageno;
_anon9 gametimer;
_anon9 gameflag;
unsigned char flagwork[766];


