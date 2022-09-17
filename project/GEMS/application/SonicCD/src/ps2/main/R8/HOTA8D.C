typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_7)(_anon0*);
typedef void(*type_17)(_anon0*);
typedef void(*type_21)(_anon0*);

typedef _anon7 type_0[20];
typedef unsigned char type_1[16];
typedef unsigned char type_2[4];
typedef _anon7 type_3[0];
typedef unsigned char type_4[16];
typedef unsigned char type_5[6];
typedef tagPALETTEENTRY type_6[48];
typedef void(*type_8)(_anon0*)[7];
typedef tagPALETTEENTRY type_9[108];
typedef unsigned char type_10[32];
typedef unsigned char type_11[2];
typedef unsigned char type_12[6];
typedef unsigned char type_13[22];
typedef unsigned char type_14[4];
typedef unsigned char type_15[4];
typedef unsigned char type_16[5];
typedef void(*type_18)(_anon0*)[7];
typedef _anon1* type_19[17];
typedef _anon0 type_20[128];
typedef void(*type_22)(_anon0*)[3];
typedef unsigned char* type_23[10];
typedef unsigned char type_24[4];
typedef unsigned char type_25[4];

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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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

unsigned char pchg0[6];
unsigned char pchg1[5];
unsigned char pchg2[4];
unsigned char pchg3[4];
unsigned char pchg4[4];
unsigned char pchg5[4];
unsigned char pchg8[4];
unsigned char pchg9[6];
unsigned char* hotaru8_pchg[10];
_anon1 hotaru00;
_anon1 hotaru01;
_anon1 hotaru04;
_anon1 hotaru05;
_anon1 hotaru06;
_anon1 hotaru07;
_anon1 hotaru08;
_anon1 hotaru09;
_anon1 hotaru0b;
_anon1 hotaru0c;
_anon1 hotaru0f;
_anon1 hotaru10;
_anon1 hotaru;
_anon1* hotaru8pat[17];
_anon0 actwk[128];
_anon5 gametimer;
unsigned char shut_flag;
unsigned char bossflag;
short scra_vline;
unsigned char clrchgtbl1[16];
tagPALETTEENTRY clrtblD[108];
tagPALETTEENTRY* lpcolorwk;
tagPALETTEENTRY clrtblC1[48];
unsigned char clrchgtbl2[16];

void hotaru8(_anon0* hotaru);
void hotaru8_initx(_anon0* hotaru, unsigned char pr_data);
void hotaru8_init(_anon0* hotaru);
void hotaru8_dspin(_anon0* hotaru);
void hotaru8_setup(_anon0* hotaru);
void hotaru8_idou(_anon0* hotaru);
void hota8_zanzou(_anon0* hotaru);
void hotaru8_move2(_anon0* hotaru);
void hotaru8_move3(_anon0* hotaru);
void hotaru8_beemset(_anon0* hotaru);
void hotaru8_move4(_anon0* hotaru);
void hotaru8_beem(_anon0* beemwk);
void h8bem_init(_anon0* beemwk);
void h8bem_move1(_anon0* beemwk);
void h8bem_move2(_anon0* beemwk);
void hotaru8_zanact(_anon0* shadowwk);
void hotaru8_main(_anon0* roomwk);
void ht8main_init(_anon0* roomwk);
void ht8main_move1(_anon0* roomwk);
void ht8main_move2(_anon0* roomwk);
void ht8main_move3(_anon0* roomwk);
void ht8main_move4(_anon0* roomwk);
void ht8main_move5(_anon0* roomwk);
void ht8main_move6(_anon0* roomwk);
void colchg2(unsigned char tbl_number);
void clrtrn(tagPALETTEENTRY* color_tbl);
void colchg(_anon0* roomwk, unsigned char* chgtbl);

// 
// Start address: 0x102eaf0
void hotaru8(_anon0* hotaru)
{
	void(*tbl)(_anon0*)[7];
	// Line 89, Address: 0x102eaf0, Func Offset: 0
	// Line 90, Address: 0x102eafc, Func Offset: 0xc
	// Line 99, Address: 0x102eb28, Func Offset: 0x38
	// Line 100, Address: 0x102eb58, Func Offset: 0x68
	// Line 101, Address: 0x102eb88, Func Offset: 0x98
	// Line 103, Address: 0x102ebb8, Func Offset: 0xc8
	// Line 104, Address: 0x102ebdc, Func Offset: 0xec
	// Line 105, Address: 0x102ec18, Func Offset: 0x128
	// Line 106, Address: 0x102ec24, Func Offset: 0x134
	// Func End, Address: 0x102ec34, Func Offset: 0x144
}

// 
// Start address: 0x102ec40
void hotaru8_initx(_anon0* hotaru, unsigned char pr_data)
{
	// Line 109, Address: 0x102ec40, Func Offset: 0
	// Line 110, Address: 0x102ec4c, Func Offset: 0xc
	// Line 111, Address: 0x102ec5c, Func Offset: 0x1c
	// Line 112, Address: 0x102ec68, Func Offset: 0x28
	// Line 113, Address: 0x102ec78, Func Offset: 0x38
	// Line 114, Address: 0x102ec88, Func Offset: 0x48
	// Line 115, Address: 0x102ec98, Func Offset: 0x58
	// Func End, Address: 0x102eca4, Func Offset: 0x64
}

// 
// Start address: 0x102ecb0
void hotaru8_init(_anon0* hotaru)
{
	// Line 118, Address: 0x102ecb0, Func Offset: 0
	// Line 119, Address: 0x102ecbc, Func Offset: 0xc
	// Line 120, Address: 0x102eccc, Func Offset: 0x1c
	// Line 121, Address: 0x102ece4, Func Offset: 0x34
	// Line 122, Address: 0x102ecf4, Func Offset: 0x44
	// Line 123, Address: 0x102ed00, Func Offset: 0x50
	// Func End, Address: 0x102ed10, Func Offset: 0x60
}

// 
// Start address: 0x102ed10
void hotaru8_dspin(_anon0* hotaru)
{
	// Line 126, Address: 0x102ed10, Func Offset: 0
	// Line 127, Address: 0x102ed1c, Func Offset: 0xc
	// Line 128, Address: 0x102ed28, Func Offset: 0x18
	// Line 129, Address: 0x102ed3c, Func Offset: 0x2c
	// Line 130, Address: 0x102ed5c, Func Offset: 0x4c
	// Line 131, Address: 0x102ed68, Func Offset: 0x58
	// Line 132, Address: 0x102ed78, Func Offset: 0x68
	// Line 133, Address: 0x102ed88, Func Offset: 0x78
	// Func End, Address: 0x102ed98, Func Offset: 0x88
}

// 
// Start address: 0x102eda0
void hotaru8_setup(_anon0* hotaru)
{
	short next_position;
	short speed_calc;
	// Line 136, Address: 0x102eda0, Func Offset: 0
	// Line 139, Address: 0x102edb0, Func Offset: 0x10
	// Line 142, Address: 0x102edc8, Func Offset: 0x28
	// Line 143, Address: 0x102edec, Func Offset: 0x4c
	// Line 144, Address: 0x102ee00, Func Offset: 0x60
	// Line 145, Address: 0x102ee14, Func Offset: 0x74
	// Line 146, Address: 0x102ee1c, Func Offset: 0x7c
	// Line 147, Address: 0x102ee28, Func Offset: 0x88
	// Line 150, Address: 0x102ee30, Func Offset: 0x90
	// Line 151, Address: 0x102ee58, Func Offset: 0xb8
	// Line 152, Address: 0x102ee60, Func Offset: 0xc0
	// Line 153, Address: 0x102ee90, Func Offset: 0xf0
	// Line 156, Address: 0x102ee98, Func Offset: 0xf8
	// Line 157, Address: 0x102eea0, Func Offset: 0x100
	// Line 158, Address: 0x102eed4, Func Offset: 0x134
	// Line 160, Address: 0x102ef00, Func Offset: 0x160
	// Line 161, Address: 0x102ef08, Func Offset: 0x168
	// Line 162, Address: 0x102ef3c, Func Offset: 0x19c
	// Line 164, Address: 0x102ef68, Func Offset: 0x1c8
	// Line 165, Address: 0x102ef78, Func Offset: 0x1d8
	// Line 166, Address: 0x102ef84, Func Offset: 0x1e4
	// Line 167, Address: 0x102ef94, Func Offset: 0x1f4
	// Line 168, Address: 0x102ef9c, Func Offset: 0x1fc
	// Func End, Address: 0x102efb0, Func Offset: 0x210
}

// 
// Start address: 0x102efb0
void hotaru8_idou(_anon0* hotaru)
{
	// Line 172, Address: 0x102efb0, Func Offset: 0
	// Line 173, Address: 0x102efbc, Func Offset: 0xc
	// Line 174, Address: 0x102efe0, Func Offset: 0x30
	// Line 176, Address: 0x102f004, Func Offset: 0x54
	// Line 177, Address: 0x102f010, Func Offset: 0x60
	// Line 178, Address: 0x102f040, Func Offset: 0x90
	// Line 179, Address: 0x102f054, Func Offset: 0xa4
	// Func End, Address: 0x102f064, Func Offset: 0xb4
}

// 
// Start address: 0x102f070
void hota8_zanzou(_anon0* hotaru)
{
	_anon0* shadowwk;
	// Line 182, Address: 0x102f070, Func Offset: 0
	// Line 185, Address: 0x102f07c, Func Offset: 0xc
	// Line 186, Address: 0x102f098, Func Offset: 0x28
	// Line 187, Address: 0x102f0ac, Func Offset: 0x3c
	// Line 188, Address: 0x102f0b8, Func Offset: 0x48
	// Line 189, Address: 0x102f0c8, Func Offset: 0x58
	// Line 190, Address: 0x102f0d8, Func Offset: 0x68
	// Line 191, Address: 0x102f0e4, Func Offset: 0x74
	// Func End, Address: 0x102f0f4, Func Offset: 0x84
}

// 
// Start address: 0x102f100
void hotaru8_move2(_anon0* hotaru)
{
	unsigned char color_change_number;
	unsigned char tbl[32];
	// Line 194, Address: 0x102f100, Func Offset: 0
	// Line 196, Address: 0x102f110, Func Offset: 0x10
	// Line 212, Address: 0x102f144, Func Offset: 0x44
	// Line 213, Address: 0x102f14c, Func Offset: 0x4c
	// Line 215, Address: 0x102f160, Func Offset: 0x60
	// Line 216, Address: 0x102f190, Func Offset: 0x90
	// Line 218, Address: 0x102f1a4, Func Offset: 0xa4
	// Line 219, Address: 0x102f1b4, Func Offset: 0xb4
	// Line 221, Address: 0x102f1bc, Func Offset: 0xbc
	// Func End, Address: 0x102f1d0, Func Offset: 0xd0
}

// 
// Start address: 0x102f1d0
void hotaru8_move3(_anon0* hotaru)
{
	// Line 224, Address: 0x102f1d0, Func Offset: 0
	// Line 225, Address: 0x102f1dc, Func Offset: 0xc
	// Line 226, Address: 0x102f1f0, Func Offset: 0x20
	// Line 227, Address: 0x102f1fc, Func Offset: 0x2c
	// Line 228, Address: 0x102f208, Func Offset: 0x38
	// Line 231, Address: 0x102f214, Func Offset: 0x44
	// Line 233, Address: 0x102f244, Func Offset: 0x74
	// Line 234, Address: 0x102f258, Func Offset: 0x88
	// Line 235, Address: 0x102f288, Func Offset: 0xb8
	// Func End, Address: 0x102f298, Func Offset: 0xc8
}

// 
// Start address: 0x102f2a0
void hotaru8_beemset(_anon0* hotaru)
{
	_anon0* beemwk;
	// Line 238, Address: 0x102f2a0, Func Offset: 0
	// Line 241, Address: 0x102f2ac, Func Offset: 0xc
	// Line 242, Address: 0x102f2c0, Func Offset: 0x20
	// Line 243, Address: 0x102f2cc, Func Offset: 0x2c
	// Line 244, Address: 0x102f2d8, Func Offset: 0x38
	// Line 245, Address: 0x102f2e8, Func Offset: 0x48
	// Line 246, Address: 0x102f2f8, Func Offset: 0x58
	// Func End, Address: 0x102f308, Func Offset: 0x68
}

// 
// Start address: 0x102f310
void hotaru8_move4(_anon0* hotaru)
{
	// Line 249, Address: 0x102f310, Func Offset: 0
	// Line 250, Address: 0x102f31c, Func Offset: 0xc
	// Line 251, Address: 0x102f330, Func Offset: 0x20
	// Line 252, Address: 0x102f33c, Func Offset: 0x2c
	// Line 255, Address: 0x102f344, Func Offset: 0x34
	// Line 257, Address: 0x102f358, Func Offset: 0x48
	// Line 259, Address: 0x102f378, Func Offset: 0x68
	// Line 260, Address: 0x102f384, Func Offset: 0x74
	// Line 261, Address: 0x102f390, Func Offset: 0x80
	// Line 262, Address: 0x102f39c, Func Offset: 0x8c
	// Func End, Address: 0x102f3ac, Func Offset: 0x9c
}

// 
// Start address: 0x102f3b0
void hotaru8_beem(_anon0* beemwk)
{
	void(*tbl)(_anon0*)[3];
	// Line 265, Address: 0x102f3b0, Func Offset: 0
	// Line 266, Address: 0x102f3bc, Func Offset: 0xc
	// Line 267, Address: 0x102f3e0, Func Offset: 0x30
	// Line 268, Address: 0x102f41c, Func Offset: 0x6c
	// Line 269, Address: 0x102f428, Func Offset: 0x78
	// Func End, Address: 0x102f438, Func Offset: 0x88
}

// 
// Start address: 0x102f440
void h8bem_init(_anon0* beemwk)
{
	// Line 272, Address: 0x102f440, Func Offset: 0
	// Line 273, Address: 0x102f44c, Func Offset: 0xc
	// Line 274, Address: 0x102f45c, Func Offset: 0x1c
	// Line 275, Address: 0x102f46c, Func Offset: 0x2c
	// Line 276, Address: 0x102f478, Func Offset: 0x38
	// Line 277, Address: 0x102f484, Func Offset: 0x44
	// Line 278, Address: 0x102f490, Func Offset: 0x50
	// Func End, Address: 0x102f4a0, Func Offset: 0x60
}

// 
// Start address: 0x102f4a0
void h8bem_move1(_anon0* beemwk)
{
	// Line 281, Address: 0x102f4a0, Func Offset: 0
	// Line 282, Address: 0x102f4ac, Func Offset: 0xc
	// Line 283, Address: 0x102f4b8, Func Offset: 0x18
	// Line 284, Address: 0x102f4c8, Func Offset: 0x28
	// Line 285, Address: 0x102f4dc, Func Offset: 0x3c
	// Line 286, Address: 0x102f4f8, Func Offset: 0x58
	// Line 287, Address: 0x102f508, Func Offset: 0x68
	// Line 289, Address: 0x102f51c, Func Offset: 0x7c
	// Func End, Address: 0x102f52c, Func Offset: 0x8c
}

// 
// Start address: 0x102f530
void h8bem_move2(_anon0* beemwk)
{
	// Line 292, Address: 0x102f530, Func Offset: 0
	// Line 293, Address: 0x102f53c, Func Offset: 0xc
	// Line 294, Address: 0x102f550, Func Offset: 0x20
	// Line 295, Address: 0x102f55c, Func Offset: 0x2c
	// Line 296, Address: 0x102f568, Func Offset: 0x38
	// Line 298, Address: 0x102f57c, Func Offset: 0x4c
	// Line 299, Address: 0x102f590, Func Offset: 0x60
	// Line 300, Address: 0x102f5b0, Func Offset: 0x80
	// Line 301, Address: 0x102f5e0, Func Offset: 0xb0
	// Func End, Address: 0x102f5f0, Func Offset: 0xc0
}

// 
// Start address: 0x102f5f0
void hotaru8_zanact(_anon0* shadowwk)
{
	// Line 304, Address: 0x102f5f0, Func Offset: 0
	// Line 305, Address: 0x102f5fc, Func Offset: 0xc
	// Line 306, Address: 0x102f610, Func Offset: 0x20
	// Line 307, Address: 0x102f620, Func Offset: 0x30
	// Line 308, Address: 0x102f62c, Func Offset: 0x3c
	// Line 309, Address: 0x102f638, Func Offset: 0x48
	// Line 311, Address: 0x102f648, Func Offset: 0x58
	// Line 312, Address: 0x102f65c, Func Offset: 0x6c
	// Line 313, Address: 0x102f68c, Func Offset: 0x9c
	// Line 314, Address: 0x102f698, Func Offset: 0xa8
	// Func End, Address: 0x102f6a8, Func Offset: 0xb8
}

// 
// Start address: 0x102f6b0
void hotaru8_main(_anon0* roomwk)
{
	void(*tbl)(_anon0*)[7];
	// Line 317, Address: 0x102f6b0, Func Offset: 0
	// Line 318, Address: 0x102f6bc, Func Offset: 0xc
	// Line 320, Address: 0x102f6e8, Func Offset: 0x38
	// Line 321, Address: 0x102f724, Func Offset: 0x74
	// Func End, Address: 0x102f734, Func Offset: 0x84
}

// 
// Start address: 0x102f740
void ht8main_init(_anon0* roomwk)
{
	_anon0* doorwk;
	// Line 324, Address: 0x102f740, Func Offset: 0
	// Line 327, Address: 0x102f74c, Func Offset: 0xc
	// Line 329, Address: 0x102f75c, Func Offset: 0x1c
	// Line 331, Address: 0x102f778, Func Offset: 0x38
	// Line 332, Address: 0x102f784, Func Offset: 0x44
	// Line 333, Address: 0x102f798, Func Offset: 0x58
	// Line 334, Address: 0x102f7a4, Func Offset: 0x64
	// Line 335, Address: 0x102f7b0, Func Offset: 0x70
	// Line 336, Address: 0x102f7bc, Func Offset: 0x7c
	// Line 337, Address: 0x102f7f0, Func Offset: 0xb0
	// Line 338, Address: 0x102f800, Func Offset: 0xc0
	// Func End, Address: 0x102f810, Func Offset: 0xd0
}

// 
// Start address: 0x102f810
void ht8main_move1(_anon0* roomwk)
{
	// Line 341, Address: 0x102f810, Func Offset: 0
	// Line 342, Address: 0x102f818, Func Offset: 0x8
	// Line 343, Address: 0x102f834, Func Offset: 0x24
	// Line 344, Address: 0x102f85c, Func Offset: 0x4c
	// Line 345, Address: 0x102f870, Func Offset: 0x60
	// Line 346, Address: 0x102f888, Func Offset: 0x78
	// Line 347, Address: 0x102f898, Func Offset: 0x88
	// Line 349, Address: 0x102f8ac, Func Offset: 0x9c
	// Func End, Address: 0x102f8b8, Func Offset: 0xa8
}

// 
// Start address: 0x102f8c0
void ht8main_move2(_anon0* roomwk)
{
	_anon0* hotaru;
	// Line 352, Address: 0x102f8c0, Func Offset: 0
	// Line 355, Address: 0x102f8cc, Func Offset: 0xc
	// Line 356, Address: 0x102f8e0, Func Offset: 0x20
	// Line 357, Address: 0x102f8f8, Func Offset: 0x38
	// Line 358, Address: 0x102f90c, Func Offset: 0x4c
	// Line 359, Address: 0x102f920, Func Offset: 0x60
	// Line 360, Address: 0x102f92c, Func Offset: 0x6c
	// Line 361, Address: 0x102f938, Func Offset: 0x78
	// Line 362, Address: 0x102f944, Func Offset: 0x84
	// Line 363, Address: 0x102f978, Func Offset: 0xb8
	// Line 364, Address: 0x102f984, Func Offset: 0xc4
	// Line 365, Address: 0x102f994, Func Offset: 0xd4
	// Func End, Address: 0x102f9a4, Func Offset: 0xe4
}

// 
// Start address: 0x102f9b0
void ht8main_move3(_anon0* roomwk)
{
	_anon0* hotaru;
	// Line 368, Address: 0x102f9b0, Func Offset: 0
	// Line 371, Address: 0x102f9bc, Func Offset: 0xc
	// Line 374, Address: 0x102f9f4, Func Offset: 0x44
	// Line 375, Address: 0x102fa00, Func Offset: 0x50
	// Line 377, Address: 0x102fa1c, Func Offset: 0x6c
	// Line 378, Address: 0x102fa30, Func Offset: 0x80
	// Line 379, Address: 0x102fa3c, Func Offset: 0x8c
	// Line 380, Address: 0x102fa48, Func Offset: 0x98
	// Line 381, Address: 0x102fa54, Func Offset: 0xa4
	// Line 382, Address: 0x102fa88, Func Offset: 0xd8
	// Line 383, Address: 0x102fa94, Func Offset: 0xe4
	// Line 384, Address: 0x102faa4, Func Offset: 0xf4
	// Line 385, Address: 0x102fab0, Func Offset: 0x100
	// Func End, Address: 0x102fac0, Func Offset: 0x110
}

// 
// Start address: 0x102fac0
void ht8main_move4(_anon0* roomwk)
{
	_anon0* hotaru;
	// Line 388, Address: 0x102fac0, Func Offset: 0
	// Line 391, Address: 0x102facc, Func Offset: 0xc
	// Line 392, Address: 0x102fae0, Func Offset: 0x20
	// Line 393, Address: 0x102faec, Func Offset: 0x2c
	// Line 394, Address: 0x102faf8, Func Offset: 0x38
	// Line 395, Address: 0x102fb04, Func Offset: 0x44
	// Line 396, Address: 0x102fb38, Func Offset: 0x78
	// Line 397, Address: 0x102fb40, Func Offset: 0x80
	// Line 398, Address: 0x102fb54, Func Offset: 0x94
	// Line 399, Address: 0x102fb64, Func Offset: 0xa4
	// Func End, Address: 0x102fb74, Func Offset: 0xb4
}

// 
// Start address: 0x102fb80
void ht8main_move5(_anon0* roomwk)
{
	// Line 402, Address: 0x102fb80, Func Offset: 0
	// Line 403, Address: 0x102fb88, Func Offset: 0x8
	// Line 405, Address: 0x102fbc0, Func Offset: 0x40
	// Line 407, Address: 0x102fbf8, Func Offset: 0x78
	// Line 408, Address: 0x102fc08, Func Offset: 0x88
	// Func End, Address: 0x102fc14, Func Offset: 0x94
}

// 
// Start address: 0x102fc20
void ht8main_move6(_anon0* roomwk)
{
	_anon0* eggwk;
	// Line 411, Address: 0x102fc20, Func Offset: 0
	// Line 414, Address: 0x102fc2c, Func Offset: 0xc
	// Line 415, Address: 0x102fc38, Func Offset: 0x18
	// Line 416, Address: 0x102fc64, Func Offset: 0x44
	// Line 417, Address: 0x102fc78, Func Offset: 0x58
	// Line 418, Address: 0x102fc84, Func Offset: 0x64
	// Line 419, Address: 0x102fc90, Func Offset: 0x70
	// Line 420, Address: 0x102fc9c, Func Offset: 0x7c
	// Line 421, Address: 0x102fca8, Func Offset: 0x88
	// Func End, Address: 0x102fcb8, Func Offset: 0x98
}

// 
// Start address: 0x102fcc0
void colchg2(unsigned char tbl_number)
{
	// Line 424, Address: 0x102fcc0, Func Offset: 0
	// Line 425, Address: 0x102fccc, Func Offset: 0xc
	// Line 426, Address: 0x102fd04, Func Offset: 0x44
	// Func End, Address: 0x102fd14, Func Offset: 0x54
}

// 
// Start address: 0x102fd20
void clrtrn(tagPALETTEENTRY* color_tbl)
{
	short i;
	tagPALETTEENTRY* colorwk;
	// Line 429, Address: 0x102fd20, Func Offset: 0
	// Line 433, Address: 0x102fd30, Func Offset: 0x10
	// Line 434, Address: 0x102fd3c, Func Offset: 0x1c
	// Line 435, Address: 0x102fda4, Func Offset: 0x84
	// Func End, Address: 0x102fdb8, Func Offset: 0x98
}

// 
// Start address: 0x102fdc0
void colchg(_anon0* roomwk, unsigned char* chgtbl)
{
	unsigned char clrtbl_index;
	// Line 438, Address: 0x102fdc0, Func Offset: 0
	// Line 441, Address: 0x102fdd4, Func Offset: 0x14
	// Line 443, Address: 0x102fdec, Func Offset: 0x2c
	// Line 444, Address: 0x102fe18, Func Offset: 0x58
	// Line 445, Address: 0x102fe34, Func Offset: 0x74
	// Line 446, Address: 0x102fe58, Func Offset: 0x98
	// Line 447, Address: 0x102fe8c, Func Offset: 0xcc
	// Line 448, Address: 0x102fe9c, Func Offset: 0xdc
	// Func End, Address: 0x102feb0, Func Offset: 0xf0
}

