typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_4)(short, short, short, short);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef short type_2[17];
typedef short type_3[3];
typedef void(*type_5)(short, short, short, short)[16];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef short* type_8[4];
typedef short type_9[17];
typedef _anon1 type_10[128];
typedef short type_11[17];
typedef unsigned char* type_12[3];

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

_anon1 actwk[128];
short fcol3a[17];
short fcol3b[3];
short fcol3c[17];
short fcol3d[17];
short* fcol_tbl[4];
_anon5 col_y;
unsigned char bump_sound_off;
unsigned char generate_flag;
unsigned char time_flag;

void playsp();
void boyo();
char bycol_sub0(short cal_x, short cal_y);
void bob(short i, short cal_x, short cal_y, short block_back);
void bob_s(short i, short cal_x, short cal_y, short block_back);
void bob_j();
void bob0(short i, short cal_x, short cal_y, short block_back);
void bob1(short i, short cal_x, short cal_y, short block_back);
void bob_s0(short i, short cal_x, short cal_y, short block_back);
void bob2(short i, short cal_x, short cal_y, short block_back);
void bob3(short i, short cal_x, short cal_y, short block_back);
void bob4(short i, short cal_x, short cal_y, short block_back);
void bob5(short i, short cal_x, short cal_y, short block_back);
void bob6(short i, short cal_x, short cal_y, short block_back);

// 
// Start address: 0x101e0b0
void playsp()
{
	// Line 18, Address: 0x101e0b0, Func Offset: 0
	// Line 19, Address: 0x101e0b8, Func Offset: 0x8
	// Line 20, Address: 0x101e0dc, Func Offset: 0x2c
	// Func End, Address: 0x101e0ec, Func Offset: 0x3c
}

// 
// Start address: 0x101e0f0
void boyo()
{
	unsigned char direc_speed;
	// Line 24, Address: 0x101e0f0, Func Offset: 0
	// Line 27, Address: 0x101e0fc, Func Offset: 0xc
	// Line 29, Address: 0x101e124, Func Offset: 0x34
	// Line 30, Address: 0x101e138, Func Offset: 0x48
	// Line 33, Address: 0x101e170, Func Offset: 0x80
	// Line 35, Address: 0x101e1e0, Func Offset: 0xf0
	// Line 37, Address: 0x101e248, Func Offset: 0x158
	// Line 40, Address: 0x101e250, Func Offset: 0x160
	// Line 42, Address: 0x101e2c0, Func Offset: 0x1d0
	// Line 44, Address: 0x101e328, Func Offset: 0x238
	// Line 47, Address: 0x101e330, Func Offset: 0x240
	// Line 50, Address: 0x101e3ac, Func Offset: 0x2bc
	// Line 52, Address: 0x101e414, Func Offset: 0x324
	// Line 55, Address: 0x101e41c, Func Offset: 0x32c
	// Line 58, Address: 0x101e498, Func Offset: 0x3a8
	// Line 64, Address: 0x101e500, Func Offset: 0x410
	// Func End, Address: 0x101e514, Func Offset: 0x424
}

// 
// Start address: 0x101e520
char bycol_sub0(short cal_x, short cal_y)
{
	void(*jump_no)(short, short, short, short)[16];
	unsigned char now_time;
	short block_no;
	short block_back;
	short* fcol3;
	short i;
	// Line 84, Address: 0x101e520, Func Offset: 0
	// Line 85, Address: 0x101e544, Func Offset: 0x24
	// Line 92, Address: 0x101e578, Func Offset: 0x58
	// Line 93, Address: 0x101e5a8, Func Offset: 0x88
	// Line 94, Address: 0x101e5e4, Func Offset: 0xc4
	// Line 95, Address: 0x101e610, Func Offset: 0xf0
	// Line 96, Address: 0x101e62c, Func Offset: 0x10c
	// Line 97, Address: 0x101e644, Func Offset: 0x124
	// Line 98, Address: 0x101e6ac, Func Offset: 0x18c
	// Line 99, Address: 0x101e6b8, Func Offset: 0x198
	// Line 102, Address: 0x101e6c4, Func Offset: 0x1a4
	// Line 103, Address: 0x101e6dc, Func Offset: 0x1bc
	// Line 104, Address: 0x101e6f0, Func Offset: 0x1d0
	// Line 106, Address: 0x101e6fc, Func Offset: 0x1dc
	// Line 107, Address: 0x101e704, Func Offset: 0x1e4
	// Line 108, Address: 0x101e730, Func Offset: 0x210
	// Line 109, Address: 0x101e744, Func Offset: 0x224
	// Line 110, Address: 0x101e754, Func Offset: 0x234
	// Line 111, Address: 0x101e790, Func Offset: 0x270
	// Line 113, Address: 0x101e79c, Func Offset: 0x27c
	// Line 115, Address: 0x101e7a4, Func Offset: 0x284
	// Line 116, Address: 0x101e7c8, Func Offset: 0x2a8
	// Line 117, Address: 0x101e7cc, Func Offset: 0x2ac
	// Func End, Address: 0x101e7f0, Func Offset: 0x2d0
}

// 
// Start address: 0x101e7f0
void bob(short i, short cal_x, short cal_y, short block_back)
{
	short tmp_sin;
	short tmp_cos;
	short tmp_x;
	short tmp_y;
	int cal_sin;
	int cal_cos;
	_anon1* new_actwk;
	// Line 120, Address: 0x101e7f0, Func Offset: 0
	// Line 125, Address: 0x101e818, Func Offset: 0x28
	// Line 126, Address: 0x101e834, Func Offset: 0x44
	// Line 127, Address: 0x101e854, Func Offset: 0x64
	// Line 128, Address: 0x101e870, Func Offset: 0x80
	// Line 129, Address: 0x101e894, Func Offset: 0xa4
	// Line 130, Address: 0x101e8ac, Func Offset: 0xbc
	// Line 132, Address: 0x101e920, Func Offset: 0x130
	// Line 133, Address: 0x101e93c, Func Offset: 0x14c
	// Line 134, Address: 0x101e958, Func Offset: 0x168
	// Line 135, Address: 0x101e968, Func Offset: 0x178
	// Line 136, Address: 0x101e978, Func Offset: 0x188
	// Line 137, Address: 0x101e98c, Func Offset: 0x19c
	// Line 138, Address: 0x101e9a0, Func Offset: 0x1b0
	// Line 139, Address: 0x101e9a8, Func Offset: 0x1b8
	// Line 140, Address: 0x101e9bc, Func Offset: 0x1cc
	// Line 141, Address: 0x101e9c8, Func Offset: 0x1d8
	// Line 142, Address: 0x101e9d0, Func Offset: 0x1e0
	// Line 145, Address: 0x101e9d8, Func Offset: 0x1e8
	// Line 146, Address: 0x101e9ec, Func Offset: 0x1fc
	// Line 147, Address: 0x101ea14, Func Offset: 0x224
	// Line 148, Address: 0x101ea3c, Func Offset: 0x24c
	// Line 149, Address: 0x101ea64, Func Offset: 0x274
	// Line 150, Address: 0x101ea70, Func Offset: 0x280
	// Func End, Address: 0x101ea90, Func Offset: 0x2a0
}

// 
// Start address: 0x101ea90
void bob_s(short i, short cal_x, short cal_y, short block_back)
{
	short tmp_sin;
	short tmp_cos;
	int cal_sin;
	int cal_cos;
	// Line 153, Address: 0x101ea90, Func Offset: 0
	// Line 157, Address: 0x101eab0, Func Offset: 0x20
	// Line 158, Address: 0x101eacc, Func Offset: 0x3c
	// Line 159, Address: 0x101eae8, Func Offset: 0x58
	// Line 161, Address: 0x101eb5c, Func Offset: 0xcc
	// Line 162, Address: 0x101eb78, Func Offset: 0xe8
	// Line 163, Address: 0x101eb94, Func Offset: 0x104
	// Line 164, Address: 0x101eba4, Func Offset: 0x114
	// Line 165, Address: 0x101ebb4, Func Offset: 0x124
	// Line 166, Address: 0x101ebbc, Func Offset: 0x12c
	// Line 167, Address: 0x101ebcc, Func Offset: 0x13c
	// Func End, Address: 0x101ebe4, Func Offset: 0x154
}

// 
// Start address: 0x101ebf0
void bob_j()
{
	// Line 171, Address: 0x101ebf0, Func Offset: 0
	// Line 172, Address: 0x101ec04, Func Offset: 0x14
	// Line 173, Address: 0x101ec18, Func Offset: 0x28
	// Line 174, Address: 0x101ec20, Func Offset: 0x30
	// Func End, Address: 0x101ec28, Func Offset: 0x38
}

// 
// Start address: 0x101ec30
void bob0(short i, short cal_x, short cal_y, short block_back)
{
	// Line 177, Address: 0x101ec30, Func Offset: 0
	// Line 178, Address: 0x101ec48, Func Offset: 0x18
	// Line 179, Address: 0x101ec74, Func Offset: 0x44
	// Line 180, Address: 0x101ec80, Func Offset: 0x50
	// Line 181, Address: 0x101ec88, Func Offset: 0x58
	// Line 182, Address: 0x101eca8, Func Offset: 0x78
	// Func End, Address: 0x101ecb8, Func Offset: 0x88
}

// 
// Start address: 0x101ecc0
void bob1(short i, short cal_x, short cal_y, short block_back)
{
	// Line 185, Address: 0x101ecc0, Func Offset: 0
	// Line 186, Address: 0x101ecd8, Func Offset: 0x18
	// Line 187, Address: 0x101ed04, Func Offset: 0x44
	// Line 188, Address: 0x101ed10, Func Offset: 0x50
	// Line 189, Address: 0x101ed18, Func Offset: 0x58
	// Line 190, Address: 0x101ed38, Func Offset: 0x78
	// Func End, Address: 0x101ed48, Func Offset: 0x88
}

// 
// Start address: 0x101ed50
void bob_s0(short i, short cal_x, short cal_y, short block_back)
{
	short tmp_sin;
	short tmp_cos;
	int cal_sin;
	int cal_cos;
	// Line 193, Address: 0x101ed50, Func Offset: 0
	// Line 197, Address: 0x101ed70, Func Offset: 0x20
	// Line 198, Address: 0x101ed8c, Func Offset: 0x3c
	// Line 199, Address: 0x101eda8, Func Offset: 0x58
	// Line 201, Address: 0x101ee1c, Func Offset: 0xcc
	// Line 202, Address: 0x101ee38, Func Offset: 0xe8
	// Line 203, Address: 0x101ee54, Func Offset: 0x104
	// Line 204, Address: 0x101ee64, Func Offset: 0x114
	// Line 205, Address: 0x101ee74, Func Offset: 0x124
	// Line 206, Address: 0x101ee7c, Func Offset: 0x12c
	// Line 207, Address: 0x101ee8c, Func Offset: 0x13c
	// Func End, Address: 0x101eea4, Func Offset: 0x154
}

// 
// Start address: 0x101eeb0
void bob2(short i, short cal_x, short cal_y, short block_back)
{
	// Line 210, Address: 0x101eeb0, Func Offset: 0
	// Line 211, Address: 0x101eec8, Func Offset: 0x18
	// Line 212, Address: 0x101eee4, Func Offset: 0x34
	// Line 213, Address: 0x101ef1c, Func Offset: 0x6c
	// Line 214, Address: 0x101ef34, Func Offset: 0x84
	// Line 215, Address: 0x101ef3c, Func Offset: 0x8c
	// Line 216, Address: 0x101ef74, Func Offset: 0xc4
	// Line 218, Address: 0x101ef8c, Func Offset: 0xdc
	// Func End, Address: 0x101ef9c, Func Offset: 0xec
}

// 
// Start address: 0x101efa0
void bob3(short i, short cal_x, short cal_y, short block_back)
{
	unsigned char* tbl[3];
	unsigned char* bydcol;
	unsigned char cal_direc;
	short tmp_sin;
	short tmp_cos;
	int cal_sin;
	int cal_cos;
	// Line 221, Address: 0x101efa0, Func Offset: 0
	// Line 231, Address: 0x101efc8, Func Offset: 0x28
	// Line 237, Address: 0x101efec, Func Offset: 0x4c
	// Line 238, Address: 0x101f010, Func Offset: 0x70
	// Line 239, Address: 0x101f028, Func Offset: 0x88
	// Line 240, Address: 0x101f044, Func Offset: 0xa4
	// Line 241, Address: 0x101f060, Func Offset: 0xc0
	// Line 242, Address: 0x101f098, Func Offset: 0xf8
	// Line 245, Address: 0x101f0e4, Func Offset: 0x144
	// Line 246, Address: 0x101f104, Func Offset: 0x164
	// Line 247, Address: 0x101f128, Func Offset: 0x188
	// Line 248, Address: 0x101f130, Func Offset: 0x190
	// Line 249, Address: 0x101f150, Func Offset: 0x1b0
	// Line 250, Address: 0x101f164, Func Offset: 0x1c4
	// Line 251, Address: 0x101f180, Func Offset: 0x1e0
	// Line 252, Address: 0x101f19c, Func Offset: 0x1fc
	// Line 253, Address: 0x101f1ac, Func Offset: 0x20c
	// Line 254, Address: 0x101f1bc, Func Offset: 0x21c
	// Line 255, Address: 0x101f1c4, Func Offset: 0x224
	// Func End, Address: 0x101f1e4, Func Offset: 0x244
}

// 
// Start address: 0x101f1f0
void bob4(short i, short cal_x, short cal_y, short block_back)
{
	// Line 258, Address: 0x101f1f0, Func Offset: 0
	// Line 259, Address: 0x101f208, Func Offset: 0x18
	// Line 260, Address: 0x101f224, Func Offset: 0x34
	// Line 261, Address: 0x101f25c, Func Offset: 0x6c
	// Line 262, Address: 0x101f274, Func Offset: 0x84
	// Line 263, Address: 0x101f27c, Func Offset: 0x8c
	// Line 264, Address: 0x101f2b4, Func Offset: 0xc4
	// Line 266, Address: 0x101f2cc, Func Offset: 0xdc
	// Func End, Address: 0x101f2dc, Func Offset: 0xec
}

// 
// Start address: 0x101f2e0
void bob5(short i, short cal_x, short cal_y, short block_back)
{
	// Line 269, Address: 0x101f2e0, Func Offset: 0
	// Line 270, Address: 0x101f2f8, Func Offset: 0x18
	// Line 271, Address: 0x101f314, Func Offset: 0x34
	// Line 272, Address: 0x101f34c, Func Offset: 0x6c
	// Line 273, Address: 0x101f364, Func Offset: 0x84
	// Line 274, Address: 0x101f36c, Func Offset: 0x8c
	// Line 275, Address: 0x101f3a4, Func Offset: 0xc4
	// Line 277, Address: 0x101f3bc, Func Offset: 0xdc
	// Func End, Address: 0x101f3cc, Func Offset: 0xec
}

// 
// Start address: 0x101f3d0
void bob6(short i, short cal_x, short cal_y, short block_back)
{
	// Line 280, Address: 0x101f3d0, Func Offset: 0
	// Line 281, Address: 0x101f3e8, Func Offset: 0x18
	// Line 282, Address: 0x101f404, Func Offset: 0x34
	// Line 283, Address: 0x101f43c, Func Offset: 0x6c
	// Line 284, Address: 0x101f454, Func Offset: 0x84
	// Line 285, Address: 0x101f45c, Func Offset: 0x8c
	// Line 286, Address: 0x101f494, Func Offset: 0xc4
	// Line 288, Address: 0x101f4ac, Func Offset: 0xdc
	// Func End, Address: 0x101f4bc, Func Offset: 0xec
}

