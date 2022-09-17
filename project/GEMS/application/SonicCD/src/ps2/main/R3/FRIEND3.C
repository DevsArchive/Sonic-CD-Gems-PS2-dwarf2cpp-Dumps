typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef char type_1[30];
typedef _anon7 type_2[0];
typedef unsigned short type_3[11];
typedef _anon1* type_4[3];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef char type_7[58];
typedef char* type_8[1];
typedef char type_9[4];
typedef _anon1* type_10[5];
typedef _anon0 type_11[128];
typedef char* type_12[2];

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

_anon1 patnull;
_anon1 pat00;
_anon1 pat01;
_anon1 pat02;
_anon1 pat03;
_anon1 pat04;
_anon1 pat05;
_anon1* pat_friend0[3];
_anon1* pat_friend1[5];
char p00[4];
char p01[30];
char p10[58];
char* pchg0[2];
char* pchg1[1];
unsigned short tbl0sproffset[11];
_anon0 actwk[128];
unsigned char time_flag;
_anon5 stageno;

void friend(_anon0* actionwk);
void inco(_anon0* actionwk);
void t_init(_anon0* actionwk);
void t_move(_anon0* actionwk);
void t_movie(_anon0* actionwk);
void t_roll(_anon0* actionwk, short d2, short d3);
void pocky(_anon0* actionwk);
void p_init(_anon0* actionwk);
void p_move(_anon0* actionwk);
void p_end(_anon0* actionwk);
void p_rev(_anon0* actionwk);
void p_movie(_anon0* actionwk);
void set_sproffset(_anon0* actionwk);

// 
// Start address: 0x101cf40
void friend(_anon0* actionwk)
{
	// Line 118, Address: 0x101cf40, Func Offset: 0
	// Line 120, Address: 0x101cf4c, Func Offset: 0xc
	// Line 123, Address: 0x101cf6c, Func Offset: 0x2c
	// Line 124, Address: 0x101cf88, Func Offset: 0x48
	// Line 126, Address: 0x101cf9c, Func Offset: 0x5c
	// Line 127, Address: 0x101cfa8, Func Offset: 0x68
	// Func End, Address: 0x101cfb8, Func Offset: 0x78
}

// 
// Start address: 0x101cfc0
void inco(_anon0* actionwk)
{
	// Line 129, Address: 0x101cfc0, Func Offset: 0
	// Line 130, Address: 0x101cfcc, Func Offset: 0xc
	// Line 133, Address: 0x101d000, Func Offset: 0x40
	// Line 134, Address: 0x101d00c, Func Offset: 0x4c
	// Line 136, Address: 0x101d014, Func Offset: 0x54
	// Line 137, Address: 0x101d020, Func Offset: 0x60
	// Line 139, Address: 0x101d028, Func Offset: 0x68
	// Line 142, Address: 0x101d034, Func Offset: 0x74
	// Func End, Address: 0x101d044, Func Offset: 0x84
}

// 
// Start address: 0x101d050
void t_init(_anon0* actionwk)
{
	// Line 144, Address: 0x101d050, Func Offset: 0
	// Line 145, Address: 0x101d05c, Func Offset: 0xc
	// Line 146, Address: 0x101d06c, Func Offset: 0x1c
	// Line 148, Address: 0x101d078, Func Offset: 0x28
	// Line 149, Address: 0x101d084, Func Offset: 0x34
	// Line 150, Address: 0x101d090, Func Offset: 0x40
	// Line 151, Address: 0x101d09c, Func Offset: 0x4c
	// Line 152, Address: 0x101d0a8, Func Offset: 0x58
	// Line 153, Address: 0x101d0b8, Func Offset: 0x68
	// Line 154, Address: 0x101d0c8, Func Offset: 0x78
	// Line 155, Address: 0x101d0d8, Func Offset: 0x88
	// Line 156, Address: 0x101d0f8, Func Offset: 0xa8
	// Line 158, Address: 0x101d104, Func Offset: 0xb4
	// Line 160, Address: 0x101d11c, Func Offset: 0xcc
	// Line 161, Address: 0x101d12c, Func Offset: 0xdc
	// Line 162, Address: 0x101d138, Func Offset: 0xe8
	// Line 163, Address: 0x101d144, Func Offset: 0xf4
	// Line 166, Address: 0x101d14c, Func Offset: 0xfc
	// Line 167, Address: 0x101d158, Func Offset: 0x108
	// Line 168, Address: 0x101d168, Func Offset: 0x118
	// Line 169, Address: 0x101d174, Func Offset: 0x124
	// Line 171, Address: 0x101d180, Func Offset: 0x130
	// Func End, Address: 0x101d190, Func Offset: 0x140
}

// 
// Start address: 0x101d190
void t_move(_anon0* actionwk)
{
	char d0;
	char d1;
	// Line 173, Address: 0x101d190, Func Offset: 0
	// Line 176, Address: 0x101d1a4, Func Offset: 0x14
	// Line 177, Address: 0x101d1b8, Func Offset: 0x28
	// Line 178, Address: 0x101d20c, Func Offset: 0x7c
	// Line 179, Address: 0x101d218, Func Offset: 0x88
	// Line 181, Address: 0x101d228, Func Offset: 0x98
	// Line 182, Address: 0x101d238, Func Offset: 0xa8
	// Line 183, Address: 0x101d254, Func Offset: 0xc4
	// Line 186, Address: 0x101d274, Func Offset: 0xe4
	// Line 187, Address: 0x101d27c, Func Offset: 0xec
	// Line 188, Address: 0x101d290, Func Offset: 0x100
	// Line 189, Address: 0x101d29c, Func Offset: 0x10c
	// Line 190, Address: 0x101d2b0, Func Offset: 0x120
	// Func End, Address: 0x101d2c8, Func Offset: 0x138
}

// 
// Start address: 0x101d2d0
void t_movie(_anon0* actionwk)
{
	_anon0* a1;
	// Line 192, Address: 0x101d2d0, Func Offset: 0
	// Line 195, Address: 0x101d2e0, Func Offset: 0x10
	// Line 196, Address: 0x101d304, Func Offset: 0x34
	// Line 198, Address: 0x101d324, Func Offset: 0x54
	// Line 199, Address: 0x101d330, Func Offset: 0x60
	// Line 201, Address: 0x101d338, Func Offset: 0x68
	// Line 202, Address: 0x101d34c, Func Offset: 0x7c
	// Line 203, Address: 0x101d35c, Func Offset: 0x8c
	// Line 205, Address: 0x101d394, Func Offset: 0xc4
	// Line 206, Address: 0x101d3a8, Func Offset: 0xd8
	// Line 207, Address: 0x101d3b4, Func Offset: 0xe4
	// Func End, Address: 0x101d3c8, Func Offset: 0xf8
}

// 
// Start address: 0x101d3d0
void t_roll(_anon0* actionwk, short d2, short d3)
{
	short sin;
	short cos;
	// Line 209, Address: 0x101d3d0, Func Offset: 0
	// Line 212, Address: 0x101d3e4, Func Offset: 0x14
	// Line 213, Address: 0x101d3fc, Func Offset: 0x2c
	// Line 214, Address: 0x101d40c, Func Offset: 0x3c
	// Line 215, Address: 0x101d41c, Func Offset: 0x4c
	// Line 216, Address: 0x101d44c, Func Offset: 0x7c
	// Line 217, Address: 0x101d47c, Func Offset: 0xac
	// Func End, Address: 0x101d48c, Func Offset: 0xbc
}

// 
// Start address: 0x101d490
void pocky(_anon0* actionwk)
{
	// Line 219, Address: 0x101d490, Func Offset: 0
	// Line 220, Address: 0x101d49c, Func Offset: 0xc
	// Line 223, Address: 0x101d4e8, Func Offset: 0x58
	// Line 224, Address: 0x101d4f4, Func Offset: 0x64
	// Line 226, Address: 0x101d4fc, Func Offset: 0x6c
	// Line 227, Address: 0x101d508, Func Offset: 0x78
	// Line 229, Address: 0x101d510, Func Offset: 0x80
	// Line 230, Address: 0x101d51c, Func Offset: 0x8c
	// Line 232, Address: 0x101d524, Func Offset: 0x94
	// Line 233, Address: 0x101d530, Func Offset: 0xa0
	// Line 235, Address: 0x101d538, Func Offset: 0xa8
	// Line 238, Address: 0x101d544, Func Offset: 0xb4
	// Func End, Address: 0x101d554, Func Offset: 0xc4
}

// 
// Start address: 0x101d560
void p_init(_anon0* actionwk)
{
	// Line 240, Address: 0x101d560, Func Offset: 0
	// Line 241, Address: 0x101d56c, Func Offset: 0xc
	// Line 242, Address: 0x101d57c, Func Offset: 0x1c
	// Line 243, Address: 0x101d58c, Func Offset: 0x2c
	// Line 244, Address: 0x101d598, Func Offset: 0x38
	// Line 245, Address: 0x101d5a4, Func Offset: 0x44
	// Line 246, Address: 0x101d5b0, Func Offset: 0x50
	// Line 247, Address: 0x101d5bc, Func Offset: 0x5c
	// Line 249, Address: 0x101d5cc, Func Offset: 0x6c
	// Line 250, Address: 0x101d5d8, Func Offset: 0x78
	// Line 252, Address: 0x101d5f0, Func Offset: 0x90
	// Line 253, Address: 0x101d5fc, Func Offset: 0x9c
	// Line 254, Address: 0x101d61c, Func Offset: 0xbc
	// Line 257, Address: 0x101d624, Func Offset: 0xc4
	// Line 258, Address: 0x101d630, Func Offset: 0xd0
	// Line 260, Address: 0x101d63c, Func Offset: 0xdc
	// Func End, Address: 0x101d64c, Func Offset: 0xec
}

// 
// Start address: 0x101d650
void p_move(_anon0* actionwk)
{
	short d1;
	// Line 262, Address: 0x101d650, Func Offset: 0
	// Line 265, Address: 0x101d660, Func Offset: 0x10
	// Line 266, Address: 0x101d678, Func Offset: 0x28
	// Line 268, Address: 0x101d690, Func Offset: 0x40
	// Line 269, Address: 0x101d6a0, Func Offset: 0x50
	// Line 270, Address: 0x101d6b0, Func Offset: 0x60
	// Line 272, Address: 0x101d6c0, Func Offset: 0x70
	// Line 273, Address: 0x101d6cc, Func Offset: 0x7c
	// Line 274, Address: 0x101d6e0, Func Offset: 0x90
	// Line 276, Address: 0x101d6f0, Func Offset: 0xa0
	// Line 277, Address: 0x101d700, Func Offset: 0xb0
	// Line 278, Address: 0x101d710, Func Offset: 0xc0
	// Line 280, Address: 0x101d71c, Func Offset: 0xcc
	// Line 281, Address: 0x101d728, Func Offset: 0xd8
	// Func End, Address: 0x101d73c, Func Offset: 0xec
}

// 
// Start address: 0x101d740
void p_end(_anon0* actionwk)
{
	// Line 283, Address: 0x101d740, Func Offset: 0
	// Line 284, Address: 0x101d74c, Func Offset: 0xc
	// Line 285, Address: 0x101d758, Func Offset: 0x18
	// Line 286, Address: 0x101d764, Func Offset: 0x24
	// Func End, Address: 0x101d774, Func Offset: 0x34
}

// 
// Start address: 0x101d780
void p_rev(_anon0* actionwk)
{
	// Line 288, Address: 0x101d780, Func Offset: 0
	// Line 289, Address: 0x101d78c, Func Offset: 0xc
	// Line 290, Address: 0x101d798, Func Offset: 0x18
	// Line 292, Address: 0x101d7ac, Func Offset: 0x2c
	// Line 293, Address: 0x101d7cc, Func Offset: 0x4c
	// Line 294, Address: 0x101d7d8, Func Offset: 0x58
	// Func End, Address: 0x101d7e8, Func Offset: 0x68
}

// 
// Start address: 0x101d7f0
void p_movie(_anon0* actionwk)
{
	_anon0* a1;
	// Line 296, Address: 0x101d7f0, Func Offset: 0
	// Line 299, Address: 0x101d800, Func Offset: 0x10
	// Line 300, Address: 0x101d824, Func Offset: 0x34
	// Line 302, Address: 0x101d844, Func Offset: 0x54
	// Line 303, Address: 0x101d850, Func Offset: 0x60
	// Line 305, Address: 0x101d858, Func Offset: 0x68
	// Line 306, Address: 0x101d86c, Func Offset: 0x7c
	// Line 307, Address: 0x101d878, Func Offset: 0x88
	// Func End, Address: 0x101d88c, Func Offset: 0x9c
}

// 
// Start address: 0x101d890
void set_sproffset(_anon0* actionwk)
{
	unsigned short* a1;
	unsigned short d0;
	// Line 309, Address: 0x101d890, Func Offset: 0
	// Line 313, Address: 0x101d8a0, Func Offset: 0x10
	// Line 314, Address: 0x101d8a8, Func Offset: 0x18
	// Line 315, Address: 0x101d8dc, Func Offset: 0x4c
	// Line 316, Address: 0x101d8f4, Func Offset: 0x64
	// Func End, Address: 0x101d908, Func Offset: 0x78
}

