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
unsigned char shut_flag;
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102a840
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 202, Address: 0x102a840, Func Offset: 0
	// Line 206, Address: 0x102a84c, Func Offset: 0xc
	// Line 207, Address: 0x102a858, Func Offset: 0x18
	// Line 209, Address: 0x102a864, Func Offset: 0x24
	// Line 211, Address: 0x102a890, Func Offset: 0x50
	// Line 212, Address: 0x102a89c, Func Offset: 0x5c
	// Line 213, Address: 0x102a8bc, Func Offset: 0x7c
	// Line 215, Address: 0x102a8d8, Func Offset: 0x98
	// Line 217, Address: 0x102a904, Func Offset: 0xc4
	// Line 218, Address: 0x102a910, Func Offset: 0xd0
	// Line 219, Address: 0x102a930, Func Offset: 0xf0
	// Line 221, Address: 0x102a94c, Func Offset: 0x10c
	// Line 223, Address: 0x102a978, Func Offset: 0x138
	// Line 224, Address: 0x102a984, Func Offset: 0x144
	// Line 225, Address: 0x102a9a4, Func Offset: 0x164
	// Line 228, Address: 0x102a9c0, Func Offset: 0x180
	// Line 231, Address: 0x102a9e8, Func Offset: 0x1a8
	// Line 233, Address: 0x102aa14, Func Offset: 0x1d4
	// Line 234, Address: 0x102aa20, Func Offset: 0x1e0
	// Line 235, Address: 0x102aa40, Func Offset: 0x200
	// Line 237, Address: 0x102aa5c, Func Offset: 0x21c
	// Func End, Address: 0x102aa70, Func Offset: 0x230
}

// 
// Start address: 0x102aa70
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 260, Address: 0x102aa70, Func Offset: 0
	// Line 264, Address: 0x102aa98, Func Offset: 0x28
	// Line 265, Address: 0x102aac4, Func Offset: 0x54
	// Line 267, Address: 0x102aad4, Func Offset: 0x64
	// Line 268, Address: 0x102aae8, Func Offset: 0x78
	// Line 269, Address: 0x102aafc, Func Offset: 0x8c
	// Line 272, Address: 0x102ab08, Func Offset: 0x98
	// Line 273, Address: 0x102ab18, Func Offset: 0xa8
	// Line 274, Address: 0x102ab38, Func Offset: 0xc8
	// Line 278, Address: 0x102ab3c, Func Offset: 0xcc
	// Line 279, Address: 0x102ab4c, Func Offset: 0xdc
	// Line 281, Address: 0x102ab68, Func Offset: 0xf8
	// Line 282, Address: 0x102ab88, Func Offset: 0x118
	// Line 284, Address: 0x102ab98, Func Offset: 0x128
	// Line 285, Address: 0x102aba0, Func Offset: 0x130
	// Line 286, Address: 0x102abbc, Func Offset: 0x14c
	// Line 289, Address: 0x102abd4, Func Offset: 0x164
	// Line 290, Address: 0x102abe8, Func Offset: 0x178
	// Line 291, Address: 0x102abfc, Func Offset: 0x18c
	// Line 292, Address: 0x102ac0c, Func Offset: 0x19c
	// Line 293, Address: 0x102ac10, Func Offset: 0x1a0
	// Func End, Address: 0x102ac28, Func Offset: 0x1b8
}

