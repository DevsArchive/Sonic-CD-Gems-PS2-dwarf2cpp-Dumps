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
typedef int type_15[4];
typedef int type_16[4];
typedef int type_17[4];
typedef int type_18[16];
typedef int type_19[16];
typedef int type_20[8];
typedef int type_21[8];
typedef int type_22[8];
typedef int type_23[8];

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
_anon0 tbl_pis;
_anon0 tbl_com;
_anon0 tbl_mot;
_anon0 tbl_spo;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102b420
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 207, Address: 0x102b420, Func Offset: 0
	// Line 211, Address: 0x102b42c, Func Offset: 0xc
	// Line 212, Address: 0x102b438, Func Offset: 0x18
	// Line 214, Address: 0x102b444, Func Offset: 0x24
	// Line 216, Address: 0x102b470, Func Offset: 0x50
	// Line 217, Address: 0x102b47c, Func Offset: 0x5c
	// Line 218, Address: 0x102b49c, Func Offset: 0x7c
	// Line 221, Address: 0x102b4b8, Func Offset: 0x98
	// Line 223, Address: 0x102b4e4, Func Offset: 0xc4
	// Line 224, Address: 0x102b4f0, Func Offset: 0xd0
	// Line 225, Address: 0x102b510, Func Offset: 0xf0
	// Line 228, Address: 0x102b52c, Func Offset: 0x10c
	// Line 230, Address: 0x102b558, Func Offset: 0x138
	// Line 231, Address: 0x102b564, Func Offset: 0x144
	// Line 232, Address: 0x102b584, Func Offset: 0x164
	// Line 235, Address: 0x102b5a0, Func Offset: 0x180
	// Line 237, Address: 0x102b5cc, Func Offset: 0x1ac
	// Line 238, Address: 0x102b5d8, Func Offset: 0x1b8
	// Line 239, Address: 0x102b5f8, Func Offset: 0x1d8
	// Line 241, Address: 0x102b614, Func Offset: 0x1f4
	// Func End, Address: 0x102b628, Func Offset: 0x208
}

// 
// Start address: 0x102b630
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 264, Address: 0x102b630, Func Offset: 0
	// Line 268, Address: 0x102b658, Func Offset: 0x28
	// Line 269, Address: 0x102b684, Func Offset: 0x54
	// Line 271, Address: 0x102b694, Func Offset: 0x64
	// Line 272, Address: 0x102b6a8, Func Offset: 0x78
	// Line 273, Address: 0x102b6bc, Func Offset: 0x8c
	// Line 276, Address: 0x102b6c8, Func Offset: 0x98
	// Line 277, Address: 0x102b6d8, Func Offset: 0xa8
	// Line 278, Address: 0x102b6f8, Func Offset: 0xc8
	// Line 282, Address: 0x102b6fc, Func Offset: 0xcc
	// Line 283, Address: 0x102b70c, Func Offset: 0xdc
	// Line 285, Address: 0x102b728, Func Offset: 0xf8
	// Line 286, Address: 0x102b748, Func Offset: 0x118
	// Line 288, Address: 0x102b758, Func Offset: 0x128
	// Line 289, Address: 0x102b760, Func Offset: 0x130
	// Line 290, Address: 0x102b77c, Func Offset: 0x14c
	// Line 293, Address: 0x102b794, Func Offset: 0x164
	// Line 294, Address: 0x102b7a8, Func Offset: 0x178
	// Line 295, Address: 0x102b7bc, Func Offset: 0x18c
	// Line 296, Address: 0x102b7cc, Func Offset: 0x19c
	// Line 297, Address: 0x102b7d0, Func Offset: 0x1a0
	// Func End, Address: 0x102b7e8, Func Offset: 0x1b8
}

