typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef short type_2[6];
typedef unsigned char type_3[2];
typedef _anon1* type_4[1];
typedef unsigned char type_5[22];
typedef _anon0 type_6[128];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
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

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
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

_anon1 pat_iwa5roll_00;
_anon1* pat_iwa5roll[1];
_anon0 actwk[128];
unsigned char time_flag;

void iwa5roll(_anon0* pActwk);
void iwa5roll_init(_anon0* pActwk);
void iwa5roll_move(_anon0* pActwk);

// 
// Start address: 0x1026550
void iwa5roll(_anon0* pActwk)
{
	// Line 70, Address: 0x1026550, Func Offset: 0
	// Line 71, Address: 0x102655c, Func Offset: 0xc
	// Line 72, Address: 0x1026580, Func Offset: 0x30
	// Line 73, Address: 0x102658c, Func Offset: 0x3c
	// Func End, Address: 0x102659c, Func Offset: 0x4c
}

// 
// Start address: 0x10265a0
void iwa5roll_init(_anon0* pActwk)
{
	_anon0* pNewactwk;
	short wD1;
	short wD3;
	short wD4;
	short wD5;
	short wD6;
	short wA5;
	short iwa5roll_tbl[6];
	// Line 82, Address: 0x10265a0, Func Offset: 0
	// Line 86, Address: 0x10265c4, Func Offset: 0x24
	// Line 92, Address: 0x10265f8, Func Offset: 0x58
	// Line 93, Address: 0x102661c, Func Offset: 0x7c
	// Line 94, Address: 0x1026644, Func Offset: 0xa4
	// Line 96, Address: 0x1026660, Func Offset: 0xc0
	// Line 98, Address: 0x1026668, Func Offset: 0xc8
	// Line 99, Address: 0x1026674, Func Offset: 0xd4
	// Line 100, Address: 0x1026678, Func Offset: 0xd8
	// Line 101, Address: 0x102667c, Func Offset: 0xdc
	// Line 102, Address: 0x1026680, Func Offset: 0xe0
	// Line 103, Address: 0x1026688, Func Offset: 0xe8
	// Line 107, Address: 0x1026690, Func Offset: 0xf0
	// Line 108, Address: 0x1026694, Func Offset: 0xf4
	// Line 111, Address: 0x102669c, Func Offset: 0xfc
	// Line 115, Address: 0x10266b0, Func Offset: 0x110
	// Line 116, Address: 0x10266e8, Func Offset: 0x148
	// Line 117, Address: 0x10266f8, Func Offset: 0x158
	// Line 118, Address: 0x1026704, Func Offset: 0x164
	// Line 119, Address: 0x1026710, Func Offset: 0x170
	// Line 120, Address: 0x102671c, Func Offset: 0x17c
	// Line 121, Address: 0x1026728, Func Offset: 0x188
	// Line 122, Address: 0x1026734, Func Offset: 0x194
	// Line 123, Address: 0x1026740, Func Offset: 0x1a0
	// Line 124, Address: 0x1026750, Func Offset: 0x1b0
	// Line 125, Address: 0x1026760, Func Offset: 0x1c0
	// Line 126, Address: 0x1026770, Func Offset: 0x1d0
	// Line 127, Address: 0x1026780, Func Offset: 0x1e0
	// Line 128, Address: 0x1026790, Func Offset: 0x1f0
	// Line 129, Address: 0x10267a0, Func Offset: 0x200
	// Line 131, Address: 0x10267b0, Func Offset: 0x210
	// Line 132, Address: 0x10267b8, Func Offset: 0x218
	// Line 133, Address: 0x10267c4, Func Offset: 0x224
	// Line 134, Address: 0x10267f4, Func Offset: 0x254
	// Line 135, Address: 0x1026800, Func Offset: 0x260
	// Line 138, Address: 0x1026824, Func Offset: 0x284
	// Line 139, Address: 0x102682c, Func Offset: 0x28c
	// Func End, Address: 0x1026854, Func Offset: 0x2b4
}

// 
// Start address: 0x1026860
void iwa5roll_move(_anon0* pActwk)
{
	unsigned char bD0;
	short Sp;
	unsigned short Sin;
	unsigned short Cos;
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD4;
	_anon2 lD5;
	int lD3;
	// Line 148, Address: 0x1026860, Func Offset: 0
	// Line 156, Address: 0x1026878, Func Offset: 0x18
	// Line 157, Address: 0x1026888, Func Offset: 0x28
	// Line 158, Address: 0x10268c4, Func Offset: 0x64
	// Line 159, Address: 0x10268d0, Func Offset: 0x70
	// Line 163, Address: 0x10268d8, Func Offset: 0x78
	// Line 164, Address: 0x10268f0, Func Offset: 0x90
	// Line 165, Address: 0x10268f4, Func Offset: 0x94
	// Line 166, Address: 0x10268f8, Func Offset: 0x98
	// Line 167, Address: 0x1026910, Func Offset: 0xb0
	// Line 168, Address: 0x1026918, Func Offset: 0xb8
	// Line 169, Address: 0x1026920, Func Offset: 0xc0
	// Line 170, Address: 0x1026960, Func Offset: 0x100
	// Line 171, Address: 0x10269a0, Func Offset: 0x140
	// Line 172, Address: 0x10269b4, Func Offset: 0x154
	// Line 173, Address: 0x10269c8, Func Offset: 0x168
	// Line 174, Address: 0x10269d0, Func Offset: 0x170
	// Line 175, Address: 0x10269dc, Func Offset: 0x17c
	// Line 176, Address: 0x10269e8, Func Offset: 0x188
	// Line 177, Address: 0x10269f8, Func Offset: 0x198
	// Line 179, Address: 0x1026a04, Func Offset: 0x1a4
	// Line 180, Address: 0x1026a14, Func Offset: 0x1b4
	// Line 181, Address: 0x1026a1c, Func Offset: 0x1bc
	// Line 182, Address: 0x1026a28, Func Offset: 0x1c8
	// Line 183, Address: 0x1026a54, Func Offset: 0x1f4
	// Line 184, Address: 0x1026a58, Func Offset: 0x1f8
	// Line 185, Address: 0x1026a60, Func Offset: 0x200
	// Line 186, Address: 0x1026a6c, Func Offset: 0x20c
	// Line 188, Address: 0x1026a88, Func Offset: 0x228
	// Line 190, Address: 0x1026a94, Func Offset: 0x234
	// Line 191, Address: 0x1026aa4, Func Offset: 0x244
	// Line 193, Address: 0x1026ab8, Func Offset: 0x258
	// Func End, Address: 0x1026ad4, Func Offset: 0x274
}

