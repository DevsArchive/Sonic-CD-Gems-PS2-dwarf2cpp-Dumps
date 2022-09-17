typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_5)(int, int);

typedef unsigned char type_0[6];
typedef int type_1[16];
typedef _anon1 type_2[24];
typedef int* type_3[8];
typedef int type_4[8];
typedef int type_6[8];
typedef int type_7[10];
typedef int type_8[10];
typedef unsigned char type_9[6];

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
int drum_re0cg[10];
int drum_re1cg[8];
int drum_no0cg[10];
int drum_no1cg[8];
_anon0 tbl_drumb00;
_anon0 tbl_drumb01;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x1026d00
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 119, Address: 0x1026d00, Func Offset: 0
	// Line 123, Address: 0x1026d0c, Func Offset: 0xc
	// Line 124, Address: 0x1026d18, Func Offset: 0x18
	// Line 126, Address: 0x1026d24, Func Offset: 0x24
	// Line 128, Address: 0x1026d50, Func Offset: 0x50
	// Line 129, Address: 0x1026d5c, Func Offset: 0x5c
	// Line 130, Address: 0x1026d7c, Func Offset: 0x7c
	// Line 133, Address: 0x1026d98, Func Offset: 0x98
	// Line 135, Address: 0x1026dc4, Func Offset: 0xc4
	// Line 136, Address: 0x1026dd0, Func Offset: 0xd0
	// Line 137, Address: 0x1026df0, Func Offset: 0xf0
	// Line 139, Address: 0x1026e0c, Func Offset: 0x10c
	// Func End, Address: 0x1026e20, Func Offset: 0x120
}

// 
// Start address: 0x1026e20
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 162, Address: 0x1026e20, Func Offset: 0
	// Line 166, Address: 0x1026e48, Func Offset: 0x28
	// Line 167, Address: 0x1026e74, Func Offset: 0x54
	// Line 169, Address: 0x1026e84, Func Offset: 0x64
	// Line 170, Address: 0x1026e98, Func Offset: 0x78
	// Line 171, Address: 0x1026eac, Func Offset: 0x8c
	// Line 174, Address: 0x1026eb8, Func Offset: 0x98
	// Line 175, Address: 0x1026ec8, Func Offset: 0xa8
	// Line 176, Address: 0x1026ee8, Func Offset: 0xc8
	// Line 180, Address: 0x1026eec, Func Offset: 0xcc
	// Line 181, Address: 0x1026efc, Func Offset: 0xdc
	// Line 183, Address: 0x1026f18, Func Offset: 0xf8
	// Line 184, Address: 0x1026f38, Func Offset: 0x118
	// Line 186, Address: 0x1026f48, Func Offset: 0x128
	// Line 187, Address: 0x1026f50, Func Offset: 0x130
	// Line 188, Address: 0x1026f6c, Func Offset: 0x14c
	// Line 191, Address: 0x1026f84, Func Offset: 0x164
	// Line 192, Address: 0x1026f98, Func Offset: 0x178
	// Line 193, Address: 0x1026fac, Func Offset: 0x18c
	// Line 194, Address: 0x1026fbc, Func Offset: 0x19c
	// Line 195, Address: 0x1026fc0, Func Offset: 0x1a0
	// Func End, Address: 0x1026fd8, Func Offset: 0x1b8
}

