typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_0)(_anon0*);
typedef void(*type_4)(_anon0*);

typedef unsigned char type_1[4];
typedef _anon7 type_2[20];
typedef _anon7 type_3[0];
typedef void(*type_5)(_anon0*)[3];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef unsigned char type_8[30];
typedef unsigned char type_9[58];
typedef _anon0 type_10[128];
typedef _anon1* type_11[5];
typedef _anon1* type_12[5];
typedef short type_13[11];
typedef _anon1* type_14[3];
typedef unsigned char* type_15[2];
typedef unsigned char* type_16[1];
typedef void(*type_17)(_anon0*)[3];

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

unsigned char pchg0_00[4];
unsigned char pchg0_01[30];
unsigned char* pchg0[2];
unsigned char pchg1_00[58];
unsigned char* pchg1[1];
_anon1 friend0_pat00;
_anon1 friend0_pat01;
_anon1 friend0_pat02;
_anon1* pat_friend0[3];
_anon1 friend1_pat00;
_anon1 friend1_pat01;
_anon1 friend1_pat02;
_anon1 friend1_pat03;
_anon1 friend1_pat04;
_anon1* pat_friend1[5];
_anon1 friend2_pat00;
_anon1 friend2_pat01;
_anon1 friend2_pat02;
_anon1 friend2_pat03;
_anon1 friend2_pat04;
_anon1* pat_friend2[5];
void(*flicky_act_tbl)(_anon0*)[3];
void(*ricky_act_tbl)(_anon0*)[3];
_anon0 actwk[128];
_anon5 stageno;
unsigned char time_flag;

void friend(_anon0* pActwk);
void t_init(_anon0* pActwk);
void t_move(_anon0* pActwk);
void t_movie(_anon0* pActwk);
void p_init(_anon0* pActwk);
void p_move(_anon0* pActwk);
void p_movie(_anon0* pActwk);
void set_sproffset(_anon0* pActwk);
void t_roll(_anon0* pActwk, int xsft, int ysft);

// 
// Start address: 0x101e220
void friend(_anon0* pActwk)
{
	// Line 219, Address: 0x101e220, Func Offset: 0
	// Line 220, Address: 0x101e22c, Func Offset: 0xc
	// Line 224, Address: 0x101e240, Func Offset: 0x20
	// Line 226, Address: 0x101e25c, Func Offset: 0x3c
	// Line 227, Address: 0x101e2a0, Func Offset: 0x80
	// Line 229, Address: 0x101e2a8, Func Offset: 0x88
	// Line 231, Address: 0x101e2ec, Func Offset: 0xcc
	// Func End, Address: 0x101e2fc, Func Offset: 0xdc
}

// 
// Start address: 0x101e300
void t_init(_anon0* pActwk)
{
	// Line 237, Address: 0x101e300, Func Offset: 0
	// Line 238, Address: 0x101e30c, Func Offset: 0xc
	// Line 239, Address: 0x101e31c, Func Offset: 0x1c
	// Line 240, Address: 0x101e328, Func Offset: 0x28
	// Line 241, Address: 0x101e334, Func Offset: 0x34
	// Line 242, Address: 0x101e340, Func Offset: 0x40
	// Line 243, Address: 0x101e34c, Func Offset: 0x4c
	// Line 244, Address: 0x101e358, Func Offset: 0x58
	// Line 245, Address: 0x101e368, Func Offset: 0x68
	// Line 246, Address: 0x101e378, Func Offset: 0x78
	// Line 247, Address: 0x101e388, Func Offset: 0x88
	// Line 248, Address: 0x101e3a8, Func Offset: 0xa8
	// Line 250, Address: 0x101e3b4, Func Offset: 0xb4
	// Line 252, Address: 0x101e3d0, Func Offset: 0xd0
	// Line 253, Address: 0x101e3e0, Func Offset: 0xe0
	// Line 254, Address: 0x101e3ec, Func Offset: 0xec
	// Line 255, Address: 0x101e3f8, Func Offset: 0xf8
	// Line 257, Address: 0x101e400, Func Offset: 0x100
	// Line 258, Address: 0x101e410, Func Offset: 0x110
	// Line 259, Address: 0x101e41c, Func Offset: 0x11c
	// Line 261, Address: 0x101e428, Func Offset: 0x128
	// Func End, Address: 0x101e438, Func Offset: 0x138
}

// 
// Start address: 0x101e440
void t_move(_anon0* pActwk)
{
	char anglewk;
	// Line 267, Address: 0x101e440, Func Offset: 0
	// Line 270, Address: 0x101e450, Func Offset: 0x10
	// Line 272, Address: 0x101e464, Func Offset: 0x24
	// Line 274, Address: 0x101e498, Func Offset: 0x58
	// Line 275, Address: 0x101e4b8, Func Offset: 0x78
	// Line 276, Address: 0x101e4c8, Func Offset: 0x88
	// Line 277, Address: 0x101e4e8, Func Offset: 0xa8
	// Line 281, Address: 0x101e508, Func Offset: 0xc8
	// Line 282, Address: 0x101e510, Func Offset: 0xd0
	// Line 283, Address: 0x101e524, Func Offset: 0xe4
	// Line 284, Address: 0x101e530, Func Offset: 0xf0
	// Line 285, Address: 0x101e544, Func Offset: 0x104
	// Func End, Address: 0x101e558, Func Offset: 0x118
}

// 
// Start address: 0x101e560
void t_movie(_anon0* pActwk)
{
	_anon0* pMoviewk;
	// Line 291, Address: 0x101e560, Func Offset: 0
	// Line 294, Address: 0x101e570, Func Offset: 0x10
	// Line 295, Address: 0x101e598, Func Offset: 0x38
	// Line 296, Address: 0x101e5b8, Func Offset: 0x58
	// Line 297, Address: 0x101e5c4, Func Offset: 0x64
	// Line 300, Address: 0x101e5cc, Func Offset: 0x6c
	// Line 301, Address: 0x101e5e0, Func Offset: 0x80
	// Line 302, Address: 0x101e5f0, Func Offset: 0x90
	// Line 303, Address: 0x101e608, Func Offset: 0xa8
	// Line 304, Address: 0x101e628, Func Offset: 0xc8
	// Line 305, Address: 0x101e630, Func Offset: 0xd0
	// Line 306, Address: 0x101e644, Func Offset: 0xe4
	// Line 308, Address: 0x101e650, Func Offset: 0xf0
	// Func End, Address: 0x101e664, Func Offset: 0x104
}

// 
// Start address: 0x101e670
void p_init(_anon0* pActwk)
{
	// Line 314, Address: 0x101e670, Func Offset: 0
	// Line 315, Address: 0x101e67c, Func Offset: 0xc
	// Line 316, Address: 0x101e68c, Func Offset: 0x1c
	// Line 317, Address: 0x101e698, Func Offset: 0x28
	// Line 318, Address: 0x101e6a4, Func Offset: 0x34
	// Line 319, Address: 0x101e6b0, Func Offset: 0x40
	// Line 320, Address: 0x101e6bc, Func Offset: 0x4c
	// Line 321, Address: 0x101e6c8, Func Offset: 0x58
	// Line 322, Address: 0x101e6d8, Func Offset: 0x68
	// Line 323, Address: 0x101e6e8, Func Offset: 0x78
	// Line 325, Address: 0x101e6f4, Func Offset: 0x84
	// Line 327, Address: 0x101e710, Func Offset: 0xa0
	// Line 328, Address: 0x101e720, Func Offset: 0xb0
	// Line 329, Address: 0x101e730, Func Offset: 0xc0
	// Line 330, Address: 0x101e750, Func Offset: 0xe0
	// Line 332, Address: 0x101e758, Func Offset: 0xe8
	// Line 333, Address: 0x101e764, Func Offset: 0xf4
	// Line 335, Address: 0x101e770, Func Offset: 0x100
	// Func End, Address: 0x101e780, Func Offset: 0x110
}

// 
// Start address: 0x101e780
void p_move(_anon0* pActwk)
{
	short colval;
	// Line 341, Address: 0x101e780, Func Offset: 0
	// Line 344, Address: 0x101e790, Func Offset: 0x10
	// Line 345, Address: 0x101e7a8, Func Offset: 0x28
	// Line 346, Address: 0x101e7c0, Func Offset: 0x40
	// Line 347, Address: 0x101e7d8, Func Offset: 0x58
	// Line 348, Address: 0x101e7e0, Func Offset: 0x60
	// Line 349, Address: 0x101e7e8, Func Offset: 0x68
	// Line 352, Address: 0x101e7f4, Func Offset: 0x74
	// Line 353, Address: 0x101e820, Func Offset: 0xa0
	// Line 354, Address: 0x101e830, Func Offset: 0xb0
	// Line 355, Address: 0x101e83c, Func Offset: 0xbc
	// Line 356, Address: 0x101e84c, Func Offset: 0xcc
	// Line 361, Address: 0x101e86c, Func Offset: 0xec
	// Line 362, Address: 0x101e878, Func Offset: 0xf8
	// Line 363, Address: 0x101e884, Func Offset: 0x104
	// Func End, Address: 0x101e898, Func Offset: 0x118
}

// 
// Start address: 0x101e8a0
void p_movie(_anon0* pActwk)
{
	_anon0* pMoviewk;
	// Line 369, Address: 0x101e8a0, Func Offset: 0
	// Line 372, Address: 0x101e8b0, Func Offset: 0x10
	// Line 373, Address: 0x101e8d8, Func Offset: 0x38
	// Line 374, Address: 0x101e8f8, Func Offset: 0x58
	// Line 375, Address: 0x101e904, Func Offset: 0x64
	// Line 378, Address: 0x101e90c, Func Offset: 0x6c
	// Line 379, Address: 0x101e920, Func Offset: 0x80
	// Line 380, Address: 0x101e92c, Func Offset: 0x8c
	// Func End, Address: 0x101e940, Func Offset: 0xa0
}

// 
// Start address: 0x101e940
void set_sproffset(_anon0* pActwk)
{
	short tbl0sproffset[11];
	// Line 397, Address: 0x101e940, Func Offset: 0
	// Line 398, Address: 0x101e948, Func Offset: 0x8
	// Line 412, Address: 0x101e974, Func Offset: 0x34
	// Line 413, Address: 0x101e9ac, Func Offset: 0x6c
	// Func End, Address: 0x101e9b8, Func Offset: 0x78
}

// 
// Start address: 0x101e9c0
void t_roll(_anon0* pActwk, int xsft, int ysft)
{
	short sinwk;
	short coswk;
	// Line 429, Address: 0x101e9c0, Func Offset: 0
	// Line 432, Address: 0x101e9d4, Func Offset: 0x14
	// Line 433, Address: 0x101e9ec, Func Offset: 0x2c
	// Line 434, Address: 0x101ea04, Func Offset: 0x44
	// Line 435, Address: 0x101ea1c, Func Offset: 0x5c
	// Line 436, Address: 0x101ea30, Func Offset: 0x70
	// Line 437, Address: 0x101ea44, Func Offset: 0x84
	// Line 438, Address: 0x101ea50, Func Offset: 0x90
	// Line 439, Address: 0x101ea5c, Func Offset: 0x9c
	// Func End, Address: 0x101ea6c, Func Offset: 0xac
}

