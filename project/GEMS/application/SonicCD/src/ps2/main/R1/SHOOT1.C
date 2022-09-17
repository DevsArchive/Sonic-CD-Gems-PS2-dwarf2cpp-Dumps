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
typedef unsigned short type_2[35];
typedef unsigned short type_3[69];
typedef unsigned char type_4[2];
typedef _anon0* type_5[3];
typedef unsigned char type_6[22];
typedef _anon0* type_7[1];
typedef _anon0* type_8[0];
typedef unsigned char type_9[766];
typedef _anon1 type_10[128];
typedef _anon0* type_11[2];
typedef unsigned short* type_12[3];
typedef unsigned short type_13[35];
typedef short type_14[4];

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

_anon0 eda00;
_anon0 eda01;
_anon0 eda02;
_anon0* edapat[3];
_anon0 kag00;
_anon0 kag01;
_anon0* kagepat[2];
_anon0 ana00;
_anon0* kage1pat[1];
_anon1 actwk[128];
unsigned char flagwork[766];
unsigned char time_flag;
unsigned short shooterposi_0[69];
unsigned short shooterposi_1[35];
unsigned short shooterposi_2[35];
unsigned short* shooterpositbl[3];
char time_item;
_anon0* bariapat[0];

void eda(_anon1* edawk);
void eda_init(_anon1* edawk);
void eda_move(_anon1* edawk);
void kage(_anon1* kagewk);
void kage_init(_anon1* kagewk);
void kage_move(_anon1* kagewk);
void ana(_anon1* anawk);
void kage1_init(_anon1* anawk);
void kage1_move0(_anon1* anawk);
void kage1_move1(_anon1* anawk);
unsigned char kage1_chk(_anon1* anawk);
void kage1_clr(_anon1* anawk);
void shooter(_anon1* shootwk);
void shooterinit(_anon1* shootwk);
void shootermove(_anon1* shootwk);
void shootermove2(_anon1* shootwk);
void shootermove3(_anon1* shootwk);
void shooterspdset(_anon1* shootwk);
void mspd_set(_anon1* shootwk);

// 
// Start address: 0x101cf50
void eda(_anon1* edawk)
{
	// Line 24, Address: 0x101cf50, Func Offset: 0
	// Line 25, Address: 0x101cf5c, Func Offset: 0xc
	// Line 27, Address: 0x101cf84, Func Offset: 0x34
	// Line 28, Address: 0x101cf90, Func Offset: 0x40
	// Line 30, Address: 0x101cf98, Func Offset: 0x48
	// Line 35, Address: 0x101cfa4, Func Offset: 0x54
	// Line 36, Address: 0x101cfb0, Func Offset: 0x60
	// Line 37, Address: 0x101cfbc, Func Offset: 0x6c
	// Func End, Address: 0x101cfcc, Func Offset: 0x7c
}

// 
// Start address: 0x101cfd0
void eda_init(_anon1* edawk)
{
	// Line 40, Address: 0x101cfd0, Func Offset: 0
	// Line 41, Address: 0x101cfdc, Func Offset: 0xc
	// Line 42, Address: 0x101cfec, Func Offset: 0x1c
	// Line 43, Address: 0x101cffc, Func Offset: 0x2c
	// Line 44, Address: 0x101d00c, Func Offset: 0x3c
	// Line 45, Address: 0x101d01c, Func Offset: 0x4c
	// Line 46, Address: 0x101d028, Func Offset: 0x58
	// Line 49, Address: 0x101d034, Func Offset: 0x64
	// Line 50, Address: 0x101d040, Func Offset: 0x70
	// Func End, Address: 0x101d050, Func Offset: 0x80
}

// 
// Start address: 0x101d050
void eda_move(_anon1* edawk)
{
	unsigned char action_no;
	// Line 53, Address: 0x101d050, Func Offset: 0
	// Line 55, Address: 0x101d05c, Func Offset: 0xc
	// Line 56, Address: 0x101d068, Func Offset: 0x18
	// Func End, Address: 0x101d078, Func Offset: 0x28
}

// 
// Start address: 0x101d080
void kage(_anon1* kagewk)
{
	// Line 64, Address: 0x101d080, Func Offset: 0
	// Line 65, Address: 0x101d08c, Func Offset: 0xc
	// Line 67, Address: 0x101d0b4, Func Offset: 0x34
	// Line 68, Address: 0x101d0c0, Func Offset: 0x40
	// Line 70, Address: 0x101d0c8, Func Offset: 0x48
	// Line 75, Address: 0x101d0d4, Func Offset: 0x54
	// Line 76, Address: 0x101d0e0, Func Offset: 0x60
	// Line 77, Address: 0x101d0ec, Func Offset: 0x6c
	// Func End, Address: 0x101d0fc, Func Offset: 0x7c
}

// 
// Start address: 0x101d100
void kage_init(_anon1* kagewk)
{
	// Line 80, Address: 0x101d100, Func Offset: 0
	// Line 81, Address: 0x101d10c, Func Offset: 0xc
	// Line 82, Address: 0x101d11c, Func Offset: 0x1c
	// Line 83, Address: 0x101d12c, Func Offset: 0x2c
	// Line 84, Address: 0x101d138, Func Offset: 0x38
	// Line 85, Address: 0x101d148, Func Offset: 0x48
	// Line 86, Address: 0x101d158, Func Offset: 0x58
	// Line 87, Address: 0x101d164, Func Offset: 0x64
	// Line 90, Address: 0x101d170, Func Offset: 0x70
	// Line 91, Address: 0x101d17c, Func Offset: 0x7c
	// Func End, Address: 0x101d18c, Func Offset: 0x8c
}

// 
// Start address: 0x101d190
void kage_move(_anon1* kagewk)
{
	unsigned char action_no;
	// Line 94, Address: 0x101d190, Func Offset: 0
	// Line 96, Address: 0x101d19c, Func Offset: 0xc
	// Line 97, Address: 0x101d1a8, Func Offset: 0x18
	// Func End, Address: 0x101d1b8, Func Offset: 0x28
}

// 
// Start address: 0x101d1c0
void ana(_anon1* anawk)
{
	// Line 104, Address: 0x101d1c0, Func Offset: 0
	// Line 105, Address: 0x101d1cc, Func Offset: 0xc
	// Line 107, Address: 0x101d200, Func Offset: 0x40
	// Line 108, Address: 0x101d20c, Func Offset: 0x4c
	// Line 110, Address: 0x101d214, Func Offset: 0x54
	// Line 111, Address: 0x101d220, Func Offset: 0x60
	// Line 113, Address: 0x101d228, Func Offset: 0x68
	// Line 118, Address: 0x101d234, Func Offset: 0x74
	// Line 119, Address: 0x101d240, Func Offset: 0x80
	// Func End, Address: 0x101d250, Func Offset: 0x90
}

// 
// Start address: 0x101d250
void kage1_init(_anon1* anawk)
{
	// Line 122, Address: 0x101d250, Func Offset: 0
	// Line 123, Address: 0x101d25c, Func Offset: 0xc
	// Line 124, Address: 0x101d26c, Func Offset: 0x1c
	// Line 126, Address: 0x101d27c, Func Offset: 0x2c
	// Line 127, Address: 0x101d28c, Func Offset: 0x3c
	// Line 128, Address: 0x101d298, Func Offset: 0x48
	// Line 129, Address: 0x101d2a4, Func Offset: 0x54
	// Line 130, Address: 0x101d2b0, Func Offset: 0x60
	// Line 131, Address: 0x101d2c8, Func Offset: 0x78
	// Line 132, Address: 0x101d2d8, Func Offset: 0x88
	// Line 133, Address: 0x101d2e4, Func Offset: 0x94
	// Line 134, Address: 0x101d2ec, Func Offset: 0x9c
	// Line 135, Address: 0x101d2f8, Func Offset: 0xa8
	// Line 137, Address: 0x101d304, Func Offset: 0xb4
	// Func End, Address: 0x101d314, Func Offset: 0xc4
}

// 
// Start address: 0x101d320
void kage1_move0(_anon1* anawk)
{
	short cal_position;
	// Line 140, Address: 0x101d320, Func Offset: 0
	// Line 143, Address: 0x101d330, Func Offset: 0x10
	// Line 144, Address: 0x101d344, Func Offset: 0x24
	// Line 145, Address: 0x101d37c, Func Offset: 0x5c
	// Line 146, Address: 0x101d3a8, Func Offset: 0x88
	// Line 147, Address: 0x101d3e0, Func Offset: 0xc0
	// Line 148, Address: 0x101d40c, Func Offset: 0xec
	// Line 149, Address: 0x101d418, Func Offset: 0xf8
	// Line 150, Address: 0x101d424, Func Offset: 0x104
	// Line 151, Address: 0x101d434, Func Offset: 0x114
	// Line 152, Address: 0x101d440, Func Offset: 0x120
	// Func End, Address: 0x101d454, Func Offset: 0x134
}

// 
// Start address: 0x101d460
void kage1_move1(_anon1* anawk)
{
	// Line 155, Address: 0x101d460, Func Offset: 0
	// Line 156, Address: 0x101d46c, Func Offset: 0xc
	// Line 157, Address: 0x101d478, Func Offset: 0x18
	// Func End, Address: 0x101d488, Func Offset: 0x28
}

// 
// Start address: 0x101d490
unsigned char kage1_chk(_anon1* anawk)
{
	short flag_no;
	unsigned char zero_flag;
	// Line 160, Address: 0x101d490, Func Offset: 0
	// Line 164, Address: 0x101d4a0, Func Offset: 0x10
	// Line 165, Address: 0x101d4e4, Func Offset: 0x54
	// Line 166, Address: 0x101d50c, Func Offset: 0x7c
	// Line 167, Address: 0x101d52c, Func Offset: 0x9c
	// Line 168, Address: 0x101d530, Func Offset: 0xa0
	// Func End, Address: 0x101d544, Func Offset: 0xb4
}

// 
// Start address: 0x101d550
void kage1_clr(_anon1* anawk)
{
	short flag_no;
	// Line 171, Address: 0x101d550, Func Offset: 0
	// Line 174, Address: 0x101d55c, Func Offset: 0xc
	// Line 175, Address: 0x101d5a0, Func Offset: 0x50
	// Line 176, Address: 0x101d5c0, Func Offset: 0x70
	// Func End, Address: 0x101d5d0, Func Offset: 0x80
}

// 
// Start address: 0x101d5d0
void shooter(_anon1* shootwk)
{
	short flag_no;
	short addition;
	// Line 262, Address: 0x101d5d0, Func Offset: 0
	// Line 265, Address: 0x101d5e4, Func Offset: 0x14
	// Line 266, Address: 0x101d5fc, Func Offset: 0x2c
	// Line 267, Address: 0x101d628, Func Offset: 0x58
	// Line 268, Address: 0x101d638, Func Offset: 0x68
	// Line 269, Address: 0x101d684, Func Offset: 0xb4
	// Line 270, Address: 0x101d6a0, Func Offset: 0xd0
	// Line 271, Address: 0x101d6c0, Func Offset: 0xf0
	// Line 273, Address: 0x101d6ec, Func Offset: 0x11c
	// Line 274, Address: 0x101d708, Func Offset: 0x138
	// Line 275, Address: 0x101d720, Func Offset: 0x150
	// Line 277, Address: 0x101d760, Func Offset: 0x190
	// Line 278, Address: 0x101d76c, Func Offset: 0x19c
	// Line 280, Address: 0x101d774, Func Offset: 0x1a4
	// Line 281, Address: 0x101d780, Func Offset: 0x1b0
	// Line 283, Address: 0x101d788, Func Offset: 0x1b8
	// Line 284, Address: 0x101d794, Func Offset: 0x1c4
	// Line 286, Address: 0x101d79c, Func Offset: 0x1cc
	// Line 292, Address: 0x101d7a8, Func Offset: 0x1d8
	// Func End, Address: 0x101d7c0, Func Offset: 0x1f0
}

// 
// Start address: 0x101d7c0
void shooterinit(_anon1* shootwk)
{
	unsigned short** move;
	unsigned short* movetbl;
	// Line 295, Address: 0x101d7c0, Func Offset: 0
	// Line 299, Address: 0x101d7d4, Func Offset: 0x14
	// Line 300, Address: 0x101d7e4, Func Offset: 0x24
	// Line 301, Address: 0x101d7f0, Func Offset: 0x30
	// Line 302, Address: 0x101d7fc, Func Offset: 0x3c
	// Line 305, Address: 0x101d808, Func Offset: 0x48
	// Line 306, Address: 0x101d818, Func Offset: 0x58
	// Line 307, Address: 0x101d840, Func Offset: 0x80
	// Line 308, Address: 0x101d858, Func Offset: 0x98
	// Line 309, Address: 0x101d870, Func Offset: 0xb0
	// Line 310, Address: 0x101d878, Func Offset: 0xb8
	// Line 311, Address: 0x101d880, Func Offset: 0xc0
	// Line 312, Address: 0x101d88c, Func Offset: 0xcc
	// Line 313, Address: 0x101d898, Func Offset: 0xd8
	// Line 314, Address: 0x101d8a4, Func Offset: 0xe4
	// Func End, Address: 0x101d8bc, Func Offset: 0xfc
}

// 
// Start address: 0x101d8c0
void shootermove(_anon1* shootwk)
{
	short cal_position;
	// Line 317, Address: 0x101d8c0, Func Offset: 0
	// Line 320, Address: 0x101d8d0, Func Offset: 0x10
	// Line 321, Address: 0x101d908, Func Offset: 0x48
	// Line 322, Address: 0x101d934, Func Offset: 0x74
	// Line 323, Address: 0x101d96c, Func Offset: 0xac
	// Line 324, Address: 0x101d998, Func Offset: 0xd8
	// Line 325, Address: 0x101d9ac, Func Offset: 0xec
	// Line 326, Address: 0x101d9c4, Func Offset: 0x104
	// Line 327, Address: 0x101d9d8, Func Offset: 0x118
	// Line 329, Address: 0x101d9e4, Func Offset: 0x124
	// Line 330, Address: 0x101d9f4, Func Offset: 0x134
	// Line 331, Address: 0x101da00, Func Offset: 0x140
	// Line 332, Address: 0x101da2c, Func Offset: 0x16c
	// Line 333, Address: 0x101da38, Func Offset: 0x178
	// Line 334, Address: 0x101da44, Func Offset: 0x184
	// Line 335, Address: 0x101da5c, Func Offset: 0x19c
	// Line 336, Address: 0x101da6c, Func Offset: 0x1ac
	// Line 337, Address: 0x101da80, Func Offset: 0x1c0
	// Line 338, Address: 0x101da94, Func Offset: 0x1d4
	// Line 339, Address: 0x101da9c, Func Offset: 0x1dc
	// Line 340, Address: 0x101daac, Func Offset: 0x1ec
	// Line 341, Address: 0x101dabc, Func Offset: 0x1fc
	// Line 342, Address: 0x101dac4, Func Offset: 0x204
	// Line 343, Address: 0x101dad0, Func Offset: 0x210
	// Func End, Address: 0x101dae4, Func Offset: 0x224
}

// 
// Start address: 0x101daf0
void shootermove2(_anon1* shootwk)
{
	// Line 346, Address: 0x101daf0, Func Offset: 0
	// Line 347, Address: 0x101dafc, Func Offset: 0xc
	// Line 348, Address: 0x101db08, Func Offset: 0x18
	// Line 349, Address: 0x101db18, Func Offset: 0x28
	// Line 350, Address: 0x101db24, Func Offset: 0x34
	// Func End, Address: 0x101db34, Func Offset: 0x44
}

// 
// Start address: 0x101db40
void shootermove3(_anon1* shootwk)
{
	unsigned char move_counter;
	unsigned short** move;
	unsigned short* movetbl;
	// Line 353, Address: 0x101db40, Func Offset: 0
	// Line 358, Address: 0x101db58, Func Offset: 0x18
	// Line 359, Address: 0x101db84, Func Offset: 0x44
	// Line 360, Address: 0x101db94, Func Offset: 0x54
	// Line 361, Address: 0x101dba4, Func Offset: 0x64
	// Line 362, Address: 0x101dbbc, Func Offset: 0x7c
	// Line 364, Address: 0x101dbd8, Func Offset: 0x98
	// Line 365, Address: 0x101dbe0, Func Offset: 0xa0
	// Line 366, Address: 0x101dbe8, Func Offset: 0xa8
	// Line 367, Address: 0x101dbec, Func Offset: 0xac
	// Line 368, Address: 0x101dc1c, Func Offset: 0xdc
	// Line 369, Address: 0x101dc50, Func Offset: 0x110
	// Line 370, Address: 0x101dc5c, Func Offset: 0x11c
	// Line 373, Address: 0x101dc64, Func Offset: 0x124
	// Line 374, Address: 0x101dc8c, Func Offset: 0x14c
	// Line 375, Address: 0x101dcb4, Func Offset: 0x174
	// Line 378, Address: 0x101dcbc, Func Offset: 0x17c
	// Line 379, Address: 0x101dcd0, Func Offset: 0x190
	// Line 380, Address: 0x101dcd8, Func Offset: 0x198
	// Line 381, Address: 0x101dce0, Func Offset: 0x1a0
	// Func End, Address: 0x101dcfc, Func Offset: 0x1bc
}

// 
// Start address: 0x101dd00
void shooterspdset(_anon1* shootwk)
{
	short ms_work0;
	short ms_work1;
	short cal_position_x;
	short cal_position_y;
	int cal_long_x;
	int cal_long_y;
	// Line 384, Address: 0x101dd00, Func Offset: 0
	// Line 388, Address: 0x101dd20, Func Offset: 0x20
	// Line 389, Address: 0x101dd38, Func Offset: 0x38
	// Line 390, Address: 0x101dd48, Func Offset: 0x48
	// Line 391, Address: 0x101dd5c, Func Offset: 0x5c
	// Line 392, Address: 0x101dd6c, Func Offset: 0x6c
	// Line 393, Address: 0x101dd88, Func Offset: 0x88
	// Line 395, Address: 0x101dda4, Func Offset: 0xa4
	// Line 396, Address: 0x101ddb4, Func Offset: 0xb4
	// Line 397, Address: 0x101ddc8, Func Offset: 0xc8
	// Line 398, Address: 0x101ddd8, Func Offset: 0xd8
	// Line 399, Address: 0x101ddf4, Func Offset: 0xf4
	// Line 401, Address: 0x101de10, Func Offset: 0x110
	// Line 403, Address: 0x101de2c, Func Offset: 0x12c
	// Line 404, Address: 0x101de3c, Func Offset: 0x13c
	// Line 405, Address: 0x101de50, Func Offset: 0x150
	// Line 406, Address: 0x101de5c, Func Offset: 0x15c
	// Line 408, Address: 0x101de78, Func Offset: 0x178
	// Line 409, Address: 0x101de88, Func Offset: 0x188
	// Line 410, Address: 0x101de9c, Func Offset: 0x19c
	// Line 411, Address: 0x101dea8, Func Offset: 0x1a8
	// Line 413, Address: 0x101dec4, Func Offset: 0x1c4
	// Line 414, Address: 0x101ded4, Func Offset: 0x1d4
	// Line 415, Address: 0x101dedc, Func Offset: 0x1dc
	// Line 416, Address: 0x101dee8, Func Offset: 0x1e8
	// Line 417, Address: 0x101def8, Func Offset: 0x1f8
	// Line 418, Address: 0x101df08, Func Offset: 0x208
	// Line 422, Address: 0x101df10, Func Offset: 0x210
	// Line 423, Address: 0x101df20, Func Offset: 0x220
	// Line 424, Address: 0x101df34, Func Offset: 0x234
	// Line 425, Address: 0x101df40, Func Offset: 0x240
	// Line 427, Address: 0x101df5c, Func Offset: 0x25c
	// Line 428, Address: 0x101df6c, Func Offset: 0x26c
	// Line 429, Address: 0x101df80, Func Offset: 0x280
	// Line 430, Address: 0x101df8c, Func Offset: 0x28c
	// Line 432, Address: 0x101dfa8, Func Offset: 0x2a8
	// Line 433, Address: 0x101dfb8, Func Offset: 0x2b8
	// Line 434, Address: 0x101dfc0, Func Offset: 0x2c0
	// Line 435, Address: 0x101dfcc, Func Offset: 0x2cc
	// Line 436, Address: 0x101dfdc, Func Offset: 0x2dc
	// Line 437, Address: 0x101dfec, Func Offset: 0x2ec
	// Func End, Address: 0x101e010, Func Offset: 0x310
}

// 
// Start address: 0x101e010
void mspd_set(_anon1* shootwk)
{
	short mspdtbl[4];
	short cal_mspeed;
	// Line 440, Address: 0x101e010, Func Offset: 0
	// Line 441, Address: 0x101e01c, Func Offset: 0xc
	// Line 444, Address: 0x101e048, Func Offset: 0x38
	// Line 445, Address: 0x101e054, Func Offset: 0x44
	// Line 446, Address: 0x101e06c, Func Offset: 0x5c
	// Line 447, Address: 0x101e094, Func Offset: 0x84
	// Line 448, Address: 0x101e0c0, Func Offset: 0xb0
	// Func End, Address: 0x101e0d0, Func Offset: 0xc0
}

