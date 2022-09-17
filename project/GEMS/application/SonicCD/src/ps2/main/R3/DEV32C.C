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
_anon0 tbl_drumg00;
_anon0 tbl_drumg01;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x1026ce0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 120, Address: 0x1026ce0, Func Offset: 0
	// Line 124, Address: 0x1026cec, Func Offset: 0xc
	// Line 125, Address: 0x1026cf8, Func Offset: 0x18
	// Line 127, Address: 0x1026d04, Func Offset: 0x24
	// Line 129, Address: 0x1026d30, Func Offset: 0x50
	// Line 130, Address: 0x1026d3c, Func Offset: 0x5c
	// Line 131, Address: 0x1026d5c, Func Offset: 0x7c
	// Line 134, Address: 0x1026d78, Func Offset: 0x98
	// Line 136, Address: 0x1026da4, Func Offset: 0xc4
	// Line 137, Address: 0x1026db0, Func Offset: 0xd0
	// Line 138, Address: 0x1026dd0, Func Offset: 0xf0
	// Line 140, Address: 0x1026dec, Func Offset: 0x10c
	// Func End, Address: 0x1026e00, Func Offset: 0x120
}

// 
// Start address: 0x1026e00
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 163, Address: 0x1026e00, Func Offset: 0
	// Line 167, Address: 0x1026e28, Func Offset: 0x28
	// Line 168, Address: 0x1026e54, Func Offset: 0x54
	// Line 170, Address: 0x1026e64, Func Offset: 0x64
	// Line 171, Address: 0x1026e78, Func Offset: 0x78
	// Line 172, Address: 0x1026e8c, Func Offset: 0x8c
	// Line 175, Address: 0x1026e98, Func Offset: 0x98
	// Line 176, Address: 0x1026ea8, Func Offset: 0xa8
	// Line 177, Address: 0x1026ec8, Func Offset: 0xc8
	// Line 181, Address: 0x1026ecc, Func Offset: 0xcc
	// Line 182, Address: 0x1026edc, Func Offset: 0xdc
	// Line 184, Address: 0x1026ef8, Func Offset: 0xf8
	// Line 185, Address: 0x1026f18, Func Offset: 0x118
	// Line 187, Address: 0x1026f28, Func Offset: 0x128
	// Line 188, Address: 0x1026f30, Func Offset: 0x130
	// Line 189, Address: 0x1026f4c, Func Offset: 0x14c
	// Line 192, Address: 0x1026f64, Func Offset: 0x164
	// Line 193, Address: 0x1026f78, Func Offset: 0x178
	// Line 194, Address: 0x1026f8c, Func Offset: 0x18c
	// Line 195, Address: 0x1026f9c, Func Offset: 0x19c
	// Line 196, Address: 0x1026fa0, Func Offset: 0x1a0
	// Func End, Address: 0x1026fb8, Func Offset: 0x1b8
}

