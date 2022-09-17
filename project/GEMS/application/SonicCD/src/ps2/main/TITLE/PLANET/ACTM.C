typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_0)(_anon0*);
typedef void(*type_2)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_4)(void*, unsigned char, int);

typedef void(*type_1)(_anon0*)[31];
typedef _anon5 type_3[2];
typedef _anon7 type_5[10];
typedef _anon0 type_6[18];

struct _anon0
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon1 XPOSI;
	_anon1 YPOSI;
	_anon1 X_SPEED;
	_anon1 Y_SPEED;
	_anon1 X_ACCEL;
	_anon1 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon2* PAT_ADR;
	unsigned char SPR_FLG;
	unsigned char ACT_FLG;
	short END_XPOSI;
	short END_YPOSI;
	short X_WIDE;
	short Y_WIDE;
	unsigned char timer1;
	unsigned char timer2;
};

union _anon1
{
	int l;
	_anon3 w;
	_anon4 b;
};

struct _anon2
{
	short patnum;
	_anon7 aPatDat[10];
};

struct _anon3
{
	short l;
	short h;
};

struct _anon4
{
	char b4;
	char b3;
	char b2;
	char b1;
};

struct _anon5
{
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon6
{
	short mapnum;
	_anon5 aMapDat[2];
};

struct _anon7
{
	short timer;
	_anon6* paMapTbl;
};

_anon0 actwk[18];
void(*act_tbl)(_anon0*)[31];
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
unsigned short LinkData;
void(*sMemSet)(void*, unsigned char, int);
unsigned char actset_flg;

int get_actwk(_anon0** ppFreeAct);
int chk_actwk();
void action();
void actloop(_anon0* pActwk);
void priact(_anon0* pActwk, int ActNo);
void dummy(_anon0* pActwk);
void spr_set();
void pattern_chg(_anon0* pActwk, _anon2* pPatTbl);

// 
// Start address: 0x1000000
int get_actwk(_anon0** ppFreeAct)
{
	int i;
	_anon0* pChkAct;
	// Line 46, Address: 0x1000000, Func Offset: 0
	// Line 50, Address: 0x1000010, Func Offset: 0x10
	// Line 51, Address: 0x1000014, Func Offset: 0x14
	// Line 54, Address: 0x100001c, Func Offset: 0x1c
	// Line 56, Address: 0x100002c, Func Offset: 0x2c
	// Line 57, Address: 0x1000034, Func Offset: 0x34
	// Line 59, Address: 0x1000040, Func Offset: 0x40
	// Line 60, Address: 0x1000044, Func Offset: 0x44
	// Line 61, Address: 0x1000050, Func Offset: 0x50
	// Line 62, Address: 0x1000054, Func Offset: 0x54
	// Func End, Address: 0x1000068, Func Offset: 0x68
}

// 
// Start address: 0x1000070
int chk_actwk()
{
	int i;
	_anon0* pChkAct;
	// Line 69, Address: 0x1000070, Func Offset: 0
	// Line 73, Address: 0x100007c, Func Offset: 0xc
	// Line 74, Address: 0x1000080, Func Offset: 0x10
	// Line 77, Address: 0x1000088, Func Offset: 0x18
	// Line 78, Address: 0x10000a4, Func Offset: 0x34
	// Line 79, Address: 0x10000a8, Func Offset: 0x38
	// Line 80, Address: 0x10000b4, Func Offset: 0x44
	// Line 81, Address: 0x10000b8, Func Offset: 0x48
	// Func End, Address: 0x10000cc, Func Offset: 0x5c
}

// 
// Start address: 0x10000d0
void action()
{
	unsigned short i;
	// Line 128, Address: 0x10000d0, Func Offset: 0
	// Line 131, Address: 0x10000dc, Func Offset: 0xc
	// Line 133, Address: 0x10000e4, Func Offset: 0x14
	// Line 135, Address: 0x10000f4, Func Offset: 0x24
	// Line 136, Address: 0x10000fc, Func Offset: 0x2c
	// Line 138, Address: 0x100014c, Func Offset: 0x7c
	// Func End, Address: 0x1000160, Func Offset: 0x90
}

// 
// Start address: 0x1000160
void actloop(_anon0* pActwk)
{
	int i;
	int ActNo;
	// Line 140, Address: 0x1000160, Func Offset: 0
	// Line 143, Address: 0x1000174, Func Offset: 0x14
	// Line 146, Address: 0x1000178, Func Offset: 0x18
	// Line 147, Address: 0x100019c, Func Offset: 0x3c
	// Line 148, Address: 0x10001a8, Func Offset: 0x48
	// Line 150, Address: 0x10001b4, Func Offset: 0x54
	// Func End, Address: 0x10001cc, Func Offset: 0x6c
}

// 
// Start address: 0x10001d0
void priact(_anon0* pActwk, int ActNo)
{
	// Line 152, Address: 0x10001d0, Func Offset: 0
	// Line 153, Address: 0x10001e0, Func Offset: 0x10
	// Line 154, Address: 0x1000208, Func Offset: 0x38
	// Line 156, Address: 0x100023c, Func Offset: 0x6c
	// Func End, Address: 0x100024c, Func Offset: 0x7c
}

// 
// Start address: 0x1000250
void dummy(_anon0* pActwk)
{
	// Line 158, Address: 0x1000250, Func Offset: 0
	// Line 159, Address: 0x1000258, Func Offset: 0x8
	// Line 160, Address: 0x1000274, Func Offset: 0x24
	// Line 162, Address: 0x1000284, Func Offset: 0x34
	// Func End, Address: 0x1000290, Func Offset: 0x40
}

// 
// Start address: 0x1000290
void spr_set()
{
	int i;
	int j;
	_anon0* pActwk;
	_anon2* pPatTbl;
	_anon5* pMapDat;
	short xpos;
	short ypos;
	unsigned short RevFlg;
	// Line 170, Address: 0x1000290, Func Offset: 0
	// Line 178, Address: 0x10002b8, Func Offset: 0x28
	// Line 179, Address: 0x10002c0, Func Offset: 0x30
	// Line 180, Address: 0x10002c8, Func Offset: 0x38
	// Line 182, Address: 0x10002d4, Func Offset: 0x44
	// Line 183, Address: 0x10002e4, Func Offset: 0x54
	// Line 184, Address: 0x10002f0, Func Offset: 0x60
	// Line 185, Address: 0x1000300, Func Offset: 0x70
	// Line 186, Address: 0x1000324, Func Offset: 0x94
	// Line 187, Address: 0x1000340, Func Offset: 0xb0
	// Line 189, Address: 0x100034c, Func Offset: 0xbc
	// Line 190, Address: 0x1000350, Func Offset: 0xc0
	// Line 191, Address: 0x100035c, Func Offset: 0xcc
	// Line 193, Address: 0x1000370, Func Offset: 0xe0
	// Line 194, Address: 0x1000378, Func Offset: 0xe8
	// Line 195, Address: 0x1000388, Func Offset: 0xf8
	// Line 198, Address: 0x1000390, Func Offset: 0x100
	// Line 200, Address: 0x10003a0, Func Offset: 0x110
	// Line 201, Address: 0x10003ac, Func Offset: 0x11c
	// Line 203, Address: 0x10003c0, Func Offset: 0x130
	// Line 204, Address: 0x10003c8, Func Offset: 0x138
	// Line 205, Address: 0x10003d8, Func Offset: 0x148
	// Line 208, Address: 0x10003e0, Func Offset: 0x150
	// Line 210, Address: 0x10003f0, Func Offset: 0x160
	// Line 211, Address: 0x1000400, Func Offset: 0x170
	// Line 212, Address: 0x100041c, Func Offset: 0x18c
	// Line 213, Address: 0x1000468, Func Offset: 0x1d8
	// Line 214, Address: 0x1000490, Func Offset: 0x200
	// Line 215, Address: 0x10004a0, Func Offset: 0x210
	// Line 216, Address: 0x10004c8, Func Offset: 0x238
	// Func End, Address: 0x10004f8, Func Offset: 0x268
}

// 
// Start address: 0x1000500
void pattern_chg(_anon0* pActwk, _anon2* pPatTbl)
{
	short PatNoWk;
	// Line 224, Address: 0x1000500, Func Offset: 0
	// Line 227, Address: 0x1000510, Func Offset: 0x10
	// Line 229, Address: 0x1000538, Func Offset: 0x38
	// Line 230, Address: 0x100058c, Func Offset: 0x8c
	// Line 231, Address: 0x1000594, Func Offset: 0x94
	// Line 234, Address: 0x10005b4, Func Offset: 0xb4
	// Func End, Address: 0x10005c4, Func Offset: 0xc4
}

