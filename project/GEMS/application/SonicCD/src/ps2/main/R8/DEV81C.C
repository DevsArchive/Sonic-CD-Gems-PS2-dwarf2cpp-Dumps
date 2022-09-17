typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_9)(int, int);

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef int type_2[16];
typedef _anon1 type_3[24];
typedef int* type_4[8];
typedef int type_5[16];
typedef int type_6[16];
typedef int type_7[8];
typedef int type_8[8];
typedef int type_10[8];
typedef int type_11[16];
typedef int type_12[16];
typedef int type_13[8];
typedef int type_14[8];
typedef int type_15[8];
typedef int type_16[8];

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
_anon0 tbl_pis;
_anon0 tbl_com;
_anon0 tbl_mot;
void(*ChangeTileBmp)(int, int);
unsigned char cgchgcnt[6];
unsigned char cgchgtim[6];

void cg_change();
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart);

// 
// Start address: 0x102b280
void cg_change()
{
	unsigned char* pcgchgtim;
	unsigned char* pcgchgcnt;
	int i;
	int playsubdma[16];
	int top;
	// Line 166, Address: 0x102b280, Func Offset: 0
	// Line 170, Address: 0x102b28c, Func Offset: 0xc
	// Line 171, Address: 0x102b298, Func Offset: 0x18
	// Line 173, Address: 0x102b2a4, Func Offset: 0x24
	// Line 175, Address: 0x102b2d0, Func Offset: 0x50
	// Line 176, Address: 0x102b2dc, Func Offset: 0x5c
	// Line 177, Address: 0x102b2fc, Func Offset: 0x7c
	// Line 180, Address: 0x102b318, Func Offset: 0x98
	// Line 182, Address: 0x102b344, Func Offset: 0xc4
	// Line 183, Address: 0x102b350, Func Offset: 0xd0
	// Line 184, Address: 0x102b370, Func Offset: 0xf0
	// Line 187, Address: 0x102b38c, Func Offset: 0x10c
	// Line 189, Address: 0x102b3b8, Func Offset: 0x138
	// Line 190, Address: 0x102b3c4, Func Offset: 0x144
	// Line 191, Address: 0x102b3e4, Func Offset: 0x164
	// Line 193, Address: 0x102b400, Func Offset: 0x180
	// Func End, Address: 0x102b414, Func Offset: 0x194
}

// 
// Start address: 0x102b420
unsigned int cg_chg1(_anon0* pTbl, int iNum, unsigned char** ppChgTim, unsigned char** ppChgCnt, int* BmpNo, int* TileStart)
{
	int tblidx;
	int* pNoTbl;
	char Timwk;
	// Line 216, Address: 0x102b420, Func Offset: 0
	// Line 220, Address: 0x102b448, Func Offset: 0x28
	// Line 221, Address: 0x102b474, Func Offset: 0x54
	// Line 223, Address: 0x102b484, Func Offset: 0x64
	// Line 224, Address: 0x102b498, Func Offset: 0x78
	// Line 225, Address: 0x102b4ac, Func Offset: 0x8c
	// Line 228, Address: 0x102b4b8, Func Offset: 0x98
	// Line 229, Address: 0x102b4c8, Func Offset: 0xa8
	// Line 230, Address: 0x102b4e8, Func Offset: 0xc8
	// Line 234, Address: 0x102b4ec, Func Offset: 0xcc
	// Line 235, Address: 0x102b4fc, Func Offset: 0xdc
	// Line 237, Address: 0x102b518, Func Offset: 0xf8
	// Line 238, Address: 0x102b538, Func Offset: 0x118
	// Line 240, Address: 0x102b548, Func Offset: 0x128
	// Line 241, Address: 0x102b550, Func Offset: 0x130
	// Line 242, Address: 0x102b56c, Func Offset: 0x14c
	// Line 245, Address: 0x102b584, Func Offset: 0x164
	// Line 246, Address: 0x102b598, Func Offset: 0x178
	// Line 247, Address: 0x102b5ac, Func Offset: 0x18c
	// Line 248, Address: 0x102b5bc, Func Offset: 0x19c
	// Line 249, Address: 0x102b5c0, Func Offset: 0x1a0
	// Func End, Address: 0x102b5d8, Func Offset: 0x1b8
}

