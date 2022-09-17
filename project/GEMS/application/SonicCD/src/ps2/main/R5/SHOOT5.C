typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_23)(_anon1*);

typedef short type_0[25];
typedef _anon7 type_1[20];
typedef short type_2[15];
typedef _anon7 type_3[0];
typedef short type_4[21];
typedef short type_5[19];
typedef short type_6[41];
typedef short type_7[43];
typedef short type_8[5];
typedef short type_9[5];
typedef short type_10[5];
typedef short type_11[5];
typedef unsigned char type_12[2];
typedef short type_13[5];
typedef unsigned char type_14[22];
typedef short type_15[19];
typedef short type_16[31];
typedef short type_17[19];
typedef short* type_18[22];
typedef short type_19[41];
typedef short type_20[15];
typedef unsigned char type_21[766];
typedef _anon1 type_22[128];
typedef void(*type_24)(_anon1*)[4];
typedef short type_25[43];
typedef short type_26[5];
typedef short type_27[5];
typedef short type_28[5];
typedef short type_29[5];
typedef short type_30[19];

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

short shooterposi_0[21];
short shooterposi_1[19];
short shooterposi_2[15];
short shooterposi_3[31];
short shooterposi_4[25];
short shooterposi_5[19];
short shooterposi_6[19];
short shooterposi_7[5];
short shooterposi_8[5];
short shooterposi_9[5];
short shooterposi_0a[5];
short shooterposi_0b[5];
short shooterposi_0c[5];
short shooterposi_0d[5];
short shooterposi_0e[5];
short shooterposi_0f[5];
short shooterposi_10[43];
short shooterposi_11[43];
short shooterposi_12[15];
short shooterposi_13[41];
short shooterposi_14[41];
short shooterposi_15[19];
short* shooterpositbl[22];
_anon1 actwk[128];
unsigned char colrevflag;
unsigned char flagwork[766];
char time_item;
unsigned char time_flag;

void shooter(_anon1* pActwk);
void shooterinit(_anon1* pActwk);
void shootermove(_anon1* pActwk);
void shootermove2(_anon1* pActwk);
void shootermove3(_anon1* pActwk);
void shooterspdset(_anon1* pActwk);

// 
// Start address: 0x101c0b0
void shooter(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short d0;
	short d1;
	short d2;
	void(*shooter_move_tbl)(_anon1*)[4];
	// Line 357, Address: 0x101c0b0, Func Offset: 0
	// Line 360, Address: 0x101c0cc, Func Offset: 0x1c
	// Line 368, Address: 0x101c0f8, Func Offset: 0x48
	// Line 370, Address: 0x101c110, Func Offset: 0x60
	// Line 371, Address: 0x101c12c, Func Offset: 0x7c
	// Line 373, Address: 0x101c134, Func Offset: 0x84
	// Line 374, Address: 0x101c144, Func Offset: 0x94
	// Line 375, Address: 0x101c160, Func Offset: 0xb0
	// Line 376, Address: 0x101c16c, Func Offset: 0xbc
	// Line 377, Address: 0x101c184, Func Offset: 0xd4
	// Line 378, Address: 0x101c190, Func Offset: 0xe0
	// Line 379, Address: 0x101c19c, Func Offset: 0xec
	// Line 381, Address: 0x101c1ac, Func Offset: 0xfc
	// Line 382, Address: 0x101c1b0, Func Offset: 0x100
	// Line 385, Address: 0x101c1b8, Func Offset: 0x108
	// Line 387, Address: 0x101c1cc, Func Offset: 0x11c
	// Line 390, Address: 0x101c1d8, Func Offset: 0x128
	// Line 391, Address: 0x101c1e4, Func Offset: 0x134
	// Line 394, Address: 0x101c204, Func Offset: 0x154
	// Line 395, Address: 0x101c220, Func Offset: 0x170
	// Line 396, Address: 0x101c230, Func Offset: 0x180
	// Line 397, Address: 0x101c24c, Func Offset: 0x19c
	// Line 399, Address: 0x101c254, Func Offset: 0x1a4
	// Line 401, Address: 0x101c270, Func Offset: 0x1c0
	// Line 402, Address: 0x101c278, Func Offset: 0x1c8
	// Line 403, Address: 0x101c290, Func Offset: 0x1e0
	// Line 404, Address: 0x101c2a4, Func Offset: 0x1f4
	// Line 406, Address: 0x101c2e0, Func Offset: 0x230
	// Line 408, Address: 0x101c2f8, Func Offset: 0x248
	// Line 411, Address: 0x101c304, Func Offset: 0x254
	// Func End, Address: 0x101c324, Func Offset: 0x274
}

// 
// Start address: 0x101c330
void shooterinit(_anon1* pActwk)
{
	short* a2;
	short d0;
	// Line 416, Address: 0x101c330, Func Offset: 0
	// Line 420, Address: 0x101c344, Func Offset: 0x14
	// Line 421, Address: 0x101c350, Func Offset: 0x20
	// Line 422, Address: 0x101c35c, Func Offset: 0x2c
	// Line 424, Address: 0x101c368, Func Offset: 0x38
	// Line 425, Address: 0x101c378, Func Offset: 0x48
	// Line 426, Address: 0x101c398, Func Offset: 0x68
	// Line 427, Address: 0x101c3a4, Func Offset: 0x74
	// Line 428, Address: 0x101c3c0, Func Offset: 0x90
	// Line 429, Address: 0x101c3d4, Func Offset: 0xa4
	// Line 430, Address: 0x101c3dc, Func Offset: 0xac
	// Line 431, Address: 0x101c3f0, Func Offset: 0xc0
	// Line 433, Address: 0x101c404, Func Offset: 0xd4
	// Line 434, Address: 0x101c410, Func Offset: 0xe0
	// Func End, Address: 0x101c428, Func Offset: 0xf8
}

// 
// Start address: 0x101c430
void shootermove(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short d0;
	short d1;
	// Line 439, Address: 0x101c430, Func Offset: 0
	// Line 443, Address: 0x101c448, Func Offset: 0x18
	// Line 444, Address: 0x101c450, Func Offset: 0x20
	// Line 445, Address: 0x101c45c, Func Offset: 0x2c
	// Line 446, Address: 0x101c470, Func Offset: 0x40
	// Line 447, Address: 0x101c47c, Func Offset: 0x4c
	// Line 448, Address: 0x101c490, Func Offset: 0x60
	// Line 449, Address: 0x101c49c, Func Offset: 0x6c
	// Line 450, Address: 0x101c4b0, Func Offset: 0x80
	// Line 451, Address: 0x101c4bc, Func Offset: 0x8c
	// Line 452, Address: 0x101c4d0, Func Offset: 0xa0
	// Line 453, Address: 0x101c4dc, Func Offset: 0xac
	// Line 455, Address: 0x101c4f0, Func Offset: 0xc0
	// Line 456, Address: 0x101c4fc, Func Offset: 0xcc
	// Line 458, Address: 0x101c504, Func Offset: 0xd4
	// Line 459, Address: 0x101c514, Func Offset: 0xe4
	// Line 460, Address: 0x101c51c, Func Offset: 0xec
	// Line 461, Address: 0x101c524, Func Offset: 0xf4
	// Line 462, Address: 0x101c52c, Func Offset: 0xfc
	// Line 463, Address: 0x101c530, Func Offset: 0x100
	// Line 464, Address: 0x101c534, Func Offset: 0x104
	// Line 465, Address: 0x101c544, Func Offset: 0x114
	// Line 466, Address: 0x101c550, Func Offset: 0x120
	// Line 467, Address: 0x101c55c, Func Offset: 0x12c
	// Line 468, Address: 0x101c568, Func Offset: 0x138
	// Line 469, Address: 0x101c574, Func Offset: 0x144
	// Line 470, Address: 0x101c57c, Func Offset: 0x14c
	// Line 471, Address: 0x101c588, Func Offset: 0x158
	// Func End, Address: 0x101c5a4, Func Offset: 0x174
}

// 
// Start address: 0x101c5b0
void shootermove2(_anon1* pActwk)
{
	// Line 476, Address: 0x101c5b0, Func Offset: 0
	// Line 477, Address: 0x101c5bc, Func Offset: 0xc
	// Line 478, Address: 0x101c5c8, Func Offset: 0x18
	// Line 479, Address: 0x101c5d8, Func Offset: 0x28
	// Line 480, Address: 0x101c5e4, Func Offset: 0x34
	// Func End, Address: 0x101c5f4, Func Offset: 0x44
}

// 
// Start address: 0x101c600
void shootermove3(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short* a2;
	int d0;
	int d2;
	int d3;
	unsigned char d1;
	// Line 485, Address: 0x101c600, Func Offset: 0
	// Line 491, Address: 0x101c624, Func Offset: 0x24
	// Line 492, Address: 0x101c62c, Func Offset: 0x2c
	// Line 493, Address: 0x101c63c, Func Offset: 0x3c
	// Line 498, Address: 0x101c654, Func Offset: 0x54
	// Line 499, Address: 0x101c660, Func Offset: 0x60
	// Line 500, Address: 0x101c66c, Func Offset: 0x6c
	// Line 501, Address: 0x101c678, Func Offset: 0x78
	// Line 502, Address: 0x101c694, Func Offset: 0x94
	// Line 506, Address: 0x101c6b0, Func Offset: 0xb0
	// Line 507, Address: 0x101c6b4, Func Offset: 0xb4
	// Line 509, Address: 0x101c6bc, Func Offset: 0xbc
	// Line 510, Address: 0x101c6c4, Func Offset: 0xc4
	// Line 511, Address: 0x101c6cc, Func Offset: 0xcc
	// Line 512, Address: 0x101c6f0, Func Offset: 0xf0
	// Line 513, Address: 0x101c704, Func Offset: 0x104
	// Line 514, Address: 0x101c718, Func Offset: 0x118
	// Line 515, Address: 0x101c724, Func Offset: 0x124
	// Line 517, Address: 0x101c72c, Func Offset: 0x12c
	// Line 518, Address: 0x101c730, Func Offset: 0x130
	// Line 519, Address: 0x101c734, Func Offset: 0x134
	// Line 520, Address: 0x101c740, Func Offset: 0x140
	// Line 521, Address: 0x101c744, Func Offset: 0x144
	// Line 522, Address: 0x101c748, Func Offset: 0x148
	// Line 523, Address: 0x101c754, Func Offset: 0x154
	// Line 524, Address: 0x101c758, Func Offset: 0x158
	// Line 525, Address: 0x101c75c, Func Offset: 0x15c
	// Line 526, Address: 0x101c760, Func Offset: 0x160
	// Line 527, Address: 0x101c764, Func Offset: 0x164
	// Line 529, Address: 0x101c76c, Func Offset: 0x16c
	// Line 530, Address: 0x101c778, Func Offset: 0x178
	// Line 531, Address: 0x101c780, Func Offset: 0x180
	// Line 532, Address: 0x101c784, Func Offset: 0x184
	// Line 534, Address: 0x101c790, Func Offset: 0x190
	// Func End, Address: 0x101c7b8, Func Offset: 0x1b8
}

// 
// Start address: 0x101c7c0
void shooterspdset(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	_anon2 ld0;
	_anon2 ld1;
	short d2;
	short d3;
	short tmp;
	// Line 539, Address: 0x101c7c0, Func Offset: 0
	// Line 544, Address: 0x101c7d8, Func Offset: 0x18
	// Line 545, Address: 0x101c7e0, Func Offset: 0x20
	// Line 546, Address: 0x101c7e4, Func Offset: 0x24
	// Line 547, Address: 0x101c7f0, Func Offset: 0x30
	// Line 548, Address: 0x101c7fc, Func Offset: 0x3c
	// Line 549, Address: 0x101c808, Func Offset: 0x48
	// Line 552, Address: 0x101c810, Func Offset: 0x50
	// Line 554, Address: 0x101c82c, Func Offset: 0x6c
	// Line 555, Address: 0x101c838, Func Offset: 0x78
	// Line 557, Address: 0x101c85c, Func Offset: 0x9c
	// Line 558, Address: 0x101c86c, Func Offset: 0xac
	// Line 559, Address: 0x101c878, Func Offset: 0xb8
	// Line 560, Address: 0x101c884, Func Offset: 0xc4
	// Line 563, Address: 0x101c88c, Func Offset: 0xcc
	// Line 565, Address: 0x101c89c, Func Offset: 0xdc
	// Line 566, Address: 0x101c8a0, Func Offset: 0xe0
	// Line 567, Address: 0x101c8ac, Func Offset: 0xec
	// Line 569, Address: 0x101c8d0, Func Offset: 0x110
	// Line 570, Address: 0x101c8e0, Func Offset: 0x120
	// Line 571, Address: 0x101c8ec, Func Offset: 0x12c
	// Line 572, Address: 0x101c8f8, Func Offset: 0x138
	// Line 575, Address: 0x101c900, Func Offset: 0x140
	// Line 577, Address: 0x101c910, Func Offset: 0x150
	// Line 579, Address: 0x101c934, Func Offset: 0x174
	// Line 580, Address: 0x101c938, Func Offset: 0x178
	// Line 581, Address: 0x101c944, Func Offset: 0x184
	// Line 582, Address: 0x101c954, Func Offset: 0x194
	// Line 583, Address: 0x101c960, Func Offset: 0x1a0
	// Line 584, Address: 0x101c968, Func Offset: 0x1a8
	// Line 585, Address: 0x101c96c, Func Offset: 0x1ac
	// Line 587, Address: 0x101c998, Func Offset: 0x1d8
	// Line 588, Address: 0x101c99c, Func Offset: 0x1dc
	// Line 589, Address: 0x101c9a8, Func Offset: 0x1e8
	// Line 590, Address: 0x101c9b8, Func Offset: 0x1f8
	// Line 592, Address: 0x101c9c4, Func Offset: 0x204
	// Line 593, Address: 0x101c9d0, Func Offset: 0x210
	// Line 594, Address: 0x101c9d8, Func Offset: 0x218
	// Line 595, Address: 0x101c9dc, Func Offset: 0x21c
	// Line 597, Address: 0x101ca0c, Func Offset: 0x24c
	// Line 598, Address: 0x101ca14, Func Offset: 0x254
	// Line 599, Address: 0x101ca18, Func Offset: 0x258
	// Line 601, Address: 0x101ca2c, Func Offset: 0x26c
	// Line 603, Address: 0x101ca38, Func Offset: 0x278
	// Line 604, Address: 0x101ca44, Func Offset: 0x284
	// Line 607, Address: 0x101ca4c, Func Offset: 0x28c
	// Line 608, Address: 0x101ca50, Func Offset: 0x290
	// Line 609, Address: 0x101ca5c, Func Offset: 0x29c
	// Line 610, Address: 0x101ca6c, Func Offset: 0x2ac
	// Line 611, Address: 0x101ca78, Func Offset: 0x2b8
	// Line 612, Address: 0x101ca80, Func Offset: 0x2c0
	// Line 613, Address: 0x101ca84, Func Offset: 0x2c4
	// Line 615, Address: 0x101cab0, Func Offset: 0x2f0
	// Line 616, Address: 0x101cab4, Func Offset: 0x2f4
	// Line 617, Address: 0x101cac0, Func Offset: 0x300
	// Line 618, Address: 0x101cad0, Func Offset: 0x310
	// Line 620, Address: 0x101cadc, Func Offset: 0x31c
	// Line 621, Address: 0x101cae8, Func Offset: 0x328
	// Line 622, Address: 0x101caf0, Func Offset: 0x330
	// Line 623, Address: 0x101caf4, Func Offset: 0x334
	// Line 625, Address: 0x101cb24, Func Offset: 0x364
	// Line 626, Address: 0x101cb2c, Func Offset: 0x36c
	// Line 627, Address: 0x101cb30, Func Offset: 0x370
	// Line 629, Address: 0x101cb44, Func Offset: 0x384
	// Line 631, Address: 0x101cb50, Func Offset: 0x390
	// Line 633, Address: 0x101cb5c, Func Offset: 0x39c
	// Func End, Address: 0x101cb78, Func Offset: 0x3b8
}

