typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon0* type_1[8];
typedef _anon7 type_2[0];
typedef char type_3[6];
typedef unsigned short type_4[11];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];
typedef char* type_8[1];
typedef char type_9[64];

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

_anon0 tpat00;
_anon0 tpat01;
_anon0 tpat07;
_anon0 tpat02;
_anon0 tpat03;
_anon0 tpat04;
_anon0 tpat05;
_anon0 tpat06;
_anon0* pat_et[8];
unsigned short tbl0sproffset[11];
char tbl0[64];
char pchg0[6];
char* pchg[1];
unsigned char time_flag;
unsigned char generate_flag;
_anon5 stageno;
_anon1 actwk[128];

void et(_anon1* actionwk);
void m_init(_anon1* actionwk);
void m_wait(_anon1* actionwk);
void m_die(_anon1* actionwk);
void m1wait(_anon1* actionwk);
void a_hover(_anon1* actionwk);

// 
// Start address: 0x101c880
void et(_anon1* actionwk)
{
	// Line 145, Address: 0x101c880, Func Offset: 0
	// Line 146, Address: 0x101c88c, Func Offset: 0xc
	// Line 149, Address: 0x101c8cc, Func Offset: 0x4c
	// Line 151, Address: 0x101c8d8, Func Offset: 0x58
	// Line 152, Address: 0x101c8e4, Func Offset: 0x64
	// Line 154, Address: 0x101c8ec, Func Offset: 0x6c
	// Line 155, Address: 0x101c8f8, Func Offset: 0x78
	// Line 157, Address: 0x101c900, Func Offset: 0x80
	// Line 160, Address: 0x101c90c, Func Offset: 0x8c
	// Line 161, Address: 0x101c918, Func Offset: 0x98
	// Line 162, Address: 0x101c930, Func Offset: 0xb0
	// Line 164, Address: 0x101c93c, Func Offset: 0xbc
	// Func End, Address: 0x101c94c, Func Offset: 0xcc
}

// 
// Start address: 0x101c950
void m_init(_anon1* actionwk)
{
	unsigned short* a1;
	unsigned short d0;
	// Line 167, Address: 0x101c950, Func Offset: 0
	// Line 171, Address: 0x101c960, Func Offset: 0x10
	// Line 172, Address: 0x101c970, Func Offset: 0x20
	// Line 173, Address: 0x101c980, Func Offset: 0x30
	// Line 174, Address: 0x101c98c, Func Offset: 0x3c
	// Line 175, Address: 0x101c998, Func Offset: 0x48
	// Line 176, Address: 0x101c9a4, Func Offset: 0x54
	// Line 178, Address: 0x101c9b0, Func Offset: 0x60
	// Line 179, Address: 0x101c9b8, Func Offset: 0x68
	// Line 180, Address: 0x101c9ec, Func Offset: 0x9c
	// Line 186, Address: 0x101ca04, Func Offset: 0xb4
	// Line 188, Address: 0x101ca14, Func Offset: 0xc4
	// Line 189, Address: 0x101ca1c, Func Offset: 0xcc
	// Line 190, Address: 0x101ca2c, Func Offset: 0xdc
	// Line 191, Address: 0x101ca38, Func Offset: 0xe8
	// Line 193, Address: 0x101ca44, Func Offset: 0xf4
	// Line 194, Address: 0x101ca48, Func Offset: 0xf8
	// Line 195, Address: 0x101ca64, Func Offset: 0x114
	// Line 196, Address: 0x101ca80, Func Offset: 0x130
	// Line 197, Address: 0x101ca8c, Func Offset: 0x13c
	// Line 199, Address: 0x101cab4, Func Offset: 0x164
	// Line 200, Address: 0x101cac0, Func Offset: 0x170
	// Line 202, Address: 0x101cad0, Func Offset: 0x180
	// Func End, Address: 0x101cae4, Func Offset: 0x194
}

// 
// Start address: 0x101caf0
void m_wait(_anon1* actionwk)
{
	int d0;
	_anon1* a1;
	// Line 204, Address: 0x101caf0, Func Offset: 0
	// Line 208, Address: 0x101cb04, Func Offset: 0x14
	// Line 209, Address: 0x101cb34, Func Offset: 0x44
	// Line 211, Address: 0x101cb40, Func Offset: 0x50
	// Line 212, Address: 0x101cb54, Func Offset: 0x64
	// Line 213, Address: 0x101cb5c, Func Offset: 0x6c
	// Line 214, Address: 0x101cb64, Func Offset: 0x74
	// Line 215, Address: 0x101cb70, Func Offset: 0x80
	// Line 216, Address: 0x101cb80, Func Offset: 0x90
	// Line 217, Address: 0x101cb8c, Func Offset: 0x9c
	// Line 218, Address: 0x101cb90, Func Offset: 0xa0
	// Line 219, Address: 0x101cb9c, Func Offset: 0xac
	// Line 220, Address: 0x101cba4, Func Offset: 0xb4
	// Line 221, Address: 0x101cbcc, Func Offset: 0xdc
	// Line 223, Address: 0x101cbd4, Func Offset: 0xe4
	// Line 224, Address: 0x101cbe8, Func Offset: 0xf8
	// Line 225, Address: 0x101cbfc, Func Offset: 0x10c
	// Func End, Address: 0x101cc14, Func Offset: 0x124
}

// 
// Start address: 0x101cc20
void m_die(_anon1* actionwk)
{
	_anon1* a1;
	char d0;
	short d5;
	short d6;
	short a6;
	// Line 227, Address: 0x101cc20, Func Offset: 0
	// Line 232, Address: 0x101cc3c, Func Offset: 0x1c
	// Line 233, Address: 0x101cc4c, Func Offset: 0x2c
	// Line 234, Address: 0x101cc7c, Func Offset: 0x5c
	// Line 236, Address: 0x101cc8c, Func Offset: 0x6c
	// Line 237, Address: 0x101cc9c, Func Offset: 0x7c
	// Line 238, Address: 0x101cca8, Func Offset: 0x88
	// Line 240, Address: 0x101ccb0, Func Offset: 0x90
	// Line 241, Address: 0x101ccc0, Func Offset: 0xa0
	// Line 242, Address: 0x101cce0, Func Offset: 0xc0
	// Line 243, Address: 0x101cd18, Func Offset: 0xf8
	// Line 244, Address: 0x101cd50, Func Offset: 0x130
	// Line 245, Address: 0x101cd58, Func Offset: 0x138
	// Line 246, Address: 0x101cd6c, Func Offset: 0x14c
	// Line 247, Address: 0x101cd78, Func Offset: 0x158
	// Line 248, Address: 0x101cd84, Func Offset: 0x164
	// Line 249, Address: 0x101cd9c, Func Offset: 0x17c
	// Line 250, Address: 0x101cdb4, Func Offset: 0x194
	// Line 251, Address: 0x101cdc4, Func Offset: 0x1a4
	// Line 252, Address: 0x101cdd4, Func Offset: 0x1b4
	// Line 253, Address: 0x101cde0, Func Offset: 0x1c0
	// Line 254, Address: 0x101cdec, Func Offset: 0x1cc
	// Func End, Address: 0x101ce0c, Func Offset: 0x1ec
}

// 
// Start address: 0x101ce10
void m1wait(_anon1* actionwk)
{
	// Line 256, Address: 0x101ce10, Func Offset: 0
	// Line 257, Address: 0x101ce1c, Func Offset: 0xc
	// Line 258, Address: 0x101ce38, Func Offset: 0x28
	// Line 259, Address: 0x101ce48, Func Offset: 0x38
	// Line 260, Address: 0x101ce58, Func Offset: 0x48
	// Line 261, Address: 0x101ce64, Func Offset: 0x54
	// Func End, Address: 0x101ce74, Func Offset: 0x64
}

// 
// Start address: 0x101ce80
void a_hover(_anon1* actionwk)
{
	unsigned short d0;
	// Line 263, Address: 0x101ce80, Func Offset: 0
	// Line 266, Address: 0x101ce8c, Func Offset: 0xc
	// Line 267, Address: 0x101ce9c, Func Offset: 0x1c
	// Line 268, Address: 0x101cea8, Func Offset: 0x28
	// Line 269, Address: 0x101ceb0, Func Offset: 0x30
	// Line 271, Address: 0x101cebc, Func Offset: 0x3c
	// Line 272, Address: 0x101cec8, Func Offset: 0x48
	// Line 274, Address: 0x101cee0, Func Offset: 0x60
	// Line 275, Address: 0x101ceec, Func Offset: 0x6c
	// Line 276, Address: 0x101cef4, Func Offset: 0x74
	// Line 277, Address: 0x101cf24, Func Offset: 0xa4
	// Func End, Address: 0x101cf34, Func Offset: 0xb4
}

