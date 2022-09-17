typedef struct _anon0;
typedef struct tagPALETTEENTRY;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef union _anon12;
typedef struct _anon13;
typedef struct _anon14;

typedef void(*type_3)(void*, unsigned char, int);

typedef short type_0[6];
typedef short type_1[896];
typedef _anon9 type_2[2];
typedef _anon11 type_4[10];
typedef _anon14 type_5[700];
typedef unsigned char type_6[22528];
typedef _anon0 type_7[18];

struct _anon0
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon1 XPOSI;
	_anon1 YPOSI;
	_anon1 X_SPEED;
	_anon1 Y_SPEED;
	_anon1 X_ACCEL;
	_anon1 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon2* PAT_ADR;
	unsigned char SPR_FLG;
	unsigned char ACT_FLG;
	short END_XPOSI;
	short END_YPOSI;
	short X_WIDE;
	short Y_WIDE;
	unsigned char timer1;
	unsigned char timer2;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

union _anon1
{
	int l;
	_anon3 w;
	_anon4 b;
};

struct _anon2
{
	short patnum;
	_anon11 aPatDat[10];
};

struct _anon3
{
	short l;
	short h;
};

struct _anon4
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon5
{
	short w;
	_anon6 b;
};

struct _anon6
{
	char l;
	char h;
};

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon10
{
	short mapnum;
	_anon9 aMapDat[2];
};

struct _anon11
{
	short timer;
	_anon10* paMapTbl;
};

union _anon12
{
	unsigned char* wordram;
	_anon13 mcntwk;
};

struct _anon13
{
	unsigned char mcntflg;
	unsigned char dummy;
	unsigned char* copy_adr;
	unsigned short copy_size;
	unsigned char* pc_adr;
	unsigned char* user_hint;
	unsigned char* user_vint;
};

struct _anon14
{
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
};

unsigned short comdata_s7;
unsigned short comdata_s6;
unsigned short comdata_s5;
unsigned short comdata_s4;
unsigned short comdata_s3;
unsigned short comdata_s2;
unsigned short comdata_s1;
unsigned short comdata_s0;
_anon7 swdata2;
_anon7 swdata1;
unsigned short comdata_m7;
unsigned short comdata_m6;
unsigned short comdata_m5;
unsigned short comdata_m4;
unsigned short comdata_m3;
unsigned short comdata_m2;
unsigned short comdata_m1;
unsigned short comdata_m0;
unsigned char comflag_s;
unsigned char comflag_m;
unsigned char cgchg_end;
unsigned char cgchg_timer;
unsigned char flash_flg;
unsigned char colorcnt;
unsigned char startcolor;
short lplanet_no;
short flash_timer;
int overint;
int ranum;
short sr_save;
short gmtime1;
short gmtime0;
short intmode;
short linkdata;
unsigned char colorflg;
unsigned char int_flg;
unsigned char push_flg;
unsigned char actset_wk;
unsigned char actset_flg;
void(*sMemSet)(void*, unsigned char, int);
short actset_tm[6];
short spr_colno;
short spr_coltimer;
short main_lpcnt;
short funka_patno;
short funka_pctimer;
short colorno;
unsigned short coltimer;
_anon0 actwk[18];
int ProcMode;
int DLLRetMode;
int* lpFadeFlag;
short tv_adr[896];
_anon12 wordram;
_anon1* lphscrollbuff;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk1;
tagPALETTEENTRY* lpcolorwk0;
_anon5 stageno;
unsigned char music_selflg;
unsigned char m2save[22528];
_anon14 SprBmp[700];

void WorkRamClear();

// 
// Start address: 0x1008d10
void WorkRamClear()
{
	// Line 89, Address: 0x1008d10, Func Offset: 0
	// Line 90, Address: 0x1008d18, Func Offset: 0x8
	// Line 91, Address: 0x1008d24, Func Offset: 0x14
	// Line 92, Address: 0x1008d2c, Func Offset: 0x1c
	// Line 94, Address: 0x1008d34, Func Offset: 0x24
	// Line 96, Address: 0x1008d54, Func Offset: 0x44
	// Line 97, Address: 0x1008d5c, Func Offset: 0x4c
	// Line 98, Address: 0x1008d64, Func Offset: 0x54
	// Line 99, Address: 0x1008d6c, Func Offset: 0x5c
	// Line 100, Address: 0x1008d74, Func Offset: 0x64
	// Line 101, Address: 0x1008d7c, Func Offset: 0x6c
	// Line 102, Address: 0x1008d84, Func Offset: 0x74
	// Line 106, Address: 0x1008d8c, Func Offset: 0x7c
	// Line 107, Address: 0x1008dac, Func Offset: 0x9c
	// Line 108, Address: 0x1008db4, Func Offset: 0xa4
	// Line 109, Address: 0x1008dbc, Func Offset: 0xac
	// Line 110, Address: 0x1008dc4, Func Offset: 0xb4
	// Line 111, Address: 0x1008dcc, Func Offset: 0xbc
	// Line 113, Address: 0x1008dd4, Func Offset: 0xc4
	// Line 114, Address: 0x1008ddc, Func Offset: 0xcc
	// Line 115, Address: 0x1008de4, Func Offset: 0xd4
	// Line 116, Address: 0x1008dec, Func Offset: 0xdc
	// Line 117, Address: 0x1008df4, Func Offset: 0xe4
	// Line 119, Address: 0x1008dfc, Func Offset: 0xec
	// Line 120, Address: 0x1008e04, Func Offset: 0xf4
	// Line 122, Address: 0x1008e0c, Func Offset: 0xfc
	// Line 123, Address: 0x1008e14, Func Offset: 0x104
	// Line 124, Address: 0x1008e1c, Func Offset: 0x10c
	// Line 125, Address: 0x1008e24, Func Offset: 0x114
	// Line 126, Address: 0x1008e2c, Func Offset: 0x11c
	// Line 127, Address: 0x1008e34, Func Offset: 0x124
	// Line 128, Address: 0x1008e3c, Func Offset: 0x12c
	// Line 131, Address: 0x1008e44, Func Offset: 0x134
	// Line 132, Address: 0x1008e4c, Func Offset: 0x13c
	// Line 134, Address: 0x1008e54, Func Offset: 0x144
	// Line 135, Address: 0x1008e5c, Func Offset: 0x14c
	// Line 136, Address: 0x1008e64, Func Offset: 0x154
	// Line 137, Address: 0x1008e6c, Func Offset: 0x15c
	// Line 138, Address: 0x1008e74, Func Offset: 0x164
	// Line 139, Address: 0x1008e7c, Func Offset: 0x16c
	// Line 140, Address: 0x1008e84, Func Offset: 0x174
	// Line 141, Address: 0x1008e8c, Func Offset: 0x17c
	// Line 142, Address: 0x1008e94, Func Offset: 0x184
	// Line 143, Address: 0x1008e9c, Func Offset: 0x18c
	// Line 144, Address: 0x1008ea4, Func Offset: 0x194
	// Line 145, Address: 0x1008eac, Func Offset: 0x19c
	// Line 146, Address: 0x1008eb4, Func Offset: 0x1a4
	// Line 147, Address: 0x1008ebc, Func Offset: 0x1ac
	// Line 148, Address: 0x1008ec4, Func Offset: 0x1b4
	// Line 149, Address: 0x1008ecc, Func Offset: 0x1bc
	// Line 150, Address: 0x1008ed4, Func Offset: 0x1c4
	// Line 151, Address: 0x1008edc, Func Offset: 0x1cc
	// Line 152, Address: 0x1008ee4, Func Offset: 0x1d4
	// Func End, Address: 0x1008ef4, Func Offset: 0x1e4
}

