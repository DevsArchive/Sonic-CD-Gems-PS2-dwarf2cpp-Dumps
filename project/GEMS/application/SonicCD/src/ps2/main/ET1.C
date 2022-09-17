typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;


typedef _anon0 type_0[20];
typedef char type_1[6];
typedef _anon0 type_2[0];
typedef unsigned short type_3[11];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef char* type_6[1];
typedef char type_7[64];
typedef _anon2* type_8[8];
typedef _anon1 type_9[128];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon2** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon2
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

_anon2 tpat00;
_anon2 tpat01;
_anon2 tpat07;
_anon2 tpat02;
_anon2 tpat03;
_anon2 tpat04;
_anon2 tpat05;
_anon2 tpat06;
_anon2* pat_et[8];
unsigned short tbl0sproffset[11];
char tbl0[64];
char pchg0[6];
char* pchg[1];
unsigned char time_flag;
unsigned char generate_flag;
_anon6 stageno;
_anon1 actwk[128];

void et(_anon1* actionwk);
void m_init(_anon1* actionwk);
void m_wait(_anon1* actionwk);
void m_die(_anon1* actionwk);
void m1wait(_anon1* actionwk);
void a_hover(_anon1* actionwk);

// 
// Start address: 0x1020fd0
void et(_anon1* actionwk)
{
	// Line 147, Address: 0x1020fd0, Func Offset: 0
	// Line 148, Address: 0x1020fdc, Func Offset: 0xc
	// Line 151, Address: 0x102101c, Func Offset: 0x4c
	// Line 153, Address: 0x1021028, Func Offset: 0x58
	// Line 154, Address: 0x1021034, Func Offset: 0x64
	// Line 156, Address: 0x102103c, Func Offset: 0x6c
	// Line 157, Address: 0x1021048, Func Offset: 0x78
	// Line 159, Address: 0x1021050, Func Offset: 0x80
	// Line 162, Address: 0x102105c, Func Offset: 0x8c
	// Line 163, Address: 0x1021068, Func Offset: 0x98
	// Line 164, Address: 0x1021080, Func Offset: 0xb0
	// Line 166, Address: 0x102108c, Func Offset: 0xbc
	// Func End, Address: 0x102109c, Func Offset: 0xcc
}

// 
// Start address: 0x10210a0
void m_init(_anon1* actionwk)
{
	unsigned short* a1;
	unsigned short d0;
	// Line 169, Address: 0x10210a0, Func Offset: 0
	// Line 173, Address: 0x10210b0, Func Offset: 0x10
	// Line 174, Address: 0x10210c0, Func Offset: 0x20
	// Line 175, Address: 0x10210d0, Func Offset: 0x30
	// Line 176, Address: 0x10210dc, Func Offset: 0x3c
	// Line 177, Address: 0x10210e8, Func Offset: 0x48
	// Line 178, Address: 0x10210f4, Func Offset: 0x54
	// Line 180, Address: 0x1021100, Func Offset: 0x60
	// Line 181, Address: 0x1021108, Func Offset: 0x68
	// Line 182, Address: 0x102113c, Func Offset: 0x9c
	// Line 188, Address: 0x1021154, Func Offset: 0xb4
	// Line 190, Address: 0x1021164, Func Offset: 0xc4
	// Line 191, Address: 0x102116c, Func Offset: 0xcc
	// Line 192, Address: 0x102117c, Func Offset: 0xdc
	// Line 193, Address: 0x1021188, Func Offset: 0xe8
	// Line 195, Address: 0x1021194, Func Offset: 0xf4
	// Line 196, Address: 0x1021198, Func Offset: 0xf8
	// Line 197, Address: 0x10211b4, Func Offset: 0x114
	// Line 198, Address: 0x10211d0, Func Offset: 0x130
	// Line 199, Address: 0x10211dc, Func Offset: 0x13c
	// Line 201, Address: 0x1021204, Func Offset: 0x164
	// Line 202, Address: 0x1021210, Func Offset: 0x170
	// Line 204, Address: 0x1021220, Func Offset: 0x180
	// Func End, Address: 0x1021234, Func Offset: 0x194
}

// 
// Start address: 0x1021240
void m_wait(_anon1* actionwk)
{
	int d0;
	_anon1* a1;
	// Line 206, Address: 0x1021240, Func Offset: 0
	// Line 210, Address: 0x1021254, Func Offset: 0x14
	// Line 211, Address: 0x1021284, Func Offset: 0x44
	// Line 213, Address: 0x1021290, Func Offset: 0x50
	// Line 214, Address: 0x10212a4, Func Offset: 0x64
	// Line 215, Address: 0x10212ac, Func Offset: 0x6c
	// Line 216, Address: 0x10212b4, Func Offset: 0x74
	// Line 217, Address: 0x10212c0, Func Offset: 0x80
	// Line 218, Address: 0x10212d0, Func Offset: 0x90
	// Line 219, Address: 0x10212dc, Func Offset: 0x9c
	// Line 220, Address: 0x10212e0, Func Offset: 0xa0
	// Line 221, Address: 0x10212ec, Func Offset: 0xac
	// Line 222, Address: 0x10212f4, Func Offset: 0xb4
	// Line 223, Address: 0x102131c, Func Offset: 0xdc
	// Line 225, Address: 0x1021324, Func Offset: 0xe4
	// Line 226, Address: 0x1021338, Func Offset: 0xf8
	// Line 227, Address: 0x102134c, Func Offset: 0x10c
	// Func End, Address: 0x1021364, Func Offset: 0x124
}

// 
// Start address: 0x1021370
void m_die(_anon1* actionwk)
{
	_anon1* a1;
	char d0;
	short d5;
	short d6;
	short a6;
	// Line 229, Address: 0x1021370, Func Offset: 0
	// Line 234, Address: 0x102138c, Func Offset: 0x1c
	// Line 235, Address: 0x102139c, Func Offset: 0x2c
	// Line 236, Address: 0x10213cc, Func Offset: 0x5c
	// Line 238, Address: 0x10213dc, Func Offset: 0x6c
	// Line 239, Address: 0x10213ec, Func Offset: 0x7c
	// Line 240, Address: 0x10213f8, Func Offset: 0x88
	// Line 242, Address: 0x1021400, Func Offset: 0x90
	// Line 243, Address: 0x1021410, Func Offset: 0xa0
	// Line 244, Address: 0x1021430, Func Offset: 0xc0
	// Line 245, Address: 0x1021468, Func Offset: 0xf8
	// Line 246, Address: 0x10214a0, Func Offset: 0x130
	// Line 247, Address: 0x10214a8, Func Offset: 0x138
	// Line 248, Address: 0x10214bc, Func Offset: 0x14c
	// Line 249, Address: 0x10214c8, Func Offset: 0x158
	// Line 250, Address: 0x10214d4, Func Offset: 0x164
	// Line 251, Address: 0x10214ec, Func Offset: 0x17c
	// Line 252, Address: 0x1021504, Func Offset: 0x194
	// Line 253, Address: 0x1021514, Func Offset: 0x1a4
	// Line 254, Address: 0x1021524, Func Offset: 0x1b4
	// Line 255, Address: 0x1021530, Func Offset: 0x1c0
	// Line 256, Address: 0x102153c, Func Offset: 0x1cc
	// Func End, Address: 0x102155c, Func Offset: 0x1ec
}

// 
// Start address: 0x1021560
void m1wait(_anon1* actionwk)
{
	// Line 258, Address: 0x1021560, Func Offset: 0
	// Line 259, Address: 0x102156c, Func Offset: 0xc
	// Line 260, Address: 0x1021588, Func Offset: 0x28
	// Line 261, Address: 0x1021598, Func Offset: 0x38
	// Line 262, Address: 0x10215a8, Func Offset: 0x48
	// Line 263, Address: 0x10215b4, Func Offset: 0x54
	// Func End, Address: 0x10215c4, Func Offset: 0x64
}

// 
// Start address: 0x10215d0
void a_hover(_anon1* actionwk)
{
	unsigned short d0;
	// Line 265, Address: 0x10215d0, Func Offset: 0
	// Line 268, Address: 0x10215dc, Func Offset: 0xc
	// Line 269, Address: 0x10215ec, Func Offset: 0x1c
	// Line 270, Address: 0x10215f8, Func Offset: 0x28
	// Line 271, Address: 0x1021600, Func Offset: 0x30
	// Line 273, Address: 0x102160c, Func Offset: 0x3c
	// Line 274, Address: 0x1021618, Func Offset: 0x48
	// Line 276, Address: 0x1021630, Func Offset: 0x60
	// Line 277, Address: 0x102163c, Func Offset: 0x6c
	// Line 278, Address: 0x1021644, Func Offset: 0x74
	// Line 279, Address: 0x1021674, Func Offset: 0xa4
	// Func End, Address: 0x1021684, Func Offset: 0xb4
}

