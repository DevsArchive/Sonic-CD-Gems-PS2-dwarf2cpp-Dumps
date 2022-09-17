typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_1)(_anon1*);

typedef _anon7 type_0[20];
typedef void(*type_2)(_anon1*)[4];
typedef _anon7 type_3[0];
typedef _anon0* type_4[1];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef unsigned char type_7[766];
typedef _anon1 type_8[128];

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

_anon0 wall4_pat0;
_anon0* pat_wall4[1];
_anon1 actwk[128];
unsigned char flagwork[766];
unsigned char time_flag;
_anon2 scra_h_posit;

void wall4(_anon1* pActwk);
void wall4_init(_anon1* pActwk);
void wall4_sense(_anon1* pActwk);
void wall4_wait(_anon1* pActwk);
void wall4_down(_anon1* pActwk);
void frameout_s_(_anon1* pActwk);

// 
// Start address: 0x10204e0
void wall4(_anon1* pActwk)
{
	void(*wall4_acttbl)(_anon1*)[4];
	// Line 80, Address: 0x10204e0, Func Offset: 0
	// Line 81, Address: 0x10204ec, Func Offset: 0xc
	// Line 88, Address: 0x1020518, Func Offset: 0x38
	// Line 89, Address: 0x1020554, Func Offset: 0x74
	// Line 90, Address: 0x1020568, Func Offset: 0x88
	// Line 91, Address: 0x1020574, Func Offset: 0x94
	// Line 92, Address: 0x1020580, Func Offset: 0xa0
	// Func End, Address: 0x1020590, Func Offset: 0xb0
}

// 
// Start address: 0x1020590
void wall4_init(_anon1* pActwk)
{
	// Line 101, Address: 0x1020590, Func Offset: 0
	// Line 102, Address: 0x1020598, Func Offset: 0x8
	// Line 103, Address: 0x10205a8, Func Offset: 0x18
	// Line 105, Address: 0x10205b4, Func Offset: 0x24
	// Line 106, Address: 0x10205c0, Func Offset: 0x30
	// Line 107, Address: 0x10205cc, Func Offset: 0x3c
	// Line 108, Address: 0x10205d8, Func Offset: 0x48
	// Line 109, Address: 0x10205e4, Func Offset: 0x54
	// Line 111, Address: 0x10205f4, Func Offset: 0x64
	// Line 113, Address: 0x1020624, Func Offset: 0x94
	// Line 115, Address: 0x1020650, Func Offset: 0xc0
	// Line 116, Address: 0x1020674, Func Offset: 0xe4
	// Line 120, Address: 0x1020680, Func Offset: 0xf0
	// Line 121, Address: 0x10206a4, Func Offset: 0x114
	// Line 124, Address: 0x10206ac, Func Offset: 0x11c
	// Line 125, Address: 0x10206d4, Func Offset: 0x144
	// Line 126, Address: 0x10206e4, Func Offset: 0x154
	// Line 128, Address: 0x10206f4, Func Offset: 0x164
	// Func End, Address: 0x1020700, Func Offset: 0x170
}

// 
// Start address: 0x1020700
void wall4_sense(_anon1* pActwk)
{
	// Line 137, Address: 0x1020700, Func Offset: 0
	// Line 138, Address: 0x1020708, Func Offset: 0x8
	// Line 139, Address: 0x1020740, Func Offset: 0x40
	// Line 140, Address: 0x102077c, Func Offset: 0x7c
	// Line 141, Address: 0x1020788, Func Offset: 0x88
	// Line 144, Address: 0x1020798, Func Offset: 0x98
	// Func End, Address: 0x10207a4, Func Offset: 0xa4
}

// 
// Start address: 0x10207b0
void wall4_wait(_anon1* pActwk)
{
	// Line 153, Address: 0x10207b0, Func Offset: 0
	// Line 154, Address: 0x10207b8, Func Offset: 0x8
	// Line 156, Address: 0x10207c8, Func Offset: 0x18
	// Line 157, Address: 0x10207ec, Func Offset: 0x3c
	// Line 159, Address: 0x10207fc, Func Offset: 0x4c
	// Func End, Address: 0x1020808, Func Offset: 0x58
}

// 
// Start address: 0x1020810
void wall4_down(_anon1* pActwk)
{
	// Line 168, Address: 0x1020810, Func Offset: 0
	// Line 169, Address: 0x1020818, Func Offset: 0x8
	// Line 170, Address: 0x102082c, Func Offset: 0x1c
	// Line 171, Address: 0x102084c, Func Offset: 0x3c
	// Line 172, Address: 0x1020854, Func Offset: 0x44
	// Line 174, Address: 0x1020864, Func Offset: 0x54
	// Func End, Address: 0x1020870, Func Offset: 0x60
}

// 
// Start address: 0x1020870
void frameout_s_(_anon1* pActwk)
{
	// Line 183, Address: 0x1020870, Func Offset: 0
	// Line 184, Address: 0x102087c, Func Offset: 0xc
	// Line 185, Address: 0x1020898, Func Offset: 0x28
	// Line 186, Address: 0x10208d4, Func Offset: 0x64
	// Line 187, Address: 0x10208f8, Func Offset: 0x88
	// Line 190, Address: 0x1020904, Func Offset: 0x94
	// Func End, Address: 0x1020914, Func Offset: 0xa4
}

