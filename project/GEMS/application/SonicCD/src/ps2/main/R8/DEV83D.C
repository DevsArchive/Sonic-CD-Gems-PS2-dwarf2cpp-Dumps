typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_13)(int, int);

typedef unsigned char type_0[6];
typedef int type_1[4];
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
typedef int type_15[4];
typedef int type_16[16];
typedef int type_17[4];
typedef int type_18[4];
typedef int type_19[4];
typedef int type_20[4];
typedef int type_21[4];
typedef int type_22[16];
typedef int type_23[16];
typedef int type_24[8];
typedef int type_25[8];
typedef int type_26[8];
typedef int type_27[8];
typedef int type_28[4];
typedef int type_29[4];

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
int pan1cg[4];
int pan2cg[4];
int pan3cg[4];
int pan4cg[4];
int pan5cg[4];
int pan6cg[4];
_anon0 tbl_pis;
_anon0 tbl_com;
_anon0 tbl_mot;
_anon0 tbl_spo;
_anon0 tbl_pan;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char shut_flag;
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102b5e0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 243, Address: 0x102b5e0, Func Offset: 0
	// Line 247, Address: 0x102b5ec, Func Offset: 0xc
	// Line 248, Address: 0x102b5f8, Func Offset: 0x18
	// Line 250, Address: 0x102b604, Func Offset: 0x24
	// Line 252, Address: 0x102b630, Func Offset: 0x50
	// Line 253, Address: 0x102b63c, Func Offset: 0x5c
	// Line 254, Address: 0x102b65c, Func Offset: 0x7c
	// Line 256, Address: 0x102b678, Func Offset: 0x98
	// Line 258, Address: 0x102b6a4, Func Offset: 0xc4
	// Line 259, Address: 0x102b6b0, Func Offset: 0xd0
	// Line 260, Address: 0x102b6d0, Func Offset: 0xf0
	// Line 262, Address: 0x102b6ec, Func Offset: 0x10c
	// Line 264, Address: 0x102b718, Func Offset: 0x138
	// Line 265, Address: 0x102b724, Func Offset: 0x144
	// Line 266, Address: 0x102b744, Func Offset: 0x164
	// Line 268, Address: 0x102b760, Func Offset: 0x180
	// Line 270, Address: 0x102b78c, Func Offset: 0x1ac
	// Line 271, Address: 0x102b798, Func Offset: 0x1b8
	// Line 272, Address: 0x102b7b8, Func Offset: 0x1d8
	// Line 275, Address: 0x102b7d4, Func Offset: 0x1f4
	// Line 278, Address: 0x102b7fc, Func Offset: 0x21c
	// Line 280, Address: 0x102b828, Func Offset: 0x248
	// Line 281, Address: 0x102b834, Func Offset: 0x254
	// Line 282, Address: 0x102b854, Func Offset: 0x274
	// Line 284, Address: 0x102b870, Func Offset: 0x290
	// Func End, Address: 0x102b884, Func Offset: 0x2a4
}

// 
// Start address: 0x102b890
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 307, Address: 0x102b890, Func Offset: 0
	// Line 311, Address: 0x102b8b8, Func Offset: 0x28
	// Line 312, Address: 0x102b8e4, Func Offset: 0x54
	// Line 314, Address: 0x102b8f4, Func Offset: 0x64
	// Line 315, Address: 0x102b908, Func Offset: 0x78
	// Line 316, Address: 0x102b91c, Func Offset: 0x8c
	// Line 319, Address: 0x102b928, Func Offset: 0x98
	// Line 320, Address: 0x102b938, Func Offset: 0xa8
	// Line 321, Address: 0x102b958, Func Offset: 0xc8
	// Line 325, Address: 0x102b95c, Func Offset: 0xcc
	// Line 326, Address: 0x102b96c, Func Offset: 0xdc
	// Line 328, Address: 0x102b988, Func Offset: 0xf8
	// Line 329, Address: 0x102b9a8, Func Offset: 0x118
	// Line 331, Address: 0x102b9b8, Func Offset: 0x128
	// Line 332, Address: 0x102b9c0, Func Offset: 0x130
	// Line 333, Address: 0x102b9dc, Func Offset: 0x14c
	// Line 336, Address: 0x102b9f4, Func Offset: 0x164
	// Line 337, Address: 0x102ba08, Func Offset: 0x178
	// Line 338, Address: 0x102ba1c, Func Offset: 0x18c
	// Line 339, Address: 0x102ba2c, Func Offset: 0x19c
	// Line 340, Address: 0x102ba30, Func Offset: 0x1a0
	// Func End, Address: 0x102ba48, Func Offset: 0x1b8
}

