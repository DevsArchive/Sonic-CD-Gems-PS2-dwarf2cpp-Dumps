typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;

typedef void(*type_7)(int, int);

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef _anon1 type_2[24];
typedef int* type_3[8];
typedef int type_4[16];
typedef int type_5[16];
typedef int type_6[16];
typedef int type_8[16];
typedef int type_9[16];
typedef int type_10[16];
typedef int type_11[16];
typedef int type_12[16];
typedef int type_13[16];

struct _anon0
{
	char chgcnt;
	char dmy;
	_anon1 dattbl[24];
	int* TileNoTbl[8];
	int TileStart;
};

struct _anon1
{
	char tim;
	char no;
};

struct _anon2
{
	unsigned char* CGdata;
	unsigned char* Blkdata;
	unsigned char* Mapdata;
	unsigned char iniCGno1;
	unsigned char stCGno1;
	unsigned char iniCGno2;
	unsigned char stCGno2;
	unsigned char colorno1;
	unsigned char colorno2;
	unsigned char soundNo;
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
	unsigned short w;
	_anon7 b;
};

struct _anon7
{
	unsigned char l;
	unsigned char h;
};

_anon2 mapinittbl;
int fire0cg[16];
int fire1cg[16];
int fire2cg[16];
int fire3cg[16];
int fire4cg[16];
int fire5cg[16];
int fire6cg[16];
int fire7cg[16];
_anon0 tbl_fir0;
_anon0 tbl_fir1;
_anon0 tbl_fir2;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];
_anon3 scra_v_posit;
_anon3 scra_h_posit;
_anon6 pauseflag;

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x1017cc0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 218, Address: 0x1017cc0, Func Offset: 0
	// Line 222, Address: 0x1017ccc, Func Offset: 0xc
	// Line 229, Address: 0x1017cdc, Func Offset: 0x1c
	// Line 230, Address: 0x1017d14, Func Offset: 0x54
	// Line 233, Address: 0x1017d1c, Func Offset: 0x5c
	// Line 234, Address: 0x1017d28, Func Offset: 0x68
	// Line 236, Address: 0x1017d34, Func Offset: 0x74
	// Line 238, Address: 0x1017d60, Func Offset: 0xa0
	// Line 239, Address: 0x1017d6c, Func Offset: 0xac
	// Line 240, Address: 0x1017d8c, Func Offset: 0xcc
	// Line 244, Address: 0x1017da8, Func Offset: 0xe8
	// Line 246, Address: 0x1017dd4, Func Offset: 0x114
	// Line 247, Address: 0x1017de0, Func Offset: 0x120
	// Line 248, Address: 0x1017e00, Func Offset: 0x140
	// Line 252, Address: 0x1017e1c, Func Offset: 0x15c
	// Line 254, Address: 0x1017e48, Func Offset: 0x188
	// Line 255, Address: 0x1017e54, Func Offset: 0x194
	// Line 256, Address: 0x1017e74, Func Offset: 0x1b4
	// Line 258, Address: 0x1017e90, Func Offset: 0x1d0
	// Func End, Address: 0x1017ea4, Func Offset: 0x1e4
}

// 
// Start address: 0x1017eb0
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 281, Address: 0x1017eb0, Func Offset: 0
	// Line 285, Address: 0x1017ed8, Func Offset: 0x28
	// Line 286, Address: 0x1017f04, Func Offset: 0x54
	// Line 288, Address: 0x1017f14, Func Offset: 0x64
	// Line 289, Address: 0x1017f28, Func Offset: 0x78
	// Line 290, Address: 0x1017f3c, Func Offset: 0x8c
	// Line 293, Address: 0x1017f48, Func Offset: 0x98
	// Line 294, Address: 0x1017f58, Func Offset: 0xa8
	// Line 295, Address: 0x1017f78, Func Offset: 0xc8
	// Line 299, Address: 0x1017f7c, Func Offset: 0xcc
	// Line 300, Address: 0x1017f8c, Func Offset: 0xdc
	// Line 302, Address: 0x1017fa8, Func Offset: 0xf8
	// Line 303, Address: 0x1017fc8, Func Offset: 0x118
	// Line 305, Address: 0x1017fd8, Func Offset: 0x128
	// Line 306, Address: 0x1017fe0, Func Offset: 0x130
	// Line 307, Address: 0x1017ffc, Func Offset: 0x14c
	// Line 310, Address: 0x1018014, Func Offset: 0x164
	// Line 311, Address: 0x1018028, Func Offset: 0x178
	// Line 312, Address: 0x101803c, Func Offset: 0x18c
	// Line 313, Address: 0x101804c, Func Offset: 0x19c
	// Line 314, Address: 0x1018050, Func Offset: 0x1a0
	// Func End, Address: 0x1018068, Func Offset: 0x1b8
}

