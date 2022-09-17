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
typedef _anon0* type_2[4];
typedef char type_3[4];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon1 type_6[128];
typedef _anon0* type_7[4];
typedef char* type_8[1];

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
char* pchg[1];
_anon0 body_pat0;
_anon0 body_pat1;
_anon0 kusari_00;
_anon0 ball_pat0;
_anon0 kusari_01;
_anon0 ball_pat1;
_anon0* pat_hachi8_e[4];
_anon0* pat_hachi8_b[4];
_anon1 actwk[128];

void hachi8(_anon1* actionwk);
void body(_anon1* actionwk);
void body_move(_anon1* actionwk);
void ball(_anon1* actionwk);
void ball_move(_anon1* actionwk);
void kusari(_anon1* actionwk);
void kusari_move(_anon1* actionwk);

// 
// Start address: 0x1024480
void hachi8(_anon1* actionwk)
{
	// Line 70, Address: 0x1024480, Func Offset: 0
	// Line 71, Address: 0x102448c, Func Offset: 0xc
	// Line 73, Address: 0x10244a4, Func Offset: 0x24
	// Line 74, Address: 0x10244b0, Func Offset: 0x30
	// Line 76, Address: 0x10244b8, Func Offset: 0x38
	// Line 78, Address: 0x10244d0, Func Offset: 0x50
	// Line 79, Address: 0x10244dc, Func Offset: 0x5c
	// Line 81, Address: 0x10244e4, Func Offset: 0x64
	// Line 82, Address: 0x10244f0, Func Offset: 0x70
	// Func End, Address: 0x1024500, Func Offset: 0x80
}

// 
// Start address: 0x1024500
void body(_anon1* actionwk)
{
	_anon1* a1;
	// Line 84, Address: 0x1024500, Func Offset: 0
	// Line 87, Address: 0x102450c, Func Offset: 0xc
	// Line 89, Address: 0x102452c, Func Offset: 0x2c
	// Line 91, Address: 0x1024540, Func Offset: 0x40
	// Line 92, Address: 0x102454c, Func Offset: 0x4c
	// Line 95, Address: 0x1024554, Func Offset: 0x54
	// Line 96, Address: 0x1024564, Func Offset: 0x64
	// Line 97, Address: 0x1024574, Func Offset: 0x74
	// Line 98, Address: 0x1024580, Func Offset: 0x80
	// Line 99, Address: 0x102458c, Func Offset: 0x8c
	// Line 100, Address: 0x1024598, Func Offset: 0x98
	// Line 101, Address: 0x10245a4, Func Offset: 0xa4
	// Line 102, Address: 0x10245b0, Func Offset: 0xb0
	// Line 103, Address: 0x10245bc, Func Offset: 0xbc
	// Line 104, Address: 0x10245cc, Func Offset: 0xcc
	// Line 105, Address: 0x10245dc, Func Offset: 0xdc
	// Line 106, Address: 0x10245e4, Func Offset: 0xe4
	// Line 108, Address: 0x10245fc, Func Offset: 0xfc
	// Line 109, Address: 0x102460c, Func Offset: 0x10c
	// Line 110, Address: 0x102461c, Func Offset: 0x11c
	// Line 111, Address: 0x1024628, Func Offset: 0x128
	// Line 112, Address: 0x1024634, Func Offset: 0x134
	// Line 113, Address: 0x1024640, Func Offset: 0x140
	// Line 116, Address: 0x1024648, Func Offset: 0x148
	// Line 117, Address: 0x1024658, Func Offset: 0x158
	// Line 118, Address: 0x1024668, Func Offset: 0x168
	// Line 119, Address: 0x1024674, Func Offset: 0x174
	// Line 120, Address: 0x1024680, Func Offset: 0x180
	// Line 123, Address: 0x102468c, Func Offset: 0x18c
	// Line 125, Address: 0x10246a4, Func Offset: 0x1a4
	// Line 126, Address: 0x10246b0, Func Offset: 0x1b0
	// Line 128, Address: 0x10246b8, Func Offset: 0x1b8
	// Line 129, Address: 0x10246c8, Func Offset: 0x1c8
	// Line 130, Address: 0x10246fc, Func Offset: 0x1fc
	// Line 131, Address: 0x1024730, Func Offset: 0x230
	// Line 132, Address: 0x1024740, Func Offset: 0x240
	// Line 133, Address: 0x1024750, Func Offset: 0x250
	// Line 134, Address: 0x1024760, Func Offset: 0x260
	// Line 135, Address: 0x1024770, Func Offset: 0x270
	// Line 136, Address: 0x102477c, Func Offset: 0x27c
	// Line 137, Address: 0x102478c, Func Offset: 0x28c
	// Line 140, Address: 0x102479c, Func Offset: 0x29c
	// Line 142, Address: 0x10247b4, Func Offset: 0x2b4
	// Line 143, Address: 0x10247c0, Func Offset: 0x2c0
	// Line 145, Address: 0x10247c8, Func Offset: 0x2c8
	// Line 147, Address: 0x10247e0, Func Offset: 0x2e0
	// Line 148, Address: 0x10247ec, Func Offset: 0x2ec
	// Line 151, Address: 0x10247f4, Func Offset: 0x2f4
	// Line 152, Address: 0x1024804, Func Offset: 0x304
	// Line 153, Address: 0x1024838, Func Offset: 0x338
	// Line 154, Address: 0x102486c, Func Offset: 0x36c
	// Line 155, Address: 0x102487c, Func Offset: 0x37c
	// Line 156, Address: 0x102488c, Func Offset: 0x38c
	// Line 157, Address: 0x102489c, Func Offset: 0x39c
	// Line 158, Address: 0x10248ac, Func Offset: 0x3ac
	// Line 159, Address: 0x10248b8, Func Offset: 0x3b8
	// Line 160, Address: 0x10248c8, Func Offset: 0x3c8
	// Line 161, Address: 0x10248d8, Func Offset: 0x3d8
	// Func End, Address: 0x10248e8, Func Offset: 0x3e8
}

// 
// Start address: 0x10248f0
void body_move(_anon1* actionwk)
{
	unsigned short d0;
	unsigned short sin;
	unsigned short cos;
	int d0l;
	short t;
	// Line 163, Address: 0x10248f0, Func Offset: 0
	// Line 168, Address: 0x1024908, Func Offset: 0x18
	// Line 169, Address: 0x1024924, Func Offset: 0x34
	// Line 170, Address: 0x1024934, Func Offset: 0x44
	// Line 171, Address: 0x1024944, Func Offset: 0x54
	// Line 173, Address: 0x1024954, Func Offset: 0x64
	// Line 175, Address: 0x102496c, Func Offset: 0x7c
	// Line 177, Address: 0x1024988, Func Offset: 0x98
	// Line 178, Address: 0x1024998, Func Offset: 0xa8
	// Line 181, Address: 0x10249a8, Func Offset: 0xb8
	// Line 182, Address: 0x10249b8, Func Offset: 0xc8
	// Line 183, Address: 0x10249c0, Func Offset: 0xd0
	// Line 185, Address: 0x10249d8, Func Offset: 0xe8
	// Line 186, Address: 0x10249f4, Func Offset: 0x104
	// Line 187, Address: 0x1024a08, Func Offset: 0x118
	// Line 188, Address: 0x1024a14, Func Offset: 0x124
	// Line 189, Address: 0x1024a28, Func Offset: 0x138
	// Line 190, Address: 0x1024a38, Func Offset: 0x148
	// Line 191, Address: 0x1024a4c, Func Offset: 0x15c
	// Line 192, Address: 0x1024a58, Func Offset: 0x168
	// Line 193, Address: 0x1024a6c, Func Offset: 0x17c
	// Func End, Address: 0x1024a88, Func Offset: 0x198
}

// 
// Start address: 0x1024a90
void ball(_anon1* actionwk)
{
	_anon1* a1;
	short i;
	short d6;
	// Line 213, Address: 0x1024a90, Func Offset: 0
	// Line 217, Address: 0x1024aa4, Func Offset: 0x14
	// Line 219, Address: 0x1024ab8, Func Offset: 0x28
	// Line 220, Address: 0x1024ac4, Func Offset: 0x34
	// Line 223, Address: 0x1024acc, Func Offset: 0x3c
	// Line 224, Address: 0x1024adc, Func Offset: 0x4c
	// Line 225, Address: 0x1024ae8, Func Offset: 0x58
	// Line 226, Address: 0x1024af4, Func Offset: 0x64
	// Line 227, Address: 0x1024b00, Func Offset: 0x70
	// Line 228, Address: 0x1024b0c, Func Offset: 0x7c
	// Line 229, Address: 0x1024b18, Func Offset: 0x88
	// Line 230, Address: 0x1024b24, Func Offset: 0x94
	// Line 232, Address: 0x1024b40, Func Offset: 0xb0
	// Line 233, Address: 0x1024b4c, Func Offset: 0xbc
	// Line 234, Address: 0x1024b58, Func Offset: 0xc8
	// Line 235, Address: 0x1024b64, Func Offset: 0xd4
	// Line 238, Address: 0x1024b6c, Func Offset: 0xdc
	// Line 239, Address: 0x1024b78, Func Offset: 0xe8
	// Line 240, Address: 0x1024b84, Func Offset: 0xf4
	// Line 243, Address: 0x1024b90, Func Offset: 0x100
	// Line 246, Address: 0x1024ba0, Func Offset: 0x110
	// Line 248, Address: 0x1024bac, Func Offset: 0x11c
	// Line 251, Address: 0x1024bc4, Func Offset: 0x134
	// Line 252, Address: 0x1024bd0, Func Offset: 0x140
	// Line 255, Address: 0x1024bd8, Func Offset: 0x148
	// Line 256, Address: 0x1024be8, Func Offset: 0x158
	// Line 257, Address: 0x1024c2c, Func Offset: 0x19c
	// Line 259, Address: 0x1024c3c, Func Offset: 0x1ac
	// Line 260, Address: 0x1024c4c, Func Offset: 0x1bc
	// Line 261, Address: 0x1024c5c, Func Offset: 0x1cc
	// Line 262, Address: 0x1024c6c, Func Offset: 0x1dc
	// Line 263, Address: 0x1024c7c, Func Offset: 0x1ec
	// Line 264, Address: 0x1024c88, Func Offset: 0x1f8
	// Line 265, Address: 0x1024c98, Func Offset: 0x208
	// Line 266, Address: 0x1024ca8, Func Offset: 0x218
	// Line 267, Address: 0x1024cd0, Func Offset: 0x240
	// Line 268, Address: 0x1024cdc, Func Offset: 0x24c
	// Func End, Address: 0x1024cf4, Func Offset: 0x264
}

// 
// Start address: 0x1024d00
void ball_move(_anon1* actionwk)
{
	_anon2 d2;
	_anon2 d3;
	short d0;
	short d6;
	short i;
	short ano;
	unsigned short sin;
	unsigned short cos;
	int d4;
	int d5;
	// Line 270, Address: 0x1024d00, Func Offset: 0
	// Line 276, Address: 0x1024d24, Func Offset: 0x24
	// Line 278, Address: 0x1024d3c, Func Offset: 0x3c
	// Line 279, Address: 0x1024d4c, Func Offset: 0x4c
	// Line 292, Address: 0x1024d64, Func Offset: 0x64
	// Line 300, Address: 0x1024df4, Func Offset: 0xf4
	// Line 304, Address: 0x1024e18, Func Offset: 0x118
	// Line 305, Address: 0x1024e28, Func Offset: 0x128
	// Line 306, Address: 0x1024e38, Func Offset: 0x138
	// Line 307, Address: 0x1024e64, Func Offset: 0x164
	// Line 308, Address: 0x1024e88, Func Offset: 0x188
	// Line 309, Address: 0x1024eac, Func Offset: 0x1ac
	// Line 310, Address: 0x1024ec0, Func Offset: 0x1c0
	// Line 311, Address: 0x1024ecc, Func Offset: 0x1cc
	// Line 312, Address: 0x1024ed8, Func Offset: 0x1d8
	// Line 313, Address: 0x1024efc, Func Offset: 0x1fc
	// Line 314, Address: 0x1024f20, Func Offset: 0x220
	// Line 315, Address: 0x1024f24, Func Offset: 0x224
	// Line 316, Address: 0x1024f28, Func Offset: 0x228
	// Line 317, Address: 0x1024f34, Func Offset: 0x234
	// Line 320, Address: 0x1024f40, Func Offset: 0x240
	// Line 322, Address: 0x1024f4c, Func Offset: 0x24c
	// Line 323, Address: 0x1024f54, Func Offset: 0x254
	// Line 324, Address: 0x1024f5c, Func Offset: 0x25c
	// Line 325, Address: 0x1024f80, Func Offset: 0x280
	// Line 326, Address: 0x1024fa4, Func Offset: 0x2a4
	// Line 327, Address: 0x1024fc8, Func Offset: 0x2c8
	// Line 328, Address: 0x1024ff0, Func Offset: 0x2f0
	// Line 329, Address: 0x1024ff8, Func Offset: 0x2f8
	// Line 330, Address: 0x1025000, Func Offset: 0x300
	// Line 331, Address: 0x1025008, Func Offset: 0x308
	// Line 332, Address: 0x1025010, Func Offset: 0x310
	// Line 333, Address: 0x102501c, Func Offset: 0x31c
	// Func End, Address: 0x1025044, Func Offset: 0x344
}

// 
// Start address: 0x1025050
void kusari(_anon1* actionwk)
{
	// Line 335, Address: 0x1025050, Func Offset: 0
	// Line 336, Address: 0x102505c, Func Offset: 0xc
	// Line 338, Address: 0x1025070, Func Offset: 0x20
	// Line 339, Address: 0x102507c, Func Offset: 0x2c
	// Line 342, Address: 0x1025084, Func Offset: 0x34
	// Line 343, Address: 0x1025094, Func Offset: 0x44
	// Line 344, Address: 0x10250a0, Func Offset: 0x50
	// Line 345, Address: 0x10250ac, Func Offset: 0x5c
	// Line 346, Address: 0x10250b8, Func Offset: 0x68
	// Line 347, Address: 0x10250c4, Func Offset: 0x74
	// Line 348, Address: 0x10250d0, Func Offset: 0x80
	// Line 349, Address: 0x10250dc, Func Offset: 0x8c
	// Func End, Address: 0x10250ec, Func Offset: 0x9c
}

// 
// Start address: 0x10250f0
void kusari_move(_anon1* actionwk)
{
	short ano;
	// Line 351, Address: 0x10250f0, Func Offset: 0
	// Line 354, Address: 0x1025100, Func Offset: 0x10
	// Line 355, Address: 0x1025110, Func Offset: 0x20
	// Line 357, Address: 0x1025144, Func Offset: 0x54
	// Line 358, Address: 0x1025150, Func Offset: 0x60
	// Line 360, Address: 0x1025158, Func Offset: 0x68
	// Line 361, Address: 0x1025164, Func Offset: 0x74
	// Func End, Address: 0x1025178, Func Offset: 0x88
}

