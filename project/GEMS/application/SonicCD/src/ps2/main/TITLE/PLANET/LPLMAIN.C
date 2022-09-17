typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef struct tagPALETTEENTRY;
typedef struct _anon10;
typedef struct _anon11;
typedef union _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef union _anon15;
typedef struct dlink_export;
typedef struct _anon16;

typedef void(*type_0)();
typedef int(*type_1)();
typedef int(*type_2)();
typedef void(*type_4)(unsigned int);
typedef _anon0*(*type_5)(unsigned int);
typedef void(*type_6)(char*);
typedef void(*type_7)(unsigned short, unsigned char, char*);
typedef void(*type_8)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_9)(char*, char*);
typedef int(*type_11)();
typedef void*(*type_12)(int);
typedef void(*type_14)(void*);
typedef void(*type_17)(void*, unsigned char, int);
typedef void(*type_20)(void*, void*, int);
typedef int(*type_23)(char*);
typedef int(*type_24)(int, void*, int);
typedef int(*type_26)(int);
typedef void(*type_28)(char***, void**);
typedef void(*type_29)(int);
typedef void(*type_31)();
typedef int(*type_32)(int, int, int, int, int);
typedef void(*type_33)();
typedef void(*type_35)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_38)();
typedef void(*type_39)(short, short);
typedef void(*type_40)(short);
typedef void(*type_42)(short);
typedef void(*type_44)(int, int);

typedef short type_3[0];
typedef _anon3 type_10[2];
typedef _anon5 type_13[10];
typedef _anon10 type_15[700];
typedef char type_16[26];
typedef short type_18[39];
typedef short* type_19[0];
typedef _anon11 type_21[18];
typedef short type_22[0];
typedef tagPALETTEENTRY** type_25[0];
typedef tagPALETTEENTRY type_27[0];
typedef tagPALETTEENTRY type_30[0];
typedef short type_34[0];
typedef tagPALETTEENTRY type_36[0];
typedef tagPALETTEENTRY* type_37[0];
typedef char* type_41[3];
typedef unsigned char type_43[766];
typedef short type_45[704];

struct _anon0
{
	unsigned int On;
	unsigned int Press;
	unsigned int Release;
	short X1;
	short Y1;
	short X2;
	short Y2;
};

union _anon1
{
	unsigned short w;
	_anon2 b;
};

struct _anon2
{
	unsigned char l;
	unsigned char h;
};

struct _anon3
{
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon4
{
	short mapnum;
	_anon3 aMapDat[2];
};

struct _anon5
{
	short timer;
	_anon4* paMapTbl;
};

struct _anon6
{
	short patnum;
	_anon5 aPatDat[10];
};

struct _anon7
{
	short plring;
	int plscore;
	_anon15 stageno;
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
	_anon15 demoflag;
	_anon15 hintposi;
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

union _anon8
{
	unsigned char* wordram;
	_anon9 mcntwk;
};

struct _anon9
{
	unsigned char mcntflg;
	unsigned char dummy;
	unsigned char* copy_adr;
	unsigned short copy_size;
	unsigned char* pc_adr;
	unsigned char* user_hint;
	unsigned char* user_vint;
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
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
};

struct _anon11
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon12 XPOSI;
	_anon12 YPOSI;
	_anon12 X_SPEED;
	_anon12 Y_SPEED;
	_anon12 X_ACCEL;
	_anon12 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon6* PAT_ADR;
	unsigned char SPR_FLG;
	unsigned char ACT_FLG;
	short END_XPOSI;
	short END_YPOSI;
	short X_WIDE;
	short Y_WIDE;
	unsigned char timer1;
	unsigned char timer2;
};

union _anon12
{
	int l;
	_anon13 w;
	_anon14 b;
};

struct _anon13
{
	short l;
	short h;
};

struct _anon14
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon15
{
	short w;
	_anon16 b;
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

struct _anon16
{
	char l;
	char h;
};

char* ScrAMapFileName[3];
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
_anon7* lpKeepWork;
int(*sOpenFile)(char*);
void*(*sMemAlloc)(int);
_anon8 wordram;
int InitMode;
int MakeupMode;
short tv_adr[0];
_anon10 SprBmp[700];
int* lpFadeFlag;
_anon12* lphscrollbuff;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk1;
tagPALETTEENTRY* lpcolorwk0;
_anon0*(*sPeriPadGet)(unsigned int);
void(*sOutputDebugString)(char*);
void(*sPrintf)(char*, char*);
int(*sRandom)();
void(*sMemCpy)(void*, void*, int);
void(*sMemSet)(void*, unsigned char, int);
void(*sMemFree)(void*);
void(*WaveAllStop)();
void(*ChangeTileBmp)(int, int);
void(*CDPlay)(short);
void(*WaveRequest)(short);
void(*ClrSpriteDebug)();
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
int(*SetGrid)(int, int, int, int, int);
_anon1 swdata2;
_anon1 swdata1;
char ScrBMapFileName[26];
unsigned int bGameInit;
tagPALETTEENTRY init_col[0];
unsigned char comflag_m;
unsigned char flash_flg;
unsigned char comflag_s;
unsigned short comdata_s7;
unsigned short comdata_s6;
unsigned short comdata_s5;
unsigned short comdata_s4;
unsigned short comdata_s3;
unsigned short comdata_s2;
unsigned short comdata_s1;
unsigned short comdata_s0;
short main_lpcnt;
unsigned short comdata_m7;
unsigned short comdata_m6;
unsigned short comdata_m5;
unsigned short comdata_m4;
unsigned short comdata_m3;
unsigned short comdata_m2;
unsigned short comdata_m1;
unsigned short comdata_m0;
short ScrBMap[704];
int ProcMode;
short intmode;
short* funka_map_tbl[0];
short funka_patno;
short funka_pctimer;
short funka_timetbl[0];
short lplanet_no;
unsigned char actset_flg;
unsigned char music_selflg;
_anon11 actwk[18];
tagPALETTEENTRY ascii_col[0];
tagPALETTEENTRY sprite_col1[0];
tagPALETTEENTRY** lp_coltbl[0];
short spr_colno;
short spr_coltimer;
unsigned short coltimer;
short lpbs_timer[0];
short colorno;
short gmtime1;
short gmtime0;
tagPALETTEENTRY* sprite_color[0];
short DATable[39];
dlink_export ExportedFunctions;
int(*sGetFileSize)(int);
unsigned int hSmAdr;
unsigned int hWordRAM;

void DLL_meminit(char*** pBufTbl, void** pFuncTbl);
void DLL_memfree();
void SWdataSet(_anon1 sw1, _anon1 sw2);
void game_init();
int game();
void ram_clear();
void cgdata_unlze();
void kaiten_req();
void m2copy();
void cgchange_chk();
void lp_makeup();
int init_dsp();
void end_proc();
void prg_init();
void patchg_init();
void prgend_chk();
void cgdata_change();
void SubCpuMain();
void v_int();
void cgmwrt_a();
void cgmwrt_b();
void cd_call();

// 
// Start address: 0x1004f60
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	int x;
	int y;
	unsigned int hf;
	short s;
	short* pSmap;
	// Line 178, Address: 0x1004f60, Func Offset: 0
	// Line 184, Address: 0x1004f80, Func Offset: 0x20
	// Line 185, Address: 0x1004f98, Func Offset: 0x38
	// Line 186, Address: 0x1004fb0, Func Offset: 0x50
	// Line 187, Address: 0x1004fc8, Func Offset: 0x68
	// Line 188, Address: 0x1004fe0, Func Offset: 0x80
	// Line 189, Address: 0x1004ff8, Func Offset: 0x98
	// Line 190, Address: 0x1005004, Func Offset: 0xa4
	// Line 191, Address: 0x100501c, Func Offset: 0xbc
	// Line 192, Address: 0x1005028, Func Offset: 0xc8
	// Line 193, Address: 0x1005034, Func Offset: 0xd4
	// Line 194, Address: 0x1005040, Func Offset: 0xe0
	// Line 196, Address: 0x1005058, Func Offset: 0xf8
	// Line 197, Address: 0x1005070, Func Offset: 0x110
	// Line 198, Address: 0x1005088, Func Offset: 0x128
	// Line 199, Address: 0x10050a0, Func Offset: 0x140
	// Line 200, Address: 0x10050b8, Func Offset: 0x158
	// Line 201, Address: 0x10050c4, Func Offset: 0x164
	// Line 202, Address: 0x10050dc, Func Offset: 0x17c
	// Line 203, Address: 0x10050e8, Func Offset: 0x188
	// Line 204, Address: 0x10050f4, Func Offset: 0x194
	// Line 205, Address: 0x1005100, Func Offset: 0x1a0
	// Line 206, Address: 0x1005118, Func Offset: 0x1b8
	// Line 207, Address: 0x1005130, Func Offset: 0x1d0
	// Line 208, Address: 0x1005148, Func Offset: 0x1e8
	// Line 209, Address: 0x1005160, Func Offset: 0x200
	// Line 210, Address: 0x1005178, Func Offset: 0x218
	// Line 212, Address: 0x1005184, Func Offset: 0x224
	// Line 213, Address: 0x1005190, Func Offset: 0x230
	// Line 214, Address: 0x100519c, Func Offset: 0x23c
	// Line 215, Address: 0x10051a8, Func Offset: 0x248
	// Line 216, Address: 0x10051b4, Func Offset: 0x254
	// Line 217, Address: 0x10051c0, Func Offset: 0x260
	// Line 218, Address: 0x10051cc, Func Offset: 0x26c
	// Line 219, Address: 0x10051d8, Func Offset: 0x278
	// Line 220, Address: 0x10051e4, Func Offset: 0x284
	// Line 221, Address: 0x10051f0, Func Offset: 0x290
	// Line 222, Address: 0x10051fc, Func Offset: 0x29c
	// Line 223, Address: 0x1005208, Func Offset: 0x2a8
	// Line 224, Address: 0x1005214, Func Offset: 0x2b4
	// Line 225, Address: 0x1005220, Func Offset: 0x2c0
	// Line 226, Address: 0x100522c, Func Offset: 0x2cc
	// Line 227, Address: 0x1005238, Func Offset: 0x2d8
	// Line 228, Address: 0x1005244, Func Offset: 0x2e4
	// Line 229, Address: 0x1005250, Func Offset: 0x2f0
	// Line 230, Address: 0x100525c, Func Offset: 0x2fc
	// Line 231, Address: 0x1005268, Func Offset: 0x308
	// Line 232, Address: 0x1005274, Func Offset: 0x314
	// Line 233, Address: 0x1005280, Func Offset: 0x320
	// Line 234, Address: 0x100528c, Func Offset: 0x32c
	// Line 235, Address: 0x1005298, Func Offset: 0x338
	// Line 236, Address: 0x10052a4, Func Offset: 0x344
	// Line 237, Address: 0x10052b0, Func Offset: 0x350
	// Line 238, Address: 0x10052bc, Func Offset: 0x35c
	// Line 239, Address: 0x10052c8, Func Offset: 0x368
	// Line 241, Address: 0x10052d4, Func Offset: 0x374
	// Line 244, Address: 0x10052ec, Func Offset: 0x38c
	// Line 245, Address: 0x10052f8, Func Offset: 0x398
	// Line 246, Address: 0x1005314, Func Offset: 0x3b4
	// Line 247, Address: 0x1005330, Func Offset: 0x3d0
	// Line 248, Address: 0x100534c, Func Offset: 0x3ec
	// Line 249, Address: 0x1005368, Func Offset: 0x408
	// Line 250, Address: 0x1005384, Func Offset: 0x424
	// Line 251, Address: 0x100539c, Func Offset: 0x43c
	// Line 253, Address: 0x10053b4, Func Offset: 0x454
	// Line 254, Address: 0x10053c8, Func Offset: 0x468
	// Line 256, Address: 0x10053dc, Func Offset: 0x47c
	// Line 257, Address: 0x10053e4, Func Offset: 0x484
	// Line 260, Address: 0x10053ec, Func Offset: 0x48c
	// Line 263, Address: 0x1005408, Func Offset: 0x4a8
	// Line 265, Address: 0x1005428, Func Offset: 0x4c8
	// Line 267, Address: 0x1005450, Func Offset: 0x4f0
	// Line 268, Address: 0x100545c, Func Offset: 0x4fc
	// Line 270, Address: 0x1005468, Func Offset: 0x508
	// Line 272, Address: 0x1005474, Func Offset: 0x514
	// Line 274, Address: 0x100549c, Func Offset: 0x53c
	// Line 275, Address: 0x10054b0, Func Offset: 0x550
	// Line 277, Address: 0x10054b8, Func Offset: 0x558
	// Line 278, Address: 0x10054c8, Func Offset: 0x568
	// Line 279, Address: 0x10054d8, Func Offset: 0x578
	// Line 280, Address: 0x10054fc, Func Offset: 0x59c
	// Line 281, Address: 0x100550c, Func Offset: 0x5ac
	// Line 284, Address: 0x1005520, Func Offset: 0x5c0
	// Func End, Address: 0x1005540, Func Offset: 0x5e0
}

// 
// Start address: 0x1005540
void DLL_memfree()
{
	// Line 291, Address: 0x1005540, Func Offset: 0
	// Line 296, Address: 0x1005548, Func Offset: 0x8
	// Line 297, Address: 0x1005560, Func Offset: 0x20
	// Line 299, Address: 0x100557c, Func Offset: 0x3c
	// Func End, Address: 0x100558c, Func Offset: 0x4c
}

// 
// Start address: 0x1005590
void SWdataSet(_anon1 sw1, _anon1 sw2)
{
	// Line 307, Address: 0x1005590, Func Offset: 0
	// Line 308, Address: 0x100559c, Func Offset: 0xc
	// Line 309, Address: 0x10055a8, Func Offset: 0x18
	// Line 311, Address: 0x10055b4, Func Offset: 0x24
	// Func End, Address: 0x10055c0, Func Offset: 0x30
}

// 
// Start address: 0x10055c0
void game_init()
{
	tagPALETTEENTRY* lpSrc;
	tagPALETTEENTRY* lpDst;
	int i;
	unsigned int ProcEnd;
	unsigned int hf;
	// Line 320, Address: 0x10055c0, Func Offset: 0
	// Line 326, Address: 0x10055dc, Func Offset: 0x1c
	// Line 327, Address: 0x10055fc, Func Offset: 0x3c
	// Line 329, Address: 0x1005624, Func Offset: 0x64
	// Line 332, Address: 0x100564c, Func Offset: 0x8c
	// Line 339, Address: 0x1005660, Func Offset: 0xa0
	// Line 342, Address: 0x1005664, Func Offset: 0xa4
	// Line 348, Address: 0x1005694, Func Offset: 0xd4
	// Line 350, Address: 0x100569c, Func Offset: 0xdc
	// Line 351, Address: 0x10056a4, Func Offset: 0xe4
	// Line 352, Address: 0x10056ac, Func Offset: 0xec
	// Line 353, Address: 0x10056b4, Func Offset: 0xf4
	// Line 354, Address: 0x10056bc, Func Offset: 0xfc
	// Line 355, Address: 0x10056c4, Func Offset: 0x104
	// Line 356, Address: 0x10056cc, Func Offset: 0x10c
	// Line 357, Address: 0x10056d4, Func Offset: 0x114
	// Line 358, Address: 0x10056dc, Func Offset: 0x11c
	// Line 359, Address: 0x10056e8, Func Offset: 0x128
	// Line 364, Address: 0x10056f4, Func Offset: 0x134
	// Line 365, Address: 0x10056fc, Func Offset: 0x13c
	// Line 366, Address: 0x1005704, Func Offset: 0x144
	// Line 367, Address: 0x100570c, Func Offset: 0x14c
	// Line 368, Address: 0x1005714, Func Offset: 0x154
	// Line 369, Address: 0x100571c, Func Offset: 0x15c
	// Line 370, Address: 0x1005724, Func Offset: 0x164
	// Line 371, Address: 0x100572c, Func Offset: 0x16c
	// Line 372, Address: 0x1005734, Func Offset: 0x174
	// Line 373, Address: 0x1005748, Func Offset: 0x188
	// Line 374, Address: 0x1005750, Func Offset: 0x190
	// Line 375, Address: 0x1005758, Func Offset: 0x198
	// Line 380, Address: 0x1005760, Func Offset: 0x1a0
	// Line 382, Address: 0x1005768, Func Offset: 0x1a8
	// Line 383, Address: 0x1005770, Func Offset: 0x1b0
	// Line 385, Address: 0x1005778, Func Offset: 0x1b8
	// Line 390, Address: 0x1005784, Func Offset: 0x1c4
	// Line 391, Address: 0x1005794, Func Offset: 0x1d4
	// Line 392, Address: 0x100579c, Func Offset: 0x1dc
	// Line 394, Address: 0x10057a0, Func Offset: 0x1e0
	// Line 397, Address: 0x10057a8, Func Offset: 0x1e8
	// Line 398, Address: 0x10057b0, Func Offset: 0x1f0
	// Line 399, Address: 0x10057b8, Func Offset: 0x1f8
	// Line 400, Address: 0x10057c0, Func Offset: 0x200
	// Line 401, Address: 0x100580c, Func Offset: 0x24c
	// Line 404, Address: 0x1005814, Func Offset: 0x254
	// Line 407, Address: 0x1005818, Func Offset: 0x258
	// Line 408, Address: 0x1005820, Func Offset: 0x260
	// Line 409, Address: 0x1005828, Func Offset: 0x268
	// Line 410, Address: 0x100583c, Func Offset: 0x27c
	// Line 412, Address: 0x1005844, Func Offset: 0x284
	// Func End, Address: 0x1005868, Func Offset: 0x2a8
}

// 
// Start address: 0x1005870
int game()
{
	int RetMode;
	// Line 419, Address: 0x1005870, Func Offset: 0
	// Line 422, Address: 0x100587c, Func Offset: 0xc
	// Line 423, Address: 0x1005880, Func Offset: 0x10
	// Line 426, Address: 0x10058b0, Func Offset: 0x40
	// Line 428, Address: 0x10058c8, Func Offset: 0x58
	// Line 429, Address: 0x10058d4, Func Offset: 0x64
	// Line 431, Address: 0x10058dc, Func Offset: 0x6c
	// Line 432, Address: 0x10058e4, Func Offset: 0x74
	// Line 433, Address: 0x10058ec, Func Offset: 0x7c
	// Line 434, Address: 0x10058f4, Func Offset: 0x84
	// Line 435, Address: 0x10058fc, Func Offset: 0x8c
	// Line 436, Address: 0x1005910, Func Offset: 0xa0
	// Line 439, Address: 0x1005918, Func Offset: 0xa8
	// Line 440, Address: 0x100592c, Func Offset: 0xbc
	// Line 441, Address: 0x1005934, Func Offset: 0xc4
	// Line 442, Address: 0x100593c, Func Offset: 0xcc
	// Line 443, Address: 0x1005950, Func Offset: 0xe0
	// Line 446, Address: 0x1005958, Func Offset: 0xe8
	// Line 447, Address: 0x1005960, Func Offset: 0xf0
	// Line 448, Address: 0x1005968, Func Offset: 0xf8
	// Line 449, Address: 0x1005970, Func Offset: 0x100
	// Line 451, Address: 0x1005988, Func Offset: 0x118
	// Line 452, Address: 0x1005990, Func Offset: 0x120
	// Line 453, Address: 0x1005998, Func Offset: 0x128
	// Line 456, Address: 0x10059a0, Func Offset: 0x130
	// Line 458, Address: 0x10059b4, Func Offset: 0x144
	// Line 459, Address: 0x10059c8, Func Offset: 0x158
	// Line 462, Address: 0x10059d0, Func Offset: 0x160
	// Line 463, Address: 0x10059d8, Func Offset: 0x168
	// Line 465, Address: 0x10059f0, Func Offset: 0x180
	// Line 466, Address: 0x1005a04, Func Offset: 0x194
	// Line 468, Address: 0x1005a18, Func Offset: 0x1a8
	// Line 469, Address: 0x1005a3c, Func Offset: 0x1cc
	// Line 472, Address: 0x1005a44, Func Offset: 0x1d4
	// Line 474, Address: 0x1005a5c, Func Offset: 0x1ec
	// Line 475, Address: 0x1005a64, Func Offset: 0x1f4
	// Line 476, Address: 0x1005a78, Func Offset: 0x208
	// Line 479, Address: 0x1005a80, Func Offset: 0x210
	// Line 480, Address: 0x1005a94, Func Offset: 0x224
	// Line 481, Address: 0x1005aa8, Func Offset: 0x238
	// Line 483, Address: 0x1005ab0, Func Offset: 0x240
	// Line 486, Address: 0x1005ab8, Func Offset: 0x248
	// Line 487, Address: 0x1005ac0, Func Offset: 0x250
	// Line 488, Address: 0x1005ac8, Func Offset: 0x258
	// Line 492, Address: 0x1005acc, Func Offset: 0x25c
	// Line 493, Address: 0x1005ad4, Func Offset: 0x264
	// Line 494, Address: 0x1005ad8, Func Offset: 0x268
	// Func End, Address: 0x1005aec, Func Offset: 0x27c
}

// 
// Start address: 0x1005af0
void ram_clear()
{
	// Line 499, Address: 0x1005af0, Func Offset: 0
	// Func End, Address: 0x1005af8, Func Offset: 0x8
}

// 
// Start address: 0x1005b00
void cgdata_unlze()
{
	// Line 503, Address: 0x1005b00, Func Offset: 0
	// Func End, Address: 0x1005b08, Func Offset: 0x8
}

// 
// Start address: 0x1005b10
void kaiten_req()
{
	// Line 507, Address: 0x1005b10, Func Offset: 0
	// Func End, Address: 0x1005b18, Func Offset: 0x8
}

// 
// Start address: 0x1005b20
void m2copy()
{
	// Line 511, Address: 0x1005b20, Func Offset: 0
	// Func End, Address: 0x1005b28, Func Offset: 0x8
}

// 
// Start address: 0x1005b30
void cgchange_chk()
{
	short fPatnoWk;
	short* pMaptbl;
	short* pWkadr;
	short wk;
	short funka_off;
	int i;
	int j;
	// Line 513, Address: 0x1005b30, Func Offset: 0
	// Line 517, Address: 0x1005b54, Func Offset: 0x24
	// Line 521, Address: 0x1005b8c, Func Offset: 0x5c
	// Line 522, Address: 0x1005b98, Func Offset: 0x68
	// Line 525, Address: 0x1005ba0, Func Offset: 0x70
	// Line 526, Address: 0x1005bac, Func Offset: 0x7c
	// Line 529, Address: 0x1005bb4, Func Offset: 0x84
	// Line 531, Address: 0x1005bbc, Func Offset: 0x8c
	// Line 533, Address: 0x1005bd4, Func Offset: 0xa4
	// Line 534, Address: 0x1005bf8, Func Offset: 0xc8
	// Line 535, Address: 0x1005c08, Func Offset: 0xd8
	// Line 536, Address: 0x1005c2c, Func Offset: 0xfc
	// Line 537, Address: 0x1005c40, Func Offset: 0x110
	// Line 538, Address: 0x1005c5c, Func Offset: 0x12c
	// Line 539, Address: 0x1005c6c, Func Offset: 0x13c
	// Line 541, Address: 0x1005c78, Func Offset: 0x148
	// Line 543, Address: 0x1005c84, Func Offset: 0x154
	// Line 544, Address: 0x1005cb4, Func Offset: 0x184
	// Line 545, Address: 0x1005cc0, Func Offset: 0x190
	// Line 546, Address: 0x1005ce8, Func Offset: 0x1b8
	// Line 547, Address: 0x1005cf8, Func Offset: 0x1c8
	// Line 548, Address: 0x1005cfc, Func Offset: 0x1cc
	// Line 551, Address: 0x1005d0c, Func Offset: 0x1dc
	// Func End, Address: 0x1005d38, Func Offset: 0x208
}

// 
// Start address: 0x1005d40
void lp_makeup()
{
	// Line 553, Address: 0x1005d40, Func Offset: 0
	// Line 554, Address: 0x1005d48, Func Offset: 0x8
	// Line 557, Address: 0x1005d78, Func Offset: 0x38
	// Line 558, Address: 0x1005d80, Func Offset: 0x40
	// Line 559, Address: 0x1005d94, Func Offset: 0x54
	// Line 562, Address: 0x1005d9c, Func Offset: 0x5c
	// Line 563, Address: 0x1005dbc, Func Offset: 0x7c
	// Line 564, Address: 0x1005dc4, Func Offset: 0x84
	// Line 565, Address: 0x1005dd8, Func Offset: 0x98
	// Line 566, Address: 0x1005de0, Func Offset: 0xa0
	// Line 567, Address: 0x1005de8, Func Offset: 0xa8
	// Line 568, Address: 0x1005df0, Func Offset: 0xb0
	// Line 570, Address: 0x1005e08, Func Offset: 0xc8
	// Line 571, Address: 0x1005e14, Func Offset: 0xd4
	// Line 573, Address: 0x1005e1c, Func Offset: 0xdc
	// Line 574, Address: 0x1005e30, Func Offset: 0xf0
	// Line 577, Address: 0x1005e38, Func Offset: 0xf8
	// Line 578, Address: 0x1005e40, Func Offset: 0x100
	// Line 579, Address: 0x1005e48, Func Offset: 0x108
	// Line 580, Address: 0x1005e50, Func Offset: 0x110
	// Line 581, Address: 0x1005e58, Func Offset: 0x118
	// Line 583, Address: 0x1005e70, Func Offset: 0x130
	// Line 584, Address: 0x1005e7c, Func Offset: 0x13c
	// Line 586, Address: 0x1005e84, Func Offset: 0x144
	// Line 587, Address: 0x1005e98, Func Offset: 0x158
	// Line 590, Address: 0x1005ea0, Func Offset: 0x160
	// Line 591, Address: 0x1005eac, Func Offset: 0x16c
	// Line 593, Address: 0x1005ec4, Func Offset: 0x184
	// Line 594, Address: 0x1005ed0, Func Offset: 0x190
	// Line 596, Address: 0x1005ed8, Func Offset: 0x198
	// Line 597, Address: 0x1005eec, Func Offset: 0x1ac
	// Line 600, Address: 0x1005ef4, Func Offset: 0x1b4
	// Line 601, Address: 0x1005f00, Func Offset: 0x1c0
	// Line 602, Address: 0x1005f08, Func Offset: 0x1c8
	// Line 603, Address: 0x1005f10, Func Offset: 0x1d0
	// Line 604, Address: 0x1005f18, Func Offset: 0x1d8
	// Line 606, Address: 0x1005f30, Func Offset: 0x1f0
	// Line 607, Address: 0x1005f3c, Func Offset: 0x1fc
	// Line 609, Address: 0x1005f44, Func Offset: 0x204
	// Line 610, Address: 0x1005f58, Func Offset: 0x218
	// Line 613, Address: 0x1005f60, Func Offset: 0x220
	// Line 614, Address: 0x1005f6c, Func Offset: 0x22c
	// Line 616, Address: 0x1005f84, Func Offset: 0x244
	// Line 617, Address: 0x1005f90, Func Offset: 0x250
	// Line 619, Address: 0x1005f98, Func Offset: 0x258
	// Line 620, Address: 0x1005fac, Func Offset: 0x26c
	// Line 623, Address: 0x1005fb4, Func Offset: 0x274
	// Line 624, Address: 0x1005fc8, Func Offset: 0x288
	// Line 625, Address: 0x1005fd0, Func Offset: 0x290
	// Line 626, Address: 0x1005fd8, Func Offset: 0x298
	// Line 627, Address: 0x1005fec, Func Offset: 0x2ac
	// Line 630, Address: 0x1005ff4, Func Offset: 0x2b4
	// Line 631, Address: 0x1005ffc, Func Offset: 0x2bc
	// Line 632, Address: 0x1006008, Func Offset: 0x2c8
	// Line 633, Address: 0x1006014, Func Offset: 0x2d4
	// Line 636, Address: 0x100601c, Func Offset: 0x2dc
	// Line 640, Address: 0x1006028, Func Offset: 0x2e8
	// Func End, Address: 0x1006038, Func Offset: 0x2f8
}

// 
// Start address: 0x1006040
int init_dsp()
{
	// Line 642, Address: 0x1006040, Func Offset: 0
	// Line 643, Address: 0x1006048, Func Offset: 0x8
	// Line 646, Address: 0x1006090, Func Offset: 0x50
	// Line 647, Address: 0x1006098, Func Offset: 0x58
	// Line 648, Address: 0x10060a0, Func Offset: 0x60
	// Line 649, Address: 0x10060a8, Func Offset: 0x68
	// Line 650, Address: 0x10060b0, Func Offset: 0x70
	// Line 651, Address: 0x10060c4, Func Offset: 0x84
	// Line 654, Address: 0x10060cc, Func Offset: 0x8c
	// Line 655, Address: 0x10060d8, Func Offset: 0x98
	// Line 656, Address: 0x10060f8, Func Offset: 0xb8
	// Line 657, Address: 0x100610c, Func Offset: 0xcc
	// Line 660, Address: 0x1006114, Func Offset: 0xd4
	// Line 661, Address: 0x100611c, Func Offset: 0xdc
	// Line 662, Address: 0x1006124, Func Offset: 0xe4
	// Line 663, Address: 0x100612c, Func Offset: 0xec
	// Line 665, Address: 0x1006134, Func Offset: 0xf4
	// Line 666, Address: 0x1006148, Func Offset: 0x108
	// Line 667, Address: 0x100615c, Func Offset: 0x11c
	// Line 670, Address: 0x1006164, Func Offset: 0x124
	// Line 671, Address: 0x100618c, Func Offset: 0x14c
	// Line 674, Address: 0x10061a0, Func Offset: 0x160
	// Line 675, Address: 0x10061a4, Func Offset: 0x164
	// Func End, Address: 0x10061b4, Func Offset: 0x174
}

// 
// Start address: 0x10061c0
void end_proc()
{
	// Line 677, Address: 0x10061c0, Func Offset: 0
	// Line 678, Address: 0x10061c8, Func Offset: 0x8
	// Line 679, Address: 0x10061d4, Func Offset: 0x14
	// Line 680, Address: 0x10061dc, Func Offset: 0x1c
	// Func End, Address: 0x10061ec, Func Offset: 0x2c
}

// 
// Start address: 0x10061f0
void prg_init()
{
	tagPALETTEENTRY* lpPlCol;
	tagPALETTEENTRY* lpBkgCol;
	tagPALETTEENTRY* lpDst;
	int i;
	// Line 682, Address: 0x10061f0, Func Offset: 0
	// Line 686, Address: 0x1006208, Func Offset: 0x18
	// Line 687, Address: 0x1006234, Func Offset: 0x44
	// Line 688, Address: 0x1006264, Func Offset: 0x74
	// Line 689, Address: 0x100626c, Func Offset: 0x7c
	// Line 690, Address: 0x10062b8, Func Offset: 0xc8
	// Line 691, Address: 0x1006304, Func Offset: 0x114
	// Line 692, Address: 0x100630c, Func Offset: 0x11c
	// Line 693, Address: 0x1006358, Func Offset: 0x168
	// Line 694, Address: 0x1006360, Func Offset: 0x170
	// Line 695, Address: 0x10063ac, Func Offset: 0x1bc
	// Line 696, Address: 0x10063b4, Func Offset: 0x1c4
	// Func End, Address: 0x10063d4, Func Offset: 0x1e4
}

// 
// Start address: 0x10063e0
void patchg_init()
{
	short* pMapwk;
	short* pMapadr;
	short funka_off;
	int i;
	int wk;
	// Line 698, Address: 0x10063e0, Func Offset: 0
	// Line 702, Address: 0x10063fc, Func Offset: 0x1c
	// Line 703, Address: 0x1006404, Func Offset: 0x24
	// Line 704, Address: 0x1006414, Func Offset: 0x34
	// Line 707, Address: 0x100641c, Func Offset: 0x3c
	// Line 708, Address: 0x1006424, Func Offset: 0x44
	// Line 709, Address: 0x100642c, Func Offset: 0x4c
	// Line 710, Address: 0x100643c, Func Offset: 0x5c
	// Line 714, Address: 0x1006474, Func Offset: 0x94
	// Line 715, Address: 0x1006480, Func Offset: 0xa0
	// Line 718, Address: 0x1006488, Func Offset: 0xa8
	// Line 719, Address: 0x1006494, Func Offset: 0xb4
	// Line 722, Address: 0x100649c, Func Offset: 0xbc
	// Line 724, Address: 0x10064a0, Func Offset: 0xc0
	// Line 726, Address: 0x10064ac, Func Offset: 0xcc
	// Line 727, Address: 0x10064cc, Func Offset: 0xec
	// Line 728, Address: 0x10064e0, Func Offset: 0x100
	// Line 729, Address: 0x1006504, Func Offset: 0x124
	// Line 730, Address: 0x1006524, Func Offset: 0x144
	// Line 731, Address: 0x1006538, Func Offset: 0x158
	// Line 732, Address: 0x100655c, Func Offset: 0x17c
	// Line 733, Address: 0x1006560, Func Offset: 0x180
	// Line 734, Address: 0x1006570, Func Offset: 0x190
	// Line 735, Address: 0x100657c, Func Offset: 0x19c
	// Line 736, Address: 0x1006584, Func Offset: 0x1a4
	// Func End, Address: 0x10065a8, Func Offset: 0x1c8
}

// 
// Start address: 0x10065b0
void prgend_chk()
{
	// Line 738, Address: 0x10065b0, Func Offset: 0
	// Line 739, Address: 0x10065b8, Func Offset: 0x8
	// Line 740, Address: 0x10065c4, Func Offset: 0x14
	// Line 743, Address: 0x10065cc, Func Offset: 0x1c
	// Func End, Address: 0x10065dc, Func Offset: 0x2c
}

// 
// Start address: 0x10065e0
void cgdata_change()
{
	unsigned short* pA0;
	unsigned short* pA1;
	unsigned short* pA2;
	unsigned short* pSmap;
	unsigned short s;
	unsigned short offs;
	int i;
	int j;
	int x;
	int y;
	unsigned int hf;
	// Line 745, Address: 0x10065e0, Func Offset: 0
	// Line 750, Address: 0x100660c, Func Offset: 0x2c
	// Line 753, Address: 0x1006624, Func Offset: 0x44
	// Line 755, Address: 0x1006664, Func Offset: 0x84
	// Line 758, Address: 0x1006698, Func Offset: 0xb8
	// Line 759, Address: 0x100669c, Func Offset: 0xbc
	// Line 762, Address: 0x10066a4, Func Offset: 0xc4
	// Line 763, Address: 0x10066ac, Func Offset: 0xcc
	// Line 766, Address: 0x10066b4, Func Offset: 0xd4
	// Line 767, Address: 0x10066bc, Func Offset: 0xdc
	// Line 770, Address: 0x10066c4, Func Offset: 0xe4
	// Line 773, Address: 0x10066c8, Func Offset: 0xe8
	// Line 774, Address: 0x10066d4, Func Offset: 0xf4
	// Line 776, Address: 0x10066e0, Func Offset: 0x100
	// Line 778, Address: 0x10066ec, Func Offset: 0x10c
	// Line 780, Address: 0x1006714, Func Offset: 0x134
	// Line 781, Address: 0x1006728, Func Offset: 0x148
	// Line 783, Address: 0x1006730, Func Offset: 0x150
	// Line 784, Address: 0x100674c, Func Offset: 0x16c
	// Line 785, Address: 0x100675c, Func Offset: 0x17c
	// Line 786, Address: 0x100676c, Func Offset: 0x18c
	// Line 787, Address: 0x1006790, Func Offset: 0x1b0
	// Line 788, Address: 0x10067a0, Func Offset: 0x1c0
	// Line 791, Address: 0x10067b4, Func Offset: 0x1d4
	// Line 795, Address: 0x10067ec, Func Offset: 0x20c
	// Line 796, Address: 0x10067f4, Func Offset: 0x214
	// Line 799, Address: 0x10067fc, Func Offset: 0x21c
	// Line 800, Address: 0x1006804, Func Offset: 0x224
	// Line 803, Address: 0x100680c, Func Offset: 0x22c
	// Line 805, Address: 0x1006810, Func Offset: 0x230
	// Line 806, Address: 0x100681c, Func Offset: 0x23c
	// Line 807, Address: 0x100682c, Func Offset: 0x24c
	// Line 809, Address: 0x1006838, Func Offset: 0x258
	// Line 810, Address: 0x100683c, Func Offset: 0x25c
	// Line 812, Address: 0x1006848, Func Offset: 0x268
	// Line 813, Address: 0x100685c, Func Offset: 0x27c
	// Line 814, Address: 0x1006878, Func Offset: 0x298
	// Line 815, Address: 0x1006888, Func Offset: 0x2a8
	// Line 816, Address: 0x1006894, Func Offset: 0x2b4
	// Line 817, Address: 0x1006898, Func Offset: 0x2b8
	// Line 818, Address: 0x10068a4, Func Offset: 0x2c4
	// Line 819, Address: 0x10068b0, Func Offset: 0x2d0
	// Line 821, Address: 0x10068bc, Func Offset: 0x2dc
	// Line 823, Address: 0x10068c8, Func Offset: 0x2e8
	// Line 824, Address: 0x10068f0, Func Offset: 0x310
	// Line 825, Address: 0x10068f4, Func Offset: 0x314
	// Line 826, Address: 0x1006904, Func Offset: 0x324
	// Line 829, Address: 0x1006914, Func Offset: 0x334
	// Func End, Address: 0x1006948, Func Offset: 0x368
}

// 
// Start address: 0x1006950
void SubCpuMain()
{
	// Line 831, Address: 0x1006950, Func Offset: 0
	// Line 832, Address: 0x1006958, Func Offset: 0x8
	// Line 834, Address: 0x1006970, Func Offset: 0x20
	// Line 836, Address: 0x1006988, Func Offset: 0x38
	// Line 837, Address: 0x1006990, Func Offset: 0x40
	// Line 838, Address: 0x1006998, Func Offset: 0x48
	// Line 840, Address: 0x10069ac, Func Offset: 0x5c
	// Line 841, Address: 0x10069b4, Func Offset: 0x64
	// Line 842, Address: 0x10069c8, Func Offset: 0x78
	// Line 843, Address: 0x10069fc, Func Offset: 0xac
	// Line 845, Address: 0x1006a10, Func Offset: 0xc0
	// Func End, Address: 0x1006a20, Func Offset: 0xd0
}

// 
// Start address: 0x1006a20
void v_int()
{
	tagPALETTEENTRY* lpPlanet;
	tagPALETTEENTRY* lpBkg;
	tagPALETTEENTRY* lpDst;
	tagPALETTEENTRY* lpSpr;
	int i;
	// Line 847, Address: 0x1006a20, Func Offset: 0
	// Line 851, Address: 0x1006a38, Func Offset: 0x18
	// Line 870, Address: 0x1006a74, Func Offset: 0x54
	// Line 872, Address: 0x1006a88, Func Offset: 0x68
	// Line 874, Address: 0x1006aac, Func Offset: 0x8c
	// Line 875, Address: 0x1006ad0, Func Offset: 0xb0
	// Line 876, Address: 0x1006afc, Func Offset: 0xdc
	// Line 877, Address: 0x1006b40, Func Offset: 0x120
	// Line 878, Address: 0x1006b88, Func Offset: 0x168
	// Line 879, Address: 0x1006b9c, Func Offset: 0x17c
	// Line 880, Address: 0x1006ba4, Func Offset: 0x184
	// Line 881, Address: 0x1006bf0, Func Offset: 0x1d0
	// Line 883, Address: 0x1006c3c, Func Offset: 0x21c
	// Line 885, Address: 0x1006c68, Func Offset: 0x248
	// Line 886, Address: 0x1006ca4, Func Offset: 0x284
	// Line 887, Address: 0x1006cb0, Func Offset: 0x290
	// Line 888, Address: 0x1006cfc, Func Offset: 0x2dc
	// Line 889, Address: 0x1006d28, Func Offset: 0x308
	// Line 890, Address: 0x1006d30, Func Offset: 0x310
	// Line 894, Address: 0x1006d3c, Func Offset: 0x31c
	// Line 895, Address: 0x1006d68, Func Offset: 0x348
	// Line 896, Address: 0x1006d94, Func Offset: 0x374
	// Line 897, Address: 0x1006da8, Func Offset: 0x388
	// Func End, Address: 0x1006dc8, Func Offset: 0x3a8
}

// 
// Start address: 0x1006dd0
void cgmwrt_a()
{
	int x;
	int y;
	// Line 899, Address: 0x1006dd0, Func Offset: 0
	// Line 902, Address: 0x1006de0, Func Offset: 0x10
	// Line 904, Address: 0x1006dec, Func Offset: 0x1c
	// Line 906, Address: 0x1006df8, Func Offset: 0x28
	// Line 907, Address: 0x1006e1c, Func Offset: 0x4c
	// Line 908, Address: 0x1006e2c, Func Offset: 0x5c
	// Line 909, Address: 0x1006e3c, Func Offset: 0x6c
	// Line 911, Address: 0x1006e48, Func Offset: 0x78
	// Line 913, Address: 0x1006e54, Func Offset: 0x84
	// Line 914, Address: 0x1006e78, Func Offset: 0xa8
	// Line 915, Address: 0x1006e88, Func Offset: 0xb8
	// Line 917, Address: 0x1006e98, Func Offset: 0xc8
	// Func End, Address: 0x1006eb0, Func Offset: 0xe0
}

// 
// Start address: 0x1006eb0
void cgmwrt_b()
{
	short* pA1;
	int x;
	int y;
	int i;
	// Line 919, Address: 0x1006eb0, Func Offset: 0
	// Line 923, Address: 0x1006ec8, Func Offset: 0x18
	// Line 925, Address: 0x1006ed4, Func Offset: 0x24
	// Line 927, Address: 0x1006ee0, Func Offset: 0x30
	// Line 928, Address: 0x1006f04, Func Offset: 0x54
	// Line 929, Address: 0x1006f14, Func Offset: 0x64
	// Line 930, Address: 0x1006f24, Func Offset: 0x74
	// Line 931, Address: 0x1006f2c, Func Offset: 0x7c
	// Line 933, Address: 0x1006f34, Func Offset: 0x84
	// Line 935, Address: 0x1006f40, Func Offset: 0x90
	// Line 936, Address: 0x1006f6c, Func Offset: 0xbc
	// Line 937, Address: 0x1006f70, Func Offset: 0xc0
	// Line 938, Address: 0x1006f80, Func Offset: 0xd0
	// Line 939, Address: 0x1006f84, Func Offset: 0xd4
	// Line 941, Address: 0x1006f90, Func Offset: 0xe0
	// Line 942, Address: 0x1006fc4, Func Offset: 0x114
	// Line 943, Address: 0x1006fc8, Func Offset: 0x118
	// Line 944, Address: 0x1006fd8, Func Offset: 0x128
	// Line 945, Address: 0x1006fdc, Func Offset: 0x12c
	// Line 946, Address: 0x1006fec, Func Offset: 0x13c
	// Line 948, Address: 0x1006ff4, Func Offset: 0x144
	// Line 950, Address: 0x1007000, Func Offset: 0x150
	// Line 951, Address: 0x1007024, Func Offset: 0x174
	// Line 952, Address: 0x1007034, Func Offset: 0x184
	// Line 954, Address: 0x1007044, Func Offset: 0x194
	// Func End, Address: 0x1007064, Func Offset: 0x1b4
}

// 
// Start address: 0x1007070
void cd_call()
{
	// Line 998, Address: 0x1007070, Func Offset: 0
	// Line 999, Address: 0x1007078, Func Offset: 0x8
	// Line 1000, Address: 0x10070a8, Func Offset: 0x38
	// Func End, Address: 0x10070b8, Func Offset: 0x48
}

