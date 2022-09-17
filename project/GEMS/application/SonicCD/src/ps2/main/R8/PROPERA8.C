typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_5)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon1* type_1[2];
typedef _anon7 type_2[0];
typedef char* type_3[1];
typedef char type_4[4];
typedef void(*type_6)(_anon0*)[9];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon1* type_9[8];
typedef _anon0 type_10[128];
typedef char type_11[8];
typedef char* type_12[1];

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

char p00[4];
char p01[8];
char* pchg[1];
char* pchg1[1];
_anon1 pat00;
_anon1 pat01;
_anon1 pat02;
_anon1 pat03;
_anon1 pat04;
_anon1 pat05;
_anon1 pat06;
_anon1 pat07;
_anon1 pat08;
_anon1 pat09;
_anon1* pat_propera[2];
_anon1* pat_propera1[8];
_anon0 actwk[128];

void propera(_anon0* actionwk);
void propera0(_anon0* actionwk);
void a_init(_anon0* actionwk);
void a_init_sub(_anon0* actionwk);
void a_fall(_anon0* actionwk);
void a_move(_anon0* actionwk);
void propera1(_anon0* actionwk);
void b_init(_anon0* actionwk);
void b_close(_anon0* actionwk);
void b_close1(_anon0* actionwk);
void b_closed(_anon0* actionwk);
void b_closed1(_anon0* actionwk);
void b_open(_anon0* actionwk);
void b_open1(_anon0* actionwk);
void b_opend(_anon0* actionwk);
void b_opend1(_anon0* actionwk);

// 
// Start address: 0x1023390
void propera(_anon0* actionwk)
{
	// Line 64, Address: 0x1023390, Func Offset: 0
	// Line 65, Address: 0x102339c, Func Offset: 0xc
	// Line 67, Address: 0x10233b4, Func Offset: 0x24
	// Line 68, Address: 0x10233c0, Func Offset: 0x30
	// Line 70, Address: 0x10233c8, Func Offset: 0x38
	// Line 71, Address: 0x10233d4, Func Offset: 0x44
	// Func End, Address: 0x10233e4, Func Offset: 0x54
}

// 
// Start address: 0x10233f0
void propera0(_anon0* actionwk)
{
	// Line 73, Address: 0x10233f0, Func Offset: 0
	// Line 74, Address: 0x10233fc, Func Offset: 0xc
	// Line 77, Address: 0x1023430, Func Offset: 0x40
	// Line 78, Address: 0x102343c, Func Offset: 0x4c
	// Line 80, Address: 0x1023444, Func Offset: 0x54
	// Line 81, Address: 0x1023450, Func Offset: 0x60
	// Line 83, Address: 0x1023458, Func Offset: 0x68
	// Line 86, Address: 0x1023464, Func Offset: 0x74
	// Line 87, Address: 0x1023478, Func Offset: 0x88
	// Line 88, Address: 0x1023484, Func Offset: 0x94
	// Line 89, Address: 0x1023498, Func Offset: 0xa8
	// Func End, Address: 0x10234a8, Func Offset: 0xb8
}

// 
// Start address: 0x10234b0
void a_init(_anon0* actionwk)
{
	_anon0* a1;
	_anon0* a2;
	// Line 91, Address: 0x10234b0, Func Offset: 0
	// Line 94, Address: 0x10234c0, Func Offset: 0x10
	// Line 96, Address: 0x10234d0, Func Offset: 0x20
	// Line 97, Address: 0x10234e0, Func Offset: 0x30
	// Line 98, Address: 0x10234f0, Func Offset: 0x40
	// Line 99, Address: 0x10234fc, Func Offset: 0x4c
	// Line 100, Address: 0x1023508, Func Offset: 0x58
	// Line 101, Address: 0x1023514, Func Offset: 0x64
	// Line 102, Address: 0x1023520, Func Offset: 0x70
	// Line 103, Address: 0x1023530, Func Offset: 0x80
	// Line 104, Address: 0x102353c, Func Offset: 0x8c
	// Line 105, Address: 0x1023548, Func Offset: 0x98
	// Line 107, Address: 0x1023554, Func Offset: 0xa4
	// Line 109, Address: 0x102356c, Func Offset: 0xbc
	// Line 110, Address: 0x1023578, Func Offset: 0xc8
	// Line 113, Address: 0x1023580, Func Offset: 0xd0
	// Line 114, Address: 0x1023590, Func Offset: 0xe0
	// Line 115, Address: 0x10235c4, Func Offset: 0x114
	// Line 116, Address: 0x10235d0, Func Offset: 0x120
	// Line 117, Address: 0x10235d4, Func Offset: 0x124
	// Line 119, Address: 0x10235ec, Func Offset: 0x13c
	// Line 120, Address: 0x10235f8, Func Offset: 0x148
	// Line 123, Address: 0x1023600, Func Offset: 0x150
	// Line 124, Address: 0x1023610, Func Offset: 0x160
	// Line 125, Address: 0x1023644, Func Offset: 0x194
	// Line 126, Address: 0x1023650, Func Offset: 0x1a0
	// Line 127, Address: 0x102365c, Func Offset: 0x1ac
	// Line 128, Address: 0x1023664, Func Offset: 0x1b4
	// Line 129, Address: 0x1023670, Func Offset: 0x1c0
	// Line 131, Address: 0x102367c, Func Offset: 0x1cc
	// Line 132, Address: 0x1023688, Func Offset: 0x1d8
	// Line 133, Address: 0x1023694, Func Offset: 0x1e4
	// Line 134, Address: 0x10236c4, Func Offset: 0x214
	// Func End, Address: 0x10236d8, Func Offset: 0x228
}

// 
// Start address: 0x10236e0
void a_init_sub(_anon0* actionwk)
{
	// Line 136, Address: 0x10236e0, Func Offset: 0
	// Line 137, Address: 0x10236e8, Func Offset: 0x8
	// Line 138, Address: 0x10236f8, Func Offset: 0x18
	// Line 139, Address: 0x1023704, Func Offset: 0x24
	// Line 140, Address: 0x1023710, Func Offset: 0x30
	// Line 141, Address: 0x1023720, Func Offset: 0x40
	// Line 142, Address: 0x102372c, Func Offset: 0x4c
	// Line 143, Address: 0x1023738, Func Offset: 0x58
	// Line 144, Address: 0x1023744, Func Offset: 0x64
	// Func End, Address: 0x1023750, Func Offset: 0x70
}

// 
// Start address: 0x1023750
void a_fall(_anon0* actionwk)
{
	short d1;
	// Line 146, Address: 0x1023750, Func Offset: 0
	// Line 149, Address: 0x1023760, Func Offset: 0x10
	// Line 150, Address: 0x1023770, Func Offset: 0x20
	// Line 151, Address: 0x1023784, Func Offset: 0x34
	// Line 153, Address: 0x1023794, Func Offset: 0x44
	// Line 154, Address: 0x10237a4, Func Offset: 0x54
	// Line 156, Address: 0x10237b4, Func Offset: 0x64
	// Func End, Address: 0x10237c8, Func Offset: 0x78
}

// 
// Start address: 0x10237d0
void a_move(_anon0* actionwk)
{
	short d1;
	// Line 158, Address: 0x10237d0, Func Offset: 0
	// Line 161, Address: 0x10237e0, Func Offset: 0x10
	// Line 162, Address: 0x10237f8, Func Offset: 0x28
	// Line 163, Address: 0x102380c, Func Offset: 0x3c
	// Line 164, Address: 0x102381c, Func Offset: 0x4c
	// Line 165, Address: 0x1023844, Func Offset: 0x74
	// Line 167, Address: 0x1023858, Func Offset: 0x88
	// Line 168, Address: 0x1023864, Func Offset: 0x94
	// Func End, Address: 0x1023878, Func Offset: 0xa8
}

// 
// Start address: 0x1023880
void propera1(_anon0* actionwk)
{
	void(*tbl)(_anon0*)[9];
	short ano;
	// Line 180, Address: 0x1023880, Func Offset: 0
	// Line 181, Address: 0x1023890, Func Offset: 0x10
	// Line 195, Address: 0x10238bc, Func Offset: 0x3c
	// Line 196, Address: 0x10238cc, Func Offset: 0x4c
	// Line 198, Address: 0x1023900, Func Offset: 0x80
	// Line 199, Address: 0x102390c, Func Offset: 0x8c
	// Line 202, Address: 0x1023914, Func Offset: 0x94
	// Line 203, Address: 0x1023950, Func Offset: 0xd0
	// Line 204, Address: 0x102397c, Func Offset: 0xfc
	// Line 205, Address: 0x10239a8, Func Offset: 0x128
	// Line 206, Address: 0x10239c0, Func Offset: 0x140
	// Line 207, Address: 0x10239cc, Func Offset: 0x14c
	// Func End, Address: 0x10239e0, Func Offset: 0x160
}

// 
// Start address: 0x10239e0
void b_init(_anon0* actionwk)
{
	// Line 209, Address: 0x10239e0, Func Offset: 0
	// Line 210, Address: 0x10239ec, Func Offset: 0xc
	// Line 212, Address: 0x1023a04, Func Offset: 0x24
	// Line 213, Address: 0x1023a10, Func Offset: 0x30
	// Line 214, Address: 0x1023a1c, Func Offset: 0x3c
	// Line 217, Address: 0x1023a24, Func Offset: 0x44
	// Line 218, Address: 0x1023a30, Func Offset: 0x50
	// Line 220, Address: 0x1023a3c, Func Offset: 0x5c
	// Func End, Address: 0x1023a4c, Func Offset: 0x6c
}

// 
// Start address: 0x1023a50
void b_close(_anon0* actionwk)
{
	// Line 222, Address: 0x1023a50, Func Offset: 0
	// Line 223, Address: 0x1023a5c, Func Offset: 0xc
	// Line 224, Address: 0x1023a68, Func Offset: 0x18
	// Line 225, Address: 0x1023a74, Func Offset: 0x24
	// Line 226, Address: 0x1023a7c, Func Offset: 0x2c
	// Line 227, Address: 0x1023a8c, Func Offset: 0x3c
	// Line 228, Address: 0x1023a98, Func Offset: 0x48
	// Func End, Address: 0x1023aa8, Func Offset: 0x58
}

// 
// Start address: 0x1023ab0
void b_close1(_anon0* actionwk)
{
	// Line 230, Address: 0x1023ab0, Func Offset: 0
	// Line 231, Address: 0x1023abc, Func Offset: 0xc
	// Line 232, Address: 0x1023ae4, Func Offset: 0x34
	// Line 233, Address: 0x1023af4, Func Offset: 0x44
	// Line 234, Address: 0x1023b00, Func Offset: 0x50
	// Func End, Address: 0x1023b10, Func Offset: 0x60
}

// 
// Start address: 0x1023b10
void b_closed(_anon0* actionwk)
{
	// Line 236, Address: 0x1023b10, Func Offset: 0
	// Line 237, Address: 0x1023b1c, Func Offset: 0xc
	// Line 238, Address: 0x1023b28, Func Offset: 0x18
	// Line 239, Address: 0x1023b34, Func Offset: 0x24
	// Line 240, Address: 0x1023b44, Func Offset: 0x34
	// Line 241, Address: 0x1023b50, Func Offset: 0x40
	// Func End, Address: 0x1023b60, Func Offset: 0x50
}

// 
// Start address: 0x1023b60
void b_closed1(_anon0* actionwk)
{
	// Line 243, Address: 0x1023b60, Func Offset: 0
	// Line 244, Address: 0x1023b6c, Func Offset: 0xc
	// Line 245, Address: 0x1023b94, Func Offset: 0x34
	// Line 246, Address: 0x1023ba4, Func Offset: 0x44
	// Line 247, Address: 0x1023bb0, Func Offset: 0x50
	// Func End, Address: 0x1023bc0, Func Offset: 0x60
}

// 
// Start address: 0x1023bc0
void b_open(_anon0* actionwk)
{
	// Line 249, Address: 0x1023bc0, Func Offset: 0
	// Line 250, Address: 0x1023bc8, Func Offset: 0x8
	// Line 251, Address: 0x1023bd4, Func Offset: 0x14
	// Line 252, Address: 0x1023be0, Func Offset: 0x20
	// Line 254, Address: 0x1023bf0, Func Offset: 0x30
	// Func End, Address: 0x1023bfc, Func Offset: 0x3c
}

// 
// Start address: 0x1023c00
void b_open1(_anon0* actionwk)
{
	// Line 256, Address: 0x1023c00, Func Offset: 0
	// Line 257, Address: 0x1023c0c, Func Offset: 0xc
	// Line 258, Address: 0x1023c34, Func Offset: 0x34
	// Line 259, Address: 0x1023c44, Func Offset: 0x44
	// Line 260, Address: 0x1023c50, Func Offset: 0x50
	// Func End, Address: 0x1023c60, Func Offset: 0x60
}

// 
// Start address: 0x1023c60
void b_opend(_anon0* actionwk)
{
	// Line 262, Address: 0x1023c60, Func Offset: 0
	// Line 263, Address: 0x1023c68, Func Offset: 0x8
	// Line 264, Address: 0x1023c74, Func Offset: 0x14
	// Line 265, Address: 0x1023c80, Func Offset: 0x20
	// Line 266, Address: 0x1023c8c, Func Offset: 0x2c
	// Line 267, Address: 0x1023c94, Func Offset: 0x34
	// Line 269, Address: 0x1023ca4, Func Offset: 0x44
	// Func End, Address: 0x1023cb0, Func Offset: 0x50
}

// 
// Start address: 0x1023cb0
void b_opend1(_anon0* actionwk)
{
	// Line 271, Address: 0x1023cb0, Func Offset: 0
	// Line 272, Address: 0x1023cbc, Func Offset: 0xc
	// Line 274, Address: 0x1023ce4, Func Offset: 0x34
	// Line 275, Address: 0x1023cf8, Func Offset: 0x48
	// Line 277, Address: 0x1023d00, Func Offset: 0x50
	// Line 278, Address: 0x1023d10, Func Offset: 0x60
	// Line 279, Address: 0x1023d1c, Func Offset: 0x6c
	// Func End, Address: 0x1023d2c, Func Offset: 0x7c
}

