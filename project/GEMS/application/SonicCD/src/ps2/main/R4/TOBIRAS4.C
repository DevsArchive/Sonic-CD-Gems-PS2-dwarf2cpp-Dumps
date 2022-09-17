typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_5)(void*, void*, int);
typedef void(*type_6)(_anon0*);

typedef _anon1* type_0[3];
typedef _anon0 type_1[128];
typedef unsigned char type_2[32];
typedef _anon7 type_3[20];
typedef _anon7 type_4[0];
typedef void(*type_7)(_anon0*)[3];
typedef unsigned char type_8[2];
typedef unsigned char type_9[22];

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

_anon1 pat00;
_anon1 pat01;
_anon1 pat02;
_anon1* pat_tobiras4[3];
unsigned char switchflag[32];
void(*sMemCpy)(void*, void*, int);
_anon0 actwk[128];

void tobiras4(_anon0* pActwk);
void act_init(_anon0* pActwk);
void act_sense(_anon0* pActwk);
void act_down(_anon0* pActwk);
void act_disp(_anon0* pActwk);

// 
// Start address: 0x1025530
void tobiras4(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[3];
	// Line 57, Address: 0x1025530, Func Offset: 0
	// Line 58, Address: 0x102553c, Func Offset: 0xc
	// Line 65, Address: 0x1025560, Func Offset: 0x30
	// Line 66, Address: 0x102559c, Func Offset: 0x6c
	// Func End, Address: 0x10255ac, Func Offset: 0x7c
}

// 
// Start address: 0x10255b0
void act_init(_anon0* pActwk)
{
	unsigned char* p;
	// Line 71, Address: 0x10255b0, Func Offset: 0
	// Line 74, Address: 0x10255c0, Func Offset: 0x10
	// Line 75, Address: 0x10255dc, Func Offset: 0x2c
	// Line 77, Address: 0x10255e8, Func Offset: 0x38
	// Line 78, Address: 0x10255f4, Func Offset: 0x44
	// Line 80, Address: 0x10255fc, Func Offset: 0x4c
	// Line 82, Address: 0x1025604, Func Offset: 0x54
	// Line 83, Address: 0x1025614, Func Offset: 0x64
	// Line 84, Address: 0x1025624, Func Offset: 0x74
	// Line 85, Address: 0x1025630, Func Offset: 0x80
	// Line 86, Address: 0x1025640, Func Offset: 0x90
	// Line 87, Address: 0x102564c, Func Offset: 0x9c
	// Line 88, Address: 0x1025658, Func Offset: 0xa8
	// Line 89, Address: 0x1025664, Func Offset: 0xb4
	// Line 90, Address: 0x1025670, Func Offset: 0xc0
	// Func End, Address: 0x1025684, Func Offset: 0xd4
}

// 
// Start address: 0x1025690
void act_sense(_anon0* pActwk)
{
	_anon0* pNewActwk;
	unsigned char* p;
	short d5;
	short d6;
	// Line 95, Address: 0x1025690, Func Offset: 0
	// Line 100, Address: 0x10256a8, Func Offset: 0x18
	// Line 101, Address: 0x10256b0, Func Offset: 0x20
	// Line 103, Address: 0x10256c0, Func Offset: 0x30
	// Line 104, Address: 0x10256d4, Func Offset: 0x44
	// Line 105, Address: 0x10256e0, Func Offset: 0x50
	// Line 106, Address: 0x10256ec, Func Offset: 0x5c
	// Line 109, Address: 0x10256f4, Func Offset: 0x64
	// Line 110, Address: 0x1025704, Func Offset: 0x74
	// Line 111, Address: 0x1025710, Func Offset: 0x80
	// Line 112, Address: 0x102571c, Func Offset: 0x8c
	// Line 113, Address: 0x1025728, Func Offset: 0x98
	// Line 114, Address: 0x1025734, Func Offset: 0xa4
	// Line 115, Address: 0x1025744, Func Offset: 0xb4
	// Line 117, Address: 0x1025754, Func Offset: 0xc4
	// Line 118, Address: 0x1025760, Func Offset: 0xd0
	// Line 121, Address: 0x1025770, Func Offset: 0xe0
	// Line 123, Address: 0x1025788, Func Offset: 0xf8
	// Line 124, Address: 0x1025794, Func Offset: 0x104
	// Line 126, Address: 0x102579c, Func Offset: 0x10c
	// Line 127, Address: 0x10257b8, Func Offset: 0x128
	// Line 128, Address: 0x10257c4, Func Offset: 0x134
	// Line 129, Address: 0x10257cc, Func Offset: 0x13c
	// Line 131, Address: 0x10257e0, Func Offset: 0x150
	// Line 132, Address: 0x10257f0, Func Offset: 0x160
	// Line 134, Address: 0x1025800, Func Offset: 0x170
	// Line 136, Address: 0x1025824, Func Offset: 0x194
	// Line 137, Address: 0x1025830, Func Offset: 0x1a0
	// Func End, Address: 0x102584c, Func Offset: 0x1bc
}

// 
// Start address: 0x1025850
void act_down(_anon0* pActwk)
{
	// Line 142, Address: 0x1025850, Func Offset: 0
	// Line 143, Address: 0x102585c, Func Offset: 0xc
	// Line 145, Address: 0x1025874, Func Offset: 0x24
	// Line 146, Address: 0x1025880, Func Offset: 0x30
	// Line 148, Address: 0x1025888, Func Offset: 0x38
	// Line 149, Address: 0x1025898, Func Offset: 0x48
	// Line 150, Address: 0x10258b0, Func Offset: 0x60
	// Line 151, Address: 0x10258bc, Func Offset: 0x6c
	// Func End, Address: 0x10258cc, Func Offset: 0x7c
}

// 
// Start address: 0x10258d0
void act_disp(_anon0* pActwk)
{
	// Line 156, Address: 0x10258d0, Func Offset: 0
	// Line 157, Address: 0x10258dc, Func Offset: 0xc
	// Line 158, Address: 0x10258f0, Func Offset: 0x20
	// Line 159, Address: 0x10258fc, Func Offset: 0x2c
	// Func End, Address: 0x102590c, Func Offset: 0x3c
}

