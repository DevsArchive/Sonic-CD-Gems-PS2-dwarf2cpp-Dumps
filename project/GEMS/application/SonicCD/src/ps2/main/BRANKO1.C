typedef struct _anon0;
typedef struct _anon1;
typedef struct brankodata;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_3)(_anon1*);

typedef _anon9 type_0[20];
typedef _anon9 type_1[0];
typedef brankodata type_2[8];
typedef void(*type_4)(_anon1*)[2];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];
typedef _anon0* type_8[3];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon2 xposi;
	_anon2 yposi;
	_anon5 xspeed;
	_anon5 yspeed;
	_anon5 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon5 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon5 direc;
	_anon5 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct brankodata
{
	short angle;
	short accel;
	short area1;
	short area2;
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

union _anon5
{
	short w;
	_anon6 b;
};

struct _anon6
{
	char l;
	char h;
};

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon0 pat0;
_anon0 pat1;
_anon0 pat2;
_anon0* branko1pat[3];
void(*branko1_move_tbl)(_anon1*)[2];
brankodata branko1_initbl[8];
_anon1 actwk[128];

void branko1(_anon1* pActwk);
void branko1_init(_anon1* pActwk);
void branko1_move(_anon1* pActwk);
void branko1_posiset(_anon1* pActwk);
void branko1_ridechk(_anon1* pActwk);

// 
// Start address: 0x1028580
void branko1(_anon1* pActwk)
{
	// Line 103, Address: 0x1028580, Func Offset: 0
	// Line 104, Address: 0x102858c, Func Offset: 0xc
	// Line 105, Address: 0x10285d0, Func Offset: 0x50
	// Line 106, Address: 0x10285dc, Func Offset: 0x5c
	// Line 107, Address: 0x10285f0, Func Offset: 0x70
	// Func End, Address: 0x1028600, Func Offset: 0x80
}

// 
// Start address: 0x1028600
void branko1_init(_anon1* pActwk)
{
	int i;
	unsigned char knum;
	_anon1* pNewact;
	// Line 132, Address: 0x1028600, Func Offset: 0
	// Line 137, Address: 0x1028614, Func Offset: 0x14
	// Line 138, Address: 0x1028624, Func Offset: 0x24
	// Line 139, Address: 0x1028634, Func Offset: 0x34
	// Line 140, Address: 0x1028640, Func Offset: 0x40
	// Line 142, Address: 0x1028650, Func Offset: 0x50
	// Line 144, Address: 0x1028658, Func Offset: 0x58
	// Line 145, Address: 0x1028664, Func Offset: 0x64
	// Line 147, Address: 0x1028670, Func Offset: 0x70
	// Line 148, Address: 0x1028684, Func Offset: 0x84
	// Line 149, Address: 0x1028694, Func Offset: 0x94
	// Line 150, Address: 0x10286a4, Func Offset: 0xa4
	// Line 152, Address: 0x10286cc, Func Offset: 0xcc
	// Line 153, Address: 0x10286d4, Func Offset: 0xd4
	// Line 155, Address: 0x10286e8, Func Offset: 0xe8
	// Line 156, Address: 0x10286f4, Func Offset: 0xf4
	// Line 158, Address: 0x1028704, Func Offset: 0x104
	// Line 160, Address: 0x1028714, Func Offset: 0x114
	// Line 161, Address: 0x1028724, Func Offset: 0x124
	// Line 162, Address: 0x1028734, Func Offset: 0x134
	// Line 164, Address: 0x102873c, Func Offset: 0x13c
	// Line 166, Address: 0x1028754, Func Offset: 0x154
	// Line 167, Address: 0x1028760, Func Offset: 0x160
	// Line 169, Address: 0x1028768, Func Offset: 0x168
	// Line 172, Address: 0x1028774, Func Offset: 0x174
	// Line 176, Address: 0x1028788, Func Offset: 0x188
	// Line 177, Address: 0x10287a8, Func Offset: 0x1a8
	// Line 178, Address: 0x10287c4, Func Offset: 0x1c4
	// Line 179, Address: 0x10287e0, Func Offset: 0x1e0
	// Line 180, Address: 0x10287fc, Func Offset: 0x1fc
	// Line 182, Address: 0x1028818, Func Offset: 0x218
	// Line 183, Address: 0x1028824, Func Offset: 0x224
	// Func End, Address: 0x102883c, Func Offset: 0x23c
}

// 
// Start address: 0x1028840
void branko1_move(_anon1* pActwk)
{
	int xwk;
	int ywk;
	// Line 189, Address: 0x1028840, Func Offset: 0
	// Line 192, Address: 0x1028854, Func Offset: 0x14
	// Line 193, Address: 0x102885c, Func Offset: 0x1c
	// Line 194, Address: 0x1028864, Func Offset: 0x24
	// Line 195, Address: 0x1028870, Func Offset: 0x30
	// Line 196, Address: 0x1028890, Func Offset: 0x50
	// Line 197, Address: 0x10288b0, Func Offset: 0x70
	// Line 198, Address: 0x10288d0, Func Offset: 0x90
	// Line 200, Address: 0x10288dc, Func Offset: 0x9c
	// Func End, Address: 0x10288f4, Func Offset: 0xb4
}

// 
// Start address: 0x1028900
void branko1_posiset(_anon1* pActwk)
{
	short spdwk;
	short sinwk;
	short coswk;
	unsigned int lSinwk;
	unsigned int lCoswk;
	_anon7 direc;
	// Line 214, Address: 0x1028900, Func Offset: 0
	// Line 219, Address: 0x1028918, Func Offset: 0x18
	// Line 220, Address: 0x102892c, Func Offset: 0x2c
	// Line 222, Address: 0x1028960, Func Offset: 0x60
	// Line 223, Address: 0x1028968, Func Offset: 0x68
	// Line 224, Address: 0x1028978, Func Offset: 0x78
	// Line 225, Address: 0x1028998, Func Offset: 0x98
	// Line 227, Address: 0x10289a4, Func Offset: 0xa4
	// Line 229, Address: 0x10289ac, Func Offset: 0xac
	// Line 231, Address: 0x10289e0, Func Offset: 0xe0
	// Line 232, Address: 0x10289e8, Func Offset: 0xe8
	// Line 233, Address: 0x10289f8, Func Offset: 0xf8
	// Line 234, Address: 0x1028a18, Func Offset: 0x118
	// Line 240, Address: 0x1028a20, Func Offset: 0x120
	// Line 241, Address: 0x1028a2c, Func Offset: 0x12c
	// Line 242, Address: 0x1028a40, Func Offset: 0x140
	// Line 243, Address: 0x1028a6c, Func Offset: 0x16c
	// Line 244, Address: 0x1028a84, Func Offset: 0x184
	// Line 245, Address: 0x1028a9c, Func Offset: 0x19c
	// Line 246, Address: 0x1028ac0, Func Offset: 0x1c0
	// Line 247, Address: 0x1028ae4, Func Offset: 0x1e4
	// Line 248, Address: 0x1028b14, Func Offset: 0x214
	// Line 249, Address: 0x1028b44, Func Offset: 0x244
	// Func End, Address: 0x1028b60, Func Offset: 0x260
}

// 
// Start address: 0x1028b60
void branko1_ridechk(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	int i;
	// Line 260, Address: 0x1028b60, Func Offset: 0
	// Line 264, Address: 0x1028b74, Func Offset: 0x14
	// Line 265, Address: 0x1028b88, Func Offset: 0x28
	// Line 268, Address: 0x1028b94, Func Offset: 0x34
	// Line 269, Address: 0x1028bb4, Func Offset: 0x54
	// Line 271, Address: 0x1028bc0, Func Offset: 0x60
	// Line 277, Address: 0x1028be0, Func Offset: 0x80
	// Line 278, Address: 0x1028bec, Func Offset: 0x8c
	// Line 282, Address: 0x1028c14, Func Offset: 0xb4
	// Line 290, Address: 0x1028c68, Func Offset: 0x108
	// Line 291, Address: 0x1028c74, Func Offset: 0x114
	// Line 292, Address: 0x1028c7c, Func Offset: 0x11c
	// Line 293, Address: 0x1028c8c, Func Offset: 0x12c
	// Func End, Address: 0x1028ca4, Func Offset: 0x144
}

