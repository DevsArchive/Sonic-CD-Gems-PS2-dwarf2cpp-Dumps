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
typedef _anon0* type_2[4];
typedef char type_3[4];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef void(*type_7)(_anon1*)[11];
typedef _anon0* type_8[2];
typedef char* type_9[1];
typedef _anon1 type_10[128];

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

_anon0 pat_pocket1;
_anon0 pat_pocket2;
_anon0 pat_pocket3;
_anon0 pat_pocket4;
_anon0 pat_pocket5;
_anon0* pat[4];
_anon0* pat_pocket[2];
char pchg0[4];
char* pchg[1];
void(*pocket_move_tbl)(_anon1*)[11];
unsigned char generate_flag;
unsigned char time_flag;
_anon1 actwk[128];
_anon5 editmode;

void pocket(_anon1* actionwk);
void pocket0(_anon1* actionwk);
void a_init(_anon1* actionwk);
void a_move0(_anon1* actionwk);
void a_check(_anon1* actionwk, _anon1* a6);
void to_a_move1(_anon1* actionwk);
void a_move00(_anon1* actionwk);
void a_move1(_anon1* actionwk);
void a_move2(_anon1* actionwk);
void a_move3(_anon1* actionwk);
void a_move4(_anon1* actionwk);
void a_move5(_anon1* actionwk);
void a_move6(_anon1* actionwk);
void a_move7(_anon1* actionwk);
void a_move8(_anon1* actionwk);
void pocket1(_anon1* actionwk);
void b_init(_anon1* actionwk);
void b_move(_anon1* actionwk);
void b_die(_anon1* actionwk);

// 
// Start address: 0x101f4c0
void pocket(_anon1* actionwk)
{
	// Line 87, Address: 0x101f4c0, Func Offset: 0
	// Line 88, Address: 0x101f4cc, Func Offset: 0xc
	// Line 89, Address: 0x101f4e4, Func Offset: 0x24
	// Line 91, Address: 0x101f4f8, Func Offset: 0x38
	// Line 92, Address: 0x101f504, Func Offset: 0x44
	// Func End, Address: 0x101f514, Func Offset: 0x54
}

// 
// Start address: 0x101f520
void pocket0(_anon1* actionwk)
{
	// Line 108, Address: 0x101f520, Func Offset: 0
	// Line 109, Address: 0x101f52c, Func Offset: 0xc
	// Line 110, Address: 0x101f570, Func Offset: 0x50
	// Line 111, Address: 0x101f57c, Func Offset: 0x5c
	// Line 112, Address: 0x101f588, Func Offset: 0x68
	// Func End, Address: 0x101f598, Func Offset: 0x78
}

// 
// Start address: 0x101f5a0
void a_init(_anon1* actionwk)
{
	// Line 114, Address: 0x101f5a0, Func Offset: 0
	// Line 115, Address: 0x101f5ac, Func Offset: 0xc
	// Line 117, Address: 0x101f5d8, Func Offset: 0x38
	// Line 118, Address: 0x101f5e4, Func Offset: 0x44
	// Line 121, Address: 0x101f5ec, Func Offset: 0x4c
	// Line 122, Address: 0x101f5fc, Func Offset: 0x5c
	// Line 123, Address: 0x101f60c, Func Offset: 0x6c
	// Line 124, Address: 0x101f614, Func Offset: 0x74
	// Line 125, Address: 0x101f620, Func Offset: 0x80
	// Line 127, Address: 0x101f630, Func Offset: 0x90
	// Line 128, Address: 0x101f63c, Func Offset: 0x9c
	// Line 129, Address: 0x101f648, Func Offset: 0xa8
	// Func End, Address: 0x101f658, Func Offset: 0xb8
}

// 
// Start address: 0x101f660
void a_move0(_anon1* actionwk)
{
	_anon1* a6;
	// Line 131, Address: 0x101f660, Func Offset: 0
	// Line 134, Address: 0x101f670, Func Offset: 0x10
	// Line 135, Address: 0x101f680, Func Offset: 0x20
	// Line 136, Address: 0x101f688, Func Offset: 0x28
	// Line 137, Address: 0x101f698, Func Offset: 0x38
	// Line 138, Address: 0x101f6b8, Func Offset: 0x58
	// Func End, Address: 0x101f6cc, Func Offset: 0x6c
}

// 
// Start address: 0x101f6d0
void a_check(_anon1* actionwk, _anon1* a6)
{
	short d0;
	// Line 140, Address: 0x101f6d0, Func Offset: 0
	// Line 143, Address: 0x101f6e0, Func Offset: 0x10
	// Line 144, Address: 0x101f6f8, Func Offset: 0x28
	// Line 145, Address: 0x101f730, Func Offset: 0x60
	// Line 146, Address: 0x101f764, Func Offset: 0x94
	// Line 147, Address: 0x101f770, Func Offset: 0xa0
	// Line 148, Address: 0x101f79c, Func Offset: 0xcc
	// Line 149, Address: 0x101f7d0, Func Offset: 0x100
	// Line 150, Address: 0x101f7dc, Func Offset: 0x10c
	// Line 152, Address: 0x101f808, Func Offset: 0x138
	// Line 153, Address: 0x101f814, Func Offset: 0x144
	// Line 154, Address: 0x101f824, Func Offset: 0x154
	// Line 155, Address: 0x101f834, Func Offset: 0x164
	// Line 156, Address: 0x101f840, Func Offset: 0x170
	// Line 157, Address: 0x101f84c, Func Offset: 0x17c
	// Line 158, Address: 0x101f858, Func Offset: 0x188
	// Line 159, Address: 0x101f860, Func Offset: 0x190
	// Line 160, Address: 0x101f86c, Func Offset: 0x19c
	// Line 161, Address: 0x101f87c, Func Offset: 0x1ac
	// Line 162, Address: 0x101f8a0, Func Offset: 0x1d0
	// Func End, Address: 0x101f8b0, Func Offset: 0x1e0
}

// 
// Start address: 0x101f8b0
void to_a_move1(_anon1* actionwk)
{
	// Line 164, Address: 0x101f8b0, Func Offset: 0
	// Line 165, Address: 0x101f8bc, Func Offset: 0xc
	// Line 166, Address: 0x101f8cc, Func Offset: 0x1c
	// Line 167, Address: 0x101f8d8, Func Offset: 0x28
	// Line 168, Address: 0x101f8e4, Func Offset: 0x34
	// Line 169, Address: 0x101f8f0, Func Offset: 0x40
	// Line 170, Address: 0x101f8fc, Func Offset: 0x4c
	// Func End, Address: 0x101f90c, Func Offset: 0x5c
}

// 
// Start address: 0x101f910
void a_move00(_anon1* actionwk)
{
	_anon1* a1;
	// Line 172, Address: 0x101f910, Func Offset: 0
	// Line 175, Address: 0x101f91c, Func Offset: 0xc
	// Line 176, Address: 0x101f944, Func Offset: 0x34
	// Line 177, Address: 0x101f954, Func Offset: 0x44
	// Line 178, Address: 0x101f960, Func Offset: 0x50
	// Line 179, Address: 0x101f96c, Func Offset: 0x5c
	// Line 181, Address: 0x101f980, Func Offset: 0x70
	// Line 182, Address: 0x101f98c, Func Offset: 0x7c
	// Line 184, Address: 0x101f994, Func Offset: 0x84
	// Line 185, Address: 0x101f9c8, Func Offset: 0xb8
	// Line 186, Address: 0x101f9fc, Func Offset: 0xec
	// Line 188, Address: 0x101fa0c, Func Offset: 0xfc
	// Line 189, Address: 0x101fa1c, Func Offset: 0x10c
	// Line 190, Address: 0x101fa2c, Func Offset: 0x11c
	// Line 191, Address: 0x101fa40, Func Offset: 0x130
	// Func End, Address: 0x101fa50, Func Offset: 0x140
}

// 
// Start address: 0x101fa50
void a_move1(_anon1* actionwk)
{
	// Line 193, Address: 0x101fa50, Func Offset: 0
	// Line 194, Address: 0x101fa58, Func Offset: 0x8
	// Line 195, Address: 0x101fa80, Func Offset: 0x30
	// Line 196, Address: 0x101fa90, Func Offset: 0x40
	// Line 197, Address: 0x101fa9c, Func Offset: 0x4c
	// Line 199, Address: 0x101faa8, Func Offset: 0x58
	// Func End, Address: 0x101fab4, Func Offset: 0x64
}

// 
// Start address: 0x101fac0
void a_move2(_anon1* actionwk)
{
	// Line 201, Address: 0x101fac0, Func Offset: 0
	// Line 202, Address: 0x101fac8, Func Offset: 0x8
	// Line 203, Address: 0x101faf0, Func Offset: 0x30
	// Line 204, Address: 0x101fb00, Func Offset: 0x40
	// Line 205, Address: 0x101fb0c, Func Offset: 0x4c
	// Line 206, Address: 0x101fb14, Func Offset: 0x54
	// Func End, Address: 0x101fb20, Func Offset: 0x60
}

// 
// Start address: 0x101fb20
void a_move3(_anon1* actionwk)
{
	// Line 208, Address: 0x101fb20, Func Offset: 0
	// Line 209, Address: 0x101fb2c, Func Offset: 0xc
	// Line 210, Address: 0x101fb54, Func Offset: 0x34
	// Line 211, Address: 0x101fb64, Func Offset: 0x44
	// Line 212, Address: 0x101fb70, Func Offset: 0x50
	// Line 213, Address: 0x101fb84, Func Offset: 0x64
	// Line 214, Address: 0x101fb94, Func Offset: 0x74
	// Line 215, Address: 0x101fba0, Func Offset: 0x80
	// Line 216, Address: 0x101fbb0, Func Offset: 0x90
	// Func End, Address: 0x101fbc0, Func Offset: 0xa0
}

// 
// Start address: 0x101fbc0
void a_move4(_anon1* actionwk)
{
	// Line 218, Address: 0x101fbc0, Func Offset: 0
	// Line 219, Address: 0x101fbcc, Func Offset: 0xc
	// Line 220, Address: 0x101fbf4, Func Offset: 0x34
	// Line 221, Address: 0x101fc04, Func Offset: 0x44
	// Line 222, Address: 0x101fc10, Func Offset: 0x50
	// Line 223, Address: 0x101fc24, Func Offset: 0x64
	// Line 224, Address: 0x101fc34, Func Offset: 0x74
	// Line 225, Address: 0x101fc40, Func Offset: 0x80
	// Line 226, Address: 0x101fc50, Func Offset: 0x90
	// Func End, Address: 0x101fc60, Func Offset: 0xa0
}

// 
// Start address: 0x101fc60
void a_move5(_anon1* actionwk)
{
	// Line 228, Address: 0x101fc60, Func Offset: 0
	// Line 229, Address: 0x101fc68, Func Offset: 0x8
	// Line 230, Address: 0x101fc90, Func Offset: 0x30
	// Line 231, Address: 0x101fca0, Func Offset: 0x40
	// Line 232, Address: 0x101fcac, Func Offset: 0x4c
	// Line 233, Address: 0x101fcb8, Func Offset: 0x58
	// Func End, Address: 0x101fcc4, Func Offset: 0x64
}

// 
// Start address: 0x101fcd0
void a_move6(_anon1* actionwk)
{
	// Line 235, Address: 0x101fcd0, Func Offset: 0
	// Line 236, Address: 0x101fcd8, Func Offset: 0x8
	// Line 237, Address: 0x101fd00, Func Offset: 0x30
	// Line 238, Address: 0x101fd10, Func Offset: 0x40
	// Line 239, Address: 0x101fd1c, Func Offset: 0x4c
	// Line 240, Address: 0x101fd28, Func Offset: 0x58
	// Func End, Address: 0x101fd34, Func Offset: 0x64
}

// 
// Start address: 0x101fd40
void a_move7(_anon1* actionwk)
{
	_anon1* a1;
	// Line 242, Address: 0x101fd40, Func Offset: 0
	// Line 245, Address: 0x101fd50, Func Offset: 0x10
	// Line 246, Address: 0x101fd78, Func Offset: 0x38
	// Line 247, Address: 0x101fd84, Func Offset: 0x44
	// Line 248, Address: 0x101fd94, Func Offset: 0x54
	// Line 250, Address: 0x101fd9c, Func Offset: 0x5c
	// Line 251, Address: 0x101fda8, Func Offset: 0x68
	// Line 252, Address: 0x101fdcc, Func Offset: 0x8c
	// Line 253, Address: 0x101fdd4, Func Offset: 0x94
	// Line 254, Address: 0x101fde8, Func Offset: 0xa8
	// Line 255, Address: 0x101fdf0, Func Offset: 0xb0
	// Line 256, Address: 0x101fe04, Func Offset: 0xc4
	// Line 257, Address: 0x101fe18, Func Offset: 0xd8
	// Func End, Address: 0x101fe2c, Func Offset: 0xec
}

// 
// Start address: 0x101fe30
void a_move8(_anon1* actionwk)
{
	// Line 259, Address: 0x101fe30, Func Offset: 0
	// Line 260, Address: 0x101fe38, Func Offset: 0x8
	// Line 261, Address: 0x101fe60, Func Offset: 0x30
	// Line 262, Address: 0x101fe6c, Func Offset: 0x3c
	// Line 263, Address: 0x101fe74, Func Offset: 0x44
	// Func End, Address: 0x101fe80, Func Offset: 0x50
}

// 
// Start address: 0x101fe80
void pocket1(_anon1* actionwk)
{
	// Line 265, Address: 0x101fe80, Func Offset: 0
	// Line 266, Address: 0x101fe8c, Func Offset: 0xc
	// Line 269, Address: 0x101fec0, Func Offset: 0x40
	// Line 270, Address: 0x101fecc, Func Offset: 0x4c
	// Line 272, Address: 0x101fed4, Func Offset: 0x54
	// Line 273, Address: 0x101fee0, Func Offset: 0x60
	// Line 275, Address: 0x101fee8, Func Offset: 0x68
	// Line 278, Address: 0x101fef4, Func Offset: 0x74
	// Func End, Address: 0x101ff04, Func Offset: 0x84
}

// 
// Start address: 0x101ff10
void b_init(_anon1* actionwk)
{
	// Line 280, Address: 0x101ff10, Func Offset: 0
	// Line 281, Address: 0x101ff1c, Func Offset: 0xc
	// Line 282, Address: 0x101ff2c, Func Offset: 0x1c
	// Line 283, Address: 0x101ff3c, Func Offset: 0x2c
	// Line 284, Address: 0x101ff44, Func Offset: 0x34
	// Line 285, Address: 0x101ff50, Func Offset: 0x40
	// Line 286, Address: 0x101ff5c, Func Offset: 0x4c
	// Line 287, Address: 0x101ff68, Func Offset: 0x58
	// Line 288, Address: 0x101ff78, Func Offset: 0x68
	// Line 289, Address: 0x101ff84, Func Offset: 0x74
	// Func End, Address: 0x101ff94, Func Offset: 0x84
}

// 
// Start address: 0x101ffa0
void b_move(_anon1* actionwk)
{
	_anon1* a1;
	// Line 291, Address: 0x101ffa0, Func Offset: 0
	// Line 294, Address: 0x101ffb0, Func Offset: 0x10
	// Line 295, Address: 0x101ffd4, Func Offset: 0x34
	// Line 297, Address: 0x101ffe8, Func Offset: 0x48
	// Line 298, Address: 0x101fff4, Func Offset: 0x54
	// Line 300, Address: 0x101fffc, Func Offset: 0x5c
	// Line 301, Address: 0x1020010, Func Offset: 0x70
	// Line 302, Address: 0x102001c, Func Offset: 0x7c
	// Func End, Address: 0x1020030, Func Offset: 0x90
}

// 
// Start address: 0x1020030
void b_die(_anon1* actionwk)
{
	// Line 304, Address: 0x1020030, Func Offset: 0
	// Line 305, Address: 0x102003c, Func Offset: 0xc
	// Line 306, Address: 0x1020048, Func Offset: 0x18
	// Func End, Address: 0x1020058, Func Offset: 0x28
}

