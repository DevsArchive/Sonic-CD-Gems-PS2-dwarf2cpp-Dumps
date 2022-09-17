typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct tagPALETTEENTRY;
typedef struct _anon9;
typedef struct _anon10;

typedef void(*type_7)(void*, unsigned char, int);

typedef _anon0* type_0[64];
typedef _anon0* type_1[64];
typedef short type_2[8];
typedef _anon0* type_3[64];
typedef _anon0* type_4[64];
typedef unsigned char type_5[8];
typedef _anon0** type_6[4];
typedef _anon8 type_8[2];
typedef _anon10 type_9[10];
typedef _anon5 type_10[700];
typedef _anon0 type_11[66];

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
	unsigned char free[8];
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
	_anon10 aPatDat[10];
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

struct _anon5
{
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
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
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon9
{
	short mapnum;
	_anon8 aMapDat[2];
};

struct _anon10
{
	short timer;
	_anon9* paMapTbl;
};

unsigned short comdata_s7;
unsigned short comdata_s6;
unsigned short comdata_s5;
unsigned short comdata_s4;
unsigned short comdata_s3;
unsigned short comdata_s2;
unsigned short comdata_s1;
unsigned short comdata_s0;
_anon6 swdata2;
_anon6 swdata1;
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
short end_timer;
short heart_tm;
short animal_timer;
unsigned char animal_flg;
unsigned char poseno;
short posetimer;
short coltimer2;
short colorno2;
void(*sMemSet)(void*, unsigned char, int);
short actset_tm[8];
short wkarea3;
short wkarea2;
short wkarea1;
short prg_mode;
unsigned char colorcnt;
unsigned char startcolor;
int overint;
int ranum;
short sr_save;
short gmtime1;
short gmtime0;
short intmode;
short linkdata;
short coltimer;
short colorno;
unsigned char colorflg;
unsigned char int_flg;
unsigned char push_flg;
unsigned char quit_flg;
_anon0** priptr[4];
_anon0* pribuf3[64];
_anon0* pribuf2[64];
_anon0* pribuf1[64];
_anon0* pribuf0[64];
_anon0 actwk[66];
int ProcMode;
int DLLRetMode;
int* lpFadeFlag;
short FadeFlag;
_anon1* lphscrollbuff;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk1;
tagPALETTEENTRY* lpcolorwk0;
_anon5 SprBmp[700];

void WorkRamClear();

// 
// Start address: 0x1002e80
void WorkRamClear()
{
	// Line 98, Address: 0x1002e80, Func Offset: 0
	// Line 99, Address: 0x1002e88, Func Offset: 0x8
	// Line 100, Address: 0x1002e90, Func Offset: 0x10
	// Line 101, Address: 0x1002e9c, Func Offset: 0x1c
	// Line 102, Address: 0x1002ea4, Func Offset: 0x24
	// Line 104, Address: 0x1002eac, Func Offset: 0x2c
	// Line 111, Address: 0x1002ecc, Func Offset: 0x4c
	// Line 112, Address: 0x1002eec, Func Offset: 0x6c
	// Line 113, Address: 0x1002f0c, Func Offset: 0x8c
	// Line 114, Address: 0x1002f2c, Func Offset: 0xac
	// Line 117, Address: 0x1002f4c, Func Offset: 0xcc
	// Line 118, Address: 0x1002f54, Func Offset: 0xd4
	// Line 119, Address: 0x1002f5c, Func Offset: 0xdc
	// Line 120, Address: 0x1002f64, Func Offset: 0xe4
	// Line 122, Address: 0x1002f6c, Func Offset: 0xec
	// Line 123, Address: 0x1002f74, Func Offset: 0xf4
	// Line 124, Address: 0x1002f7c, Func Offset: 0xfc
	// Line 125, Address: 0x1002f84, Func Offset: 0x104
	// Line 126, Address: 0x1002f8c, Func Offset: 0x10c
	// Line 127, Address: 0x1002f94, Func Offset: 0x114
	// Line 129, Address: 0x1002f9c, Func Offset: 0x11c
	// Line 130, Address: 0x1002fa4, Func Offset: 0x124
	// Line 131, Address: 0x1002fac, Func Offset: 0x12c
	// Line 132, Address: 0x1002fb4, Func Offset: 0x134
	// Line 133, Address: 0x1002fbc, Func Offset: 0x13c
	// Line 134, Address: 0x1002fc4, Func Offset: 0x144
	// Line 135, Address: 0x1002fcc, Func Offset: 0x14c
	// Line 137, Address: 0x1002fd4, Func Offset: 0x154
	// Line 138, Address: 0x1002fdc, Func Offset: 0x15c
	// Line 140, Address: 0x1002fe4, Func Offset: 0x164
	// Line 142, Address: 0x1002fec, Func Offset: 0x16c
	// Line 143, Address: 0x1002ff4, Func Offset: 0x174
	// Line 144, Address: 0x1002ffc, Func Offset: 0x17c
	// Line 146, Address: 0x1003004, Func Offset: 0x184
	// Line 148, Address: 0x1003024, Func Offset: 0x1a4
	// Line 149, Address: 0x100302c, Func Offset: 0x1ac
	// Line 151, Address: 0x1003034, Func Offset: 0x1b4
	// Line 152, Address: 0x100303c, Func Offset: 0x1bc
	// Line 153, Address: 0x1003044, Func Offset: 0x1c4
	// Line 154, Address: 0x100304c, Func Offset: 0x1cc
	// Line 155, Address: 0x1003054, Func Offset: 0x1d4
	// Line 157, Address: 0x100305c, Func Offset: 0x1dc
	// Line 160, Address: 0x1003064, Func Offset: 0x1e4
	// Line 161, Address: 0x100306c, Func Offset: 0x1ec
	// Line 163, Address: 0x1003074, Func Offset: 0x1f4
	// Line 164, Address: 0x100307c, Func Offset: 0x1fc
	// Line 165, Address: 0x1003084, Func Offset: 0x204
	// Line 166, Address: 0x100308c, Func Offset: 0x20c
	// Line 167, Address: 0x1003094, Func Offset: 0x214
	// Line 168, Address: 0x100309c, Func Offset: 0x21c
	// Line 169, Address: 0x10030a4, Func Offset: 0x224
	// Line 170, Address: 0x10030ac, Func Offset: 0x22c
	// Line 171, Address: 0x10030b4, Func Offset: 0x234
	// Line 172, Address: 0x10030bc, Func Offset: 0x23c
	// Line 173, Address: 0x10030c4, Func Offset: 0x244
	// Line 174, Address: 0x10030cc, Func Offset: 0x24c
	// Line 175, Address: 0x10030d4, Func Offset: 0x254
	// Line 176, Address: 0x10030dc, Func Offset: 0x25c
	// Line 177, Address: 0x10030e4, Func Offset: 0x264
	// Line 178, Address: 0x10030ec, Func Offset: 0x26c
	// Line 179, Address: 0x10030f4, Func Offset: 0x274
	// Line 180, Address: 0x10030fc, Func Offset: 0x27c
	// Line 181, Address: 0x1003104, Func Offset: 0x284
	// Func End, Address: 0x1003114, Func Offset: 0x294
}

