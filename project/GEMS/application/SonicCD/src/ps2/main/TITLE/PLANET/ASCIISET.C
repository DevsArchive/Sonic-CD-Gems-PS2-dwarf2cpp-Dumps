typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;

typedef void(*type_3)(_anon1*);
typedef void(*type_6)(_anon1*, _anon1*);

typedef short type_0[0];
typedef _anon0 type_1[2];
typedef _anon3 type_2[10];
typedef void(*type_4)(_anon1*)[3];
typedef _anon1 type_5[18];
typedef void(*type_7)(_anon1*, _anon1*)[4];
typedef _anon4* type_8[0];

struct _anon0
{
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon1
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
	unsigned char timer1;
	unsigned char timer2;
};

struct _anon2
{
	short mapnum;
	_anon0 aMapDat[2];
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

union _anon8
{
	unsigned short w;
	_anon9 b;
};

struct _anon9
{
	unsigned char l;
	unsigned char h;
};

_anon1 actwk[18];
unsigned char bit_SPACE;
unsigned char space_flg;
unsigned char music_selflg;
unsigned char comflag_m;
unsigned char push_flg;
_anon8 swdata1;
unsigned short comdata_m5;
short lplanet_no;
short ascii_xposi_tbl[0];
unsigned short comdata_m4;
unsigned char actset_flg;
_anon4* asciispr_tbl[0];

void sprascii();
void ascchk(_anon1* pActwk);
void set_music(_anon1* pActwk);
void ascset(_anon1* pActwk);
void ascchg();
void set_asciicg();
void ascii_sprite(_anon1* pActwk);
void ascspr_init(_anon1* pActwk, _anon1* pAscwk);
void ascspr_set(_anon1* pActwk);
void ascspr_chk(_anon1* pActwk);
void ascspr_exit(_anon1* pActwk, _anon1* pAscwk);

// 
// Start address: 0x10005d0
void sprascii()
{
	_anon1* pAsciiWk;
	void(*ascsprtbl)(_anon1*)[3];
	// Line 62, Address: 0x10005d0, Func Offset: 0
	// Line 72, Address: 0x10005dc, Func Offset: 0xc
	// Line 74, Address: 0x10005e4, Func Offset: 0x14
	// Line 75, Address: 0x10005ec, Func Offset: 0x1c
	// Line 76, Address: 0x1000614, Func Offset: 0x44
	// Func End, Address: 0x1000628, Func Offset: 0x58
}

// 
// Start address: 0x1000630
void ascchk(_anon1* pActwk)
{
	// Line 83, Address: 0x1000630, Func Offset: 0
	// Line 84, Address: 0x100063c, Func Offset: 0xc
	// Line 87, Address: 0x1000654, Func Offset: 0x24
	// Line 89, Address: 0x100066c, Func Offset: 0x3c
	// Line 91, Address: 0x1000684, Func Offset: 0x54
	// Line 92, Address: 0x1000698, Func Offset: 0x68
	// Line 93, Address: 0x10006a0, Func Offset: 0x70
	// Line 95, Address: 0x10006b8, Func Offset: 0x88
	// Line 96, Address: 0x10006cc, Func Offset: 0x9c
	// Line 97, Address: 0x10006d8, Func Offset: 0xa8
	// Line 103, Address: 0x10006e0, Func Offset: 0xb0
	// Line 106, Address: 0x10006f4, Func Offset: 0xc4
	// Line 108, Address: 0x100070c, Func Offset: 0xdc
	// Line 110, Address: 0x1000724, Func Offset: 0xf4
	// Line 111, Address: 0x100073c, Func Offset: 0x10c
	// Line 112, Address: 0x1000750, Func Offset: 0x120
	// Line 113, Address: 0x1000758, Func Offset: 0x128
	// Line 115, Address: 0x1000770, Func Offset: 0x140
	// Line 116, Address: 0x1000784, Func Offset: 0x154
	// Line 117, Address: 0x1000790, Func Offset: 0x160
	// Line 123, Address: 0x1000798, Func Offset: 0x168
	// Line 126, Address: 0x10007ac, Func Offset: 0x17c
	// Line 129, Address: 0x10007c4, Func Offset: 0x194
	// Line 131, Address: 0x10007dc, Func Offset: 0x1ac
	// Line 133, Address: 0x10007f4, Func Offset: 0x1c4
	// Line 134, Address: 0x1000808, Func Offset: 0x1d8
	// Line 135, Address: 0x100081c, Func Offset: 0x1ec
	// Line 136, Address: 0x1000830, Func Offset: 0x200
	// Line 137, Address: 0x1000838, Func Offset: 0x208
	// Line 139, Address: 0x1000850, Func Offset: 0x220
	// Line 140, Address: 0x1000864, Func Offset: 0x234
	// Line 141, Address: 0x1000870, Func Offset: 0x240
	// Line 144, Address: 0x1000878, Func Offset: 0x248
	// Line 146, Address: 0x1000890, Func Offset: 0x260
	// Line 148, Address: 0x10008a0, Func Offset: 0x270
	// Line 149, Address: 0x10008b4, Func Offset: 0x284
	// Line 150, Address: 0x10008c8, Func Offset: 0x298
	// Line 154, Address: 0x10008d4, Func Offset: 0x2a4
	// Line 157, Address: 0x10008dc, Func Offset: 0x2ac
	// Line 161, Address: 0x10008f0, Func Offset: 0x2c0
	// Line 163, Address: 0x1000904, Func Offset: 0x2d4
	// Line 165, Address: 0x100091c, Func Offset: 0x2ec
	// Line 167, Address: 0x1000934, Func Offset: 0x304
	// Line 168, Address: 0x1000948, Func Offset: 0x318
	// Line 169, Address: 0x100095c, Func Offset: 0x32c
	// Line 170, Address: 0x1000964, Func Offset: 0x334
	// Line 171, Address: 0x100096c, Func Offset: 0x33c
	// Line 173, Address: 0x1000984, Func Offset: 0x354
	// Line 174, Address: 0x100098c, Func Offset: 0x35c
	// Line 175, Address: 0x1000998, Func Offset: 0x368
	// Line 178, Address: 0x10009a0, Func Offset: 0x370
	// Line 180, Address: 0x10009b8, Func Offset: 0x388
	// Line 182, Address: 0x10009c8, Func Offset: 0x398
	// Line 183, Address: 0x10009dc, Func Offset: 0x3ac
	// Line 184, Address: 0x10009f0, Func Offset: 0x3c0
	// Line 187, Address: 0x10009fc, Func Offset: 0x3cc
	// Line 190, Address: 0x1000a04, Func Offset: 0x3d4
	// Line 195, Address: 0x1000a18, Func Offset: 0x3e8
	// Func End, Address: 0x1000a28, Func Offset: 0x3f8
}

// 
// Start address: 0x1000a30
void set_music(_anon1* pActwk)
{
	short MusicNo;
	short PlanetNo;
	// Line 202, Address: 0x1000a30, Func Offset: 0
	// Line 205, Address: 0x1000a40, Func Offset: 0x10
	// Line 206, Address: 0x1000a48, Func Offset: 0x18
	// Line 207, Address: 0x1000a58, Func Offset: 0x28
	// Line 208, Address: 0x1000a60, Func Offset: 0x30
	// Line 209, Address: 0x1000a88, Func Offset: 0x58
	// Line 210, Address: 0x1000aa4, Func Offset: 0x74
	// Line 211, Address: 0x1000aac, Func Offset: 0x7c
	// Line 212, Address: 0x1000ac0, Func Offset: 0x90
	// Line 214, Address: 0x1000ad4, Func Offset: 0xa4
	// Func End, Address: 0x1000ae8, Func Offset: 0xb8
}

// 
// Start address: 0x1000af0
void ascset(_anon1* pActwk)
{
	_anon1* pFreeAct;
	// Line 221, Address: 0x1000af0, Func Offset: 0
	// Line 224, Address: 0x1000afc, Func Offset: 0xc
	// Line 226, Address: 0x1000b10, Func Offset: 0x20
	// Line 227, Address: 0x1000b48, Func Offset: 0x58
	// Line 228, Address: 0x1000b5c, Func Offset: 0x6c
	// Line 231, Address: 0x1000b68, Func Offset: 0x78
	// Func End, Address: 0x1000b78, Func Offset: 0x88
}

// 
// Start address: 0x1000b80
void ascchg()
{
	// Line 238, Address: 0x1000b80, Func Offset: 0
	// Line 240, Address: 0x1000b84, Func Offset: 0x4
	// Func End, Address: 0x1000b90, Func Offset: 0x10
}

// 
// Start address: 0x1000b90
void set_asciicg()
{
	_anon1* pStringwk;
	// Line 247, Address: 0x1000b90, Func Offset: 0
	// Line 250, Address: 0x1000b98, Func Offset: 0x8
	// Line 252, Address: 0x1000bb0, Func Offset: 0x20
	// Line 253, Address: 0x1000bd8, Func Offset: 0x48
	// Line 254, Address: 0x1000be0, Func Offset: 0x50
	// Line 255, Address: 0x1000bf4, Func Offset: 0x64
	// Line 257, Address: 0x1000c0c, Func Offset: 0x7c
	// Line 258, Address: 0x1000c20, Func Offset: 0x90
	// Line 259, Address: 0x1000c28, Func Offset: 0x98
	// Line 262, Address: 0x1000c30, Func Offset: 0xa0
	// Line 263, Address: 0x1000c38, Func Offset: 0xa8
	// Line 267, Address: 0x1000c4c, Func Offset: 0xbc
	// Func End, Address: 0x1000c5c, Func Offset: 0xcc
}

// 
// Start address: 0x1000c60
void ascii_sprite(_anon1* pActwk)
{
	void(*acttbl)(_anon1*, _anon1*)[4];
	// Line 274, Address: 0x1000c60, Func Offset: 0
	// Line 282, Address: 0x1000c6c, Func Offset: 0xc
	// Line 284, Address: 0x1000ca0, Func Offset: 0x40
	// Func End, Address: 0x1000cb0, Func Offset: 0x50
}

// 
// Start address: 0x1000cb0
void ascspr_init(_anon1* pActwk, _anon1* pAscwk)
{
	// Line 292, Address: 0x1000cb0, Func Offset: 0
	// Line 293, Address: 0x1000cbc, Func Offset: 0xc
	// Line 294, Address: 0x1000cc4, Func Offset: 0x14
	// Line 295, Address: 0x1000cec, Func Offset: 0x3c
	// Line 297, Address: 0x1000d08, Func Offset: 0x58
	// Line 298, Address: 0x1000d14, Func Offset: 0x64
	// Line 299, Address: 0x1000d20, Func Offset: 0x70
	// Line 300, Address: 0x1000d30, Func Offset: 0x80
	// Line 303, Address: 0x1000d38, Func Offset: 0x88
	// Line 304, Address: 0x1000d44, Func Offset: 0x94
	// Line 305, Address: 0x1000d50, Func Offset: 0xa0
	// Line 307, Address: 0x1000d60, Func Offset: 0xb0
	// Line 308, Address: 0x1000d70, Func Offset: 0xc0
	// Line 309, Address: 0x1000d7c, Func Offset: 0xcc
	// Line 310, Address: 0x1000dac, Func Offset: 0xfc
	// Line 311, Address: 0x1000dbc, Func Offset: 0x10c
	// Line 312, Address: 0x1000dc8, Func Offset: 0x118
	// Line 314, Address: 0x1000dd0, Func Offset: 0x120
	// Func End, Address: 0x1000ddc, Func Offset: 0x12c
}

// 
// Start address: 0x1000de0
void ascspr_set(_anon1* pActwk)
{
	// Line 322, Address: 0x1000de0, Func Offset: 0
	// Line 323, Address: 0x1000de8, Func Offset: 0x8
	// Line 324, Address: 0x1000e00, Func Offset: 0x20
	// Line 327, Address: 0x1000e88, Func Offset: 0xa8
	// Line 328, Address: 0x1000e90, Func Offset: 0xb0
	// Line 329, Address: 0x1000ea0, Func Offset: 0xc0
	// Line 332, Address: 0x1000eac, Func Offset: 0xcc
	// Func End, Address: 0x1000eb8, Func Offset: 0xd8
}

// 
// Start address: 0x1000ec0
void ascspr_chk(_anon1* pActwk)
{
	// Line 340, Address: 0x1000ec0, Func Offset: 0
	// Line 341, Address: 0x1000ec8, Func Offset: 0x8
	// Line 343, Address: 0x1000ee0, Func Offset: 0x20
	// Line 344, Address: 0x1000eec, Func Offset: 0x2c
	// Line 345, Address: 0x1000ef8, Func Offset: 0x38
	// Line 347, Address: 0x1000f08, Func Offset: 0x48
	// Line 349, Address: 0x1000f20, Func Offset: 0x60
	// Line 350, Address: 0x1000f2c, Func Offset: 0x6c
	// Line 351, Address: 0x1000f38, Func Offset: 0x78
	// Line 354, Address: 0x1000f48, Func Offset: 0x88
	// Func End, Address: 0x1000f54, Func Offset: 0x94
}

// 
// Start address: 0x1000f60
void ascspr_exit(_anon1* pActwk, _anon1* pAscwk)
{
	// Line 362, Address: 0x1000f60, Func Offset: 0
	// Line 363, Address: 0x1000f6c, Func Offset: 0xc
	// Line 364, Address: 0x1000f84, Func Offset: 0x24
	// Line 366, Address: 0x1000f9c, Func Offset: 0x3c
	// Line 368, Address: 0x1000fb8, Func Offset: 0x58
	// Line 369, Address: 0x1000fcc, Func Offset: 0x6c
	// Line 370, Address: 0x1000fe0, Func Offset: 0x80
	// Line 371, Address: 0x1000ffc, Func Offset: 0x9c
	// Line 372, Address: 0x100100c, Func Offset: 0xac
	// Line 374, Address: 0x1001038, Func Offset: 0xd8
	// Line 377, Address: 0x1001040, Func Offset: 0xe0
	// Line 379, Address: 0x100105c, Func Offset: 0xfc
	// Line 380, Address: 0x1001070, Func Offset: 0x110
	// Line 381, Address: 0x1001080, Func Offset: 0x120
	// Line 382, Address: 0x100109c, Func Offset: 0x13c
	// Line 383, Address: 0x10010ac, Func Offset: 0x14c
	// Line 387, Address: 0x10010e4, Func Offset: 0x184
	// Func End, Address: 0x10010f0, Func Offset: 0x190
}

