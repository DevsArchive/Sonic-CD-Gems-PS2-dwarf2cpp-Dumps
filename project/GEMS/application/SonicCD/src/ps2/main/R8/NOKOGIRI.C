typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon0* type_1[1];
typedef _anon7 type_2[0];
typedef char type_3[4];
typedef char type_4[4];
typedef char type_5[4];
typedef char type_6[4];
typedef char type_7[4];
typedef unsigned char type_8[2];
typedef unsigned char type_9[22];
typedef char* type_10[10];
typedef char type_11[4];
typedef _anon1 type_12[128];
typedef char type_13[4];
typedef char type_14[4];
typedef _anon0* type_15[20];
typedef char type_16[4];

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

char p00[4];
char p01[4];
char p02[4];
char p03[4];
char p04[4];
char p05[4];
char p06[4];
char p07[4];
char p08[4];
char* pchg[10];
_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 pat06;
_anon0 pat07;
_anon0 pat08;
_anon0 pat09;
_anon0 pat10;
_anon0 pat11;
_anon0 pat12;
_anon0 pat13;
_anon0 pat14;
_anon0 pat15;
_anon0 pat16;
_anon0 pat17;
_anon0* pat_nokogiri[20];
_anon0 pat_bar0;
_anon0* pat_bar[1];
_anon1 actwk[128];

void nokogiri(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_open(_anon1* actionwk);
void act_opend(_anon1* actionwk);
void act_close(_anon1* actionwk);
void act_closed(_anon1* actionwk);
void _soundset(_anon1* actionwk);
void bar(_anon1* actionwk);

// 
// Start address: 0x1023350
void nokogiri(_anon1* actionwk)
{
	// Line 86, Address: 0x1023350, Func Offset: 0
	// Line 87, Address: 0x102335c, Func Offset: 0xc
	// Line 89, Address: 0x1023374, Func Offset: 0x24
	// Line 90, Address: 0x1023380, Func Offset: 0x30
	// Line 92, Address: 0x1023388, Func Offset: 0x38
	// Line 95, Address: 0x10233d4, Func Offset: 0x84
	// Line 97, Address: 0x10233e0, Func Offset: 0x90
	// Line 98, Address: 0x10233ec, Func Offset: 0x9c
	// Line 100, Address: 0x10233f4, Func Offset: 0xa4
	// Line 101, Address: 0x1023400, Func Offset: 0xb0
	// Line 103, Address: 0x1023408, Func Offset: 0xb8
	// Line 104, Address: 0x1023414, Func Offset: 0xc4
	// Line 106, Address: 0x102341c, Func Offset: 0xcc
	// Line 109, Address: 0x1023428, Func Offset: 0xd8
	// Line 110, Address: 0x102343c, Func Offset: 0xec
	// Line 111, Address: 0x1023448, Func Offset: 0xf8
	// Line 112, Address: 0x102345c, Func Offset: 0x10c
	// Func End, Address: 0x102346c, Func Offset: 0x11c
}

// 
// Start address: 0x1023470
void act_init(_anon1* actionwk)
{
	_anon1* a1;
	short d0;
	short d1;
	// Line 114, Address: 0x1023470, Func Offset: 0
	// Line 118, Address: 0x1023484, Func Offset: 0x14
	// Line 119, Address: 0x1023494, Func Offset: 0x24
	// Line 120, Address: 0x10234a4, Func Offset: 0x34
	// Line 121, Address: 0x10234b0, Func Offset: 0x40
	// Line 122, Address: 0x10234bc, Func Offset: 0x4c
	// Line 123, Address: 0x10234cc, Func Offset: 0x5c
	// Line 124, Address: 0x10234d8, Func Offset: 0x68
	// Line 125, Address: 0x10234e4, Func Offset: 0x74
	// Line 127, Address: 0x10234f0, Func Offset: 0x80
	// Line 128, Address: 0x10234fc, Func Offset: 0x8c
	// Line 130, Address: 0x1023508, Func Offset: 0x98
	// Line 132, Address: 0x1023524, Func Offset: 0xb4
	// Line 134, Address: 0x1023538, Func Offset: 0xc8
	// Line 135, Address: 0x1023548, Func Offset: 0xd8
	// Line 139, Address: 0x1023558, Func Offset: 0xe8
	// Line 141, Address: 0x1023574, Func Offset: 0x104
	// Line 143, Address: 0x1023588, Func Offset: 0x118
	// Line 144, Address: 0x1023598, Func Offset: 0x128
	// Line 147, Address: 0x10235a8, Func Offset: 0x138
	// Line 148, Address: 0x10235b4, Func Offset: 0x144
	// Line 149, Address: 0x10235c0, Func Offset: 0x150
	// Line 151, Address: 0x10235d8, Func Offset: 0x168
	// Line 152, Address: 0x10235e4, Func Offset: 0x174
	// Line 155, Address: 0x10235f0, Func Offset: 0x180
	// Line 157, Address: 0x1023608, Func Offset: 0x198
	// Line 158, Address: 0x1023614, Func Offset: 0x1a4
	// Line 160, Address: 0x102361c, Func Offset: 0x1ac
	// Line 161, Address: 0x1023650, Func Offset: 0x1e0
	// Line 162, Address: 0x1023684, Func Offset: 0x214
	// Line 163, Address: 0x1023694, Func Offset: 0x224
	// Line 164, Address: 0x10236a4, Func Offset: 0x234
	// Line 165, Address: 0x10236b4, Func Offset: 0x244
	// Line 166, Address: 0x10236c4, Func Offset: 0x254
	// Line 167, Address: 0x10236d0, Func Offset: 0x260
	// Line 168, Address: 0x10236ec, Func Offset: 0x27c
	// Line 169, Address: 0x10236fc, Func Offset: 0x28c
	// Line 170, Address: 0x1023720, Func Offset: 0x2b0
	// Line 172, Address: 0x102373c, Func Offset: 0x2cc
	// Line 173, Address: 0x1023748, Func Offset: 0x2d8
	// Line 174, Address: 0x1023754, Func Offset: 0x2e4
	// Line 175, Address: 0x1023790, Func Offset: 0x320
	// Line 176, Address: 0x10237cc, Func Offset: 0x35c
	// Line 177, Address: 0x10237dc, Func Offset: 0x36c
	// Line 178, Address: 0x10237ec, Func Offset: 0x37c
	// Line 181, Address: 0x10237f4, Func Offset: 0x384
	// Line 183, Address: 0x1023810, Func Offset: 0x3a0
	// Line 184, Address: 0x1023820, Func Offset: 0x3b0
	// Line 186, Address: 0x1023830, Func Offset: 0x3c0
	// Line 188, Address: 0x102384c, Func Offset: 0x3dc
	// Line 189, Address: 0x102385c, Func Offset: 0x3ec
	// Line 192, Address: 0x102386c, Func Offset: 0x3fc
	// Func End, Address: 0x1023884, Func Offset: 0x414
}

// 
// Start address: 0x1023890
void act_open(_anon1* actionwk)
{
	// Line 194, Address: 0x1023890, Func Offset: 0
	// Line 195, Address: 0x102389c, Func Offset: 0xc
	// Line 197, Address: 0x10238c4, Func Offset: 0x34
	// Line 198, Address: 0x10238d4, Func Offset: 0x44
	// Line 199, Address: 0x10238e0, Func Offset: 0x50
	// Line 201, Address: 0x1023908, Func Offset: 0x78
	// Line 202, Address: 0x1023918, Func Offset: 0x88
	// Line 206, Address: 0x1023924, Func Offset: 0x94
	// Line 207, Address: 0x102393c, Func Offset: 0xac
	// Line 208, Address: 0x1023954, Func Offset: 0xc4
	// Line 209, Address: 0x1023960, Func Offset: 0xd0
	// Func End, Address: 0x1023970, Func Offset: 0xe0
}

// 
// Start address: 0x1023970
void act_opend(_anon1* actionwk)
{
	// Line 211, Address: 0x1023970, Func Offset: 0
	// Line 212, Address: 0x102397c, Func Offset: 0xc
	// Line 214, Address: 0x10239a4, Func Offset: 0x34
	// Line 215, Address: 0x10239b4, Func Offset: 0x44
	// Line 216, Address: 0x10239c0, Func Offset: 0x50
	// Line 218, Address: 0x10239cc, Func Offset: 0x5c
	// Line 219, Address: 0x10239d8, Func Offset: 0x68
	// Func End, Address: 0x10239e8, Func Offset: 0x78
}

// 
// Start address: 0x10239f0
void act_close(_anon1* actionwk)
{
	// Line 221, Address: 0x10239f0, Func Offset: 0
	// Line 222, Address: 0x10239fc, Func Offset: 0xc
	// Line 224, Address: 0x1023a24, Func Offset: 0x34
	// Line 225, Address: 0x1023a34, Func Offset: 0x44
	// Line 226, Address: 0x1023a40, Func Offset: 0x50
	// Line 228, Address: 0x1023a68, Func Offset: 0x78
	// Line 229, Address: 0x1023a78, Func Offset: 0x88
	// Line 233, Address: 0x1023a84, Func Offset: 0x94
	// Line 234, Address: 0x1023a9c, Func Offset: 0xac
	// Line 235, Address: 0x1023ab4, Func Offset: 0xc4
	// Line 236, Address: 0x1023ac0, Func Offset: 0xd0
	// Func End, Address: 0x1023ad0, Func Offset: 0xe0
}

// 
// Start address: 0x1023ad0
void act_closed(_anon1* actionwk)
{
	// Line 238, Address: 0x1023ad0, Func Offset: 0
	// Line 239, Address: 0x1023adc, Func Offset: 0xc
	// Line 241, Address: 0x1023b04, Func Offset: 0x34
	// Line 242, Address: 0x1023b14, Func Offset: 0x44
	// Line 243, Address: 0x1023b20, Func Offset: 0x50
	// Line 245, Address: 0x1023b2c, Func Offset: 0x5c
	// Line 246, Address: 0x1023b38, Func Offset: 0x68
	// Func End, Address: 0x1023b48, Func Offset: 0x78
}

// 
// Start address: 0x1023b50
void _soundset(_anon1* actionwk)
{
	short d0;
	// Line 248, Address: 0x1023b50, Func Offset: 0
	// Line 251, Address: 0x1023b60, Func Offset: 0x10
	// Line 252, Address: 0x1023b80, Func Offset: 0x30
	// Line 253, Address: 0x1023b90, Func Offset: 0x40
	// Line 254, Address: 0x1023ba0, Func Offset: 0x50
	// Line 255, Address: 0x1023bac, Func Offset: 0x5c
	// Line 256, Address: 0x1023bbc, Func Offset: 0x6c
	// Line 257, Address: 0x1023bc8, Func Offset: 0x78
	// Func End, Address: 0x1023bdc, Func Offset: 0x8c
}

// 
// Start address: 0x1023be0
void bar(_anon1* actionwk)
{
	short ano;
	// Line 259, Address: 0x1023be0, Func Offset: 0
	// Line 262, Address: 0x1023bf0, Func Offset: 0x10
	// Line 263, Address: 0x1023c00, Func Offset: 0x20
	// Line 265, Address: 0x1023c34, Func Offset: 0x54
	// Line 266, Address: 0x1023c40, Func Offset: 0x60
	// Line 268, Address: 0x1023c48, Func Offset: 0x68
	// Line 270, Address: 0x1023c58, Func Offset: 0x78
	// Line 271, Address: 0x1023c64, Func Offset: 0x84
	// Line 274, Address: 0x1023c6c, Func Offset: 0x8c
	// Line 275, Address: 0x1023c7c, Func Offset: 0x9c
	// Line 276, Address: 0x1023c8c, Func Offset: 0xac
	// Line 277, Address: 0x1023c9c, Func Offset: 0xbc
	// Line 278, Address: 0x1023ca8, Func Offset: 0xc8
	// Line 279, Address: 0x1023cb4, Func Offset: 0xd4
	// Func End, Address: 0x1023cc8, Func Offset: 0xe8
}

