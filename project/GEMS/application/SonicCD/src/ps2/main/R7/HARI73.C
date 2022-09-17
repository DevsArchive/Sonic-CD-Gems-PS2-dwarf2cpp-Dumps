typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_7)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[2];
typedef short type_3[16];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon1 type_6[128];
typedef void(*type_8)(_anon1*)[3];

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

_anon0 hari73_pat0;
_anon0 hari73_pat1;
_anon0* hari73_pat[2];
_anon1 actwk[128];
unsigned char plpower_m;

void hari73(_anon1* pActwk);
void hari73_init(_anon1* pActwk);
void hari73_move(_anon1* pActwk);
void msnc_hit(_anon1* pActwk);
void hari73_tobi(_anon1* pActwk);
short act_search(_anon1** ppActwk, unsigned char bD0);

// 
// Start address: 0x1028aa0
void hari73(_anon1* pActwk)
{
	void(*hari73_acttbl)(_anon1*)[3];
	// Line 74, Address: 0x1028aa0, Func Offset: 0
	// Line 75, Address: 0x1028aac, Func Offset: 0xc
	// Line 81, Address: 0x1028ad0, Func Offset: 0x30
	// Line 82, Address: 0x1028b0c, Func Offset: 0x6c
	// Func End, Address: 0x1028b1c, Func Offset: 0x7c
}

// 
// Start address: 0x1028b20
void hari73_init(_anon1* pActwk)
{
	_anon1* pNewactwk;
	// Line 91, Address: 0x1028b20, Func Offset: 0
	// Line 94, Address: 0x1028b2c, Func Offset: 0xc
	// Line 95, Address: 0x1028b3c, Func Offset: 0x1c
	// Line 96, Address: 0x1028b4c, Func Offset: 0x2c
	// Line 97, Address: 0x1028b58, Func Offset: 0x38
	// Line 98, Address: 0x1028b64, Func Offset: 0x44
	// Line 99, Address: 0x1028b74, Func Offset: 0x54
	// Line 100, Address: 0x1028b80, Func Offset: 0x60
	// Line 101, Address: 0x1028b8c, Func Offset: 0x6c
	// Line 102, Address: 0x1028b98, Func Offset: 0x78
	// Line 103, Address: 0x1028bb0, Func Offset: 0x90
	// Line 106, Address: 0x1028be8, Func Offset: 0xc8
	// Line 107, Address: 0x1028c44, Func Offset: 0x124
	// Line 108, Address: 0x1028c50, Func Offset: 0x130
	// Line 113, Address: 0x1028c58, Func Offset: 0x138
	// Line 114, Address: 0x1028c64, Func Offset: 0x144
	// Func End, Address: 0x1028c74, Func Offset: 0x154
}

// 
// Start address: 0x1028c80
void hari73_move(_anon1* pActwk)
{
	short wD0;
	_anon1* pNewactwk;
	// Line 123, Address: 0x1028c80, Func Offset: 0
	// Line 127, Address: 0x1028c94, Func Offset: 0x14
	// Line 128, Address: 0x1028ca4, Func Offset: 0x24
	// Line 129, Address: 0x1028ccc, Func Offset: 0x4c
	// Line 130, Address: 0x1028cfc, Func Offset: 0x7c
	// Line 131, Address: 0x1028d24, Func Offset: 0xa4
	// Line 133, Address: 0x1028d30, Func Offset: 0xb0
	// Line 134, Address: 0x1028d58, Func Offset: 0xd8
	// Line 135, Address: 0x1028d64, Func Offset: 0xe4
	// Line 139, Address: 0x1028d6c, Func Offset: 0xec
	// Line 140, Address: 0x1028d88, Func Offset: 0x108
	// Line 141, Address: 0x1028d90, Func Offset: 0x110
	// Line 142, Address: 0x1028d98, Func Offset: 0x118
	// Line 143, Address: 0x1028db0, Func Offset: 0x130
	// Line 145, Address: 0x1028dbc, Func Offset: 0x13c
	// Line 146, Address: 0x1028dcc, Func Offset: 0x14c
	// Line 147, Address: 0x1028de4, Func Offset: 0x164
	// Line 148, Address: 0x1028df4, Func Offset: 0x174
	// Line 149, Address: 0x1028e1c, Func Offset: 0x19c
	// Line 150, Address: 0x1028e30, Func Offset: 0x1b0
	// Line 157, Address: 0x1028e44, Func Offset: 0x1c4
	// Line 158, Address: 0x1028e50, Func Offset: 0x1d0
	// Line 159, Address: 0x1028e5c, Func Offset: 0x1dc
	// Func End, Address: 0x1028e74, Func Offset: 0x1f4
}

// 
// Start address: 0x1028e80
void msnc_hit(_anon1* pActwk)
{
	int i;
	short wD4;
	_anon1* pNewactwk;
	short spd_tbl[16];
	// Line 162, Address: 0x1028e80, Func Offset: 0
	// Line 167, Address: 0x1028e94, Func Offset: 0x14
	// Line 175, Address: 0x1028ec8, Func Offset: 0x48
	// Line 177, Address: 0x1028ed4, Func Offset: 0x54
	// Line 179, Address: 0x1028ee0, Func Offset: 0x60
	// Line 180, Address: 0x1028eec, Func Offset: 0x6c
	// Line 181, Address: 0x1028f00, Func Offset: 0x80
	// Line 182, Address: 0x1028f0c, Func Offset: 0x8c
	// Line 183, Address: 0x1028f18, Func Offset: 0x98
	// Line 185, Address: 0x1028f24, Func Offset: 0xa4
	// Line 186, Address: 0x1028f30, Func Offset: 0xb0
	// Line 187, Address: 0x1028f3c, Func Offset: 0xbc
	// Line 188, Address: 0x1028f48, Func Offset: 0xc8
	// Line 189, Address: 0x1028f54, Func Offset: 0xd4
	// Line 190, Address: 0x1028f60, Func Offset: 0xe0
	// Line 192, Address: 0x1028f70, Func Offset: 0xf0
	// Line 193, Address: 0x1028f9c, Func Offset: 0x11c
	// Line 195, Address: 0x1028fac, Func Offset: 0x12c
	// Line 196, Address: 0x1028fc0, Func Offset: 0x140
	// Line 197, Address: 0x1028fd8, Func Offset: 0x158
	// Line 198, Address: 0x1028ff0, Func Offset: 0x170
	// Line 199, Address: 0x1029008, Func Offset: 0x188
	// Line 200, Address: 0x1029014, Func Offset: 0x194
	// Line 202, Address: 0x1029024, Func Offset: 0x1a4
	// Line 203, Address: 0x1029034, Func Offset: 0x1b4
	// Line 205, Address: 0x1029048, Func Offset: 0x1c8
	// Line 206, Address: 0x1029054, Func Offset: 0x1d4
	// Func End, Address: 0x102906c, Func Offset: 0x1ec
}

// 
// Start address: 0x1029070
void hari73_tobi(_anon1* pActwk)
{
	// Line 215, Address: 0x1029070, Func Offset: 0
	// Line 216, Address: 0x102907c, Func Offset: 0xc
	// Line 218, Address: 0x1029088, Func Offset: 0x18
	// Line 219, Address: 0x1029098, Func Offset: 0x28
	// Line 220, Address: 0x10290a8, Func Offset: 0x38
	// Line 221, Address: 0x10290c0, Func Offset: 0x50
	// Line 223, Address: 0x10290cc, Func Offset: 0x5c
	// Line 224, Address: 0x10290d8, Func Offset: 0x68
	// Func End, Address: 0x10290e8, Func Offset: 0x78
}

// 
// Start address: 0x10290f0
short act_search(_anon1** ppActwk, unsigned char bD0)
{
	int i;
	// Line 233, Address: 0x10290f0, Func Offset: 0
	// Line 237, Address: 0x1029100, Func Offset: 0x10
	// Line 238, Address: 0x102910c, Func Offset: 0x1c
	// Line 239, Address: 0x102913c, Func Offset: 0x4c
	// Line 240, Address: 0x102915c, Func Offset: 0x6c
	// Line 242, Address: 0x1029168, Func Offset: 0x78
	// Line 243, Address: 0x1029178, Func Offset: 0x88
	// Line 244, Address: 0x102917c, Func Offset: 0x8c
	// Func End, Address: 0x102918c, Func Offset: 0x9c
}

