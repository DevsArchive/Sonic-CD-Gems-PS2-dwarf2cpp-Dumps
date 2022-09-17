typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[3];
typedef char* type_3[2];
typedef char type_4[6];
typedef char type_5[64];
typedef char type_6[3];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon1 type_9[128];
typedef unsigned char type_10[766];
typedef _anon0* type_11[3];
typedef char* type_12[2];
typedef char type_13[64];
typedef char type_14[7];
typedef char type_15[3];

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

_anon0 bobinsp0;
_anon0 bobinsp1;
_anon0 bobinsp2;
_anon0 fripsp0;
_anon0 fripsp1;
_anon0 fripsp2;
_anon0* bobinpat[3];
_anon0* frippat[3];
char bobinchg0[3];
char bobinchg1[7];
char* bobinchg[2];
char fripchg0[3];
char fripchg1[6];
char* fripchg[2];
char frip_posi[64];
char frip_posi_r[64];
unsigned char flagwork[766];
_anon1 actwk[128];

void bobin(_anon1* actionwk);
void bobininit(_anon1* actionwk);
void bobinmove(_anon1* actionwk);
void frip(_anon1* actionwk);
void frip_init(_anon1* actionwk);
void frip_move(_anon1* actionwk);
void frip_chk(_anon1* actionwk);

// 
// Start address: 0x10264a0
void bobin(_anon1* actionwk)
{
	// Line 104, Address: 0x10264a0, Func Offset: 0
	// Line 105, Address: 0x10264ac, Func Offset: 0xc
	// Line 108, Address: 0x10264d4, Func Offset: 0x34
	// Line 110, Address: 0x10264e0, Func Offset: 0x40
	// Line 113, Address: 0x10264ec, Func Offset: 0x4c
	// Func End, Address: 0x10264fc, Func Offset: 0x5c
}

// 
// Start address: 0x1026500
void bobininit(_anon1* actionwk)
{
	short d0;
	char d6;
	// Line 115, Address: 0x1026500, Func Offset: 0
	// Line 119, Address: 0x1026510, Func Offset: 0x10
	// Line 120, Address: 0x1026520, Func Offset: 0x20
	// Line 121, Address: 0x1026530, Func Offset: 0x30
	// Line 124, Address: 0x102653c, Func Offset: 0x3c
	// Line 126, Address: 0x1026574, Func Offset: 0x74
	// Line 129, Address: 0x1026584, Func Offset: 0x84
	// Line 130, Address: 0x1026594, Func Offset: 0x94
	// Line 131, Address: 0x10265a0, Func Offset: 0xa0
	// Line 132, Address: 0x10265ac, Func Offset: 0xac
	// Line 133, Address: 0x10265b8, Func Offset: 0xb8
	// Line 134, Address: 0x10265c4, Func Offset: 0xc4
	// Line 136, Address: 0x10265d0, Func Offset: 0xd0
	// Line 137, Address: 0x10265e0, Func Offset: 0xe0
	// Line 138, Address: 0x10265ec, Func Offset: 0xec
	// Line 139, Address: 0x10265f0, Func Offset: 0xf0
	// Line 140, Address: 0x1026600, Func Offset: 0x100
	// Line 141, Address: 0x1026620, Func Offset: 0x120
	// Line 142, Address: 0x1026640, Func Offset: 0x140
	// Line 143, Address: 0x1026648, Func Offset: 0x148
	// Line 144, Address: 0x1026654, Func Offset: 0x154
	// Line 145, Address: 0x102665c, Func Offset: 0x15c
	// Line 147, Address: 0x102666c, Func Offset: 0x16c
	// Line 148, Address: 0x102667c, Func Offset: 0x17c
	// Line 150, Address: 0x1026690, Func Offset: 0x190
	// Line 154, Address: 0x10266ac, Func Offset: 0x1ac
	// Func End, Address: 0x10266c0, Func Offset: 0x1c0
}

// 
// Start address: 0x10266c0
void bobinmove(_anon1* actionwk)
{
	int* a;
	int d0l;
	int d1l;
	_anon1* a1;
	unsigned char d;
	short d0;
	short d1;
	short d2;
	// Line 156, Address: 0x10266c0, Func Offset: 0
	// Line 162, Address: 0x10266e4, Func Offset: 0x24
	// Line 163, Address: 0x10266f8, Func Offset: 0x38
	// Line 164, Address: 0x1026700, Func Offset: 0x40
	// Line 165, Address: 0x1026718, Func Offset: 0x58
	// Line 167, Address: 0x1026720, Func Offset: 0x60
	// Line 168, Address: 0x1026738, Func Offset: 0x78
	// Line 169, Address: 0x1026758, Func Offset: 0x98
	// Line 171, Address: 0x1026768, Func Offset: 0xa8
	// Line 176, Address: 0x1026784, Func Offset: 0xc4
	// Line 177, Address: 0x1026798, Func Offset: 0xd8
	// Line 179, Address: 0x10267a8, Func Offset: 0xe8
	// Line 180, Address: 0x10267b8, Func Offset: 0xf8
	// Line 181, Address: 0x10267c4, Func Offset: 0x104
	// Line 184, Address: 0x10267d4, Func Offset: 0x114
	// Line 186, Address: 0x10267f4, Func Offset: 0x134
	// Line 187, Address: 0x10267fc, Func Offset: 0x13c
	// Line 189, Address: 0x1026808, Func Offset: 0x148
	// Line 190, Address: 0x1026810, Func Offset: 0x150
	// Line 191, Address: 0x1026818, Func Offset: 0x158
	// Line 192, Address: 0x1026844, Func Offset: 0x184
	// Line 193, Address: 0x1026874, Func Offset: 0x1b4
	// Line 194, Address: 0x102688c, Func Offset: 0x1cc
	// Line 195, Address: 0x10268a0, Func Offset: 0x1e0
	// Line 196, Address: 0x10268b8, Func Offset: 0x1f8
	// Line 197, Address: 0x10268c8, Func Offset: 0x208
	// Line 198, Address: 0x10268e0, Func Offset: 0x220
	// Line 199, Address: 0x10268f0, Func Offset: 0x230
	// Line 200, Address: 0x10268fc, Func Offset: 0x23c
	// Line 201, Address: 0x1026908, Func Offset: 0x248
	// Line 202, Address: 0x1026914, Func Offset: 0x254
	// Line 203, Address: 0x1026918, Func Offset: 0x258
	// Line 205, Address: 0x1026924, Func Offset: 0x264
	// Line 206, Address: 0x1026934, Func Offset: 0x274
	// Line 207, Address: 0x1026960, Func Offset: 0x2a0
	// Line 209, Address: 0x1026984, Func Offset: 0x2c4
	// Line 210, Address: 0x1026998, Func Offset: 0x2d8
	// Line 211, Address: 0x10269a4, Func Offset: 0x2e4
	// Line 212, Address: 0x10269b8, Func Offset: 0x2f8
	// Func End, Address: 0x10269e0, Func Offset: 0x320
}

// 
// Start address: 0x10269e0
void frip(_anon1* actionwk)
{
	// Line 214, Address: 0x10269e0, Func Offset: 0
	// Line 215, Address: 0x10269ec, Func Offset: 0xc
	// Line 218, Address: 0x1026a14, Func Offset: 0x34
	// Line 220, Address: 0x1026a20, Func Offset: 0x40
	// Line 223, Address: 0x1026a2c, Func Offset: 0x4c
	// Func End, Address: 0x1026a3c, Func Offset: 0x5c
}

// 
// Start address: 0x1026a40
void frip_init(_anon1* actionwk)
{
	// Line 225, Address: 0x1026a40, Func Offset: 0
	// Line 226, Address: 0x1026a48, Func Offset: 0x8
	// Line 227, Address: 0x1026a58, Func Offset: 0x18
	// Line 228, Address: 0x1026a68, Func Offset: 0x28
	// Line 229, Address: 0x1026a74, Func Offset: 0x34
	// Line 230, Address: 0x1026a84, Func Offset: 0x44
	// Line 231, Address: 0x1026a90, Func Offset: 0x50
	// Line 232, Address: 0x1026a9c, Func Offset: 0x5c
	// Line 233, Address: 0x1026aa8, Func Offset: 0x68
	// Func End, Address: 0x1026ab4, Func Offset: 0x74
}

// 
// Start address: 0x1026ac0
void frip_move(_anon1* actionwk)
{
	// Line 235, Address: 0x1026ac0, Func Offset: 0
	// Line 236, Address: 0x1026acc, Func Offset: 0xc
	// Line 238, Address: 0x1026ae4, Func Offset: 0x24
	// Line 241, Address: 0x1026af0, Func Offset: 0x30
	// Line 242, Address: 0x1026b04, Func Offset: 0x44
	// Line 243, Address: 0x1026b10, Func Offset: 0x50
	// Line 244, Address: 0x1026b1c, Func Offset: 0x5c
	// Func End, Address: 0x1026b2c, Func Offset: 0x6c
}

// 
// Start address: 0x1026b30
void frip_chk(_anon1* actionwk)
{
	_anon1* a1;
	short d0;
	short d1;
	short d2;
	short d3;
	// Line 246, Address: 0x1026b30, Func Offset: 0
	// Line 250, Address: 0x1026b50, Func Offset: 0x20
	// Line 251, Address: 0x1026b58, Func Offset: 0x28
	// Line 253, Address: 0x1026b70, Func Offset: 0x40
	// Line 254, Address: 0x1026ba0, Func Offset: 0x70
	// Line 255, Address: 0x1026bb4, Func Offset: 0x84
	// Line 256, Address: 0x1026bc0, Func Offset: 0x90
	// Line 257, Address: 0x1026bd0, Func Offset: 0xa0
	// Line 258, Address: 0x1026bdc, Func Offset: 0xac
	// Line 260, Address: 0x1026bf8, Func Offset: 0xc8
	// Line 261, Address: 0x1026c04, Func Offset: 0xd4
	// Line 262, Address: 0x1026c18, Func Offset: 0xe8
	// Line 263, Address: 0x1026c44, Func Offset: 0x114
	// Line 264, Address: 0x1026c50, Func Offset: 0x120
	// Line 266, Address: 0x1026c68, Func Offset: 0x138
	// Line 267, Address: 0x1026c88, Func Offset: 0x158
	// Line 269, Address: 0x1026c90, Func Offset: 0x160
	// Line 271, Address: 0x1026c98, Func Offset: 0x168
	// Line 272, Address: 0x1026cc0, Func Offset: 0x190
	// Line 273, Address: 0x1026cfc, Func Offset: 0x1cc
	// Line 274, Address: 0x1026d10, Func Offset: 0x1e0
	// Line 275, Address: 0x1026d18, Func Offset: 0x1e8
	// Line 276, Address: 0x1026d28, Func Offset: 0x1f8
	// Line 278, Address: 0x1026d58, Func Offset: 0x228
	// Line 279, Address: 0x1026d64, Func Offset: 0x234
	// Line 280, Address: 0x1026d74, Func Offset: 0x244
	// Line 281, Address: 0x1026d80, Func Offset: 0x250
	// Line 282, Address: 0x1026d8c, Func Offset: 0x25c
	// Line 284, Address: 0x1026db0, Func Offset: 0x280
	// Line 285, Address: 0x1026db4, Func Offset: 0x284
	// Line 287, Address: 0x1026dc8, Func Offset: 0x298
	// Line 288, Address: 0x1026dd8, Func Offset: 0x2a8
	// Line 291, Address: 0x1026de0, Func Offset: 0x2b0
	// Line 292, Address: 0x1026de4, Func Offset: 0x2b4
	// Line 295, Address: 0x1026dec, Func Offset: 0x2bc
	// Line 297, Address: 0x1026df4, Func Offset: 0x2c4
	// Line 300, Address: 0x1026e04, Func Offset: 0x2d4
	// Func End, Address: 0x1026e28, Func Offset: 0x2f8
}

