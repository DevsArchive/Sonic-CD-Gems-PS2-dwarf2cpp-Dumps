typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_9)(_anon1*);

typedef _anon7 type_0[20];
typedef short type_1[3];
typedef _anon7 type_2[0];
typedef unsigned char type_3[6];
typedef int type_4[6];
typedef _anon0* type_5[6];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef _anon1 type_8[128];
typedef void(*type_10)(_anon1*)[3];

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
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0* pat_kowasi[6];
void(*kowasi_act_tbl)(_anon1*)[3];
_anon1 actwk[128];

void kowasi(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_wait(_anon1* pActwk);
void m_down(_anon1* pActwk);
void m_make(_anon1* pActwk);

// 
// Start address: 0x1024720
void kowasi(_anon1* pActwk)
{
	// Line 111, Address: 0x1024720, Func Offset: 0
	// Line 112, Address: 0x102472c, Func Offset: 0xc
	// Line 113, Address: 0x1024770, Func Offset: 0x50
	// Func End, Address: 0x1024780, Func Offset: 0x60
}

// 
// Start address: 0x1024780
void m_init(_anon1* pActwk)
{
	// Line 119, Address: 0x1024780, Func Offset: 0
	// Line 120, Address: 0x102478c, Func Offset: 0xc
	// Line 121, Address: 0x102479c, Func Offset: 0x1c
	// Line 122, Address: 0x10247ac, Func Offset: 0x2c
	// Line 123, Address: 0x10247b8, Func Offset: 0x38
	// Line 124, Address: 0x10247d0, Func Offset: 0x50
	// Line 125, Address: 0x10247dc, Func Offset: 0x5c
	// Line 126, Address: 0x10247e8, Func Offset: 0x68
	// Line 127, Address: 0x10247f4, Func Offset: 0x74
	// Line 129, Address: 0x1024804, Func Offset: 0x84
	// Line 130, Address: 0x1024824, Func Offset: 0xa4
	// Line 131, Address: 0x1024840, Func Offset: 0xc0
	// Line 132, Address: 0x1024850, Func Offset: 0xd0
	// Line 136, Address: 0x1024860, Func Offset: 0xe0
	// Line 137, Address: 0x102486c, Func Offset: 0xec
	// Func End, Address: 0x102487c, Func Offset: 0xfc
}

// 
// Start address: 0x1024880
void m_wait(_anon1* pActwk)
{
	// Line 143, Address: 0x1024880, Func Offset: 0
	// Line 144, Address: 0x102488c, Func Offset: 0xc
	// Line 145, Address: 0x102489c, Func Offset: 0x1c
	// Line 146, Address: 0x10248b0, Func Offset: 0x30
	// Line 147, Address: 0x10248c0, Func Offset: 0x40
	// Line 148, Address: 0x10248d0, Func Offset: 0x50
	// Line 149, Address: 0x10248e0, Func Offset: 0x60
	// Line 150, Address: 0x10248fc, Func Offset: 0x7c
	// Line 154, Address: 0x1024910, Func Offset: 0x90
	// Line 155, Address: 0x102491c, Func Offset: 0x9c
	// Line 159, Address: 0x1024924, Func Offset: 0xa4
	// Line 160, Address: 0x1024938, Func Offset: 0xb8
	// Line 161, Address: 0x1024944, Func Offset: 0xc4
	// Line 162, Address: 0x1024950, Func Offset: 0xd0
	// Func End, Address: 0x1024960, Func Offset: 0xe0
}

// 
// Start address: 0x1024960
void m_down(_anon1* pActwk)
{
	// Line 168, Address: 0x1024960, Func Offset: 0
	// Line 169, Address: 0x102496c, Func Offset: 0xc
	// Line 170, Address: 0x1024984, Func Offset: 0x24
	// Line 171, Address: 0x10249a0, Func Offset: 0x40
	// Line 172, Address: 0x10249bc, Func Offset: 0x5c
	// Line 174, Address: 0x10249ec, Func Offset: 0x8c
	// Line 175, Address: 0x10249f8, Func Offset: 0x98
	// Line 176, Address: 0x1024a00, Func Offset: 0xa0
	// Line 178, Address: 0x1024a0c, Func Offset: 0xac
	// Func End, Address: 0x1024a1c, Func Offset: 0xbc
}

// 
// Start address: 0x1024a20
void m_make(_anon1* pActwk)
{
	unsigned char* pPat;
	short* pPosiy;
	int* pSpeed;
	int spdwk;
	int i;
	_anon1* pNewact;
	int tbl0speed[6];
	unsigned char tbl0pat[6];
	short tbl0dposiy[3];
	// Line 184, Address: 0x1024a20, Func Offset: 0
	// Line 203, Address: 0x1024a40, Func Offset: 0x20
	// Line 205, Address: 0x1024a4c, Func Offset: 0x2c
	// Line 206, Address: 0x1024a54, Func Offset: 0x34
	// Line 207, Address: 0x1024a5c, Func Offset: 0x3c
	// Line 209, Address: 0x1024a64, Func Offset: 0x44
	// Line 210, Address: 0x1024a80, Func Offset: 0x60
	// Line 214, Address: 0x1024a84, Func Offset: 0x64
	// Line 216, Address: 0x1024a98, Func Offset: 0x78
	// Line 217, Address: 0x1024aa0, Func Offset: 0x80
	// Line 219, Address: 0x1024aac, Func Offset: 0x8c
	// Line 220, Address: 0x1024ab4, Func Offset: 0x94
	// Line 224, Address: 0x1024ac8, Func Offset: 0xa8
	// Line 225, Address: 0x1024ad8, Func Offset: 0xb8
	// Line 226, Address: 0x1024ae8, Func Offset: 0xc8
	// Line 227, Address: 0x1024af8, Func Offset: 0xd8
	// Line 228, Address: 0x1024b08, Func Offset: 0xe8
	// Line 229, Address: 0x1024b18, Func Offset: 0xf8
	// Line 230, Address: 0x1024b28, Func Offset: 0x108
	// Line 231, Address: 0x1024b38, Func Offset: 0x118
	// Line 235, Address: 0x1024b48, Func Offset: 0x128
	// Line 236, Address: 0x1024b5c, Func Offset: 0x13c
	// Line 237, Address: 0x1024b80, Func Offset: 0x160
	// Line 238, Address: 0x1024b9c, Func Offset: 0x17c
	// Line 239, Address: 0x1024ba8, Func Offset: 0x188
	// Line 241, Address: 0x1024bc0, Func Offset: 0x1a0
	// Line 242, Address: 0x1024bd8, Func Offset: 0x1b8
	// Line 246, Address: 0x1024bdc, Func Offset: 0x1bc
	// Line 247, Address: 0x1024be8, Func Offset: 0x1c8
	// Line 250, Address: 0x1024bf8, Func Offset: 0x1d8
	// Line 251, Address: 0x1024c04, Func Offset: 0x1e4
	// Func End, Address: 0x1024c28, Func Offset: 0x208
}

