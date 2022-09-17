typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef unsigned short type_0[8];
typedef unsigned short type_1[8];
typedef unsigned char type_2[766];

struct _anon0
{
	short plring;
	int plscore;
	_anon1 stageno;
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
	_anon1 demoflag;
	_anon1 hintposi;
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

union _anon1
{
	short w;
	_anon2 b;
};

struct _anon2
{
	char l;
	char h;
};

unsigned short stage_table_damage[8];
unsigned short stage_table_hane[8];
short damage_cnt;
_anon0* lpKeepWork;
short chg_timer;
short hane_cnt;

void Special_block_chg(unsigned short* hane1, unsigned short* hane2, unsigned short* dmg1, unsigned short* dmg2);

// 
// Start address: 0x1000cc0
void Special_block_chg(unsigned short* hane1, unsigned short* hane2, unsigned short* dmg1, unsigned short* dmg2)
{
	// Line 37, Address: 0x1000cc0, Func Offset: 0
	// Line 39, Address: 0x1000cd4, Func Offset: 0x14
	// Line 40, Address: 0x1000d0c, Func Offset: 0x4c
	// Line 41, Address: 0x1000d5c, Func Offset: 0x9c
	// Line 43, Address: 0x1000dc0, Func Offset: 0x100
	// Line 44, Address: 0x1000dd4, Func Offset: 0x114
	// Line 46, Address: 0x1000df0, Func Offset: 0x130
	// Line 49, Address: 0x1000e28, Func Offset: 0x168
	// Line 50, Address: 0x1000e78, Func Offset: 0x1b8
	// Line 53, Address: 0x1000edc, Func Offset: 0x21c
	// Func End, Address: 0x1000ee8, Func Offset: 0x228
}

