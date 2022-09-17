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
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x1025ba0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 242, Address: 0x1025ba0, Func Offset: 0
	// Line 246, Address: 0x1025bac, Func Offset: 0xc
	// Line 247, Address: 0x1025bb8, Func Offset: 0x18
	// Line 249, Address: 0x1025bc4, Func Offset: 0x24
	// Line 251, Address: 0x1025bf0, Func Offset: 0x50
	// Line 252, Address: 0x1025bfc, Func Offset: 0x5c
	// Line 253, Address: 0x1025c1c, Func Offset: 0x7c
	// Line 256, Address: 0x1025c38, Func Offset: 0x98
	// Line 258, Address: 0x1025c64, Func Offset: 0xc4
	// Line 259, Address: 0x1025c70, Func Offset: 0xd0
	// Line 260, Address: 0x1025c90, Func Offset: 0xf0
	// Line 263, Address: 0x1025cac, Func Offset: 0x10c
	// Line 265, Address: 0x1025cd8, Func Offset: 0x138
	// Line 266, Address: 0x1025ce4, Func Offset: 0x144
	// Line 267, Address: 0x1025d04, Func Offset: 0x164
	// Line 270, Address: 0x1025d20, Func Offset: 0x180
	// Line 272, Address: 0x1025d4c, Func Offset: 0x1ac
	// Line 273, Address: 0x1025d58, Func Offset: 0x1b8
	// Line 274, Address: 0x1025d78, Func Offset: 0x1d8
	// Line 277, Address: 0x1025d94, Func Offset: 0x1f4
	// Line 279, Address: 0x1025dc0, Func Offset: 0x220
	// Line 280, Address: 0x1025dcc, Func Offset: 0x22c
	// Line 281, Address: 0x1025dec, Func Offset: 0x24c
	// Line 283, Address: 0x1025e08, Func Offset: 0x268
	// Func End, Address: 0x1025e1c, Func Offset: 0x27c
}

// 
// Start address: 0x1025e20
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 306, Address: 0x1025e20, Func Offset: 0
	// Line 310, Address: 0x1025e48, Func Offset: 0x28
	// Line 311, Address: 0x1025e74, Func Offset: 0x54
	// Line 313, Address: 0x1025e84, Func Offset: 0x64
	// Line 314, Address: 0x1025e98, Func Offset: 0x78
	// Line 315, Address: 0x1025eac, Func Offset: 0x8c
	// Line 318, Address: 0x1025eb8, Func Offset: 0x98
	// Line 319, Address: 0x1025ec8, Func Offset: 0xa8
	// Line 320, Address: 0x1025ee8, Func Offset: 0xc8
	// Line 324, Address: 0x1025eec, Func Offset: 0xcc
	// Line 325, Address: 0x1025efc, Func Offset: 0xdc
	// Line 327, Address: 0x1025f18, Func Offset: 0xf8
	// Line 328, Address: 0x1025f38, Func Offset: 0x118
	// Line 330, Address: 0x1025f48, Func Offset: 0x128
	// Line 331, Address: 0x1025f50, Func Offset: 0x130
	// Line 332, Address: 0x1025f6c, Func Offset: 0x14c
	// Line 335, Address: 0x1025f84, Func Offset: 0x164
	// Line 336, Address: 0x1025f98, Func Offset: 0x178
	// Line 337, Address: 0x1025fac, Func Offset: 0x18c
	// Line 338, Address: 0x1025fbc, Func Offset: 0x19c
	// Line 339, Address: 0x1025fc0, Func Offset: 0x1a0
	// Func End, Address: 0x1025fd8, Func Offset: 0x1b8
}

