typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;


typedef _anon8 type_0[20];
typedef _anon8 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef unsigned char type_4[766];
typedef _anon1 type_5[128];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon8 spra[20];
		_anon8 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
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

struct _anon2
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
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

short scralim_left;
_anon2* lpKeepWork;
unsigned char plflag;
unsigned char chibi_flag;
_anon6 stageno;
_anon3 scrz_v_posit;
_anon3 scrz_h_posit;
_anon3 scrc_v_posit;
_anon3 scrc_h_posit;
_anon3 scrb_v_posit;
_anon3 scrb_h_posit;
_anon3 scra_v_posit;
_anon3 scra_h_posit;
short scralim_n_down;
short scralim_down;
unsigned char water_flag;
_anon3 pltime;
unsigned char plring_f2_s;
unsigned char plring_f2;
short plring_s;
short plring;
_anon1 actwk[128];
short plxposi_s;
unsigned char waterflag;
unsigned char waterflag_s;
unsigned char water_flag_s;
short waterposi_m;
short waterposi_m_s;
unsigned char chibi_s;
short scrz_v_posit_s;
short scrz_h_posit_s;
short scrc_v_posit_s;
short scrc_h_posit_s;
short scrb_v_posit_s;
short scrb_h_posit_s;
short scra_v_posit_s;
short scra_h_posit_s;
short scralim_down_s;
int pltime_s;
short plyposi_s;
unsigned char plflag_s;

void playloadb();
void playload();

// 
// Start address: 0x1005e30
void playloadb()
{
	_anon1* pActwk;
	// Line 14, Address: 0x1005e30, Func Offset: 0
	// Line 17, Address: 0x1005e38, Func Offset: 0x8
	// Line 18, Address: 0x1005e40, Func Offset: 0x10
	// Line 19, Address: 0x1005e50, Func Offset: 0x20
	// Line 20, Address: 0x1005e60, Func Offset: 0x30
	// Line 21, Address: 0x1005e70, Func Offset: 0x40
	// Line 22, Address: 0x1005e80, Func Offset: 0x50
	// Line 23, Address: 0x1005e90, Func Offset: 0x60
	// Line 25, Address: 0x1005ea0, Func Offset: 0x70
	// Line 26, Address: 0x1005eb4, Func Offset: 0x84
	// Line 27, Address: 0x1005ec8, Func Offset: 0x98
	// Line 28, Address: 0x1005edc, Func Offset: 0xac
	// Line 30, Address: 0x1005ef0, Func Offset: 0xc0
	// Line 31, Address: 0x1005f04, Func Offset: 0xd4
	// Line 32, Address: 0x1005f18, Func Offset: 0xe8
	// Line 33, Address: 0x1005f2c, Func Offset: 0xfc
	// Line 34, Address: 0x1005f40, Func Offset: 0x110
	// Line 35, Address: 0x1005f54, Func Offset: 0x124
	// Line 36, Address: 0x1005f68, Func Offset: 0x138
	// Line 37, Address: 0x1005f7c, Func Offset: 0x14c
	// Line 38, Address: 0x1005f90, Func Offset: 0x160
	// Line 39, Address: 0x1005fa4, Func Offset: 0x174
	// Line 40, Address: 0x1005fb8, Func Offset: 0x188
	// Line 41, Address: 0x1005fcc, Func Offset: 0x19c
	// Line 43, Address: 0x1005fe0, Func Offset: 0x1b0
	// Line 44, Address: 0x1005ffc, Func Offset: 0x1cc
	// Line 46, Address: 0x1006010, Func Offset: 0x1e0
	// Line 47, Address: 0x1006030, Func Offset: 0x200
	// Line 51, Address: 0x1006058, Func Offset: 0x228
	// Func End, Address: 0x1006068, Func Offset: 0x238
}

// 
// Start address: 0x1006070
void playload()
{
	_anon1* pActwk;
	// Line 54, Address: 0x1006070, Func Offset: 0
	// Line 56, Address: 0x100607c, Func Offset: 0xc
	// Line 58, Address: 0x1006084, Func Offset: 0x14
	// Line 60, Address: 0x100609c, Func Offset: 0x2c
	// Line 61, Address: 0x10060a4, Func Offset: 0x34
	// Line 64, Address: 0x10060ac, Func Offset: 0x3c
	// Line 65, Address: 0x10060bc, Func Offset: 0x4c
	// Line 66, Address: 0x10060c8, Func Offset: 0x58
	// Line 67, Address: 0x10060d4, Func Offset: 0x64
	// Line 68, Address: 0x10060dc, Func Offset: 0x6c
	// Line 69, Address: 0x10060e4, Func Offset: 0x74
	// Line 70, Address: 0x10060f4, Func Offset: 0x84
	// Line 71, Address: 0x1006100, Func Offset: 0x90
	// Line 72, Address: 0x1006114, Func Offset: 0xa4
	// Line 73, Address: 0x1006124, Func Offset: 0xb4
	// Line 74, Address: 0x1006134, Func Offset: 0xc4
	// Line 75, Address: 0x1006144, Func Offset: 0xd4
	// Line 76, Address: 0x1006154, Func Offset: 0xe4
	// Line 77, Address: 0x1006164, Func Offset: 0xf4
	// Line 78, Address: 0x1006174, Func Offset: 0x104
	// Line 79, Address: 0x1006184, Func Offset: 0x114
	// Line 80, Address: 0x1006194, Func Offset: 0x124
	// Line 81, Address: 0x10061a4, Func Offset: 0x134
	// Line 82, Address: 0x10061b4, Func Offset: 0x144
	// Line 84, Address: 0x10061c4, Func Offset: 0x154
	// Line 85, Address: 0x10061e0, Func Offset: 0x170
	// Line 88, Address: 0x10061f0, Func Offset: 0x180
	// Line 89, Address: 0x100620c, Func Offset: 0x19c
	// Line 90, Address: 0x100621c, Func Offset: 0x1ac
	// Line 91, Address: 0x100622c, Func Offset: 0x1bc
	// Line 94, Address: 0x100623c, Func Offset: 0x1cc
	// Line 95, Address: 0x100625c, Func Offset: 0x1ec
	// Line 99, Address: 0x1006280, Func Offset: 0x210
	// Func End, Address: 0x1006294, Func Offset: 0x224
}

