typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_10)(_anon1*);
typedef void(*type_15)(_anon1*);
typedef void(*type_18)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon0* type_1[7];
typedef _anon7 type_2[0];
typedef unsigned char type_3[56];
typedef _anon0* type_4[2];
typedef unsigned char type_5[12];
typedef unsigned char type_6[12];
typedef short type_7[6];
typedef unsigned char type_8[2];
typedef unsigned char type_9[22];
typedef void(*type_11)(_anon1*)[2];
typedef _anon1 type_12[128];
typedef unsigned char type_13[766];
typedef unsigned char type_14[12];
typedef void(*type_16)(_anon1*)[4];
typedef unsigned char type_17[6];
typedef void(*type_19)(_anon1*)[2];
typedef _anon0* type_20[1];

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
unsigned char plpower_m;
unsigned char plpower_a;

void tr8_fout(_anon1* trapwk);
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

// 
// Start address: 0x1027d20
void tr8_fout(_anon1* trapwk)
{
	unsigned short status;
	// Line 18, Address: 0x1027d20, Func Offset: 0
	// Line 21, Address: 0x1027d30, Func Offset: 0x10
	// Line 22, Address: 0x1027d64, Func Offset: 0x44
	// Line 23, Address: 0x1027d8c, Func Offset: 0x6c
	// Line 24, Address: 0x1027da8, Func Offset: 0x88
	// Line 25, Address: 0x1027db4, Func Offset: 0x94
	// Func End, Address: 0x1027dc8, Func Offset: 0xa8
}

// 
// Start address: 0x1027dd0
void togeita(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[4];
	// Line 116, Address: 0x1027dd0, Func Offset: 0
	// Line 117, Address: 0x1027ddc, Func Offset: 0xc
	// Line 120, Address: 0x1027e08, Func Offset: 0x38
	// Line 121, Address: 0x1027e34, Func Offset: 0x64
	// Line 122, Address: 0x1027e70, Func Offset: 0xa0
	// Line 123, Address: 0x1027e7c, Func Offset: 0xac
	// Line 124, Address: 0x1027e88, Func Offset: 0xb8
	// Line 125, Address: 0x1027e9c, Func Offset: 0xcc
	// Func End, Address: 0x1027eac, Func Offset: 0xdc
}

// 
// Start address: 0x1027eb0
void togeita_ridechk(_anon1* trapwk)
{
	short cal_position;
	// Line 128, Address: 0x1027eb0, Func Offset: 0
	// Line 131, Address: 0x1027ec0, Func Offset: 0x10
	// Line 132, Address: 0x1027ed8, Func Offset: 0x28
	// Line 133, Address: 0x1027ef0, Func Offset: 0x40
	// Line 134, Address: 0x1027f3c, Func Offset: 0x8c
	// Line 135, Address: 0x1027f58, Func Offset: 0xa8
	// Line 136, Address: 0x1027f6c, Func Offset: 0xbc
	// Line 137, Address: 0x1027f80, Func Offset: 0xd0
	// Func End, Address: 0x1027f94, Func Offset: 0xe4
}

// 
// Start address: 0x1027fa0
void togeita_init(_anon1* trapwk)
{
	unsigned char patchg_point;
	_anon1* new_actwk;
	// Line 140, Address: 0x1027fa0, Func Offset: 0
	// Line 144, Address: 0x1027fb0, Func Offset: 0x10
	// Line 145, Address: 0x1027fc0, Func Offset: 0x20
	// Line 146, Address: 0x1027fd0, Func Offset: 0x30
	// Line 148, Address: 0x1027fdc, Func Offset: 0x3c
	// Line 150, Address: 0x1027fec, Func Offset: 0x4c
	// Line 152, Address: 0x1027ff8, Func Offset: 0x58
	// Line 154, Address: 0x102800c, Func Offset: 0x6c
	// Line 155, Address: 0x1028024, Func Offset: 0x84
	// Line 156, Address: 0x1028040, Func Offset: 0xa0
	// Line 157, Address: 0x1028060, Func Offset: 0xc0
	// Line 158, Address: 0x1028080, Func Offset: 0xe0
	// Line 159, Address: 0x1028090, Func Offset: 0xf0
	// Line 160, Address: 0x10280a0, Func Offset: 0x100
	// Line 161, Address: 0x10280d8, Func Offset: 0x138
	// Line 163, Address: 0x10280e4, Func Offset: 0x144
	// Line 164, Address: 0x102810c, Func Offset: 0x16c
	// Line 165, Address: 0x1028118, Func Offset: 0x178
	// Line 166, Address: 0x1028124, Func Offset: 0x184
	// Line 168, Address: 0x102813c, Func Offset: 0x19c
	// Line 169, Address: 0x1028164, Func Offset: 0x1c4
	// Line 170, Address: 0x1028170, Func Offset: 0x1d0
	// Line 171, Address: 0x102817c, Func Offset: 0x1dc
	// Line 174, Address: 0x1028194, Func Offset: 0x1f4
	// Line 175, Address: 0x10281ac, Func Offset: 0x20c
	// Line 176, Address: 0x10281c0, Func Offset: 0x220
	// Line 177, Address: 0x10281cc, Func Offset: 0x22c
	// Line 178, Address: 0x10281d8, Func Offset: 0x238
	// Line 179, Address: 0x10281e8, Func Offset: 0x248
	// Line 180, Address: 0x10281f8, Func Offset: 0x258
	// Line 181, Address: 0x102822c, Func Offset: 0x28c
	// Line 182, Address: 0x1028260, Func Offset: 0x2c0
	// Func End, Address: 0x1028274, Func Offset: 0x2d4
}

// 
// Start address: 0x1028280
void togeita_dataset(_anon1* trapwk, _anon1* new_actwk, unsigned char* togeita_data)
{
	unsigned char patchg_point;
	// Line 185, Address: 0x1028280, Func Offset: 0
	// Line 188, Address: 0x1028294, Func Offset: 0x14
	// Line 189, Address: 0x10282ac, Func Offset: 0x2c
	// Line 190, Address: 0x10282c4, Func Offset: 0x44
	// Line 191, Address: 0x10282e0, Func Offset: 0x60
	// Line 192, Address: 0x10282fc, Func Offset: 0x7c
	// Line 194, Address: 0x102830c, Func Offset: 0x8c
	// Line 195, Address: 0x102831c, Func Offset: 0x9c
	// Line 197, Address: 0x102836c, Func Offset: 0xec
	// Line 198, Address: 0x102837c, Func Offset: 0xfc
	// Func End, Address: 0x102838c, Func Offset: 0x10c
}

// 
// Start address: 0x1028390
void setitano(_anon1* trapwk)
{
	unsigned char tbl[56];
	// Line 202, Address: 0x1028390, Func Offset: 0
	// Line 203, Address: 0x1028398, Func Offset: 0x8
	// Line 213, Address: 0x10283cc, Func Offset: 0x3c
	// Line 214, Address: 0x10283ec, Func Offset: 0x5c
	// Func End, Address: 0x10283f8, Func Offset: 0x68
}

// 
// Start address: 0x1028400
void togeita_move1(_anon1* trapwk)
{
	short position_check;
	short cal_x;
	// Line 218, Address: 0x1028400, Func Offset: 0
	// Line 221, Address: 0x1028414, Func Offset: 0x14
	// Line 222, Address: 0x1028460, Func Offset: 0x60
	// Line 224, Address: 0x1028474, Func Offset: 0x74
	// Line 225, Address: 0x10284a0, Func Offset: 0xa0
	// Line 226, Address: 0x10284ac, Func Offset: 0xac
	// Line 227, Address: 0x10284d4, Func Offset: 0xd4
	// Func End, Address: 0x10284ec, Func Offset: 0xec
}

// 
// Start address: 0x10284f0
unsigned char togeita_plchk_1(_anon1* trapwk, short cal_x)
{
	short position_check;
	// Line 231, Address: 0x10284f0, Func Offset: 0
	// Line 234, Address: 0x1028500, Func Offset: 0x10
	// Line 235, Address: 0x102855c, Func Offset: 0x6c
	// Line 236, Address: 0x1028568, Func Offset: 0x78
	// Line 237, Address: 0x1028598, Func Offset: 0xa8
	// Line 238, Address: 0x102859c, Func Offset: 0xac
	// Func End, Address: 0x10285ac, Func Offset: 0xbc
}

// 
// Start address: 0x10285b0
void togeita_move2(_anon1* trapwk)
{
	short col_data;
	int stack_yposi;
	short tbl[6];
	// Line 242, Address: 0x10285b0, Func Offset: 0
	// Line 245, Address: 0x10285c4, Func Offset: 0x14
	// Line 248, Address: 0x10285f8, Func Offset: 0x48
	// Line 249, Address: 0x1028624, Func Offset: 0x74
	// Line 250, Address: 0x1028630, Func Offset: 0x80
	// Line 251, Address: 0x1028644, Func Offset: 0x94
	// Line 252, Address: 0x102864c, Func Offset: 0x9c
	// Line 253, Address: 0x1028678, Func Offset: 0xc8
	// Line 254, Address: 0x102868c, Func Offset: 0xdc
	// Line 255, Address: 0x1028694, Func Offset: 0xe4
	// Line 256, Address: 0x10286a4, Func Offset: 0xf4
	// Line 257, Address: 0x10286b8, Func Offset: 0x108
	// Line 258, Address: 0x10286c4, Func Offset: 0x114
	// Line 259, Address: 0x10286cc, Func Offset: 0x11c
	// Line 260, Address: 0x10286d4, Func Offset: 0x124
	// Line 262, Address: 0x10286e0, Func Offset: 0x130
	// Func End, Address: 0x10286f8, Func Offset: 0x148
}

// 
// Start address: 0x1028700
void itaset_chk(_anon1* trapwk)
{
	short cal_position;
	_anon1* new_actwk;
	// Line 266, Address: 0x1028700, Func Offset: 0
	// Line 270, Address: 0x1028710, Func Offset: 0x10
	// Line 271, Address: 0x102875c, Func Offset: 0x5c
	// Line 272, Address: 0x1028778, Func Offset: 0x78
	// Line 274, Address: 0x102878c, Func Offset: 0x8c
	// Line 275, Address: 0x10287a8, Func Offset: 0xa8
	// Line 287, Address: 0x10287f8, Func Offset: 0xf8
	// Line 290, Address: 0x1028800, Func Offset: 0x100
	// Line 291, Address: 0x1028818, Func Offset: 0x118
	// Line 293, Address: 0x102882c, Func Offset: 0x12c
	// Line 294, Address: 0x1028838, Func Offset: 0x138
	// Line 295, Address: 0x1028848, Func Offset: 0x148
	// Line 297, Address: 0x1028898, Func Offset: 0x198
	// Line 298, Address: 0x10288a8, Func Offset: 0x1a8
	// Line 300, Address: 0x10288b8, Func Offset: 0x1b8
	// Func End, Address: 0x10288cc, Func Offset: 0x1cc
}

// 
// Start address: 0x10288d0
void togeita_move3(_anon1* trapwk)
{
	// Line 304, Address: 0x10288d0, Func Offset: 0
	// Line 305, Address: 0x10288d8, Func Offset: 0x8
	// Line 306, Address: 0x10288e8, Func Offset: 0x18
	// Func End, Address: 0x10288f4, Func Offset: 0x24
}

// 
// Start address: 0x1028900
void togeitax(_anon1* trapwk)
{
	unsigned short ride_number;
	unsigned char colitbl[6];
	// Line 310, Address: 0x1028900, Func Offset: 0
	// Line 312, Address: 0x1028910, Func Offset: 0x10
	// Line 320, Address: 0x1028944, Func Offset: 0x44
	// Line 321, Address: 0x1028954, Func Offset: 0x54
	// Line 323, Address: 0x1028964, Func Offset: 0x64
	// Line 326, Address: 0x1028970, Func Offset: 0x70
	// Line 327, Address: 0x102897c, Func Offset: 0x7c
	// Line 328, Address: 0x10289ac, Func Offset: 0xac
	// Line 329, Address: 0x10289c0, Func Offset: 0xc0
	// Line 330, Address: 0x10289e8, Func Offset: 0xe8
	// Line 332, Address: 0x1028a24, Func Offset: 0x124
	// Line 333, Address: 0x1028a40, Func Offset: 0x140
	// Line 334, Address: 0x1028a4c, Func Offset: 0x14c
	// Func End, Address: 0x1028a60, Func Offset: 0x160
}

// 
// Start address: 0x1028a60
void togedair8(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 374, Address: 0x1028a60, Func Offset: 0
	// Line 375, Address: 0x1028a6c, Func Offset: 0xc
	// Line 377, Address: 0x1028a88, Func Offset: 0x28
	// Line 378, Address: 0x1028ab4, Func Offset: 0x54
	// Line 379, Address: 0x1028af0, Func Offset: 0x90
	// Line 380, Address: 0x1028afc, Func Offset: 0x9c
	// Line 381, Address: 0x1028b10, Func Offset: 0xb0
	// Func End, Address: 0x1028b20, Func Offset: 0xc0
}

// 
// Start address: 0x1028b20
void dair8_init(_anon1* trapwk)
{
	_anon1* new_actwk;
	// Line 385, Address: 0x1028b20, Func Offset: 0
	// Line 388, Address: 0x1028b2c, Func Offset: 0xc
	// Line 390, Address: 0x1028b3c, Func Offset: 0x1c
	// Line 391, Address: 0x1028b48, Func Offset: 0x28
	// Line 392, Address: 0x1028b58, Func Offset: 0x38
	// Line 393, Address: 0x1028b68, Func Offset: 0x48
	// Line 394, Address: 0x1028b78, Func Offset: 0x58
	// Line 395, Address: 0x1028b90, Func Offset: 0x70
	// Line 397, Address: 0x1028bb8, Func Offset: 0x98
	// Line 398, Address: 0x1028bc8, Func Offset: 0xa8
	// Line 399, Address: 0x1028be4, Func Offset: 0xc4
	// Line 400, Address: 0x1028bf0, Func Offset: 0xd0
	// Line 401, Address: 0x1028c00, Func Offset: 0xe0
	// Line 402, Address: 0x1028c10, Func Offset: 0xf0
	// Line 403, Address: 0x1028c1c, Func Offset: 0xfc
	// Line 404, Address: 0x1028c50, Func Offset: 0x130
	// Line 405, Address: 0x1028c60, Func Offset: 0x140
	// Line 406, Address: 0x1028c6c, Func Offset: 0x14c
	// Line 407, Address: 0x1028c74, Func Offset: 0x154
	// Line 408, Address: 0x1028c80, Func Offset: 0x160
	// Line 409, Address: 0x1028c8c, Func Offset: 0x16c
	// Line 410, Address: 0x1028c9c, Func Offset: 0x17c
	// Line 411, Address: 0x1028cac, Func Offset: 0x18c
	// Line 412, Address: 0x1028cb8, Func Offset: 0x198
	// Line 413, Address: 0x1028cec, Func Offset: 0x1cc
	// Line 415, Address: 0x1028cf8, Func Offset: 0x1d8
	// Func End, Address: 0x1028d08, Func Offset: 0x1e8
}

// 
// Start address: 0x1028d10
void dair8_move(_anon1* trapwk)
{
	short cal_position;
	// Line 419, Address: 0x1028d10, Func Offset: 0
	// Line 422, Address: 0x1028d20, Func Offset: 0x10
	// Line 424, Address: 0x1028d38, Func Offset: 0x28
	// Line 425, Address: 0x1028d84, Func Offset: 0x74
	// Line 426, Address: 0x1028da0, Func Offset: 0x90
	// Line 429, Address: 0x1028db4, Func Offset: 0xa4
	// Line 430, Address: 0x1028dc8, Func Offset: 0xb8
	// Func End, Address: 0x1028ddc, Func Offset: 0xcc
}

// 
// Start address: 0x1028de0
void harir8(_anon1* trapwk)
{
	unsigned short master;
	void(*tbl)(_anon1*)[2];
	// Line 438, Address: 0x1028de0, Func Offset: 0
	// Line 440, Address: 0x1028df0, Func Offset: 0x10
	// Line 442, Address: 0x1028e0c, Func Offset: 0x2c
	// Line 443, Address: 0x1028e48, Func Offset: 0x68
	// Line 444, Address: 0x1028e54, Func Offset: 0x74
	// Line 446, Address: 0x1028e6c, Func Offset: 0x8c
	// Line 447, Address: 0x1028eac, Func Offset: 0xcc
	// Line 449, Address: 0x1028f08, Func Offset: 0x128
	// Line 453, Address: 0x1028f64, Func Offset: 0x184
	// Line 454, Address: 0x1028f78, Func Offset: 0x198
	// Func End, Address: 0x1028f8c, Func Offset: 0x1ac
}

// 
// Start address: 0x1028f90
void harir8_init(_anon1* trapwk)
{
	// Line 458, Address: 0x1028f90, Func Offset: 0
	// Line 459, Address: 0x1028f9c, Func Offset: 0xc
	// Line 460, Address: 0x1028fac, Func Offset: 0x1c
	// Line 462, Address: 0x1028fbc, Func Offset: 0x2c
	// Line 463, Address: 0x1028fc8, Func Offset: 0x38
	// Line 464, Address: 0x1028fd8, Func Offset: 0x48
	// Line 465, Address: 0x1028fe8, Func Offset: 0x58
	// Line 467, Address: 0x1028ff8, Func Offset: 0x68
	// Line 468, Address: 0x1029004, Func Offset: 0x74
	// Line 469, Address: 0x1029010, Func Offset: 0x80
	// Line 470, Address: 0x102902c, Func Offset: 0x9c
	// Line 471, Address: 0x1029038, Func Offset: 0xa8
	// Line 472, Address: 0x1029044, Func Offset: 0xb4
	// Line 474, Address: 0x1029050, Func Offset: 0xc0
	// Line 475, Address: 0x102905c, Func Offset: 0xcc
	// Func End, Address: 0x102906c, Func Offset: 0xdc
}

// 
// Start address: 0x1029070
void harir8_move(_anon1* trapwk)
{
	short cal_position;
	// Line 479, Address: 0x1029070, Func Offset: 0
	// Line 482, Address: 0x1029080, Func Offset: 0x10
	// Line 484, Address: 0x1029094, Func Offset: 0x24
	// Line 485, Address: 0x10290e0, Func Offset: 0x70
	// Line 486, Address: 0x10290fc, Func Offset: 0x8c
	// Line 488, Address: 0x1029110, Func Offset: 0xa0
	// Line 489, Address: 0x1029134, Func Offset: 0xc4
	// Line 490, Address: 0x102914c, Func Offset: 0xdc
	// Line 492, Address: 0x1029174, Func Offset: 0x104
	// Line 493, Address: 0x102918c, Func Offset: 0x11c
	// Line 494, Address: 0x10291a4, Func Offset: 0x134
	// Line 495, Address: 0x10291cc, Func Offset: 0x15c
	// Line 496, Address: 0x10291e0, Func Offset: 0x170
	// Line 500, Address: 0x10291e8, Func Offset: 0x178
	// Line 502, Address: 0x1029200, Func Offset: 0x190
	// Line 503, Address: 0x102924c, Func Offset: 0x1dc
	// Line 504, Address: 0x1029268, Func Offset: 0x1f8
	// Line 507, Address: 0x102927c, Func Offset: 0x20c
	// Line 508, Address: 0x1029290, Func Offset: 0x220
	// Func End, Address: 0x10292a4, Func Offset: 0x234
}

