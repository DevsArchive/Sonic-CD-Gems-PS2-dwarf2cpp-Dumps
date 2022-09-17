typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[8];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef char* type_5[1];
typedef void(*type_7)(_anon1*)[4];
typedef _anon1 type_8[128];
typedef unsigned short type_9[4];
typedef unsigned short type_10[4][3];
typedef char type_11[64];
typedef char type_12[6];

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

_anon0 et_pat00;
_anon0 et_pat01;
_anon0 et_pat02;
_anon0 et_pat03;
_anon0 et_pat04;
_anon0 et_pat05;
_anon0 et_pat06;
_anon0 et_pat07;
_anon0* pat_et[8];
char p_a[6];
char* pchg[1];
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
// Start address: 0x1028260
void et(_anon1* pActwk)
{
	void(*et_jmp_tbl)(_anon1*)[4];
	// Line 140, Address: 0x1028260, Func Offset: 0
	// Line 141, Address: 0x102826c, Func Offset: 0xc
	// Line 148, Address: 0x1028298, Func Offset: 0x38
	// Line 149, Address: 0x10282d4, Func Offset: 0x74
	// Line 151, Address: 0x10282e0, Func Offset: 0x80
	// Line 152, Address: 0x10282f8, Func Offset: 0x98
	// Line 153, Address: 0x1028304, Func Offset: 0xa4
	// Func End, Address: 0x1028314, Func Offset: 0xb4
}

// 
// Start address: 0x1028320
void m_init(_anon1* pActwk)
{
	unsigned char patnowk;
	unsigned short tbl0sproffset[4][3];
	// Line 162, Address: 0x1028320, Func Offset: 0
	// Line 164, Address: 0x1028330, Func Offset: 0x10
	// Line 184, Address: 0x1028364, Func Offset: 0x44
	// Line 185, Address: 0x1028374, Func Offset: 0x54
	// Line 186, Address: 0x1028384, Func Offset: 0x64
	// Line 187, Address: 0x1028390, Func Offset: 0x70
	// Line 188, Address: 0x10283a8, Func Offset: 0x88
	// Line 190, Address: 0x10283b4, Func Offset: 0x94
	// Line 192, Address: 0x10283ec, Func Offset: 0xcc
	// Line 193, Address: 0x10283fc, Func Offset: 0xdc
	// Line 194, Address: 0x102840c, Func Offset: 0xec
	// Line 195, Address: 0x102841c, Func Offset: 0xfc
	// Line 196, Address: 0x1028428, Func Offset: 0x108
	// Line 198, Address: 0x1028434, Func Offset: 0x114
	// Line 200, Address: 0x1028438, Func Offset: 0x118
	// Line 201, Address: 0x1028448, Func Offset: 0x128
	// Line 204, Address: 0x1028450, Func Offset: 0x130
	// Line 205, Address: 0x1028460, Func Offset: 0x140
	// Line 208, Address: 0x1028468, Func Offset: 0x148
	// Line 210, Address: 0x1028470, Func Offset: 0x150
	// Line 211, Address: 0x1028494, Func Offset: 0x174
	// Line 212, Address: 0x10284a0, Func Offset: 0x180
	// Line 216, Address: 0x10284b0, Func Offset: 0x190
	// Line 217, Address: 0x10284bc, Func Offset: 0x19c
	// Func End, Address: 0x10284d0, Func Offset: 0x1b0
}

// 
// Start address: 0x10284d0
void m_wait(_anon1* pActwk)
{
	// Line 226, Address: 0x10284d0, Func Offset: 0
	// Line 227, Address: 0x10284dc, Func Offset: 0xc
	// Line 228, Address: 0x1028500, Func Offset: 0x30
	// Line 229, Address: 0x102850c, Func Offset: 0x3c
	// Line 230, Address: 0x102851c, Func Offset: 0x4c
	// Line 231, Address: 0x1028530, Func Offset: 0x60
	// Line 232, Address: 0x1028538, Func Offset: 0x68
	// Line 233, Address: 0x1028544, Func Offset: 0x74
	// Line 234, Address: 0x1028554, Func Offset: 0x84
	// Line 235, Address: 0x1028560, Func Offset: 0x90
	// Line 236, Address: 0x102856c, Func Offset: 0x9c
	// Line 237, Address: 0x1028588, Func Offset: 0xb8
	// Line 240, Address: 0x102859c, Func Offset: 0xcc
	// Line 242, Address: 0x10285a4, Func Offset: 0xd4
	// Line 243, Address: 0x10285b8, Func Offset: 0xe8
	// Line 247, Address: 0x10285cc, Func Offset: 0xfc
	// Func End, Address: 0x10285dc, Func Offset: 0x10c
}

// 
// Start address: 0x10285e0
void m_die(_anon1* pActwk)
{
	char* pTbl;
	char timewk;
	short xwk;
	short ywk;
	_anon1* pNewact;
	// Line 256, Address: 0x10285e0, Func Offset: 0
	// Line 261, Address: 0x10285fc, Func Offset: 0x1c
	// Line 262, Address: 0x1028604, Func Offset: 0x24
	// Line 263, Address: 0x1028610, Func Offset: 0x30
	// Line 265, Address: 0x1028614, Func Offset: 0x34
	// Line 267, Address: 0x1028624, Func Offset: 0x44
	// Line 268, Address: 0x1028634, Func Offset: 0x54
	// Line 269, Address: 0x1028640, Func Offset: 0x60
	// Line 271, Address: 0x1028648, Func Offset: 0x68
	// Line 272, Address: 0x1028670, Func Offset: 0x90
	// Line 273, Address: 0x1028684, Func Offset: 0xa4
	// Line 274, Address: 0x1028688, Func Offset: 0xa8
	// Line 275, Address: 0x102869c, Func Offset: 0xbc
	// Line 276, Address: 0x10286a0, Func Offset: 0xc0
	// Line 278, Address: 0x10286a8, Func Offset: 0xc8
	// Line 279, Address: 0x10286bc, Func Offset: 0xdc
	// Line 280, Address: 0x10286c8, Func Offset: 0xe8
	// Line 281, Address: 0x10286d4, Func Offset: 0xf4
	// Line 282, Address: 0x1028700, Func Offset: 0x120
	// Line 283, Address: 0x102872c, Func Offset: 0x14c
	// Line 288, Address: 0x1028738, Func Offset: 0x158
	// Func End, Address: 0x1028758, Func Offset: 0x178
}

// 
// Start address: 0x1028760
void m1wait(_anon1* pActwk)
{
	// Line 297, Address: 0x1028760, Func Offset: 0
	// Line 298, Address: 0x102876c, Func Offset: 0xc
	// Line 299, Address: 0x102878c, Func Offset: 0x2c
	// Line 300, Address: 0x102879c, Func Offset: 0x3c
	// Line 301, Address: 0x10287ac, Func Offset: 0x4c
	// Line 303, Address: 0x10287b8, Func Offset: 0x58
	// Func End, Address: 0x10287c8, Func Offset: 0x68
}

// 
// Start address: 0x10287d0
void a_hover(_anon1* pActwk)
{
	short timewk;
	// Line 312, Address: 0x10287d0, Func Offset: 0
	// Line 315, Address: 0x10287dc, Func Offset: 0xc
	// Line 317, Address: 0x10287ec, Func Offset: 0x1c
	// Line 318, Address: 0x10287fc, Func Offset: 0x2c
	// Line 319, Address: 0x1028810, Func Offset: 0x40
	// Line 321, Address: 0x1028828, Func Offset: 0x58
	// Line 322, Address: 0x1028838, Func Offset: 0x68
	// Line 323, Address: 0x102884c, Func Offset: 0x7c
	// Line 324, Address: 0x102885c, Func Offset: 0x8c
	// Func End, Address: 0x102886c, Func Offset: 0x9c
}

