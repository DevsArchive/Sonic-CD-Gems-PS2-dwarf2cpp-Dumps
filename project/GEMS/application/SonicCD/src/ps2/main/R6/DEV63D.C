typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_9)(int, int);

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef int type_2[16];
typedef _anon1 type_3[24];
typedef int* type_4[8];
typedef int type_5[4];
typedef int type_6[4];
typedef int type_7[8];
typedef int type_8[8];
typedef int type_10[4];
typedef int type_11[4];
typedef int type_12[4];
typedef int type_13[8];
typedef int type_14[4];
typedef int type_15[8];

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
int r01cg[4];
int r02cg[4];
int r03cg[4];
int r04cg[4];
_anon0 tbl_thund;
_anon0 tbl_null;
_anon0 tbl_sp;
_anon0 tbl_light;
void(*ChangeTileBmp)(int, int);
unsigned char bossflag;
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102dc30
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 166, Address: 0x102dc30, Func Offset: 0
	// Line 170, Address: 0x102dc3c, Func Offset: 0xc
	// Line 171, Address: 0x102dc48, Func Offset: 0x18
	// Line 173, Address: 0x102dc54, Func Offset: 0x24
	// Line 176, Address: 0x102dc6c, Func Offset: 0x3c
	// Line 177, Address: 0x102dc80, Func Offset: 0x50
	// Line 179, Address: 0x102dcac, Func Offset: 0x7c
	// Line 180, Address: 0x102dcb8, Func Offset: 0x88
	// Line 181, Address: 0x102dcd8, Func Offset: 0xa8
	// Line 183, Address: 0x102dcf4, Func Offset: 0xc4
	// Line 186, Address: 0x102dcfc, Func Offset: 0xcc
	// Line 188, Address: 0x102dd14, Func Offset: 0xe4
	// Line 190, Address: 0x102dd40, Func Offset: 0x110
	// Line 191, Address: 0x102dd4c, Func Offset: 0x11c
	// Line 192, Address: 0x102dd6c, Func Offset: 0x13c
	// Line 194, Address: 0x102dd88, Func Offset: 0x158
	// Line 197, Address: 0x102dd90, Func Offset: 0x160
	// Line 199, Address: 0x102ddbc, Func Offset: 0x18c
	// Line 200, Address: 0x102ddc8, Func Offset: 0x198
	// Line 201, Address: 0x102dde8, Func Offset: 0x1b8
	// Line 205, Address: 0x102de04, Func Offset: 0x1d4
	// Line 207, Address: 0x102de18, Func Offset: 0x1e8
	// Line 209, Address: 0x102de44, Func Offset: 0x214
	// Line 210, Address: 0x102de50, Func Offset: 0x220
	// Line 211, Address: 0x102de70, Func Offset: 0x240
	// Line 214, Address: 0x102de8c, Func Offset: 0x25c
	// Line 216, Address: 0x102deb8, Func Offset: 0x288
	// Line 217, Address: 0x102dec4, Func Offset: 0x294
	// Line 218, Address: 0x102dee4, Func Offset: 0x2b4
	// Line 220, Address: 0x102df00, Func Offset: 0x2d0
	// Func End, Address: 0x102df14, Func Offset: 0x2e4
}

// 
// Start address: 0x102df20
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 243, Address: 0x102df20, Func Offset: 0
	// Line 247, Address: 0x102df48, Func Offset: 0x28
	// Line 248, Address: 0x102df74, Func Offset: 0x54
	// Line 250, Address: 0x102df84, Func Offset: 0x64
	// Line 251, Address: 0x102df98, Func Offset: 0x78
	// Line 252, Address: 0x102dfac, Func Offset: 0x8c
	// Line 255, Address: 0x102dfb8, Func Offset: 0x98
	// Line 256, Address: 0x102dfc8, Func Offset: 0xa8
	// Line 257, Address: 0x102dfe8, Func Offset: 0xc8
	// Line 261, Address: 0x102dfec, Func Offset: 0xcc
	// Line 262, Address: 0x102dffc, Func Offset: 0xdc
	// Line 264, Address: 0x102e018, Func Offset: 0xf8
	// Line 265, Address: 0x102e038, Func Offset: 0x118
	// Line 267, Address: 0x102e048, Func Offset: 0x128
	// Line 268, Address: 0x102e050, Func Offset: 0x130
	// Line 269, Address: 0x102e06c, Func Offset: 0x14c
	// Line 272, Address: 0x102e084, Func Offset: 0x164
	// Line 273, Address: 0x102e098, Func Offset: 0x178
	// Line 274, Address: 0x102e0ac, Func Offset: 0x18c
	// Line 275, Address: 0x102e0bc, Func Offset: 0x19c
	// Line 276, Address: 0x102e0c0, Func Offset: 0x1a0
	// Func End, Address: 0x102e0d8, Func Offset: 0x1b8
}

