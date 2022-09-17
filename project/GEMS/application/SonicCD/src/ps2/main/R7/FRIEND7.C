typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);
typedef void(*type_13)(_anon1*);

typedef _anon7 type_0[20];
typedef unsigned char type_1[30];
typedef _anon7 type_2[0];
typedef void(*type_4)(_anon1*)[5];
typedef _anon0* type_5[3];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef unsigned short type_8[11];
typedef unsigned char type_9[58];
typedef unsigned char* type_10[1];
typedef unsigned char type_11[4];
typedef _anon1 type_12[128];
typedef void(*type_14)(_anon1*)[3];
typedef _anon0* type_15[5];
typedef unsigned char* type_16[2];

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

unsigned char pchg00[4];
unsigned char pchg01[30];
unsigned char pchg10[58];
unsigned char* pchg0[2];
unsigned char* pchg1[1];
_anon0 spr_flicky1;
_anon0 spr_flicky2;
_anon0 spr_ricky1;
_anon0 spr_ricky2;
_anon0 spr_ricky3;
_anon0 spr_ricky4;
_anon0 spr_friend0;
_anon0* pat_friend0[3];
_anon0* pat_friend1[5];
unsigned short tbl0sproffset[11];
unsigned char time_flag;
_anon5 stageno;
_anon1 actwk[128];

void t_roll(int cos_shift, int sin_shift, _anon1* pActwk);
void rev_h(_anon1* pActwk);
void set_sproffset(_anon1* pActwk);
void friend(_anon1* pActwk);
void t_init(_anon1* pActwk);
void t_move(_anon1* pActwk);
void t_movie(_anon1* pActwk);
void p_init(_anon1* pActwk);
void p_move(_anon1* pActwk);
void p_rev(_anon1* pActwk);
void p_movie(_anon1* pActwk);

// 
// Start address: 0x1020500
void t_roll(int cos_shift, int sin_shift, _anon1* pActwk)
{
	unsigned short sin;
	unsigned short cos;
	// Line 204, Address: 0x1020500, Func Offset: 0
	// Line 207, Address: 0x1020514, Func Offset: 0x14
	// Line 208, Address: 0x102052c, Func Offset: 0x2c
	// Line 209, Address: 0x1020550, Func Offset: 0x50
	// Line 210, Address: 0x1020574, Func Offset: 0x74
	// Line 211, Address: 0x1020588, Func Offset: 0x88
	// Line 212, Address: 0x102059c, Func Offset: 0x9c
	// Line 213, Address: 0x10205a8, Func Offset: 0xa8
	// Line 214, Address: 0x10205b4, Func Offset: 0xb4
	// Func End, Address: 0x10205c4, Func Offset: 0xc4
}

// 
// Start address: 0x10205d0
void rev_h(_anon1* pActwk)
{
	// Line 217, Address: 0x10205d0, Func Offset: 0
	// Line 218, Address: 0x10205d8, Func Offset: 0x8
	// Line 219, Address: 0x10205e8, Func Offset: 0x18
	// Line 220, Address: 0x10205f8, Func Offset: 0x28
	// Func End, Address: 0x1020604, Func Offset: 0x34
}

// 
// Start address: 0x1020610
void set_sproffset(_anon1* pActwk)
{
	int temp;
	// Line 223, Address: 0x1020610, Func Offset: 0
	// Line 226, Address: 0x102061c, Func Offset: 0xc
	// Line 227, Address: 0x102062c, Func Offset: 0x1c
	// Line 228, Address: 0x1020630, Func Offset: 0x20
	// Line 229, Address: 0x1020640, Func Offset: 0x30
	// Line 230, Address: 0x1020644, Func Offset: 0x34
	// Line 231, Address: 0x1020660, Func Offset: 0x50
	// Func End, Address: 0x1020670, Func Offset: 0x60
}

// 
// Start address: 0x1020670
void friend(_anon1* pActwk)
{
	void(*tbl_f)(_anon1*)[3];
	void(*tbl_r)(_anon1*)[5];
	// Line 235, Address: 0x1020670, Func Offset: 0
	// Line 236, Address: 0x102067c, Func Offset: 0xc
	// Line 242, Address: 0x10206a0, Func Offset: 0x30
	// Line 251, Address: 0x10206cc, Func Offset: 0x5c
	// Line 252, Address: 0x10206e0, Func Offset: 0x70
	// Line 253, Address: 0x10206fc, Func Offset: 0x8c
	// Line 255, Address: 0x1020740, Func Offset: 0xd0
	// Line 256, Address: 0x102077c, Func Offset: 0x10c
	// Func End, Address: 0x102078c, Func Offset: 0x11c
}

// 
// Start address: 0x1020790
void t_init(_anon1* pActwk)
{
	// Line 261, Address: 0x1020790, Func Offset: 0
	// Line 262, Address: 0x102079c, Func Offset: 0xc
	// Line 263, Address: 0x10207ac, Func Offset: 0x1c
	// Line 264, Address: 0x10207b8, Func Offset: 0x28
	// Line 265, Address: 0x10207c4, Func Offset: 0x34
	// Line 266, Address: 0x10207d0, Func Offset: 0x40
	// Line 267, Address: 0x10207dc, Func Offset: 0x4c
	// Line 268, Address: 0x10207e8, Func Offset: 0x58
	// Line 269, Address: 0x10207f8, Func Offset: 0x68
	// Line 270, Address: 0x1020808, Func Offset: 0x78
	// Line 271, Address: 0x1020818, Func Offset: 0x88
	// Line 272, Address: 0x1020824, Func Offset: 0x94
	// Line 274, Address: 0x1020830, Func Offset: 0xa0
	// Line 278, Address: 0x1020848, Func Offset: 0xb8
	// Line 279, Address: 0x1020854, Func Offset: 0xc4
	// Line 280, Address: 0x1020860, Func Offset: 0xd0
	// Line 283, Address: 0x1020868, Func Offset: 0xd8
	// Line 284, Address: 0x1020878, Func Offset: 0xe8
	// Line 285, Address: 0x1020884, Func Offset: 0xf4
	// Line 287, Address: 0x1020890, Func Offset: 0x100
	// Func End, Address: 0x10208a0, Func Offset: 0x110
}

// 
// Start address: 0x10208a0
void t_move(_anon1* pActwk)
{
	unsigned char temp;
	// Line 291, Address: 0x10208a0, Func Offset: 0
	// Line 294, Address: 0x10208b0, Func Offset: 0x10
	// Line 295, Address: 0x10208c4, Func Offset: 0x24
	// Line 296, Address: 0x10208e8, Func Offset: 0x48
	// Line 297, Address: 0x1020904, Func Offset: 0x64
	// Line 298, Address: 0x1020910, Func Offset: 0x70
	// Line 299, Address: 0x1020930, Func Offset: 0x90
	// Line 301, Address: 0x102093c, Func Offset: 0x9c
	// Line 302, Address: 0x1020944, Func Offset: 0xa4
	// Line 303, Address: 0x1020958, Func Offset: 0xb8
	// Line 304, Address: 0x1020964, Func Offset: 0xc4
	// Line 305, Address: 0x1020978, Func Offset: 0xd8
	// Func End, Address: 0x102098c, Func Offset: 0xec
}

// 
// Start address: 0x1020990
void t_movie(_anon1* pActwk)
{
	_anon1* tempact;
	// Line 309, Address: 0x1020990, Func Offset: 0
	// Line 312, Address: 0x10209a0, Func Offset: 0x10
	// Line 313, Address: 0x10209c8, Func Offset: 0x38
	// Line 315, Address: 0x10209dc, Func Offset: 0x4c
	// Line 316, Address: 0x10209e8, Func Offset: 0x58
	// Line 318, Address: 0x10209f0, Func Offset: 0x60
	// Line 320, Address: 0x10209fc, Func Offset: 0x6c
	// Line 321, Address: 0x1020a08, Func Offset: 0x78
	// Line 324, Address: 0x1020a10, Func Offset: 0x80
	// Line 326, Address: 0x1020a24, Func Offset: 0x94
	// Line 327, Address: 0x1020a34, Func Offset: 0xa4
	// Line 328, Address: 0x1020a4c, Func Offset: 0xbc
	// Line 331, Address: 0x1020a60, Func Offset: 0xd0
	// Line 332, Address: 0x1020a74, Func Offset: 0xe4
	// Line 334, Address: 0x1020a80, Func Offset: 0xf0
	// Func End, Address: 0x1020a94, Func Offset: 0x104
}

// 
// Start address: 0x1020aa0
void p_init(_anon1* pActwk)
{
	// Line 339, Address: 0x1020aa0, Func Offset: 0
	// Line 340, Address: 0x1020aac, Func Offset: 0xc
	// Line 341, Address: 0x1020abc, Func Offset: 0x1c
	// Line 342, Address: 0x1020ac8, Func Offset: 0x28
	// Line 343, Address: 0x1020ad4, Func Offset: 0x34
	// Line 344, Address: 0x1020ae0, Func Offset: 0x40
	// Line 345, Address: 0x1020aec, Func Offset: 0x4c
	// Line 346, Address: 0x1020af8, Func Offset: 0x58
	// Line 348, Address: 0x1020b08, Func Offset: 0x68
	// Line 350, Address: 0x1020b14, Func Offset: 0x74
	// Line 352, Address: 0x1020b2c, Func Offset: 0x8c
	// Line 353, Address: 0x1020b38, Func Offset: 0x98
	// Line 354, Address: 0x1020b44, Func Offset: 0xa4
	// Line 357, Address: 0x1020b4c, Func Offset: 0xac
	// Line 358, Address: 0x1020b58, Func Offset: 0xb8
	// Line 360, Address: 0x1020b64, Func Offset: 0xc4
	// Func End, Address: 0x1020b74, Func Offset: 0xd4
}

// 
// Start address: 0x1020b80
void p_move(_anon1* pActwk)
{
	short temp;
	// Line 364, Address: 0x1020b80, Func Offset: 0
	// Line 367, Address: 0x1020b90, Func Offset: 0x10
	// Line 368, Address: 0x1020ba8, Func Offset: 0x28
	// Line 370, Address: 0x1020bc0, Func Offset: 0x40
	// Line 371, Address: 0x1020bd8, Func Offset: 0x58
	// Line 373, Address: 0x1020be8, Func Offset: 0x68
	// Line 375, Address: 0x1020bf4, Func Offset: 0x74
	// Line 377, Address: 0x1020c20, Func Offset: 0xa0
	// Line 378, Address: 0x1020c30, Func Offset: 0xb0
	// Line 379, Address: 0x1020c40, Func Offset: 0xc0
	// Line 381, Address: 0x1020c4c, Func Offset: 0xcc
	// Line 382, Address: 0x1020c58, Func Offset: 0xd8
	// Line 383, Address: 0x1020c64, Func Offset: 0xe4
	// Func End, Address: 0x1020c78, Func Offset: 0xf8
}

// 
// Start address: 0x1020c80
void p_rev(_anon1* pActwk)
{
	// Line 387, Address: 0x1020c80, Func Offset: 0
	// Line 388, Address: 0x1020c8c, Func Offset: 0xc
	// Line 389, Address: 0x1020c98, Func Offset: 0x18
	// Line 390, Address: 0x1020ca8, Func Offset: 0x28
	// Line 392, Address: 0x1020cb4, Func Offset: 0x34
	// Line 393, Address: 0x1020cc0, Func Offset: 0x40
	// Line 394, Address: 0x1020ccc, Func Offset: 0x4c
	// Func End, Address: 0x1020cdc, Func Offset: 0x5c
}

// 
// Start address: 0x1020ce0
void p_movie(_anon1* pActwk)
{
	_anon1* tempact;
	// Line 397, Address: 0x1020ce0, Func Offset: 0
	// Line 400, Address: 0x1020cf0, Func Offset: 0x10
	// Line 401, Address: 0x1020d18, Func Offset: 0x38
	// Line 403, Address: 0x1020d2c, Func Offset: 0x4c
	// Line 404, Address: 0x1020d38, Func Offset: 0x58
	// Line 406, Address: 0x1020d40, Func Offset: 0x60
	// Line 408, Address: 0x1020d4c, Func Offset: 0x6c
	// Line 409, Address: 0x1020d58, Func Offset: 0x78
	// Line 411, Address: 0x1020d60, Func Offset: 0x80
	// Line 412, Address: 0x1020d74, Func Offset: 0x94
	// Line 413, Address: 0x1020d80, Func Offset: 0xa0
	// Func End, Address: 0x1020d94, Func Offset: 0xb4
}

