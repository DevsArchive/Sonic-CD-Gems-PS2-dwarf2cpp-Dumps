typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[4];
typedef void(*type_4)(_anon1*)[5];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
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

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

void(*optbr6_tbl)(_anon1*)[5];
_anon1 actwk[128];
_anon0* optbr6pat[4];
_anon0 opat0;
_anon0 opat1;
_anon0 opat2;

void optbr6(_anon1* pActwk);
void optbr6_ridechk(_anon1* pActwk);
void optbr6_init(_anon1* pActwk);
void optbr6_chk1(_anon1* pActwk);
void optbr6_mov1(_anon1* pActwk);
void optbr6_chk2(_anon1* pActwk);
void optbr6_mov2(_anon1* pActwk);
void tobira_cnt(_anon1* pActwk);

// 
// Start address: 0x1017690
void optbr6(_anon1* pActwk)
{
	// Line 78, Address: 0x1017690, Func Offset: 0
	// Line 79, Address: 0x101769c, Func Offset: 0xc
	// Line 80, Address: 0x10176e0, Func Offset: 0x50
	// Line 81, Address: 0x10176ec, Func Offset: 0x5c
	// Line 82, Address: 0x10176f8, Func Offset: 0x68
	// Func End, Address: 0x1017708, Func Offset: 0x78
}

// 
// Start address: 0x1017710
void optbr6_ridechk(_anon1* pActwk)
{
	// Line 86, Address: 0x1017710, Func Offset: 0
	// Line 87, Address: 0x101771c, Func Offset: 0xc
	// Line 89, Address: 0x1017730, Func Offset: 0x20
	// Line 90, Address: 0x1017744, Func Offset: 0x34
	// Func End, Address: 0x1017754, Func Offset: 0x44
}

// 
// Start address: 0x1017760
void optbr6_init(_anon1* pActwk)
{
	// Line 102, Address: 0x1017760, Func Offset: 0
	// Line 103, Address: 0x101776c, Func Offset: 0xc
	// Line 104, Address: 0x101777c, Func Offset: 0x1c
	// Line 105, Address: 0x101778c, Func Offset: 0x2c
	// Line 106, Address: 0x1017798, Func Offset: 0x38
	// Line 107, Address: 0x10177a4, Func Offset: 0x44
	// Line 108, Address: 0x10177b4, Func Offset: 0x54
	// Line 109, Address: 0x10177c0, Func Offset: 0x60
	// Line 111, Address: 0x10177cc, Func Offset: 0x6c
	// Line 113, Address: 0x10177e4, Func Offset: 0x84
	// Line 114, Address: 0x10177f4, Func Offset: 0x94
	// Line 117, Address: 0x1017804, Func Offset: 0xa4
	// Line 118, Address: 0x1017810, Func Offset: 0xb0
	// Func End, Address: 0x1017820, Func Offset: 0xc0
}

// 
// Start address: 0x1017820
void optbr6_chk1(_anon1* pActwk)
{
	short iD0;
	short iD1;
	// Line 130, Address: 0x1017820, Func Offset: 0
	// Line 133, Address: 0x1017834, Func Offset: 0x14
	// Line 134, Address: 0x1017868, Func Offset: 0x48
	// Line 135, Address: 0x1017878, Func Offset: 0x58
	// Line 137, Address: 0x1017894, Func Offset: 0x74
	// Line 139, Address: 0x10178a8, Func Offset: 0x88
	// Line 142, Address: 0x10178c0, Func Offset: 0xa0
	// Line 143, Address: 0x10178d0, Func Offset: 0xb0
	// Line 144, Address: 0x10178e0, Func Offset: 0xc0
	// Line 148, Address: 0x10178e8, Func Offset: 0xc8
	// Line 149, Address: 0x10178f8, Func Offset: 0xd8
	// Line 152, Address: 0x1017908, Func Offset: 0xe8
	// Line 153, Address: 0x1017914, Func Offset: 0xf4
	// Line 154, Address: 0x1017924, Func Offset: 0x104
	// Line 156, Address: 0x1017938, Func Offset: 0x118
	// Line 157, Address: 0x1017940, Func Offset: 0x120
	// Line 158, Address: 0x1017950, Func Offset: 0x130
	// Line 159, Address: 0x1017968, Func Offset: 0x148
	// Line 161, Address: 0x1017974, Func Offset: 0x154
	// Line 162, Address: 0x1017980, Func Offset: 0x160
	// Func End, Address: 0x1017998, Func Offset: 0x178
}

// 
// Start address: 0x10179a0
void optbr6_mov1(_anon1* pActwk)
{
	// Line 174, Address: 0x10179a0, Func Offset: 0
	// Line 175, Address: 0x10179ac, Func Offset: 0xc
	// Line 176, Address: 0x10179b4, Func Offset: 0x14
	// Line 177, Address: 0x10179c0, Func Offset: 0x20
	// Line 178, Address: 0x10179d8, Func Offset: 0x38
	// Line 179, Address: 0x10179e8, Func Offset: 0x48
	// Line 180, Address: 0x10179f4, Func Offset: 0x54
	// Func End, Address: 0x1017a04, Func Offset: 0x64
}

// 
// Start address: 0x1017a10
void optbr6_chk2(_anon1* pActwk)
{
	short iD0;
	short iD1;
	// Line 192, Address: 0x1017a10, Func Offset: 0
	// Line 195, Address: 0x1017a24, Func Offset: 0x14
	// Line 196, Address: 0x1017a58, Func Offset: 0x48
	// Line 197, Address: 0x1017a68, Func Offset: 0x58
	// Line 199, Address: 0x1017a84, Func Offset: 0x74
	// Line 201, Address: 0x1017a98, Func Offset: 0x88
	// Line 204, Address: 0x1017ab0, Func Offset: 0xa0
	// Line 205, Address: 0x1017ac0, Func Offset: 0xb0
	// Line 206, Address: 0x1017ad0, Func Offset: 0xc0
	// Line 210, Address: 0x1017ad8, Func Offset: 0xc8
	// Line 211, Address: 0x1017ae8, Func Offset: 0xd8
	// Line 214, Address: 0x1017af8, Func Offset: 0xe8
	// Line 215, Address: 0x1017b04, Func Offset: 0xf4
	// Line 216, Address: 0x1017b14, Func Offset: 0x104
	// Line 218, Address: 0x1017b28, Func Offset: 0x118
	// Line 219, Address: 0x1017b30, Func Offset: 0x120
	// Line 220, Address: 0x1017b40, Func Offset: 0x130
	// Line 222, Address: 0x1017b4c, Func Offset: 0x13c
	// Line 223, Address: 0x1017b58, Func Offset: 0x148
	// Func End, Address: 0x1017b70, Func Offset: 0x160
}

// 
// Start address: 0x1017b70
void optbr6_mov2(_anon1* pActwk)
{
	// Line 235, Address: 0x1017b70, Func Offset: 0
	// Line 236, Address: 0x1017b7c, Func Offset: 0xc
	// Line 237, Address: 0x1017b88, Func Offset: 0x18
	// Line 238, Address: 0x1017b94, Func Offset: 0x24
	// Line 239, Address: 0x1017ba8, Func Offset: 0x38
	// Line 241, Address: 0x1017bb4, Func Offset: 0x44
	// Line 242, Address: 0x1017bc0, Func Offset: 0x50
	// Func End, Address: 0x1017bd0, Func Offset: 0x60
}

// 
// Start address: 0x1017bd0
void tobira_cnt(_anon1* pActwk)
{
	// Line 254, Address: 0x1017bd0, Func Offset: 0
	// Line 255, Address: 0x1017bd8, Func Offset: 0x8
	// Line 256, Address: 0x1017be8, Func Offset: 0x18
	// Line 258, Address: 0x1017c00, Func Offset: 0x30
	// Line 259, Address: 0x1017c14, Func Offset: 0x44
	// Line 262, Address: 0x1017c2c, Func Offset: 0x5c
	// Line 263, Address: 0x1017c40, Func Offset: 0x70
	// Line 265, Address: 0x1017c50, Func Offset: 0x80
	// Func End, Address: 0x1017c5c, Func Offset: 0x8c
}

