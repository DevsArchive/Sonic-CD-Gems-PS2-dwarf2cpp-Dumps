typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct dlink_export;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;

typedef void(*type_0)(short);
typedef void(*type_5)(int, int);
typedef void(*type_6)(char*);
typedef void(*type_7)(char*, char*);
typedef void(*type_8)(char***, void**);
typedef void(*type_9)();
typedef void(*type_11)();
typedef int(*type_12)();
typedef void(*type_13)(void*, unsigned char, int);
typedef int(*type_14)();
typedef void(*type_16)(void*, void*, int);
typedef void(*type_17)(unsigned short, unsigned char, char*);
typedef int(*type_18)();
typedef int(*type_19)(void*, void*, int);
typedef void(*type_23)(short, short);
typedef int(*type_26)(char*);
typedef void(*type_27)(unsigned int);
typedef int(*type_29)(int, void*, int);
typedef void(*type_30)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef int(*type_31)(int);
typedef void(*type_33)(int);
typedef char*(*type_35)(char*, char*);
typedef int(*type_37)(int, int, int, int, int);
typedef void(*type_39)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_41)();
typedef void(*type_44)(short);

typedef _anon8 type_1[700];
typedef _anon15 type_2[10];
typedef short type_3[2048];
typedef _anon5 type_4[66];
typedef char type_10[4];
typedef char type_15[12];
typedef _anon3 type_20[3];
typedef _anon3 type_21[3][3];
typedef _anon3 type_22[3][3][7];
typedef _anon3 type_24[3];
typedef _anon3 type_25[3][7];
typedef unsigned char type_28[80];
typedef unsigned char type_32[8];
typedef unsigned char type_34[766];
typedef unsigned short type_36[32];
typedef tagPALETTEENTRY* type_38[32];
typedef tagPALETTEENTRY* type_40[2];
typedef unsigned short* type_42[0];
typedef _anon13 type_43[2];
typedef short type_45[2048];
typedef tagPALETTEENTRY type_46[64];

struct _anon0
{
	short patnum;
	_anon15 aPatDat[10];
};

struct _anon1
{
	unsigned int saved;
	char player[12];
	unsigned int roundNo;
	unsigned short year;
	unsigned short month;
	unsigned short date;
	unsigned short hour;
	unsigned short min;
	unsigned short sec;
	_anon3 timeattack[3][3][7];
	_anon3 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
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
	unsigned int time;
	char name[4];
};

union _anon4
{
	int l;
	_anon6 w;
	_anon7 b;
};

struct _anon5
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon4 XPOSI;
	_anon4 YPOSI;
	_anon4 X_SPEED;
	_anon4 Y_SPEED;
	_anon4 X_ACCEL;
	_anon4 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon0* PAT_ADR;
	unsigned char SPR_FLG;
	unsigned char ACT_FLG;
	short END_XPOSI;
	short END_YPOSI;
	short X_WIDE;
	short Y_WIDE;
	unsigned char free[8];
};

struct _anon6
{
	short l;
	short h;
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

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

struct _anon8
{
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
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
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon14
{
	short mapnum;
	_anon13 aMapDat[2];
};

struct _anon15
{
	short timer;
	_anon14* paMapTbl;
};

tagPALETTEENTRY endingcol[64];
unsigned short gEndingMesTimer;
_anon2* lpKeepWork;
_anon8 SprBmp[700];
_anon1* lpScorData;
unsigned int* lpghWnd;
unsigned int* lphSurf;
int* lpFadeFlag;
_anon4* lphscrollbuff;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk1;
tagPALETTEENTRY* lpcolorwk0;
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
int(*sOpenFile)(char*);
void(*sOutputDebugString)(char*);
void(*sPrintf)(char*, char*);
char*(*sStrcpy)(char*, char*);
int(*sRandom)();
int(*sMemCmp)(void*, void*, int);
void(*sMemCpy)(void*, void*, int);
void(*sMemSet)(void*, unsigned char, int);
void(*ChangeTileBmp)(int, int);
void(*CDPlay)(short);
void(*WaveRequest)(short);
void(*ClrSpriteDebug)();
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
int(*SetGrid)(int, int, int, int, int);
_anon9 swdata2;
_anon9 swdata1;
short end_timer;
short heart_tm;
short posetimer;
short colorno2;
short coltimer2;
short colorno;
short coltimer;
unsigned short lpbs_timer[32];
unsigned char quit_flg;
tagPALETTEENTRY* asc_coltbl[2];
tagPALETTEENTRY* lpbs_good[32];
short animal_timer;
unsigned char animal_flg;
_anon5 actwk[66];
unsigned short* asc_maptbl[0];
dlink_export ExportedFunctions;
int(*sGetFileSize)(int);

void DLL_meminit(char*** pBufTbl, void** pFuncTbl);
void DLL_memfree();
void SWdataSet(_anon11 sw1, _anon11 sw2);
void game_init();
int game();
void cgmwrt_a();
void cgmwrt_b();
void v_int();
void PutAscii(unsigned short c, unsigned short XPos, unsigned short YPos);
void soundset(short ReqNo);
void EndingMesColor();
int EndingMes();

// 
// Start address: 0x1001dc0
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	// Line 117, Address: 0x1001dc0, Func Offset: 0
	// Line 119, Address: 0x1001dcc, Func Offset: 0xc
	// Line 120, Address: 0x1001de4, Func Offset: 0x24
	// Line 121, Address: 0x1001dfc, Func Offset: 0x3c
	// Line 122, Address: 0x1001e14, Func Offset: 0x54
	// Line 123, Address: 0x1001e2c, Func Offset: 0x6c
	// Line 124, Address: 0x1001e44, Func Offset: 0x84
	// Line 125, Address: 0x1001e50, Func Offset: 0x90
	// Line 127, Address: 0x1001e68, Func Offset: 0xa8
	// Line 128, Address: 0x1001e74, Func Offset: 0xb4
	// Line 129, Address: 0x1001e80, Func Offset: 0xc0
	// Line 130, Address: 0x1001e8c, Func Offset: 0xcc
	// Line 132, Address: 0x1001e98, Func Offset: 0xd8
	// Line 133, Address: 0x1001ea4, Func Offset: 0xe4
	// Line 134, Address: 0x1001eb0, Func Offset: 0xf0
	// Line 135, Address: 0x1001ec8, Func Offset: 0x108
	// Line 136, Address: 0x1001ee0, Func Offset: 0x120
	// Line 137, Address: 0x1001ef8, Func Offset: 0x138
	// Line 138, Address: 0x1001f10, Func Offset: 0x150
	// Line 139, Address: 0x1001f28, Func Offset: 0x168
	// Line 140, Address: 0x1001f34, Func Offset: 0x174
	// Line 141, Address: 0x1001f40, Func Offset: 0x180
	// Line 142, Address: 0x1001f58, Func Offset: 0x198
	// Line 143, Address: 0x1001f70, Func Offset: 0x1b0
	// Line 144, Address: 0x1001f88, Func Offset: 0x1c8
	// Line 145, Address: 0x1001fa0, Func Offset: 0x1e0
	// Line 149, Address: 0x1001fb8, Func Offset: 0x1f8
	// Line 150, Address: 0x1001fc4, Func Offset: 0x204
	// Line 151, Address: 0x1001fe0, Func Offset: 0x220
	// Line 152, Address: 0x1001ffc, Func Offset: 0x23c
	// Line 153, Address: 0x1002018, Func Offset: 0x258
	// Line 154, Address: 0x1002034, Func Offset: 0x274
	// Line 155, Address: 0x1002050, Func Offset: 0x290
	// Line 156, Address: 0x1002068, Func Offset: 0x2a8
	// Line 157, Address: 0x1002080, Func Offset: 0x2c0
	// Line 158, Address: 0x1002098, Func Offset: 0x2d8
	// Line 159, Address: 0x10020b0, Func Offset: 0x2f0
	// Line 161, Address: 0x10020c8, Func Offset: 0x308
	// Line 164, Address: 0x10020dc, Func Offset: 0x31c
	// Func End, Address: 0x10020e8, Func Offset: 0x328
}

// 
// Start address: 0x10020f0
void DLL_memfree()
{
	// Line 173, Address: 0x10020f0, Func Offset: 0
	// Func End, Address: 0x10020f8, Func Offset: 0x8
}

// 
// Start address: 0x1002100
void SWdataSet(_anon11 sw1, _anon11 sw2)
{
	// Line 181, Address: 0x1002100, Func Offset: 0
	// Line 182, Address: 0x100210c, Func Offset: 0xc
	// Line 183, Address: 0x1002118, Func Offset: 0x18
	// Line 185, Address: 0x1002124, Func Offset: 0x24
	// Func End, Address: 0x1002130, Func Offset: 0x30
}

// 
// Start address: 0x1002130
void game_init()
{
	// Line 192, Address: 0x1002130, Func Offset: 0
	// Line 193, Address: 0x1002138, Func Offset: 0x8
	// Line 195, Address: 0x1002140, Func Offset: 0x10
	// Line 197, Address: 0x100214c, Func Offset: 0x1c
	// Line 198, Address: 0x1002154, Func Offset: 0x24
	// Line 201, Address: 0x100215c, Func Offset: 0x2c
	// Line 203, Address: 0x1002164, Func Offset: 0x34
	// Line 204, Address: 0x1002174, Func Offset: 0x44
	// Line 206, Address: 0x100217c, Func Offset: 0x4c
	// Line 207, Address: 0x1002188, Func Offset: 0x58
	// Line 209, Address: 0x1002194, Func Offset: 0x64
	// Line 210, Address: 0x10021a0, Func Offset: 0x70
	// Line 212, Address: 0x10021ac, Func Offset: 0x7c
	// Line 213, Address: 0x10021b8, Func Offset: 0x88
	// Func End, Address: 0x10021c8, Func Offset: 0x98
}

// 
// Start address: 0x10021d0
int game()
{
	// Line 220, Address: 0x10021d0, Func Offset: 0
	// Line 223, Address: 0x10021d8, Func Offset: 0x8
	// Line 224, Address: 0x10021f4, Func Offset: 0x24
	// Line 225, Address: 0x1002210, Func Offset: 0x40
	// Line 228, Address: 0x100221c, Func Offset: 0x4c
	// Line 230, Address: 0x1002224, Func Offset: 0x54
	// Line 232, Address: 0x100222c, Func Offset: 0x5c
	// Line 233, Address: 0x1002248, Func Offset: 0x78
	// Line 234, Address: 0x100224c, Func Offset: 0x7c
	// Func End, Address: 0x100225c, Func Offset: 0x8c
}

// 
// Start address: 0x1002260
void cgmwrt_a()
{
	int x;
	int y;
	int TileNo;
	short aMap[2048];
	short* pMap;
	unsigned int hf;
	// Line 238, Address: 0x1002260, Func Offset: 0
	// Line 243, Address: 0x100227c, Func Offset: 0x1c
	// Line 244, Address: 0x1002298, Func Offset: 0x38
	// Line 246, Address: 0x10022c0, Func Offset: 0x60
	// Line 247, Address: 0x10022d8, Func Offset: 0x78
	// Line 250, Address: 0x10022e0, Func Offset: 0x80
	// Line 251, Address: 0x10022fc, Func Offset: 0x9c
	// Line 253, Address: 0x1002310, Func Offset: 0xb0
	// Line 255, Address: 0x100231c, Func Offset: 0xbc
	// Line 256, Address: 0x100232c, Func Offset: 0xcc
	// Line 258, Address: 0x1002338, Func Offset: 0xd8
	// Line 259, Address: 0x100234c, Func Offset: 0xec
	// Line 260, Address: 0x100235c, Func Offset: 0xfc
	// Line 262, Address: 0x1002370, Func Offset: 0x110
	// Line 263, Address: 0x1002394, Func Offset: 0x134
	// Line 264, Address: 0x10023a4, Func Offset: 0x144
	// Line 265, Address: 0x10023b4, Func Offset: 0x154
	// Func End, Address: 0x10023d8, Func Offset: 0x178
}

// 
// Start address: 0x10023e0
void cgmwrt_b()
{
	int x;
	int y;
	int TileNo;
	short bMap[2048];
	short* pMap;
	unsigned int hf;
	// Line 267, Address: 0x10023e0, Func Offset: 0
	// Line 272, Address: 0x10023fc, Func Offset: 0x1c
	// Line 273, Address: 0x1002418, Func Offset: 0x38
	// Line 275, Address: 0x1002440, Func Offset: 0x60
	// Line 276, Address: 0x1002458, Func Offset: 0x78
	// Line 279, Address: 0x1002460, Func Offset: 0x80
	// Line 280, Address: 0x100247c, Func Offset: 0x9c
	// Line 282, Address: 0x1002490, Func Offset: 0xb0
	// Line 284, Address: 0x100249c, Func Offset: 0xbc
	// Line 285, Address: 0x10024ac, Func Offset: 0xcc
	// Line 287, Address: 0x10024b8, Func Offset: 0xd8
	// Line 288, Address: 0x10024cc, Func Offset: 0xec
	// Line 289, Address: 0x10024dc, Func Offset: 0xfc
	// Line 290, Address: 0x10024f0, Func Offset: 0x110
	// Line 291, Address: 0x1002514, Func Offset: 0x134
	// Line 292, Address: 0x1002524, Func Offset: 0x144
	// Line 293, Address: 0x1002534, Func Offset: 0x154
	// Func End, Address: 0x1002558, Func Offset: 0x178
}

// 
// Start address: 0x1002560
void v_int()
{
	tagPALETTEENTRY* lpDst;
	tagPALETTEENTRY* lpSpr;
	_anon4 ld0;
	short i;
	short d0;
	// Line 299, Address: 0x1002560, Func Offset: 0
	// Line 305, Address: 0x1002578, Func Offset: 0x18
	// Line 307, Address: 0x1002590, Func Offset: 0x30
	// Line 309, Address: 0x10025bc, Func Offset: 0x5c
	// Line 312, Address: 0x10025c4, Func Offset: 0x64
	// Line 314, Address: 0x10025f0, Func Offset: 0x90
	// Line 316, Address: 0x1002600, Func Offset: 0xa0
	// Line 318, Address: 0x100260c, Func Offset: 0xac
	// Line 319, Address: 0x1002618, Func Offset: 0xb8
	// Line 320, Address: 0x1002624, Func Offset: 0xc4
	// Line 321, Address: 0x1002630, Func Offset: 0xd0
	// Line 322, Address: 0x1002664, Func Offset: 0x104
	// Line 323, Address: 0x1002670, Func Offset: 0x110
	// Line 327, Address: 0x100267c, Func Offset: 0x11c
	// Line 328, Address: 0x1002690, Func Offset: 0x130
	// Line 330, Address: 0x10026a8, Func Offset: 0x148
	// Line 332, Address: 0x10026c4, Func Offset: 0x164
	// Line 334, Address: 0x10026cc, Func Offset: 0x16c
	// Line 335, Address: 0x10026dc, Func Offset: 0x17c
	// Line 336, Address: 0x1002700, Func Offset: 0x1a0
	// Line 338, Address: 0x1002714, Func Offset: 0x1b4
	// Line 339, Address: 0x1002730, Func Offset: 0x1d0
	// Line 340, Address: 0x100273c, Func Offset: 0x1dc
	// Line 342, Address: 0x1002748, Func Offset: 0x1e8
	// Line 343, Address: 0x1002778, Func Offset: 0x218
	// Line 346, Address: 0x1002798, Func Offset: 0x238
	// Line 347, Address: 0x10027ac, Func Offset: 0x24c
	// Line 349, Address: 0x10027c4, Func Offset: 0x264
	// Line 351, Address: 0x10027e0, Func Offset: 0x280
	// Line 353, Address: 0x10027e8, Func Offset: 0x288
	// Line 354, Address: 0x10027f4, Func Offset: 0x294
	// Line 355, Address: 0x1002804, Func Offset: 0x2a4
	// Line 357, Address: 0x1002818, Func Offset: 0x2b8
	// Line 358, Address: 0x1002834, Func Offset: 0x2d4
	// Line 359, Address: 0x1002840, Func Offset: 0x2e0
	// Line 361, Address: 0x100284c, Func Offset: 0x2ec
	// Line 362, Address: 0x100287c, Func Offset: 0x31c
	// Line 366, Address: 0x100289c, Func Offset: 0x33c
	// Line 368, Address: 0x10028c8, Func Offset: 0x368
	// Line 371, Address: 0x10028d4, Func Offset: 0x374
	// Func End, Address: 0x10028f4, Func Offset: 0x394
}

// 
// Start address: 0x1002900
void PutAscii(unsigned short c, unsigned short XPos, unsigned short YPos)
{
	int vcellno;
	int i;
	unsigned short* pMap;
	// Line 380, Address: 0x1002900, Func Offset: 0
	// Line 384, Address: 0x1002920, Func Offset: 0x20
	// Line 385, Address: 0x100293c, Func Offset: 0x3c
	// Line 386, Address: 0x1002950, Func Offset: 0x50
	// Line 387, Address: 0x1002954, Func Offset: 0x54
	// Line 388, Address: 0x100295c, Func Offset: 0x5c
	// Line 391, Address: 0x1002960, Func Offset: 0x60
	// Line 392, Address: 0x100296c, Func Offset: 0x6c
	// Line 393, Address: 0x10029b0, Func Offset: 0xb0
	// Line 394, Address: 0x10029f8, Func Offset: 0xf8
	// Line 395, Address: 0x1002a08, Func Offset: 0x108
	// Func End, Address: 0x1002a24, Func Offset: 0x124
}

// 
// Start address: 0x1002a30
void soundset(short ReqNo)
{
	unsigned char SeToWavTbl[80];
	// Line 398, Address: 0x1002a30, Func Offset: 0
	// Line 410, Address: 0x1002a3c, Func Offset: 0xc
	// Line 414, Address: 0x1002a54, Func Offset: 0x24
	// Line 415, Address: 0x1002a60, Func Offset: 0x30
	// Line 417, Address: 0x1002a8c, Func Offset: 0x5c
	// Line 418, Address: 0x1002aa0, Func Offset: 0x70
	// Func End, Address: 0x1002ab0, Func Offset: 0x80
}

// 
// Start address: 0x1002ab0
void EndingMesColor()
{
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	// Line 422, Address: 0x1002ab0, Func Offset: 0
	// Line 426, Address: 0x1002ac0, Func Offset: 0x10
	// Line 427, Address: 0x1002ac8, Func Offset: 0x18
	// Line 428, Address: 0x1002ad0, Func Offset: 0x20
	// Line 429, Address: 0x1002adc, Func Offset: 0x2c
	// Line 430, Address: 0x1002b0c, Func Offset: 0x5c
	// Line 431, Address: 0x1002b1c, Func Offset: 0x6c
	// Func End, Address: 0x1002b34, Func Offset: 0x84
}

// 
// Start address: 0x1002b40
int EndingMes()
{
	int i;
	// Line 433, Address: 0x1002b40, Func Offset: 0
	// Line 436, Address: 0x1002b4c, Func Offset: 0xc
	// Line 437, Address: 0x1002b60, Func Offset: 0x20
	// Line 438, Address: 0x1002b78, Func Offset: 0x38
	// Line 439, Address: 0x1002b84, Func Offset: 0x44
	// Line 450, Address: 0x1002b90, Func Offset: 0x50
	// Line 451, Address: 0x1002bac, Func Offset: 0x6c
	// Line 454, Address: 0x1002be4, Func Offset: 0xa4
	// Line 455, Address: 0x1002c08, Func Offset: 0xc8
	// Line 458, Address: 0x1002c10, Func Offset: 0xd0
	// Line 459, Address: 0x1002c34, Func Offset: 0xf4
	// Line 461, Address: 0x1002c3c, Func Offset: 0xfc
	// Line 462, Address: 0x1002c58, Func Offset: 0x118
	// Line 463, Address: 0x1002c60, Func Offset: 0x120
	// Line 465, Address: 0x1002c68, Func Offset: 0x128
	// Line 469, Address: 0x1002c7c, Func Offset: 0x13c
	// Line 470, Address: 0x1002c84, Func Offset: 0x144
	// Line 471, Address: 0x1002ca0, Func Offset: 0x160
	// Line 474, Address: 0x1002cd8, Func Offset: 0x198
	// Line 475, Address: 0x1002cfc, Func Offset: 0x1bc
	// Line 478, Address: 0x1002d04, Func Offset: 0x1c4
	// Line 479, Address: 0x1002d28, Func Offset: 0x1e8
	// Line 481, Address: 0x1002d30, Func Offset: 0x1f0
	// Line 484, Address: 0x1002d4c, Func Offset: 0x20c
	// Line 485, Address: 0x1002d58, Func Offset: 0x218
	// Line 486, Address: 0x1002d6c, Func Offset: 0x22c
	// Line 487, Address: 0x1002d80, Func Offset: 0x240
	// Line 488, Address: 0x1002d94, Func Offset: 0x254
	// Line 489, Address: 0x1002da4, Func Offset: 0x264
	// Line 491, Address: 0x1002dac, Func Offset: 0x26c
	// Line 496, Address: 0x1002dc0, Func Offset: 0x280
	// Line 497, Address: 0x1002dc4, Func Offset: 0x284
	// Func End, Address: 0x1002dd8, Func Offset: 0x298
}

