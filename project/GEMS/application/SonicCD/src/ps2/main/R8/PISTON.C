typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_6)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[2];
typedef short type_4[2];
typedef short type_5[4];
typedef void(*type_7)(_anon1*)[3];
typedef _anon0* type_8[4];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef short type_11[4];
typedef short type_12[2];
typedef _anon1 type_13[128];
typedef unsigned char type_14[2];

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

_anon0 pis00;
_anon0 pis01;
_anon0 pis02;
_anon0 pis03;
_anon0* pistonpat[4];
short spd_tbl[4];
_anon1 actwk[128];

void piston(_anon1* pistonwk);
void piston_init(_anon1* pistonwk);
void init_piston0(_anon1* pistonwk);
void init_piston1(_anon1* pistonwk);
void piston_move(_anon1* pistonwk);

// 
// Start address: 0x1021ba0
void piston(_anon1* pistonwk)
{
	void(*piston_tbl)(_anon1*)[2];
	// Line 61, Address: 0x1021ba0, Func Offset: 0
	// Line 62, Address: 0x1021bac, Func Offset: 0xc
	// Line 63, Address: 0x1021bc8, Func Offset: 0x28
	// Line 64, Address: 0x1021c04, Func Offset: 0x64
	// Line 65, Address: 0x1021c10, Func Offset: 0x70
	// Line 66, Address: 0x1021c1c, Func Offset: 0x7c
	// Func End, Address: 0x1021c2c, Func Offset: 0x8c
}

// 
// Start address: 0x1021c30
void piston_init(_anon1* pistonwk)
{
	char tbl_index;
	short cal_rad;
	short cal_radius;
	short sin_tmp;
	short cos_tmp;
	int sin_data;
	void(*act_tbl)(_anon1*)[3];
	short rad_tbl[4];
	short radius_tbl[2];
	// Line 70, Address: 0x1021c30, Func Offset: 0
	// Line 74, Address: 0x1021c4c, Func Offset: 0x1c
	// Line 79, Address: 0x1021c70, Func Offset: 0x40
	// Line 81, Address: 0x1021c9c, Func Offset: 0x6c
	// Line 83, Address: 0x1021cb8, Func Offset: 0x88
	// Line 84, Address: 0x1021cc8, Func Offset: 0x98
	// Line 85, Address: 0x1021cd8, Func Offset: 0xa8
	// Line 87, Address: 0x1021ce8, Func Offset: 0xb8
	// Line 88, Address: 0x1021cf4, Func Offset: 0xc4
	// Line 89, Address: 0x1021d04, Func Offset: 0xd4
	// Line 94, Address: 0x1021d1c, Func Offset: 0xec
	// Line 95, Address: 0x1021d40, Func Offset: 0x110
	// Line 97, Address: 0x1021d4c, Func Offset: 0x11c
	// Line 98, Address: 0x1021d70, Func Offset: 0x140
	// Line 99, Address: 0x1021d94, Func Offset: 0x164
	// Line 100, Address: 0x1021da0, Func Offset: 0x170
	// Line 101, Address: 0x1021dc4, Func Offset: 0x194
	// Line 102, Address: 0x1021dec, Func Offset: 0x1bc
	// Line 103, Address: 0x1021df8, Func Offset: 0x1c8
	// Line 104, Address: 0x1021e04, Func Offset: 0x1d4
	// Line 105, Address: 0x1021e08, Func Offset: 0x1d8
	// Line 106, Address: 0x1021e1c, Func Offset: 0x1ec
	// Line 107, Address: 0x1021e48, Func Offset: 0x218
	// Func End, Address: 0x1021e68, Func Offset: 0x238
}

// 
// Start address: 0x1021e70
void init_piston0(_anon1* pistonwk)
{
	// Line 115, Address: 0x1021e70, Func Offset: 0
	// Line 116, Address: 0x1021e78, Func Offset: 0x8
	// Line 117, Address: 0x1021e80, Func Offset: 0x10
	// Line 118, Address: 0x1021e98, Func Offset: 0x28
	// Line 120, Address: 0x1021ee0, Func Offset: 0x70
	// Func End, Address: 0x1021eec, Func Offset: 0x7c
}

// 
// Start address: 0x1021ef0
void init_piston1(_anon1* pistonwk)
{
	unsigned char delay_time_tbl[2];
	// Line 125, Address: 0x1021ef0, Func Offset: 0
	// Line 126, Address: 0x1021ef8, Func Offset: 0x8
	// Line 128, Address: 0x1021f14, Func Offset: 0x24
	// Line 129, Address: 0x1021f20, Func Offset: 0x30
	// Line 130, Address: 0x1021f2c, Func Offset: 0x3c
	// Line 131, Address: 0x1021f38, Func Offset: 0x48
	// Line 133, Address: 0x1021f80, Func Offset: 0x90
	// Line 135, Address: 0x1021fbc, Func Offset: 0xcc
	// Line 136, Address: 0x1021fc4, Func Offset: 0xd4
	// Func End, Address: 0x1021fd0, Func Offset: 0xe0
}

// 
// Start address: 0x1021fd0
void piston_move(_anon1* pistonwk)
{
	short cal_posi;
	short cal_rad;
	short sin_tmp;
	short cos_tmp;
	int stack_yposi;
	int sin_data;
	int cal_yposi;
	short jump_tbl[2];
	// Line 142, Address: 0x1021fd0, Func Offset: 0
	// Line 145, Address: 0x1021ff0, Func Offset: 0x20
	// Line 149, Address: 0x102200c, Func Offset: 0x3c
	// Line 150, Address: 0x1022038, Func Offset: 0x68
	// Line 151, Address: 0x1022040, Func Offset: 0x70
	// Line 153, Address: 0x1022060, Func Offset: 0x90
	// Line 154, Address: 0x1022078, Func Offset: 0xa8
	// Line 155, Address: 0x1022088, Func Offset: 0xb8
	// Line 157, Address: 0x10220b4, Func Offset: 0xe4
	// Line 158, Address: 0x10220c4, Func Offset: 0xf4
	// Line 160, Address: 0x10220cc, Func Offset: 0xfc
	// Line 161, Address: 0x10220dc, Func Offset: 0x10c
	// Line 163, Address: 0x1022104, Func Offset: 0x134
	// Line 164, Address: 0x1022114, Func Offset: 0x144
	// Line 165, Address: 0x1022124, Func Offset: 0x154
	// Line 166, Address: 0x1022134, Func Offset: 0x164
	// Line 171, Address: 0x102213c, Func Offset: 0x16c
	// Line 173, Address: 0x1022170, Func Offset: 0x1a0
	// Line 174, Address: 0x102217c, Func Offset: 0x1ac
	// Line 175, Address: 0x1022184, Func Offset: 0x1b4
	// Line 176, Address: 0x10221ac, Func Offset: 0x1dc
	// Line 177, Address: 0x10221b8, Func Offset: 0x1e8
	// Line 178, Address: 0x10221cc, Func Offset: 0x1fc
	// Line 179, Address: 0x10221d0, Func Offset: 0x200
	// Line 180, Address: 0x10221e4, Func Offset: 0x214
	// Line 182, Address: 0x10221f4, Func Offset: 0x224
	// Line 183, Address: 0x10221fc, Func Offset: 0x22c
	// Line 184, Address: 0x102220c, Func Offset: 0x23c
	// Line 185, Address: 0x1022220, Func Offset: 0x250
	// Line 188, Address: 0x1022240, Func Offset: 0x270
	// Line 190, Address: 0x102225c, Func Offset: 0x28c
	// Line 192, Address: 0x1022280, Func Offset: 0x2b0
	// Line 193, Address: 0x10222ac, Func Offset: 0x2dc
	// Line 194, Address: 0x10222c0, Func Offset: 0x2f0
	// Line 195, Address: 0x10222d4, Func Offset: 0x304
	// Line 196, Address: 0x10222e0, Func Offset: 0x310
	// Line 199, Address: 0x10222f0, Func Offset: 0x320
	// Line 200, Address: 0x1022308, Func Offset: 0x338
	// Line 201, Address: 0x102231c, Func Offset: 0x34c
	// Func End, Address: 0x1022340, Func Offset: 0x370
}

