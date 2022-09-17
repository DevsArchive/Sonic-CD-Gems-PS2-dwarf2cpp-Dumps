typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon0*)[7];
typedef _anon1* type_4[3];
typedef unsigned char type_5[4];
typedef unsigned char* type_6[1];
typedef unsigned char type_7[2];
typedef unsigned char type_8[4];
typedef unsigned char type_9[22];
typedef _anon1* type_10[2];
typedef _anon0 type_11[128];
typedef unsigned char* type_12[1];
typedef unsigned char* type_13[1];
typedef unsigned char type_14[4];
typedef _anon1* type_15[3];

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

unsigned char pchg_e_00[4];
unsigned char pchg_b_00[4];
unsigned char pchg_tama_00[4];
unsigned char* pchg_e[1];
unsigned char* pchg_b[1];
unsigned char* pchg_tama[1];
_anon1 kumo_e_pat00;
_anon1 kumo_e_pat01;
_anon1 kumo_e_pat02;
_anon1 kumo_b_pat00;
_anon1 kumo_b_pat01;
_anon1 kumo_b_pat02;
_anon1 tama_pat00;
_anon1 tama_pat01;
_anon1* pat_kumo_e[3];
_anon1* pat_kumo_b[3];
_anon1* pat_tama[2];
_anon0 actwk[128];

void kumo(_anon0* pActwk);
void kumo_init(_anon0* pActwk);
void kumo_jump(_anon0* pActwk);
void kumo_jump1(_anon0* pActwk);
void kumo_move(_anon0* pActwk);
void kumo_move1(_anon0* pActwk);
short kumo_check(_anon0* pActwk0, _anon0* pActwk1);
void kumo_tama(_anon0* pActwk);
void kumo_tama1(_anon0* pActwk);
void tama(_anon0* pActwk);

// 
// Start address: 0x1020110
void kumo(_anon0* pActwk)
{
	void(*kumo_move_tbl)(_anon0*)[7];
	// Line 146, Address: 0x1020110, Func Offset: 0
	// Line 147, Address: 0x102011c, Func Offset: 0xc
	// Line 157, Address: 0x1020148, Func Offset: 0x38
	// Line 159, Address: 0x1020164, Func Offset: 0x54
	// Line 160, Address: 0x1020170, Func Offset: 0x60
	// Line 163, Address: 0x1020178, Func Offset: 0x68
	// Line 164, Address: 0x102018c, Func Offset: 0x7c
	// Line 165, Address: 0x10201c8, Func Offset: 0xb8
	// Line 166, Address: 0x10201d4, Func Offset: 0xc4
	// Line 167, Address: 0x10201e0, Func Offset: 0xd0
	// Func End, Address: 0x10201f0, Func Offset: 0xe0
}

// 
// Start address: 0x10201f0
void kumo_init(_anon0* pActwk)
{
	// Line 176, Address: 0x10201f0, Func Offset: 0
	// Line 177, Address: 0x10201fc, Func Offset: 0xc
	// Line 178, Address: 0x102020c, Func Offset: 0x1c
	// Line 179, Address: 0x102021c, Func Offset: 0x2c
	// Line 180, Address: 0x1020228, Func Offset: 0x38
	// Line 181, Address: 0x1020234, Func Offset: 0x44
	// Line 182, Address: 0x1020240, Func Offset: 0x50
	// Line 183, Address: 0x102024c, Func Offset: 0x5c
	// Line 184, Address: 0x1020258, Func Offset: 0x68
	// Line 186, Address: 0x1020264, Func Offset: 0x74
	// Line 187, Address: 0x1020274, Func Offset: 0x84
	// Line 188, Address: 0x1020284, Func Offset: 0x94
	// Line 189, Address: 0x1020294, Func Offset: 0xa4
	// Line 190, Address: 0x10202a0, Func Offset: 0xb0
	// Line 192, Address: 0x10202a8, Func Offset: 0xb8
	// Line 193, Address: 0x10202b8, Func Offset: 0xc8
	// Line 194, Address: 0x10202c8, Func Offset: 0xd8
	// Line 197, Address: 0x10202d4, Func Offset: 0xe4
	// Line 198, Address: 0x10202e4, Func Offset: 0xf4
	// Line 199, Address: 0x10202f4, Func Offset: 0x104
	// Line 202, Address: 0x1020304, Func Offset: 0x114
	// Line 203, Address: 0x1020314, Func Offset: 0x124
	// Line 204, Address: 0x1020320, Func Offset: 0x130
	// Func End, Address: 0x1020330, Func Offset: 0x140
}

// 
// Start address: 0x1020330
void kumo_jump(_anon0* pActwk)
{
	// Line 213, Address: 0x1020330, Func Offset: 0
	// Line 214, Address: 0x102033c, Func Offset: 0xc
	// Line 215, Address: 0x102034c, Func Offset: 0x1c
	// Line 216, Address: 0x1020354, Func Offset: 0x24
	// Line 217, Address: 0x1020364, Func Offset: 0x34
	// Line 218, Address: 0x1020374, Func Offset: 0x44
	// Line 219, Address: 0x1020380, Func Offset: 0x50
	// Func End, Address: 0x1020390, Func Offset: 0x60
}

// 
// Start address: 0x1020390
void kumo_jump1(_anon0* pActwk)
{
	short wD1;
	// Line 228, Address: 0x1020390, Func Offset: 0
	// Line 231, Address: 0x10203a0, Func Offset: 0x10
	// Line 232, Address: 0x10203b0, Func Offset: 0x20
	// Line 233, Address: 0x10203c8, Func Offset: 0x38
	// Line 234, Address: 0x10203f4, Func Offset: 0x64
	// Line 235, Address: 0x1020404, Func Offset: 0x74
	// Line 236, Address: 0x1020414, Func Offset: 0x84
	// Line 237, Address: 0x1020420, Func Offset: 0x90
	// Line 240, Address: 0x1020430, Func Offset: 0xa0
	// Func End, Address: 0x1020444, Func Offset: 0xb4
}

// 
// Start address: 0x1020450
void kumo_move(_anon0* pActwk)
{
	// Line 249, Address: 0x1020450, Func Offset: 0
	// Line 250, Address: 0x102045c, Func Offset: 0xc
	// Line 251, Address: 0x102046c, Func Offset: 0x1c
	// Line 252, Address: 0x1020478, Func Offset: 0x28
	// Line 253, Address: 0x1020484, Func Offset: 0x34
	// Line 254, Address: 0x1020490, Func Offset: 0x40
	// Func End, Address: 0x10204a0, Func Offset: 0x50
}

// 
// Start address: 0x10204a0
void kumo_move1(_anon0* pActwk)
{
	// Line 263, Address: 0x10204a0, Func Offset: 0
	// Line 264, Address: 0x10204ac, Func Offset: 0xc
	// Line 265, Address: 0x10204bc, Func Offset: 0x1c
	// Line 266, Address: 0x10204d8, Func Offset: 0x38
	// Line 267, Address: 0x10204e8, Func Offset: 0x48
	// Line 268, Address: 0x10204f4, Func Offset: 0x54
	// Line 269, Address: 0x1020500, Func Offset: 0x60
	// Line 273, Address: 0x1020508, Func Offset: 0x68
	// Line 274, Address: 0x1020530, Func Offset: 0x90
	// Line 276, Address: 0x1020540, Func Offset: 0xa0
	// Line 277, Address: 0x1020554, Func Offset: 0xb4
	// Func End, Address: 0x1020564, Func Offset: 0xc4
}

// 
// Start address: 0x1020570
short kumo_check(_anon0* pActwk0, _anon0* pActwk1)
{
	short wD0;
	short wD1;
	// Line 280, Address: 0x1020570, Func Offset: 0
	// Line 283, Address: 0x1020584, Func Offset: 0x14
	// Line 284, Address: 0x10205b8, Func Offset: 0x48
	// Line 285, Address: 0x10205ec, Func Offset: 0x7c
	// Line 286, Address: 0x1020608, Func Offset: 0x98
	// Line 287, Address: 0x1020620, Func Offset: 0xb0
	// Line 288, Address: 0x1020644, Func Offset: 0xd4
	// Line 289, Address: 0x1020648, Func Offset: 0xd8
	// Line 290, Address: 0x102066c, Func Offset: 0xfc
	// Line 291, Address: 0x1020678, Func Offset: 0x108
	// Line 292, Address: 0x1020694, Func Offset: 0x124
	// Line 293, Address: 0x10206a4, Func Offset: 0x134
	// Line 294, Address: 0x10206b4, Func Offset: 0x144
	// Line 299, Address: 0x10206c0, Func Offset: 0x150
	// Line 300, Address: 0x10206c4, Func Offset: 0x154
	// Func End, Address: 0x10206d8, Func Offset: 0x168
}

// 
// Start address: 0x10206e0
void kumo_tama(_anon0* pActwk)
{
	// Line 309, Address: 0x10206e0, Func Offset: 0
	// Line 310, Address: 0x10206e8, Func Offset: 0x8
	// Line 311, Address: 0x1020708, Func Offset: 0x28
	// Line 313, Address: 0x1020718, Func Offset: 0x38
	// Func End, Address: 0x1020724, Func Offset: 0x44
}

// 
// Start address: 0x1020730
void kumo_tama1(_anon0* pActwk)
{
	_anon0* pNewactwk;
	short wD0;
	int lD1;
	// Line 322, Address: 0x1020730, Func Offset: 0
	// Line 327, Address: 0x1020744, Func Offset: 0x14
	// Line 328, Address: 0x1020758, Func Offset: 0x28
	// Line 329, Address: 0x1020768, Func Offset: 0x38
	// Line 330, Address: 0x1020774, Func Offset: 0x44
	// Line 331, Address: 0x1020784, Func Offset: 0x54
	// Line 332, Address: 0x1020794, Func Offset: 0x64
	// Line 333, Address: 0x10207a4, Func Offset: 0x74
	// Line 334, Address: 0x10207b0, Func Offset: 0x80
	// Line 335, Address: 0x10207c0, Func Offset: 0x90
	// Line 336, Address: 0x10207cc, Func Offset: 0x9c
	// Line 337, Address: 0x10207d8, Func Offset: 0xa8
	// Line 338, Address: 0x10207e4, Func Offset: 0xb4
	// Line 339, Address: 0x10207f0, Func Offset: 0xc0
	// Line 340, Address: 0x1020800, Func Offset: 0xd0
	// Line 341, Address: 0x102080c, Func Offset: 0xdc
	// Line 342, Address: 0x1020810, Func Offset: 0xe0
	// Line 343, Address: 0x1020828, Func Offset: 0xf8
	// Line 344, Address: 0x1020834, Func Offset: 0x104
	// Line 347, Address: 0x1020838, Func Offset: 0x108
	// Line 348, Address: 0x1020848, Func Offset: 0x118
	// Line 349, Address: 0x1020850, Func Offset: 0x120
	// Line 350, Address: 0x1020868, Func Offset: 0x138
	// Line 353, Address: 0x1020874, Func Offset: 0x144
	// Line 354, Address: 0x1020884, Func Offset: 0x154
	// Func End, Address: 0x102089c, Func Offset: 0x16c
}

// 
// Start address: 0x10208a0
void tama(_anon0* pActwk)
{
	// Line 363, Address: 0x10208a0, Func Offset: 0
	// Line 364, Address: 0x10208ac, Func Offset: 0xc
	// Line 365, Address: 0x10208bc, Func Offset: 0x1c
	// Line 366, Address: 0x10208cc, Func Offset: 0x2c
	// Line 367, Address: 0x10208d4, Func Offset: 0x34
	// Line 368, Address: 0x10208ec, Func Offset: 0x4c
	// Line 369, Address: 0x1020904, Func Offset: 0x64
	// Line 371, Address: 0x1020914, Func Offset: 0x74
	// Line 372, Address: 0x1020920, Func Offset: 0x80
	// Line 378, Address: 0x1020928, Func Offset: 0x88
	// Line 379, Address: 0x1020940, Func Offset: 0xa0
	// Line 380, Address: 0x1020954, Func Offset: 0xb4
	// Line 381, Address: 0x1020960, Func Offset: 0xc0
	// Line 382, Address: 0x102096c, Func Offset: 0xcc
	// Line 386, Address: 0x1020974, Func Offset: 0xd4
	// Line 387, Address: 0x1020994, Func Offset: 0xf4
	// Line 388, Address: 0x10209a0, Func Offset: 0x100
	// Line 390, Address: 0x10209a8, Func Offset: 0x108
	// Line 391, Address: 0x10209b8, Func Offset: 0x118
	// Line 392, Address: 0x10209c8, Func Offset: 0x128
	// Line 393, Address: 0x10209d0, Func Offset: 0x130
	// Line 395, Address: 0x10209d8, Func Offset: 0x138
	// Line 396, Address: 0x10209ec, Func Offset: 0x14c
	// Line 397, Address: 0x10209f8, Func Offset: 0x158
	// Line 398, Address: 0x1020a04, Func Offset: 0x164
	// Func End, Address: 0x1020a14, Func Offset: 0x174
}

