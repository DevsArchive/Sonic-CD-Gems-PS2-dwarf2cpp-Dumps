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
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon1 type_4[128];
typedef _anon0* type_5[2];

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

_anon0 nullpat;
_anon0 piston6pat0;
_anon0* piston6pat[2];
_anon1 actwk[128];

void piston6(_anon1* actionwk);
void piston6_ridechk(_anon1* actionwk);
void piston6_init(_anon1* actionwk);
void piston6_move(_anon1* actionwk);
void piston6_sub(_anon1* actionwk);
void pis6_setdata(_anon1* actionwk, _anon1* a1, short d0);
void piston6_side(_anon1* actionwk);

// 
// Start address: 0x101c9a0
void piston6(_anon1* actionwk)
{
	// Line 42, Address: 0x101c9a0, Func Offset: 0
	// Line 43, Address: 0x101c9ac, Func Offset: 0xc
	// Line 45, Address: 0x101c9c4, Func Offset: 0x24
	// Line 46, Address: 0x101c9d0, Func Offset: 0x30
	// Line 48, Address: 0x101c9d8, Func Offset: 0x38
	// Line 51, Address: 0x101ca00, Func Offset: 0x60
	// Line 53, Address: 0x101ca0c, Func Offset: 0x6c
	// Line 56, Address: 0x101ca18, Func Offset: 0x78
	// Line 57, Address: 0x101ca24, Func Offset: 0x84
	// Line 58, Address: 0x101ca30, Func Offset: 0x90
	// Func End, Address: 0x101ca40, Func Offset: 0xa0
}

// 
// Start address: 0x101ca40
void piston6_ridechk(_anon1* actionwk)
{
	// Line 60, Address: 0x101ca40, Func Offset: 0
	// Line 61, Address: 0x101ca4c, Func Offset: 0xc
	// Line 62, Address: 0x101ca60, Func Offset: 0x20
	// Func End, Address: 0x101ca70, Func Offset: 0x30
}

// 
// Start address: 0x101ca70
void piston6_init(_anon1* actionwk)
{
	_anon1* a1;
	// Line 64, Address: 0x101ca70, Func Offset: 0
	// Line 67, Address: 0x101ca7c, Func Offset: 0xc
	// Line 68, Address: 0x101ca8c, Func Offset: 0x1c
	// Line 70, Address: 0x101ca9c, Func Offset: 0x2c
	// Line 71, Address: 0x101caa8, Func Offset: 0x38
	// Line 72, Address: 0x101cab8, Func Offset: 0x48
	// Line 73, Address: 0x101cac4, Func Offset: 0x54
	// Line 74, Address: 0x101cad0, Func Offset: 0x60
	// Line 75, Address: 0x101cae0, Func Offset: 0x70
	// Line 76, Address: 0x101caf0, Func Offset: 0x80
	// Line 77, Address: 0x101cb18, Func Offset: 0xa8
	// Line 78, Address: 0x101cb40, Func Offset: 0xd0
	// Func End, Address: 0x101cb50, Func Offset: 0xe0
}

// 
// Start address: 0x101cb50
void piston6_move(_anon1* actionwk)
{
	short d0;
	// Line 80, Address: 0x101cb50, Func Offset: 0
	// Line 83, Address: 0x101cb60, Func Offset: 0x10
	// Line 84, Address: 0x101cb6c, Func Offset: 0x1c
	// Line 85, Address: 0x101cb80, Func Offset: 0x30
	// Line 86, Address: 0x101cb9c, Func Offset: 0x4c
	// Line 87, Address: 0x101cbb0, Func Offset: 0x60
	// Line 89, Address: 0x101cbb8, Func Offset: 0x68
	// Line 91, Address: 0x101cbcc, Func Offset: 0x7c
	// Line 94, Address: 0x101cbe0, Func Offset: 0x90
	// Line 96, Address: 0x101cbf8, Func Offset: 0xa8
	// Line 97, Address: 0x101cc0c, Func Offset: 0xbc
	// Line 100, Address: 0x101cc14, Func Offset: 0xc4
	// Line 101, Address: 0x101cc20, Func Offset: 0xd0
	// Func End, Address: 0x101cc34, Func Offset: 0xe4
}

// 
// Start address: 0x101cc40
void piston6_sub(_anon1* actionwk)
{
	// Line 103, Address: 0x101cc40, Func Offset: 0
	// Line 104, Address: 0x101cc48, Func Offset: 0x8
	// Line 106, Address: 0x101cc5c, Func Offset: 0x1c
	// Line 109, Address: 0x101cc7c, Func Offset: 0x3c
	// Line 111, Address: 0x101cc90, Func Offset: 0x50
	// Line 112, Address: 0x101cca0, Func Offset: 0x60
	// Line 113, Address: 0x101ccc0, Func Offset: 0x80
	// Line 115, Address: 0x101ccd4, Func Offset: 0x94
	// Line 116, Address: 0x101cce0, Func Offset: 0xa0
	// Line 120, Address: 0x101cce8, Func Offset: 0xa8
	// Line 121, Address: 0x101ccf8, Func Offset: 0xb8
	// Line 122, Address: 0x101cd10, Func Offset: 0xd0
	// Line 123, Address: 0x101cd1c, Func Offset: 0xdc
	// Line 124, Address: 0x101cd28, Func Offset: 0xe8
	// Line 126, Address: 0x101cd34, Func Offset: 0xf4
	// Func End, Address: 0x101cd40, Func Offset: 0x100
}

// 
// Start address: 0x101cd40
void pis6_setdata(_anon1* actionwk, _anon1* a1, short d0)
{
	// Line 129, Address: 0x101cd40, Func Offset: 0
	// Line 130, Address: 0x101cd50, Func Offset: 0x10
	// Line 131, Address: 0x101cd5c, Func Offset: 0x1c
	// Line 132, Address: 0x101cd90, Func Offset: 0x50
	// Line 133, Address: 0x101cd9c, Func Offset: 0x5c
	// Line 134, Address: 0x101cdcc, Func Offset: 0x8c
	// Line 135, Address: 0x101cddc, Func Offset: 0x9c
	// Line 136, Address: 0x101cdec, Func Offset: 0xac
	// Line 137, Address: 0x101cdfc, Func Offset: 0xbc
	// Line 139, Address: 0x101ce08, Func Offset: 0xc8
	// Line 140, Address: 0x101ce14, Func Offset: 0xd4
	// Func End, Address: 0x101ce20, Func Offset: 0xe0
}

// 
// Start address: 0x101ce20
void piston6_side(_anon1* actionwk)
{
	_anon1* a1;
	// Line 143, Address: 0x101ce20, Func Offset: 0
	// Line 146, Address: 0x101ce30, Func Offset: 0x10
	// Line 147, Address: 0x101ce54, Func Offset: 0x34
	// Line 149, Address: 0x101ce68, Func Offset: 0x48
	// Line 150, Address: 0x101ce74, Func Offset: 0x54
	// Line 152, Address: 0x101ce7c, Func Offset: 0x5c
	// Line 154, Address: 0x101ce88, Func Offset: 0x68
	// Line 155, Address: 0x101ce9c, Func Offset: 0x7c
	// Line 156, Address: 0x101cea8, Func Offset: 0x88
	// Func End, Address: 0x101cebc, Func Offset: 0x9c
}

