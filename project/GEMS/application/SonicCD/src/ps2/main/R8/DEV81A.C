typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_13)(int, int);

typedef unsigned char type_0[6];
typedef int type_1[16];
typedef unsigned char type_2[6];
typedef int type_3[4];
typedef int type_4[4];
typedef int type_5[4];
typedef _anon1 type_6[24];
typedef int type_7[4];
typedef int* type_8[8];
typedef int type_9[16];
typedef int type_10[16];
typedef int type_11[8];
typedef int type_12[8];
typedef int type_14[8];
typedef int type_15[16];
typedef int type_16[16];
typedef int type_17[16];
typedef int type_18[4];
typedef int type_19[4];
typedef int type_20[4];
typedef int type_21[16];
typedef int type_22[16];
typedef int type_23[8];
typedef int type_24[8];
typedef int type_25[8];
typedef int type_26[8];
typedef int type_27[16];

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
int pis1cg[8];
int pis2cg[8];
int pis3cg[8];
int com1cg[8];
int com2cg[8];
int com3cg[8];
int com4cg[8];
int mot1cg[16];
int mot2cg[16];
int mot3cg[16];
int mot4cg[16];
int spo1cg[4];
int spo2cg[4];
int spo3cg[4];
int spo4cg[4];
int spo5cg[4];
int spo6cg[4];
int spo7cg[4];
int bal1cg[16];
int bal2cg[16];
int bal3cg[16];
int bal4cg[16];
_anon0 tbl_pis;
_anon0 tbl_com;
_anon0 tbl_mot;
_anon0 tbl_spo;
_anon0 tbl_bal;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x101d710
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 251, Address: 0x101d710, Func Offset: 0
	// Line 255, Address: 0x101d71c, Func Offset: 0xc
	// Line 256, Address: 0x101d728, Func Offset: 0x18
	// Line 258, Address: 0x101d734, Func Offset: 0x24
	// Line 260, Address: 0x101d760, Func Offset: 0x50
	// Line 261, Address: 0x101d76c, Func Offset: 0x5c
	// Line 262, Address: 0x101d78c, Func Offset: 0x7c
	// Line 265, Address: 0x101d7a8, Func Offset: 0x98
	// Line 267, Address: 0x101d7d4, Func Offset: 0xc4
	// Line 268, Address: 0x101d7e0, Func Offset: 0xd0
	// Line 269, Address: 0x101d800, Func Offset: 0xf0
	// Line 272, Address: 0x101d81c, Func Offset: 0x10c
	// Line 274, Address: 0x101d848, Func Offset: 0x138
	// Line 275, Address: 0x101d854, Func Offset: 0x144
	// Line 276, Address: 0x101d874, Func Offset: 0x164
	// Line 279, Address: 0x101d890, Func Offset: 0x180
	// Line 281, Address: 0x101d8bc, Func Offset: 0x1ac
	// Line 282, Address: 0x101d8c8, Func Offset: 0x1b8
	// Line 283, Address: 0x101d8e8, Func Offset: 0x1d8
	// Line 286, Address: 0x101d904, Func Offset: 0x1f4
	// Line 288, Address: 0x101d930, Func Offset: 0x220
	// Line 289, Address: 0x101d93c, Func Offset: 0x22c
	// Line 290, Address: 0x101d95c, Func Offset: 0x24c
	// Line 292, Address: 0x101d978, Func Offset: 0x268
	// Func End, Address: 0x101d98c, Func Offset: 0x27c
}

// 
// Start address: 0x101d990
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 315, Address: 0x101d990, Func Offset: 0
	// Line 319, Address: 0x101d9b8, Func Offset: 0x28
	// Line 320, Address: 0x101d9e4, Func Offset: 0x54
	// Line 322, Address: 0x101d9f4, Func Offset: 0x64
	// Line 323, Address: 0x101da08, Func Offset: 0x78
	// Line 324, Address: 0x101da1c, Func Offset: 0x8c
	// Line 327, Address: 0x101da28, Func Offset: 0x98
	// Line 328, Address: 0x101da38, Func Offset: 0xa8
	// Line 329, Address: 0x101da58, Func Offset: 0xc8
	// Line 333, Address: 0x101da5c, Func Offset: 0xcc
	// Line 334, Address: 0x101da6c, Func Offset: 0xdc
	// Line 336, Address: 0x101da88, Func Offset: 0xf8
	// Line 337, Address: 0x101daa8, Func Offset: 0x118
	// Line 339, Address: 0x101dab8, Func Offset: 0x128
	// Line 340, Address: 0x101dac0, Func Offset: 0x130
	// Line 341, Address: 0x101dadc, Func Offset: 0x14c
	// Line 344, Address: 0x101daf4, Func Offset: 0x164
	// Line 345, Address: 0x101db08, Func Offset: 0x178
	// Line 346, Address: 0x101db1c, Func Offset: 0x18c
	// Line 347, Address: 0x101db2c, Func Offset: 0x19c
	// Line 348, Address: 0x101db30, Func Offset: 0x1a0
	// Func End, Address: 0x101db48, Func Offset: 0x1b8
}

