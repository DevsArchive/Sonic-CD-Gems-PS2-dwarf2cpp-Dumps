typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_9)(_anon0*);
typedef void(*type_17)(_anon0*);
typedef void(*type_39)(_anon0*);

typedef unsigned short type_0[22];
typedef _anon1* type_1[12];
typedef unsigned char type_2[2];
typedef char type_3[32];
typedef unsigned short type_4[16];
typedef unsigned char type_5[22];
typedef char type_6[32];
typedef unsigned short type_7[7];
typedef unsigned short type_8[22];
typedef void(*type_10)(_anon0*)[5];
typedef unsigned short type_11[7];
typedef unsigned short type_12[13];
typedef unsigned char type_13[766];
typedef _anon0 type_14[128];
typedef unsigned char type_15[19];
typedef unsigned short type_16[13];
typedef void(*type_18)(_anon0*)[4];
typedef unsigned char type_19[7];
typedef unsigned short type_20[13];
typedef unsigned short type_21[7];
typedef short type_22[8];
typedef unsigned short type_23[49];
typedef _anon1* type_24[9];
typedef unsigned short type_25[85];
typedef unsigned short type_26[46];
typedef char type_27[32];
typedef _anon1* type_28[13];
typedef _anon1* type_29[2];
typedef _anon9 type_30[20];
typedef _anon9 type_31[0];
typedef char* type_32[3];
typedef unsigned short* type_33[19];
typedef char type_34[48];
typedef unsigned short type_35[25];
typedef unsigned short type_36[40];
typedef unsigned short type_37[16];
typedef unsigned char* type_38[3];
typedef void(*type_40)(_anon0*)[7];
typedef unsigned short type_41[7];
typedef unsigned char type_42[90];
typedef unsigned short type_43[13];
typedef unsigned short type_44[10];
typedef unsigned short type_45[31];

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
		_anon9 spra[20];
		_anon9 spr[0];
	};
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

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon0 actwk[128];
unsigned char sys_pattim4;
_anon1* ringpat[9];
unsigned char gaschg0[7];
unsigned char gaschg1[90];
unsigned char gaschg2[19];
unsigned char* gaschg[3];
_anon1 gas00;
_anon1 gas01;
_anon1 gas02;
_anon1 gas03;
_anon1 gas04;
_anon1 gas05;
_anon1 gas06;
_anon1 gas07;
_anon1 ice00;
_anon1 ice01;
_anon1 ice02;
_anon1 ice03;
_anon1* gaspat[12];
_anon7 swdata;
char tbl0[32];
char tbl1[32];
char tbl2[32];
char ice_tbl0[48];
unsigned char plpower_a;
unsigned char plpower_m;
_anon1 cata00;
_anon1 cata01;
_anon1* cata_pat[2];
_anon7 swdata1;
unsigned short shooterposi_0[46];
unsigned short shooterposi_1[16];
unsigned short shooterposi_2[85];
unsigned short shooterposi_3[22];
unsigned short shooterposi_4[49];
unsigned short shooterposi_5[31];
unsigned short shooterposi_6[7];
unsigned short shooterposi_7[10];
unsigned short shooterposi_8[13];
unsigned short shooterposi_9[13];
unsigned short shooterposi_0a[13];
unsigned short shooterposi_0b[7];
unsigned short shooterposi_0c[13];
unsigned short shooterposi_0d[16];
unsigned short shooterposi_0e[7];
unsigned short shooterposi_0f[40];
unsigned short shooterposi_10[22];
unsigned short shooterposi_11[25];
unsigned short shooterposi_12[7];
unsigned short* shooterpositbl[19];
short stackpointer;
unsigned char flagwork[766];
char time_item;
unsigned char time_flag;
_anon1* bariapat[13];

void megami(_anon0* megamiwk);
void m_init(_anon0* megamiwk);
void m_move0(_anon0* megamiwk);
void m_move1(_anon0* megamiwk);
void m_move2(_anon0* megamiwk);
void ring_set(_anon0* megamiwk);
void gas(_anon0* gaswk);
void gas_init(_anon0* gaswk);
void gas_move0(_anon0* gaswk);
void gas_move1(_anon0* gaswk);
void gas_move2(_anon0* gaswk);
void gas_move3(_anon0* gaswk);
void gas_move4(_anon0* gaswk);
void gas_move5(_anon0* gaswk);
void ice_sub_set(_anon0* gaswk);
void ice_sub0(_anon0* gaswk, char* tbl, short loop);
void ice_set(_anon0* plwk);
void gas_coli(_anon0* gaswk);
short gas_coli_colig(_anon0* gaswk, _anon0* plwk);
void catapalt(_anon0* catawk);
void cata_init(_anon0* catawk);
void cata_wait(_anon0* catawk);
void cata_move0(_anon0* catawk);
void cata_move1(_anon0* catawk);
void cata_move2(_anon0* catawk);
void shooter(_anon0* shootwk);
void shooterinit(_anon0* shootwk);
void shootermove(_anon0* shootwk);
void shootermove2(_anon0* shootwk);
void shootermove3(_anon0* shootwk);
void shooterspdset(_anon0* shootwk);

// 
// Start address: 0x101cec0
void megami(_anon0* megamiwk)
{
	void(*tbl)(_anon0*)[4];
	// Line 19, Address: 0x101cec0, Func Offset: 0
	// Line 20, Address: 0x101cecc, Func Offset: 0xc
	// Line 22, Address: 0x101cef8, Func Offset: 0x38
	// Line 23, Address: 0x101cf34, Func Offset: 0x74
	// Line 24, Address: 0x101cf40, Func Offset: 0x80
	// Func End, Address: 0x101cf50, Func Offset: 0x90
}

// 
// Start address: 0x101cf50
void m_init(_anon0* megamiwk)
{
	// Line 28, Address: 0x101cf50, Func Offset: 0
	// Line 29, Address: 0x101cf5c, Func Offset: 0xc
	// Line 30, Address: 0x101cf6c, Func Offset: 0x1c
	// Line 31, Address: 0x101cf7c, Func Offset: 0x2c
	// Line 32, Address: 0x101cf88, Func Offset: 0x38
	// Line 33, Address: 0x101cf94, Func Offset: 0x44
	// Func End, Address: 0x101cfa4, Func Offset: 0x54
}

// 
// Start address: 0x101cfb0
void m_move0(_anon0* megamiwk)
{
	short cal_position;
	// Line 36, Address: 0x101cfb0, Func Offset: 0
	// Line 39, Address: 0x101cfbc, Func Offset: 0xc
	// Line 40, Address: 0x101cff4, Func Offset: 0x44
	// Line 41, Address: 0x101d020, Func Offset: 0x70
	// Line 42, Address: 0x101d058, Func Offset: 0xa8
	// Line 44, Address: 0x101d084, Func Offset: 0xd4
	// Line 45, Address: 0x101d094, Func Offset: 0xe4
	// Func End, Address: 0x101d0a4, Func Offset: 0xf4
}

// 
// Start address: 0x101d0b0
void m_move1(_anon0* megamiwk)
{
	// Line 48, Address: 0x101d0b0, Func Offset: 0
	// Line 49, Address: 0x101d0bc, Func Offset: 0xc
	// Line 50, Address: 0x101d0e8, Func Offset: 0x38
	// Line 51, Address: 0x101d0f4, Func Offset: 0x44
	// Line 52, Address: 0x101d120, Func Offset: 0x70
	// Line 53, Address: 0x101d134, Func Offset: 0x84
	// Line 54, Address: 0x101d144, Func Offset: 0x94
	// Func End, Address: 0x101d154, Func Offset: 0xa4
}

// 
// Start address: 0x101d160
void m_move2(_anon0* megamiwk)
{
	// Line 57, Address: 0x101d160, Func Offset: 0
	// Line 58, Address: 0x101d168, Func Offset: 0x8
	// Line 59, Address: 0x101d178, Func Offset: 0x18
	// Func End, Address: 0x101d184, Func Offset: 0x24
}

// 
// Start address: 0x101d190
void ring_set(_anon0* megamiwk)
{
	short random_data;
	_anon0* new_actwk;
	short tbl[8];
	// Line 62, Address: 0x101d190, Func Offset: 0
	// Line 65, Address: 0x101d1a0, Func Offset: 0x10
	// Line 67, Address: 0x101d1d4, Func Offset: 0x44
	// Line 68, Address: 0x101d1e8, Func Offset: 0x58
	// Line 69, Address: 0x101d1f4, Func Offset: 0x64
	// Line 70, Address: 0x101d204, Func Offset: 0x74
	// Line 71, Address: 0x101d210, Func Offset: 0x80
	// Line 72, Address: 0x101d228, Func Offset: 0x98
	// Line 73, Address: 0x101d24c, Func Offset: 0xbc
	// Line 74, Address: 0x101d270, Func Offset: 0xe0
	// Line 75, Address: 0x101d280, Func Offset: 0xf0
	// Line 76, Address: 0x101d28c, Func Offset: 0xfc
	// Line 77, Address: 0x101d298, Func Offset: 0x108
	// Line 78, Address: 0x101d2a4, Func Offset: 0x114
	// Line 79, Address: 0x101d2b0, Func Offset: 0x120
	// Line 80, Address: 0x101d2c8, Func Offset: 0x138
	// Line 81, Address: 0x101d2d4, Func Offset: 0x144
	// Line 82, Address: 0x101d2e0, Func Offset: 0x150
	// Line 83, Address: 0x101d2fc, Func Offset: 0x16c
	// Line 84, Address: 0x101d318, Func Offset: 0x188
	// Func End, Address: 0x101d32c, Func Offset: 0x19c
}

// 
// Start address: 0x101d330
void gas(_anon0* gaswk)
{
	void(*tbl)(_anon0*)[7];
	// Line 124, Address: 0x101d330, Func Offset: 0
	// Line 125, Address: 0x101d33c, Func Offset: 0xc
	// Line 134, Address: 0x101d368, Func Offset: 0x38
	// Line 135, Address: 0x101d3a4, Func Offset: 0x74
	// Line 136, Address: 0x101d3b0, Func Offset: 0x80
	// Line 137, Address: 0x101d3bc, Func Offset: 0x8c
	// Func End, Address: 0x101d3cc, Func Offset: 0x9c
}

// 
// Start address: 0x101d3d0
void gas_init(_anon0* gaswk)
{
	// Line 140, Address: 0x101d3d0, Func Offset: 0
	// Line 141, Address: 0x101d3dc, Func Offset: 0xc
	// Line 143, Address: 0x101d3ec, Func Offset: 0x1c
	// Line 144, Address: 0x101d3fc, Func Offset: 0x2c
	// Line 145, Address: 0x101d408, Func Offset: 0x38
	// Line 146, Address: 0x101d418, Func Offset: 0x48
	// Line 147, Address: 0x101d424, Func Offset: 0x54
	// Func End, Address: 0x101d434, Func Offset: 0x64
}

// 
// Start address: 0x101d440
void gas_move0(_anon0* gaswk)
{
	_anon0* new_actwk;
	_anon0** parent;
	// Line 150, Address: 0x101d440, Func Offset: 0
	// Line 153, Address: 0x101d450, Func Offset: 0x10
	// Line 154, Address: 0x101d464, Func Offset: 0x24
	// Line 155, Address: 0x101d484, Func Offset: 0x44
	// Line 156, Address: 0x101d498, Func Offset: 0x58
	// Line 158, Address: 0x101d4a0, Func Offset: 0x60
	// Line 159, Address: 0x101d4a8, Func Offset: 0x68
	// Line 160, Address: 0x101d4b4, Func Offset: 0x74
	// Line 161, Address: 0x101d4c0, Func Offset: 0x80
	// Line 162, Address: 0x101d4d0, Func Offset: 0x90
	// Line 163, Address: 0x101d4e0, Func Offset: 0xa0
	// Line 164, Address: 0x101d4f0, Func Offset: 0xb0
	// Line 165, Address: 0x101d500, Func Offset: 0xc0
	// Line 166, Address: 0x101d524, Func Offset: 0xe4
	// Line 167, Address: 0x101d530, Func Offset: 0xf0
	// Func End, Address: 0x101d544, Func Offset: 0x104
}

// 
// Start address: 0x101d550
void gas_move1(_anon0* gaswk)
{
	// Line 170, Address: 0x101d550, Func Offset: 0
	// Line 171, Address: 0x101d55c, Func Offset: 0xc
	// Line 172, Address: 0x101d568, Func Offset: 0x18
	// Line 173, Address: 0x101d57c, Func Offset: 0x2c
	// Func End, Address: 0x101d58c, Func Offset: 0x3c
}

// 
// Start address: 0x101d590
void gas_move2(_anon0* gaswk)
{
	_anon0** parent;
	_anon0* new_actwk;
	// Line 176, Address: 0x101d590, Func Offset: 0
	// Line 179, Address: 0x101d5a4, Func Offset: 0x14
	// Line 180, Address: 0x101d5ac, Func Offset: 0x1c
	// Line 181, Address: 0x101d5b0, Func Offset: 0x20
	// Line 182, Address: 0x101d5b8, Func Offset: 0x28
	// Line 183, Address: 0x101d5c4, Func Offset: 0x34
	// Func End, Address: 0x101d5dc, Func Offset: 0x4c
}

// 
// Start address: 0x101d5e0
void gas_move3(_anon0* gaswk)
{
	short collision_data;
	_anon0** parent;
	_anon0* new_actwk;
	// Line 186, Address: 0x101d5e0, Func Offset: 0
	// Line 190, Address: 0x101d5f8, Func Offset: 0x18
	// Line 191, Address: 0x101d608, Func Offset: 0x28
	// Line 192, Address: 0x101d62c, Func Offset: 0x4c
	// Line 193, Address: 0x101d658, Func Offset: 0x78
	// Line 194, Address: 0x101d664, Func Offset: 0x84
	// Line 195, Address: 0x101d670, Func Offset: 0x90
	// Line 196, Address: 0x101d680, Func Offset: 0xa0
	// Line 198, Address: 0x101d690, Func Offset: 0xb0
	// Line 199, Address: 0x101d698, Func Offset: 0xb8
	// Line 200, Address: 0x101d69c, Func Offset: 0xbc
	// Line 201, Address: 0x101d6a8, Func Offset: 0xc8
	// Func End, Address: 0x101d6c4, Func Offset: 0xe4
}

// 
// Start address: 0x101d6d0
void gas_move4(_anon0* gaswk)
{
	_anon0** parent;
	_anon0* new_actwk;
	// Line 204, Address: 0x101d6d0, Func Offset: 0
	// Line 207, Address: 0x101d6e4, Func Offset: 0x14
	// Line 208, Address: 0x101d6ec, Func Offset: 0x1c
	// Line 209, Address: 0x101d6f0, Func Offset: 0x20
	// Line 210, Address: 0x101d704, Func Offset: 0x34
	// Line 211, Address: 0x101d714, Func Offset: 0x44
	// Line 212, Address: 0x101d72c, Func Offset: 0x5c
	// Line 213, Address: 0x101d738, Func Offset: 0x68
	// Line 214, Address: 0x101d740, Func Offset: 0x70
	// Line 215, Address: 0x101d748, Func Offset: 0x78
	// Line 216, Address: 0x101d750, Func Offset: 0x80
	// Line 217, Address: 0x101d75c, Func Offset: 0x8c
	// Line 218, Address: 0x101d768, Func Offset: 0x98
	// Line 219, Address: 0x101d774, Func Offset: 0xa4
	// Line 220, Address: 0x101d77c, Func Offset: 0xac
	// Line 221, Address: 0x101d788, Func Offset: 0xb8
	// Line 223, Address: 0x101d790, Func Offset: 0xc0
	// Line 224, Address: 0x101d79c, Func Offset: 0xcc
	// Line 226, Address: 0x101d7ac, Func Offset: 0xdc
	// Line 227, Address: 0x101d7bc, Func Offset: 0xec
	// Line 228, Address: 0x101d7c8, Func Offset: 0xf8
	// Line 229, Address: 0x101d7d4, Func Offset: 0x104
	// Line 230, Address: 0x101d7e0, Func Offset: 0x110
	// Line 232, Address: 0x101d7ec, Func Offset: 0x11c
	// Func End, Address: 0x101d804, Func Offset: 0x134
}

// 
// Start address: 0x101d810
void gas_move5(_anon0* gaswk)
{
	char* tbl[3];
	// Line 253, Address: 0x101d810, Func Offset: 0
	// Line 254, Address: 0x101d81c, Func Offset: 0xc
	// Line 256, Address: 0x101d840, Func Offset: 0x30
	// Line 257, Address: 0x101d860, Func Offset: 0x50
	// Line 258, Address: 0x101d88c, Func Offset: 0x7c
	// Line 259, Address: 0x101d8b4, Func Offset: 0xa4
	// Line 260, Address: 0x101d8c0, Func Offset: 0xb0
	// Line 262, Address: 0x101d8c8, Func Offset: 0xb8
	// Line 263, Address: 0x101d8e0, Func Offset: 0xd0
	// Line 264, Address: 0x101d8f8, Func Offset: 0xe8
	// Func End, Address: 0x101d908, Func Offset: 0xf8
}

// 
// Start address: 0x101d910
void ice_sub_set(_anon0* gaswk)
{
	// Line 276, Address: 0x101d910, Func Offset: 0
	// Line 277, Address: 0x101d91c, Func Offset: 0xc
	// Line 278, Address: 0x101d934, Func Offset: 0x24
	// Func End, Address: 0x101d944, Func Offset: 0x34
}

// 
// Start address: 0x101d950
void ice_sub0(_anon0* gaswk, char* tbl, short loop)
{
	short i;
	short index;
	_anon0* new_actwk;
	// Line 281, Address: 0x101d950, Func Offset: 0
	// Line 285, Address: 0x101d96c, Func Offset: 0x1c
	// Line 286, Address: 0x101d970, Func Offset: 0x20
	// Line 287, Address: 0x101d97c, Func Offset: 0x2c
	// Line 288, Address: 0x101d990, Func Offset: 0x40
	// Line 289, Address: 0x101d99c, Func Offset: 0x4c
	// Line 290, Address: 0x101d9a8, Func Offset: 0x58
	// Line 291, Address: 0x101d9b8, Func Offset: 0x68
	// Line 292, Address: 0x101d9c8, Func Offset: 0x78
	// Line 294, Address: 0x101d9d8, Func Offset: 0x88
	// Line 295, Address: 0x101d9e8, Func Offset: 0x98
	// Line 296, Address: 0x101da14, Func Offset: 0xc4
	// Line 297, Address: 0x101da44, Func Offset: 0xf4
	// Line 298, Address: 0x101da64, Func Offset: 0x114
	// Line 299, Address: 0x101da84, Func Offset: 0x134
	// Line 300, Address: 0x101dab0, Func Offset: 0x160
	// Line 301, Address: 0x101dad8, Func Offset: 0x188
	// Line 302, Address: 0x101db00, Func Offset: 0x1b0
	// Line 303, Address: 0x101db20, Func Offset: 0x1d0
	// Line 304, Address: 0x101db2c, Func Offset: 0x1dc
	// Line 305, Address: 0x101db58, Func Offset: 0x208
	// Func End, Address: 0x101db70, Func Offset: 0x220
}

// 
// Start address: 0x101db70
void ice_set(_anon0* plwk)
{
	_anon0* new_actwk;
	_anon0** parent;
	// Line 309, Address: 0x101db70, Func Offset: 0
	// Line 312, Address: 0x101db80, Func Offset: 0x10
	// Line 313, Address: 0x101db94, Func Offset: 0x24
	// Line 314, Address: 0x101dba4, Func Offset: 0x34
	// Line 315, Address: 0x101dbac, Func Offset: 0x3c
	// Line 316, Address: 0x101dbb4, Func Offset: 0x44
	// Line 317, Address: 0x101dbc0, Func Offset: 0x50
	// Line 318, Address: 0x101dbd0, Func Offset: 0x60
	// Line 319, Address: 0x101dbe0, Func Offset: 0x70
	// Line 321, Address: 0x101dbf0, Func Offset: 0x80
	// Line 322, Address: 0x101dc00, Func Offset: 0x90
	// Line 323, Address: 0x101dc24, Func Offset: 0xb4
	// Line 324, Address: 0x101dc30, Func Offset: 0xc0
	// Line 325, Address: 0x101dc3c, Func Offset: 0xcc
	// Func End, Address: 0x101dc50, Func Offset: 0xe0
}

// 
// Start address: 0x101dc50
void gas_coli(_anon0* gaswk)
{
	// Line 329, Address: 0x101dc50, Func Offset: 0
	// Line 330, Address: 0x101dc5c, Func Offset: 0xc
	// Line 331, Address: 0x101dc78, Func Offset: 0x28
	// Line 332, Address: 0x101dc94, Func Offset: 0x44
	// Line 333, Address: 0x101dcc0, Func Offset: 0x70
	// Func End, Address: 0x101dcd0, Func Offset: 0x80
}

// 
// Start address: 0x101dcd0
short gas_coli_colig(_anon0* gaswk, _anon0* plwk)
{
	short cal_posi;
	short cal_size;
	// Line 336, Address: 0x101dcd0, Func Offset: 0
	// Line 339, Address: 0x101dce4, Func Offset: 0x14
	// Line 340, Address: 0x101dd00, Func Offset: 0x30
	// Line 341, Address: 0x101dd1c, Func Offset: 0x4c
	// Line 342, Address: 0x101dd40, Func Offset: 0x70
	// Line 343, Address: 0x101dd5c, Func Offset: 0x8c
	// Line 345, Address: 0x101ddcc, Func Offset: 0xfc
	// Line 346, Address: 0x101de08, Func Offset: 0x138
	// Line 348, Address: 0x101de78, Func Offset: 0x1a8
	// Line 349, Address: 0x101deb4, Func Offset: 0x1e4
	// Line 350, Address: 0x101deb8, Func Offset: 0x1e8
	// Func End, Address: 0x101decc, Func Offset: 0x1fc
}

// 
// Start address: 0x101ded0
void catapalt(_anon0* catawk)
{
	void(*tbl)(_anon0*)[5];
	// Line 359, Address: 0x101ded0, Func Offset: 0
	// Line 360, Address: 0x101dedc, Func Offset: 0xc
	// Line 363, Address: 0x101df08, Func Offset: 0x38
	// Line 364, Address: 0x101df44, Func Offset: 0x74
	// Line 365, Address: 0x101df50, Func Offset: 0x80
	// Line 366, Address: 0x101df5c, Func Offset: 0x8c
	// Func End, Address: 0x101df6c, Func Offset: 0x9c
}

// 
// Start address: 0x101df70
void cata_init(_anon0* catawk)
{
	_anon0* new_actwk;
	_anon0** parent;
	// Line 370, Address: 0x101df70, Func Offset: 0
	// Line 373, Address: 0x101df80, Func Offset: 0x10
	// Line 375, Address: 0x101df90, Func Offset: 0x20
	// Line 376, Address: 0x101dfa0, Func Offset: 0x30
	// Line 377, Address: 0x101dfb0, Func Offset: 0x40
	// Line 378, Address: 0x101dfc8, Func Offset: 0x58
	// Line 379, Address: 0x101dfd4, Func Offset: 0x64
	// Line 380, Address: 0x101dfe4, Func Offset: 0x74
	// Line 381, Address: 0x101dffc, Func Offset: 0x8c
	// Line 382, Address: 0x101e008, Func Offset: 0x98
	// Line 384, Address: 0x101e018, Func Offset: 0xa8
	// Line 385, Address: 0x101e028, Func Offset: 0xb8
	// Line 386, Address: 0x101e034, Func Offset: 0xc4
	// Line 387, Address: 0x101e040, Func Offset: 0xd0
	// Line 388, Address: 0x101e04c, Func Offset: 0xdc
	// Line 389, Address: 0x101e054, Func Offset: 0xe4
	// Line 390, Address: 0x101e05c, Func Offset: 0xec
	// Line 391, Address: 0x101e068, Func Offset: 0xf8
	// Line 392, Address: 0x101e074, Func Offset: 0x104
	// Func End, Address: 0x101e088, Func Offset: 0x118
}

// 
// Start address: 0x101e090
void cata_wait(_anon0* catawk)
{
	// Line 395, Address: 0x101e090, Func Offset: 0
	// Line 396, Address: 0x101e09c, Func Offset: 0xc
	// Line 397, Address: 0x101e0c0, Func Offset: 0x30
	// Line 398, Address: 0x101e0d4, Func Offset: 0x44
	// Line 399, Address: 0x101e0e4, Func Offset: 0x54
	// Line 400, Address: 0x101e0f8, Func Offset: 0x68
	// Line 401, Address: 0x101e104, Func Offset: 0x74
	// Line 402, Address: 0x101e114, Func Offset: 0x84
	// Line 403, Address: 0x101e120, Func Offset: 0x90
	// Func End, Address: 0x101e130, Func Offset: 0xa0
}

// 
// Start address: 0x101e130
void cata_move0(_anon0* catawk)
{
	short cal_position;
	// Line 406, Address: 0x101e130, Func Offset: 0
	// Line 409, Address: 0x101e140, Func Offset: 0x10
	// Line 410, Address: 0x101e164, Func Offset: 0x34
	// Line 411, Address: 0x101e178, Func Offset: 0x48
	// Line 414, Address: 0x101e1a8, Func Offset: 0x78
	// Line 416, Address: 0x101e1bc, Func Offset: 0x8c
	// Line 417, Address: 0x101e1c8, Func Offset: 0x98
	// Line 418, Address: 0x101e1d8, Func Offset: 0xa8
	// Line 419, Address: 0x101e1e4, Func Offset: 0xb4
	// Line 420, Address: 0x101e1f0, Func Offset: 0xc0
	// Line 421, Address: 0x101e204, Func Offset: 0xd4
	// Line 422, Address: 0x101e218, Func Offset: 0xe8
	// Line 424, Address: 0x101e22c, Func Offset: 0xfc
	// Line 425, Address: 0x101e240, Func Offset: 0x110
	// Line 426, Address: 0x101e24c, Func Offset: 0x11c
	// Line 428, Address: 0x101e258, Func Offset: 0x128
	// Line 429, Address: 0x101e27c, Func Offset: 0x14c
	// Line 430, Address: 0x101e2a0, Func Offset: 0x170
	// Line 431, Address: 0x101e2a8, Func Offset: 0x178
	// Line 432, Address: 0x101e2b8, Func Offset: 0x188
	// Line 433, Address: 0x101e2d0, Func Offset: 0x1a0
	// Line 434, Address: 0x101e2e4, Func Offset: 0x1b4
	// Line 435, Address: 0x101e2f4, Func Offset: 0x1c4
	// Line 436, Address: 0x101e2fc, Func Offset: 0x1cc
	// Line 437, Address: 0x101e310, Func Offset: 0x1e0
	// Line 438, Address: 0x101e324, Func Offset: 0x1f4
	// Func End, Address: 0x101e338, Func Offset: 0x208
}

// 
// Start address: 0x101e340
void cata_move1(_anon0* catawk)
{
	short cal_position;
	// Line 441, Address: 0x101e340, Func Offset: 0
	// Line 444, Address: 0x101e34c, Func Offset: 0xc
	// Line 445, Address: 0x101e35c, Func Offset: 0x1c
	// Line 446, Address: 0x101e36c, Func Offset: 0x2c
	// Line 447, Address: 0x101e390, Func Offset: 0x50
	// Line 448, Address: 0x101e398, Func Offset: 0x58
	// Line 449, Address: 0x101e3a4, Func Offset: 0x64
	// Func End, Address: 0x101e3b4, Func Offset: 0x74
}

// 
// Start address: 0x101e3c0
void cata_move2(_anon0* catawk)
{
	_anon0* new_actwk;
	_anon0** parent;
	// Line 452, Address: 0x101e3c0, Func Offset: 0
	// Line 455, Address: 0x101e3d4, Func Offset: 0x14
	// Line 456, Address: 0x101e3dc, Func Offset: 0x1c
	// Line 457, Address: 0x101e3e0, Func Offset: 0x20
	// Line 458, Address: 0x101e3f4, Func Offset: 0x34
	// Line 459, Address: 0x101e414, Func Offset: 0x54
	// Line 460, Address: 0x101e434, Func Offset: 0x74
	// Line 461, Address: 0x101e448, Func Offset: 0x88
	// Func End, Address: 0x101e460, Func Offset: 0xa0
}

// 
// Start address: 0x101e460
void shooter(_anon0* shootwk)
{
	short flag_no;
	short addition;
	// Line 676, Address: 0x101e460, Func Offset: 0
	// Line 679, Address: 0x101e474, Func Offset: 0x14
	// Line 680, Address: 0x101e48c, Func Offset: 0x2c
	// Line 681, Address: 0x101e4b8, Func Offset: 0x58
	// Line 682, Address: 0x101e4c8, Func Offset: 0x68
	// Line 683, Address: 0x101e514, Func Offset: 0xb4
	// Line 684, Address: 0x101e530, Func Offset: 0xd0
	// Line 685, Address: 0x101e550, Func Offset: 0xf0
	// Line 687, Address: 0x101e57c, Func Offset: 0x11c
	// Line 688, Address: 0x101e598, Func Offset: 0x138
	// Line 689, Address: 0x101e5b0, Func Offset: 0x150
	// Line 690, Address: 0x101e5b8, Func Offset: 0x158
	// Line 692, Address: 0x101e5f8, Func Offset: 0x198
	// Line 693, Address: 0x101e604, Func Offset: 0x1a4
	// Line 695, Address: 0x101e60c, Func Offset: 0x1ac
	// Line 696, Address: 0x101e618, Func Offset: 0x1b8
	// Line 698, Address: 0x101e620, Func Offset: 0x1c0
	// Line 699, Address: 0x101e62c, Func Offset: 0x1cc
	// Line 701, Address: 0x101e634, Func Offset: 0x1d4
	// Line 706, Address: 0x101e640, Func Offset: 0x1e0
	// Line 708, Address: 0x101e650, Func Offset: 0x1f0
	// Func End, Address: 0x101e668, Func Offset: 0x208
}

// 
// Start address: 0x101e670
void shooterinit(_anon0* shootwk)
{
	unsigned short** move;
	unsigned short* movetbl;
	// Line 711, Address: 0x101e670, Func Offset: 0
	// Line 715, Address: 0x101e684, Func Offset: 0x14
	// Line 716, Address: 0x101e694, Func Offset: 0x24
	// Line 717, Address: 0x101e6a0, Func Offset: 0x30
	// Line 718, Address: 0x101e6ac, Func Offset: 0x3c
	// Line 721, Address: 0x101e6b8, Func Offset: 0x48
	// Line 722, Address: 0x101e6c8, Func Offset: 0x58
	// Line 723, Address: 0x101e6f0, Func Offset: 0x80
	// Line 724, Address: 0x101e708, Func Offset: 0x98
	// Line 725, Address: 0x101e720, Func Offset: 0xb0
	// Line 726, Address: 0x101e728, Func Offset: 0xb8
	// Line 727, Address: 0x101e730, Func Offset: 0xc0
	// Line 728, Address: 0x101e73c, Func Offset: 0xcc
	// Line 729, Address: 0x101e748, Func Offset: 0xd8
	// Line 730, Address: 0x101e754, Func Offset: 0xe4
	// Func End, Address: 0x101e76c, Func Offset: 0xfc
}

// 
// Start address: 0x101e770
void shootermove(_anon0* shootwk)
{
	short cal_position;
	// Line 733, Address: 0x101e770, Func Offset: 0
	// Line 736, Address: 0x101e780, Func Offset: 0x10
	// Line 737, Address: 0x101e798, Func Offset: 0x28
	// Line 738, Address: 0x101e7d0, Func Offset: 0x60
	// Line 739, Address: 0x101e7fc, Func Offset: 0x8c
	// Line 740, Address: 0x101e834, Func Offset: 0xc4
	// Line 741, Address: 0x101e860, Func Offset: 0xf0
	// Line 742, Address: 0x101e874, Func Offset: 0x104
	// Line 743, Address: 0x101e88c, Func Offset: 0x11c
	// Line 744, Address: 0x101e8a0, Func Offset: 0x130
	// Line 746, Address: 0x101e8ac, Func Offset: 0x13c
	// Line 747, Address: 0x101e8bc, Func Offset: 0x14c
	// Line 748, Address: 0x101e8c8, Func Offset: 0x158
	// Line 749, Address: 0x101e8f4, Func Offset: 0x184
	// Line 750, Address: 0x101e900, Func Offset: 0x190
	// Line 751, Address: 0x101e90c, Func Offset: 0x19c
	// Line 752, Address: 0x101e940, Func Offset: 0x1d0
	// Line 753, Address: 0x101e954, Func Offset: 0x1e4
	// Line 754, Address: 0x101e980, Func Offset: 0x210
	// Line 755, Address: 0x101e998, Func Offset: 0x228
	// Line 756, Address: 0x101e9a8, Func Offset: 0x238
	// Line 757, Address: 0x101e9bc, Func Offset: 0x24c
	// Line 758, Address: 0x101e9d0, Func Offset: 0x260
	// Line 759, Address: 0x101e9e0, Func Offset: 0x270
	// Line 760, Address: 0x101e9f0, Func Offset: 0x280
	// Line 761, Address: 0x101e9f8, Func Offset: 0x288
	// Line 762, Address: 0x101ea04, Func Offset: 0x294
	// Func End, Address: 0x101ea18, Func Offset: 0x2a8
}

// 
// Start address: 0x101ea20
void shootermove2(_anon0* shootwk)
{
	// Line 765, Address: 0x101ea20, Func Offset: 0
	// Line 766, Address: 0x101ea2c, Func Offset: 0xc
	// Line 767, Address: 0x101ea38, Func Offset: 0x18
	// Line 768, Address: 0x101ea44, Func Offset: 0x24
	// Line 769, Address: 0x101ea54, Func Offset: 0x34
	// Line 770, Address: 0x101ea60, Func Offset: 0x40
	// Func End, Address: 0x101ea70, Func Offset: 0x50
}

// 
// Start address: 0x101ea70
void shootermove3(_anon0* shootwk)
{
	unsigned char move_counter;
	short movetbl_data;
	unsigned short** move;
	unsigned short* movetbl;
	// Line 773, Address: 0x101ea70, Func Offset: 0
	// Line 779, Address: 0x101ea8c, Func Offset: 0x1c
	// Line 780, Address: 0x101ea98, Func Offset: 0x28
	// Line 781, Address: 0x101eaa4, Func Offset: 0x34
	// Line 782, Address: 0x101ead0, Func Offset: 0x60
	// Line 784, Address: 0x101eb04, Func Offset: 0x94
	// Line 786, Address: 0x101eb38, Func Offset: 0xc8
	// Line 787, Address: 0x101eb50, Func Offset: 0xe0
	// Line 789, Address: 0x101eb6c, Func Offset: 0xfc
	// Line 791, Address: 0x101eb74, Func Offset: 0x104
	// Line 792, Address: 0x101eb7c, Func Offset: 0x10c
	// Line 793, Address: 0x101eb80, Func Offset: 0x110
	// Line 794, Address: 0x101ebb0, Func Offset: 0x140
	// Line 795, Address: 0x101ebe4, Func Offset: 0x174
	// Line 796, Address: 0x101ebf0, Func Offset: 0x180
	// Line 799, Address: 0x101ebf8, Func Offset: 0x188
	// Line 800, Address: 0x101ec20, Func Offset: 0x1b0
	// Line 801, Address: 0x101ec48, Func Offset: 0x1d8
	// Line 802, Address: 0x101ec50, Func Offset: 0x1e0
	// Line 803, Address: 0x101ec54, Func Offset: 0x1e4
	// Line 804, Address: 0x101ec90, Func Offset: 0x220
	// Line 805, Address: 0x101eca0, Func Offset: 0x230
	// Line 806, Address: 0x101ecb8, Func Offset: 0x248
	// Line 807, Address: 0x101ecc4, Func Offset: 0x254
	// Line 808, Address: 0x101eccc, Func Offset: 0x25c
	// Line 809, Address: 0x101ecf4, Func Offset: 0x284
	// Line 810, Address: 0x101ecfc, Func Offset: 0x28c
	// Line 814, Address: 0x101ed04, Func Offset: 0x294
	// Line 815, Address: 0x101ed18, Func Offset: 0x2a8
	// Line 816, Address: 0x101ed20, Func Offset: 0x2b0
	// Line 817, Address: 0x101ed28, Func Offset: 0x2b8
	// Func End, Address: 0x101ed48, Func Offset: 0x2d8
}

// 
// Start address: 0x101ed50
void shooterspdset(_anon0* shootwk)
{
	short ms_work0;
	short ms_work1;
	short cal_position_x;
	short cal_position_y;
	int cal_long_x;
	int cal_long_y;
	// Line 820, Address: 0x101ed50, Func Offset: 0
	// Line 824, Address: 0x101ed70, Func Offset: 0x20
	// Line 825, Address: 0x101ed88, Func Offset: 0x38
	// Line 827, Address: 0x101edbc, Func Offset: 0x6c
	// Line 828, Address: 0x101edd0, Func Offset: 0x80
	// Line 829, Address: 0x101ede0, Func Offset: 0x90
	// Line 830, Address: 0x101edfc, Func Offset: 0xac
	// Line 832, Address: 0x101ee18, Func Offset: 0xc8
	// Line 834, Address: 0x101ee4c, Func Offset: 0xfc
	// Line 835, Address: 0x101ee60, Func Offset: 0x110
	// Line 836, Address: 0x101ee70, Func Offset: 0x120
	// Line 837, Address: 0x101ee8c, Func Offset: 0x13c
	// Line 839, Address: 0x101eea8, Func Offset: 0x158
	// Line 841, Address: 0x101eec4, Func Offset: 0x174
	// Line 843, Address: 0x101eef8, Func Offset: 0x1a8
	// Line 844, Address: 0x101ef0c, Func Offset: 0x1bc
	// Line 845, Address: 0x101ef18, Func Offset: 0x1c8
	// Line 847, Address: 0x101ef34, Func Offset: 0x1e4
	// Line 849, Address: 0x101ef68, Func Offset: 0x218
	// Line 850, Address: 0x101ef7c, Func Offset: 0x22c
	// Line 851, Address: 0x101ef88, Func Offset: 0x238
	// Line 853, Address: 0x101efa4, Func Offset: 0x254
	// Line 854, Address: 0x101efb4, Func Offset: 0x264
	// Line 855, Address: 0x101efbc, Func Offset: 0x26c
	// Line 856, Address: 0x101efc8, Func Offset: 0x278
	// Line 857, Address: 0x101efd8, Func Offset: 0x288
	// Line 858, Address: 0x101efe8, Func Offset: 0x298
	// Line 862, Address: 0x101eff0, Func Offset: 0x2a0
	// Line 864, Address: 0x101f024, Func Offset: 0x2d4
	// Line 865, Address: 0x101f038, Func Offset: 0x2e8
	// Line 866, Address: 0x101f044, Func Offset: 0x2f4
	// Line 868, Address: 0x101f060, Func Offset: 0x310
	// Line 870, Address: 0x101f094, Func Offset: 0x344
	// Line 871, Address: 0x101f0a8, Func Offset: 0x358
	// Line 872, Address: 0x101f0b4, Func Offset: 0x364
	// Line 874, Address: 0x101f0d0, Func Offset: 0x380
	// Line 875, Address: 0x101f0e0, Func Offset: 0x390
	// Line 876, Address: 0x101f0e8, Func Offset: 0x398
	// Line 877, Address: 0x101f0f4, Func Offset: 0x3a4
	// Line 878, Address: 0x101f104, Func Offset: 0x3b4
	// Line 879, Address: 0x101f114, Func Offset: 0x3c4
	// Func End, Address: 0x101f138, Func Offset: 0x3e8
}

