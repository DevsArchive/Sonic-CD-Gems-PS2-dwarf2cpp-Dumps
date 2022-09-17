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
// Start address: 0x102aec0
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 242, Address: 0x102aec0, Func Offset: 0
	// Line 246, Address: 0x102aecc, Func Offset: 0xc
	// Line 247, Address: 0x102aed8, Func Offset: 0x18
	// Line 249, Address: 0x102aee4, Func Offset: 0x24
	// Line 251, Address: 0x102af10, Func Offset: 0x50
	// Line 252, Address: 0x102af1c, Func Offset: 0x5c
	// Line 253, Address: 0x102af3c, Func Offset: 0x7c
	// Line 255, Address: 0x102af58, Func Offset: 0x98
	// Line 257, Address: 0x102af84, Func Offset: 0xc4
	// Line 258, Address: 0x102af90, Func Offset: 0xd0
	// Line 259, Address: 0x102afb0, Func Offset: 0xf0
	// Line 261, Address: 0x102afcc, Func Offset: 0x10c
	// Line 263, Address: 0x102aff8, Func Offset: 0x138
	// Line 264, Address: 0x102b004, Func Offset: 0x144
	// Line 265, Address: 0x102b024, Func Offset: 0x164
	// Line 267, Address: 0x102b040, Func Offset: 0x180
	// Line 269, Address: 0x102b06c, Func Offset: 0x1ac
	// Line 270, Address: 0x102b078, Func Offset: 0x1b8
	// Line 271, Address: 0x102b098, Func Offset: 0x1d8
	// Line 273, Address: 0x102b0b4, Func Offset: 0x1f4
	// Line 275, Address: 0x102b0e0, Func Offset: 0x220
	// Line 276, Address: 0x102b0ec, Func Offset: 0x22c
	// Line 277, Address: 0x102b10c, Func Offset: 0x24c
	// Line 279, Address: 0x102b128, Func Offset: 0x268
	// Func End, Address: 0x102b13c, Func Offset: 0x27c
}

// 
// Start address: 0x102b140
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 302, Address: 0x102b140, Func Offset: 0
	// Line 306, Address: 0x102b168, Func Offset: 0x28
	// Line 307, Address: 0x102b194, Func Offset: 0x54
	// Line 309, Address: 0x102b1a4, Func Offset: 0x64
	// Line 310, Address: 0x102b1b8, Func Offset: 0x78
	// Line 311, Address: 0x102b1cc, Func Offset: 0x8c
	// Line 314, Address: 0x102b1d8, Func Offset: 0x98
	// Line 315, Address: 0x102b1e8, Func Offset: 0xa8
	// Line 316, Address: 0x102b208, Func Offset: 0xc8
	// Line 320, Address: 0x102b20c, Func Offset: 0xcc
	// Line 321, Address: 0x102b21c, Func Offset: 0xdc
	// Line 323, Address: 0x102b238, Func Offset: 0xf8
	// Line 324, Address: 0x102b258, Func Offset: 0x118
	// Line 326, Address: 0x102b268, Func Offset: 0x128
	// Line 327, Address: 0x102b270, Func Offset: 0x130
	// Line 328, Address: 0x102b28c, Func Offset: 0x14c
	// Line 331, Address: 0x102b2a4, Func Offset: 0x164
	// Line 332, Address: 0x102b2b8, Func Offset: 0x178
	// Line 333, Address: 0x102b2cc, Func Offset: 0x18c
	// Line 334, Address: 0x102b2dc, Func Offset: 0x19c
	// Line 335, Address: 0x102b2e0, Func Offset: 0x1a0
	// Func End, Address: 0x102b2f8, Func Offset: 0x1b8
}

