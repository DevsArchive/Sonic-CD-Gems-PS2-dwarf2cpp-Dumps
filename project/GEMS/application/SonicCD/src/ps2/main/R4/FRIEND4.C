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
typedef _anon0* type_2[3];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef unsigned char type_5[4];
typedef _anon1 type_6[128];
typedef _anon0* type_7[3];
typedef unsigned char* type_8[2];
typedef unsigned short type_9[11];
typedef unsigned char type_10[30];

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

unsigned char pchg0[30];
unsigned char pchg1[4];
unsigned char* pchg[2];
_anon0 spr_friend4_00;
_anon0 spr_friend4_01;
_anon0 spr_friend4_10;
_anon0 spr_friend4_11;
_anon0 spr_friend4_99;
_anon0* pat_friend0[3];
_anon0* pat_friend1[3];
unsigned short tbl0sproffset[11];
unsigned char time_flag;
_anon5 stageno;
_anon1 actwk[128];

void friend4(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m0move(_anon1* pActwk);
void m1move(_anon1* pActwk);

// 
// Start address: 0x101e780
void friend4(_anon1* pActwk)
{
	// Line 152, Address: 0x101e780, Func Offset: 0
	// Line 153, Address: 0x101e78c, Func Offset: 0xc
	// Line 154, Address: 0x101e7a0, Func Offset: 0x20
	// Line 155, Address: 0x101e7c0, Func Offset: 0x40
	// Line 158, Address: 0x101e7d4, Func Offset: 0x54
	// Line 159, Address: 0x101e7e8, Func Offset: 0x68
	// Line 161, Address: 0x101e7fc, Func Offset: 0x7c
	// Line 163, Address: 0x101e808, Func Offset: 0x88
	// Func End, Address: 0x101e818, Func Offset: 0x98
}

// 
// Start address: 0x101e820
void m_init(_anon1* pActwk)
{
	_anon5 temp;
	// Line 167, Address: 0x101e820, Func Offset: 0
	// Line 170, Address: 0x101e828, Func Offset: 0x8
	// Line 171, Address: 0x101e838, Func Offset: 0x18
	// Line 172, Address: 0x101e844, Func Offset: 0x24
	// Line 173, Address: 0x101e850, Func Offset: 0x30
	// Line 174, Address: 0x101e85c, Func Offset: 0x3c
	// Line 176, Address: 0x101e868, Func Offset: 0x48
	// Line 177, Address: 0x101e86c, Func Offset: 0x4c
	// Line 178, Address: 0x101e878, Func Offset: 0x58
	// Line 179, Address: 0x101e884, Func Offset: 0x64
	// Line 180, Address: 0x101e8b8, Func Offset: 0x98
	// Line 181, Address: 0x101e8c4, Func Offset: 0xa4
	// Line 182, Address: 0x101e8ec, Func Offset: 0xcc
	// Line 183, Address: 0x101e908, Func Offset: 0xe8
	// Line 186, Address: 0x101e918, Func Offset: 0xf8
	// Line 187, Address: 0x101e928, Func Offset: 0x108
	// Line 188, Address: 0x101e944, Func Offset: 0x124
	// Line 189, Address: 0x101e954, Func Offset: 0x134
	// Line 190, Address: 0x101e964, Func Offset: 0x144
	// Line 192, Address: 0x101e97c, Func Offset: 0x15c
	// Line 193, Address: 0x101e98c, Func Offset: 0x16c
	// Line 194, Address: 0x101e99c, Func Offset: 0x17c
	// Line 195, Address: 0x101e9ac, Func Offset: 0x18c
	// Line 196, Address: 0x101e9bc, Func Offset: 0x19c
	// Line 197, Address: 0x101e9c8, Func Offset: 0x1a8
	// Line 199, Address: 0x101e9e4, Func Offset: 0x1c4
	// Line 200, Address: 0x101e9f4, Func Offset: 0x1d4
	// Line 201, Address: 0x101ea04, Func Offset: 0x1e4
	// Line 202, Address: 0x101ea14, Func Offset: 0x1f4
	// Line 204, Address: 0x101ea20, Func Offset: 0x200
	// Line 208, Address: 0x101ea28, Func Offset: 0x208
	// Line 209, Address: 0x101ea38, Func Offset: 0x218
	// Line 210, Address: 0x101ea44, Func Offset: 0x224
	// Line 211, Address: 0x101ea54, Func Offset: 0x234
	// Line 213, Address: 0x101ea60, Func Offset: 0x240
	// Func End, Address: 0x101ea6c, Func Offset: 0x24c
}

// 
// Start address: 0x101ea70
void m0move(_anon1* pActwk)
{
	_anon1* tempact;
	unsigned short sin;
	unsigned short cos;
	int sinl;
	int cosl;
	// Line 217, Address: 0x101ea70, Func Offset: 0
	// Line 222, Address: 0x101ea88, Func Offset: 0x18
	// Line 223, Address: 0x101eab0, Func Offset: 0x40
	// Line 225, Address: 0x101eac4, Func Offset: 0x54
	// Line 226, Address: 0x101ead0, Func Offset: 0x60
	// Line 228, Address: 0x101ead8, Func Offset: 0x68
	// Line 230, Address: 0x101eae4, Func Offset: 0x74
	// Line 231, Address: 0x101eaf0, Func Offset: 0x80
	// Line 234, Address: 0x101eaf8, Func Offset: 0x88
	// Line 235, Address: 0x101eb14, Func Offset: 0xa4
	// Line 236, Address: 0x101eb1c, Func Offset: 0xac
	// Line 237, Address: 0x101eb24, Func Offset: 0xb4
	// Line 238, Address: 0x101eb2c, Func Offset: 0xbc
	// Line 239, Address: 0x101eb44, Func Offset: 0xd4
	// Line 240, Address: 0x101eb5c, Func Offset: 0xec
	// Line 241, Address: 0x101eb60, Func Offset: 0xf0
	// Line 242, Address: 0x101eb64, Func Offset: 0xf4
	// Line 243, Address: 0x101eb6c, Func Offset: 0xfc
	// Line 244, Address: 0x101eb74, Func Offset: 0x104
	// Line 245, Address: 0x101eb8c, Func Offset: 0x11c
	// Line 246, Address: 0x101eba4, Func Offset: 0x134
	// Line 247, Address: 0x101ebdc, Func Offset: 0x16c
	// Line 249, Address: 0x101ec14, Func Offset: 0x1a4
	// Line 250, Address: 0x101ec2c, Func Offset: 0x1bc
	// Line 252, Address: 0x101ec40, Func Offset: 0x1d0
	// Line 253, Address: 0x101ec50, Func Offset: 0x1e0
	// Line 254, Address: 0x101ec60, Func Offset: 0x1f0
	// Line 257, Address: 0x101ec78, Func Offset: 0x208
	// Line 258, Address: 0x101ec84, Func Offset: 0x214
	// Line 262, Address: 0x101ec8c, Func Offset: 0x21c
	// Line 266, Address: 0x101ec98, Func Offset: 0x228
	// Line 267, Address: 0x101ecac, Func Offset: 0x23c
	// Line 268, Address: 0x101ecb8, Func Offset: 0x248
	// Func End, Address: 0x101ecd4, Func Offset: 0x264
}

// 
// Start address: 0x101ece0
void m1move(_anon1* pActwk)
{
	unsigned short sin;
	unsigned short cos;
	int sinl;
	// Line 272, Address: 0x101ece0, Func Offset: 0
	// Line 276, Address: 0x101ecf0, Func Offset: 0x10
	// Line 278, Address: 0x101ed0c, Func Offset: 0x2c
	// Line 279, Address: 0x101ed28, Func Offset: 0x48
	// Line 280, Address: 0x101ed2c, Func Offset: 0x4c
	// Line 281, Address: 0x101ed34, Func Offset: 0x54
	// Line 282, Address: 0x101ed4c, Func Offset: 0x6c
	// Line 283, Address: 0x101ed50, Func Offset: 0x70
	// Line 284, Address: 0x101ed58, Func Offset: 0x78
	// Line 285, Address: 0x101ed70, Func Offset: 0x90
	// Line 287, Address: 0x101eda8, Func Offset: 0xc8
	// Line 288, Address: 0x101edc0, Func Offset: 0xe0
	// Line 291, Address: 0x101edd0, Func Offset: 0xf0
	// Line 292, Address: 0x101ede0, Func Offset: 0x100
	// Line 293, Address: 0x101edf8, Func Offset: 0x118
	// Line 294, Address: 0x101ee08, Func Offset: 0x128
	// Line 295, Address: 0x101ee18, Func Offset: 0x138
	// Line 298, Address: 0x101ee20, Func Offset: 0x140
	// Line 301, Address: 0x101ee38, Func Offset: 0x158
	// Line 302, Address: 0x101ee48, Func Offset: 0x168
	// Line 303, Address: 0x101ee60, Func Offset: 0x180
	// Line 304, Address: 0x101ee70, Func Offset: 0x190
	// Line 308, Address: 0x101ee80, Func Offset: 0x1a0
	// Line 309, Address: 0x101ee94, Func Offset: 0x1b4
	// Line 310, Address: 0x101eea0, Func Offset: 0x1c0
	// Line 311, Address: 0x101eeac, Func Offset: 0x1cc
	// Func End, Address: 0x101eec0, Func Offset: 0x1e0
}

