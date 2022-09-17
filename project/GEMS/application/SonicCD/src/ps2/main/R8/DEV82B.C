typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_6)(int, int);

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef _anon1 type_2[24];
typedef int* type_3[8];
typedef int type_4[4];
typedef int type_5[4];
typedef int type_7[4];
typedef int type_8[16];
typedef int type_9[4];
typedef int type_10[4];
typedef int type_11[4];

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
int pan1cg[4];
int pan2cg[4];
int pan3cg[4];
int pan4cg[4];
int pan5cg[4];
int pan6cg[4];
_anon0 tbl_pan;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102aae0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 117, Address: 0x102aae0, Func Offset: 0
	// Line 121, Address: 0x102aaec, Func Offset: 0xc
	// Line 122, Address: 0x102aaf8, Func Offset: 0x18
	// Line 124, Address: 0x102ab04, Func Offset: 0x24
	// Line 126, Address: 0x102ab30, Func Offset: 0x50
	// Line 127, Address: 0x102ab3c, Func Offset: 0x5c
	// Line 128, Address: 0x102ab5c, Func Offset: 0x7c
	// Line 130, Address: 0x102ab78, Func Offset: 0x98
	// Func End, Address: 0x102ab8c, Func Offset: 0xac
}

// 
// Start address: 0x102ab90
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 153, Address: 0x102ab90, Func Offset: 0
	// Line 157, Address: 0x102abb8, Func Offset: 0x28
	// Line 158, Address: 0x102abe4, Func Offset: 0x54
	// Line 160, Address: 0x102abf4, Func Offset: 0x64
	// Line 161, Address: 0x102ac08, Func Offset: 0x78
	// Line 162, Address: 0x102ac1c, Func Offset: 0x8c
	// Line 165, Address: 0x102ac28, Func Offset: 0x98
	// Line 166, Address: 0x102ac38, Func Offset: 0xa8
	// Line 167, Address: 0x102ac58, Func Offset: 0xc8
	// Line 171, Address: 0x102ac5c, Func Offset: 0xcc
	// Line 172, Address: 0x102ac6c, Func Offset: 0xdc
	// Line 174, Address: 0x102ac88, Func Offset: 0xf8
	// Line 175, Address: 0x102aca8, Func Offset: 0x118
	// Line 177, Address: 0x102acb8, Func Offset: 0x128
	// Line 178, Address: 0x102acc0, Func Offset: 0x130
	// Line 179, Address: 0x102acdc, Func Offset: 0x14c
	// Line 182, Address: 0x102acf4, Func Offset: 0x164
	// Line 183, Address: 0x102ad08, Func Offset: 0x178
	// Line 184, Address: 0x102ad1c, Func Offset: 0x18c
	// Line 185, Address: 0x102ad2c, Func Offset: 0x19c
	// Line 186, Address: 0x102ad30, Func Offset: 0x1a0
	// Func End, Address: 0x102ad48, Func Offset: 0x1b8
}

