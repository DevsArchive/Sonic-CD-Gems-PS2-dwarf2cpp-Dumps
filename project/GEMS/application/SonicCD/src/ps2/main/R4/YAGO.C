typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon0*);
typedef void(*type_8)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon1* type_2[2];
typedef unsigned char type_3[4];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef void(*type_7)(_anon0*)[9];
typedef void(*type_9)(_anon0*)[9];
typedef _anon0 type_10[128];
typedef _anon1* type_11[2];
typedef unsigned char* type_12[1];

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
		_anon7 spra[20];
		_anon7 spr[0];
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

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char pat_chg0[4];
unsigned char* pat_chg[1];
_anon1 spr_yago_e_00;
_anon1 spr_yago_e_01;
_anon1 spr_yago_b_00;
_anon1 spr_yago_b_01;
_anon1* pat_yago_e[2];
_anon1* pat_yago_b[2];
_anon0 actwk[128];

void yago(_anon0* pActwk);
void act_disp(_anon0* pActwk);
void yago_e(_anon0* pActwk);
void act_init(_anon0* pActwk);
void act_fall(_anon0* pActwk);
void act_lr(_anon0* pActwk);
void act_rev(_anon0* pActwk);
void act_rev1(_anon0* pActwk);
void act_jet(_anon0* pActwk);
void act_jet1(_anon0* pActwk);
void act_jet2(_anon0* pActwk);
void act_fall1(_anon0* pActwk);
void yago_b(_anon0* pActwk);
void act_init_(_anon0* pActwk);
void act_fall_(_anon0* pActwk);
void act_jet1_(_anon0* pActwk);
void act_jet2_(_anon0* pActwk);

// 
// Start address: 0x10205f0
void yago(_anon0* pActwk)
{
	// Line 152, Address: 0x10205f0, Func Offset: 0
	// Line 153, Address: 0x10205fc, Func Offset: 0xc
	// Line 154, Address: 0x102060c, Func Offset: 0x1c
	// Line 156, Address: 0x1020620, Func Offset: 0x30
	// Line 157, Address: 0x102062c, Func Offset: 0x3c
	// Func End, Address: 0x102063c, Func Offset: 0x4c
}

// 
// Start address: 0x1020640
void act_disp(_anon0* pActwk)
{
	// Line 161, Address: 0x1020640, Func Offset: 0
	// Line 162, Address: 0x102064c, Func Offset: 0xc
	// Line 163, Address: 0x1020660, Func Offset: 0x20
	// Line 164, Address: 0x102066c, Func Offset: 0x2c
	// Line 165, Address: 0x1020680, Func Offset: 0x40
	// Func End, Address: 0x1020690, Func Offset: 0x50
}

// 
// Start address: 0x1020690
void yago_e(_anon0* pActwk)
{
	void(*act_tbl)(_anon0*)[9];
	// Line 169, Address: 0x1020690, Func Offset: 0
	// Line 183, Address: 0x102069c, Func Offset: 0xc
	// Line 184, Address: 0x10206b0, Func Offset: 0x20
	// Line 185, Address: 0x10206f4, Func Offset: 0x64
	// Func End, Address: 0x1020704, Func Offset: 0x74
}

// 
// Start address: 0x1020710
void act_init(_anon0* pActwk)
{
	// Line 189, Address: 0x1020710, Func Offset: 0
	// Line 190, Address: 0x102071c, Func Offset: 0xc
	// Line 191, Address: 0x102072c, Func Offset: 0x1c
	// Line 192, Address: 0x102073c, Func Offset: 0x2c
	// Line 193, Address: 0x1020748, Func Offset: 0x38
	// Line 194, Address: 0x1020754, Func Offset: 0x44
	// Line 195, Address: 0x1020760, Func Offset: 0x50
	// Line 196, Address: 0x102076c, Func Offset: 0x5c
	// Line 198, Address: 0x1020778, Func Offset: 0x68
	// Line 199, Address: 0x1020784, Func Offset: 0x74
	// Line 200, Address: 0x1020794, Func Offset: 0x84
	// Line 201, Address: 0x10207a0, Func Offset: 0x90
	// Func End, Address: 0x10207b0, Func Offset: 0xa0
}

// 
// Start address: 0x10207b0
void act_fall(_anon0* pActwk)
{
	// Line 205, Address: 0x10207b0, Func Offset: 0
	// Line 206, Address: 0x10207bc, Func Offset: 0xc
	// Line 207, Address: 0x10207d0, Func Offset: 0x20
	// Line 209, Address: 0x10207f0, Func Offset: 0x40
	// Line 210, Address: 0x10207fc, Func Offset: 0x4c
	// Line 214, Address: 0x1020804, Func Offset: 0x54
	// Line 215, Address: 0x1020814, Func Offset: 0x64
	// Line 216, Address: 0x1020824, Func Offset: 0x74
	// Line 217, Address: 0x1020834, Func Offset: 0x84
	// Line 219, Address: 0x1020840, Func Offset: 0x90
	// Func End, Address: 0x1020850, Func Offset: 0xa0
}

// 
// Start address: 0x1020850
void act_lr(_anon0* pActwk)
{
	short temp;
	// Line 223, Address: 0x1020850, Func Offset: 0
	// Line 226, Address: 0x1020860, Func Offset: 0x10
	// Line 227, Address: 0x1020878, Func Offset: 0x28
	// Line 229, Address: 0x1020894, Func Offset: 0x44
	// Line 230, Address: 0x10208b0, Func Offset: 0x60
	// Line 231, Address: 0x10208e0, Func Offset: 0x90
	// Line 232, Address: 0x10208f8, Func Offset: 0xa8
	// Line 234, Address: 0x102091c, Func Offset: 0xcc
	// Line 235, Address: 0x1020950, Func Offset: 0x100
	// Line 237, Address: 0x1020964, Func Offset: 0x114
	// Line 238, Address: 0x1020998, Func Offset: 0x148
	// Line 239, Address: 0x10209b0, Func Offset: 0x160
	// Line 241, Address: 0x10209bc, Func Offset: 0x16c
	// Line 243, Address: 0x10209d0, Func Offset: 0x180
	// Line 244, Address: 0x10209dc, Func Offset: 0x18c
	// Line 245, Address: 0x10209e8, Func Offset: 0x198
	// Line 246, Address: 0x10209f4, Func Offset: 0x1a4
	// Line 250, Address: 0x10209fc, Func Offset: 0x1ac
	// Line 251, Address: 0x1020a08, Func Offset: 0x1b8
	// Line 253, Address: 0x1020a14, Func Offset: 0x1c4
	// Line 254, Address: 0x1020a24, Func Offset: 0x1d4
	// Line 255, Address: 0x1020a30, Func Offset: 0x1e0
	// Line 256, Address: 0x1020a3c, Func Offset: 0x1ec
	// Line 261, Address: 0x1020a44, Func Offset: 0x1f4
	// Line 262, Address: 0x1020a54, Func Offset: 0x204
	// Line 263, Address: 0x1020a60, Func Offset: 0x210
	// Line 264, Address: 0x1020a6c, Func Offset: 0x21c
	// Func End, Address: 0x1020a80, Func Offset: 0x230
}

// 
// Start address: 0x1020a80
void act_rev(_anon0* pActwk)
{
	// Line 268, Address: 0x1020a80, Func Offset: 0
	// Line 269, Address: 0x1020a8c, Func Offset: 0xc
	// Line 270, Address: 0x1020a9c, Func Offset: 0x1c
	// Line 272, Address: 0x1020aac, Func Offset: 0x2c
	// Line 273, Address: 0x1020ab8, Func Offset: 0x38
	// Line 276, Address: 0x1020ac0, Func Offset: 0x40
	// Line 277, Address: 0x1020ad0, Func Offset: 0x50
	// Line 278, Address: 0x1020adc, Func Offset: 0x5c
	// Line 279, Address: 0x1020aec, Func Offset: 0x6c
	// Line 280, Address: 0x1020b04, Func Offset: 0x84
	// Line 281, Address: 0x1020b14, Func Offset: 0x94
	// Line 282, Address: 0x1020b24, Func Offset: 0xa4
	// Line 283, Address: 0x1020b30, Func Offset: 0xb0
	// Func End, Address: 0x1020b40, Func Offset: 0xc0
}

// 
// Start address: 0x1020b40
void act_rev1(_anon0* pActwk)
{
	// Line 287, Address: 0x1020b40, Func Offset: 0
	// Line 288, Address: 0x1020b4c, Func Offset: 0xc
	// Line 289, Address: 0x1020b5c, Func Offset: 0x1c
	// Line 291, Address: 0x1020b6c, Func Offset: 0x2c
	// Line 292, Address: 0x1020b78, Func Offset: 0x38
	// Line 295, Address: 0x1020b80, Func Offset: 0x40
	// Line 296, Address: 0x1020b90, Func Offset: 0x50
	// Line 297, Address: 0x1020b9c, Func Offset: 0x5c
	// Func End, Address: 0x1020bac, Func Offset: 0x6c
}

// 
// Start address: 0x1020bb0
void act_jet(_anon0* pActwk)
{
	// Line 301, Address: 0x1020bb0, Func Offset: 0
	// Line 302, Address: 0x1020bbc, Func Offset: 0xc
	// Line 303, Address: 0x1020bcc, Func Offset: 0x1c
	// Line 305, Address: 0x1020bdc, Func Offset: 0x2c
	// Line 306, Address: 0x1020be8, Func Offset: 0x38
	// Line 309, Address: 0x1020bf0, Func Offset: 0x40
	// Line 310, Address: 0x1020c00, Func Offset: 0x50
	// Line 311, Address: 0x1020c0c, Func Offset: 0x5c
	// Line 312, Address: 0x1020c18, Func Offset: 0x68
	// Func End, Address: 0x1020c28, Func Offset: 0x78
}

// 
// Start address: 0x1020c30
void act_jet1(_anon0* pActwk)
{
	// Line 316, Address: 0x1020c30, Func Offset: 0
	// Line 317, Address: 0x1020c3c, Func Offset: 0xc
	// Line 318, Address: 0x1020c4c, Func Offset: 0x1c
	// Line 319, Address: 0x1020c5c, Func Offset: 0x2c
	// Line 321, Address: 0x1020c6c, Func Offset: 0x3c
	// Line 322, Address: 0x1020c78, Func Offset: 0x48
	// Line 325, Address: 0x1020c80, Func Offset: 0x50
	// Line 326, Address: 0x1020c90, Func Offset: 0x60
	// Line 327, Address: 0x1020ca0, Func Offset: 0x70
	// Line 328, Address: 0x1020cb8, Func Offset: 0x88
	// Line 330, Address: 0x1020cc8, Func Offset: 0x98
	// Line 331, Address: 0x1020cd8, Func Offset: 0xa8
	// Line 332, Address: 0x1020ce4, Func Offset: 0xb4
	// Func End, Address: 0x1020cf4, Func Offset: 0xc4
}

// 
// Start address: 0x1020d00
void act_jet2(_anon0* pActwk)
{
	short temp;
	// Line 336, Address: 0x1020d00, Func Offset: 0
	// Line 339, Address: 0x1020d10, Func Offset: 0x10
	// Line 340, Address: 0x1020d28, Func Offset: 0x28
	// Line 341, Address: 0x1020d40, Func Offset: 0x40
	// Line 343, Address: 0x1020d64, Func Offset: 0x64
	// Line 344, Address: 0x1020d98, Func Offset: 0x98
	// Line 346, Address: 0x1020dac, Func Offset: 0xac
	// Line 347, Address: 0x1020dc4, Func Offset: 0xc4
	// Line 348, Address: 0x1020dd4, Func Offset: 0xd4
	// Line 350, Address: 0x1020de4, Func Offset: 0xe4
	// Line 351, Address: 0x1020df0, Func Offset: 0xf0
	// Line 352, Address: 0x1020dfc, Func Offset: 0xfc
	// Line 355, Address: 0x1020e04, Func Offset: 0x104
	// Line 357, Address: 0x1020e10, Func Offset: 0x110
	// Line 358, Address: 0x1020e1c, Func Offset: 0x11c
	// Line 359, Address: 0x1020e28, Func Offset: 0x128
	// Func End, Address: 0x1020e3c, Func Offset: 0x13c
}

// 
// Start address: 0x1020e40
void act_fall1(_anon0* pActwk)
{
	short temp;
	// Line 363, Address: 0x1020e40, Func Offset: 0
	// Line 366, Address: 0x1020e50, Func Offset: 0x10
	// Line 367, Address: 0x1020e64, Func Offset: 0x24
	// Line 369, Address: 0x1020ea4, Func Offset: 0x64
	// Line 370, Address: 0x1020eb0, Func Offset: 0x70
	// Line 373, Address: 0x1020eb8, Func Offset: 0x78
	// Line 374, Address: 0x1020ec4, Func Offset: 0x84
	// Line 375, Address: 0x1020ed4, Func Offset: 0x94
	// Line 376, Address: 0x1020ee0, Func Offset: 0xa0
	// Line 377, Address: 0x1020eec, Func Offset: 0xac
	// Func End, Address: 0x1020f00, Func Offset: 0xc0
}

// 
// Start address: 0x1020f00
void yago_b(_anon0* pActwk)
{
	void(*act_tbl)(_anon0*)[9];
	// Line 381, Address: 0x1020f00, Func Offset: 0
	// Line 395, Address: 0x1020f0c, Func Offset: 0xc
	// Line 396, Address: 0x1020f20, Func Offset: 0x20
	// Line 397, Address: 0x1020f64, Func Offset: 0x64
	// Func End, Address: 0x1020f74, Func Offset: 0x74
}

// 
// Start address: 0x1020f80
void act_init_(_anon0* pActwk)
{
	// Line 401, Address: 0x1020f80, Func Offset: 0
	// Line 402, Address: 0x1020f8c, Func Offset: 0xc
	// Line 403, Address: 0x1020f9c, Func Offset: 0x1c
	// Line 404, Address: 0x1020fac, Func Offset: 0x2c
	// Line 405, Address: 0x1020fb8, Func Offset: 0x38
	// Line 406, Address: 0x1020fc4, Func Offset: 0x44
	// Line 407, Address: 0x1020fd0, Func Offset: 0x50
	// Line 408, Address: 0x1020fdc, Func Offset: 0x5c
	// Line 410, Address: 0x1020fe8, Func Offset: 0x68
	// Line 411, Address: 0x1020ff4, Func Offset: 0x74
	// Line 412, Address: 0x1021004, Func Offset: 0x84
	// Line 413, Address: 0x1021010, Func Offset: 0x90
	// Func End, Address: 0x1021020, Func Offset: 0xa0
}

// 
// Start address: 0x1021020
void act_fall_(_anon0* pActwk)
{
	short temp;
	// Line 417, Address: 0x1021020, Func Offset: 0
	// Line 420, Address: 0x1021030, Func Offset: 0x10
	// Line 421, Address: 0x1021044, Func Offset: 0x24
	// Line 423, Address: 0x1021074, Func Offset: 0x54
	// Line 424, Address: 0x1021080, Func Offset: 0x60
	// Line 428, Address: 0x1021088, Func Offset: 0x68
	// Line 429, Address: 0x1021098, Func Offset: 0x78
	// Line 430, Address: 0x10210bc, Func Offset: 0x9c
	// Line 431, Address: 0x10210cc, Func Offset: 0xac
	// Line 432, Address: 0x10210dc, Func Offset: 0xbc
	// Line 434, Address: 0x10210e8, Func Offset: 0xc8
	// Func End, Address: 0x10210fc, Func Offset: 0xdc
}

// 
// Start address: 0x1021100
void act_jet1_(_anon0* pActwk)
{
	// Line 438, Address: 0x1021100, Func Offset: 0
	// Line 439, Address: 0x102110c, Func Offset: 0xc
	// Line 440, Address: 0x102111c, Func Offset: 0x1c
	// Line 441, Address: 0x102112c, Func Offset: 0x2c
	// Line 443, Address: 0x102113c, Func Offset: 0x3c
	// Line 444, Address: 0x1021148, Func Offset: 0x48
	// Line 447, Address: 0x1021150, Func Offset: 0x50
	// Line 448, Address: 0x1021160, Func Offset: 0x60
	// Line 449, Address: 0x102116c, Func Offset: 0x6c
	// Line 450, Address: 0x1021184, Func Offset: 0x84
	// Line 452, Address: 0x1021194, Func Offset: 0x94
	// Line 453, Address: 0x10211a4, Func Offset: 0xa4
	// Line 454, Address: 0x10211b0, Func Offset: 0xb0
	// Func End, Address: 0x10211c0, Func Offset: 0xc0
}

// 
// Start address: 0x10211c0
void act_jet2_(_anon0* pActwk)
{
	short temp;
	// Line 458, Address: 0x10211c0, Func Offset: 0
	// Line 461, Address: 0x10211d0, Func Offset: 0x10
	// Line 462, Address: 0x10211e8, Func Offset: 0x28
	// Line 463, Address: 0x1021200, Func Offset: 0x40
	// Line 465, Address: 0x1021224, Func Offset: 0x64
	// Line 466, Address: 0x1021258, Func Offset: 0x98
	// Line 468, Address: 0x1021268, Func Offset: 0xa8
	// Line 469, Address: 0x1021280, Func Offset: 0xc0
	// Line 470, Address: 0x1021290, Func Offset: 0xd0
	// Line 472, Address: 0x10212a0, Func Offset: 0xe0
	// Line 473, Address: 0x10212ac, Func Offset: 0xec
	// Line 475, Address: 0x10212b4, Func Offset: 0xf4
	// Line 478, Address: 0x10212d4, Func Offset: 0x114
	// Line 479, Address: 0x10212e0, Func Offset: 0x120
	// Line 480, Address: 0x10212ec, Func Offset: 0x12c
	// Line 482, Address: 0x10212f4, Func Offset: 0x134
	// Line 483, Address: 0x1021300, Func Offset: 0x140
	// Line 486, Address: 0x1021308, Func Offset: 0x148
	// Line 488, Address: 0x1021318, Func Offset: 0x158
	// Line 489, Address: 0x1021324, Func Offset: 0x164
	// Line 490, Address: 0x1021330, Func Offset: 0x170
	// Func End, Address: 0x1021344, Func Offset: 0x184
}

