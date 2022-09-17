typedef struct _anon0;
typedef struct _anon1;
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
typedef _anon0* type_2[0];
typedef void(*type_4)(_anon1*)[4];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];
typedef unsigned char type_8[32];

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

void(*tobira_tbl)(_anon1*)[4];
_anon1 actwk[128];
_anon5 stageno;
_anon0* tobira6pat[0];
unsigned char switchflag[32];
_anon0 tpat0;
_anon0 tpat1;

void tobira6(_anon1* pActwk);
void tobira6_ridechk(_anon1* pActwk);
void tobira6_init(_anon1* pActwk);
void tobira6_move(_anon1* pActwk);
void tobira6_chek(_anon1* pActwk);
void tobira6_clse(_anon1* pActwk);
void tobira6_cnt(_anon1* pActwk);
void tobira6_sub(_anon1* pActwk);

// 
// Start address: 0x10170f0
void tobira6(_anon1* pActwk)
{
	// Line 72, Address: 0x10170f0, Func Offset: 0
	// Line 73, Address: 0x10170fc, Func Offset: 0xc
	// Line 74, Address: 0x1017140, Func Offset: 0x50
	// Line 75, Address: 0x101714c, Func Offset: 0x5c
	// Line 76, Address: 0x1017158, Func Offset: 0x68
	// Func End, Address: 0x1017168, Func Offset: 0x78
}

// 
// Start address: 0x1017170
void tobira6_ridechk(_anon1* pActwk)
{
	// Line 80, Address: 0x1017170, Func Offset: 0
	// Line 81, Address: 0x101717c, Func Offset: 0xc
	// Line 82, Address: 0x1017190, Func Offset: 0x20
	// Func End, Address: 0x10171a0, Func Offset: 0x30
}

// 
// Start address: 0x10171a0
void tobira6_init(_anon1* pActwk)
{
	// Line 94, Address: 0x10171a0, Func Offset: 0
	// Line 95, Address: 0x10171ac, Func Offset: 0xc
	// Line 96, Address: 0x10171bc, Func Offset: 0x1c
	// Line 97, Address: 0x10171cc, Func Offset: 0x2c
	// Line 98, Address: 0x10171d8, Func Offset: 0x38
	// Line 99, Address: 0x10171e8, Func Offset: 0x48
	// Line 101, Address: 0x10171f8, Func Offset: 0x58
	// Line 102, Address: 0x1017204, Func Offset: 0x64
	// Line 103, Address: 0x1017210, Func Offset: 0x70
	// Line 104, Address: 0x101721c, Func Offset: 0x7c
	// Line 106, Address: 0x1017238, Func Offset: 0x98
	// Line 107, Address: 0x1017244, Func Offset: 0xa4
	// Line 108, Address: 0x1017250, Func Offset: 0xb0
	// Line 112, Address: 0x101725c, Func Offset: 0xbc
	// Line 113, Address: 0x101727c, Func Offset: 0xdc
	// Line 114, Address: 0x1017288, Func Offset: 0xe8
	// Line 115, Address: 0x1017294, Func Offset: 0xf4
	// Func End, Address: 0x10172a4, Func Offset: 0x104
}

// 
// Start address: 0x10172b0
void tobira6_move(_anon1* pActwk)
{
	unsigned char byD0;
	// Line 127, Address: 0x10172b0, Func Offset: 0
	// Line 130, Address: 0x10172c0, Func Offset: 0x10
	// Line 131, Address: 0x10172cc, Func Offset: 0x1c
	// Line 132, Address: 0x10172f0, Func Offset: 0x40
	// Line 135, Address: 0x10172f8, Func Offset: 0x48
	// Line 136, Address: 0x1017308, Func Offset: 0x58
	// Line 138, Address: 0x1017318, Func Offset: 0x68
	// Line 139, Address: 0x1017324, Func Offset: 0x74
	// Line 141, Address: 0x1017330, Func Offset: 0x80
	// Line 142, Address: 0x1017348, Func Offset: 0x98
	// Line 144, Address: 0x1017358, Func Offset: 0xa8
	// Func End, Address: 0x101736c, Func Offset: 0xbc
}

// 
// Start address: 0x1017370
void tobira6_chek(_anon1* pActwk)
{
	short iD0;
	// Line 156, Address: 0x1017370, Func Offset: 0
	// Line 159, Address: 0x101737c, Func Offset: 0xc
	// Line 160, Address: 0x10173b0, Func Offset: 0x40
	// Line 163, Address: 0x10173c0, Func Offset: 0x50
	// Line 164, Address: 0x10173d4, Func Offset: 0x64
	// Line 165, Address: 0x10173e8, Func Offset: 0x78
	// Line 166, Address: 0x10173fc, Func Offset: 0x8c
	// Line 168, Address: 0x101740c, Func Offset: 0x9c
	// Line 169, Address: 0x1017428, Func Offset: 0xb8
	// Line 171, Address: 0x1017450, Func Offset: 0xe0
	// Line 175, Address: 0x1017458, Func Offset: 0xe8
	// Line 176, Address: 0x101746c, Func Offset: 0xfc
	// Line 177, Address: 0x1017488, Func Offset: 0x118
	// Line 178, Address: 0x101749c, Func Offset: 0x12c
	// Line 179, Address: 0x10174b0, Func Offset: 0x140
	// Line 181, Address: 0x10174c0, Func Offset: 0x150
	// Line 185, Address: 0x10174e8, Func Offset: 0x178
	// Line 186, Address: 0x10174f8, Func Offset: 0x188
	// Func End, Address: 0x1017508, Func Offset: 0x198
}

// 
// Start address: 0x1017510
void tobira6_clse(_anon1* pActwk)
{
	// Line 198, Address: 0x1017510, Func Offset: 0
	// Line 199, Address: 0x101751c, Func Offset: 0xc
	// Line 200, Address: 0x1017528, Func Offset: 0x18
	// Line 201, Address: 0x1017534, Func Offset: 0x24
	// Line 202, Address: 0x1017548, Func Offset: 0x38
	// Line 203, Address: 0x1017554, Func Offset: 0x44
	// Line 204, Address: 0x1017560, Func Offset: 0x50
	// Func End, Address: 0x1017570, Func Offset: 0x60
}

// 
// Start address: 0x1017570
void tobira6_cnt(_anon1* pActwk)
{
	_anon7 wD0;
	short iD0;
	// Line 217, Address: 0x1017570, Func Offset: 0
	// Line 221, Address: 0x1017580, Func Offset: 0x10
	// Line 222, Address: 0x1017584, Func Offset: 0x14
	// Line 223, Address: 0x1017590, Func Offset: 0x20
	// Line 224, Address: 0x101759c, Func Offset: 0x2c
	// Line 225, Address: 0x10175b8, Func Offset: 0x48
	// Line 226, Address: 0x10175cc, Func Offset: 0x5c
	// Line 227, Address: 0x10175d4, Func Offset: 0x64
	// Func End, Address: 0x10175e8, Func Offset: 0x78
}

// 
// Start address: 0x10175f0
void tobira6_sub(_anon1* pActwk)
{
	// Line 240, Address: 0x10175f0, Func Offset: 0
	// Line 241, Address: 0x10175f8, Func Offset: 0x8
	// Line 243, Address: 0x101760c, Func Offset: 0x1c
	// Line 244, Address: 0x101761c, Func Offset: 0x2c
	// Line 246, Address: 0x1017634, Func Offset: 0x44
	// Line 247, Address: 0x101763c, Func Offset: 0x4c
	// Line 251, Address: 0x1017644, Func Offset: 0x54
	// Line 252, Address: 0x1017654, Func Offset: 0x64
	// Line 254, Address: 0x101766c, Func Offset: 0x7c
	// Line 256, Address: 0x1017678, Func Offset: 0x88
	// Func End, Address: 0x1017684, Func Offset: 0x94
}

