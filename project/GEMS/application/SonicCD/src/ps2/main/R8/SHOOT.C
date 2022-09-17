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

typedef void(*type_27)(_anon0*);

typedef _anon9 type_0[20];
typedef unsigned short* type_1[61];
typedef unsigned short type_2[5];
typedef unsigned short type_3[33];
typedef _anon9 type_4[0];
typedef unsigned short type_5[7];
typedef unsigned short type_6[11];
typedef unsigned short type_7[15];
typedef unsigned short type_8[11];
typedef unsigned short type_9[13];
typedef unsigned short type_10[5];
typedef unsigned short type_11[5];
typedef unsigned short type_12[11];
typedef unsigned short type_13[11];
typedef unsigned short type_14[9];
typedef unsigned short type_15[35];
typedef unsigned short type_16[21];
typedef unsigned short type_17[13];
typedef unsigned short type_18[11];
typedef unsigned char type_19[2];
typedef short type_20[4];
typedef unsigned short type_21[9];
typedef unsigned char type_22[22];
typedef unsigned short type_23[11];
typedef unsigned short type_24[9];
typedef _anon1* type_25[13];
typedef unsigned short type_26[33];
typedef void(*type_28)(_anon0*)[4];
typedef unsigned short type_29[5];
typedef unsigned short type_30[11];
typedef unsigned short type_31[7];
typedef unsigned short type_32[11];
typedef unsigned short type_33[15];
typedef unsigned short type_34[5];
typedef unsigned short type_35[13];
typedef unsigned short type_36[11];
typedef unsigned short type_37[5];
typedef unsigned short type_38[9];
typedef unsigned char type_39[766];
typedef _anon0 type_40[128];
typedef unsigned short type_41[11];
typedef unsigned short type_42[35];
typedef unsigned short type_43[21];
typedef unsigned short type_44[13];
typedef unsigned short type_45[11];
typedef unsigned short type_46[9];
typedef unsigned short type_47[11];
typedef unsigned short type_48[9];

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

unsigned short shooterposi_d[11];
unsigned short shooterposi_e[11];
unsigned short shooterposi_f[5];
unsigned short shooterposi_10[5];
unsigned short shooterposi_11[13];
unsigned short shooterposi_12[13];
unsigned short shooterposi_13[15];
unsigned short shooterposi_14[15];
unsigned short shooterposi_15[7];
unsigned short shooterposi_16[7];
unsigned short shooterposi_17[5];
unsigned short shooterposi_18[5];
unsigned short shooterposi_19[9];
unsigned short shooterposi_1a[9];
unsigned short shooterposi_1b[11];
unsigned short shooterposi_1c[11];
unsigned short shooterposi_1d[9];
unsigned short shooterposi_1e[9];
unsigned short shooterposi_25[11];
unsigned short shooterposi_26[11];
unsigned short shooterposi_27[13];
unsigned short shooterposi_28[13];
unsigned short shooterposi_29[21];
unsigned short shooterposi_2a[21];
unsigned short shooterposi_2b[35];
unsigned short shooterposi_2c[35];
unsigned short shooterposi_2d[9];
unsigned short shooterposi_2e[9];
unsigned short shooterposi_2f[11];
unsigned short shooterposi_30[11];
unsigned short shooterposi_35[5];
unsigned short shooterposi_36[5];
unsigned short shooterposi_37[11];
unsigned short shooterposi_38[11];
unsigned short shooterposi_39[11];
unsigned short shooterposi_3a[11];
unsigned short shooterposi_3b[33];
unsigned short shooterposi_3c[33];
unsigned short* shooterpositbl[61];
_anon7 swdata;
_anon7 swdata1;
_anon0 actwk[128];
unsigned char flagwork[766];
char time_item;
unsigned char time_flag;
_anon1* bariapat[13];

void shoot_s(_anon0* shootwk);
void shoot_init(_anon0* shootwk);
void shoot_move1(_anon0* shootwk);
void shooter(_anon0* shootwk);
void shooterinit(_anon0* shootwk);
void shootermove(_anon0* shootwk);
void shootermove2(_anon0* shootwk);
void shootermove3(_anon0* shootwk);
void shooterspdset(_anon0* shootwk);
void mspd_set(_anon0* shootwk);

// 
// Start address: 0x1024950
void shoot_s(_anon0* shootwk)
{
	void(*shoot_s_tbl)(_anon0*)[4];
	// Line 405, Address: 0x1024950, Func Offset: 0
	// Line 406, Address: 0x102495c, Func Offset: 0xc
	// Line 409, Address: 0x1024988, Func Offset: 0x38
	// Line 411, Address: 0x10249a0, Func Offset: 0x50
	// Line 412, Address: 0x10249b0, Func Offset: 0x60
	// Line 413, Address: 0x10249ec, Func Offset: 0x9c
	// Line 414, Address: 0x10249f8, Func Offset: 0xa8
	// Func End, Address: 0x1024a08, Func Offset: 0xb8
}

// 
// Start address: 0x1024a10
void shoot_init(_anon0* shootwk)
{
	// Line 418, Address: 0x1024a10, Func Offset: 0
	// Line 419, Address: 0x1024a18, Func Offset: 0x8
	// Line 420, Address: 0x1024a28, Func Offset: 0x18
	// Line 421, Address: 0x1024a34, Func Offset: 0x24
	// Line 422, Address: 0x1024a44, Func Offset: 0x34
	// Line 423, Address: 0x1024a54, Func Offset: 0x44
	// Line 424, Address: 0x1024a64, Func Offset: 0x54
	// Func End, Address: 0x1024a70, Func Offset: 0x60
}

// 
// Start address: 0x1024a70
void shoot_move1(_anon0* shootwk)
{
	// Line 427, Address: 0x1024a70, Func Offset: 0
	// Line 428, Address: 0x1024a7c, Func Offset: 0xc
	// Line 429, Address: 0x1024aac, Func Offset: 0x3c
	// Line 430, Address: 0x1024adc, Func Offset: 0x6c
	// Line 431, Address: 0x1024b0c, Func Offset: 0x9c
	// Line 432, Address: 0x1024b3c, Func Offset: 0xcc
	// Line 434, Address: 0x1024b44, Func Offset: 0xd4
	// Line 435, Address: 0x1024b54, Func Offset: 0xe4
	// Line 436, Address: 0x1024b60, Func Offset: 0xf0
	// Line 437, Address: 0x1024b6c, Func Offset: 0xfc
	// Func End, Address: 0x1024b7c, Func Offset: 0x10c
}

// 
// Start address: 0x1024b80
void shooter(_anon0* shootwk)
{
	short flag_no;
	short addition;
	// Line 441, Address: 0x1024b80, Func Offset: 0
	// Line 444, Address: 0x1024b94, Func Offset: 0x14
	// Line 445, Address: 0x1024bac, Func Offset: 0x2c
	// Line 446, Address: 0x1024bd8, Func Offset: 0x58
	// Line 447, Address: 0x1024be8, Func Offset: 0x68
	// Line 448, Address: 0x1024c34, Func Offset: 0xb4
	// Line 449, Address: 0x1024c50, Func Offset: 0xd0
	// Line 450, Address: 0x1024c70, Func Offset: 0xf0
	// Line 452, Address: 0x1024c9c, Func Offset: 0x11c
	// Line 453, Address: 0x1024cb8, Func Offset: 0x138
	// Line 454, Address: 0x1024cd0, Func Offset: 0x150
	// Line 455, Address: 0x1024d00, Func Offset: 0x180
	// Line 457, Address: 0x1024d40, Func Offset: 0x1c0
	// Line 458, Address: 0x1024d4c, Func Offset: 0x1cc
	// Line 460, Address: 0x1024d54, Func Offset: 0x1d4
	// Line 461, Address: 0x1024d60, Func Offset: 0x1e0
	// Line 463, Address: 0x1024d68, Func Offset: 0x1e8
	// Line 464, Address: 0x1024d74, Func Offset: 0x1f4
	// Line 466, Address: 0x1024d7c, Func Offset: 0x1fc
	// Line 472, Address: 0x1024d88, Func Offset: 0x208
	// Func End, Address: 0x1024da0, Func Offset: 0x220
}

// 
// Start address: 0x1024da0
void shooterinit(_anon0* shootwk)
{
	unsigned short** move;
	unsigned short* movetbl;
	// Line 475, Address: 0x1024da0, Func Offset: 0
	// Line 479, Address: 0x1024db4, Func Offset: 0x14
	// Line 480, Address: 0x1024dc4, Func Offset: 0x24
	// Line 481, Address: 0x1024dd0, Func Offset: 0x30
	// Line 482, Address: 0x1024ddc, Func Offset: 0x3c
	// Line 485, Address: 0x1024de8, Func Offset: 0x48
	// Line 486, Address: 0x1024df8, Func Offset: 0x58
	// Line 487, Address: 0x1024e20, Func Offset: 0x80
	// Line 488, Address: 0x1024e38, Func Offset: 0x98
	// Line 489, Address: 0x1024e50, Func Offset: 0xb0
	// Line 490, Address: 0x1024e58, Func Offset: 0xb8
	// Line 491, Address: 0x1024e60, Func Offset: 0xc0
	// Line 492, Address: 0x1024e6c, Func Offset: 0xcc
	// Line 493, Address: 0x1024e78, Func Offset: 0xd8
	// Line 494, Address: 0x1024e84, Func Offset: 0xe4
	// Func End, Address: 0x1024e9c, Func Offset: 0xfc
}

// 
// Start address: 0x1024ea0
void shootermove(_anon0* shootwk)
{
	short cal_position;
	// Line 497, Address: 0x1024ea0, Func Offset: 0
	// Line 500, Address: 0x1024eb0, Func Offset: 0x10
	// Line 501, Address: 0x1024ee8, Func Offset: 0x48
	// Line 502, Address: 0x1024f14, Func Offset: 0x74
	// Line 503, Address: 0x1024f4c, Func Offset: 0xac
	// Line 504, Address: 0x1024f78, Func Offset: 0xd8
	// Line 505, Address: 0x1024f8c, Func Offset: 0xec
	// Line 506, Address: 0x1024fa4, Func Offset: 0x104
	// Line 507, Address: 0x1024fb8, Func Offset: 0x118
	// Line 509, Address: 0x1024fc4, Func Offset: 0x124
	// Line 510, Address: 0x1024fd4, Func Offset: 0x134
	// Line 511, Address: 0x1024fe0, Func Offset: 0x140
	// Line 512, Address: 0x1024ff4, Func Offset: 0x154
	// Line 513, Address: 0x1025000, Func Offset: 0x160
	// Line 514, Address: 0x102500c, Func Offset: 0x16c
	// Line 515, Address: 0x1025024, Func Offset: 0x184
	// Line 516, Address: 0x1025034, Func Offset: 0x194
	// Line 517, Address: 0x1025048, Func Offset: 0x1a8
	// Line 518, Address: 0x102505c, Func Offset: 0x1bc
	// Line 519, Address: 0x102506c, Func Offset: 0x1cc
	// Line 520, Address: 0x102507c, Func Offset: 0x1dc
	// Line 521, Address: 0x1025084, Func Offset: 0x1e4
	// Line 522, Address: 0x1025090, Func Offset: 0x1f0
	// Func End, Address: 0x10250a4, Func Offset: 0x204
}

// 
// Start address: 0x10250b0
void shootermove2(_anon0* shootwk)
{
	// Line 525, Address: 0x10250b0, Func Offset: 0
	// Line 526, Address: 0x10250bc, Func Offset: 0xc
	// Line 527, Address: 0x10250c8, Func Offset: 0x18
	// Line 528, Address: 0x10250d8, Func Offset: 0x28
	// Line 529, Address: 0x10250e4, Func Offset: 0x34
	// Func End, Address: 0x10250f4, Func Offset: 0x44
}

// 
// Start address: 0x1025100
void shootermove3(_anon0* shootwk)
{
	unsigned char move_counter;
	unsigned short** move;
	unsigned short* movetbl;
	// Line 532, Address: 0x1025100, Func Offset: 0
	// Line 537, Address: 0x1025118, Func Offset: 0x18
	// Line 538, Address: 0x1025144, Func Offset: 0x44
	// Line 539, Address: 0x1025154, Func Offset: 0x54
	// Line 540, Address: 0x1025164, Func Offset: 0x64
	// Line 541, Address: 0x102517c, Func Offset: 0x7c
	// Line 543, Address: 0x1025198, Func Offset: 0x98
	// Line 544, Address: 0x10251a0, Func Offset: 0xa0
	// Line 545, Address: 0x10251a8, Func Offset: 0xa8
	// Line 546, Address: 0x10251ac, Func Offset: 0xac
	// Line 547, Address: 0x10251dc, Func Offset: 0xdc
	// Line 548, Address: 0x1025210, Func Offset: 0x110
	// Line 549, Address: 0x102521c, Func Offset: 0x11c
	// Line 552, Address: 0x1025224, Func Offset: 0x124
	// Line 553, Address: 0x102524c, Func Offset: 0x14c
	// Line 554, Address: 0x1025274, Func Offset: 0x174
	// Line 557, Address: 0x102527c, Func Offset: 0x17c
	// Line 558, Address: 0x1025290, Func Offset: 0x190
	// Line 559, Address: 0x1025298, Func Offset: 0x198
	// Line 560, Address: 0x10252a0, Func Offset: 0x1a0
	// Func End, Address: 0x10252bc, Func Offset: 0x1bc
}

// 
// Start address: 0x10252c0
void shooterspdset(_anon0* shootwk)
{
	short ms_work0;
	short ms_work1;
	short cal_position_x;
	short cal_position_y;
	int cal_long_x;
	int cal_long_y;
	// Line 563, Address: 0x10252c0, Func Offset: 0
	// Line 567, Address: 0x10252e0, Func Offset: 0x20
	// Line 568, Address: 0x10252f8, Func Offset: 0x38
	// Line 569, Address: 0x1025308, Func Offset: 0x48
	// Line 570, Address: 0x102531c, Func Offset: 0x5c
	// Line 571, Address: 0x102532c, Func Offset: 0x6c
	// Line 572, Address: 0x1025348, Func Offset: 0x88
	// Line 574, Address: 0x1025364, Func Offset: 0xa4
	// Line 575, Address: 0x1025374, Func Offset: 0xb4
	// Line 576, Address: 0x1025388, Func Offset: 0xc8
	// Line 577, Address: 0x1025398, Func Offset: 0xd8
	// Line 578, Address: 0x10253b4, Func Offset: 0xf4
	// Line 580, Address: 0x10253d0, Func Offset: 0x110
	// Line 582, Address: 0x10253ec, Func Offset: 0x12c
	// Line 583, Address: 0x10253fc, Func Offset: 0x13c
	// Line 584, Address: 0x1025410, Func Offset: 0x150
	// Line 585, Address: 0x102541c, Func Offset: 0x15c
	// Line 587, Address: 0x1025438, Func Offset: 0x178
	// Line 588, Address: 0x1025448, Func Offset: 0x188
	// Line 589, Address: 0x102545c, Func Offset: 0x19c
	// Line 590, Address: 0x1025468, Func Offset: 0x1a8
	// Line 592, Address: 0x1025484, Func Offset: 0x1c4
	// Line 593, Address: 0x1025494, Func Offset: 0x1d4
	// Line 594, Address: 0x102549c, Func Offset: 0x1dc
	// Line 595, Address: 0x10254a8, Func Offset: 0x1e8
	// Line 596, Address: 0x10254b8, Func Offset: 0x1f8
	// Line 597, Address: 0x10254c8, Func Offset: 0x208
	// Line 601, Address: 0x10254d0, Func Offset: 0x210
	// Line 602, Address: 0x10254e0, Func Offset: 0x220
	// Line 603, Address: 0x10254f4, Func Offset: 0x234
	// Line 604, Address: 0x1025500, Func Offset: 0x240
	// Line 606, Address: 0x102551c, Func Offset: 0x25c
	// Line 607, Address: 0x102552c, Func Offset: 0x26c
	// Line 608, Address: 0x1025540, Func Offset: 0x280
	// Line 609, Address: 0x102554c, Func Offset: 0x28c
	// Line 611, Address: 0x1025568, Func Offset: 0x2a8
	// Line 612, Address: 0x1025578, Func Offset: 0x2b8
	// Line 613, Address: 0x1025580, Func Offset: 0x2c0
	// Line 614, Address: 0x102558c, Func Offset: 0x2cc
	// Line 615, Address: 0x102559c, Func Offset: 0x2dc
	// Line 616, Address: 0x10255ac, Func Offset: 0x2ec
	// Func End, Address: 0x10255d0, Func Offset: 0x310
}

// 
// Start address: 0x10255d0
void mspd_set(_anon0* shootwk)
{
	short mspdtbl[4];
	short cal_mspeed;
	// Line 619, Address: 0x10255d0, Func Offset: 0
	// Line 620, Address: 0x10255dc, Func Offset: 0xc
	// Line 623, Address: 0x1025608, Func Offset: 0x38
	// Line 624, Address: 0x1025614, Func Offset: 0x44
	// Line 625, Address: 0x102562c, Func Offset: 0x5c
	// Line 626, Address: 0x1025654, Func Offset: 0x84
	// Line 627, Address: 0x1025680, Func Offset: 0xb0
	// Func End, Address: 0x1025690, Func Offset: 0xc0
}

