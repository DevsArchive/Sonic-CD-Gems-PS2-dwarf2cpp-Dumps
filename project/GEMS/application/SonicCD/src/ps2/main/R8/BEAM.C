typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_10)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[4];
typedef char type_3[8];
typedef unsigned char type_4[4];
typedef unsigned char type_5[4];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef unsigned char type_8[4];
typedef unsigned char type_9[4];
typedef void(*type_11)(_anon1*)[5];
typedef _anon0* type_12[21];
typedef _anon1 type_13[128];
typedef unsigned char* type_14[9];
typedef unsigned char type_15[4];
typedef unsigned char type_16[4];
typedef _anon0* type_17[21];
typedef unsigned char type_18[4];
typedef unsigned char type_19[4];

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

_anon0 bea00;
_anon0 bea01;
_anon0 bea02;
_anon0 bea03;
_anon0 bea04;
_anon0 bea05;
_anon0 bea06;
_anon0 bea07;
_anon0 bea08;
_anon0 bea09;
_anon0 bea0a;
_anon0 bea0b;
_anon0 bea0c;
_anon0 bea0d;
_anon0 bea0e;
_anon0 bea0f;
_anon0 bea10;
_anon0 bea11;
_anon0 bea12;
_anon0 bea13;
_anon0 bea14;
_anon0 bea15;
_anon0 bea16;
_anon0 bea17;
_anon0 bea18;
_anon0 bea19;
_anon0 bea1a;
_anon0 bea1b;
_anon0 bea1c;
_anon0 bea1d;
_anon0* beampat[21];
_anon0* beampat0[21];
unsigned char beamchg0[4];
unsigned char beamchg1[4];
unsigned char beamchg2[4];
unsigned char beamchg3[4];
unsigned char beamchg4[4];
unsigned char beamchg5[4];
unsigned char beamchg6[4];
unsigned char beamchg7[4];
unsigned char beamchg8[4];
unsigned char* beamchg[9];
unsigned char chibi_flag;
_anon1 actwk[128];
_anon5 editmode;

void beam(_anon1* beamwk);
void beam_init(_anon1* beamwk);
void beam_mast(_anon1* beamwk);
void beam_move0(_anon1* beamwk);
void beam_move1(_anon1* beamwk);
void beam_move2(_anon1* beamwk);
void beam_coli0(_anon1* beamwk);
void beam_coli(_anon1* beamwk);

// 
// Start address: 0x1023110
void beam(_anon1* beamwk)
{
	void(*tbl)(_anon1*)[5];
	// Line 414, Address: 0x1023110, Func Offset: 0
	// Line 415, Address: 0x102311c, Func Offset: 0xc
	// Line 418, Address: 0x1023148, Func Offset: 0x38
	// Line 419, Address: 0x1023184, Func Offset: 0x74
	// Line 420, Address: 0x1023190, Func Offset: 0x80
	// Line 421, Address: 0x102319c, Func Offset: 0x8c
	// Func End, Address: 0x10231ac, Func Offset: 0x9c
}

// 
// Start address: 0x10231b0
void beam_init(_anon1* beamwk)
{
	// Line 425, Address: 0x10231b0, Func Offset: 0
	// Line 426, Address: 0x10231bc, Func Offset: 0xc
	// Line 427, Address: 0x10231cc, Func Offset: 0x1c
	// Line 429, Address: 0x10231dc, Func Offset: 0x2c
	// Line 430, Address: 0x10231ec, Func Offset: 0x3c
	// Line 431, Address: 0x10231f8, Func Offset: 0x48
	// Line 432, Address: 0x1023208, Func Offset: 0x58
	// Line 433, Address: 0x1023214, Func Offset: 0x64
	// Line 435, Address: 0x1023224, Func Offset: 0x74
	// Line 436, Address: 0x1023230, Func Offset: 0x80
	// Line 437, Address: 0x102323c, Func Offset: 0x8c
	// Func End, Address: 0x102324c, Func Offset: 0x9c
}

// 
// Start address: 0x1023250
void beam_mast(_anon1* beamwk)
{
	_anon1* new_actwk;
	// Line 440, Address: 0x1023250, Func Offset: 0
	// Line 443, Address: 0x102325c, Func Offset: 0xc
	// Line 445, Address: 0x1023278, Func Offset: 0x28
	// Line 446, Address: 0x1023290, Func Offset: 0x40
	// Line 448, Address: 0x10232a4, Func Offset: 0x54
	// Line 449, Address: 0x10232b0, Func Offset: 0x60
	// Line 451, Address: 0x10232bc, Func Offset: 0x6c
	// Line 452, Address: 0x10232cc, Func Offset: 0x7c
	// Line 453, Address: 0x10232dc, Func Offset: 0x8c
	// Line 454, Address: 0x10232e8, Func Offset: 0x98
	// Line 455, Address: 0x10232f8, Func Offset: 0xa8
	// Line 456, Address: 0x102331c, Func Offset: 0xcc
	// Line 458, Address: 0x102332c, Func Offset: 0xdc
	// Line 460, Address: 0x1023338, Func Offset: 0xe8
	// Line 461, Address: 0x1023344, Func Offset: 0xf4
	// Line 462, Address: 0x1023364, Func Offset: 0x114
	// Line 463, Address: 0x1023390, Func Offset: 0x140
	// Line 465, Address: 0x102339c, Func Offset: 0x14c
	// Func End, Address: 0x10233ac, Func Offset: 0x15c
}

// 
// Start address: 0x10233b0
void beam_move0(_anon1* beamwk)
{
	_anon1* new_actwk;
	_anon1** parent;
	// Line 468, Address: 0x10233b0, Func Offset: 0
	// Line 471, Address: 0x10233c0, Func Offset: 0x10
	// Line 472, Address: 0x10233d0, Func Offset: 0x20
	// Line 473, Address: 0x10233ec, Func Offset: 0x3c
	// Line 475, Address: 0x1023424, Func Offset: 0x74
	// Line 477, Address: 0x1023438, Func Offset: 0x88
	// Line 478, Address: 0x1023454, Func Offset: 0xa4
	// Line 479, Address: 0x1023464, Func Offset: 0xb4
	// Line 480, Address: 0x102347c, Func Offset: 0xcc
	// Line 481, Address: 0x1023488, Func Offset: 0xd8
	// Line 483, Address: 0x1023490, Func Offset: 0xe0
	// Line 485, Address: 0x102349c, Func Offset: 0xec
	// Line 486, Address: 0x10234ac, Func Offset: 0xfc
	// Line 487, Address: 0x10234bc, Func Offset: 0x10c
	// Line 488, Address: 0x10234cc, Func Offset: 0x11c
	// Line 489, Address: 0x10234dc, Func Offset: 0x12c
	// Line 490, Address: 0x10234e8, Func Offset: 0x138
	// Line 491, Address: 0x10234f4, Func Offset: 0x144
	// Line 492, Address: 0x10234fc, Func Offset: 0x14c
	// Line 494, Address: 0x1023504, Func Offset: 0x154
	// Line 495, Address: 0x1023510, Func Offset: 0x160
	// Func End, Address: 0x1023524, Func Offset: 0x174
}

// 
// Start address: 0x1023530
void beam_move1(_anon1* beamwk)
{
	short cal_yposi;
	_anon1** parent;
	_anon1* new_actwk;
	// Line 498, Address: 0x1023530, Func Offset: 0
	// Line 502, Address: 0x1023548, Func Offset: 0x18
	// Line 503, Address: 0x102356c, Func Offset: 0x3c
	// Line 504, Address: 0x1023580, Func Offset: 0x50
	// Line 505, Address: 0x102358c, Func Offset: 0x5c
	// Line 506, Address: 0x10235a8, Func Offset: 0x78
	// Line 508, Address: 0x10235b8, Func Offset: 0x88
	// Line 509, Address: 0x10235c0, Func Offset: 0x90
	// Line 510, Address: 0x10235d4, Func Offset: 0xa4
	// Line 511, Address: 0x10235e0, Func Offset: 0xb0
	// Line 513, Address: 0x10235e8, Func Offset: 0xb8
	// Line 514, Address: 0x10235fc, Func Offset: 0xcc
	// Line 515, Address: 0x1023604, Func Offset: 0xd4
	// Line 516, Address: 0x1023608, Func Offset: 0xd8
	// Line 518, Address: 0x1023610, Func Offset: 0xe0
	// Line 519, Address: 0x102361c, Func Offset: 0xec
	// Func End, Address: 0x1023638, Func Offset: 0x108
}

// 
// Start address: 0x1023640
void beam_move2(_anon1* beamwk)
{
	// Line 522, Address: 0x1023640, Func Offset: 0
	// Line 523, Address: 0x102364c, Func Offset: 0xc
	// Line 524, Address: 0x1023670, Func Offset: 0x30
	// Line 525, Address: 0x1023684, Func Offset: 0x44
	// Func End, Address: 0x1023694, Func Offset: 0x54
}

// 
// Start address: 0x10236a0
void beam_coli0(_anon1* beamwk)
{
	// Line 529, Address: 0x10236a0, Func Offset: 0
	// Line 530, Address: 0x10236ac, Func Offset: 0xc
	// Line 531, Address: 0x10236c8, Func Offset: 0x28
	// Line 532, Address: 0x10236e0, Func Offset: 0x40
	// Line 533, Address: 0x1023700, Func Offset: 0x60
	// Line 534, Address: 0x1023708, Func Offset: 0x68
	// Line 536, Address: 0x1023728, Func Offset: 0x88
	// Func End, Address: 0x1023738, Func Offset: 0x98
}

// 
// Start address: 0x1023740
void beam_coli(_anon1* beamwk)
{
	short cal_size;
	short cal_posi;
	short cal_tbl;
	char tbl[8];
	// Line 539, Address: 0x1023740, Func Offset: 0
	// Line 541, Address: 0x1023754, Func Offset: 0x14
	// Line 543, Address: 0x1023788, Func Offset: 0x48
	// Line 544, Address: 0x1023798, Func Offset: 0x58
	// Line 545, Address: 0x10237c4, Func Offset: 0x84
	// Line 546, Address: 0x1023804, Func Offset: 0xc4
	// Line 547, Address: 0x102383c, Func Offset: 0xfc
	// Line 548, Address: 0x102385c, Func Offset: 0x11c
	// Line 549, Address: 0x1023888, Func Offset: 0x148
	// Line 550, Address: 0x10238b0, Func Offset: 0x170
	// Line 551, Address: 0x10238c4, Func Offset: 0x184
	// Line 552, Address: 0x10238e0, Func Offset: 0x1a0
	// Line 553, Address: 0x102390c, Func Offset: 0x1cc
	// Line 554, Address: 0x1023930, Func Offset: 0x1f0
	// Line 556, Address: 0x102394c, Func Offset: 0x20c
	// Line 557, Address: 0x1023958, Func Offset: 0x218
	// Line 558, Address: 0x102396c, Func Offset: 0x22c
	// Line 559, Address: 0x1023978, Func Offset: 0x238
	// Line 560, Address: 0x1023984, Func Offset: 0x244
	// Line 561, Address: 0x10239b0, Func Offset: 0x270
	// Line 562, Address: 0x10239d4, Func Offset: 0x294
	// Line 563, Address: 0x10239dc, Func Offset: 0x29c
	// Line 564, Address: 0x10239e8, Func Offset: 0x2a8
	// Line 565, Address: 0x10239f4, Func Offset: 0x2b4
	// Line 566, Address: 0x1023a00, Func Offset: 0x2c0
	// Line 567, Address: 0x1023a14, Func Offset: 0x2d4
	// Line 568, Address: 0x1023a28, Func Offset: 0x2e8
	// Line 569, Address: 0x1023a34, Func Offset: 0x2f4
	// Line 571, Address: 0x1023a40, Func Offset: 0x300
	// Func End, Address: 0x1023a58, Func Offset: 0x318
}

