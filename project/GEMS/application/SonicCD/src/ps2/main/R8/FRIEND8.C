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
typedef char* type_2[2];
typedef unsigned char type_3[30];
typedef _anon0* type_4[2];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef char type_7[58];
typedef unsigned short type_8[11];
typedef char type_9[4];
typedef _anon0* type_10[2];

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
_anon0* pat_friend0[2];
_anon0* pat_friend1[2];
char p00[4];
unsigned char p01[30];
char p10[58];
char* pchg0[2];
unsigned short tbl0sproffset[11];
unsigned char time_flag;
_anon5 stageno;

void friend(_anon1* actionwk);
void hato(_anon1* actionwk);
void t_init(_anon1* actionwk);
void t_move(_anon1* actionwk);
void t_roll(_anon1* actionwk, short d2, short d3);
void sheep(_anon1* actionwk);
void p_init(_anon1* actionwk);
void p_move(_anon1* actionwk);
void p_end(_anon1* actionwk);
void set_sproffset(_anon1* actionwk);

// 
// Start address: 0x1025160
void friend(_anon1* actionwk)
{
	// Line 115, Address: 0x1025160, Func Offset: 0
	// Line 117, Address: 0x102516c, Func Offset: 0xc
	// Line 120, Address: 0x102518c, Func Offset: 0x2c
	// Line 121, Address: 0x10251a8, Func Offset: 0x48
	// Line 123, Address: 0x10251bc, Func Offset: 0x5c
	// Line 124, Address: 0x10251c8, Func Offset: 0x68
	// Func End, Address: 0x10251d8, Func Offset: 0x78
}

// 
// Start address: 0x10251e0
void hato(_anon1* actionwk)
{
	// Line 126, Address: 0x10251e0, Func Offset: 0
	// Line 127, Address: 0x10251ec, Func Offset: 0xc
	// Line 130, Address: 0x1025214, Func Offset: 0x34
	// Line 131, Address: 0x1025220, Func Offset: 0x40
	// Line 133, Address: 0x1025228, Func Offset: 0x48
	// Line 136, Address: 0x1025234, Func Offset: 0x54
	// Func End, Address: 0x1025244, Func Offset: 0x64
}

// 
// Start address: 0x1025250
void t_init(_anon1* actionwk)
{
	// Line 138, Address: 0x1025250, Func Offset: 0
	// Line 139, Address: 0x102525c, Func Offset: 0xc
	// Line 140, Address: 0x102526c, Func Offset: 0x1c
	// Line 142, Address: 0x1025278, Func Offset: 0x28
	// Line 143, Address: 0x1025284, Func Offset: 0x34
	// Line 144, Address: 0x1025290, Func Offset: 0x40
	// Line 145, Address: 0x102529c, Func Offset: 0x4c
	// Line 146, Address: 0x10252a8, Func Offset: 0x58
	// Line 147, Address: 0x10252b8, Func Offset: 0x68
	// Line 148, Address: 0x10252c8, Func Offset: 0x78
	// Line 149, Address: 0x10252d8, Func Offset: 0x88
	// Line 150, Address: 0x10252f8, Func Offset: 0xa8
	// Line 153, Address: 0x1025304, Func Offset: 0xb4
	// Line 154, Address: 0x1025310, Func Offset: 0xc0
	// Line 155, Address: 0x102531c, Func Offset: 0xcc
	// Func End, Address: 0x102532c, Func Offset: 0xdc
}

// 
// Start address: 0x1025330
void t_move(_anon1* actionwk)
{
	char d0;
	char d1;
	// Line 157, Address: 0x1025330, Func Offset: 0
	// Line 160, Address: 0x1025344, Func Offset: 0x14
	// Line 161, Address: 0x1025358, Func Offset: 0x28
	// Line 162, Address: 0x10253ac, Func Offset: 0x7c
	// Line 163, Address: 0x10253b8, Func Offset: 0x88
	// Line 165, Address: 0x10253c8, Func Offset: 0x98
	// Line 166, Address: 0x10253d8, Func Offset: 0xa8
	// Line 167, Address: 0x10253f4, Func Offset: 0xc4
	// Line 170, Address: 0x1025414, Func Offset: 0xe4
	// Line 171, Address: 0x102541c, Func Offset: 0xec
	// Line 172, Address: 0x1025430, Func Offset: 0x100
	// Line 173, Address: 0x102543c, Func Offset: 0x10c
	// Line 174, Address: 0x1025450, Func Offset: 0x120
	// Func End, Address: 0x1025468, Func Offset: 0x138
}

// 
// Start address: 0x1025470
void t_roll(_anon1* actionwk, short d2, short d3)
{
	short sin;
	short cos;
	// Line 176, Address: 0x1025470, Func Offset: 0
	// Line 179, Address: 0x1025484, Func Offset: 0x14
	// Line 180, Address: 0x102549c, Func Offset: 0x2c
	// Line 181, Address: 0x10254ac, Func Offset: 0x3c
	// Line 182, Address: 0x10254bc, Func Offset: 0x4c
	// Line 183, Address: 0x10254ec, Func Offset: 0x7c
	// Line 184, Address: 0x102551c, Func Offset: 0xac
	// Func End, Address: 0x102552c, Func Offset: 0xbc
}

// 
// Start address: 0x1025530
void sheep(_anon1* actionwk)
{
	// Line 186, Address: 0x1025530, Func Offset: 0
	// Line 187, Address: 0x102553c, Func Offset: 0xc
	// Line 190, Address: 0x1025564, Func Offset: 0x34
	// Line 191, Address: 0x1025570, Func Offset: 0x40
	// Line 193, Address: 0x1025578, Func Offset: 0x48
	// Line 196, Address: 0x1025584, Func Offset: 0x54
	// Func End, Address: 0x1025594, Func Offset: 0x64
}

// 
// Start address: 0x10255a0
void p_init(_anon1* actionwk)
{
	// Line 198, Address: 0x10255a0, Func Offset: 0
	// Line 199, Address: 0x10255ac, Func Offset: 0xc
	// Line 200, Address: 0x10255bc, Func Offset: 0x1c
	// Line 201, Address: 0x10255cc, Func Offset: 0x2c
	// Line 202, Address: 0x10255d8, Func Offset: 0x38
	// Line 203, Address: 0x10255e4, Func Offset: 0x44
	// Line 204, Address: 0x10255f0, Func Offset: 0x50
	// Line 205, Address: 0x10255fc, Func Offset: 0x5c
	// Line 207, Address: 0x102560c, Func Offset: 0x6c
	// Line 209, Address: 0x1025618, Func Offset: 0x78
	// Line 210, Address: 0x1025624, Func Offset: 0x84
	// Line 211, Address: 0x1025630, Func Offset: 0x90
	// Func End, Address: 0x1025640, Func Offset: 0xa0
}

// 
// Start address: 0x1025640
void p_move(_anon1* actionwk)
{
	short d1;
	int spd;
	// Line 213, Address: 0x1025640, Func Offset: 0
	// Line 217, Address: 0x1025654, Func Offset: 0x14
	// Line 218, Address: 0x102566c, Func Offset: 0x2c
	// Line 220, Address: 0x1025684, Func Offset: 0x44
	// Line 221, Address: 0x1025694, Func Offset: 0x54
	// Line 222, Address: 0x102569c, Func Offset: 0x5c
	// Line 223, Address: 0x10256a4, Func Offset: 0x64
	// Line 225, Address: 0x10256b4, Func Offset: 0x74
	// Line 226, Address: 0x10256c0, Func Offset: 0x80
	// Line 227, Address: 0x10256d4, Func Offset: 0x94
	// Line 230, Address: 0x10256e4, Func Offset: 0xa4
	// Line 231, Address: 0x10256f4, Func Offset: 0xb4
	// Line 232, Address: 0x1025700, Func Offset: 0xc0
	// Line 234, Address: 0x1025714, Func Offset: 0xd4
	// Line 236, Address: 0x1025734, Func Offset: 0xf4
	// Line 237, Address: 0x1025740, Func Offset: 0x100
	// Func End, Address: 0x1025758, Func Offset: 0x118
}

// 
// Start address: 0x1025760
void p_end(_anon1* actionwk)
{
	// Line 239, Address: 0x1025760, Func Offset: 0
	// Line 240, Address: 0x102576c, Func Offset: 0xc
	// Line 241, Address: 0x1025778, Func Offset: 0x18
	// Line 242, Address: 0x1025784, Func Offset: 0x24
	// Func End, Address: 0x1025794, Func Offset: 0x34
}

// 
// Start address: 0x10257a0
void set_sproffset(_anon1* actionwk)
{
	unsigned short* a1;
	unsigned short d0;
	// Line 244, Address: 0x10257a0, Func Offset: 0
	// Line 248, Address: 0x10257b0, Func Offset: 0x10
	// Line 249, Address: 0x10257b8, Func Offset: 0x18
	// Line 250, Address: 0x10257ec, Func Offset: 0x4c
	// Line 251, Address: 0x1025804, Func Offset: 0x64
	// Func End, Address: 0x1025818, Func Offset: 0x78
}

