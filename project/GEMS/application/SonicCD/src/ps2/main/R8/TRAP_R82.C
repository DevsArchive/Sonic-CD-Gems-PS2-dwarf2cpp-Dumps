typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);
typedef void(*type_5)(_anon1*);
typedef void(*type_13)(_anon1*);
typedef void(*type_15)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[12];
typedef void(*type_4)(_anon1*)[4];
typedef void(*type_6)(_anon1*)[2];
typedef unsigned char type_7[6];
typedef _anon0* type_8[7];
typedef unsigned char type_9[56];
typedef unsigned char type_10[2];
typedef unsigned char type_11[22];
typedef _anon0* type_12[1];
typedef void(*type_14)(_anon1*)[2];
typedef void(*type_16)(_anon1*)[2];
typedef unsigned char type_17[12];
typedef unsigned char type_18[12];
typedef short type_19[6];
typedef _anon1 type_20[128];
typedef unsigned char type_21[766];
typedef _anon0* type_22[2];
typedef _anon0* type_23[1];

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

unsigned char flagwork[766];
unsigned char time_flag;
unsigned char togeita_data0[12];
unsigned char togeita_data1[12];
unsigned char togeita_data2[12];
_anon0 tog00;
_anon0 tog01;
_anon0 tog02;
_anon0 tog03;
_anon0 tog04;
_anon0 tog05;
_anon0 tog06;
_anon0* togeitapat[7];
_anon1 actwk[128];
_anon0 dai00;
_anon0* togedair8pat[1];
_anon0 har00;
_anon0 har01;
_anon0* harir8pat[2];
unsigned char prio_flag;
unsigned char plpower_m;
unsigned char plpower_a;
_anon0 tok00;
_anon0* tokusyupat[1];

void tr8_fout(_anon1* trapwk);
void gater8(_anon1* trapwk);
void togeita(_anon1* trapwk);
void togeita_ridechk(_anon1* trapwk);
void togeita_init(_anon1* trapwk);
void togeita_dataset(_anon1* trapwk, _anon1* new_actwk, unsigned char* togeita_data);
void setitano(_anon1* trapwk);
void togeita_move1(_anon1* trapwk);
unsigned char togeita_plchk_1(_anon1* trapwk, short cal_x);
void togeita_move2(_anon1* trapwk);
void itaset_chk(_anon1* trapwk);
void togeita_move3(_anon1* trapwk);
void togeitax(_anon1* trapwk);
void togedair8(_anon1* trapwk);
void dair8_init(_anon1* trapwk);
void dair8_move(_anon1* trapwk);
void harir8(_anon1* trapwk);
void harir8_init(_anon1* trapwk);
void harir8_move(_anon1* trapwk);
void harir8_ridechk(_anon1* trapwk);
void tokusyu_block(_anon1* trapwk);
void tokusyu_init(_anon1* trapwk);
void tokusyu_move(_anon1* trapwk);

// 
// Start address: 0x1021910
void tr8_fout(_anon1* trapwk)
{
	unsigned short status;
	// Line 19, Address: 0x1021910, Func Offset: 0
	// Line 22, Address: 0x1021920, Func Offset: 0x10
	// Line 23, Address: 0x1021954, Func Offset: 0x44
	// Line 24, Address: 0x102197c, Func Offset: 0x6c
	// Line 25, Address: 0x1021998, Func Offset: 0x88
	// Line 26, Address: 0x10219a4, Func Offset: 0x94
	// Func End, Address: 0x10219b8, Func Offset: 0xa8
}

// 
// Start address: 0x10219c0
void gater8(_anon1* trapwk)
{
	// Line 46, Address: 0x10219c0, Func Offset: 0
	// Line 47, Address: 0x10219cc, Func Offset: 0xc
	// Line 48, Address: 0x10219d8, Func Offset: 0x18
	// Func End, Address: 0x10219e8, Func Offset: 0x28
}

// 
// Start address: 0x10219f0
void togeita(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[4];
	// Line 141, Address: 0x10219f0, Func Offset: 0
	// Line 142, Address: 0x10219fc, Func Offset: 0xc
	// Line 145, Address: 0x1021a28, Func Offset: 0x38
	// Line 146, Address: 0x1021a54, Func Offset: 0x64
	// Line 147, Address: 0x1021a90, Func Offset: 0xa0
	// Line 148, Address: 0x1021a9c, Func Offset: 0xac
	// Line 149, Address: 0x1021aa8, Func Offset: 0xb8
	// Line 150, Address: 0x1021abc, Func Offset: 0xcc
	// Func End, Address: 0x1021acc, Func Offset: 0xdc
}

// 
// Start address: 0x1021ad0
void togeita_ridechk(_anon1* trapwk)
{
	short cal_position;
	// Line 153, Address: 0x1021ad0, Func Offset: 0
	// Line 156, Address: 0x1021ae0, Func Offset: 0x10
	// Line 157, Address: 0x1021af8, Func Offset: 0x28
	// Line 158, Address: 0x1021b10, Func Offset: 0x40
	// Line 159, Address: 0x1021b5c, Func Offset: 0x8c
	// Line 160, Address: 0x1021b78, Func Offset: 0xa8
	// Line 161, Address: 0x1021b8c, Func Offset: 0xbc
	// Line 162, Address: 0x1021ba0, Func Offset: 0xd0
	// Func End, Address: 0x1021bb4, Func Offset: 0xe4
}

// 
// Start address: 0x1021bc0
void togeita_init(_anon1* trapwk)
{
	unsigned char patchg_point;
	_anon1* new_actwk;
	// Line 165, Address: 0x1021bc0, Func Offset: 0
	// Line 169, Address: 0x1021bd0, Func Offset: 0x10
	// Line 170, Address: 0x1021be0, Func Offset: 0x20
	// Line 171, Address: 0x1021bf0, Func Offset: 0x30
	// Line 173, Address: 0x1021bfc, Func Offset: 0x3c
	// Line 175, Address: 0x1021c0c, Func Offset: 0x4c
	// Line 177, Address: 0x1021c18, Func Offset: 0x58
	// Line 179, Address: 0x1021c2c, Func Offset: 0x6c
	// Line 180, Address: 0x1021c44, Func Offset: 0x84
	// Line 181, Address: 0x1021c60, Func Offset: 0xa0
	// Line 182, Address: 0x1021c80, Func Offset: 0xc0
	// Line 183, Address: 0x1021ca0, Func Offset: 0xe0
	// Line 184, Address: 0x1021cb0, Func Offset: 0xf0
	// Line 185, Address: 0x1021cc0, Func Offset: 0x100
	// Line 186, Address: 0x1021cf8, Func Offset: 0x138
	// Line 188, Address: 0x1021d04, Func Offset: 0x144
	// Line 189, Address: 0x1021d2c, Func Offset: 0x16c
	// Line 190, Address: 0x1021d38, Func Offset: 0x178
	// Line 191, Address: 0x1021d44, Func Offset: 0x184
	// Line 193, Address: 0x1021d5c, Func Offset: 0x19c
	// Line 194, Address: 0x1021d84, Func Offset: 0x1c4
	// Line 195, Address: 0x1021d90, Func Offset: 0x1d0
	// Line 196, Address: 0x1021d9c, Func Offset: 0x1dc
	// Line 199, Address: 0x1021db4, Func Offset: 0x1f4
	// Line 200, Address: 0x1021dcc, Func Offset: 0x20c
	// Line 201, Address: 0x1021de0, Func Offset: 0x220
	// Line 202, Address: 0x1021dec, Func Offset: 0x22c
	// Line 203, Address: 0x1021df8, Func Offset: 0x238
	// Line 204, Address: 0x1021e08, Func Offset: 0x248
	// Line 205, Address: 0x1021e18, Func Offset: 0x258
	// Line 206, Address: 0x1021e4c, Func Offset: 0x28c
	// Line 207, Address: 0x1021e80, Func Offset: 0x2c0
	// Func End, Address: 0x1021e94, Func Offset: 0x2d4
}

// 
// Start address: 0x1021ea0
void togeita_dataset(_anon1* trapwk, _anon1* new_actwk, unsigned char* togeita_data)
{
	unsigned char patchg_point;
	// Line 210, Address: 0x1021ea0, Func Offset: 0
	// Line 213, Address: 0x1021eb4, Func Offset: 0x14
	// Line 214, Address: 0x1021ecc, Func Offset: 0x2c
	// Line 215, Address: 0x1021ee4, Func Offset: 0x44
	// Line 216, Address: 0x1021f00, Func Offset: 0x60
	// Line 217, Address: 0x1021f1c, Func Offset: 0x7c
	// Line 219, Address: 0x1021f2c, Func Offset: 0x8c
	// Line 220, Address: 0x1021f3c, Func Offset: 0x9c
	// Line 222, Address: 0x1021f8c, Func Offset: 0xec
	// Line 223, Address: 0x1021f9c, Func Offset: 0xfc
	// Func End, Address: 0x1021fac, Func Offset: 0x10c
}

// 
// Start address: 0x1021fb0
void setitano(_anon1* trapwk)
{
	unsigned char tbl[56];
	// Line 227, Address: 0x1021fb0, Func Offset: 0
	// Line 228, Address: 0x1021fb8, Func Offset: 0x8
	// Line 238, Address: 0x1021fec, Func Offset: 0x3c
	// Line 239, Address: 0x102200c, Func Offset: 0x5c
	// Func End, Address: 0x1022018, Func Offset: 0x68
}

// 
// Start address: 0x1022020
void togeita_move1(_anon1* trapwk)
{
	short position_check;
	short cal_x;
	// Line 243, Address: 0x1022020, Func Offset: 0
	// Line 246, Address: 0x1022034, Func Offset: 0x14
	// Line 247, Address: 0x1022080, Func Offset: 0x60
	// Line 249, Address: 0x1022094, Func Offset: 0x74
	// Line 250, Address: 0x10220c0, Func Offset: 0xa0
	// Line 251, Address: 0x10220cc, Func Offset: 0xac
	// Line 252, Address: 0x10220f4, Func Offset: 0xd4
	// Func End, Address: 0x102210c, Func Offset: 0xec
}

// 
// Start address: 0x1022110
unsigned char togeita_plchk_1(_anon1* trapwk, short cal_x)
{
	short position_check;
	// Line 256, Address: 0x1022110, Func Offset: 0
	// Line 259, Address: 0x1022120, Func Offset: 0x10
	// Line 260, Address: 0x102217c, Func Offset: 0x6c
	// Line 261, Address: 0x1022188, Func Offset: 0x78
	// Line 262, Address: 0x10221b8, Func Offset: 0xa8
	// Line 263, Address: 0x10221bc, Func Offset: 0xac
	// Func End, Address: 0x10221cc, Func Offset: 0xbc
}

// 
// Start address: 0x10221d0
void togeita_move2(_anon1* trapwk)
{
	short col_data;
	int stack_yposi;
	short tbl[6];
	// Line 267, Address: 0x10221d0, Func Offset: 0
	// Line 270, Address: 0x10221e4, Func Offset: 0x14
	// Line 273, Address: 0x1022218, Func Offset: 0x48
	// Line 274, Address: 0x1022244, Func Offset: 0x74
	// Line 275, Address: 0x1022250, Func Offset: 0x80
	// Line 276, Address: 0x1022264, Func Offset: 0x94
	// Line 277, Address: 0x102226c, Func Offset: 0x9c
	// Line 278, Address: 0x1022298, Func Offset: 0xc8
	// Line 279, Address: 0x10222ac, Func Offset: 0xdc
	// Line 280, Address: 0x10222b4, Func Offset: 0xe4
	// Line 281, Address: 0x10222c4, Func Offset: 0xf4
	// Line 282, Address: 0x10222d8, Func Offset: 0x108
	// Line 283, Address: 0x10222e4, Func Offset: 0x114
	// Line 284, Address: 0x10222ec, Func Offset: 0x11c
	// Line 285, Address: 0x10222f4, Func Offset: 0x124
	// Line 286, Address: 0x10222fc, Func Offset: 0x12c
	// Line 288, Address: 0x1022308, Func Offset: 0x138
	// Func End, Address: 0x1022320, Func Offset: 0x150
}

// 
// Start address: 0x1022320
void itaset_chk(_anon1* trapwk)
{
	short cal_position;
	_anon1* new_actwk;
	// Line 292, Address: 0x1022320, Func Offset: 0
	// Line 296, Address: 0x1022330, Func Offset: 0x10
	// Line 297, Address: 0x102237c, Func Offset: 0x5c
	// Line 298, Address: 0x1022398, Func Offset: 0x78
	// Line 300, Address: 0x10223ac, Func Offset: 0x8c
	// Line 301, Address: 0x10223c8, Func Offset: 0xa8
	// Line 313, Address: 0x1022418, Func Offset: 0xf8
	// Line 316, Address: 0x1022420, Func Offset: 0x100
	// Line 317, Address: 0x1022438, Func Offset: 0x118
	// Line 319, Address: 0x102244c, Func Offset: 0x12c
	// Line 320, Address: 0x1022458, Func Offset: 0x138
	// Line 321, Address: 0x1022468, Func Offset: 0x148
	// Line 323, Address: 0x10224b8, Func Offset: 0x198
	// Line 324, Address: 0x10224c8, Func Offset: 0x1a8
	// Line 326, Address: 0x10224d8, Func Offset: 0x1b8
	// Func End, Address: 0x10224ec, Func Offset: 0x1cc
}

// 
// Start address: 0x10224f0
void togeita_move3(_anon1* trapwk)
{
	// Line 330, Address: 0x10224f0, Func Offset: 0
	// Line 331, Address: 0x10224f8, Func Offset: 0x8
	// Line 332, Address: 0x1022508, Func Offset: 0x18
	// Func End, Address: 0x1022514, Func Offset: 0x24
}

// 
// Start address: 0x1022520
void togeitax(_anon1* trapwk)
{
	unsigned short ride_number;
	unsigned char colitbl[6];
	// Line 336, Address: 0x1022520, Func Offset: 0
	// Line 338, Address: 0x1022530, Func Offset: 0x10
	// Line 346, Address: 0x1022564, Func Offset: 0x44
	// Line 347, Address: 0x1022574, Func Offset: 0x54
	// Line 349, Address: 0x1022584, Func Offset: 0x64
	// Line 352, Address: 0x1022590, Func Offset: 0x70
	// Line 353, Address: 0x102259c, Func Offset: 0x7c
	// Line 354, Address: 0x10225cc, Func Offset: 0xac
	// Line 355, Address: 0x10225e0, Func Offset: 0xc0
	// Line 356, Address: 0x1022610, Func Offset: 0xf0
	// Line 357, Address: 0x1022624, Func Offset: 0x104
	// Line 358, Address: 0x102264c, Func Offset: 0x12c
	// Line 360, Address: 0x1022688, Func Offset: 0x168
	// Line 361, Address: 0x10226a4, Func Offset: 0x184
	// Line 362, Address: 0x10226b0, Func Offset: 0x190
	// Func End, Address: 0x10226c4, Func Offset: 0x1a4
}

// 
// Start address: 0x10226d0
void togedair8(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 402, Address: 0x10226d0, Func Offset: 0
	// Line 403, Address: 0x10226dc, Func Offset: 0xc
	// Line 405, Address: 0x10226f8, Func Offset: 0x28
	// Line 407, Address: 0x1022728, Func Offset: 0x58
	// Line 409, Address: 0x1022754, Func Offset: 0x84
	// Line 410, Address: 0x1022790, Func Offset: 0xc0
	// Line 411, Address: 0x102279c, Func Offset: 0xcc
	// Line 412, Address: 0x10227b0, Func Offset: 0xe0
	// Func End, Address: 0x10227c0, Func Offset: 0xf0
}

// 
// Start address: 0x10227c0
void dair8_init(_anon1* trapwk)
{
	_anon1* new_actwk;
	// Line 416, Address: 0x10227c0, Func Offset: 0
	// Line 419, Address: 0x10227cc, Func Offset: 0xc
	// Line 421, Address: 0x10227dc, Func Offset: 0x1c
	// Line 422, Address: 0x10227e8, Func Offset: 0x28
	// Line 423, Address: 0x10227f8, Func Offset: 0x38
	// Line 424, Address: 0x1022808, Func Offset: 0x48
	// Line 425, Address: 0x1022818, Func Offset: 0x58
	// Line 426, Address: 0x1022830, Func Offset: 0x70
	// Line 428, Address: 0x1022858, Func Offset: 0x98
	// Line 429, Address: 0x1022868, Func Offset: 0xa8
	// Line 430, Address: 0x1022884, Func Offset: 0xc4
	// Line 431, Address: 0x1022890, Func Offset: 0xd0
	// Line 432, Address: 0x10228a0, Func Offset: 0xe0
	// Line 433, Address: 0x10228b0, Func Offset: 0xf0
	// Line 434, Address: 0x10228bc, Func Offset: 0xfc
	// Line 435, Address: 0x10228f0, Func Offset: 0x130
	// Line 436, Address: 0x1022900, Func Offset: 0x140
	// Line 437, Address: 0x102290c, Func Offset: 0x14c
	// Line 438, Address: 0x1022914, Func Offset: 0x154
	// Line 439, Address: 0x1022920, Func Offset: 0x160
	// Line 440, Address: 0x102292c, Func Offset: 0x16c
	// Line 441, Address: 0x102293c, Func Offset: 0x17c
	// Line 442, Address: 0x102294c, Func Offset: 0x18c
	// Line 443, Address: 0x1022958, Func Offset: 0x198
	// Line 444, Address: 0x102298c, Func Offset: 0x1cc
	// Line 446, Address: 0x1022998, Func Offset: 0x1d8
	// Func End, Address: 0x10229a8, Func Offset: 0x1e8
}

// 
// Start address: 0x10229b0
void dair8_move(_anon1* trapwk)
{
	short cal_position;
	// Line 450, Address: 0x10229b0, Func Offset: 0
	// Line 453, Address: 0x10229c0, Func Offset: 0x10
	// Line 455, Address: 0x10229d8, Func Offset: 0x28
	// Line 456, Address: 0x1022a24, Func Offset: 0x74
	// Line 457, Address: 0x1022a40, Func Offset: 0x90
	// Line 460, Address: 0x1022a54, Func Offset: 0xa4
	// Line 461, Address: 0x1022a68, Func Offset: 0xb8
	// Func End, Address: 0x1022a7c, Func Offset: 0xcc
}

// 
// Start address: 0x1022a80
void harir8(_anon1* trapwk)
{
	unsigned short master;
	void(*tbl)(_anon1*)[2];
	// Line 468, Address: 0x1022a80, Func Offset: 0
	// Line 470, Address: 0x1022a90, Func Offset: 0x10
	// Line 472, Address: 0x1022aac, Func Offset: 0x2c
	// Line 473, Address: 0x1022ae8, Func Offset: 0x68
	// Line 474, Address: 0x1022af4, Func Offset: 0x74
	// Line 476, Address: 0x1022b0c, Func Offset: 0x8c
	// Line 477, Address: 0x1022b4c, Func Offset: 0xcc
	// Line 479, Address: 0x1022ba8, Func Offset: 0x128
	// Line 483, Address: 0x1022c04, Func Offset: 0x184
	// Line 484, Address: 0x1022c18, Func Offset: 0x198
	// Func End, Address: 0x1022c2c, Func Offset: 0x1ac
}

// 
// Start address: 0x1022c30
void harir8_init(_anon1* trapwk)
{
	// Line 488, Address: 0x1022c30, Func Offset: 0
	// Line 489, Address: 0x1022c3c, Func Offset: 0xc
	// Line 490, Address: 0x1022c4c, Func Offset: 0x1c
	// Line 491, Address: 0x1022c5c, Func Offset: 0x2c
	// Line 492, Address: 0x1022c64, Func Offset: 0x34
	// Line 493, Address: 0x1022c70, Func Offset: 0x40
	// Line 494, Address: 0x1022c80, Func Offset: 0x50
	// Line 495, Address: 0x1022c90, Func Offset: 0x60
	// Line 497, Address: 0x1022ca0, Func Offset: 0x70
	// Line 498, Address: 0x1022cac, Func Offset: 0x7c
	// Line 499, Address: 0x1022cb8, Func Offset: 0x88
	// Line 500, Address: 0x1022cd4, Func Offset: 0xa4
	// Line 501, Address: 0x1022ce0, Func Offset: 0xb0
	// Line 502, Address: 0x1022cec, Func Offset: 0xbc
	// Line 504, Address: 0x1022cf8, Func Offset: 0xc8
	// Line 505, Address: 0x1022d04, Func Offset: 0xd4
	// Func End, Address: 0x1022d14, Func Offset: 0xe4
}

// 
// Start address: 0x1022d20
void harir8_move(_anon1* trapwk)
{
	char needle_type;
	// Line 509, Address: 0x1022d20, Func Offset: 0
	// Line 512, Address: 0x1022d30, Func Offset: 0x10
	// Line 514, Address: 0x1022d70, Func Offset: 0x50
	// Line 515, Address: 0x1022d7c, Func Offset: 0x5c
	// Line 517, Address: 0x1022d98, Func Offset: 0x78
	// Line 519, Address: 0x1022da4, Func Offset: 0x84
	// Line 520, Address: 0x1022db0, Func Offset: 0x90
	// Line 521, Address: 0x1022dd8, Func Offset: 0xb8
	// Line 522, Address: 0x1022de0, Func Offset: 0xc0
	// Line 523, Address: 0x1022df4, Func Offset: 0xd4
	// Line 525, Address: 0x1022dfc, Func Offset: 0xdc
	// Line 527, Address: 0x1022e08, Func Offset: 0xe8
	// Line 528, Address: 0x1022e14, Func Offset: 0xf4
	// Line 529, Address: 0x1022e3c, Func Offset: 0x11c
	// Line 530, Address: 0x1022e44, Func Offset: 0x124
	// Line 532, Address: 0x1022e58, Func Offset: 0x138
	// Func End, Address: 0x1022e6c, Func Offset: 0x14c
}

// 
// Start address: 0x1022e70
void harir8_ridechk(_anon1* trapwk)
{
	// Line 535, Address: 0x1022e70, Func Offset: 0
	// Line 536, Address: 0x1022e7c, Func Offset: 0xc
	// Line 538, Address: 0x1022e90, Func Offset: 0x20
	// Line 539, Address: 0x1022e98, Func Offset: 0x28
	// Line 540, Address: 0x1022ebc, Func Offset: 0x4c
	// Line 542, Address: 0x1022ed4, Func Offset: 0x64
	// Line 544, Address: 0x1022efc, Func Offset: 0x8c
	// Line 545, Address: 0x1022f14, Func Offset: 0xa4
	// Line 546, Address: 0x1022f2c, Func Offset: 0xbc
	// Line 547, Address: 0x1022f54, Func Offset: 0xe4
	// Line 548, Address: 0x1022f68, Func Offset: 0xf8
	// Line 552, Address: 0x1022f70, Func Offset: 0x100
	// Line 553, Address: 0x1022f88, Func Offset: 0x118
	// Line 554, Address: 0x1022f9c, Func Offset: 0x12c
	// Func End, Address: 0x1022fac, Func Offset: 0x13c
}

// 
// Start address: 0x1022fb0
void tokusyu_block(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 565, Address: 0x1022fb0, Func Offset: 0
	// Line 566, Address: 0x1022fbc, Func Offset: 0xc
	// Line 568, Address: 0x1022fd8, Func Offset: 0x28
	// Line 569, Address: 0x1023014, Func Offset: 0x64
	// Line 570, Address: 0x1023020, Func Offset: 0x70
	// Line 571, Address: 0x102302c, Func Offset: 0x7c
	// Func End, Address: 0x102303c, Func Offset: 0x8c
}

// 
// Start address: 0x1023040
void tokusyu_init(_anon1* trapwk)
{
	// Line 574, Address: 0x1023040, Func Offset: 0
	// Line 575, Address: 0x102304c, Func Offset: 0xc
	// Line 577, Address: 0x102305c, Func Offset: 0x1c
	// Line 578, Address: 0x1023068, Func Offset: 0x28
	// Line 579, Address: 0x1023078, Func Offset: 0x38
	// Line 580, Address: 0x1023084, Func Offset: 0x44
	// Line 581, Address: 0x1023090, Func Offset: 0x50
	// Line 582, Address: 0x102309c, Func Offset: 0x5c
	// Func End, Address: 0x10230ac, Func Offset: 0x6c
}

// 
// Start address: 0x10230b0
void tokusyu_move(_anon1* trapwk)
{
	// Line 585, Address: 0x10230b0, Func Offset: 0
	// Line 586, Address: 0x10230bc, Func Offset: 0xc
	// Line 587, Address: 0x10230ec, Func Offset: 0x3c
	// Line 588, Address: 0x1023100, Func Offset: 0x50
	// Func End, Address: 0x1023110, Func Offset: 0x60
}

