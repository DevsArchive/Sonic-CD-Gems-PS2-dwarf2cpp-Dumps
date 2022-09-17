typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_11)(int, int);

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef int type_2[4];
typedef int type_3[4];
typedef _anon1 type_4[24];
typedef int type_5[4];
typedef int* type_6[8];
typedef int type_7[16];
typedef int type_8[16];
typedef int type_9[8];
typedef int type_10[8];
typedef int type_12[8];
typedef int type_13[16];
typedef int type_14[4];
typedef int type_15[4];
typedef int type_16[4];
typedef int type_17[16];
typedef int type_18[16];
typedef int type_19[8];
typedef int type_20[8];
typedef int type_21[8];
typedef int type_22[8];

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
int pan1cg[4];
int pan2cg[4];
int pan3cg[4];
int pan4cg[4];
int pan5cg[4];
int pan6cg[4];
_anon0 tbl_pis;
_anon0 tbl_com;
_anon0 tbl_mot;
_anon0 tbl_pan;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102ad20
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 202, Address: 0x102ad20, Func Offset: 0
	// Line 206, Address: 0x102ad2c, Func Offset: 0xc
	// Line 207, Address: 0x102ad38, Func Offset: 0x18
	// Line 209, Address: 0x102ad44, Func Offset: 0x24
	// Line 211, Address: 0x102ad70, Func Offset: 0x50
	// Line 212, Address: 0x102ad7c, Func Offset: 0x5c
	// Line 213, Address: 0x102ad9c, Func Offset: 0x7c
	// Line 215, Address: 0x102adb8, Func Offset: 0x98
	// Line 217, Address: 0x102ade4, Func Offset: 0xc4
	// Line 218, Address: 0x102adf0, Func Offset: 0xd0
	// Line 219, Address: 0x102ae10, Func Offset: 0xf0
	// Line 221, Address: 0x102ae2c, Func Offset: 0x10c
	// Line 223, Address: 0x102ae58, Func Offset: 0x138
	// Line 224, Address: 0x102ae64, Func Offset: 0x144
	// Line 225, Address: 0x102ae84, Func Offset: 0x164
	// Line 227, Address: 0x102aea0, Func Offset: 0x180
	// Line 229, Address: 0x102aecc, Func Offset: 0x1ac
	// Line 230, Address: 0x102aed8, Func Offset: 0x1b8
	// Line 231, Address: 0x102aef8, Func Offset: 0x1d8
	// Line 234, Address: 0x102af14, Func Offset: 0x1f4
	// Func End, Address: 0x102af28, Func Offset: 0x208
}

// 
// Start address: 0x102af30
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 257, Address: 0x102af30, Func Offset: 0
	// Line 261, Address: 0x102af58, Func Offset: 0x28
	// Line 262, Address: 0x102af84, Func Offset: 0x54
	// Line 264, Address: 0x102af94, Func Offset: 0x64
	// Line 265, Address: 0x102afa8, Func Offset: 0x78
	// Line 266, Address: 0x102afbc, Func Offset: 0x8c
	// Line 269, Address: 0x102afc8, Func Offset: 0x98
	// Line 270, Address: 0x102afd8, Func Offset: 0xa8
	// Line 271, Address: 0x102aff8, Func Offset: 0xc8
	// Line 275, Address: 0x102affc, Func Offset: 0xcc
	// Line 276, Address: 0x102b00c, Func Offset: 0xdc
	// Line 278, Address: 0x102b028, Func Offset: 0xf8
	// Line 279, Address: 0x102b048, Func Offset: 0x118
	// Line 281, Address: 0x102b058, Func Offset: 0x128
	// Line 282, Address: 0x102b060, Func Offset: 0x130
	// Line 283, Address: 0x102b07c, Func Offset: 0x14c
	// Line 286, Address: 0x102b094, Func Offset: 0x164
	// Line 287, Address: 0x102b0a8, Func Offset: 0x178
	// Line 288, Address: 0x102b0bc, Func Offset: 0x18c
	// Line 289, Address: 0x102b0cc, Func Offset: 0x19c
	// Line 290, Address: 0x102b0d0, Func Offset: 0x1a0
	// Func End, Address: 0x102b0e8, Func Offset: 0x1b8
}

