typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)();

typedef _anon1 type_0[2];
typedef _anon3 type_1[10];
typedef _anon0 type_2[66];
typedef short type_3[16];
typedef short type_4[8];
typedef short type_5[16];
typedef void(*type_7)()[8];
typedef unsigned char type_8[8];

struct _anon0
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon5 XPOSI;
	_anon5 YPOSI;
	_anon5 X_SPEED;
	_anon5 Y_SPEED;
	_anon5 X_ACCEL;
	_anon5 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon4* PAT_ADR;
	unsigned char SPR_FLG;
	unsigned char ACT_FLG;
	short END_XPOSI;
	short END_YPOSI;
	short X_WIDE;
	short Y_WIDE;
	unsigned char free[8];
};

struct _anon1
{
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon2
{
	short mapnum;
	_anon1 aMapDat[2];
};

struct _anon3
{
	short timer;
	_anon2* paMapTbl;
};

struct _anon4
{
	short patnum;
	_anon3 aPatDat[10];
};

union _anon5
{
	int l;
	_anon6 w;
	_anon7 b;
};

struct _anon6
{
	short l;
	short h;
};

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

unsigned char animal_flg;
short actset_tm[8];
_anon0 actwk[66];

void sprinit();
void sonic_set();
void flick_set();
void pocky_set();
void pecky_set();
void ricky_set();
void inco_set();
void hato_set();
void sheep_set();

// 
// Start address: 0x1001100
void sprinit()
{
	short* a1;
	short* a2;
	int ld0;
	short d0;
	short d1;
	short d5;
	short actset_tbl[16];
	short manyact_tbl[16];
	void(*sprinit_tbl)()[8];
	// Line 37, Address: 0x1001100, Func Offset: 0
	// Line 42, Address: 0x1001120, Func Offset: 0x20
	// Line 54, Address: 0x1001154, Func Offset: 0x54
	// Line 66, Address: 0x1001188, Func Offset: 0x88
	// Line 78, Address: 0x10011bc, Func Offset: 0xbc
	// Line 80, Address: 0x10011c4, Func Offset: 0xc4
	// Line 81, Address: 0x10011d0, Func Offset: 0xd0
	// Line 83, Address: 0x10011e8, Func Offset: 0xe8
	// Line 87, Address: 0x10011f4, Func Offset: 0xf4
	// Line 89, Address: 0x1001208, Func Offset: 0x108
	// Line 90, Address: 0x1001214, Func Offset: 0x114
	// Line 92, Address: 0x100121c, Func Offset: 0x11c
	// Line 93, Address: 0x1001228, Func Offset: 0x128
	// Line 94, Address: 0x100122c, Func Offset: 0x12c
	// Line 96, Address: 0x1001244, Func Offset: 0x144
	// Line 100, Address: 0x100124c, Func Offset: 0x14c
	// Line 101, Address: 0x1001254, Func Offset: 0x154
	// Line 102, Address: 0x1001260, Func Offset: 0x160
	// Line 103, Address: 0x1001294, Func Offset: 0x194
	// Line 104, Address: 0x10012a8, Func Offset: 0x1a8
	// Line 106, Address: 0x10012b8, Func Offset: 0x1b8
	// Line 107, Address: 0x10012c4, Func Offset: 0x1c4
	// Line 108, Address: 0x10012c8, Func Offset: 0x1c8
	// Line 109, Address: 0x10012d4, Func Offset: 0x1d4
	// Line 110, Address: 0x1001300, Func Offset: 0x200
	// Line 112, Address: 0x100130c, Func Offset: 0x20c
	// Line 113, Address: 0x1001328, Func Offset: 0x228
	// Func End, Address: 0x1001350, Func Offset: 0x250
}

// 
// Start address: 0x1001350
void sonic_set()
{
	// Line 119, Address: 0x1001350, Func Offset: 0
	// Line 120, Address: 0x100135c, Func Offset: 0xc
	// Func End, Address: 0x1001364, Func Offset: 0x14
}

// 
// Start address: 0x1001370
void flick_set()
{
	_anon0* pNewActwk;
	// Line 125, Address: 0x1001370, Func Offset: 0
	// Line 128, Address: 0x1001378, Func Offset: 0x8
	// Line 130, Address: 0x1001394, Func Offset: 0x24
	// Line 132, Address: 0x10013a0, Func Offset: 0x30
	// Func End, Address: 0x10013b0, Func Offset: 0x40
}

// 
// Start address: 0x10013b0
void pocky_set()
{
	_anon0* pNewActwk;
	// Line 137, Address: 0x10013b0, Func Offset: 0
	// Line 140, Address: 0x10013b8, Func Offset: 0x8
	// Line 142, Address: 0x10013d4, Func Offset: 0x24
	// Line 144, Address: 0x10013e0, Func Offset: 0x30
	// Func End, Address: 0x10013f0, Func Offset: 0x40
}

// 
// Start address: 0x10013f0
void pecky_set()
{
	_anon0* pNewActwk;
	// Line 149, Address: 0x10013f0, Func Offset: 0
	// Line 152, Address: 0x10013f8, Func Offset: 0x8
	// Line 154, Address: 0x1001414, Func Offset: 0x24
	// Line 156, Address: 0x1001420, Func Offset: 0x30
	// Func End, Address: 0x1001430, Func Offset: 0x40
}

// 
// Start address: 0x1001430
void ricky_set()
{
	_anon0* pNewActwk;
	// Line 161, Address: 0x1001430, Func Offset: 0
	// Line 164, Address: 0x1001438, Func Offset: 0x8
	// Line 166, Address: 0x1001454, Func Offset: 0x24
	// Line 168, Address: 0x1001460, Func Offset: 0x30
	// Func End, Address: 0x1001470, Func Offset: 0x40
}

// 
// Start address: 0x1001470
void inco_set()
{
	_anon0* pNewActwk;
	// Line 173, Address: 0x1001470, Func Offset: 0
	// Line 176, Address: 0x1001478, Func Offset: 0x8
	// Line 178, Address: 0x1001494, Func Offset: 0x24
	// Line 180, Address: 0x10014a0, Func Offset: 0x30
	// Func End, Address: 0x10014b0, Func Offset: 0x40
}

// 
// Start address: 0x10014b0
void hato_set()
{
	_anon0* pNewActwk;
	// Line 185, Address: 0x10014b0, Func Offset: 0
	// Line 188, Address: 0x10014b8, Func Offset: 0x8
	// Line 190, Address: 0x10014d4, Func Offset: 0x24
	// Line 192, Address: 0x10014e0, Func Offset: 0x30
	// Func End, Address: 0x10014f0, Func Offset: 0x40
}

// 
// Start address: 0x10014f0
void sheep_set()
{
	_anon0* pNewActwk;
	// Line 197, Address: 0x10014f0, Func Offset: 0
	// Line 200, Address: 0x10014f8, Func Offset: 0x8
	// Line 202, Address: 0x1001514, Func Offset: 0x24
	// Line 204, Address: 0x1001520, Func Offset: 0x30
	// Func End, Address: 0x1001530, Func Offset: 0x40
}

