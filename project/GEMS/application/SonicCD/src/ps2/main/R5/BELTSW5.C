typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[4];
typedef _anon0* type_4[3];
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

_anon0 beltsw5_pat0;
_anon0 beltsw5_pat1;
_anon0 beltsw5_pat2;
_anon0* beltsw5pat[3];
unsigned char colrevflag;
_anon1 actwk[128];
_anon5 editmode;

void beltsw5(_anon1* pActwk);
void beltsw5_init(_anon1* pActwk);
void beltsw5_move1(_anon1* pActwk);
void beltsw5_move2(_anon1* pActwk);
void beltsw5_move3(_anon1* pActwk);

// 
// Start address: 0x101d420
void beltsw5(_anon1* pActwk)
{
	void(*beltsw5_move_tbl)(_anon1*)[4];
	// Line 70, Address: 0x101d420, Func Offset: 0
	// Line 71, Address: 0x101d42c, Func Offset: 0xc
	// Line 78, Address: 0x101d458, Func Offset: 0x38
	// Line 79, Address: 0x101d494, Func Offset: 0x74
	// Line 80, Address: 0x101d4a0, Func Offset: 0x80
	// Line 81, Address: 0x101d4ac, Func Offset: 0x8c
	// Func End, Address: 0x101d4bc, Func Offset: 0x9c
}

// 
// Start address: 0x101d4c0
void beltsw5_init(_anon1* pActwk)
{
	// Line 90, Address: 0x101d4c0, Func Offset: 0
	// Line 91, Address: 0x101d4cc, Func Offset: 0xc
	// Line 92, Address: 0x101d4dc, Func Offset: 0x1c
	// Line 93, Address: 0x101d4ec, Func Offset: 0x2c
	// Line 94, Address: 0x101d4f8, Func Offset: 0x38
	// Line 95, Address: 0x101d504, Func Offset: 0x44
	// Line 96, Address: 0x101d510, Func Offset: 0x50
	// Line 97, Address: 0x101d51c, Func Offset: 0x5c
	// Line 99, Address: 0x101d52c, Func Offset: 0x6c
	// Line 100, Address: 0x101d550, Func Offset: 0x90
	// Line 101, Address: 0x101d560, Func Offset: 0xa0
	// Line 102, Address: 0x101d56c, Func Offset: 0xac
	// Func End, Address: 0x101d57c, Func Offset: 0xbc
}

// 
// Start address: 0x101d580
void beltsw5_move1(_anon1* pActwk)
{
	short wD0;
	// Line 111, Address: 0x101d580, Func Offset: 0
	// Line 114, Address: 0x101d590, Func Offset: 0x10
	// Line 115, Address: 0x101d5a0, Func Offset: 0x20
	// Line 116, Address: 0x101d5d4, Func Offset: 0x54
	// Line 117, Address: 0x101d60c, Func Offset: 0x8c
	// Line 118, Address: 0x101d620, Func Offset: 0xa0
	// Line 119, Address: 0x101d654, Func Offset: 0xd4
	// Line 120, Address: 0x101d68c, Func Offset: 0x10c
	// Line 121, Address: 0x101d6a0, Func Offset: 0x120
	// Line 122, Address: 0x101d6b4, Func Offset: 0x134
	// Line 124, Address: 0x101d6c4, Func Offset: 0x144
	// Line 125, Address: 0x101d6e8, Func Offset: 0x168
	// Line 130, Address: 0x101d6f0, Func Offset: 0x170
	// Line 131, Address: 0x101d710, Func Offset: 0x190
	// Line 132, Address: 0x101d71c, Func Offset: 0x19c
	// Line 135, Address: 0x101d72c, Func Offset: 0x1ac
	// Line 136, Address: 0x101d73c, Func Offset: 0x1bc
	// Func End, Address: 0x101d750, Func Offset: 0x1d0
}

// 
// Start address: 0x101d750
void beltsw5_move2(_anon1* pActwk)
{
	// Line 145, Address: 0x101d750, Func Offset: 0
	// Line 146, Address: 0x101d758, Func Offset: 0x8
	// Line 147, Address: 0x101d768, Func Offset: 0x18
	// Line 148, Address: 0x101d780, Func Offset: 0x30
	// Line 149, Address: 0x101d78c, Func Offset: 0x3c
	// Line 152, Address: 0x101d794, Func Offset: 0x44
	// Line 153, Address: 0x101d7ac, Func Offset: 0x5c
	// Line 154, Address: 0x101d7b4, Func Offset: 0x64
	// Line 155, Address: 0x101d7bc, Func Offset: 0x6c
	// Line 157, Address: 0x101d7e0, Func Offset: 0x90
	// Line 158, Address: 0x101d7f0, Func Offset: 0xa0
	// Line 161, Address: 0x101d7f8, Func Offset: 0xa8
	// Func End, Address: 0x101d804, Func Offset: 0xb4
}

// 
// Start address: 0x101d810
void beltsw5_move3(_anon1* pActwk)
{
	short wD0;
	// Line 170, Address: 0x101d810, Func Offset: 0
	// Line 173, Address: 0x101d81c, Func Offset: 0xc
	// Line 174, Address: 0x101d850, Func Offset: 0x40
	// Line 175, Address: 0x101d888, Func Offset: 0x78
	// Line 176, Address: 0x101d89c, Func Offset: 0x8c
	// Line 177, Address: 0x101d8d0, Func Offset: 0xc0
	// Line 178, Address: 0x101d908, Func Offset: 0xf8
	// Line 183, Address: 0x101d91c, Func Offset: 0x10c
	// Line 184, Address: 0x101d928, Func Offset: 0x118
	// Line 185, Address: 0x101d938, Func Offset: 0x128
	// Func End, Address: 0x101d948, Func Offset: 0x138
}

