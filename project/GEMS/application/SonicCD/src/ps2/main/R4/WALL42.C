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
typedef _anon0* type_4[1];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];
typedef unsigned char type_8[766];

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

_anon0 pat00;
_anon0* pat_wall42[1];
_anon2 scra_h_posit;
unsigned char flagwork[766];
unsigned char time_flag;
_anon1 actwk[128];

void wall42(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_wait(_anon1* pActwk);
void act_move(_anon1* pActwk);
void act_stop(_anon1* pActwk);

// 
// Start address: 0x102e010
void wall42(_anon1* pActwk)
{
	short d0;
	short d1;
	unsigned char* a1;
	void(*tbl)(_anon1*)[4];
	// Line 52, Address: 0x102e010, Func Offset: 0
	// Line 55, Address: 0x102e028, Func Offset: 0x18
	// Line 63, Address: 0x102e054, Func Offset: 0x44
	// Line 64, Address: 0x102e090, Func Offset: 0x80
	// Line 66, Address: 0x102e09c, Func Offset: 0x8c
	// Line 67, Address: 0x102e0c4, Func Offset: 0xb4
	// Line 68, Address: 0x102e0f0, Func Offset: 0xe0
	// Line 69, Address: 0x102e0fc, Func Offset: 0xec
	// Line 71, Address: 0x102e110, Func Offset: 0x100
	// Line 72, Address: 0x102e118, Func Offset: 0x108
	// Line 73, Address: 0x102e124, Func Offset: 0x114
	// Line 75, Address: 0x102e130, Func Offset: 0x120
	// Func End, Address: 0x102e14c, Func Offset: 0x13c
}

// 
// Start address: 0x102e150
void act_init(_anon1* pActwk)
{
	short index;
	unsigned char* a1;
	// Line 80, Address: 0x102e150, Func Offset: 0
	// Line 84, Address: 0x102e160, Func Offset: 0x10
	// Line 85, Address: 0x102e170, Func Offset: 0x20
	// Line 86, Address: 0x102e17c, Func Offset: 0x2c
	// Line 87, Address: 0x102e188, Func Offset: 0x38
	// Line 88, Address: 0x102e194, Func Offset: 0x44
	// Line 89, Address: 0x102e1a0, Func Offset: 0x50
	// Line 91, Address: 0x102e1b0, Func Offset: 0x60
	// Line 92, Address: 0x102e1cc, Func Offset: 0x7c
	// Line 93, Address: 0x102e1dc, Func Offset: 0x8c
	// Line 94, Address: 0x102e1fc, Func Offset: 0xac
	// Line 95, Address: 0x102e210, Func Offset: 0xc0
	// Line 97, Address: 0x102e218, Func Offset: 0xc8
	// Line 99, Address: 0x102e22c, Func Offset: 0xdc
	// Line 100, Address: 0x102e238, Func Offset: 0xe8
	// Line 101, Address: 0x102e244, Func Offset: 0xf4
	// Line 102, Address: 0x102e254, Func Offset: 0x104
	// Line 105, Address: 0x102e25c, Func Offset: 0x10c
	// Line 106, Address: 0x102e26c, Func Offset: 0x11c
	// Line 108, Address: 0x102e27c, Func Offset: 0x12c
	// Func End, Address: 0x102e290, Func Offset: 0x140
}

// 
// Start address: 0x102e290
void act_wait(_anon1* pActwk)
{
	// Line 113, Address: 0x102e290, Func Offset: 0
	// Line 114, Address: 0x102e29c, Func Offset: 0xc
	// Line 116, Address: 0x102e2b8, Func Offset: 0x28
	// Line 117, Address: 0x102e2c4, Func Offset: 0x34
	// Line 119, Address: 0x102e2d4, Func Offset: 0x44
	// Line 120, Address: 0x102e2e4, Func Offset: 0x54
	// Line 121, Address: 0x102e2f0, Func Offset: 0x60
	// Func End, Address: 0x102e300, Func Offset: 0x70
}

// 
// Start address: 0x102e300
void act_move(_anon1* pActwk)
{
	int d0;
	// Line 126, Address: 0x102e300, Func Offset: 0
	// Line 129, Address: 0x102e310, Func Offset: 0x10
	// Line 131, Address: 0x102e32c, Func Offset: 0x2c
	// Line 132, Address: 0x102e330, Func Offset: 0x30
	// Line 133, Address: 0x102e334, Func Offset: 0x34
	// Line 135, Address: 0x102e348, Func Offset: 0x48
	// Line 136, Address: 0x102e35c, Func Offset: 0x5c
	// Line 138, Address: 0x102e378, Func Offset: 0x78
	// Line 140, Address: 0x102e388, Func Offset: 0x88
	// Line 141, Address: 0x102e398, Func Offset: 0x98
	// Func End, Address: 0x102e3ac, Func Offset: 0xac
}

// 
// Start address: 0x102e3b0
void act_stop(_anon1* pActwk)
{
	// Line 146, Address: 0x102e3b0, Func Offset: 0
	// Line 147, Address: 0x102e3bc, Func Offset: 0xc
	// Line 148, Address: 0x102e3d0, Func Offset: 0x20
	// Func End, Address: 0x102e3e0, Func Offset: 0x30
}

