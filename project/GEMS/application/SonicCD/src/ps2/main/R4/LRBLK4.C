typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;

typedef void(*type_1)(_anon1*);
typedef void(*type_7)(_anon1*);
typedef void(*type_9)(_anon1*);
typedef void(*type_14)(_anon1*);
typedef void(*type_18)(_anon1*);
typedef void(*type_20)(_anon1*);
typedef void(*type_23)(_anon1*);
typedef void(*type_29)(_anon1*);

typedef _anon11 type_0[20];
typedef void(*type_2)(_anon1*)[2];
typedef _anon0* type_3[1];
typedef _anon11 type_4[0];
typedef _anon0* type_5[1];
typedef _anon0* type_6[2];
typedef void(*type_8)(_anon1*)[2];
typedef void(*type_10)(_anon1*)[2];
typedef unsigned char type_11[2];
typedef unsigned char type_12[22];
typedef _anon2 type_13[6];
typedef void(*type_15)(_anon1*)[2];
typedef _anon0* type_16[2];
typedef _anon0* type_17[1];
typedef void(*type_19)(_anon1*)[3];
typedef void(*type_21)(_anon1*)[2];
typedef _anon0* type_22[4];
typedef void(*type_24)(_anon1*)[2];
typedef unsigned char type_25[14];
typedef _anon1 type_26[128];
typedef unsigned char type_27[766];
typedef short type_28[18];
typedef void(*type_30)(_anon1*)[9];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon11 spra[20];
		_anon11 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon2
{
	unsigned char cnt;
	unsigned char dummy;
	short speed;
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

union _anon8
{
	unsigned int l;
	_anon9 w;
	_anon10 b;
};

struct _anon9
{
	unsigned short l;
	unsigned short h;
};

struct _anon10
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

struct _anon11
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon0 pat10;
_anon0 pat11;
_anon0 pat20;
_anon0 pat30;
_anon0 pat50;
_anon0 pat60;
_anon0 pat61;
_anon0 pat62;
_anon0 pat63;
_anon0* lrblk4pat1[2];
_anon0* lrblk4pat2[1];
_anon0* lrblk4pat3[1];
_anon0* lrblk4pat5[1];
_anon0* lrblk4pat6[4];
_anon0* lrblk4pat8[2];
unsigned char flagwork[766];
unsigned char time_flag;
_anon3 scra_h_posit;
_anon1 actwk[128];

void lrblk4(_anon1* pActwk);
void lrblk4_foutchk(_anon1* pActwk);
void lrblk4_type1(_anon1* pActwk);
void type1_init(_anon1* pActwk);
void type1_move(_anon1* pActwk);
void lrblk4_type2(_anon1* pActwk);
void type2_init(_anon1* pActwk);
void type2_move(_anon1* pActwk);
void lrblk4_type3(_anon1* pActwk);
void type3_init(_anon1* pActwk);
void type3_move(_anon1* pActwk);
void lrblk4_type4(_anon1* pActwk);
void type4_init(_anon1* pActwk);
void type4_move(_anon1* pActwk);
void lrblk4_type5(_anon1* pActwk);
void type5_init(_anon1* pActwk);
void type5_move(_anon1* pActwk);
void type5_end(_anon1* pActwk);
void lrblk4_type6(_anon1* pActwk);
void type6_init(_anon1* pActwk);
void type6_move(_anon1* pActwk);
void lrblk4_type8(_anon1* pActwk);
void type8_init(_anon1* pActwk);
void type8_move(_anon1* pActwk);

// 
// Start address: 0x1021a90
void lrblk4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[9];
	// Line 130, Address: 0x1021a90, Func Offset: 0
	// Line 131, Address: 0x1021a9c, Func Offset: 0xc
	// Line 152, Address: 0x1021ac8, Func Offset: 0x38
	// Line 153, Address: 0x1021af0, Func Offset: 0x60
	// Func End, Address: 0x1021b00, Func Offset: 0x70
}

// 
// Start address: 0x1021b00
void lrblk4_foutchk(_anon1* pActwk)
{
	short d0;
	short d1;
	// Line 158, Address: 0x1021b00, Func Offset: 0
	// Line 161, Address: 0x1021b14, Func Offset: 0x14
	// Line 162, Address: 0x1021b24, Func Offset: 0x24
	// Line 163, Address: 0x1021b34, Func Offset: 0x34
	// Line 164, Address: 0x1021b44, Func Offset: 0x44
	// Line 165, Address: 0x1021b50, Func Offset: 0x50
	// Line 166, Address: 0x1021b60, Func Offset: 0x60
	// Line 167, Address: 0x1021b6c, Func Offset: 0x6c
	// Line 169, Address: 0x1021b80, Func Offset: 0x80
	// Line 170, Address: 0x1021b9c, Func Offset: 0x9c
	// Line 172, Address: 0x1021ba4, Func Offset: 0xa4
	// Line 173, Address: 0x1021bb4, Func Offset: 0xb4
	// Line 174, Address: 0x1021bd4, Func Offset: 0xd4
	// Line 176, Address: 0x1021bf4, Func Offset: 0xf4
	// Line 178, Address: 0x1021c00, Func Offset: 0x100
	// Func End, Address: 0x1021c18, Func Offset: 0x118
}

// 
// Start address: 0x1021c20
void lrblk4_type1(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 183, Address: 0x1021c20, Func Offset: 0
	// Line 184, Address: 0x1021c2c, Func Offset: 0xc
	// Line 190, Address: 0x1021c48, Func Offset: 0x28
	// Line 191, Address: 0x1021c84, Func Offset: 0x64
	// Line 192, Address: 0x1021c90, Func Offset: 0x70
	// Line 193, Address: 0x1021c9c, Func Offset: 0x7c
	// Func End, Address: 0x1021cac, Func Offset: 0x8c
}

// 
// Start address: 0x1021cb0
void type1_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	short i;
	unsigned short d0;
	unsigned char d1;
	// Line 198, Address: 0x1021cb0, Func Offset: 0
	// Line 204, Address: 0x1021cc8, Func Offset: 0x18
	// Line 205, Address: 0x1021cd8, Func Offset: 0x28
	// Line 206, Address: 0x1021ce8, Func Offset: 0x38
	// Line 207, Address: 0x1021cf4, Func Offset: 0x44
	// Line 208, Address: 0x1021d00, Func Offset: 0x50
	// Line 209, Address: 0x1021d10, Func Offset: 0x60
	// Line 210, Address: 0x1021d20, Func Offset: 0x70
	// Line 211, Address: 0x1021d2c, Func Offset: 0x7c
	// Line 212, Address: 0x1021d38, Func Offset: 0x88
	// Line 214, Address: 0x1021d44, Func Offset: 0x94
	// Line 216, Address: 0x1021d54, Func Offset: 0xa4
	// Line 217, Address: 0x1021d60, Func Offset: 0xb0
	// Line 220, Address: 0x1021d68, Func Offset: 0xb8
	// Line 221, Address: 0x1021d78, Func Offset: 0xc8
	// Line 223, Address: 0x1021d8c, Func Offset: 0xdc
	// Line 224, Address: 0x1021d94, Func Offset: 0xe4
	// Line 226, Address: 0x1021da0, Func Offset: 0xf0
	// Line 228, Address: 0x1021db4, Func Offset: 0x104
	// Line 229, Address: 0x1021dc0, Func Offset: 0x110
	// Line 230, Address: 0x1021dcc, Func Offset: 0x11c
	// Line 231, Address: 0x1021dd4, Func Offset: 0x124
	// Line 233, Address: 0x1021de4, Func Offset: 0x134
	// Line 234, Address: 0x1021e0c, Func Offset: 0x15c
	// Line 235, Address: 0x1021e14, Func Offset: 0x164
	// Line 236, Address: 0x1021e24, Func Offset: 0x174
	// Line 237, Address: 0x1021e38, Func Offset: 0x188
	// Line 240, Address: 0x1021e40, Func Offset: 0x190
	// Line 241, Address: 0x1021e48, Func Offset: 0x198
	// Line 243, Address: 0x1021e68, Func Offset: 0x1b8
	// Line 245, Address: 0x1021e7c, Func Offset: 0x1cc
	// Line 246, Address: 0x1021e88, Func Offset: 0x1d8
	// Line 247, Address: 0x1021e94, Func Offset: 0x1e4
	// Line 249, Address: 0x1021ea0, Func Offset: 0x1f0
	// Line 250, Address: 0x1021eb0, Func Offset: 0x200
	// Line 251, Address: 0x1021ec0, Func Offset: 0x210
	// Line 252, Address: 0x1021ee4, Func Offset: 0x234
	// Line 254, Address: 0x1021ef4, Func Offset: 0x244
	// Line 255, Address: 0x1021f00, Func Offset: 0x250
	// Func End, Address: 0x1021f1c, Func Offset: 0x26c
}

// 
// Start address: 0x1021f20
void type1_move(_anon1* pActwk)
{
	short d0;
	short d1;
	short stk;
	// Line 260, Address: 0x1021f20, Func Offset: 0
	// Line 263, Address: 0x1021f30, Func Offset: 0x10
	// Line 264, Address: 0x1021f40, Func Offset: 0x20
	// Line 265, Address: 0x1021f58, Func Offset: 0x38
	// Line 266, Address: 0x1021f64, Func Offset: 0x44
	// Line 267, Address: 0x1021f74, Func Offset: 0x54
	// Line 268, Address: 0x1021f88, Func Offset: 0x68
	// Line 269, Address: 0x1021f94, Func Offset: 0x74
	// Line 270, Address: 0x1021f98, Func Offset: 0x78
	// Line 271, Address: 0x1021fa8, Func Offset: 0x88
	// Line 272, Address: 0x1021fb4, Func Offset: 0x94
	// Line 273, Address: 0x1021fc0, Func Offset: 0xa0
	// Line 274, Address: 0x1021fd4, Func Offset: 0xb4
	// Func End, Address: 0x1021fe8, Func Offset: 0xc8
}

// 
// Start address: 0x1021ff0
void lrblk4_type2(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 279, Address: 0x1021ff0, Func Offset: 0
	// Line 280, Address: 0x1021ffc, Func Offset: 0xc
	// Line 286, Address: 0x1022018, Func Offset: 0x28
	// Line 287, Address: 0x1022054, Func Offset: 0x64
	// Line 288, Address: 0x1022060, Func Offset: 0x70
	// Line 289, Address: 0x102206c, Func Offset: 0x7c
	// Func End, Address: 0x102207c, Func Offset: 0x8c
}

// 
// Start address: 0x1022080
void type2_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	// Line 294, Address: 0x1022080, Func Offset: 0
	// Line 297, Address: 0x102208c, Func Offset: 0xc
	// Line 298, Address: 0x102209c, Func Offset: 0x1c
	// Line 299, Address: 0x10220ac, Func Offset: 0x2c
	// Line 300, Address: 0x10220b8, Func Offset: 0x38
	// Line 301, Address: 0x10220c4, Func Offset: 0x44
	// Line 302, Address: 0x10220d4, Func Offset: 0x54
	// Line 303, Address: 0x10220e0, Func Offset: 0x60
	// Line 305, Address: 0x10220ec, Func Offset: 0x6c
	// Line 307, Address: 0x10220fc, Func Offset: 0x7c
	// Line 308, Address: 0x1022108, Func Offset: 0x88
	// Line 311, Address: 0x1022110, Func Offset: 0x90
	// Line 313, Address: 0x1022120, Func Offset: 0xa0
	// Line 315, Address: 0x1022144, Func Offset: 0xc4
	// Line 317, Address: 0x1022158, Func Offset: 0xd8
	// Line 318, Address: 0x1022164, Func Offset: 0xe4
	// Line 319, Address: 0x1022170, Func Offset: 0xf0
	// Line 321, Address: 0x102217c, Func Offset: 0xfc
	// Line 322, Address: 0x102218c, Func Offset: 0x10c
	// Line 323, Address: 0x102219c, Func Offset: 0x11c
	// Line 324, Address: 0x10221c0, Func Offset: 0x140
	// Line 325, Address: 0x10221e4, Func Offset: 0x164
	// Line 327, Address: 0x1022200, Func Offset: 0x180
	// Line 328, Address: 0x102220c, Func Offset: 0x18c
	// Func End, Address: 0x102221c, Func Offset: 0x19c
}

// 
// Start address: 0x1022220
void type2_move(_anon1* pActwk)
{
	short d0;
	short d1;
	short stk;
	// Line 333, Address: 0x1022220, Func Offset: 0
	// Line 336, Address: 0x1022230, Func Offset: 0x10
	// Line 337, Address: 0x1022240, Func Offset: 0x20
	// Line 338, Address: 0x1022258, Func Offset: 0x38
	// Line 339, Address: 0x1022264, Func Offset: 0x44
	// Line 340, Address: 0x1022274, Func Offset: 0x54
	// Line 341, Address: 0x1022288, Func Offset: 0x68
	// Line 342, Address: 0x1022294, Func Offset: 0x74
	// Line 343, Address: 0x1022298, Func Offset: 0x78
	// Line 344, Address: 0x10222a8, Func Offset: 0x88
	// Line 345, Address: 0x10222b4, Func Offset: 0x94
	// Line 346, Address: 0x10222c0, Func Offset: 0xa0
	// Line 347, Address: 0x10222d4, Func Offset: 0xb4
	// Func End, Address: 0x10222e8, Func Offset: 0xc8
}

// 
// Start address: 0x10222f0
void lrblk4_type3(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 352, Address: 0x10222f0, Func Offset: 0
	// Line 353, Address: 0x10222fc, Func Offset: 0xc
	// Line 359, Address: 0x1022318, Func Offset: 0x28
	// Line 360, Address: 0x1022354, Func Offset: 0x64
	// Line 361, Address: 0x1022360, Func Offset: 0x70
	// Line 362, Address: 0x102236c, Func Offset: 0x7c
	// Func End, Address: 0x102237c, Func Offset: 0x8c
}

// 
// Start address: 0x1022380
void type3_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	short* a2;
	short i;
	unsigned char d0;
	unsigned char d1;
	short tbl[18];
	// Line 367, Address: 0x1022380, Func Offset: 0
	// Line 372, Address: 0x102239c, Func Offset: 0x1c
	// Line 382, Address: 0x10223d0, Func Offset: 0x50
	// Line 383, Address: 0x10223e0, Func Offset: 0x60
	// Line 384, Address: 0x10223f0, Func Offset: 0x70
	// Line 385, Address: 0x10223fc, Func Offset: 0x7c
	// Line 386, Address: 0x1022408, Func Offset: 0x88
	// Line 387, Address: 0x1022418, Func Offset: 0x98
	// Line 388, Address: 0x1022424, Func Offset: 0xa4
	// Line 390, Address: 0x1022430, Func Offset: 0xb0
	// Line 392, Address: 0x1022444, Func Offset: 0xc4
	// Line 393, Address: 0x1022454, Func Offset: 0xd4
	// Line 394, Address: 0x102245c, Func Offset: 0xdc
	// Line 396, Address: 0x1022468, Func Offset: 0xe8
	// Line 398, Address: 0x102247c, Func Offset: 0xfc
	// Line 399, Address: 0x1022488, Func Offset: 0x108
	// Line 400, Address: 0x1022494, Func Offset: 0x114
	// Line 401, Address: 0x102249c, Func Offset: 0x11c
	// Line 402, Address: 0x10224ac, Func Offset: 0x12c
	// Line 403, Address: 0x10224bc, Func Offset: 0x13c
	// Line 405, Address: 0x10224cc, Func Offset: 0x14c
	// Line 406, Address: 0x10224d4, Func Offset: 0x154
	// Line 408, Address: 0x10224f4, Func Offset: 0x174
	// Line 409, Address: 0x1022514, Func Offset: 0x194
	// Line 410, Address: 0x102253c, Func Offset: 0x1bc
	// Line 411, Address: 0x1022558, Func Offset: 0x1d8
	// Line 412, Address: 0x1022574, Func Offset: 0x1f4
	// Line 413, Address: 0x1022588, Func Offset: 0x208
	// Func End, Address: 0x10225a8, Func Offset: 0x228
}

// 
// Start address: 0x10225b0
void type3_move(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	int ld0;
	short d0;
	// Line 418, Address: 0x10225b0, Func Offset: 0
	// Line 423, Address: 0x10225c8, Func Offset: 0x18
	// Line 424, Address: 0x10225d8, Func Offset: 0x28
	// Line 425, Address: 0x10225dc, Func Offset: 0x2c
	// Line 428, Address: 0x10225ec, Func Offset: 0x3c
	// Line 430, Address: 0x1022604, Func Offset: 0x54
	// Line 431, Address: 0x1022614, Func Offset: 0x64
	// Line 433, Address: 0x1022638, Func Offset: 0x88
	// Line 434, Address: 0x102264c, Func Offset: 0x9c
	// Line 436, Address: 0x1022660, Func Offset: 0xb0
	// Line 437, Address: 0x1022670, Func Offset: 0xc0
	// Line 438, Address: 0x102267c, Func Offset: 0xcc
	// Line 441, Address: 0x1022684, Func Offset: 0xd4
	// Line 444, Address: 0x102268c, Func Offset: 0xdc
	// Line 445, Address: 0x102269c, Func Offset: 0xec
	// Line 447, Address: 0x10226c0, Func Offset: 0x110
	// Line 448, Address: 0x10226d4, Func Offset: 0x124
	// Line 450, Address: 0x10226e8, Func Offset: 0x138
	// Line 451, Address: 0x10226f8, Func Offset: 0x148
	// Line 452, Address: 0x1022704, Func Offset: 0x154
	// Line 457, Address: 0x102270c, Func Offset: 0x15c
	// Line 459, Address: 0x1022724, Func Offset: 0x174
	// Line 460, Address: 0x102272c, Func Offset: 0x17c
	// Line 461, Address: 0x1022738, Func Offset: 0x188
	// Line 463, Address: 0x102275c, Func Offset: 0x1ac
	// Line 464, Address: 0x1022770, Func Offset: 0x1c0
	// Line 465, Address: 0x102277c, Func Offset: 0x1cc
	// Line 468, Address: 0x1022784, Func Offset: 0x1d4
	// Line 470, Address: 0x1022798, Func Offset: 0x1e8
	// Line 472, Address: 0x10227ac, Func Offset: 0x1fc
	// Line 475, Address: 0x10227bc, Func Offset: 0x20c
	// Func End, Address: 0x10227d8, Func Offset: 0x228
}

// 
// Start address: 0x10227e0
void lrblk4_type4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 480, Address: 0x10227e0, Func Offset: 0
	// Line 481, Address: 0x10227ec, Func Offset: 0xc
	// Line 487, Address: 0x1022808, Func Offset: 0x28
	// Line 488, Address: 0x1022844, Func Offset: 0x64
	// Line 489, Address: 0x1022850, Func Offset: 0x70
	// Line 490, Address: 0x102285c, Func Offset: 0x7c
	// Func End, Address: 0x102286c, Func Offset: 0x8c
}

// 
// Start address: 0x1022870
void type4_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	// Line 495, Address: 0x1022870, Func Offset: 0
	// Line 498, Address: 0x102287c, Func Offset: 0xc
	// Line 499, Address: 0x102288c, Func Offset: 0x1c
	// Line 500, Address: 0x102289c, Func Offset: 0x2c
	// Line 501, Address: 0x10228a8, Func Offset: 0x38
	// Line 503, Address: 0x10228b4, Func Offset: 0x44
	// Line 504, Address: 0x10228c0, Func Offset: 0x50
	// Line 505, Address: 0x10228cc, Func Offset: 0x5c
	// Line 507, Address: 0x10228dc, Func Offset: 0x6c
	// Line 508, Address: 0x10228ec, Func Offset: 0x7c
	// Line 511, Address: 0x10228f8, Func Offset: 0x88
	// Line 513, Address: 0x102290c, Func Offset: 0x9c
	// Line 514, Address: 0x102291c, Func Offset: 0xac
	// Line 516, Address: 0x1022930, Func Offset: 0xc0
	// Line 517, Address: 0x102293c, Func Offset: 0xcc
	// Line 518, Address: 0x1022948, Func Offset: 0xd8
	// Line 519, Address: 0x1022954, Func Offset: 0xe4
	// Line 520, Address: 0x1022964, Func Offset: 0xf4
	// Line 522, Address: 0x1022974, Func Offset: 0x104
	// Line 523, Address: 0x1022998, Func Offset: 0x128
	// Line 525, Address: 0x10229a8, Func Offset: 0x138
	// Line 528, Address: 0x10229cc, Func Offset: 0x15c
	// Line 529, Address: 0x10229d8, Func Offset: 0x168
	// Func End, Address: 0x10229e8, Func Offset: 0x178
}

// 
// Start address: 0x10229f0
void type4_move(_anon1* pActwk)
{
	short d0;
	// Line 534, Address: 0x10229f0, Func Offset: 0
	// Line 537, Address: 0x1022a00, Func Offset: 0x10
	// Line 538, Address: 0x1022a24, Func Offset: 0x34
	// Line 539, Address: 0x1022a38, Func Offset: 0x48
	// Line 540, Address: 0x1022a48, Func Offset: 0x58
	// Line 542, Address: 0x1022a6c, Func Offset: 0x7c
	// Line 543, Address: 0x1022a80, Func Offset: 0x90
	// Line 545, Address: 0x1022a94, Func Offset: 0xa4
	// Line 548, Address: 0x1022ab8, Func Offset: 0xc8
	// Func End, Address: 0x1022acc, Func Offset: 0xdc
}

// 
// Start address: 0x1022ad0
void lrblk4_type5(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 553, Address: 0x1022ad0, Func Offset: 0
	// Line 554, Address: 0x1022adc, Func Offset: 0xc
	// Line 561, Address: 0x1022b00, Func Offset: 0x30
	// Line 562, Address: 0x1022b3c, Func Offset: 0x6c
	// Line 563, Address: 0x1022b48, Func Offset: 0x78
	// Line 564, Address: 0x1022b54, Func Offset: 0x84
	// Func End, Address: 0x1022b64, Func Offset: 0x94
}

// 
// Start address: 0x1022b70
void type5_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	unsigned char* a1;
	short i;
	unsigned short d0;
	unsigned char d1;
	unsigned char tbl[14];
	// Line 569, Address: 0x1022b70, Func Offset: 0
	// Line 575, Address: 0x1022b8c, Func Offset: 0x1c
	// Line 586, Address: 0x1022bc0, Func Offset: 0x50
	// Line 587, Address: 0x1022bd0, Func Offset: 0x60
	// Line 588, Address: 0x1022be0, Func Offset: 0x70
	// Line 589, Address: 0x1022bec, Func Offset: 0x7c
	// Line 590, Address: 0x1022bf8, Func Offset: 0x88
	// Line 591, Address: 0x1022c08, Func Offset: 0x98
	// Line 592, Address: 0x1022c18, Func Offset: 0xa8
	// Line 593, Address: 0x1022c24, Func Offset: 0xb4
	// Line 595, Address: 0x1022c30, Func Offset: 0xc0
	// Line 597, Address: 0x1022c44, Func Offset: 0xd4
	// Line 598, Address: 0x1022c4c, Func Offset: 0xdc
	// Line 600, Address: 0x1022c58, Func Offset: 0xe8
	// Line 602, Address: 0x1022c6c, Func Offset: 0xfc
	// Line 603, Address: 0x1022c78, Func Offset: 0x108
	// Line 604, Address: 0x1022c84, Func Offset: 0x114
	// Line 605, Address: 0x1022c8c, Func Offset: 0x11c
	// Line 606, Address: 0x1022c9c, Func Offset: 0x12c
	// Line 607, Address: 0x1022ca4, Func Offset: 0x134
	// Line 608, Address: 0x1022cac, Func Offset: 0x13c
	// Line 610, Address: 0x1022ce0, Func Offset: 0x170
	// Line 611, Address: 0x1022ce8, Func Offset: 0x178
	// Line 613, Address: 0x1022d08, Func Offset: 0x198
	// Line 614, Address: 0x1022d20, Func Offset: 0x1b0
	// Line 615, Address: 0x1022d48, Func Offset: 0x1d8
	// Line 616, Address: 0x1022d5c, Func Offset: 0x1ec
	// Func End, Address: 0x1022d7c, Func Offset: 0x20c
}

// 
// Start address: 0x1022d80
void type5_move(_anon1* pActwk)
{
	_anon2* a1;
	short d0;
	_anon2 type5_mvtbl[6];
	// Line 621, Address: 0x1022d80, Func Offset: 0
	// Line 631, Address: 0x1022d94, Func Offset: 0x14
	// Line 648, Address: 0x1022dc8, Func Offset: 0x48
	// Line 650, Address: 0x1022ddc, Func Offset: 0x5c
	// Line 651, Address: 0x1022df4, Func Offset: 0x74
	// Line 652, Address: 0x1022e00, Func Offset: 0x80
	// Line 653, Address: 0x1022e0c, Func Offset: 0x8c
	// Line 656, Address: 0x1022e14, Func Offset: 0x94
	// Line 657, Address: 0x1022e24, Func Offset: 0xa4
	// Line 658, Address: 0x1022e2c, Func Offset: 0xac
	// Line 659, Address: 0x1022e48, Func Offset: 0xc8
	// Line 660, Address: 0x1022e58, Func Offset: 0xd8
	// Line 662, Address: 0x1022e6c, Func Offset: 0xec
	// Line 663, Address: 0x1022e7c, Func Offset: 0xfc
	// Line 667, Address: 0x1022e94, Func Offset: 0x114
	// Line 668, Address: 0x1022e9c, Func Offset: 0x11c
	// Line 671, Address: 0x1022ea4, Func Offset: 0x124
	// Line 672, Address: 0x1022eb0, Func Offset: 0x130
	// Func End, Address: 0x1022ec8, Func Offset: 0x148
}

// 
// Start address: 0x1022ed0
void type5_end(_anon1* pActwk)
{
	// Line 677, Address: 0x1022ed0, Func Offset: 0
	// Line 678, Address: 0x1022edc, Func Offset: 0xc
	// Line 679, Address: 0x1022ef0, Func Offset: 0x20
	// Func End, Address: 0x1022f00, Func Offset: 0x30
}

// 
// Start address: 0x1022f00
void lrblk4_type6(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 684, Address: 0x1022f00, Func Offset: 0
	// Line 685, Address: 0x1022f0c, Func Offset: 0xc
	// Line 691, Address: 0x1022f28, Func Offset: 0x28
	// Line 692, Address: 0x1022f64, Func Offset: 0x64
	// Line 693, Address: 0x1022f70, Func Offset: 0x70
	// Line 694, Address: 0x1022f7c, Func Offset: 0x7c
	// Func End, Address: 0x1022f8c, Func Offset: 0x8c
}

// 
// Start address: 0x1022f90
void type6_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	_anon8 dw;
	short i;
	short d0;
	unsigned char bd0;
	unsigned char d1;
	// Line 699, Address: 0x1022f90, Func Offset: 0
	// Line 707, Address: 0x1022fac, Func Offset: 0x1c
	// Line 708, Address: 0x1022fbc, Func Offset: 0x2c
	// Line 709, Address: 0x1022fcc, Func Offset: 0x3c
	// Line 710, Address: 0x1022fd8, Func Offset: 0x48
	// Line 711, Address: 0x1022fe4, Func Offset: 0x54
	// Line 712, Address: 0x1022ff4, Func Offset: 0x64
	// Line 714, Address: 0x1023000, Func Offset: 0x70
	// Line 716, Address: 0x1023014, Func Offset: 0x84
	// Line 717, Address: 0x1023024, Func Offset: 0x94
	// Line 718, Address: 0x102302c, Func Offset: 0x9c
	// Line 720, Address: 0x1023038, Func Offset: 0xa8
	// Line 722, Address: 0x102304c, Func Offset: 0xbc
	// Line 723, Address: 0x1023058, Func Offset: 0xc8
	// Line 724, Address: 0x1023064, Func Offset: 0xd4
	// Line 725, Address: 0x102306c, Func Offset: 0xdc
	// Line 726, Address: 0x102307c, Func Offset: 0xec
	// Line 727, Address: 0x10230a0, Func Offset: 0x110
	// Line 728, Address: 0x10230ac, Func Offset: 0x11c
	// Line 729, Address: 0x10230c0, Func Offset: 0x130
	// Line 730, Address: 0x10230c8, Func Offset: 0x138
	// Line 731, Address: 0x10230d0, Func Offset: 0x140
	// Line 732, Address: 0x10230dc, Func Offset: 0x14c
	// Line 733, Address: 0x10230e8, Func Offset: 0x158
	// Line 734, Address: 0x10230fc, Func Offset: 0x16c
	// Line 736, Address: 0x1023104, Func Offset: 0x174
	// Line 737, Address: 0x102310c, Func Offset: 0x17c
	// Line 739, Address: 0x102312c, Func Offset: 0x19c
	// Line 740, Address: 0x1023138, Func Offset: 0x1a8
	// Line 741, Address: 0x1023140, Func Offset: 0x1b0
	// Line 742, Address: 0x1023148, Func Offset: 0x1b8
	// Line 743, Address: 0x1023150, Func Offset: 0x1c0
	// Line 744, Address: 0x102315c, Func Offset: 0x1cc
	// Line 745, Address: 0x1023160, Func Offset: 0x1d0
	// Line 747, Address: 0x102316c, Func Offset: 0x1dc
	// Line 748, Address: 0x1023174, Func Offset: 0x1e4
	// Line 749, Address: 0x10231a8, Func Offset: 0x218
	// Line 750, Address: 0x10231b0, Func Offset: 0x220
	// Line 751, Address: 0x10231c0, Func Offset: 0x230
	// Line 752, Address: 0x10231d8, Func Offset: 0x248
	// Line 753, Address: 0x10231e0, Func Offset: 0x250
	// Line 755, Address: 0x10231ec, Func Offset: 0x25c
	// Line 756, Address: 0x10231f8, Func Offset: 0x268
	// Func End, Address: 0x1023218, Func Offset: 0x288
}

// 
// Start address: 0x1023220
void type6_move(_anon1* pActwk)
{
	short d0;
	short d1;
	short d3;
	short stk;
	unsigned char d2;
	// Line 761, Address: 0x1023220, Func Offset: 0
	// Line 765, Address: 0x1023238, Func Offset: 0x18
	// Line 766, Address: 0x1023248, Func Offset: 0x28
	// Line 768, Address: 0x1023260, Func Offset: 0x40
	// Line 769, Address: 0x1023264, Func Offset: 0x44
	// Line 770, Address: 0x1023270, Func Offset: 0x50
	// Line 774, Address: 0x1023278, Func Offset: 0x58
	// Line 775, Address: 0x1023288, Func Offset: 0x68
	// Line 776, Address: 0x1023290, Func Offset: 0x70
	// Line 779, Address: 0x102329c, Func Offset: 0x7c
	// Line 780, Address: 0x10232a8, Func Offset: 0x88
	// Line 781, Address: 0x10232ac, Func Offset: 0x8c
	// Line 782, Address: 0x10232c0, Func Offset: 0xa0
	// Line 784, Address: 0x10232cc, Func Offset: 0xac
	// Line 785, Address: 0x10232d0, Func Offset: 0xb0
	// Line 786, Address: 0x10232e0, Func Offset: 0xc0
	// Line 787, Address: 0x10232ec, Func Offset: 0xcc
	// Line 788, Address: 0x10232f8, Func Offset: 0xd8
	// Line 789, Address: 0x1023308, Func Offset: 0xe8
	// Line 790, Address: 0x102331c, Func Offset: 0xfc
	// Func End, Address: 0x1023338, Func Offset: 0x118
}

// 
// Start address: 0x1023340
void lrblk4_type8(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 795, Address: 0x1023340, Func Offset: 0
	// Line 796, Address: 0x102334c, Func Offset: 0xc
	// Line 802, Address: 0x1023368, Func Offset: 0x28
	// Line 803, Address: 0x10233a4, Func Offset: 0x64
	// Line 804, Address: 0x10233b0, Func Offset: 0x70
	// Line 805, Address: 0x10233bc, Func Offset: 0x7c
	// Func End, Address: 0x10233cc, Func Offset: 0x8c
}

// 
// Start address: 0x10233d0
void type8_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	short d0;
	// Line 810, Address: 0x10233d0, Func Offset: 0
	// Line 814, Address: 0x10233e0, Func Offset: 0x10
	// Line 815, Address: 0x10233f0, Func Offset: 0x20
	// Line 816, Address: 0x1023400, Func Offset: 0x30
	// Line 817, Address: 0x102340c, Func Offset: 0x3c
	// Line 818, Address: 0x1023418, Func Offset: 0x48
	// Line 819, Address: 0x1023428, Func Offset: 0x58
	// Line 820, Address: 0x1023434, Func Offset: 0x64
	// Line 822, Address: 0x1023440, Func Offset: 0x70
	// Line 824, Address: 0x1023454, Func Offset: 0x84
	// Line 825, Address: 0x1023464, Func Offset: 0x94
	// Line 827, Address: 0x1023478, Func Offset: 0xa8
	// Line 828, Address: 0x1023484, Func Offset: 0xb4
	// Line 829, Address: 0x1023490, Func Offset: 0xc0
	// Line 830, Address: 0x102349c, Func Offset: 0xcc
	// Line 831, Address: 0x10234ac, Func Offset: 0xdc
	// Line 833, Address: 0x10234d0, Func Offset: 0x100
	// Line 835, Address: 0x10234e4, Func Offset: 0x114
	// Line 836, Address: 0x10234f0, Func Offset: 0x120
	// Line 837, Address: 0x10234fc, Func Offset: 0x12c
	// Line 838, Address: 0x1023508, Func Offset: 0x138
	// Line 839, Address: 0x1023518, Func Offset: 0x148
	// Line 840, Address: 0x1023528, Func Offset: 0x158
	// Line 841, Address: 0x1023534, Func Offset: 0x164
	// Line 842, Address: 0x102353c, Func Offset: 0x16c
	// Line 843, Address: 0x102354c, Func Offset: 0x17c
	// Line 844, Address: 0x102355c, Func Offset: 0x18c
	// Line 845, Address: 0x1023568, Func Offset: 0x198
	// Line 848, Address: 0x1023570, Func Offset: 0x1a0
	// Line 849, Address: 0x102357c, Func Offset: 0x1ac
	// Func End, Address: 0x1023590, Func Offset: 0x1c0
}

// 
// Start address: 0x1023590
void type8_move(_anon1* pActwk)
{
	short d0;
	// Line 854, Address: 0x1023590, Func Offset: 0
	// Line 857, Address: 0x10235a0, Func Offset: 0x10
	// Line 858, Address: 0x10235c4, Func Offset: 0x34
	// Line 859, Address: 0x10235d8, Func Offset: 0x48
	// Line 860, Address: 0x10235e8, Func Offset: 0x58
	// Line 862, Address: 0x102360c, Func Offset: 0x7c
	// Line 863, Address: 0x1023620, Func Offset: 0x90
	// Line 865, Address: 0x1023634, Func Offset: 0xa4
	// Line 868, Address: 0x1023658, Func Offset: 0xc8
	// Func End, Address: 0x102366c, Func Offset: 0xdc
}

