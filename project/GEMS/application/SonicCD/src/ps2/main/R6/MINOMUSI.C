typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[12];
typedef void(*type_4)(_anon1*)[9];
typedef char* type_5[2];
typedef char type_6[36];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon0* type_9[11];
typedef _anon1 type_10[128];
typedef char type_11[4];

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

_anon0 nullpat;
_anon0 ito01;
_anon0 ito02;
_anon0 ito03;
_anon0 ito04;
_anon0 ito05;
_anon0 ito06;
_anon0 ito07;
_anon0 ito08;
_anon0 mino1;
_anon0 mino2;
_anon0 mino3;
_anon0 mino4;
_anon0 mino5;
_anon0* pat_minomusi_e[12];
_anon0* pat_minomusi_b[11];
char pchg0[36];
char pchg1[4];
char* pchg[2];
_anon1 actwk[128];

void minomusi(_anon1* actionwk);
void body(_anon1* actionwk);
void body_init(_anon1* actionwk);
void body_wait(_anon1* actionwk);
void body_wait1(_anon1* actionwk);
short act_check(_anon1* actionwk, _anon1* pw);
void body_down(_anon1* actionwk);
void body_down1(_anon1* actionwk);
void body_up(_anon1* actionwk);
void body_up1(_anon1* actionwk);
void body_stay(_anon1* actionwk);
void body_stay1(_anon1* actionwk);
void hari(_anon1* actionwk);
void ito(_anon1* actionwk);

// 
// Start address: 0x101cc30
void minomusi(_anon1* actionwk)
{
	// Line 104, Address: 0x101cc30, Func Offset: 0
	// Line 105, Address: 0x101cc3c, Func Offset: 0xc
	// Line 106, Address: 0x101cc68, Func Offset: 0x38
	// Line 107, Address: 0x101cc94, Func Offset: 0x64
	// Line 108, Address: 0x101cca0, Func Offset: 0x70
	// Func End, Address: 0x101ccb0, Func Offset: 0x80
}

// 
// Start address: 0x101ccb0
void body(_anon1* actionwk)
{
	void(*body_tbl)(_anon1*)[9];
	// Line 110, Address: 0x101ccb0, Func Offset: 0
	// Line 111, Address: 0x101ccbc, Func Offset: 0xc
	// Line 123, Address: 0x101cce8, Func Offset: 0x38
	// Line 124, Address: 0x101cd08, Func Offset: 0x58
	// Line 125, Address: 0x101cd44, Func Offset: 0x94
	// Line 126, Address: 0x101cd50, Func Offset: 0xa0
	// Line 127, Address: 0x101cd5c, Func Offset: 0xac
	// Func End, Address: 0x101cd6c, Func Offset: 0xbc
}

// 
// Start address: 0x101cd70
void body_init(_anon1* actionwk)
{
	_anon1* a1;
	// Line 133, Address: 0x101cd70, Func Offset: 0
	// Line 136, Address: 0x101cd7c, Func Offset: 0xc
	// Line 137, Address: 0x101cd8c, Func Offset: 0x1c
	// Line 138, Address: 0x101cd9c, Func Offset: 0x2c
	// Line 140, Address: 0x101cda8, Func Offset: 0x38
	// Line 141, Address: 0x101cdb4, Func Offset: 0x44
	// Line 142, Address: 0x101cdc0, Func Offset: 0x50
	// Line 143, Address: 0x101cdcc, Func Offset: 0x5c
	// Line 144, Address: 0x101cdd8, Func Offset: 0x68
	// Line 145, Address: 0x101cde4, Func Offset: 0x74
	// Line 146, Address: 0x101cdf4, Func Offset: 0x84
	// Line 147, Address: 0x101ce04, Func Offset: 0x94
	// Line 148, Address: 0x101ce28, Func Offset: 0xb8
	// Line 149, Address: 0x101ce40, Func Offset: 0xd0
	// Line 151, Address: 0x101ce58, Func Offset: 0xe8
	// Line 152, Address: 0x101ce68, Func Offset: 0xf8
	// Line 154, Address: 0x101ce80, Func Offset: 0x110
	// Line 155, Address: 0x101ce8c, Func Offset: 0x11c
	// Line 158, Address: 0x101ce94, Func Offset: 0x124
	// Line 159, Address: 0x101cea4, Func Offset: 0x134
	// Line 160, Address: 0x101ceb0, Func Offset: 0x140
	// Line 161, Address: 0x101cec0, Func Offset: 0x150
	// Line 162, Address: 0x101ced0, Func Offset: 0x160
	// Line 163, Address: 0x101cee0, Func Offset: 0x170
	// Line 164, Address: 0x101cef0, Func Offset: 0x180
	// Line 165, Address: 0x101cf00, Func Offset: 0x190
	// Line 166, Address: 0x101cf10, Func Offset: 0x1a0
	// Line 168, Address: 0x101cf20, Func Offset: 0x1b0
	// Line 169, Address: 0x101cf2c, Func Offset: 0x1bc
	// Line 170, Address: 0x101cf38, Func Offset: 0x1c8
	// Line 171, Address: 0x101cf44, Func Offset: 0x1d4
	// Line 172, Address: 0x101cf78, Func Offset: 0x208
	// Func End, Address: 0x101cf88, Func Offset: 0x218
}

// 
// Start address: 0x101cf90
void body_wait(_anon1* actionwk)
{
	// Line 174, Address: 0x101cf90, Func Offset: 0
	// Line 175, Address: 0x101cf9c, Func Offset: 0xc
	// Line 176, Address: 0x101cfac, Func Offset: 0x1c
	// Line 177, Address: 0x101cfb8, Func Offset: 0x28
	// Line 178, Address: 0x101cfc4, Func Offset: 0x34
	// Line 179, Address: 0x101cfd0, Func Offset: 0x40
	// Func End, Address: 0x101cfe0, Func Offset: 0x50
}

// 
// Start address: 0x101cfe0
void body_wait1(_anon1* actionwk)
{
	// Line 181, Address: 0x101cfe0, Func Offset: 0
	// Line 182, Address: 0x101cfec, Func Offset: 0xc
	// Line 183, Address: 0x101d014, Func Offset: 0x34
	// Line 184, Address: 0x101d030, Func Offset: 0x50
	// Line 186, Address: 0x101d048, Func Offset: 0x68
	// Line 187, Address: 0x101d058, Func Offset: 0x78
	// Func End, Address: 0x101d068, Func Offset: 0x88
}

// 
// Start address: 0x101d070
short act_check(_anon1* actionwk, _anon1* pw)
{
	short d0w;
	// Line 189, Address: 0x101d070, Func Offset: 0
	// Line 192, Address: 0x101d080, Func Offset: 0x10
	// Line 193, Address: 0x101d090, Func Offset: 0x20
	// Line 194, Address: 0x101d0a4, Func Offset: 0x34
	// Line 196, Address: 0x101d0b0, Func Offset: 0x40
	// Line 197, Address: 0x101d0e0, Func Offset: 0x70
	// Line 198, Address: 0x101d0f0, Func Offset: 0x80
	// Line 199, Address: 0x101d104, Func Offset: 0x94
	// Line 201, Address: 0x101d110, Func Offset: 0xa0
	// Line 202, Address: 0x101d140, Func Offset: 0xd0
	// Line 203, Address: 0x101d144, Func Offset: 0xd4
	// Func End, Address: 0x101d154, Func Offset: 0xe4
}

// 
// Start address: 0x101d160
void body_down(_anon1* actionwk)
{
	// Line 205, Address: 0x101d160, Func Offset: 0
	// Line 206, Address: 0x101d16c, Func Offset: 0xc
	// Line 207, Address: 0x101d17c, Func Offset: 0x1c
	// Line 208, Address: 0x101d188, Func Offset: 0x28
	// Line 209, Address: 0x101d194, Func Offset: 0x34
	// Func End, Address: 0x101d1a4, Func Offset: 0x44
}

// 
// Start address: 0x101d1b0
void body_down1(_anon1* actionwk)
{
	short d0;
	// Line 211, Address: 0x101d1b0, Func Offset: 0
	// Line 214, Address: 0x101d1bc, Func Offset: 0xc
	// Line 215, Address: 0x101d1d4, Func Offset: 0x24
	// Line 216, Address: 0x101d208, Func Offset: 0x58
	// Line 218, Address: 0x101d218, Func Offset: 0x68
	// Line 219, Address: 0x101d228, Func Offset: 0x78
	// Line 221, Address: 0x101d234, Func Offset: 0x84
	// Func End, Address: 0x101d244, Func Offset: 0x94
}

// 
// Start address: 0x101d250
void body_up(_anon1* actionwk)
{
	// Line 223, Address: 0x101d250, Func Offset: 0
	// Line 224, Address: 0x101d25c, Func Offset: 0xc
	// Line 225, Address: 0x101d26c, Func Offset: 0x1c
	// Line 226, Address: 0x101d284, Func Offset: 0x34
	// Line 228, Address: 0x101d298, Func Offset: 0x48
	// Line 229, Address: 0x101d2a4, Func Offset: 0x54
	// Line 230, Address: 0x101d2b0, Func Offset: 0x60
	// Func End, Address: 0x101d2c0, Func Offset: 0x70
}

// 
// Start address: 0x101d2c0
void body_up1(_anon1* actionwk)
{
	short d0;
	// Line 232, Address: 0x101d2c0, Func Offset: 0
	// Line 235, Address: 0x101d2cc, Func Offset: 0xc
	// Line 236, Address: 0x101d2e4, Func Offset: 0x24
	// Line 237, Address: 0x101d318, Func Offset: 0x58
	// Line 239, Address: 0x101d328, Func Offset: 0x68
	// Line 240, Address: 0x101d338, Func Offset: 0x78
	// Line 242, Address: 0x101d344, Func Offset: 0x84
	// Func End, Address: 0x101d354, Func Offset: 0x94
}

// 
// Start address: 0x101d360
void body_stay(_anon1* actionwk)
{
	short d0;
	short d1;
	// Line 244, Address: 0x101d360, Func Offset: 0
	// Line 247, Address: 0x101d370, Func Offset: 0x10
	// Line 248, Address: 0x101d380, Func Offset: 0x20
	// Line 250, Address: 0x101d398, Func Offset: 0x38
	// Line 251, Address: 0x101d3a4, Func Offset: 0x44
	// Line 252, Address: 0x101d3b0, Func Offset: 0x50
	// Line 255, Address: 0x101d3b8, Func Offset: 0x58
	// Line 256, Address: 0x101d3c4, Func Offset: 0x64
	// Line 258, Address: 0x101d3d0, Func Offset: 0x70
	// Line 259, Address: 0x101d3d8, Func Offset: 0x78
	// Line 260, Address: 0x101d3e0, Func Offset: 0x80
	// Func End, Address: 0x101d3f4, Func Offset: 0x94
}

// 
// Start address: 0x101d400
void body_stay1(_anon1* actionwk)
{
	_anon1* a1;
	// Line 262, Address: 0x101d400, Func Offset: 0
	// Line 265, Address: 0x101d40c, Func Offset: 0xc
	// Line 267, Address: 0x101d440, Func Offset: 0x40
	// Line 268, Address: 0x101d454, Func Offset: 0x54
	// Line 270, Address: 0x101d46c, Func Offset: 0x6c
	// Line 271, Address: 0x101d484, Func Offset: 0x84
	// Line 273, Address: 0x101d49c, Func Offset: 0x9c
	// Line 274, Address: 0x101d4ac, Func Offset: 0xac
	// Line 275, Address: 0x101d4b8, Func Offset: 0xb8
	// Line 276, Address: 0x101d4c8, Func Offset: 0xc8
	// Line 277, Address: 0x101d4d8, Func Offset: 0xd8
	// Line 278, Address: 0x101d4e8, Func Offset: 0xe8
	// Line 279, Address: 0x101d4f8, Func Offset: 0xf8
	// Line 280, Address: 0x101d508, Func Offset: 0x108
	// Line 281, Address: 0x101d518, Func Offset: 0x118
	// Line 283, Address: 0x101d528, Func Offset: 0x128
	// Line 284, Address: 0x101d538, Func Offset: 0x138
	// Line 285, Address: 0x101d548, Func Offset: 0x148
	// Line 286, Address: 0x101d558, Func Offset: 0x158
	// Line 288, Address: 0x101d58c, Func Offset: 0x18c
	// Line 289, Address: 0x101d598, Func Offset: 0x198
	// Line 290, Address: 0x101d5b8, Func Offset: 0x1b8
	// Line 291, Address: 0x101d5c4, Func Offset: 0x1c4
	// Func End, Address: 0x101d5d4, Func Offset: 0x1d4
}

// 
// Start address: 0x101d5e0
void hari(_anon1* actionwk)
{
	_anon1* a1;
	// Line 293, Address: 0x101d5e0, Func Offset: 0
	// Line 296, Address: 0x101d5f0, Func Offset: 0x10
	// Line 297, Address: 0x101d614, Func Offset: 0x34
	// Line 298, Address: 0x101d628, Func Offset: 0x48
	// Line 300, Address: 0x101d63c, Func Offset: 0x5c
	// Line 301, Address: 0x101d648, Func Offset: 0x68
	// Func End, Address: 0x101d65c, Func Offset: 0x7c
}

// 
// Start address: 0x101d660
void ito(_anon1* actionwk)
{
	_anon1* a1;
	short d0;
	// Line 305, Address: 0x101d660, Func Offset: 0
	// Line 309, Address: 0x101d674, Func Offset: 0x14
	// Line 310, Address: 0x101d698, Func Offset: 0x38
	// Line 312, Address: 0x101d6ac, Func Offset: 0x4c
	// Line 313, Address: 0x101d6b8, Func Offset: 0x58
	// Line 316, Address: 0x101d6c0, Func Offset: 0x60
	// Line 317, Address: 0x101d6f4, Func Offset: 0x94
	// Line 319, Address: 0x101d708, Func Offset: 0xa8
	// Line 320, Address: 0x101d714, Func Offset: 0xb4
	// Line 321, Address: 0x101d720, Func Offset: 0xc0
	// Line 322, Address: 0x101d744, Func Offset: 0xe4
	// Line 323, Address: 0x101d74c, Func Offset: 0xec
	// Line 324, Address: 0x101d758, Func Offset: 0xf8
	// Func End, Address: 0x101d770, Func Offset: 0x110
}

