typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_7)(_anon0*);
typedef void(*type_9)(void*, unsigned char, int);

typedef _anon0* type_0[64];
typedef _anon0* type_1[64];
typedef _anon0* type_2[64];
typedef _anon0* type_3[64];
typedef _anon0** type_4[4];
typedef unsigned char type_5[8];
typedef void(*type_8)(_anon0*)[31];
typedef _anon5 type_10[2];
typedef _anon7 type_11[10];
typedef _anon0 type_12[66];

struct _anon0
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon2 XPOSI;
	_anon2 YPOSI;
	_anon2 X_SPEED;
	_anon2 Y_SPEED;
	_anon2 X_ACCEL;
	_anon2 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon1* PAT_ADR;
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
	short patnum;
	_anon7 aPatDat[10];
};

union _anon2
{
	int l;
	_anon3 w;
	_anon4 b;
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

void(*act_tbl)(_anon0*)[31];
_anon0 actwk[66];
_anon0** priptr[4];
_anon0* pribuf0[64];
_anon0* pribuf3[64];
_anon0* pribuf2[64];
_anon0* pribuf1[64];
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
unsigned short LinkData;
void(*sMemSet)(void*, unsigned char, int);

short get_actwk(_anon0** pNewActwk);
short chk_actwk();
void priset();
void action();
void actloop(short id);
void priact(_anon0* pActwk, short ActNo);
void dummy(_anon0* pActwk);
void spr_set();
void pattern_chg(_anon0* pActwk, _anon1* pPatTbl);
void clrwork(_anon0* pActwk);
void action_all_clr();

// 
// Start address: 0x1000000
short get_actwk(_anon0** pNewActwk)
{
	_anon0* pActwk;
	short i;
	// Line 82, Address: 0x1000000, Func Offset: 0
	// Line 86, Address: 0x1000010, Func Offset: 0x10
	// Line 88, Address: 0x100001c, Func Offset: 0x1c
	// Line 89, Address: 0x1000040, Func Offset: 0x40
	// Line 91, Address: 0x1000050, Func Offset: 0x50
	// Line 92, Address: 0x1000058, Func Offset: 0x58
	// Line 94, Address: 0x1000064, Func Offset: 0x64
	// Line 95, Address: 0x1000084, Func Offset: 0x84
	// Line 96, Address: 0x1000088, Func Offset: 0x88
	// Func End, Address: 0x100009c, Func Offset: 0x9c
}

// 
// Start address: 0x10000a0
short chk_actwk()
{
	_anon0* pActwk;
	short i;
	// Line 102, Address: 0x10000a0, Func Offset: 0
	// Line 106, Address: 0x10000ac, Func Offset: 0xc
	// Line 108, Address: 0x10000b8, Func Offset: 0x18
	// Line 109, Address: 0x10000d8, Func Offset: 0x38
	// Line 111, Address: 0x10000e8, Func Offset: 0x48
	// Line 113, Address: 0x10000f4, Func Offset: 0x54
	// Line 114, Address: 0x1000114, Func Offset: 0x74
	// Line 115, Address: 0x1000118, Func Offset: 0x78
	// Func End, Address: 0x100012c, Func Offset: 0x8c
}

// 
// Start address: 0x1000130
void priset()
{
	_anon0*** a1;
	_anon0*** a2;
	_anon0** a3;
	_anon0* pActwk;
	short i;
	// Line 120, Address: 0x1000130, Func Offset: 0
	// Line 127, Address: 0x1000148, Func Offset: 0x18
	// Line 128, Address: 0x1000150, Func Offset: 0x20
	// Line 129, Address: 0x1000160, Func Offset: 0x30
	// Line 130, Address: 0x1000170, Func Offset: 0x40
	// Line 131, Address: 0x1000180, Func Offset: 0x50
	// Line 133, Address: 0x1000190, Func Offset: 0x60
	// Line 134, Address: 0x1000198, Func Offset: 0x68
	// Line 135, Address: 0x10001a0, Func Offset: 0x70
	// Line 136, Address: 0x10001a8, Func Offset: 0x78
	// Line 138, Address: 0x10001b0, Func Offset: 0x80
	// Line 140, Address: 0x10001bc, Func Offset: 0x8c
	// Line 141, Address: 0x10001dc, Func Offset: 0xac
	// Line 143, Address: 0x10001e8, Func Offset: 0xb8
	// Line 144, Address: 0x1000200, Func Offset: 0xd0
	// Line 145, Address: 0x1000204, Func Offset: 0xd4
	// Line 146, Address: 0x1000210, Func Offset: 0xe0
	// Line 147, Address: 0x1000214, Func Offset: 0xe4
	// Line 149, Address: 0x1000218, Func Offset: 0xe8
	// Line 150, Address: 0x1000238, Func Offset: 0x108
	// Func End, Address: 0x1000258, Func Offset: 0x128
}

// 
// Start address: 0x1000260
void action()
{
	short i;
	// Line 155, Address: 0x1000260, Func Offset: 0
	// Line 158, Address: 0x100026c, Func Offset: 0xc
	// Line 159, Address: 0x1000278, Func Offset: 0x18
	// Line 160, Address: 0x1000280, Func Offset: 0x20
	// Line 161, Address: 0x1000288, Func Offset: 0x28
	// Line 162, Address: 0x10002e4, Func Offset: 0x84
	// Func End, Address: 0x10002f8, Func Offset: 0x98
}

// 
// Start address: 0x1000300
void actloop(short id)
{
	_anon0* pActwk;
	short i;
	// Line 167, Address: 0x1000300, Func Offset: 0
	// Line 171, Address: 0x1000314, Func Offset: 0x14
	// Line 173, Address: 0x1000320, Func Offset: 0x20
	// Line 174, Address: 0x100034c, Func Offset: 0x4c
	// Line 176, Address: 0x1000358, Func Offset: 0x58
	// Line 178, Address: 0x1000370, Func Offset: 0x70
	// Line 179, Address: 0x1000390, Func Offset: 0x90
	// Func End, Address: 0x10003a8, Func Offset: 0xa8
}

// 
// Start address: 0x10003b0
void priact(_anon0* pActwk, short ActNo)
{
	// Line 184, Address: 0x10003b0, Func Offset: 0
	// Line 185, Address: 0x10003c0, Func Offset: 0x10
	// Line 186, Address: 0x10003f0, Func Offset: 0x40
	// Line 188, Address: 0x1000408, Func Offset: 0x58
	// Line 190, Address: 0x1000424, Func Offset: 0x74
	// Func End, Address: 0x1000434, Func Offset: 0x84
}

// 
// Start address: 0x1000440
void dummy(_anon0* pActwk)
{
	// Line 195, Address: 0x1000440, Func Offset: 0
	// Line 196, Address: 0x1000448, Func Offset: 0x8
	// Line 197, Address: 0x1000450, Func Offset: 0x10
	// Func End, Address: 0x100045c, Func Offset: 0x1c
}

// 
// Start address: 0x1000460
void spr_set()
{
	_anon0* pActwk;
	_anon0** pPribuf;
	_anon1* pPatTbl;
	_anon5* pMapDat;
	short pri;
	short i;
	short j;
	short xpos;
	short ypos;
	unsigned short RevFlg;
	// Line 202, Address: 0x1000460, Func Offset: 0
	// Line 211, Address: 0x100048c, Func Offset: 0x2c
	// Line 212, Address: 0x1000494, Func Offset: 0x34
	// Line 213, Address: 0x10004a4, Func Offset: 0x44
	// Line 214, Address: 0x10004b4, Func Offset: 0x54
	// Line 215, Address: 0x10004c4, Func Offset: 0x64
	// Line 217, Address: 0x10004d4, Func Offset: 0x74
	// Line 219, Address: 0x10004e0, Func Offset: 0x80
	// Line 220, Address: 0x10004fc, Func Offset: 0x9c
	// Line 222, Address: 0x1000508, Func Offset: 0xa8
	// Line 223, Address: 0x1000514, Func Offset: 0xb4
	// Line 224, Address: 0x1000520, Func Offset: 0xc0
	// Line 226, Address: 0x1000530, Func Offset: 0xd0
	// Line 227, Address: 0x1000534, Func Offset: 0xd4
	// Line 229, Address: 0x1000544, Func Offset: 0xe4
	// Line 230, Address: 0x1000568, Func Offset: 0x108
	// Line 232, Address: 0x1000584, Func Offset: 0x124
	// Line 234, Address: 0x100058c, Func Offset: 0x12c
	// Line 235, Address: 0x1000590, Func Offset: 0x130
	// Line 236, Address: 0x100059c, Func Offset: 0x13c
	// Line 238, Address: 0x10005b0, Func Offset: 0x150
	// Line 239, Address: 0x10005c0, Func Offset: 0x160
	// Line 240, Address: 0x10005c8, Func Offset: 0x168
	// Line 243, Address: 0x10005d0, Func Offset: 0x170
	// Line 245, Address: 0x10005e0, Func Offset: 0x180
	// Line 246, Address: 0x10005ec, Func Offset: 0x18c
	// Line 247, Address: 0x10005f8, Func Offset: 0x198
	// Line 249, Address: 0x100060c, Func Offset: 0x1ac
	// Line 250, Address: 0x100061c, Func Offset: 0x1bc
	// Line 251, Address: 0x1000624, Func Offset: 0x1c4
	// Line 254, Address: 0x100062c, Func Offset: 0x1cc
	// Line 256, Address: 0x100063c, Func Offset: 0x1dc
	// Line 257, Address: 0x1000648, Func Offset: 0x1e8
	// Line 258, Address: 0x1000658, Func Offset: 0x1f8
	// Line 260, Address: 0x100066c, Func Offset: 0x20c
	// Line 262, Address: 0x1000674, Func Offset: 0x214
	// Line 263, Address: 0x10006a0, Func Offset: 0x240
	// Line 264, Address: 0x10006c8, Func Offset: 0x268
	// Line 265, Address: 0x10006e8, Func Offset: 0x288
	// Line 266, Address: 0x100070c, Func Offset: 0x2ac
	// Line 267, Address: 0x100072c, Func Offset: 0x2cc
	// Func End, Address: 0x1000760, Func Offset: 0x300
}

// 
// Start address: 0x1000760
void pattern_chg(_anon0* pActwk, _anon1* pPatTbl)
{
	short d0;
	// Line 272, Address: 0x1000760, Func Offset: 0
	// Line 275, Address: 0x1000770, Func Offset: 0x10
	// Line 276, Address: 0x1000780, Func Offset: 0x20
	// Line 278, Address: 0x1000798, Func Offset: 0x38
	// Line 279, Address: 0x10007a8, Func Offset: 0x48
	// Line 280, Address: 0x10007b4, Func Offset: 0x54
	// Line 282, Address: 0x10007d8, Func Offset: 0x78
	// Line 284, Address: 0x10007dc, Func Offset: 0x7c
	// Line 285, Address: 0x10007e4, Func Offset: 0x84
	// Line 287, Address: 0x1000804, Func Offset: 0xa4
	// Func End, Address: 0x1000814, Func Offset: 0xb4
}

// 
// Start address: 0x1000820
void clrwork(_anon0* pActwk)
{
	// Line 292, Address: 0x1000820, Func Offset: 0
	// Line 293, Address: 0x100082c, Func Offset: 0xc
	// Line 294, Address: 0x1000848, Func Offset: 0x28
	// Func End, Address: 0x1000858, Func Offset: 0x38
}

// 
// Start address: 0x1000860
void action_all_clr()
{
	short i;
	// Line 299, Address: 0x1000860, Func Offset: 0
	// Line 302, Address: 0x100086c, Func Offset: 0xc
	// Line 304, Address: 0x1000878, Func Offset: 0x18
	// Line 305, Address: 0x10008b0, Func Offset: 0x50
	// Line 306, Address: 0x10008d0, Func Offset: 0x70
	// Func End, Address: 0x10008e4, Func Offset: 0x84
}

