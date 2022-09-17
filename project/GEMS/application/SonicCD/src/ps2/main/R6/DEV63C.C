typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_6)(int, int);

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef _anon1 type_2[24];
typedef int* type_3[8];
typedef int type_4[8];
typedef int type_5[8];
typedef int type_7[4];
typedef int type_8[16];
typedef int type_9[8];
typedef int type_10[4];
typedef int type_11[8];

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

_anon2 mapinittbl;
int nullcg[8];
int sp1cg[4];
int sp2cg[4];
int t1cg[8];
int t2cg[8];
int t3cg[8];
_anon0 tbl_thund;
_anon0 tbl_null;
_anon0 tbl_sp;
void(*ChangeTileBmp)(int, int);
unsigned char bossflag;
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x1029640
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 139, Address: 0x1029640, Func Offset: 0
	// Line 143, Address: 0x102964c, Func Offset: 0xc
	// Line 144, Address: 0x1029658, Func Offset: 0x18
	// Line 146, Address: 0x1029664, Func Offset: 0x24
	// Line 149, Address: 0x102967c, Func Offset: 0x3c
	// Line 150, Address: 0x1029690, Func Offset: 0x50
	// Line 152, Address: 0x10296bc, Func Offset: 0x7c
	// Line 153, Address: 0x10296c8, Func Offset: 0x88
	// Line 154, Address: 0x10296e8, Func Offset: 0xa8
	// Line 156, Address: 0x1029704, Func Offset: 0xc4
	// Line 159, Address: 0x102970c, Func Offset: 0xcc
	// Line 161, Address: 0x1029724, Func Offset: 0xe4
	// Line 165, Address: 0x1029750, Func Offset: 0x110
	// Line 166, Address: 0x102975c, Func Offset: 0x11c
	// Line 167, Address: 0x102977c, Func Offset: 0x13c
	// Line 169, Address: 0x1029798, Func Offset: 0x158
	// Line 172, Address: 0x10297a0, Func Offset: 0x160
	// Line 175, Address: 0x10297cc, Func Offset: 0x18c
	// Line 176, Address: 0x10297d8, Func Offset: 0x198
	// Line 177, Address: 0x10297f8, Func Offset: 0x1b8
	// Line 181, Address: 0x1029814, Func Offset: 0x1d4
	// Line 183, Address: 0x1029828, Func Offset: 0x1e8
	// Line 185, Address: 0x1029854, Func Offset: 0x214
	// Line 186, Address: 0x1029860, Func Offset: 0x220
	// Line 187, Address: 0x1029880, Func Offset: 0x240
	// Line 189, Address: 0x102989c, Func Offset: 0x25c
	// Func End, Address: 0x10298b0, Func Offset: 0x270
}

// 
// Start address: 0x10298b0
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 212, Address: 0x10298b0, Func Offset: 0
	// Line 216, Address: 0x10298d8, Func Offset: 0x28
	// Line 217, Address: 0x1029904, Func Offset: 0x54
	// Line 219, Address: 0x1029914, Func Offset: 0x64
	// Line 220, Address: 0x1029928, Func Offset: 0x78
	// Line 221, Address: 0x102993c, Func Offset: 0x8c
	// Line 224, Address: 0x1029948, Func Offset: 0x98
	// Line 225, Address: 0x1029958, Func Offset: 0xa8
	// Line 226, Address: 0x1029978, Func Offset: 0xc8
	// Line 230, Address: 0x102997c, Func Offset: 0xcc
	// Line 231, Address: 0x102998c, Func Offset: 0xdc
	// Line 233, Address: 0x10299a8, Func Offset: 0xf8
	// Line 234, Address: 0x10299c8, Func Offset: 0x118
	// Line 236, Address: 0x10299d8, Func Offset: 0x128
	// Line 237, Address: 0x10299e0, Func Offset: 0x130
	// Line 238, Address: 0x10299fc, Func Offset: 0x14c
	// Line 241, Address: 0x1029a14, Func Offset: 0x164
	// Line 242, Address: 0x1029a28, Func Offset: 0x178
	// Line 243, Address: 0x1029a3c, Func Offset: 0x18c
	// Line 244, Address: 0x1029a4c, Func Offset: 0x19c
	// Line 245, Address: 0x1029a50, Func Offset: 0x1a0
	// Func End, Address: 0x1029a68, Func Offset: 0x1b8
}

