typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef short type_2[5];
typedef unsigned char type_3[4];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef void(*type_7)(_anon0*)[2];
typedef _anon0 type_8[128];
typedef _anon1* type_9[9];
typedef unsigned char type_10[5];

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

_anon1 spr_sieso_00;
_anon1 spr_sieso_01;
_anon1 spr_sieso_02;
_anon1 spr_sieso_03;
_anon1 spr_sieso_04;
_anon1 spr_ball_00;
_anon1 spr_ball_01;
_anon1 spr_ball_02;
_anon1 spr_dai_00;
_anon1* okusiesopat[9];
_anon2 scra_h_posit;
_anon0 actwk[128];
short time_stop;

void okusieso(_anon0* pActwk);
void okusieso_init(_anon0* pActwk);
void okusieso_move(_anon0* pActwk);
void ball_move(_anon0* pActwk);
void dai_move(_anon0* pActwk);

// 
// Start address: 0x101d2b0
void okusieso(_anon0* pActwk)
{
	short wD0;
	short wD1;
	void(*okusieso_tbl)(_anon0*)[2];
	// Line 151, Address: 0x101d2b0, Func Offset: 0
	// Line 159, Address: 0x101d2c4, Func Offset: 0x14
	// Line 160, Address: 0x101d308, Func Offset: 0x58
	// Line 161, Address: 0x101d314, Func Offset: 0x64
	// Line 162, Address: 0x101d33c, Func Offset: 0x8c
	// Line 163, Address: 0x101d368, Func Offset: 0xb8
	// Line 164, Address: 0x101d390, Func Offset: 0xe0
	// Line 165, Address: 0x101d39c, Func Offset: 0xec
	// Func End, Address: 0x101d3b4, Func Offset: 0x104
}

// 
// Start address: 0x101d3c0
void okusieso_init(_anon0* pActwk)
{
	_anon0* subActwk;
	// Line 169, Address: 0x101d3c0, Func Offset: 0
	// Line 172, Address: 0x101d3cc, Func Offset: 0xc
	// Line 173, Address: 0x101d3dc, Func Offset: 0x1c
	// Line 174, Address: 0x101d3ec, Func Offset: 0x2c
	// Line 175, Address: 0x101d3fc, Func Offset: 0x3c
	// Line 176, Address: 0x101d408, Func Offset: 0x48
	// Line 177, Address: 0x101d414, Func Offset: 0x54
	// Line 178, Address: 0x101d41c, Func Offset: 0x5c
	// Line 179, Address: 0x101d428, Func Offset: 0x68
	// Line 180, Address: 0x101d434, Func Offset: 0x74
	// Line 181, Address: 0x101d440, Func Offset: 0x80
	// Line 184, Address: 0x101d448, Func Offset: 0x88
	// Line 186, Address: 0x101d460, Func Offset: 0xa0
	// Line 187, Address: 0x101d46c, Func Offset: 0xac
	// Line 188, Address: 0x101d47c, Func Offset: 0xbc
	// Line 189, Address: 0x101d48c, Func Offset: 0xcc
	// Line 190, Address: 0x101d498, Func Offset: 0xd8
	// Line 191, Address: 0x101d4a4, Func Offset: 0xe4
	// Line 192, Address: 0x101d4b0, Func Offset: 0xf0
	// Line 193, Address: 0x101d4bc, Func Offset: 0xfc
	// Line 194, Address: 0x101d4c8, Func Offset: 0x108
	// Line 195, Address: 0x101d4d0, Func Offset: 0x110
	// Line 196, Address: 0x101d4d8, Func Offset: 0x118
	// Line 197, Address: 0x101d4e8, Func Offset: 0x128
	// Line 198, Address: 0x101d4f8, Func Offset: 0x138
	// Line 199, Address: 0x101d508, Func Offset: 0x148
	// Line 200, Address: 0x101d518, Func Offset: 0x158
	// Line 201, Address: 0x101d528, Func Offset: 0x168
	// Line 202, Address: 0x101d568, Func Offset: 0x1a8
	// Line 204, Address: 0x101d570, Func Offset: 0x1b0
	// Line 206, Address: 0x101d578, Func Offset: 0x1b8
	// Line 208, Address: 0x101d590, Func Offset: 0x1d0
	// Line 209, Address: 0x101d59c, Func Offset: 0x1dc
	// Line 210, Address: 0x101d5ac, Func Offset: 0x1ec
	// Line 211, Address: 0x101d5bc, Func Offset: 0x1fc
	// Line 212, Address: 0x101d5c8, Func Offset: 0x208
	// Line 213, Address: 0x101d5d4, Func Offset: 0x214
	// Line 214, Address: 0x101d5e0, Func Offset: 0x220
	// Line 215, Address: 0x101d5ec, Func Offset: 0x22c
	// Line 216, Address: 0x101d5f8, Func Offset: 0x238
	// Line 217, Address: 0x101d600, Func Offset: 0x240
	// Line 218, Address: 0x101d608, Func Offset: 0x248
	// Line 219, Address: 0x101d618, Func Offset: 0x258
	// Line 220, Address: 0x101d628, Func Offset: 0x268
	// Line 221, Address: 0x101d638, Func Offset: 0x278
	// Line 222, Address: 0x101d648, Func Offset: 0x288
	// Line 223, Address: 0x101d658, Func Offset: 0x298
	// Line 224, Address: 0x101d680, Func Offset: 0x2c0
	// Line 226, Address: 0x101d6c0, Func Offset: 0x300
	// Func End, Address: 0x101d6d0, Func Offset: 0x310
}

// 
// Start address: 0x101d6d0
void okusieso_move(_anon0* pActwk)
{
	short wD1;
	unsigned char patno_tbl[4];
	// Line 230, Address: 0x101d6d0, Func Offset: 0
	// Line 232, Address: 0x101d6e0, Func Offset: 0x10
	// Line 237, Address: 0x101d70c, Func Offset: 0x3c
	// Line 239, Address: 0x101d724, Func Offset: 0x54
	// Line 241, Address: 0x101d73c, Func Offset: 0x6c
	// Line 242, Address: 0x101d748, Func Offset: 0x78
	// Line 244, Address: 0x101d750, Func Offset: 0x80
	// Line 246, Address: 0x101d768, Func Offset: 0x98
	// Line 247, Address: 0x101d774, Func Offset: 0xa4
	// Line 249, Address: 0x101d77c, Func Offset: 0xac
	// Line 253, Address: 0x101d794, Func Offset: 0xc4
	// Line 255, Address: 0x101d7a4, Func Offset: 0xd4
	// Line 256, Address: 0x101d7ac, Func Offset: 0xdc
	// Line 258, Address: 0x101d7c4, Func Offset: 0xf4
	// Line 259, Address: 0x101d7d4, Func Offset: 0x104
	// Line 261, Address: 0x101d7ec, Func Offset: 0x11c
	// Line 262, Address: 0x101d7f8, Func Offset: 0x128
	// Line 263, Address: 0x101d808, Func Offset: 0x138
	// Line 265, Address: 0x101d818, Func Offset: 0x148
	// Line 268, Address: 0x101d820, Func Offset: 0x150
	// Line 270, Address: 0x101d838, Func Offset: 0x168
	// Line 271, Address: 0x101d848, Func Offset: 0x178
	// Line 273, Address: 0x101d860, Func Offset: 0x190
	// Line 274, Address: 0x101d870, Func Offset: 0x1a0
	// Line 275, Address: 0x101d87c, Func Offset: 0x1ac
	// Line 277, Address: 0x101d894, Func Offset: 0x1c4
	// Line 278, Address: 0x101d8a4, Func Offset: 0x1d4
	// Line 279, Address: 0x101d8ac, Func Offset: 0x1dc
	// Line 282, Address: 0x101d8b8, Func Offset: 0x1e8
	// Line 286, Address: 0x101d8c0, Func Offset: 0x1f0
	// Line 289, Address: 0x101d8d8, Func Offset: 0x208
	// Line 291, Address: 0x101d8f0, Func Offset: 0x220
	// Line 292, Address: 0x101d900, Func Offset: 0x230
	// Line 294, Address: 0x101d90c, Func Offset: 0x23c
	// Line 296, Address: 0x101d914, Func Offset: 0x244
	// Line 297, Address: 0x101d924, Func Offset: 0x254
	// Line 299, Address: 0x101d93c, Func Offset: 0x26c
	// Line 300, Address: 0x101d94c, Func Offset: 0x27c
	// Line 301, Address: 0x101d964, Func Offset: 0x294
	// Line 303, Address: 0x101d978, Func Offset: 0x2a8
	// Line 304, Address: 0x101d980, Func Offset: 0x2b0
	// Line 307, Address: 0x101d984, Func Offset: 0x2b4
	// Line 308, Address: 0x101d99c, Func Offset: 0x2cc
	// Line 310, Address: 0x101d9a8, Func Offset: 0x2d8
	// Func End, Address: 0x101d9bc, Func Offset: 0x2ec
}

// 
// Start address: 0x101d9c0
void ball_move(_anon0* pActwk)
{
	short subact;
	short wD1;
	int lD0;
	// Line 319, Address: 0x101d9c0, Func Offset: 0
	// Line 324, Address: 0x101d9d4, Func Offset: 0x14
	// Line 326, Address: 0x101d9e4, Func Offset: 0x24
	// Line 327, Address: 0x101d9f4, Func Offset: 0x34
	// Line 329, Address: 0x101da28, Func Offset: 0x68
	// Line 331, Address: 0x101da40, Func Offset: 0x80
	// Line 332, Address: 0x101da4c, Func Offset: 0x8c
	// Line 333, Address: 0x101da5c, Func Offset: 0x9c
	// Line 336, Address: 0x101da64, Func Offset: 0xa4
	// Line 337, Address: 0x101da74, Func Offset: 0xb4
	// Line 339, Address: 0x101da8c, Func Offset: 0xcc
	// Line 340, Address: 0x101dac0, Func Offset: 0x100
	// Line 342, Address: 0x101dad4, Func Offset: 0x114
	// Line 343, Address: 0x101daf8, Func Offset: 0x138
	// Line 344, Address: 0x101db08, Func Offset: 0x148
	// Line 345, Address: 0x101db34, Func Offset: 0x174
	// Line 346, Address: 0x101db44, Func Offset: 0x184
	// Line 347, Address: 0x101db6c, Func Offset: 0x1ac
	// Line 348, Address: 0x101db74, Func Offset: 0x1b4
	// Line 352, Address: 0x101db7c, Func Offset: 0x1bc
	// Line 354, Address: 0x101db94, Func Offset: 0x1d4
	// Line 355, Address: 0x101dba4, Func Offset: 0x1e4
	// Line 356, Address: 0x101dbb0, Func Offset: 0x1f0
	// Line 357, Address: 0x101dbbc, Func Offset: 0x1fc
	// Line 360, Address: 0x101dbc4, Func Offset: 0x204
	// Line 361, Address: 0x101dbe0, Func Offset: 0x220
	// Line 364, Address: 0x101dbf0, Func Offset: 0x230
	// Line 365, Address: 0x101dc00, Func Offset: 0x240
	// Line 366, Address: 0x101dc04, Func Offset: 0x244
	// Line 368, Address: 0x101dc14, Func Offset: 0x254
	// Func End, Address: 0x101dc2c, Func Offset: 0x26c
}

// 
// Start address: 0x101dc30
void dai_move(_anon0* pActwk)
{
	short subact;
	short wD1;
	unsigned char speed_tbl[5];
	short ofs_tbl[5];
	// Line 373, Address: 0x101dc30, Func Offset: 0
	// Line 376, Address: 0x101dc44, Func Offset: 0x14
	// Line 380, Address: 0x101dc70, Func Offset: 0x40
	// Line 385, Address: 0x101dc9c, Func Offset: 0x6c
	// Line 387, Address: 0x101dcac, Func Offset: 0x7c
	// Line 388, Address: 0x101dcbc, Func Offset: 0x8c
	// Line 390, Address: 0x101dcf0, Func Offset: 0xc0
	// Line 393, Address: 0x101dd0c, Func Offset: 0xdc
	// Line 394, Address: 0x101dd1c, Func Offset: 0xec
	// Line 396, Address: 0x101dd48, Func Offset: 0x118
	// Line 400, Address: 0x101dd50, Func Offset: 0x120
	// Line 401, Address: 0x101dd60, Func Offset: 0x130
	// Line 404, Address: 0x101dd8c, Func Offset: 0x15c
	// Line 405, Address: 0x101dd9c, Func Offset: 0x16c
	// Line 406, Address: 0x101ddcc, Func Offset: 0x19c
	// Line 408, Address: 0x101de0c, Func Offset: 0x1dc
	// Line 409, Address: 0x101de1c, Func Offset: 0x1ec
	// Line 410, Address: 0x101de4c, Func Offset: 0x21c
	// Line 411, Address: 0x101de68, Func Offset: 0x238
	// Line 412, Address: 0x101de84, Func Offset: 0x254
	// Line 414, Address: 0x101de8c, Func Offset: 0x25c
	// Line 415, Address: 0x101deb8, Func Offset: 0x288
	// Line 416, Address: 0x101ded4, Func Offset: 0x2a4
	// Line 417, Address: 0x101df00, Func Offset: 0x2d0
	// Func End, Address: 0x101df18, Func Offset: 0x2e8
}

