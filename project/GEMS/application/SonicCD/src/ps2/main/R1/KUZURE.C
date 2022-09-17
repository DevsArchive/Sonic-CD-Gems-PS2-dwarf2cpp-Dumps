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

typedef void(*type_3)(_anon1*);

typedef _anon9 type_0[20];
typedef _anon9 type_1[0];
typedef _anon0* type_2[0];
typedef void(*type_4)(_anon1*)[4];
typedef _anon0* type_5[0];
typedef _anon0* type_6[0];
typedef _anon0* type_7[0];
typedef unsigned char* type_8[0];
typedef unsigned char* type_9[0];
typedef unsigned char type_10[2];
typedef unsigned char type_11[22];
typedef _anon1 type_12[128];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
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

unsigned char* tblb[0];
_anon0* patbase_kuzure_b[0];
unsigned char* tbla[0];
_anon0* patbase_kuzure_a[0];
_anon1 actwk[128];
_anon0* patc[0];
_anon0* patd[0];

void kuzureru_tikei(_anon1* pActwk);
void acta_init(_anon1* pActwk);
void acta_check(_anon1* pActwk);
void actb_wait(_anon1* pActwk);
void actb_down(_anon1* pActwk);
void actb_init_a(_anon1* pActwk);
void actb_init_b(_anon1* pActwk);

// 
// Start address: 0x101f240
void kuzureru_tikei(_anon1* pActwk)
{
	void(*act_tbl)(_anon1*)[4];
	// Line 77, Address: 0x101f240, Func Offset: 0
	// Line 78, Address: 0x101f24c, Func Offset: 0xc
	// Line 86, Address: 0x101f278, Func Offset: 0x38
	// Line 87, Address: 0x101f2b4, Func Offset: 0x74
	// Line 88, Address: 0x101f2c0, Func Offset: 0x80
	// Line 89, Address: 0x101f2e4, Func Offset: 0xa4
	// Func End, Address: 0x101f2f4, Func Offset: 0xb4
}

// 
// Start address: 0x101f300
void acta_init(_anon1* pActwk)
{
	_anon0** pPB_kuzure;
	_anon7 id_no;
	unsigned char** pTbltbl;
	unsigned char* pTbl;
	char userflag;
	char block_x;
	char block_y;
	// Line 96, Address: 0x101f300, Func Offset: 0
	// Line 105, Address: 0x101f320, Func Offset: 0x20
	// Line 106, Address: 0x101f330, Func Offset: 0x30
	// Line 107, Address: 0x101f340, Func Offset: 0x40
	// Line 108, Address: 0x101f34c, Func Offset: 0x4c
	// Line 110, Address: 0x101f358, Func Offset: 0x58
	// Line 111, Address: 0x101f360, Func Offset: 0x60
	// Line 112, Address: 0x101f368, Func Offset: 0x68
	// Line 113, Address: 0x101f378, Func Offset: 0x78
	// Line 115, Address: 0x101f388, Func Offset: 0x88
	// Line 116, Address: 0x101f390, Func Offset: 0x90
	// Line 118, Address: 0x101f398, Func Offset: 0x98
	// Line 119, Address: 0x101f3a0, Func Offset: 0xa0
	// Line 121, Address: 0x101f3b4, Func Offset: 0xb4
	// Line 122, Address: 0x101f3c4, Func Offset: 0xc4
	// Line 124, Address: 0x101f3d4, Func Offset: 0xd4
	// Line 125, Address: 0x101f3d8, Func Offset: 0xd8
	// Line 126, Address: 0x101f3ec, Func Offset: 0xec
	// Line 127, Address: 0x101f3f8, Func Offset: 0xf8
	// Line 129, Address: 0x101f40c, Func Offset: 0x10c
	// Line 130, Address: 0x101f420, Func Offset: 0x120
	// Line 131, Address: 0x101f440, Func Offset: 0x140
	// Line 132, Address: 0x101f448, Func Offset: 0x148
	// Line 134, Address: 0x101f450, Func Offset: 0x150
	// Line 135, Address: 0x101f464, Func Offset: 0x164
	// Line 136, Address: 0x101f490, Func Offset: 0x190
	// Line 137, Address: 0x101f4b4, Func Offset: 0x1b4
	// Line 140, Address: 0x101f4bc, Func Offset: 0x1bc
	// Func End, Address: 0x101f4e0, Func Offset: 0x1e0
}

// 
// Start address: 0x101f4e0
void acta_check(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	// Line 147, Address: 0x101f4e0, Func Offset: 0
	// Line 150, Address: 0x101f4f0, Func Offset: 0x10
	// Line 151, Address: 0x101f4f8, Func Offset: 0x18
	// Line 153, Address: 0x101f510, Func Offset: 0x30
	// Line 154, Address: 0x101f520, Func Offset: 0x40
	// Line 155, Address: 0x101f52c, Func Offset: 0x4c
	// Line 156, Address: 0x101f53c, Func Offset: 0x5c
	// Line 157, Address: 0x101f568, Func Offset: 0x88
	// Line 159, Address: 0x101f574, Func Offset: 0x94
	// Func End, Address: 0x101f588, Func Offset: 0xa8
}

// 
// Start address: 0x101f590
void actb_wait(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	// Line 166, Address: 0x101f590, Func Offset: 0
	// Line 169, Address: 0x101f5a0, Func Offset: 0x10
	// Line 170, Address: 0x101f5b0, Func Offset: 0x20
	// Line 172, Address: 0x101f5c8, Func Offset: 0x38
	// Line 174, Address: 0x101f5d8, Func Offset: 0x48
	// Line 176, Address: 0x101f5e8, Func Offset: 0x58
	// Line 177, Address: 0x101f5f0, Func Offset: 0x60
	// Line 179, Address: 0x101f608, Func Offset: 0x78
	// Line 181, Address: 0x101f620, Func Offset: 0x90
	// Line 185, Address: 0x101f630, Func Offset: 0xa0
	// Func End, Address: 0x101f644, Func Offset: 0xb4
}

// 
// Start address: 0x101f650
void actb_down(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short yposi;
	// Line 192, Address: 0x101f650, Func Offset: 0
	// Line 196, Address: 0x101f664, Func Offset: 0x14
	// Line 197, Address: 0x101f67c, Func Offset: 0x2c
	// Line 199, Address: 0x101f68c, Func Offset: 0x3c
	// Line 200, Address: 0x101f69c, Func Offset: 0x4c
	// Line 201, Address: 0x101f6a4, Func Offset: 0x54
	// Line 202, Address: 0x101f6b4, Func Offset: 0x64
	// Line 203, Address: 0x101f6d4, Func Offset: 0x84
	// Func End, Address: 0x101f6ec, Func Offset: 0x9c
}

// 
// Start address: 0x101f6f0
void actb_init_a(_anon1* pActwk)
{
	_anon1* pActwk_w;
	_anon1* pPlayerwk;
	unsigned char** pTbltbl;
	unsigned char* pTbla;
	char patno;
	char userflag;
	short time_x;
	short time_y;
	short posi_x;
	short posi_y;
	short posi_x_start;
	short posi_x_step;
	short reverse_flag;
	short count0x;
	_anon5 count_x;
	_anon5 count_y;
	_anon5 tmp;
	// Line 211, Address: 0x101f6f0, Func Offset: 0
	// Line 231, Address: 0x101f720, Func Offset: 0x30
	// Line 232, Address: 0x101f730, Func Offset: 0x40
	// Line 233, Address: 0x101f758, Func Offset: 0x68
	// Line 234, Address: 0x101f75c, Func Offset: 0x6c
	// Line 235, Address: 0x101f768, Func Offset: 0x78
	// Line 236, Address: 0x101f784, Func Offset: 0x94
	// Line 237, Address: 0x101f788, Func Offset: 0x98
	// Line 238, Address: 0x101f798, Func Offset: 0xa8
	// Line 239, Address: 0x101f7a0, Func Offset: 0xb0
	// Line 240, Address: 0x101f7ac, Func Offset: 0xbc
	// Line 241, Address: 0x101f7b8, Func Offset: 0xc8
	// Line 243, Address: 0x101f7c8, Func Offset: 0xd8
	// Line 244, Address: 0x101f7d4, Func Offset: 0xe4
	// Line 246, Address: 0x101f7e0, Func Offset: 0xf0
	// Line 247, Address: 0x101f7f4, Func Offset: 0x104
	// Line 248, Address: 0x101f7fc, Func Offset: 0x10c
	// Line 249, Address: 0x101f800, Func Offset: 0x110
	// Line 250, Address: 0x101f804, Func Offset: 0x114
	// Line 251, Address: 0x101f814, Func Offset: 0x124
	// Line 252, Address: 0x101f820, Func Offset: 0x130
	// Line 253, Address: 0x101f82c, Func Offset: 0x13c
	// Line 254, Address: 0x101f840, Func Offset: 0x150
	// Line 255, Address: 0x101f84c, Func Offset: 0x15c
	// Line 258, Address: 0x101f85c, Func Offset: 0x16c
	// Line 259, Address: 0x101f864, Func Offset: 0x174
	// Line 260, Address: 0x101f870, Func Offset: 0x180
	// Line 263, Address: 0x101f878, Func Offset: 0x188
	// Line 265, Address: 0x101f88c, Func Offset: 0x19c
	// Line 266, Address: 0x101f894, Func Offset: 0x1a4
	// Line 267, Address: 0x101f8bc, Func Offset: 0x1cc
	// Line 268, Address: 0x101f8c8, Func Offset: 0x1d8
	// Line 270, Address: 0x101f8d0, Func Offset: 0x1e0
	// Line 271, Address: 0x101f8e4, Func Offset: 0x1f4
	// Line 273, Address: 0x101f8f4, Func Offset: 0x204
	// Line 274, Address: 0x101f8fc, Func Offset: 0x20c
	// Line 275, Address: 0x101f90c, Func Offset: 0x21c
	// Line 276, Address: 0x101f918, Func Offset: 0x228
	// Line 277, Address: 0x101f924, Func Offset: 0x234
	// Line 278, Address: 0x101f934, Func Offset: 0x244
	// Line 279, Address: 0x101f940, Func Offset: 0x250
	// Line 280, Address: 0x101f950, Func Offset: 0x260
	// Line 281, Address: 0x101f960, Func Offset: 0x270
	// Line 283, Address: 0x101f968, Func Offset: 0x278
	// Line 284, Address: 0x101f978, Func Offset: 0x288
	// Line 286, Address: 0x101f988, Func Offset: 0x298
	// Line 288, Address: 0x101f99c, Func Offset: 0x2ac
	// Line 289, Address: 0x101f9a8, Func Offset: 0x2b8
	// Line 290, Address: 0x101f9b4, Func Offset: 0x2c4
	// Line 291, Address: 0x101f9c0, Func Offset: 0x2d0
	// Line 293, Address: 0x101f9cc, Func Offset: 0x2dc
	// Line 294, Address: 0x101f9d4, Func Offset: 0x2e4
	// Line 295, Address: 0x101f9dc, Func Offset: 0x2ec
	// Line 297, Address: 0x101f9e4, Func Offset: 0x2f4
	// Line 298, Address: 0x101f9f4, Func Offset: 0x304
	// Line 299, Address: 0x101fa00, Func Offset: 0x310
	// Line 301, Address: 0x101fa24, Func Offset: 0x334
	// Line 302, Address: 0x101fa30, Func Offset: 0x340
	// Line 303, Address: 0x101fa3c, Func Offset: 0x34c
	// Line 305, Address: 0x101fa60, Func Offset: 0x370
	// Line 306, Address: 0x101fa6c, Func Offset: 0x37c
	// Func End, Address: 0x101faa0, Func Offset: 0x3b0
}

// 
// Start address: 0x101faa0
void actb_init_b(_anon1* pActwk)
{
	_anon1* pActwk_w;
	_anon1* pPlayerwk;
	unsigned char** pTbltbl;
	unsigned char* pTblb;
	char userflag;
	unsigned char sprvsize;
	short time_w;
	short d3;
	short d4;
	_anon5 d5;
	short d6;
	short xspeed;
	// Line 314, Address: 0x101faa0, Func Offset: 0
	// Line 328, Address: 0x101fad0, Func Offset: 0x30
	// Line 329, Address: 0x101fae0, Func Offset: 0x40
	// Line 330, Address: 0x101faec, Func Offset: 0x4c
	// Line 331, Address: 0x101fb0c, Func Offset: 0x6c
	// Line 332, Address: 0x101fb1c, Func Offset: 0x7c
	// Line 333, Address: 0x101fb2c, Func Offset: 0x8c
	// Line 334, Address: 0x101fb34, Func Offset: 0x94
	// Line 335, Address: 0x101fb44, Func Offset: 0xa4
	// Line 336, Address: 0x101fb4c, Func Offset: 0xac
	// Line 337, Address: 0x101fb58, Func Offset: 0xb8
	// Line 338, Address: 0x101fb64, Func Offset: 0xc4
	// Line 339, Address: 0x101fb70, Func Offset: 0xd0
	// Line 340, Address: 0x101fb7c, Func Offset: 0xdc
	// Line 341, Address: 0x101fb88, Func Offset: 0xe8
	// Line 342, Address: 0x101fb94, Func Offset: 0xf4
	// Line 344, Address: 0x101fba8, Func Offset: 0x108
	// Line 345, Address: 0x101fbb4, Func Offset: 0x114
	// Line 347, Address: 0x101fbc4, Func Offset: 0x124
	// Line 348, Address: 0x101fbd4, Func Offset: 0x134
	// Line 349, Address: 0x101fbe0, Func Offset: 0x140
	// Line 350, Address: 0x101fbec, Func Offset: 0x14c
	// Line 352, Address: 0x101fbf8, Func Offset: 0x158
	// Line 355, Address: 0x101fc00, Func Offset: 0x160
	// Line 356, Address: 0x101fc08, Func Offset: 0x168
	// Line 357, Address: 0x101fc14, Func Offset: 0x174
	// Line 358, Address: 0x101fc34, Func Offset: 0x194
	// Line 360, Address: 0x101fc44, Func Offset: 0x1a4
	// Line 361, Address: 0x101fc54, Func Offset: 0x1b4
	// Line 362, Address: 0x101fc60, Func Offset: 0x1c0
	// Line 363, Address: 0x101fc6c, Func Offset: 0x1cc
	// Line 366, Address: 0x101fc78, Func Offset: 0x1d8
	// Line 368, Address: 0x101fc8c, Func Offset: 0x1ec
	// Line 369, Address: 0x101fc98, Func Offset: 0x1f8
	// Line 372, Address: 0x101fca8, Func Offset: 0x208
	// Line 374, Address: 0x101fcbc, Func Offset: 0x21c
	// Line 375, Address: 0x101fcc4, Func Offset: 0x224
	// Line 376, Address: 0x101fcec, Func Offset: 0x24c
	// Line 377, Address: 0x101fcf8, Func Offset: 0x258
	// Line 379, Address: 0x101fd00, Func Offset: 0x260
	// Line 380, Address: 0x101fd0c, Func Offset: 0x26c
	// Line 381, Address: 0x101fd18, Func Offset: 0x278
	// Line 382, Address: 0x101fd28, Func Offset: 0x288
	// Line 383, Address: 0x101fd38, Func Offset: 0x298
	// Line 384, Address: 0x101fd44, Func Offset: 0x2a4
	// Line 385, Address: 0x101fd54, Func Offset: 0x2b4
	// Line 386, Address: 0x101fd64, Func Offset: 0x2c4
	// Line 387, Address: 0x101fd74, Func Offset: 0x2d4
	// Line 388, Address: 0x101fd80, Func Offset: 0x2e0
	// Line 389, Address: 0x101fd8c, Func Offset: 0x2ec
	// Line 390, Address: 0x101fd98, Func Offset: 0x2f8
	// Line 392, Address: 0x101fda0, Func Offset: 0x300
	// Line 393, Address: 0x101fdac, Func Offset: 0x30c
	// Line 394, Address: 0x101fdb8, Func Offset: 0x318
	// Line 395, Address: 0x101fdc0, Func Offset: 0x320
	// Line 396, Address: 0x101fdcc, Func Offset: 0x32c
	// Line 397, Address: 0x101fdd4, Func Offset: 0x334
	// Line 398, Address: 0x101fde0, Func Offset: 0x340
	// Line 400, Address: 0x101fe04, Func Offset: 0x364
	// Line 401, Address: 0x101fe10, Func Offset: 0x370
	// Func End, Address: 0x101fe44, Func Offset: 0x3a4
}

