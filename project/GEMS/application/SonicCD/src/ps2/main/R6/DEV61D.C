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
// Start address: 0x102b6c0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 149, Address: 0x102b6c0, Func Offset: 0
	// Line 153, Address: 0x102b6cc, Func Offset: 0xc
	// Line 154, Address: 0x102b6d8, Func Offset: 0x18
	// Line 156, Address: 0x102b6e4, Func Offset: 0x24
	// Line 158, Address: 0x102b710, Func Offset: 0x50
	// Line 159, Address: 0x102b71c, Func Offset: 0x5c
	// Line 160, Address: 0x102b73c, Func Offset: 0x7c
	// Line 164, Address: 0x102b758, Func Offset: 0x98
	// Line 166, Address: 0x102b784, Func Offset: 0xc4
	// Line 167, Address: 0x102b790, Func Offset: 0xd0
	// Line 168, Address: 0x102b7b0, Func Offset: 0xf0
	// Line 172, Address: 0x102b7cc, Func Offset: 0x10c
	// Line 174, Address: 0x102b7f8, Func Offset: 0x138
	// Line 175, Address: 0x102b804, Func Offset: 0x144
	// Line 176, Address: 0x102b824, Func Offset: 0x164
	// Line 178, Address: 0x102b840, Func Offset: 0x180
	// Func End, Address: 0x102b854, Func Offset: 0x194
}

// 
// Start address: 0x102b860
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 201, Address: 0x102b860, Func Offset: 0
	// Line 205, Address: 0x102b888, Func Offset: 0x28
	// Line 206, Address: 0x102b8b4, Func Offset: 0x54
	// Line 208, Address: 0x102b8c4, Func Offset: 0x64
	// Line 209, Address: 0x102b8d8, Func Offset: 0x78
	// Line 210, Address: 0x102b8ec, Func Offset: 0x8c
	// Line 213, Address: 0x102b8f8, Func Offset: 0x98
	// Line 214, Address: 0x102b908, Func Offset: 0xa8
	// Line 215, Address: 0x102b928, Func Offset: 0xc8
	// Line 219, Address: 0x102b92c, Func Offset: 0xcc
	// Line 220, Address: 0x102b93c, Func Offset: 0xdc
	// Line 222, Address: 0x102b958, Func Offset: 0xf8
	// Line 223, Address: 0x102b978, Func Offset: 0x118
	// Line 225, Address: 0x102b988, Func Offset: 0x128
	// Line 226, Address: 0x102b990, Func Offset: 0x130
	// Line 227, Address: 0x102b9ac, Func Offset: 0x14c
	// Line 230, Address: 0x102b9c4, Func Offset: 0x164
	// Line 231, Address: 0x102b9d8, Func Offset: 0x178
	// Line 232, Address: 0x102b9ec, Func Offset: 0x18c
	// Line 233, Address: 0x102b9fc, Func Offset: 0x19c
	// Line 234, Address: 0x102ba00, Func Offset: 0x1a0
	// Func End, Address: 0x102ba18, Func Offset: 0x1b8
}

