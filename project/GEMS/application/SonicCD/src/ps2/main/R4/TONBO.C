typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[3];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef unsigned char type_5[4];
typedef void(*type_7)(_anon1*)[2];
typedef _anon0* type_8[3];
typedef unsigned char* type_9[2];
typedef unsigned char type_10[4];

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

unsigned char pchg0[4];
unsigned char pchg1[4];
unsigned char* pchg[2];
_anon0 spr_tonbo_e_00;
_anon0 spr_tonbo_e_01;
_anon0 spr_tonbo_e_02;
_anon0 spr_tonbo_b_00;
_anon0 spr_tonbo_b_01;
_anon0 spr_tonbo_b_02;
_anon0* pat_tonbo_e[3];
_anon0* pat_tonbo_b[3];

void tonbo(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_lr(_anon1* pActwk);

// 
// Start address: 0x101e480
void tonbo(_anon1* pActwk)
{
	short temp;
	void(*act_tbl)(_anon1*)[2];
	// Line 148, Address: 0x101e480, Func Offset: 0
	// Line 156, Address: 0x101e490, Func Offset: 0x10
	// Line 157, Address: 0x101e4a4, Func Offset: 0x24
	// Line 158, Address: 0x101e4e8, Func Offset: 0x68
	// Line 159, Address: 0x101e4f4, Func Offset: 0x74
	// Line 160, Address: 0x101e504, Func Offset: 0x84
	// Line 161, Address: 0x101e514, Func Offset: 0x94
	// Func End, Address: 0x101e528, Func Offset: 0xa8
}

// 
// Start address: 0x101e530
void act_init(_anon1* pActwk)
{
	// Line 165, Address: 0x101e530, Func Offset: 0
	// Line 166, Address: 0x101e538, Func Offset: 0x8
	// Line 167, Address: 0x101e548, Func Offset: 0x18
	// Line 168, Address: 0x101e554, Func Offset: 0x24
	// Line 169, Address: 0x101e560, Func Offset: 0x30
	// Line 170, Address: 0x101e56c, Func Offset: 0x3c
	// Line 171, Address: 0x101e578, Func Offset: 0x48
	// Line 172, Address: 0x101e584, Func Offset: 0x54
	// Line 173, Address: 0x101e590, Func Offset: 0x60
	// Line 174, Address: 0x101e59c, Func Offset: 0x6c
	// Line 175, Address: 0x101e5ac, Func Offset: 0x7c
	// Line 177, Address: 0x101e5c0, Func Offset: 0x90
	// Line 179, Address: 0x101e5d0, Func Offset: 0xa0
	// Line 180, Address: 0x101e5e0, Func Offset: 0xb0
	// Line 181, Address: 0x101e5ec, Func Offset: 0xbc
	// Line 182, Address: 0x101e5f8, Func Offset: 0xc8
	// Line 183, Address: 0x101e604, Func Offset: 0xd4
	// Line 186, Address: 0x101e60c, Func Offset: 0xdc
	// Line 187, Address: 0x101e61c, Func Offset: 0xec
	// Line 188, Address: 0x101e628, Func Offset: 0xf8
	// Line 189, Address: 0x101e634, Func Offset: 0x104
	// Line 191, Address: 0x101e640, Func Offset: 0x110
	// Line 192, Address: 0x101e650, Func Offset: 0x120
	// Line 193, Address: 0x101e660, Func Offset: 0x130
	// Func End, Address: 0x101e66c, Func Offset: 0x13c
}

// 
// Start address: 0x101e670
void act_lr(_anon1* pActwk)
{
	short sin;
	short cos;
	_anon2 sinl;
	// Line 197, Address: 0x101e670, Func Offset: 0
	// Line 203, Address: 0x101e67c, Func Offset: 0xc
	// Line 204, Address: 0x101e694, Func Offset: 0x24
	// Line 205, Address: 0x101e6ac, Func Offset: 0x3c
	// Line 206, Address: 0x101e6b0, Func Offset: 0x40
	// Line 210, Address: 0x101e6b8, Func Offset: 0x48
	// Line 211, Address: 0x101e6c4, Func Offset: 0x54
	// Line 213, Address: 0x101e6e0, Func Offset: 0x70
	// Line 215, Address: 0x101e6f8, Func Offset: 0x88
	// Line 216, Address: 0x101e708, Func Offset: 0x98
	// Line 218, Address: 0x101e718, Func Offset: 0xa8
	// Line 219, Address: 0x101e728, Func Offset: 0xb8
	// Line 220, Address: 0x101e738, Func Offset: 0xc8
	// Line 221, Address: 0x101e748, Func Offset: 0xd8
	// Line 224, Address: 0x101e758, Func Offset: 0xe8
	// Line 225, Address: 0x101e76c, Func Offset: 0xfc
	// Func End, Address: 0x101e77c, Func Offset: 0x10c
}

