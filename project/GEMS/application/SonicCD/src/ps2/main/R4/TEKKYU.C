typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);
typedef void(*type_10)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[1];
typedef _anon0* type_3[1];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef void(*type_7)(_anon1*)[2];
typedef _anon1 type_8[128];
typedef _anon0* type_9[1];
typedef void(*type_11)(_anon1*)[2];

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

_anon0 tekkyu_pat00;
_anon0* pat_tekkyu[1];
_anon0** pat_tyuusin;
void(*act_tbl)(_anon1*)[2];
_anon1 actwk[128];
_anon0 kusari_pat00;
_anon0* pat_kusari[1];
_anon0 tekkyu1_pat00;
_anon0* pat_tekkyu1[1];
void(*opt_act_tbl)(_anon1*)[2];

void tekkyu(_anon1* pActwk);
void tekkyu_main(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_move(_anon1* pActwk);
void tekkyu_opt(_anon1* pActwk);
void opt_act_init(_anon1* pActwk);
void opt_act_move(_anon1* pActwk);

// 
// Start address: 0x101eec0
void tekkyu(_anon1* pActwk)
{
	// Line 104, Address: 0x101eec0, Func Offset: 0
	// Line 105, Address: 0x101eecc, Func Offset: 0xc
	// Line 106, Address: 0x101eee8, Func Offset: 0x28
	// Line 107, Address: 0x101eef4, Func Offset: 0x34
	// Line 108, Address: 0x101eefc, Func Offset: 0x3c
	// Line 110, Address: 0x101ef08, Func Offset: 0x48
	// Func End, Address: 0x101ef18, Func Offset: 0x58
}

// 
// Start address: 0x101ef20
void tekkyu_main(_anon1* pActwk)
{
	// Line 116, Address: 0x101ef20, Func Offset: 0
	// Line 117, Address: 0x101ef2c, Func Offset: 0xc
	// Line 118, Address: 0x101ef70, Func Offset: 0x50
	// Line 119, Address: 0x101ef7c, Func Offset: 0x5c
	// Line 120, Address: 0x101ef88, Func Offset: 0x68
	// Func End, Address: 0x101ef98, Func Offset: 0x78
}

// 
// Start address: 0x101efa0
void act_init(_anon1* pActwk)
{
	_anon1* pNewact;
	short* pActidx;
	int i;
	// Line 126, Address: 0x101efa0, Func Offset: 0
	// Line 131, Address: 0x101efb4, Func Offset: 0x14
	// Line 132, Address: 0x101efc4, Func Offset: 0x24
	// Line 133, Address: 0x101efd4, Func Offset: 0x34
	// Line 134, Address: 0x101efe0, Func Offset: 0x40
	// Line 135, Address: 0x101efec, Func Offset: 0x4c
	// Line 136, Address: 0x101eff8, Func Offset: 0x58
	// Line 137, Address: 0x101f008, Func Offset: 0x68
	// Line 139, Address: 0x101f014, Func Offset: 0x74
	// Line 140, Address: 0x101f02c, Func Offset: 0x8c
	// Line 141, Address: 0x101f038, Func Offset: 0x98
	// Line 142, Address: 0x101f040, Func Offset: 0xa0
	// Line 145, Address: 0x101f04c, Func Offset: 0xac
	// Line 146, Address: 0x101f054, Func Offset: 0xb4
	// Line 147, Address: 0x101f060, Func Offset: 0xc0
	// Line 148, Address: 0x101f074, Func Offset: 0xd4
	// Line 149, Address: 0x101f080, Func Offset: 0xe0
	// Line 152, Address: 0x101f088, Func Offset: 0xe8
	// Line 153, Address: 0x101f0c4, Func Offset: 0x124
	// Line 154, Address: 0x101f0d4, Func Offset: 0x134
	// Line 155, Address: 0x101f0e0, Func Offset: 0x140
	// Line 156, Address: 0x101f0ec, Func Offset: 0x14c
	// Line 157, Address: 0x101f0f8, Func Offset: 0x158
	// Line 158, Address: 0x101f130, Func Offset: 0x190
	// Line 160, Address: 0x101f140, Func Offset: 0x1a0
	// Line 161, Address: 0x101f14c, Func Offset: 0x1ac
	// Line 162, Address: 0x101f158, Func Offset: 0x1b8
	// Func End, Address: 0x101f170, Func Offset: 0x1d0
}

// 
// Start address: 0x101f170
void act_move(_anon1* pActwk)
{
	_anon2 ldSin;
	_anon2 ldCos;
	int sinsv1;
	int sinsv2;
	int cossv1;
	int cossv2;
	_anon1* pSubact;
	// Line 168, Address: 0x101f170, Func Offset: 0
	// Line 173, Address: 0x101f190, Func Offset: 0x20
	// Line 175, Address: 0x101f1a8, Func Offset: 0x38
	// Line 176, Address: 0x101f1c0, Func Offset: 0x50
	// Line 178, Address: 0x101f1d0, Func Offset: 0x60
	// Line 179, Address: 0x101f1dc, Func Offset: 0x6c
	// Line 180, Address: 0x101f1e8, Func Offset: 0x78
	// Line 181, Address: 0x101f1ec, Func Offset: 0x7c
	// Line 183, Address: 0x101f1f0, Func Offset: 0x80
	// Line 184, Address: 0x101f1fc, Func Offset: 0x8c
	// Line 185, Address: 0x101f208, Func Offset: 0x98
	// Line 186, Address: 0x101f20c, Func Offset: 0x9c
	// Line 188, Address: 0x101f210, Func Offset: 0xa0
	// Line 189, Address: 0x101f21c, Func Offset: 0xac
	// Line 191, Address: 0x101f228, Func Offset: 0xb8
	// Line 192, Address: 0x101f250, Func Offset: 0xe0
	// Line 193, Address: 0x101f268, Func Offset: 0xf8
	// Line 195, Address: 0x101f280, Func Offset: 0x110
	// Line 196, Address: 0x101f2a8, Func Offset: 0x138
	// Line 197, Address: 0x101f2bc, Func Offset: 0x14c
	// Line 199, Address: 0x101f2d0, Func Offset: 0x160
	// Line 200, Address: 0x101f2f8, Func Offset: 0x188
	// Line 201, Address: 0x101f314, Func Offset: 0x1a4
	// Line 203, Address: 0x101f330, Func Offset: 0x1c0
	// Line 204, Address: 0x101f358, Func Offset: 0x1e8
	// Line 205, Address: 0x101f36c, Func Offset: 0x1fc
	// Line 207, Address: 0x101f380, Func Offset: 0x210
	// Line 208, Address: 0x101f3a8, Func Offset: 0x238
	// Line 209, Address: 0x101f3c4, Func Offset: 0x254
	// Line 211, Address: 0x101f3e0, Func Offset: 0x270
	// Line 212, Address: 0x101f408, Func Offset: 0x298
	// Line 213, Address: 0x101f420, Func Offset: 0x2b0
	// Line 214, Address: 0x101f438, Func Offset: 0x2c8
	// Func End, Address: 0x101f45c, Func Offset: 0x2ec
}

// 
// Start address: 0x101f460
void tekkyu_opt(_anon1* pActwk)
{
	// Line 250, Address: 0x101f460, Func Offset: 0
	// Line 251, Address: 0x101f46c, Func Offset: 0xc
	// Line 252, Address: 0x101f4b0, Func Offset: 0x50
	// Line 254, Address: 0x101f4ec, Func Offset: 0x8c
	// Line 255, Address: 0x101f4f8, Func Offset: 0x98
	// Line 256, Address: 0x101f500, Func Offset: 0xa0
	// Line 258, Address: 0x101f50c, Func Offset: 0xac
	// Func End, Address: 0x101f51c, Func Offset: 0xbc
}

// 
// Start address: 0x101f520
void opt_act_init(_anon1* pActwk)
{
	// Line 264, Address: 0x101f520, Func Offset: 0
	// Line 265, Address: 0x101f52c, Func Offset: 0xc
	// Line 266, Address: 0x101f53c, Func Offset: 0x1c
	// Line 268, Address: 0x101f54c, Func Offset: 0x2c
	// Line 269, Address: 0x101f568, Func Offset: 0x48
	// Line 270, Address: 0x101f574, Func Offset: 0x54
	// Line 271, Address: 0x101f584, Func Offset: 0x64
	// Line 272, Address: 0x101f590, Func Offset: 0x70
	// Line 274, Address: 0x101f598, Func Offset: 0x78
	// Line 275, Address: 0x101f5a4, Func Offset: 0x84
	// Line 276, Address: 0x101f5b4, Func Offset: 0x94
	// Line 277, Address: 0x101f5c0, Func Offset: 0xa0
	// Line 280, Address: 0x101f5cc, Func Offset: 0xac
	// Line 281, Address: 0x101f5d8, Func Offset: 0xb8
	// Func End, Address: 0x101f5e8, Func Offset: 0xc8
}

// 
// Start address: 0x101f5f0
void opt_act_move(_anon1* pActwk)
{
	// Line 287, Address: 0x101f5f0, Func Offset: 0
	// Line 288, Address: 0x101f5f8, Func Offset: 0x8
	// Line 289, Address: 0x101f608, Func Offset: 0x18
	// Line 290, Address: 0x101f618, Func Offset: 0x28
	// Func End, Address: 0x101f624, Func Offset: 0x34
}

