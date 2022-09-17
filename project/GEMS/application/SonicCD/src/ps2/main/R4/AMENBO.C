typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_5)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[2];
typedef unsigned char* type_3[1];
typedef unsigned char type_4[4];
typedef void(*type_6)(_anon1*)[5];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon0* type_9[4];
typedef _anon1 type_10[128];
typedef unsigned char type_11[4];
typedef unsigned char* type_12[2];
typedef unsigned char type_13[4];

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

unsigned char pchg_b0[4];
unsigned char pchg_e0[4];
unsigned char pchg_e1[4];
unsigned char* pchg_b[1];
unsigned char* pchg_e[2];
_anon0 spr_amenbo_b_00;
_anon0 spr_amenbo_b_01;
_anon0 spr_amenbo_e_00;
_anon0 spr_amenbo_e_01;
_anon0 spr_amenbo_e_02;
_anon0 spr_amenbo_e_03;
_anon0* pat_amenbo_b[2];
_anon0* pat_amenbo_e[4];
short waterposi;
_anon1 actwk[128];

void amenbo(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_accel(_anon1* pActwk);
void act_decel(_anon1* pActwk);
void act_stop(_anon1* pActwk);
void act_stop1(_anon1* pActwk);
void act_move0(_anon1* pActwk);
void act_tama(_anon1* pActwk);
int act_check(_anon1* pActwk);

// 
// Start address: 0x101e950
void amenbo(_anon1* pActwk)
{
	void(*act_tbl)(_anon1*)[5];
	// Line 177, Address: 0x101e950, Func Offset: 0
	// Line 187, Address: 0x101e95c, Func Offset: 0xc
	// Line 190, Address: 0x101e974, Func Offset: 0x24
	// Line 191, Address: 0x101e98c, Func Offset: 0x3c
	// Line 192, Address: 0x101e99c, Func Offset: 0x4c
	// Line 194, Address: 0x101e9b8, Func Offset: 0x68
	// Line 195, Address: 0x101e9cc, Func Offset: 0x7c
	// Line 196, Address: 0x101e9d8, Func Offset: 0x88
	// Line 197, Address: 0x101e9e4, Func Offset: 0x94
	// Line 199, Address: 0x101e9ec, Func Offset: 0x9c
	// Line 200, Address: 0x101ea00, Func Offset: 0xb0
	// Line 201, Address: 0x101ea44, Func Offset: 0xf4
	// Line 202, Address: 0x101ea50, Func Offset: 0x100
	// Line 203, Address: 0x101ea5c, Func Offset: 0x10c
	// Func End, Address: 0x101ea6c, Func Offset: 0x11c
}

// 
// Start address: 0x101ea70
void act_init(_anon1* pActwk)
{
	// Line 207, Address: 0x101ea70, Func Offset: 0
	// Line 208, Address: 0x101ea7c, Func Offset: 0xc
	// Line 209, Address: 0x101ea8c, Func Offset: 0x1c
	// Line 210, Address: 0x101ea9c, Func Offset: 0x2c
	// Line 211, Address: 0x101eaa8, Func Offset: 0x38
	// Line 212, Address: 0x101eab4, Func Offset: 0x44
	// Line 213, Address: 0x101eac0, Func Offset: 0x50
	// Line 214, Address: 0x101eacc, Func Offset: 0x5c
	// Line 215, Address: 0x101ead8, Func Offset: 0x68
	// Line 216, Address: 0x101eae4, Func Offset: 0x74
	// Line 217, Address: 0x101eaf0, Func Offset: 0x80
	// Line 218, Address: 0x101eb00, Func Offset: 0x90
	// Line 220, Address: 0x101eb10, Func Offset: 0xa0
	// Line 221, Address: 0x101eb20, Func Offset: 0xb0
	// Line 222, Address: 0x101eb2c, Func Offset: 0xbc
	// Line 223, Address: 0x101eb38, Func Offset: 0xc8
	// Line 224, Address: 0x101eb44, Func Offset: 0xd4
	// Line 227, Address: 0x101eb4c, Func Offset: 0xdc
	// Line 228, Address: 0x101eb5c, Func Offset: 0xec
	// Line 229, Address: 0x101eb64, Func Offset: 0xf4
	// Line 230, Address: 0x101eb70, Func Offset: 0x100
	// Line 232, Address: 0x101eb7c, Func Offset: 0x10c
	// Line 233, Address: 0x101eb88, Func Offset: 0x118
	// Func End, Address: 0x101eb98, Func Offset: 0x128
}

// 
// Start address: 0x101eba0
void act_accel(_anon1* pActwk)
{
	int lD5;
	int lD6;
	// Line 237, Address: 0x101eba0, Func Offset: 0
	// Line 240, Address: 0x101ebb4, Func Offset: 0x14
	// Line 241, Address: 0x101ebc8, Func Offset: 0x28
	// Line 242, Address: 0x101ebd8, Func Offset: 0x38
	// Line 244, Address: 0x101ebe8, Func Offset: 0x48
	// Line 246, Address: 0x101ebf0, Func Offset: 0x50
	// Line 248, Address: 0x101ebfc, Func Offset: 0x5c
	// Line 250, Address: 0x101ec00, Func Offset: 0x60
	// Line 251, Address: 0x101ec10, Func Offset: 0x70
	// Line 252, Address: 0x101ec20, Func Offset: 0x80
	// Line 256, Address: 0x101ec28, Func Offset: 0x88
	// Line 257, Address: 0x101ec2c, Func Offset: 0x8c
	// Line 259, Address: 0x101ec38, Func Offset: 0x98
	// Line 261, Address: 0x101ec3c, Func Offset: 0x9c
	// Line 262, Address: 0x101ec4c, Func Offset: 0xac
	// Line 266, Address: 0x101ec5c, Func Offset: 0xbc
	// Line 267, Address: 0x101ec64, Func Offset: 0xc4
	// Line 268, Address: 0x101ec74, Func Offset: 0xd4
	// Line 270, Address: 0x101ec80, Func Offset: 0xe0
	// Line 271, Address: 0x101ec90, Func Offset: 0xf0
	// Line 273, Address: 0x101ecac, Func Offset: 0x10c
	// Line 274, Address: 0x101ecc0, Func Offset: 0x120
	// Line 275, Address: 0x101eccc, Func Offset: 0x12c
	// Func End, Address: 0x101ece4, Func Offset: 0x144
}

// 
// Start address: 0x101ecf0
void act_decel(_anon1* pActwk)
{
	int lD6;
	unsigned char temp0;
	unsigned char temp1;
	// Line 279, Address: 0x101ecf0, Func Offset: 0
	// Line 283, Address: 0x101ed08, Func Offset: 0x18
	// Line 284, Address: 0x101ed1c, Func Offset: 0x2c
	// Line 285, Address: 0x101ed28, Func Offset: 0x38
	// Line 286, Address: 0x101ed38, Func Offset: 0x48
	// Line 287, Address: 0x101ed40, Func Offset: 0x50
	// Line 288, Address: 0x101ed48, Func Offset: 0x58
	// Line 289, Address: 0x101ed50, Func Offset: 0x60
	// Line 291, Address: 0x101ed64, Func Offset: 0x74
	// Line 292, Address: 0x101ed74, Func Offset: 0x84
	// Line 293, Address: 0x101ed84, Func Offset: 0x94
	// Line 294, Address: 0x101ed88, Func Offset: 0x98
	// Line 295, Address: 0x101ed98, Func Offset: 0xa8
	// Line 297, Address: 0x101edac, Func Offset: 0xbc
	// Line 300, Address: 0x101edb8, Func Offset: 0xc8
	// Line 301, Address: 0x101edc0, Func Offset: 0xd0
	// Line 302, Address: 0x101edd0, Func Offset: 0xe0
	// Line 304, Address: 0x101eddc, Func Offset: 0xec
	// Line 305, Address: 0x101ede8, Func Offset: 0xf8
	// Func End, Address: 0x101ee04, Func Offset: 0x114
}

// 
// Start address: 0x101ee10
void act_stop(_anon1* pActwk)
{
	// Line 309, Address: 0x101ee10, Func Offset: 0
	// Line 310, Address: 0x101ee1c, Func Offset: 0xc
	// Line 311, Address: 0x101ee2c, Func Offset: 0x1c
	// Line 313, Address: 0x101ee44, Func Offset: 0x34
	// Line 314, Address: 0x101ee54, Func Offset: 0x44
	// Line 315, Address: 0x101ee64, Func Offset: 0x54
	// Line 316, Address: 0x101ee74, Func Offset: 0x64
	// Line 317, Address: 0x101ee84, Func Offset: 0x74
	// Line 319, Address: 0x101ee98, Func Offset: 0x88
	// Line 322, Address: 0x101eea4, Func Offset: 0x94
	// Line 323, Address: 0x101eeb4, Func Offset: 0xa4
	// Line 325, Address: 0x101eec0, Func Offset: 0xb0
	// Line 326, Address: 0x101eecc, Func Offset: 0xbc
	// Func End, Address: 0x101eedc, Func Offset: 0xcc
}

// 
// Start address: 0x101eee0
void act_stop1(_anon1* pActwk)
{
	// Line 330, Address: 0x101eee0, Func Offset: 0
	// Line 331, Address: 0x101eeec, Func Offset: 0xc
	// Line 332, Address: 0x101eefc, Func Offset: 0x1c
	// Line 333, Address: 0x101ef14, Func Offset: 0x34
	// Line 335, Address: 0x101ef20, Func Offset: 0x40
	// Line 336, Address: 0x101ef2c, Func Offset: 0x4c
	// Func End, Address: 0x101ef3c, Func Offset: 0x5c
}

// 
// Start address: 0x101ef40
void act_move0(_anon1* pActwk)
{
	// Line 340, Address: 0x101ef40, Func Offset: 0
	// Line 341, Address: 0x101ef48, Func Offset: 0x8
	// Line 342, Address: 0x101ef60, Func Offset: 0x20
	// Line 343, Address: 0x101ef84, Func Offset: 0x44
	// Func End, Address: 0x101ef90, Func Offset: 0x50
}

// 
// Start address: 0x101ef90
void act_tama(_anon1* pActwk)
{
	_anon1* subActwk;
	// Line 347, Address: 0x101ef90, Func Offset: 0
	// Line 350, Address: 0x101ef9c, Func Offset: 0xc
	// Line 351, Address: 0x101efac, Func Offset: 0x1c
	// Line 353, Address: 0x101efc4, Func Offset: 0x34
	// Line 354, Address: 0x101efd0, Func Offset: 0x40
	// Line 357, Address: 0x101efe4, Func Offset: 0x54
	// Line 359, Address: 0x101eff8, Func Offset: 0x68
	// Line 360, Address: 0x101f008, Func Offset: 0x78
	// Line 361, Address: 0x101f014, Func Offset: 0x84
	// Line 362, Address: 0x101f04c, Func Offset: 0xbc
	// Line 363, Address: 0x101f05c, Func Offset: 0xcc
	// Line 364, Address: 0x101f06c, Func Offset: 0xdc
	// Line 365, Address: 0x101f07c, Func Offset: 0xec
	// Line 366, Address: 0x101f098, Func Offset: 0x108
	// Line 367, Address: 0x101f0a8, Func Offset: 0x118
	// Line 368, Address: 0x101f0b4, Func Offset: 0x124
	// Line 369, Address: 0x101f0c0, Func Offset: 0x130
	// Line 370, Address: 0x101f0cc, Func Offset: 0x13c
	// Line 371, Address: 0x101f0d8, Func Offset: 0x148
	// Line 372, Address: 0x101f0e8, Func Offset: 0x158
	// Line 373, Address: 0x101f0f8, Func Offset: 0x168
	// Line 374, Address: 0x101f104, Func Offset: 0x174
	// Line 375, Address: 0x101f11c, Func Offset: 0x18c
	// Line 377, Address: 0x101f130, Func Offset: 0x1a0
	// Line 378, Address: 0x101f13c, Func Offset: 0x1ac
	// Line 379, Address: 0x101f15c, Func Offset: 0x1cc
	// Line 383, Address: 0x101f168, Func Offset: 0x1d8
	// Func End, Address: 0x101f178, Func Offset: 0x1e8
}

// 
// Start address: 0x101f180
int act_check(_anon1* pActwk)
{
	short tmp;
	unsigned char bD0;
	unsigned char bD1;
	int ret;
	// Line 387, Address: 0x101f180, Func Offset: 0
	// Line 394, Address: 0x101f198, Func Offset: 0x18
	// Line 396, Address: 0x101f19c, Func Offset: 0x1c
	// Line 397, Address: 0x101f1d4, Func Offset: 0x54
	// Line 399, Address: 0x101f1e8, Func Offset: 0x68
	// Line 400, Address: 0x101f1f4, Func Offset: 0x74
	// Line 401, Address: 0x101f200, Func Offset: 0x80
	// Line 402, Address: 0x101f234, Func Offset: 0xb4
	// Line 403, Address: 0x101f244, Func Offset: 0xc4
	// Line 404, Address: 0x101f24c, Func Offset: 0xcc
	// Line 405, Address: 0x101f258, Func Offset: 0xd8
	// Line 407, Address: 0x101f26c, Func Offset: 0xec
	// Line 408, Address: 0x101f284, Func Offset: 0x104
	// Line 409, Address: 0x101f28c, Func Offset: 0x10c
	// Line 410, Address: 0x101f2a0, Func Offset: 0x120
	// Line 413, Address: 0x101f2a4, Func Offset: 0x124
	// Line 414, Address: 0x101f2a8, Func Offset: 0x128
	// Func End, Address: 0x101f2c4, Func Offset: 0x144
}

