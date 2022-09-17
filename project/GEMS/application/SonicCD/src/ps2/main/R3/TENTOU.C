typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_5)(_anon1*);
typedef void(*type_9)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[5];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef void(*type_6)(_anon1*)[6];
typedef _anon1 type_7[128];
typedef unsigned char* type_8[1];
typedef void(*type_10)(_anon1*)[5];
typedef unsigned char* type_11[1];
typedef _anon0* type_12[3];
typedef _anon0* type_13[3];
typedef unsigned char type_14[4];
typedef _anon0* type_15[2];

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

unsigned char bCarry;
void(*tentou_tbl)(_anon1*)[6];
unsigned char* pchg0[1];
_anon0* pat_ten_b_tentou[3];
_anon0* pat_e_tentou[3];
_anon1 actwk[128];
void(*tentou1_tbl)(_anon1*)[5];
_anon0* tentou_bomten_b_pat[2];
unsigned char* pchg1[1];
unsigned char pchg0_0[5];
_anon0 ten_b_tentou0;
_anon0 ten_b_tentou1;
_anon0 ten_b_tentou2;
_anon0 e_tentou0;
_anon0 e_tentou1;
_anon0 e_tentou2;
unsigned char pchg1_0[4];
_anon0 bomten_b_0;
_anon0 bomten_b_1;

void tentou(_anon1* pActwk);
void ten_a_init(_anon1* pActwk);
void ten_a_fall(_anon1* pActwk);
int abs(int i);
void ten_a_wait(_anon1* pActwk);
void ten_a_lr(_anon1* pActwk);
void ten_a_up(_anon1* pActwk);
void ten_a_gake(_anon1* pActwk);
void ten_a_hover(_anon1* pActwk);
void ten_a_range(_anon1* pActwk);
void tentou1(_anon1* pActwk);
void ten_b_init(_anon1* pActwk);
void ten_b_fall(_anon1* pActwk);
void ten_b_wait(_anon1* pActwk);
void ten_b_blink(_anon1* pActwk);
void ten_b_die(_anon1* pActwk);

// 
// Start address: 0x1023d50
void tentou(_anon1* pActwk)
{
	// Line 92, Address: 0x1023d50, Func Offset: 0
	// Line 93, Address: 0x1023d5c, Func Offset: 0xc
	// Line 95, Address: 0x1023d78, Func Offset: 0x28
	// Line 96, Address: 0x1023d84, Func Offset: 0x34
	// Line 98, Address: 0x1023d8c, Func Offset: 0x3c
	// Line 100, Address: 0x1023dac, Func Offset: 0x5c
	// Line 101, Address: 0x1023df0, Func Offset: 0xa0
	// Line 102, Address: 0x1023e04, Func Offset: 0xb4
	// Line 103, Address: 0x1023e10, Func Offset: 0xc0
	// Line 104, Address: 0x1023e1c, Func Offset: 0xcc
	// Func End, Address: 0x1023e2c, Func Offset: 0xdc
}

// 
// Start address: 0x1023e30
void ten_a_init(_anon1* pActwk)
{
	// Line 116, Address: 0x1023e30, Func Offset: 0
	// Line 117, Address: 0x1023e3c, Func Offset: 0xc
	// Line 118, Address: 0x1023e4c, Func Offset: 0x1c
	// Line 119, Address: 0x1023e5c, Func Offset: 0x2c
	// Line 120, Address: 0x1023e68, Func Offset: 0x38
	// Line 121, Address: 0x1023e74, Func Offset: 0x44
	// Line 122, Address: 0x1023e80, Func Offset: 0x50
	// Line 123, Address: 0x1023e8c, Func Offset: 0x5c
	// Line 124, Address: 0x1023e98, Func Offset: 0x68
	// Line 126, Address: 0x1023eb0, Func Offset: 0x80
	// Line 127, Address: 0x1023ec0, Func Offset: 0x90
	// Line 128, Address: 0x1023ecc, Func Offset: 0x9c
	// Line 130, Address: 0x1023ed4, Func Offset: 0xa4
	// Line 131, Address: 0x1023ee4, Func Offset: 0xb4
	// Line 132, Address: 0x1023ef0, Func Offset: 0xc0
	// Func End, Address: 0x1023f00, Func Offset: 0xd0
}

// 
// Start address: 0x1023f00
void ten_a_fall(_anon1* pActwk)
{
	short iD1;
	// Line 144, Address: 0x1023f00, Func Offset: 0
	// Line 147, Address: 0x1023f10, Func Offset: 0x10
	// Line 148, Address: 0x1023f24, Func Offset: 0x24
	// Line 149, Address: 0x1023f38, Func Offset: 0x38
	// Line 150, Address: 0x1023f44, Func Offset: 0x44
	// Line 152, Address: 0x1023f54, Func Offset: 0x54
	// Line 153, Address: 0x1023f64, Func Offset: 0x64
	// Line 154, Address: 0x1023f78, Func Offset: 0x78
	// Line 155, Address: 0x1023f88, Func Offset: 0x88
	// Line 156, Address: 0x1023f94, Func Offset: 0x94
	// Line 157, Address: 0x1023fa4, Func Offset: 0xa4
	// Line 158, Address: 0x1023fc0, Func Offset: 0xc0
	// Line 160, Address: 0x1023fd0, Func Offset: 0xd0
	// Func End, Address: 0x1023fe4, Func Offset: 0xe4
}

// 
// Start address: 0x1023ff0
int abs(int i)
{
	// Line 164, Address: 0x1023ff0, Func Offset: 0
	// Line 165, Address: 0x1023ff8, Func Offset: 0x8
	// Line 166, Address: 0x1024004, Func Offset: 0x14
	// Line 168, Address: 0x1024010, Func Offset: 0x20
	// Line 169, Address: 0x1024018, Func Offset: 0x28
	// Func End, Address: 0x1024024, Func Offset: 0x34
}

// 
// Start address: 0x1024030
void ten_a_wait(_anon1* pActwk)
{
	_anon1* pPlaywk;
	short iD0;
	short iD1;
	// Line 181, Address: 0x1024030, Func Offset: 0
	// Line 182, Address: 0x1024048, Func Offset: 0x18
	// Line 185, Address: 0x1024050, Func Offset: 0x20
	// Line 187, Address: 0x102405c, Func Offset: 0x2c
	// Line 188, Address: 0x102408c, Func Offset: 0x5c
	// Line 189, Address: 0x10240ac, Func Offset: 0x7c
	// Line 196, Address: 0x10240c0, Func Offset: 0x90
	// Line 197, Address: 0x10240f0, Func Offset: 0xc0
	// Line 198, Address: 0x10240f8, Func Offset: 0xc8
	// Line 199, Address: 0x1024118, Func Offset: 0xe8
	// Line 206, Address: 0x102412c, Func Offset: 0xfc
	// Line 207, Address: 0x102413c, Func Offset: 0x10c
	// Line 208, Address: 0x1024150, Func Offset: 0x120
	// Line 210, Address: 0x1024160, Func Offset: 0x130
	// Line 211, Address: 0x1024170, Func Offset: 0x140
	// Line 212, Address: 0x1024180, Func Offset: 0x150
	// Line 216, Address: 0x10241ac, Func Offset: 0x17c
	// Func End, Address: 0x10241c8, Func Offset: 0x198
}

// 
// Start address: 0x10241d0
void ten_a_lr(_anon1* pActwk)
{
	short iD1;
	_anon1* pActfree;
	// Line 228, Address: 0x10241d0, Func Offset: 0
	// Line 232, Address: 0x10241e0, Func Offset: 0x10
	// Line 233, Address: 0x10241fc, Func Offset: 0x2c
	// Line 235, Address: 0x1024210, Func Offset: 0x40
	// Line 236, Address: 0x1024224, Func Offset: 0x54
	// Line 238, Address: 0x1024248, Func Offset: 0x78
	// Line 240, Address: 0x1024264, Func Offset: 0x94
	// Line 242, Address: 0x1024274, Func Offset: 0xa4
	// Line 243, Address: 0x1024288, Func Offset: 0xb8
	// Line 245, Address: 0x102429c, Func Offset: 0xcc
	// Line 246, Address: 0x10242a8, Func Offset: 0xd8
	// Line 247, Address: 0x10242b8, Func Offset: 0xe8
	// Line 248, Address: 0x10242cc, Func Offset: 0xfc
	// Line 249, Address: 0x10242d8, Func Offset: 0x108
	// Line 251, Address: 0x10242ec, Func Offset: 0x11c
	// Line 252, Address: 0x10242fc, Func Offset: 0x12c
	// Line 254, Address: 0x1024310, Func Offset: 0x140
	// Line 256, Address: 0x1024324, Func Offset: 0x154
	// Line 257, Address: 0x1024334, Func Offset: 0x164
	// Line 258, Address: 0x1024344, Func Offset: 0x174
	// Line 259, Address: 0x1024354, Func Offset: 0x184
	// Line 260, Address: 0x1024364, Func Offset: 0x194
	// Line 264, Address: 0x1024370, Func Offset: 0x1a0
	// Line 268, Address: 0x1024378, Func Offset: 0x1a8
	// Line 269, Address: 0x1024388, Func Offset: 0x1b8
	// Line 270, Address: 0x1024394, Func Offset: 0x1c4
	// Line 272, Address: 0x10243a8, Func Offset: 0x1d8
	// Line 276, Address: 0x10243b0, Func Offset: 0x1e0
	// Line 278, Address: 0x10243c0, Func Offset: 0x1f0
	// Func End, Address: 0x10243d4, Func Offset: 0x204
}

// 
// Start address: 0x10243e0
void ten_a_up(_anon1* pActwk)
{
	// Line 290, Address: 0x10243e0, Func Offset: 0
	// Line 291, Address: 0x10243e8, Func Offset: 0x8
	// Line 292, Address: 0x10243f8, Func Offset: 0x18
	// Func End, Address: 0x1024404, Func Offset: 0x24
}

// 
// Start address: 0x1024410
void ten_a_gake(_anon1* pActwk)
{
	char cRwk;
	short iD1;
	short iD3;
	short iD4;
	char cwk;
	// Line 304, Address: 0x1024410, Func Offset: 0
	// Line 308, Address: 0x1024430, Func Offset: 0x20
	// Line 309, Address: 0x102444c, Func Offset: 0x3c
	// Line 310, Address: 0x102445c, Func Offset: 0x4c
	// Line 311, Address: 0x1024470, Func Offset: 0x60
	// Line 312, Address: 0x102447c, Func Offset: 0x6c
	// Line 313, Address: 0x1024498, Func Offset: 0x88
	// Line 314, Address: 0x10244c0, Func Offset: 0xb0
	// Line 315, Address: 0x10244d8, Func Offset: 0xc8
	// Line 318, Address: 0x10244ec, Func Offset: 0xdc
	// Line 319, Address: 0x10244f8, Func Offset: 0xe8
	// Line 320, Address: 0x1024518, Func Offset: 0x108
	// Line 321, Address: 0x1024528, Func Offset: 0x118
	// Line 322, Address: 0x102454c, Func Offset: 0x13c
	// Line 324, Address: 0x1024554, Func Offset: 0x144
	// Func End, Address: 0x1024578, Func Offset: 0x168
}

// 
// Start address: 0x1024580
void ten_a_hover(_anon1* pActwk)
{
	unsigned short wD0;
	// Line 336, Address: 0x1024580, Func Offset: 0
	// Line 339, Address: 0x102458c, Func Offset: 0xc
	// Line 340, Address: 0x102459c, Func Offset: 0x1c
	// Line 341, Address: 0x10245b8, Func Offset: 0x38
	// Line 342, Address: 0x10245c4, Func Offset: 0x44
	// Line 343, Address: 0x10245cc, Func Offset: 0x4c
	// Line 344, Address: 0x10245d8, Func Offset: 0x58
	// Line 345, Address: 0x1024604, Func Offset: 0x84
	// Func End, Address: 0x1024614, Func Offset: 0x94
}

// 
// Start address: 0x1024620
void ten_a_range(_anon1* pActwk)
{
	short iD0;
	_anon1* pPlaywk;
	// Line 357, Address: 0x1024620, Func Offset: 0
	// Line 359, Address: 0x1024634, Func Offset: 0x14
	// Line 361, Address: 0x102463c, Func Offset: 0x1c
	// Line 362, Address: 0x1024648, Func Offset: 0x28
	// Line 363, Address: 0x102465c, Func Offset: 0x3c
	// Line 364, Address: 0x1024668, Func Offset: 0x48
	// Line 365, Address: 0x1024684, Func Offset: 0x64
	// Line 366, Address: 0x1024690, Func Offset: 0x70
	// Line 368, Address: 0x10246a8, Func Offset: 0x88
	// Line 369, Address: 0x10246d8, Func Offset: 0xb8
	// Line 370, Address: 0x10246e4, Func Offset: 0xc4
	// Line 372, Address: 0x10246f0, Func Offset: 0xd0
	// Func End, Address: 0x1024708, Func Offset: 0xe8
}

// 
// Start address: 0x1024710
void tentou1(_anon1* pActwk)
{
	unsigned char byRwk;
	// Line 402, Address: 0x1024710, Func Offset: 0
	// Line 405, Address: 0x1024720, Func Offset: 0x10
	// Line 406, Address: 0x102474c, Func Offset: 0x3c
	// Line 407, Address: 0x1024770, Func Offset: 0x60
	// Line 408, Address: 0x102477c, Func Offset: 0x6c
	// Func End, Address: 0x1024790, Func Offset: 0x80
}

// 
// Start address: 0x1024790
void ten_b_init(_anon1* pActwk)
{
	// Line 421, Address: 0x1024790, Func Offset: 0
	// Line 422, Address: 0x102479c, Func Offset: 0xc
	// Line 423, Address: 0x10247ac, Func Offset: 0x1c
	// Line 424, Address: 0x10247bc, Func Offset: 0x2c
	// Line 425, Address: 0x10247c8, Func Offset: 0x38
	// Line 426, Address: 0x10247d4, Func Offset: 0x44
	// Line 427, Address: 0x10247e0, Func Offset: 0x50
	// Line 428, Address: 0x10247ec, Func Offset: 0x5c
	// Line 429, Address: 0x10247f8, Func Offset: 0x68
	// Line 430, Address: 0x1024804, Func Offset: 0x74
	// Line 431, Address: 0x1024814, Func Offset: 0x84
	// Line 432, Address: 0x1024820, Func Offset: 0x90
	// Func End, Address: 0x1024830, Func Offset: 0xa0
}

// 
// Start address: 0x1024830
void ten_b_fall(_anon1* pActwk)
{
	short iD1;
	// Line 444, Address: 0x1024830, Func Offset: 0
	// Line 447, Address: 0x1024840, Func Offset: 0x10
	// Line 449, Address: 0x1024854, Func Offset: 0x24
	// Line 450, Address: 0x1024860, Func Offset: 0x30
	// Line 452, Address: 0x1024868, Func Offset: 0x38
	// Line 453, Address: 0x102487c, Func Offset: 0x4c
	// Line 454, Address: 0x1024890, Func Offset: 0x60
	// Line 456, Address: 0x10248a0, Func Offset: 0x70
	// Line 457, Address: 0x10248b0, Func Offset: 0x80
	// Line 458, Address: 0x10248bc, Func Offset: 0x8c
	// Line 460, Address: 0x10248cc, Func Offset: 0x9c
	// Func End, Address: 0x10248e0, Func Offset: 0xb0
}

// 
// Start address: 0x10248e0
void ten_b_wait(_anon1* pActwk)
{
	// Line 472, Address: 0x10248e0, Func Offset: 0
	// Line 473, Address: 0x10248ec, Func Offset: 0xc
	// Line 475, Address: 0x1024900, Func Offset: 0x20
	// Line 476, Address: 0x102490c, Func Offset: 0x2c
	// Line 478, Address: 0x1024914, Func Offset: 0x34
	// Line 479, Address: 0x1024924, Func Offset: 0x44
	// Line 481, Address: 0x102493c, Func Offset: 0x5c
	// Line 482, Address: 0x1024948, Func Offset: 0x68
	// Line 484, Address: 0x1024958, Func Offset: 0x78
	// Func End, Address: 0x1024968, Func Offset: 0x88
}

// 
// Start address: 0x1024970
void ten_b_blink(_anon1* pActwk)
{
	// Line 496, Address: 0x1024970, Func Offset: 0
	// Line 497, Address: 0x102497c, Func Offset: 0xc
	// Line 499, Address: 0x1024990, Func Offset: 0x20
	// Line 500, Address: 0x102499c, Func Offset: 0x2c
	// Line 502, Address: 0x10249a4, Func Offset: 0x34
	// Line 503, Address: 0x10249b4, Func Offset: 0x44
	// Line 505, Address: 0x10249cc, Func Offset: 0x5c
	// Line 507, Address: 0x10249dc, Func Offset: 0x6c
	// Line 508, Address: 0x10249f0, Func Offset: 0x80
	// Func End, Address: 0x1024a00, Func Offset: 0x90
}

// 
// Start address: 0x1024a00
void ten_b_die(_anon1* pActwk)
{
	// Line 520, Address: 0x1024a00, Func Offset: 0
	// Line 521, Address: 0x1024a0c, Func Offset: 0xc
	// Line 522, Address: 0x1024a18, Func Offset: 0x18
	// Line 523, Address: 0x1024a20, Func Offset: 0x20
	// Line 524, Address: 0x1024a2c, Func Offset: 0x2c
	// Line 525, Address: 0x1024a4c, Func Offset: 0x4c
	// Line 526, Address: 0x1024a58, Func Offset: 0x58
	// Func End, Address: 0x1024a68, Func Offset: 0x68
}

