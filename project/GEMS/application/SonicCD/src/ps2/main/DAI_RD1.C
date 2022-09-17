typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_7)(_anon1*);
typedef void(*type_9)(_anon1*);
typedef void(*type_13)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[2];
typedef unsigned char type_3[3];
typedef unsigned char type_4[4];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef void(*type_8)(_anon1*)[2];
typedef void(*type_10)(_anon1*)[3];
typedef unsigned char type_11[766];
typedef _anon1 type_12[128];
typedef void(*type_14)(_anon1*)[10];
typedef _anon0* type_15[3];

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

_anon0 dai11a_pat1;
_anon0 dai11a_pat2;
_anon0 dai11a_pat3;
_anon0* dai11a_pattbl[3];
void(*dodai_acttbl)(_anon1*)[2];
_anon1 actwk[128];
void(*dodai_mtype)(_anon1*)[10];
_anon2 scra_h_posit;
short time_stop;
_anon2 scra_v_posit;
unsigned char flagwork[766];
unsigned char time_flag;
_anon0 vfuta_pat0;
_anon0 vfuta_pat1;
_anon0* vfutapat[2];
void(*vfuta_tbl)(_anon1*)[3];

void dodai(_anon1* pActwk);
void dodai_init(_anon1* pActwk);
void dodai_move(_anon1* pActwk);
void dodai_ud(_anon1* pActwk);
void dodai_lr(_anon1* pActwk);
unsigned char dodai_ride1(_anon1* pActwk, int xpos);
unsigned char dodai_ride2(_anon1* pActwk);
void dodai_nA(_anon1* pActwk);
void dodai_nB(_anon1* pActwk);
unsigned char dodai_fix(_anon1* pActwk);
void dodai_fal(_anon1* pActwk);
void dodai_up(_anon1* pActwk);
void dodai_upx(_anon1* pActwk);
void dodai_rm(_anon1* pActwk);
void dodai_lm(_anon1* pActwk);
short dodai_sub(_anon1* pActwk);
void dai_fout(_anon1* pActwk);
void vfuta(_anon1* pActwk);
void vfuta_init(_anon1* pActwk);
void vfuta_move1(_anon1* pActwk);
void vfuta_move2(_anon1* pActwk);

// 
// Start address: 0x1002090
void dodai(_anon1* pActwk)
{
	// Line 149, Address: 0x1002090, Func Offset: 0
	// Line 150, Address: 0x100209c, Func Offset: 0xc
	// Line 151, Address: 0x10020e0, Func Offset: 0x50
	// Line 152, Address: 0x10020ec, Func Offset: 0x5c
	// Func End, Address: 0x10020fc, Func Offset: 0x6c
}

// 
// Start address: 0x1002100
void dodai_init(_anon1* pActwk)
{
	char wk;
	_anon1* pNewact;
	unsigned char dai_mcnttbl[4];
	unsigned char dai_hstbl[3];
	// Line 158, Address: 0x1002100, Func Offset: 0
	// Line 167, Address: 0x1002110, Func Offset: 0x10
	// Line 168, Address: 0x1002120, Func Offset: 0x20
	// Line 169, Address: 0x100212c, Func Offset: 0x2c
	// Line 172, Address: 0x1002138, Func Offset: 0x38
	// Line 173, Address: 0x1002148, Func Offset: 0x48
	// Line 174, Address: 0x1002158, Func Offset: 0x58
	// Line 176, Address: 0x1002168, Func Offset: 0x68
	// Line 177, Address: 0x1002178, Func Offset: 0x78
	// Line 178, Address: 0x100219c, Func Offset: 0x9c
	// Line 181, Address: 0x10021a4, Func Offset: 0xa4
	// Line 182, Address: 0x10021c4, Func Offset: 0xc4
	// Line 184, Address: 0x10021d0, Func Offset: 0xd0
	// Line 185, Address: 0x10021f8, Func Offset: 0xf8
	// Line 188, Address: 0x1002218, Func Offset: 0x118
	// Line 189, Address: 0x1002228, Func Offset: 0x128
	// Line 191, Address: 0x1002248, Func Offset: 0x148
	// Line 193, Address: 0x100225c, Func Offset: 0x15c
	// Line 194, Address: 0x1002268, Func Offset: 0x168
	// Line 196, Address: 0x1002270, Func Offset: 0x170
	// Line 197, Address: 0x100227c, Func Offset: 0x17c
	// Line 198, Address: 0x100228c, Func Offset: 0x18c
	// Line 199, Address: 0x10022b0, Func Offset: 0x1b0
	// Line 203, Address: 0x10022bc, Func Offset: 0x1bc
	// Line 206, Address: 0x10022f0, Func Offset: 0x1f0
	// Line 207, Address: 0x1002314, Func Offset: 0x214
	// Line 208, Address: 0x1002338, Func Offset: 0x238
	// Line 209, Address: 0x1002340, Func Offset: 0x240
	// Line 212, Address: 0x1002360, Func Offset: 0x260
	// Func End, Address: 0x1002374, Func Offset: 0x274
}

// 
// Start address: 0x1002380
void dodai_move(_anon1* pActwk)
{
	unsigned char mtype;
	unsigned short xlen;
	// Line 234, Address: 0x1002380, Func Offset: 0
	// Line 238, Address: 0x1002394, Func Offset: 0x14
	// Line 239, Address: 0x10023a4, Func Offset: 0x24
	// Line 240, Address: 0x10023b8, Func Offset: 0x38
	// Line 245, Address: 0x10023c0, Func Offset: 0x40
	// Line 246, Address: 0x10023e0, Func Offset: 0x60
	// Line 248, Address: 0x1002404, Func Offset: 0x84
	// Line 249, Address: 0x100241c, Func Offset: 0x9c
	// Line 250, Address: 0x1002444, Func Offset: 0xc4
	// Line 251, Address: 0x1002454, Func Offset: 0xd4
	// Line 252, Address: 0x1002468, Func Offset: 0xe8
	// Line 254, Address: 0x1002474, Func Offset: 0xf4
	// Func End, Address: 0x100248c, Func Offset: 0x10c
}

// 
// Start address: 0x1002490
void dodai_ud(_anon1* pActwk)
{
	// Line 258, Address: 0x1002490, Func Offset: 0
	// Line 259, Address: 0x100249c, Func Offset: 0xc
	// Line 260, Address: 0x10024ac, Func Offset: 0x1c
	// Line 262, Address: 0x10024e4, Func Offset: 0x54
	// Line 263, Address: 0x10024f8, Func Offset: 0x68
	// Func End, Address: 0x1002508, Func Offset: 0x78
}

// 
// Start address: 0x1002510
void dodai_lr(_anon1* pActwk)
{
	int xsav;
	// Line 267, Address: 0x1002510, Func Offset: 0
	// Line 270, Address: 0x1002520, Func Offset: 0x10
	// Line 271, Address: 0x1002528, Func Offset: 0x18
	// Line 273, Address: 0x1002560, Func Offset: 0x50
	// Line 275, Address: 0x1002570, Func Offset: 0x60
	// Line 279, Address: 0x10025b0, Func Offset: 0xa0
	// Line 280, Address: 0x10025c0, Func Offset: 0xb0
	// Func End, Address: 0x10025d4, Func Offset: 0xc4
}

// 
// Start address: 0x10025e0
unsigned char dodai_ride1(_anon1* pActwk, int xpos)
{
	// Line 283, Address: 0x10025e0, Func Offset: 0
	// Line 284, Address: 0x10025f0, Func Offset: 0x10
	// Line 285, Address: 0x1002614, Func Offset: 0x34
	// Line 286, Address: 0x1002620, Func Offset: 0x40
	// Func End, Address: 0x1002630, Func Offset: 0x50
}

// 
// Start address: 0x1002630
unsigned char dodai_ride2(_anon1* pActwk)
{
	// Line 289, Address: 0x1002630, Func Offset: 0
	// Line 290, Address: 0x100263c, Func Offset: 0xc
	// Line 292, Address: 0x1002658, Func Offset: 0x28
	// Line 293, Address: 0x1002668, Func Offset: 0x38
	// Line 295, Address: 0x1002678, Func Offset: 0x48
	// Line 298, Address: 0x1002684, Func Offset: 0x54
	// Line 299, Address: 0x100269c, Func Offset: 0x6c
	// Line 302, Address: 0x10026ac, Func Offset: 0x7c
	// Line 303, Address: 0x10026b0, Func Offset: 0x80
	// Func End, Address: 0x10026c0, Func Offset: 0x90
}

// 
// Start address: 0x10026c0
void dodai_nA(_anon1* pActwk)
{
	int xsav;
	// Line 307, Address: 0x10026c0, Func Offset: 0
	// Line 310, Address: 0x10026d0, Func Offset: 0x10
	// Line 311, Address: 0x10026d8, Func Offset: 0x18
	// Line 312, Address: 0x10026e8, Func Offset: 0x28
	// Line 314, Address: 0x1002720, Func Offset: 0x60
	// Line 316, Address: 0x1002758, Func Offset: 0x98
	// Line 317, Address: 0x1002768, Func Offset: 0xa8
	// Func End, Address: 0x100277c, Func Offset: 0xbc
}

// 
// Start address: 0x1002780
void dodai_nB(_anon1* pActwk)
{
	int xsav;
	// Line 321, Address: 0x1002780, Func Offset: 0
	// Line 324, Address: 0x1002790, Func Offset: 0x10
	// Line 325, Address: 0x1002798, Func Offset: 0x18
	// Line 326, Address: 0x10027a8, Func Offset: 0x28
	// Line 328, Address: 0x10027e0, Func Offset: 0x60
	// Line 330, Address: 0x1002818, Func Offset: 0x98
	// Line 331, Address: 0x1002828, Func Offset: 0xa8
	// Func End, Address: 0x100283c, Func Offset: 0xbc
}

// 
// Start address: 0x1002840
unsigned char dodai_fix(_anon1* pActwk)
{
	// Line 335, Address: 0x1002840, Func Offset: 0
	// Line 336, Address: 0x100284c, Func Offset: 0xc
	// Line 338, Address: 0x100288c, Func Offset: 0x4c
	// Line 339, Address: 0x1002898, Func Offset: 0x58
	// Func End, Address: 0x10028a8, Func Offset: 0x68
}

// 
// Start address: 0x10028b0
void dodai_fal(_anon1* pActwk)
{
	// Line 343, Address: 0x10028b0, Func Offset: 0
	// Line 344, Address: 0x10028bc, Func Offset: 0xc
	// Line 345, Address: 0x10028cc, Func Offset: 0x1c
	// Line 350, Address: 0x10028e0, Func Offset: 0x30
	// Line 351, Address: 0x10028ec, Func Offset: 0x3c
	// Line 355, Address: 0x10028fc, Func Offset: 0x4c
	// Line 356, Address: 0x100290c, Func Offset: 0x5c
	// Line 357, Address: 0x100291c, Func Offset: 0x6c
	// Line 358, Address: 0x1002928, Func Offset: 0x78
	// Line 362, Address: 0x1002930, Func Offset: 0x80
	// Line 363, Address: 0x1002944, Func Offset: 0x94
	// Line 365, Address: 0x1002968, Func Offset: 0xb8
	// Line 366, Address: 0x1002984, Func Offset: 0xd4
	// Line 371, Address: 0x1002994, Func Offset: 0xe4
	// Line 373, Address: 0x10029c4, Func Offset: 0x114
	// Line 374, Address: 0x10029d8, Func Offset: 0x128
	// Line 376, Address: 0x10029e4, Func Offset: 0x134
	// Func End, Address: 0x10029f4, Func Offset: 0x144
}

// 
// Start address: 0x1002a00
void dodai_up(_anon1* pActwk)
{
	// Line 380, Address: 0x1002a00, Func Offset: 0
	// Line 381, Address: 0x1002a0c, Func Offset: 0xc
	// Line 383, Address: 0x1002a40, Func Offset: 0x40
	// Line 387, Address: 0x1002a54, Func Offset: 0x54
	// Line 389, Address: 0x1002a64, Func Offset: 0x64
	// Line 390, Address: 0x1002a7c, Func Offset: 0x7c
	// Line 392, Address: 0x1002ab4, Func Offset: 0xb4
	// Line 393, Address: 0x1002ac4, Func Offset: 0xc4
	// Line 394, Address: 0x1002ad8, Func Offset: 0xd8
	// Line 397, Address: 0x1002ae0, Func Offset: 0xe0
	// Line 398, Address: 0x1002af0, Func Offset: 0xf0
	// Line 400, Address: 0x1002b00, Func Offset: 0x100
	// Line 404, Address: 0x1002b0c, Func Offset: 0x10c
	// Func End, Address: 0x1002b1c, Func Offset: 0x11c
}

// 
// Start address: 0x1002b20
void dodai_upx(_anon1* pActwk)
{
	short coli;
	// Line 408, Address: 0x1002b20, Func Offset: 0
	// Line 411, Address: 0x1002b30, Func Offset: 0x10
	// Line 413, Address: 0x1002b64, Func Offset: 0x44
	// Line 417, Address: 0x1002b78, Func Offset: 0x58
	// Line 418, Address: 0x1002b88, Func Offset: 0x68
	// Line 420, Address: 0x1002b94, Func Offset: 0x74
	// Line 421, Address: 0x1002ba4, Func Offset: 0x84
	// Line 422, Address: 0x1002bb4, Func Offset: 0x94
	// Line 423, Address: 0x1002bc0, Func Offset: 0xa0
	// Line 426, Address: 0x1002bc8, Func Offset: 0xa8
	// Line 427, Address: 0x1002bd4, Func Offset: 0xb4
	// Line 429, Address: 0x1002be4, Func Offset: 0xc4
	// Line 430, Address: 0x1002c10, Func Offset: 0xf0
	// Line 431, Address: 0x1002c1c, Func Offset: 0xfc
	// Line 434, Address: 0x1002c24, Func Offset: 0x104
	// Line 435, Address: 0x1002c34, Func Offset: 0x114
	// Line 436, Address: 0x1002c44, Func Offset: 0x124
	// Line 438, Address: 0x1002c54, Func Offset: 0x134
	// Line 442, Address: 0x1002c60, Func Offset: 0x140
	// Func End, Address: 0x1002c74, Func Offset: 0x154
}

// 
// Start address: 0x1002c80
void dodai_rm(_anon1* pActwk)
{
	int xsav;
	// Line 446, Address: 0x1002c80, Func Offset: 0
	// Line 449, Address: 0x1002c90, Func Offset: 0x10
	// Line 451, Address: 0x1002cc4, Func Offset: 0x44
	// Line 455, Address: 0x1002cd8, Func Offset: 0x58
	// Line 456, Address: 0x1002ce8, Func Offset: 0x68
	// Line 458, Address: 0x1002cf4, Func Offset: 0x74
	// Line 459, Address: 0x1002d04, Func Offset: 0x84
	// Line 460, Address: 0x1002d14, Func Offset: 0x94
	// Line 461, Address: 0x1002d20, Func Offset: 0xa0
	// Line 464, Address: 0x1002d28, Func Offset: 0xa8
	// Line 465, Address: 0x1002d40, Func Offset: 0xc0
	// Line 466, Address: 0x1002d48, Func Offset: 0xc8
	// Line 468, Address: 0x1002d80, Func Offset: 0x100
	// Line 469, Address: 0x1002d90, Func Offset: 0x110
	// Line 471, Address: 0x1002dd0, Func Offset: 0x150
	// Line 472, Address: 0x1002de0, Func Offset: 0x160
	// Line 475, Address: 0x1002de8, Func Offset: 0x168
	// Line 476, Address: 0x1002df8, Func Offset: 0x178
	// Line 478, Address: 0x1002e08, Func Offset: 0x188
	// Line 482, Address: 0x1002e14, Func Offset: 0x194
	// Func End, Address: 0x1002e28, Func Offset: 0x1a8
}

// 
// Start address: 0x1002e30
void dodai_lm(_anon1* pActwk)
{
	int xsav;
	// Line 486, Address: 0x1002e30, Func Offset: 0
	// Line 489, Address: 0x1002e40, Func Offset: 0x10
	// Line 491, Address: 0x1002e74, Func Offset: 0x44
	// Line 495, Address: 0x1002e88, Func Offset: 0x58
	// Line 496, Address: 0x1002e98, Func Offset: 0x68
	// Line 498, Address: 0x1002ea4, Func Offset: 0x74
	// Line 499, Address: 0x1002eb4, Func Offset: 0x84
	// Line 500, Address: 0x1002ec4, Func Offset: 0x94
	// Line 501, Address: 0x1002ed0, Func Offset: 0xa0
	// Line 504, Address: 0x1002ed8, Func Offset: 0xa8
	// Line 505, Address: 0x1002ef0, Func Offset: 0xc0
	// Line 506, Address: 0x1002ef8, Func Offset: 0xc8
	// Line 508, Address: 0x1002f30, Func Offset: 0x100
	// Line 509, Address: 0x1002f40, Func Offset: 0x110
	// Line 511, Address: 0x1002f80, Func Offset: 0x150
	// Line 512, Address: 0x1002f90, Func Offset: 0x160
	// Line 515, Address: 0x1002f98, Func Offset: 0x168
	// Line 516, Address: 0x1002fa8, Func Offset: 0x178
	// Line 518, Address: 0x1002fb8, Func Offset: 0x188
	// Line 522, Address: 0x1002fc4, Func Offset: 0x194
	// Func End, Address: 0x1002fd8, Func Offset: 0x1a8
}

// 
// Start address: 0x1002fe0
short dodai_sub(_anon1* pActwk)
{
	short sinwk;
	short coswk;
	// Line 537, Address: 0x1002fe0, Func Offset: 0
	// Line 540, Address: 0x1002fec, Func Offset: 0xc
	// Line 541, Address: 0x1003010, Func Offset: 0x30
	// Line 542, Address: 0x1003044, Func Offset: 0x64
	// Func End, Address: 0x1003054, Func Offset: 0x74
}

// 
// Start address: 0x1003060
void dai_fout(_anon1* pActwk)
{
	short s;
	// Line 554, Address: 0x1003060, Func Offset: 0
	// Line 557, Address: 0x1003070, Func Offset: 0x10
	// Line 558, Address: 0x1003080, Func Offset: 0x20
	// Line 559, Address: 0x10030b4, Func Offset: 0x54
	// Line 562, Address: 0x10030d4, Func Offset: 0x74
	// Line 563, Address: 0x10030e0, Func Offset: 0x80
	// Func End, Address: 0x10030f4, Func Offset: 0x94
}

// 
// Start address: 0x1003100
void vfuta(_anon1* pActwk)
{
	// Line 627, Address: 0x1003100, Func Offset: 0
	// Line 628, Address: 0x100310c, Func Offset: 0xc
	// Line 629, Address: 0x1003150, Func Offset: 0x50
	// Line 630, Address: 0x100315c, Func Offset: 0x5c
	// Line 631, Address: 0x1003168, Func Offset: 0x68
	// Func End, Address: 0x1003178, Func Offset: 0x78
}

// 
// Start address: 0x1003180
void vfuta_init(_anon1* pActwk)
{
	// Line 637, Address: 0x1003180, Func Offset: 0
	// Line 638, Address: 0x100318c, Func Offset: 0xc
	// Line 639, Address: 0x100319c, Func Offset: 0x1c
	// Line 640, Address: 0x10031ac, Func Offset: 0x2c
	// Line 641, Address: 0x10031b8, Func Offset: 0x38
	// Line 642, Address: 0x10031c8, Func Offset: 0x48
	// Line 643, Address: 0x10031d4, Func Offset: 0x54
	// Line 645, Address: 0x10031e0, Func Offset: 0x60
	// Line 646, Address: 0x10031e8, Func Offset: 0x68
	// Line 647, Address: 0x10031f4, Func Offset: 0x74
	// Func End, Address: 0x1003204, Func Offset: 0x84
}

// 
// Start address: 0x1003210
void vfuta_move1(_anon1* pActwk)
{
	short wk;
	// Line 653, Address: 0x1003210, Func Offset: 0
	// Line 656, Address: 0x1003220, Func Offset: 0x10
	// Line 657, Address: 0x100326c, Func Offset: 0x5c
	// Line 660, Address: 0x1003288, Func Offset: 0x78
	// Line 661, Address: 0x100329c, Func Offset: 0x8c
	// Line 663, Address: 0x10032d0, Func Offset: 0xc0
	// Line 664, Address: 0x10032f8, Func Offset: 0xe8
	// Line 665, Address: 0x100330c, Func Offset: 0xfc
	// Line 667, Address: 0x1003318, Func Offset: 0x108
	// Line 668, Address: 0x1003330, Func Offset: 0x120
	// Line 669, Address: 0x100333c, Func Offset: 0x12c
	// Line 674, Address: 0x1003348, Func Offset: 0x138
	// Line 675, Address: 0x100335c, Func Offset: 0x14c
	// Func End, Address: 0x1003370, Func Offset: 0x160
}

// 
// Start address: 0x1003370
void vfuta_move2(_anon1* pActwk)
{
	short wk;
	// Line 681, Address: 0x1003370, Func Offset: 0
	// Line 684, Address: 0x100337c, Func Offset: 0xc
	// Line 685, Address: 0x1003390, Func Offset: 0x20
	// Line 686, Address: 0x100339c, Func Offset: 0x2c
	// Line 688, Address: 0x10033ac, Func Offset: 0x3c
	// Line 689, Address: 0x10033c0, Func Offset: 0x50
	// Line 690, Address: 0x10033d0, Func Offset: 0x60
	// Line 692, Address: 0x10033d8, Func Offset: 0x68
	// Func End, Address: 0x10033e8, Func Offset: 0x78
}

