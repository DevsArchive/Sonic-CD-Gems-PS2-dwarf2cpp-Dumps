typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_8)(int, int);

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef int type_2[16];
typedef _anon1 type_3[24];
typedef int* type_4[8];
typedef int type_5[4];
typedef int type_6[4];
typedef int type_7[8];
typedef int type_9[4];
typedef int type_10[4];
typedef int type_11[4];
typedef int type_12[8];
typedef int type_13[8];
typedef int type_14[4];

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
_anon0 tbl_sp;
_anon0 tbl_light;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x10264c0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 150, Address: 0x10264c0, Func Offset: 0
	// Line 154, Address: 0x10264cc, Func Offset: 0xc
	// Line 155, Address: 0x10264d8, Func Offset: 0x18
	// Line 157, Address: 0x10264e4, Func Offset: 0x24
	// Line 159, Address: 0x1026510, Func Offset: 0x50
	// Line 160, Address: 0x102651c, Func Offset: 0x5c
	// Line 161, Address: 0x102653c, Func Offset: 0x7c
	// Line 165, Address: 0x1026558, Func Offset: 0x98
	// Line 167, Address: 0x1026584, Func Offset: 0xc4
	// Line 168, Address: 0x1026590, Func Offset: 0xd0
	// Line 169, Address: 0x10265b0, Func Offset: 0xf0
	// Line 173, Address: 0x10265cc, Func Offset: 0x10c
	// Line 175, Address: 0x10265f8, Func Offset: 0x138
	// Line 176, Address: 0x1026604, Func Offset: 0x144
	// Line 177, Address: 0x1026624, Func Offset: 0x164
	// Line 179, Address: 0x1026640, Func Offset: 0x180
	// Func End, Address: 0x1026654, Func Offset: 0x194
}

// 
// Start address: 0x1026660
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 202, Address: 0x1026660, Func Offset: 0
	// Line 206, Address: 0x1026688, Func Offset: 0x28
	// Line 207, Address: 0x10266b4, Func Offset: 0x54
	// Line 209, Address: 0x10266c4, Func Offset: 0x64
	// Line 210, Address: 0x10266d8, Func Offset: 0x78
	// Line 211, Address: 0x10266ec, Func Offset: 0x8c
	// Line 214, Address: 0x10266f8, Func Offset: 0x98
	// Line 215, Address: 0x1026708, Func Offset: 0xa8
	// Line 216, Address: 0x1026728, Func Offset: 0xc8
	// Line 220, Address: 0x102672c, Func Offset: 0xcc
	// Line 221, Address: 0x102673c, Func Offset: 0xdc
	// Line 223, Address: 0x1026758, Func Offset: 0xf8
	// Line 224, Address: 0x1026778, Func Offset: 0x118
	// Line 226, Address: 0x1026788, Func Offset: 0x128
	// Line 227, Address: 0x1026790, Func Offset: 0x130
	// Line 228, Address: 0x10267ac, Func Offset: 0x14c
	// Line 231, Address: 0x10267c4, Func Offset: 0x164
	// Line 232, Address: 0x10267d8, Func Offset: 0x178
	// Line 233, Address: 0x10267ec, Func Offset: 0x18c
	// Line 234, Address: 0x10267fc, Func Offset: 0x19c
	// Line 235, Address: 0x1026800, Func Offset: 0x1a0
	// Func End, Address: 0x1026818, Func Offset: 0x1b8
}

