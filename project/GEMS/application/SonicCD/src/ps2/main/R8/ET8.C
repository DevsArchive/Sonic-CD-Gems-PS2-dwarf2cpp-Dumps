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
typedef char type_2[6];
typedef unsigned short type_3[11];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef char* type_6[1];
typedef char type_7[64];
typedef _anon1 type_8[128];
typedef _anon0* type_9[8];

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
// Start address: 0x101fac0
void et(_anon1* actionwk)
{
	// Line 144, Address: 0x101fac0, Func Offset: 0
	// Line 145, Address: 0x101facc, Func Offset: 0xc
	// Line 148, Address: 0x101fb0c, Func Offset: 0x4c
	// Line 150, Address: 0x101fb18, Func Offset: 0x58
	// Line 151, Address: 0x101fb24, Func Offset: 0x64
	// Line 153, Address: 0x101fb2c, Func Offset: 0x6c
	// Line 154, Address: 0x101fb38, Func Offset: 0x78
	// Line 156, Address: 0x101fb40, Func Offset: 0x80
	// Line 159, Address: 0x101fb4c, Func Offset: 0x8c
	// Line 160, Address: 0x101fb58, Func Offset: 0x98
	// Line 161, Address: 0x101fb70, Func Offset: 0xb0
	// Line 163, Address: 0x101fb7c, Func Offset: 0xbc
	// Func End, Address: 0x101fb8c, Func Offset: 0xcc
}

// 
// Start address: 0x101fb90
void m_init(_anon1* actionwk)
{
	unsigned short* a1;
	unsigned short d0;
	// Line 166, Address: 0x101fb90, Func Offset: 0
	// Line 170, Address: 0x101fba0, Func Offset: 0x10
	// Line 171, Address: 0x101fbb0, Func Offset: 0x20
	// Line 172, Address: 0x101fbc0, Func Offset: 0x30
	// Line 173, Address: 0x101fbcc, Func Offset: 0x3c
	// Line 174, Address: 0x101fbd8, Func Offset: 0x48
	// Line 175, Address: 0x101fbe4, Func Offset: 0x54
	// Line 177, Address: 0x101fbf0, Func Offset: 0x60
	// Line 178, Address: 0x101fbf8, Func Offset: 0x68
	// Line 179, Address: 0x101fc2c, Func Offset: 0x9c
	// Line 185, Address: 0x101fc44, Func Offset: 0xb4
	// Line 187, Address: 0x101fc54, Func Offset: 0xc4
	// Line 188, Address: 0x101fc5c, Func Offset: 0xcc
	// Line 189, Address: 0x101fc6c, Func Offset: 0xdc
	// Line 190, Address: 0x101fc78, Func Offset: 0xe8
	// Line 192, Address: 0x101fc84, Func Offset: 0xf4
	// Line 193, Address: 0x101fc88, Func Offset: 0xf8
	// Line 194, Address: 0x101fca4, Func Offset: 0x114
	// Line 195, Address: 0x101fcc0, Func Offset: 0x130
	// Line 196, Address: 0x101fccc, Func Offset: 0x13c
	// Line 198, Address: 0x101fcf4, Func Offset: 0x164
	// Line 199, Address: 0x101fd00, Func Offset: 0x170
	// Line 201, Address: 0x101fd10, Func Offset: 0x180
	// Func End, Address: 0x101fd24, Func Offset: 0x194
}

// 
// Start address: 0x101fd30
void m_wait(_anon1* actionwk)
{
	int d0;
	_anon1* a1;
	// Line 203, Address: 0x101fd30, Func Offset: 0
	// Line 207, Address: 0x101fd44, Func Offset: 0x14
	// Line 208, Address: 0x101fd74, Func Offset: 0x44
	// Line 210, Address: 0x101fd80, Func Offset: 0x50
	// Line 211, Address: 0x101fd94, Func Offset: 0x64
	// Line 212, Address: 0x101fd9c, Func Offset: 0x6c
	// Line 213, Address: 0x101fda4, Func Offset: 0x74
	// Line 214, Address: 0x101fdb0, Func Offset: 0x80
	// Line 215, Address: 0x101fdc0, Func Offset: 0x90
	// Line 216, Address: 0x101fdcc, Func Offset: 0x9c
	// Line 217, Address: 0x101fdd0, Func Offset: 0xa0
	// Line 218, Address: 0x101fddc, Func Offset: 0xac
	// Line 219, Address: 0x101fde4, Func Offset: 0xb4
	// Line 220, Address: 0x101fe0c, Func Offset: 0xdc
	// Line 222, Address: 0x101fe14, Func Offset: 0xe4
	// Line 223, Address: 0x101fe28, Func Offset: 0xf8
	// Line 224, Address: 0x101fe3c, Func Offset: 0x10c
	// Func End, Address: 0x101fe54, Func Offset: 0x124
}

// 
// Start address: 0x101fe60
void m_die(_anon1* actionwk)
{
	_anon1* a1;
	char d0;
	short d5;
	short d6;
	short a6;
	// Line 226, Address: 0x101fe60, Func Offset: 0
	// Line 231, Address: 0x101fe7c, Func Offset: 0x1c
	// Line 232, Address: 0x101fe8c, Func Offset: 0x2c
	// Line 233, Address: 0x101febc, Func Offset: 0x5c
	// Line 235, Address: 0x101fecc, Func Offset: 0x6c
	// Line 236, Address: 0x101fedc, Func Offset: 0x7c
	// Line 237, Address: 0x101fee8, Func Offset: 0x88
	// Line 239, Address: 0x101fef0, Func Offset: 0x90
	// Line 240, Address: 0x101ff00, Func Offset: 0xa0
	// Line 241, Address: 0x101ff20, Func Offset: 0xc0
	// Line 242, Address: 0x101ff58, Func Offset: 0xf8
	// Line 243, Address: 0x101ff90, Func Offset: 0x130
	// Line 244, Address: 0x101ff98, Func Offset: 0x138
	// Line 245, Address: 0x101ffac, Func Offset: 0x14c
	// Line 246, Address: 0x101ffb8, Func Offset: 0x158
	// Line 247, Address: 0x101ffc4, Func Offset: 0x164
	// Line 248, Address: 0x101ffdc, Func Offset: 0x17c
	// Line 249, Address: 0x101fff4, Func Offset: 0x194
	// Line 250, Address: 0x1020004, Func Offset: 0x1a4
	// Line 251, Address: 0x1020014, Func Offset: 0x1b4
	// Line 252, Address: 0x1020020, Func Offset: 0x1c0
	// Line 253, Address: 0x102002c, Func Offset: 0x1cc
	// Func End, Address: 0x102004c, Func Offset: 0x1ec
}

// 
// Start address: 0x1020050
void m1wait(_anon1* actionwk)
{
	// Line 255, Address: 0x1020050, Func Offset: 0
	// Line 256, Address: 0x102005c, Func Offset: 0xc
	// Line 257, Address: 0x1020078, Func Offset: 0x28
	// Line 258, Address: 0x1020088, Func Offset: 0x38
	// Line 259, Address: 0x1020098, Func Offset: 0x48
	// Line 260, Address: 0x10200a4, Func Offset: 0x54
	// Func End, Address: 0x10200b4, Func Offset: 0x64
}

// 
// Start address: 0x10200c0
void a_hover(_anon1* actionwk)
{
	unsigned short d0;
	// Line 262, Address: 0x10200c0, Func Offset: 0
	// Line 265, Address: 0x10200cc, Func Offset: 0xc
	// Line 266, Address: 0x10200dc, Func Offset: 0x1c
	// Line 267, Address: 0x10200e8, Func Offset: 0x28
	// Line 268, Address: 0x10200f0, Func Offset: 0x30
	// Line 270, Address: 0x10200fc, Func Offset: 0x3c
	// Line 271, Address: 0x1020108, Func Offset: 0x48
	// Line 273, Address: 0x1020120, Func Offset: 0x60
	// Line 274, Address: 0x102012c, Func Offset: 0x6c
	// Line 275, Address: 0x1020134, Func Offset: 0x74
	// Line 276, Address: 0x1020164, Func Offset: 0xa4
	// Func End, Address: 0x1020174, Func Offset: 0xb4
}

