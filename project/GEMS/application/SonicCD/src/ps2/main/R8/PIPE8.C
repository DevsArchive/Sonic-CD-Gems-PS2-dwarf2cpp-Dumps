typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef char type_1[6];
typedef _anon7 type_2[0];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef char* type_5[2];
typedef char type_6[5];
typedef _anon1 type_7[128];
typedef _anon0* type_8[6];
typedef unsigned char type_9[32];

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

char p00[5];
char p01[6];
char* pchg[2];
_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0* pat_pipe8[6];
_anon1 actwk[128];
unsigned char switchflag[32];

void pipe8(_anon1* actionwk);
void act0wait(_anon1* actionwk);
void act0wait1(_anon1* actionwk);
void act0init(_anon1* actionwk);
void act0init_sub(_anon1* actionwk, _anon1* a6);
void act0move(_anon1* actionwk);
void shatter(_anon1* actionwk);
void act1init(_anon1* actionwk);
void act1closed(_anon1* actionwk);
void act1closed1(_anon1* actionwk);
void to_act1open_a(_anon1* actionwk);
void to_act1opend_b(_anon1* actionwk);
void act1open_a(_anon1* actionwk);
void act1opend_a(_anon1* actionwk);
void to_act1closed_a(_anon1* actionwk);
void act1opend_b(_anon1* actionwk);
void to_act1close_b(_anon1* actionwk);
void act1close_b(_anon1* actionwk);
short act1check2(_anon1* actionwk, _anon1* a6, short d0, short d1, short d2, short d3);
short act1check1(_anon1* actionwk, _anon1* a6, short d0, short d1, short d2, short d3);

// 
// Start address: 0x1028ca0
void pipe8(_anon1* actionwk)
{
	short ano;
	// Line 59, Address: 0x1028ca0, Func Offset: 0
	// Line 62, Address: 0x1028cb0, Func Offset: 0x10
	// Line 64, Address: 0x1028cc8, Func Offset: 0x28
	// Line 65, Address: 0x1028cd4, Func Offset: 0x34
	// Line 68, Address: 0x1028cdc, Func Offset: 0x3c
	// Line 70, Address: 0x1028cf4, Func Offset: 0x54
	// Line 71, Address: 0x1028d04, Func Offset: 0x64
	// Line 73, Address: 0x1028d38, Func Offset: 0x98
	// Line 74, Address: 0x1028d44, Func Offset: 0xa4
	// Line 78, Address: 0x1028d4c, Func Offset: 0xac
	// Line 81, Address: 0x1028d8c, Func Offset: 0xec
	// Line 83, Address: 0x1028d98, Func Offset: 0xf8
	// Line 84, Address: 0x1028da4, Func Offset: 0x104
	// Line 86, Address: 0x1028dac, Func Offset: 0x10c
	// Line 88, Address: 0x1028db8, Func Offset: 0x118
	// Line 91, Address: 0x1028dc4, Func Offset: 0x124
	// Line 92, Address: 0x1028dd0, Func Offset: 0x130
	// Line 93, Address: 0x1028de8, Func Offset: 0x148
	// Line 94, Address: 0x1028dfc, Func Offset: 0x15c
	// Func End, Address: 0x1028e10, Func Offset: 0x170
}

// 
// Start address: 0x1028e10
void act0wait(_anon1* actionwk)
{
	// Line 96, Address: 0x1028e10, Func Offset: 0
	// Line 97, Address: 0x1028e1c, Func Offset: 0xc
	// Line 98, Address: 0x1028e2c, Func Offset: 0x1c
	// Line 99, Address: 0x1028e3c, Func Offset: 0x2c
	// Line 100, Address: 0x1028e48, Func Offset: 0x38
	// Line 101, Address: 0x1028e54, Func Offset: 0x44
	// Func End, Address: 0x1028e64, Func Offset: 0x54
}

// 
// Start address: 0x1028e70
void act0wait1(_anon1* actionwk)
{
	short d0;
	// Line 103, Address: 0x1028e70, Func Offset: 0
	// Line 106, Address: 0x1028e7c, Func Offset: 0xc
	// Line 107, Address: 0x1028eb4, Func Offset: 0x44
	// Line 108, Address: 0x1028ec8, Func Offset: 0x58
	// Line 109, Address: 0x1028ed8, Func Offset: 0x68
	// Line 110, Address: 0x1028ee0, Func Offset: 0x70
	// Func End, Address: 0x1028ef0, Func Offset: 0x80
}

// 
// Start address: 0x1028ef0
void act0init(_anon1* actionwk)
{
	_anon1* a1;
	// Line 112, Address: 0x1028ef0, Func Offset: 0
	// Line 115, Address: 0x1028efc, Func Offset: 0xc
	// Line 117, Address: 0x1028f10, Func Offset: 0x20
	// Line 118, Address: 0x1028f1c, Func Offset: 0x2c
	// Line 120, Address: 0x1028f24, Func Offset: 0x34
	// Line 121, Address: 0x1028f34, Func Offset: 0x44
	// Line 122, Address: 0x1028f68, Func Offset: 0x78
	// Line 123, Address: 0x1028f74, Func Offset: 0x84
	// Line 124, Address: 0x1028f98, Func Offset: 0xa8
	// Line 125, Address: 0x1028fa8, Func Offset: 0xb8
	// Line 127, Address: 0x1028fb8, Func Offset: 0xc8
	// Line 128, Address: 0x1028fc8, Func Offset: 0xd8
	// Line 130, Address: 0x1028fd8, Func Offset: 0xe8
	// Line 132, Address: 0x1028fec, Func Offset: 0xfc
	// Line 133, Address: 0x1028ff8, Func Offset: 0x108
	// Line 135, Address: 0x1029000, Func Offset: 0x110
	// Line 136, Address: 0x1029010, Func Offset: 0x120
	// Line 137, Address: 0x1029020, Func Offset: 0x130
	// Line 138, Address: 0x102902c, Func Offset: 0x13c
	// Line 139, Address: 0x1029050, Func Offset: 0x160
	// Line 140, Address: 0x1029060, Func Offset: 0x170
	// Line 141, Address: 0x1029094, Func Offset: 0x1a4
	// Func End, Address: 0x10290a4, Func Offset: 0x1b4
}

// 
// Start address: 0x10290b0
void act0init_sub(_anon1* actionwk, _anon1* a6)
{
	// Line 143, Address: 0x10290b0, Func Offset: 0
	// Line 144, Address: 0x10290bc, Func Offset: 0xc
	// Line 145, Address: 0x10290c8, Func Offset: 0x18
	// Line 146, Address: 0x10290d8, Func Offset: 0x28
	// Line 147, Address: 0x10290e4, Func Offset: 0x34
	// Line 148, Address: 0x10290f0, Func Offset: 0x40
	// Line 149, Address: 0x10290fc, Func Offset: 0x4c
	// Line 150, Address: 0x1029108, Func Offset: 0x58
	// Line 151, Address: 0x1029114, Func Offset: 0x64
	// Line 152, Address: 0x1029124, Func Offset: 0x74
	// Line 153, Address: 0x1029134, Func Offset: 0x84
	// Func End, Address: 0x1029140, Func Offset: 0x90
}

// 
// Start address: 0x1029140
void act0move(_anon1* actionwk)
{
	// Line 155, Address: 0x1029140, Func Offset: 0
	// Line 156, Address: 0x102914c, Func Offset: 0xc
	// Line 157, Address: 0x1029160, Func Offset: 0x20
	// Func End, Address: 0x1029170, Func Offset: 0x30
}

// 
// Start address: 0x1029170
void shatter(_anon1* actionwk)
{
	short ano;
	// Line 177, Address: 0x1029170, Func Offset: 0
	// Line 180, Address: 0x1029180, Func Offset: 0x10
	// Line 181, Address: 0x1029190, Func Offset: 0x20
	// Line 183, Address: 0x10291c4, Func Offset: 0x54
	// Line 184, Address: 0x10291d0, Func Offset: 0x60
	// Line 186, Address: 0x10291d8, Func Offset: 0x68
	// Line 189, Address: 0x102923c, Func Offset: 0xcc
	// Line 190, Address: 0x1029248, Func Offset: 0xd8
	// Line 192, Address: 0x1029250, Func Offset: 0xe0
	// Line 193, Address: 0x102925c, Func Offset: 0xec
	// Line 195, Address: 0x1029264, Func Offset: 0xf4
	// Line 196, Address: 0x1029270, Func Offset: 0x100
	// Line 198, Address: 0x1029278, Func Offset: 0x108
	// Line 199, Address: 0x1029284, Func Offset: 0x114
	// Line 201, Address: 0x102928c, Func Offset: 0x11c
	// Line 202, Address: 0x1029298, Func Offset: 0x128
	// Line 204, Address: 0x10292a0, Func Offset: 0x130
	// Line 205, Address: 0x10292ac, Func Offset: 0x13c
	// Line 207, Address: 0x10292b4, Func Offset: 0x144
	// Line 210, Address: 0x10292c0, Func Offset: 0x150
	// Line 211, Address: 0x10292cc, Func Offset: 0x15c
	// Func End, Address: 0x10292e0, Func Offset: 0x170
}

// 
// Start address: 0x10292e0
void act1init(_anon1* actionwk)
{
	// Line 213, Address: 0x10292e0, Func Offset: 0
	// Line 214, Address: 0x10292e8, Func Offset: 0x8
	// Line 215, Address: 0x10292f8, Func Offset: 0x18
	// Line 216, Address: 0x1029308, Func Offset: 0x28
	// Line 217, Address: 0x1029314, Func Offset: 0x34
	// Line 218, Address: 0x1029320, Func Offset: 0x40
	// Line 219, Address: 0x102932c, Func Offset: 0x4c
	// Line 220, Address: 0x1029338, Func Offset: 0x58
	// Line 221, Address: 0x1029344, Func Offset: 0x64
	// Line 222, Address: 0x1029354, Func Offset: 0x74
	// Func End, Address: 0x1029360, Func Offset: 0x80
}

// 
// Start address: 0x1029360
void act1closed(_anon1* actionwk)
{
	// Line 224, Address: 0x1029360, Func Offset: 0
	// Line 225, Address: 0x1029368, Func Offset: 0x8
	// Line 226, Address: 0x1029378, Func Offset: 0x18
	// Line 227, Address: 0x1029384, Func Offset: 0x24
	// Line 228, Address: 0x10293ac, Func Offset: 0x4c
	// Func End, Address: 0x10293b8, Func Offset: 0x58
}

// 
// Start address: 0x10293c0
void act1closed1(_anon1* actionwk)
{
	// Line 230, Address: 0x10293c0, Func Offset: 0
	// Line 231, Address: 0x10293cc, Func Offset: 0xc
	// Line 232, Address: 0x10293e0, Func Offset: 0x20
	// Line 234, Address: 0x1029418, Func Offset: 0x58
	// Line 235, Address: 0x1029424, Func Offset: 0x64
	// Line 238, Address: 0x102942c, Func Offset: 0x6c
	// Line 240, Address: 0x1029458, Func Offset: 0x98
	// Line 241, Address: 0x1029464, Func Offset: 0xa4
	// Func End, Address: 0x1029474, Func Offset: 0xb4
}

// 
// Start address: 0x1029480
void to_act1open_a(_anon1* actionwk)
{
	// Line 243, Address: 0x1029480, Func Offset: 0
	// Line 244, Address: 0x1029488, Func Offset: 0x8
	// Line 245, Address: 0x1029498, Func Offset: 0x18
	// Line 246, Address: 0x10294a4, Func Offset: 0x24
	// Func End, Address: 0x10294b0, Func Offset: 0x30
}

// 
// Start address: 0x10294b0
void to_act1opend_b(_anon1* actionwk)
{
	// Line 248, Address: 0x10294b0, Func Offset: 0
	// Line 249, Address: 0x10294b8, Func Offset: 0x8
	// Line 250, Address: 0x10294c8, Func Offset: 0x18
	// Line 251, Address: 0x10294d4, Func Offset: 0x24
	// Func End, Address: 0x10294e0, Func Offset: 0x30
}

// 
// Start address: 0x10294e0
void act1open_a(_anon1* actionwk)
{
	short t;
	// Line 253, Address: 0x10294e0, Func Offset: 0
	// Line 256, Address: 0x10294f0, Func Offset: 0x10
	// Line 257, Address: 0x1029500, Func Offset: 0x20
	// Line 258, Address: 0x1029510, Func Offset: 0x30
	// Line 260, Address: 0x1029520, Func Offset: 0x40
	// Line 261, Address: 0x1029530, Func Offset: 0x50
	// Line 262, Address: 0x102953c, Func Offset: 0x5c
	// Line 265, Address: 0x1029544, Func Offset: 0x64
	// Line 266, Address: 0x1029558, Func Offset: 0x78
	// Func End, Address: 0x102956c, Func Offset: 0x8c
}

// 
// Start address: 0x1029570
void act1opend_a(_anon1* actionwk)
{
	// Line 268, Address: 0x1029570, Func Offset: 0
	// Line 269, Address: 0x102957c, Func Offset: 0xc
	// Line 271, Address: 0x10295b0, Func Offset: 0x40
	// Line 272, Address: 0x10295bc, Func Offset: 0x4c
	// Func End, Address: 0x10295cc, Func Offset: 0x5c
}

// 
// Start address: 0x10295d0
void to_act1closed_a(_anon1* actionwk)
{
	// Line 274, Address: 0x10295d0, Func Offset: 0
	// Line 275, Address: 0x10295d8, Func Offset: 0x8
	// Line 276, Address: 0x10295e8, Func Offset: 0x18
	// Func End, Address: 0x10295f4, Func Offset: 0x24
}

// 
// Start address: 0x1029600
void act1opend_b(_anon1* actionwk)
{
	// Line 278, Address: 0x1029600, Func Offset: 0
	// Line 279, Address: 0x102960c, Func Offset: 0xc
	// Line 281, Address: 0x1029638, Func Offset: 0x38
	// Line 283, Address: 0x1029644, Func Offset: 0x44
	// Func End, Address: 0x1029654, Func Offset: 0x54
}

// 
// Start address: 0x1029660
void to_act1close_b(_anon1* actionwk)
{
	// Line 285, Address: 0x1029660, Func Offset: 0
	// Line 286, Address: 0x1029668, Func Offset: 0x8
	// Line 287, Address: 0x1029678, Func Offset: 0x18
	// Line 288, Address: 0x1029684, Func Offset: 0x24
	// Line 289, Address: 0x1029690, Func Offset: 0x30
	// Func End, Address: 0x102969c, Func Offset: 0x3c
}

// 
// Start address: 0x10296a0
void act1close_b(_anon1* actionwk)
{
	short t;
	// Line 291, Address: 0x10296a0, Func Offset: 0
	// Line 293, Address: 0x10296b0, Func Offset: 0x10
	// Line 294, Address: 0x10296c0, Func Offset: 0x20
	// Line 295, Address: 0x10296d0, Func Offset: 0x30
	// Line 297, Address: 0x10296e0, Func Offset: 0x40
	// Line 298, Address: 0x10296f0, Func Offset: 0x50
	// Line 299, Address: 0x10296f8, Func Offset: 0x58
	// Line 300, Address: 0x1029704, Func Offset: 0x64
	// Line 303, Address: 0x102970c, Func Offset: 0x6c
	// Line 305, Address: 0x1029720, Func Offset: 0x80
	// Func End, Address: 0x1029734, Func Offset: 0x94
}

// 
// Start address: 0x1029740
short act1check2(_anon1* actionwk, _anon1* a6, short d0, short d1, short d2, short d3)
{
	// Line 308, Address: 0x1029740, Func Offset: 0
	// Line 309, Address: 0x1029760, Func Offset: 0x20
	// Line 310, Address: 0x1029784, Func Offset: 0x44
	// Line 311, Address: 0x10297a4, Func Offset: 0x64
	// Func End, Address: 0x10297b4, Func Offset: 0x74
}

// 
// Start address: 0x10297c0
short act1check1(_anon1* actionwk, _anon1* a6, short d0, short d1, short d2, short d3)
{
	short d4;
	// Line 315, Address: 0x10297c0, Func Offset: 0
	// Line 318, Address: 0x10297e0, Func Offset: 0x20
	// Line 319, Address: 0x1029814, Func Offset: 0x54
	// Line 320, Address: 0x1029824, Func Offset: 0x64
	// Line 321, Address: 0x1029850, Func Offset: 0x90
	// Line 322, Address: 0x1029884, Func Offset: 0xc4
	// Line 323, Address: 0x1029894, Func Offset: 0xd4
	// Line 324, Address: 0x10298c0, Func Offset: 0x100
	// Line 325, Address: 0x10298c4, Func Offset: 0x104
	// Func End, Address: 0x10298d4, Func Offset: 0x114
}

