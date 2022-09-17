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
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon0* type_4[3];
typedef short type_5[6];
typedef _anon1 type_6[128];

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

_anon0 pat_buranko5_00;
_anon0 pat_buranko5_01;
_anon0 pat_buranko5_02;
_anon0* pat_buranko5[3];
_anon1 actwk[128];
unsigned char colrevflag;

void buranko5(_anon1* pActwk);
void c_init(_anon1* pActwk);
void c_move(_anon1* pActwk);
void middle(_anon1* pActwk);
void radius(_anon1* pActwk);

// 
// Start address: 0x1026ae0
void buranko5(_anon1* pActwk)
{
	// Line 81, Address: 0x1026ae0, Func Offset: 0
	// Line 82, Address: 0x1026aec, Func Offset: 0xc
	// Line 84, Address: 0x1026afc, Func Offset: 0x1c
	// Line 85, Address: 0x1026b0c, Func Offset: 0x2c
	// Line 86, Address: 0x1026b18, Func Offset: 0x38
	// Line 88, Address: 0x1026b20, Func Offset: 0x40
	// Line 89, Address: 0x1026b2c, Func Offset: 0x4c
	// Line 91, Address: 0x1026b34, Func Offset: 0x54
	// Line 93, Address: 0x1026b50, Func Offset: 0x70
	// Line 94, Address: 0x1026b5c, Func Offset: 0x7c
	// Line 97, Address: 0x1026b64, Func Offset: 0x84
	// Line 100, Address: 0x1026b70, Func Offset: 0x90
	// Func End, Address: 0x1026b80, Func Offset: 0xa0
}

// 
// Start address: 0x1026b80
void c_init(_anon1* pActwk)
{
	_anon1* pNewactwk;
	short wD6;
	int i;
	short tbl0[6];
	// Line 109, Address: 0x1026b80, Func Offset: 0
	// Line 114, Address: 0x1026b94, Func Offset: 0x14
	// Line 120, Address: 0x1026bc8, Func Offset: 0x48
	// Line 121, Address: 0x1026bd8, Func Offset: 0x58
	// Line 122, Address: 0x1026be8, Func Offset: 0x68
	// Line 123, Address: 0x1026bf4, Func Offset: 0x74
	// Line 124, Address: 0x1026c00, Func Offset: 0x80
	// Line 125, Address: 0x1026c0c, Func Offset: 0x8c
	// Line 126, Address: 0x1026c18, Func Offset: 0x98
	// Line 127, Address: 0x1026c24, Func Offset: 0xa4
	// Line 128, Address: 0x1026c34, Func Offset: 0xb4
	// Line 129, Address: 0x1026c5c, Func Offset: 0xdc
	// Line 130, Address: 0x1026c88, Func Offset: 0x108
	// Line 131, Address: 0x1026c94, Func Offset: 0x114
	// Line 132, Address: 0x1026cb0, Func Offset: 0x130
	// Line 133, Address: 0x1026cc8, Func Offset: 0x148
	// Line 136, Address: 0x1026ce0, Func Offset: 0x160
	// Line 137, Address: 0x1026cf0, Func Offset: 0x170
	// Line 139, Address: 0x1026cfc, Func Offset: 0x17c
	// Line 140, Address: 0x1026d14, Func Offset: 0x194
	// Line 141, Address: 0x1026d20, Func Offset: 0x1a0
	// Line 143, Address: 0x1026d28, Func Offset: 0x1a8
	// Line 144, Address: 0x1026d64, Func Offset: 0x1e4
	// Line 145, Address: 0x1026d70, Func Offset: 0x1f0
	// Line 146, Address: 0x1026da8, Func Offset: 0x228
	// Line 147, Address: 0x1026db8, Func Offset: 0x238
	// Line 148, Address: 0x1026dc8, Func Offset: 0x248
	// Line 149, Address: 0x1026dd8, Func Offset: 0x258
	// Line 150, Address: 0x1026de8, Func Offset: 0x268
	// Line 151, Address: 0x1026df8, Func Offset: 0x278
	// Line 152, Address: 0x1026e18, Func Offset: 0x298
	// Line 153, Address: 0x1026e24, Func Offset: 0x2a4
	// Func End, Address: 0x1026e3c, Func Offset: 0x2bc
}

// 
// Start address: 0x1026e40
void c_move(_anon1* pActwk)
{
	_anon1* pMainactwk;
	int lD3;
	int lD4;
	int lD5;
	int lD6;
	_anon2 lD0;
	_anon2 lD1;
	short wD6;
	unsigned short Sin;
	unsigned short Cos;
	int i;
	// Line 162, Address: 0x1026e40, Func Offset: 0
	// Line 170, Address: 0x1026e68, Func Offset: 0x28
	// Line 172, Address: 0x1026e84, Func Offset: 0x44
	// Line 173, Address: 0x1026e98, Func Offset: 0x58
	// Line 174, Address: 0x1026e9c, Func Offset: 0x5c
	// Line 175, Address: 0x1026ea8, Func Offset: 0x68
	// Line 176, Address: 0x1026eb4, Func Offset: 0x74
	// Line 179, Address: 0x1026ec0, Func Offset: 0x80
	// Line 180, Address: 0x1026ecc, Func Offset: 0x8c
	// Line 181, Address: 0x1026ed0, Func Offset: 0x90
	// Line 182, Address: 0x1026ee8, Func Offset: 0xa8
	// Line 184, Address: 0x1026ef0, Func Offset: 0xb0
	// Line 185, Address: 0x1026f04, Func Offset: 0xc4
	// Line 186, Address: 0x1026f08, Func Offset: 0xc8
	// Line 190, Address: 0x1026f20, Func Offset: 0xe0
	// Line 192, Address: 0x1026f2c, Func Offset: 0xec
	// Line 193, Address: 0x1026f50, Func Offset: 0x110
	// Line 194, Address: 0x1026f58, Func Offset: 0x118
	// Line 195, Address: 0x1026f60, Func Offset: 0x120
	// Line 196, Address: 0x1026f64, Func Offset: 0x124
	// Line 197, Address: 0x1026f68, Func Offset: 0x128
	// Line 198, Address: 0x1026f80, Func Offset: 0x140
	// Line 199, Address: 0x1026f88, Func Offset: 0x148
	// Line 200, Address: 0x1026f90, Func Offset: 0x150
	// Line 201, Address: 0x1026fb0, Func Offset: 0x170
	// Line 203, Address: 0x1026fd0, Func Offset: 0x190
	// Line 205, Address: 0x1026fdc, Func Offset: 0x19c
	// Line 206, Address: 0x1027010, Func Offset: 0x1d0
	// Line 207, Address: 0x102701c, Func Offset: 0x1dc
	// Line 208, Address: 0x1027028, Func Offset: 0x1e8
	// Line 209, Address: 0x1027044, Func Offset: 0x204
	// Line 210, Address: 0x1027070, Func Offset: 0x230
	// Line 211, Address: 0x102707c, Func Offset: 0x23c
	// Line 212, Address: 0x1027088, Func Offset: 0x248
	// Line 213, Address: 0x1027094, Func Offset: 0x254
	// Line 214, Address: 0x10270b8, Func Offset: 0x278
	// Line 215, Address: 0x10270c4, Func Offset: 0x284
	// Line 216, Address: 0x10270d0, Func Offset: 0x290
	// Func End, Address: 0x10270fc, Func Offset: 0x2bc
}

// 
// Start address: 0x1027100
void middle(_anon1* pActwk)
{
	// Line 225, Address: 0x1027100, Func Offset: 0
	// Line 226, Address: 0x102710c, Func Offset: 0xc
	// Line 228, Address: 0x102711c, Func Offset: 0x1c
	// Line 229, Address: 0x1027154, Func Offset: 0x54
	// Line 231, Address: 0x1027168, Func Offset: 0x68
	// Line 232, Address: 0x1027174, Func Offset: 0x74
	// Line 236, Address: 0x102717c, Func Offset: 0x7c
	// Line 237, Address: 0x102718c, Func Offset: 0x8c
	// Line 238, Address: 0x1027198, Func Offset: 0x98
	// Line 239, Address: 0x10271a4, Func Offset: 0xa4
	// Line 240, Address: 0x10271b0, Func Offset: 0xb0
	// Line 241, Address: 0x10271bc, Func Offset: 0xbc
	// Line 242, Address: 0x10271c8, Func Offset: 0xc8
	// Line 244, Address: 0x10271d4, Func Offset: 0xd4
	// Func End, Address: 0x10271e4, Func Offset: 0xe4
}

// 
// Start address: 0x10271f0
void radius(_anon1* pActwk)
{
	short wSp;
	short wD0;
	unsigned char bD0;
	// Line 253, Address: 0x10271f0, Func Offset: 0
	// Line 257, Address: 0x1027208, Func Offset: 0x18
	// Line 259, Address: 0x1027218, Func Offset: 0x28
	// Line 260, Address: 0x1027228, Func Offset: 0x38
	// Line 261, Address: 0x1027234, Func Offset: 0x44
	// Line 262, Address: 0x1027240, Func Offset: 0x50
	// Line 263, Address: 0x102724c, Func Offset: 0x5c
	// Line 264, Address: 0x1027258, Func Offset: 0x68
	// Line 265, Address: 0x1027264, Func Offset: 0x74
	// Line 269, Address: 0x1027270, Func Offset: 0x80
	// Line 270, Address: 0x1027280, Func Offset: 0x90
	// Line 271, Address: 0x1027288, Func Offset: 0x98
	// Line 272, Address: 0x1027294, Func Offset: 0xa4
	// Line 273, Address: 0x10272b0, Func Offset: 0xc0
	// Line 275, Address: 0x10272c0, Func Offset: 0xd0
	// Line 276, Address: 0x10272c4, Func Offset: 0xd4
	// Line 277, Address: 0x10272cc, Func Offset: 0xdc
	// Line 278, Address: 0x10272d8, Func Offset: 0xe8
	// Line 279, Address: 0x10272e0, Func Offset: 0xf0
	// Line 281, Address: 0x10272fc, Func Offset: 0x10c
	// Line 282, Address: 0x1027308, Func Offset: 0x118
	// Line 283, Address: 0x1027318, Func Offset: 0x128
	// Line 285, Address: 0x1027324, Func Offset: 0x134
	// Line 290, Address: 0x1027338, Func Offset: 0x148
	// Line 291, Address: 0x1027370, Func Offset: 0x180
	// Line 293, Address: 0x1027384, Func Offset: 0x194
	// Line 294, Address: 0x1027390, Func Offset: 0x1a0
	// Func End, Address: 0x10273ac, Func Offset: 0x1bc
}

