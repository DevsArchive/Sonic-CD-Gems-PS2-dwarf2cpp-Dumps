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
typedef char* type_4[1];
typedef _anon0* type_5[8];
typedef unsigned char type_6[2];
typedef unsigned short type_7[4];
typedef unsigned short type_8[4][3];
typedef unsigned char type_9[22];
typedef char type_10[6];
typedef char type_11[64];
typedef _anon1 type_12[128];

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

char p_a[6];
char* pchg[1];
_anon0 et_pat00;
_anon0 et_pat01;
_anon0 et_pat02;
_anon0 et_pat03;
_anon0 et_pat04;
_anon0 et_pat05;
_anon0 et_pat06;
_anon0 et_pat07;
_anon0* pat_et[8];
void(*et_jmp_tbl)(_anon1*)[4];
char tbl0[64];
unsigned char time_flag;
unsigned char generate_flag;
_anon5 stageno;
_anon1 actwk[128];

void et(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_wait(_anon1* pActwk);
void m_die(_anon1* pActwk);
void m1wait(_anon1* pActwk);
void a_hover(_anon1* pActwk);

// 
// Start address: 0x1021b90
void et(_anon1* pActwk)
{
	// Line 193, Address: 0x1021b90, Func Offset: 0
	// Line 194, Address: 0x1021b9c, Func Offset: 0xc
	// Line 195, Address: 0x1021be0, Func Offset: 0x50
	// Line 197, Address: 0x1021bec, Func Offset: 0x5c
	// Line 198, Address: 0x1021c04, Func Offset: 0x74
	// Line 200, Address: 0x1021c10, Func Offset: 0x80
	// Func End, Address: 0x1021c20, Func Offset: 0x90
}

// 
// Start address: 0x1021c20
void m_init(_anon1* pActwk)
{
	unsigned char patnowk;
	unsigned short tbl0sproffset[4][3];
	// Line 207, Address: 0x1021c20, Func Offset: 0
	// Line 209, Address: 0x1021c30, Func Offset: 0x10
	// Line 229, Address: 0x1021c64, Func Offset: 0x44
	// Line 230, Address: 0x1021c74, Func Offset: 0x54
	// Line 231, Address: 0x1021c84, Func Offset: 0x64
	// Line 232, Address: 0x1021c90, Func Offset: 0x70
	// Line 233, Address: 0x1021ca8, Func Offset: 0x88
	// Line 235, Address: 0x1021cb4, Func Offset: 0x94
	// Line 237, Address: 0x1021cec, Func Offset: 0xcc
	// Line 238, Address: 0x1021cfc, Func Offset: 0xdc
	// Line 239, Address: 0x1021d0c, Func Offset: 0xec
	// Line 240, Address: 0x1021d1c, Func Offset: 0xfc
	// Line 241, Address: 0x1021d28, Func Offset: 0x108
	// Line 243, Address: 0x1021d34, Func Offset: 0x114
	// Line 245, Address: 0x1021d38, Func Offset: 0x118
	// Line 246, Address: 0x1021d48, Func Offset: 0x128
	// Line 250, Address: 0x1021d50, Func Offset: 0x130
	// Line 251, Address: 0x1021d64, Func Offset: 0x144
	// Line 255, Address: 0x1021d6c, Func Offset: 0x14c
	// Line 257, Address: 0x1021d74, Func Offset: 0x154
	// Line 258, Address: 0x1021d98, Func Offset: 0x178
	// Line 259, Address: 0x1021da4, Func Offset: 0x184
	// Line 263, Address: 0x1021db4, Func Offset: 0x194
	// Line 264, Address: 0x1021dc0, Func Offset: 0x1a0
	// Func End, Address: 0x1021dd4, Func Offset: 0x1b4
}

// 
// Start address: 0x1021de0
void m_wait(_anon1* pActwk)
{
	// Line 271, Address: 0x1021de0, Func Offset: 0
	// Line 272, Address: 0x1021dec, Func Offset: 0xc
	// Line 273, Address: 0x1021e10, Func Offset: 0x30
	// Line 274, Address: 0x1021e1c, Func Offset: 0x3c
	// Line 275, Address: 0x1021e2c, Func Offset: 0x4c
	// Line 276, Address: 0x1021e40, Func Offset: 0x60
	// Line 277, Address: 0x1021e48, Func Offset: 0x68
	// Line 278, Address: 0x1021e54, Func Offset: 0x74
	// Line 279, Address: 0x1021e64, Func Offset: 0x84
	// Line 280, Address: 0x1021e70, Func Offset: 0x90
	// Line 281, Address: 0x1021e7c, Func Offset: 0x9c
	// Line 282, Address: 0x1021e98, Func Offset: 0xb8
	// Line 286, Address: 0x1021eac, Func Offset: 0xcc
	// Line 288, Address: 0x1021eb4, Func Offset: 0xd4
	// Line 289, Address: 0x1021ec8, Func Offset: 0xe8
	// Line 294, Address: 0x1021edc, Func Offset: 0xfc
	// Func End, Address: 0x1021eec, Func Offset: 0x10c
}

// 
// Start address: 0x1021ef0
void m_die(_anon1* pActwk)
{
	char* pTbl;
	char timewk;
	short xwk;
	short ywk;
	_anon1* pNewact;
	// Line 301, Address: 0x1021ef0, Func Offset: 0
	// Line 306, Address: 0x1021f0c, Func Offset: 0x1c
	// Line 307, Address: 0x1021f14, Func Offset: 0x24
	// Line 308, Address: 0x1021f20, Func Offset: 0x30
	// Line 310, Address: 0x1021f24, Func Offset: 0x34
	// Line 312, Address: 0x1021f34, Func Offset: 0x44
	// Line 313, Address: 0x1021f44, Func Offset: 0x54
	// Line 314, Address: 0x1021f50, Func Offset: 0x60
	// Line 315, Address: 0x1021f58, Func Offset: 0x68
	// Line 316, Address: 0x1021f80, Func Offset: 0x90
	// Line 317, Address: 0x1021f94, Func Offset: 0xa4
	// Line 318, Address: 0x1021f98, Func Offset: 0xa8
	// Line 319, Address: 0x1021fac, Func Offset: 0xbc
	// Line 320, Address: 0x1021fb0, Func Offset: 0xc0
	// Line 322, Address: 0x1021fb8, Func Offset: 0xc8
	// Line 323, Address: 0x1021fcc, Func Offset: 0xdc
	// Line 324, Address: 0x1021fd8, Func Offset: 0xe8
	// Line 325, Address: 0x1021fe4, Func Offset: 0xf4
	// Line 326, Address: 0x1022010, Func Offset: 0x120
	// Line 327, Address: 0x102203c, Func Offset: 0x14c
	// Line 333, Address: 0x1022048, Func Offset: 0x158
	// Func End, Address: 0x1022068, Func Offset: 0x178
}

// 
// Start address: 0x1022070
void m1wait(_anon1* pActwk)
{
	// Line 340, Address: 0x1022070, Func Offset: 0
	// Line 341, Address: 0x102207c, Func Offset: 0xc
	// Line 342, Address: 0x102209c, Func Offset: 0x2c
	// Line 343, Address: 0x10220ac, Func Offset: 0x3c
	// Line 344, Address: 0x10220bc, Func Offset: 0x4c
	// Line 346, Address: 0x10220c8, Func Offset: 0x58
	// Func End, Address: 0x10220d8, Func Offset: 0x68
}

// 
// Start address: 0x10220e0
void a_hover(_anon1* pActwk)
{
	short timewk;
	// Line 360, Address: 0x10220e0, Func Offset: 0
	// Line 363, Address: 0x10220ec, Func Offset: 0xc
	// Line 365, Address: 0x10220fc, Func Offset: 0x1c
	// Line 366, Address: 0x102210c, Func Offset: 0x2c
	// Line 367, Address: 0x1022120, Func Offset: 0x40
	// Line 370, Address: 0x1022138, Func Offset: 0x58
	// Line 371, Address: 0x1022148, Func Offset: 0x68
	// Line 372, Address: 0x102215c, Func Offset: 0x7c
	// Line 374, Address: 0x102216c, Func Offset: 0x8c
	// Func End, Address: 0x102217c, Func Offset: 0x9c
}

