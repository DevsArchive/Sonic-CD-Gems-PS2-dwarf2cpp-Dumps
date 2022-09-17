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
unsigned char cgchgtim[6];
unsigned char cgchgcnt[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102b660
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 139, Address: 0x102b660, Func Offset: 0
	// Line 143, Address: 0x102b66c, Func Offset: 0xc
	// Line 144, Address: 0x102b678, Func Offset: 0x18
	// Line 146, Address: 0x102b684, Func Offset: 0x24
	// Line 148, Address: 0x102b6b0, Func Offset: 0x50
	// Line 149, Address: 0x102b6bc, Func Offset: 0x5c
	// Line 150, Address: 0x102b6dc, Func Offset: 0x7c
	// Line 153, Address: 0x102b6f8, Func Offset: 0x98
	// Line 154, Address: 0x102b70c, Func Offset: 0xac
	// Line 157, Address: 0x102b72c, Func Offset: 0xcc
	// Line 158, Address: 0x102b740, Func Offset: 0xe0
	// Line 159, Address: 0x102b768, Func Offset: 0x108
	// Line 162, Address: 0x102b774, Func Offset: 0x114
	// Line 165, Address: 0x102b788, Func Offset: 0x128
	// Line 167, Address: 0x102b7b4, Func Offset: 0x154
	// Line 168, Address: 0x102b7c0, Func Offset: 0x160
	// Line 169, Address: 0x102b7e0, Func Offset: 0x180
	// Line 171, Address: 0x102b7fc, Func Offset: 0x19c
	// Line 174, Address: 0x102b804, Func Offset: 0x1a4
	// Line 176, Address: 0x102b830, Func Offset: 0x1d0
	// Line 177, Address: 0x102b83c, Func Offset: 0x1dc
	// Line 178, Address: 0x102b85c, Func Offset: 0x1fc
	// Line 180, Address: 0x102b878, Func Offset: 0x218
	// Func End, Address: 0x102b88c, Func Offset: 0x22c
}

// 
// Start address: 0x102b890
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 203, Address: 0x102b890, Func Offset: 0
	// Line 207, Address: 0x102b8b8, Func Offset: 0x28
	// Line 208, Address: 0x102b8e4, Func Offset: 0x54
	// Line 210, Address: 0x102b8f4, Func Offset: 0x64
	// Line 211, Address: 0x102b908, Func Offset: 0x78
	// Line 212, Address: 0x102b91c, Func Offset: 0x8c
	// Line 215, Address: 0x102b928, Func Offset: 0x98
	// Line 216, Address: 0x102b938, Func Offset: 0xa8
	// Line 217, Address: 0x102b958, Func Offset: 0xc8
	// Line 221, Address: 0x102b95c, Func Offset: 0xcc
	// Line 222, Address: 0x102b96c, Func Offset: 0xdc
	// Line 224, Address: 0x102b988, Func Offset: 0xf8
	// Line 225, Address: 0x102b9a8, Func Offset: 0x118
	// Line 227, Address: 0x102b9b8, Func Offset: 0x128
	// Line 228, Address: 0x102b9c0, Func Offset: 0x130
	// Line 229, Address: 0x102b9dc, Func Offset: 0x14c
	// Line 232, Address: 0x102b9f4, Func Offset: 0x164
	// Line 233, Address: 0x102ba08, Func Offset: 0x178
	// Line 234, Address: 0x102ba1c, Func Offset: 0x18c
	// Line 235, Address: 0x102ba2c, Func Offset: 0x19c
	// Line 236, Address: 0x102ba30, Func Offset: 0x1a0
	// Func End, Address: 0x102ba48, Func Offset: 0x1b8
}

