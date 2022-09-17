typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_0)(_anon0*);

typedef _anon7 type_1[20];
typedef void(*type_2)(_anon0*)[4];
typedef _anon7 type_3[0];
typedef char* type_4[1];
typedef _anon1* type_5[8];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][3];
typedef unsigned char type_8[2];
typedef unsigned char type_9[22];
typedef char type_10[6];
typedef char type_11[64];
typedef _anon0 type_12[128];

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

char p_a[6];
char* pchg[1];
_anon1 et_pat00;
_anon1 et_pat01;
_anon1 et_pat02;
_anon1 et_pat03;
_anon1 et_pat04;
_anon1 et_pat05;
_anon1 et_pat06;
_anon1 et_pat07;
_anon1* pat_et[8];
void(*et_jmp_tbl)(_anon0*)[4];
char tbl0[64];
unsigned char time_flag;
unsigned char generate_flag;
_anon5 stageno;
_anon0 actwk[128];

void et(_anon0* pActwk);
void m_init(_anon0* pActwk);
void m_wait(_anon0* pActwk);
void m_die(_anon0* pActwk);
void m1wait(_anon0* pActwk);
void a_hover(_anon0* pActwk);

// 
// Start address: 0x1021c70
void et(_anon0* pActwk)
{
	// Line 194, Address: 0x1021c70, Func Offset: 0
	// Line 195, Address: 0x1021c7c, Func Offset: 0xc
	// Line 196, Address: 0x1021cc0, Func Offset: 0x50
	// Line 200, Address: 0x1021ccc, Func Offset: 0x5c
	// Line 201, Address: 0x1021ce4, Func Offset: 0x74
	// Line 203, Address: 0x1021cf0, Func Offset: 0x80
	// Func End, Address: 0x1021d00, Func Offset: 0x90
}

// 
// Start address: 0x1021d00
void m_init(_anon0* pActwk)
{
	unsigned char patnowk;
	unsigned short tbl0sproffset[4][3];
	// Line 210, Address: 0x1021d00, Func Offset: 0
	// Line 212, Address: 0x1021d10, Func Offset: 0x10
	// Line 232, Address: 0x1021d44, Func Offset: 0x44
	// Line 233, Address: 0x1021d54, Func Offset: 0x54
	// Line 234, Address: 0x1021d64, Func Offset: 0x64
	// Line 235, Address: 0x1021d70, Func Offset: 0x70
	// Line 236, Address: 0x1021d88, Func Offset: 0x88
	// Line 238, Address: 0x1021d94, Func Offset: 0x94
	// Line 240, Address: 0x1021dcc, Func Offset: 0xcc
	// Line 241, Address: 0x1021ddc, Func Offset: 0xdc
	// Line 242, Address: 0x1021dec, Func Offset: 0xec
	// Line 243, Address: 0x1021dfc, Func Offset: 0xfc
	// Line 244, Address: 0x1021e08, Func Offset: 0x108
	// Line 246, Address: 0x1021e14, Func Offset: 0x114
	// Line 248, Address: 0x1021e18, Func Offset: 0x118
	// Line 249, Address: 0x1021e28, Func Offset: 0x128
	// Line 253, Address: 0x1021e30, Func Offset: 0x130
	// Line 254, Address: 0x1021e44, Func Offset: 0x144
	// Line 258, Address: 0x1021e4c, Func Offset: 0x14c
	// Line 260, Address: 0x1021e54, Func Offset: 0x154
	// Line 261, Address: 0x1021e78, Func Offset: 0x178
	// Line 262, Address: 0x1021e84, Func Offset: 0x184
	// Line 266, Address: 0x1021e94, Func Offset: 0x194
	// Line 267, Address: 0x1021ea0, Func Offset: 0x1a0
	// Func End, Address: 0x1021eb4, Func Offset: 0x1b4
}

// 
// Start address: 0x1021ec0
void m_wait(_anon0* pActwk)
{
	// Line 274, Address: 0x1021ec0, Func Offset: 0
	// Line 275, Address: 0x1021ecc, Func Offset: 0xc
	// Line 276, Address: 0x1021ef0, Func Offset: 0x30
	// Line 277, Address: 0x1021efc, Func Offset: 0x3c
	// Line 278, Address: 0x1021f0c, Func Offset: 0x4c
	// Line 279, Address: 0x1021f20, Func Offset: 0x60
	// Line 280, Address: 0x1021f28, Func Offset: 0x68
	// Line 281, Address: 0x1021f34, Func Offset: 0x74
	// Line 282, Address: 0x1021f44, Func Offset: 0x84
	// Line 283, Address: 0x1021f50, Func Offset: 0x90
	// Line 284, Address: 0x1021f5c, Func Offset: 0x9c
	// Line 285, Address: 0x1021f78, Func Offset: 0xb8
	// Line 289, Address: 0x1021f8c, Func Offset: 0xcc
	// Line 291, Address: 0x1021f94, Func Offset: 0xd4
	// Line 292, Address: 0x1021fa8, Func Offset: 0xe8
	// Line 297, Address: 0x1021fbc, Func Offset: 0xfc
	// Func End, Address: 0x1021fcc, Func Offset: 0x10c
}

// 
// Start address: 0x1021fd0
void m_die(_anon0* pActwk)
{
	char* pTbl;
	char timewk;
	short xwk;
	short ywk;
	_anon0* pNewact;
	// Line 304, Address: 0x1021fd0, Func Offset: 0
	// Line 309, Address: 0x1021fec, Func Offset: 0x1c
	// Line 310, Address: 0x1021ff4, Func Offset: 0x24
	// Line 311, Address: 0x1022000, Func Offset: 0x30
	// Line 313, Address: 0x1022004, Func Offset: 0x34
	// Line 315, Address: 0x1022014, Func Offset: 0x44
	// Line 316, Address: 0x1022024, Func Offset: 0x54
	// Line 317, Address: 0x1022030, Func Offset: 0x60
	// Line 318, Address: 0x1022038, Func Offset: 0x68
	// Line 319, Address: 0x1022060, Func Offset: 0x90
	// Line 320, Address: 0x1022074, Func Offset: 0xa4
	// Line 321, Address: 0x1022078, Func Offset: 0xa8
	// Line 322, Address: 0x102208c, Func Offset: 0xbc
	// Line 323, Address: 0x1022090, Func Offset: 0xc0
	// Line 325, Address: 0x1022098, Func Offset: 0xc8
	// Line 326, Address: 0x10220ac, Func Offset: 0xdc
	// Line 327, Address: 0x10220b8, Func Offset: 0xe8
	// Line 328, Address: 0x10220c4, Func Offset: 0xf4
	// Line 329, Address: 0x10220f0, Func Offset: 0x120
	// Line 330, Address: 0x102211c, Func Offset: 0x14c
	// Line 336, Address: 0x1022128, Func Offset: 0x158
	// Func End, Address: 0x1022148, Func Offset: 0x178
}

// 
// Start address: 0x1022150
void m1wait(_anon0* pActwk)
{
	// Line 343, Address: 0x1022150, Func Offset: 0
	// Line 344, Address: 0x102215c, Func Offset: 0xc
	// Line 345, Address: 0x102217c, Func Offset: 0x2c
	// Line 346, Address: 0x102218c, Func Offset: 0x3c
	// Line 347, Address: 0x102219c, Func Offset: 0x4c
	// Line 349, Address: 0x10221a8, Func Offset: 0x58
	// Func End, Address: 0x10221b8, Func Offset: 0x68
}

// 
// Start address: 0x10221c0
void a_hover(_anon0* pActwk)
{
	short timewk;
	// Line 363, Address: 0x10221c0, Func Offset: 0
	// Line 366, Address: 0x10221cc, Func Offset: 0xc
	// Line 368, Address: 0x10221dc, Func Offset: 0x1c
	// Line 369, Address: 0x10221ec, Func Offset: 0x2c
	// Line 370, Address: 0x1022200, Func Offset: 0x40
	// Line 373, Address: 0x1022218, Func Offset: 0x58
	// Line 374, Address: 0x1022228, Func Offset: 0x68
	// Line 375, Address: 0x102223c, Func Offset: 0x7c
	// Line 377, Address: 0x102224c, Func Offset: 0x8c
	// Func End, Address: 0x102225c, Func Offset: 0x9c
}

