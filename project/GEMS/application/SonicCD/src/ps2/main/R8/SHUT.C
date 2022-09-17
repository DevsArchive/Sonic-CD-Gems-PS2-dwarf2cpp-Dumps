typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_11)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[3];
typedef unsigned char type_4[3];
typedef _anon0* type_5[3];
typedef unsigned char type_6[2];
typedef unsigned char* type_7[1];
typedef unsigned char type_8[22];
typedef _anon0* type_9[1];
typedef _anon1 type_10[128];
typedef void(*type_12)(_anon1*)[6];
typedef unsigned char type_13[4];

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

unsigned char kaitenchg0[4];
unsigned char* kaitenchg[1];
_anon0 shu00;
_anon0* shutpat[1];
_anon0 kai00;
_anon0 kai01;
_anon0 kai02;
_anon0* kaitenpat[3];
unsigned char shut_flag;
unsigned char bossstart;
_anon1 actwk[128];
unsigned char prio_flag;

void shut(_anon1* shutwk);
void shut_init(_anon1* shutwk);
void shut_wait(_anon1* shutwk);
void shut_move(_anon1* shutwk);
void kaiten(_anon1* loopwk);
void kaiten_init(_anon1* loopwk);
void kaiten_move0(_anon1* loopwk);
void kaiten_move1(_anon1* loopwk);
void kaiten_move2(_anon1* loopwk);
short ridechk_k(_anon1* loopwk);
void kaiten_bou0(_anon1* loopwk);
void kaiten_bou1(_anon1* loopwk);

// 
// Start address: 0x1026e30
void shut(_anon1* shutwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 52, Address: 0x1026e30, Func Offset: 0
	// Line 53, Address: 0x1026e3c, Func Offset: 0xc
	// Line 55, Address: 0x1026e60, Func Offset: 0x30
	// Line 56, Address: 0x1026e9c, Func Offset: 0x6c
	// Line 57, Address: 0x1026ea8, Func Offset: 0x78
	// Line 58, Address: 0x1026eb4, Func Offset: 0x84
	// Func End, Address: 0x1026ec4, Func Offset: 0x94
}

// 
// Start address: 0x1026ed0
void shut_init(_anon1* shutwk)
{
	_anon1* new_actwk;
	// Line 62, Address: 0x1026ed0, Func Offset: 0
	// Line 65, Address: 0x1026edc, Func Offset: 0xc
	// Line 66, Address: 0x1026eec, Func Offset: 0x1c
	// Line 67, Address: 0x1026ef8, Func Offset: 0x28
	// Line 69, Address: 0x1026f08, Func Offset: 0x38
	// Line 70, Address: 0x1026f30, Func Offset: 0x60
	// Line 71, Address: 0x1026f40, Func Offset: 0x70
	// Line 72, Address: 0x1026f50, Func Offset: 0x80
	// Line 73, Address: 0x1026f60, Func Offset: 0x90
	// Line 74, Address: 0x1026f6c, Func Offset: 0x9c
	// Line 75, Address: 0x1026f7c, Func Offset: 0xac
	// Line 77, Address: 0x1026f88, Func Offset: 0xb8
	// Line 78, Address: 0x1026fb0, Func Offset: 0xe0
	// Line 79, Address: 0x1026fbc, Func Offset: 0xec
	// Line 81, Address: 0x1026fd4, Func Offset: 0x104
	// Line 82, Address: 0x1026fe4, Func Offset: 0x114
	// Line 83, Address: 0x102700c, Func Offset: 0x13c
	// Line 84, Address: 0x102701c, Func Offset: 0x14c
	// Line 85, Address: 0x102702c, Func Offset: 0x15c
	// Line 86, Address: 0x102703c, Func Offset: 0x16c
	// Line 87, Address: 0x1027048, Func Offset: 0x178
	// Line 88, Address: 0x1027058, Func Offset: 0x188
	// Line 89, Address: 0x1027064, Func Offset: 0x194
	// Func End, Address: 0x1027074, Func Offset: 0x1a4
}

// 
// Start address: 0x1027080
void shut_wait(_anon1* shutwk)
{
	// Line 92, Address: 0x1027080, Func Offset: 0
	// Line 93, Address: 0x1027088, Func Offset: 0x8
	// Line 94, Address: 0x10270a8, Func Offset: 0x28
	// Line 95, Address: 0x10270b0, Func Offset: 0x30
	// Line 96, Address: 0x10270c0, Func Offset: 0x40
	// Func End, Address: 0x10270cc, Func Offset: 0x4c
}

// 
// Start address: 0x10270d0
void shut_move(_anon1* shutwk)
{
	unsigned short cal_xposi;
	unsigned short block_wrt_x;
	unsigned short block_wrt_y;
	unsigned short i;
	// Line 99, Address: 0x10270d0, Func Offset: 0
	// Line 100, Address: 0x10270ec, Func Offset: 0x1c
	// Line 102, Address: 0x10270f0, Func Offset: 0x20
	// Line 103, Address: 0x1027114, Func Offset: 0x44
	// Line 104, Address: 0x1027124, Func Offset: 0x54
	// Line 105, Address: 0x102715c, Func Offset: 0x8c
	// Line 107, Address: 0x1027178, Func Offset: 0xa8
	// Line 110, Address: 0x10271b4, Func Offset: 0xe4
	// Line 111, Address: 0x10271c4, Func Offset: 0xf4
	// Line 112, Address: 0x10271e4, Func Offset: 0x114
	// Func End, Address: 0x1027204, Func Offset: 0x134
}

// 
// Start address: 0x1027210
void kaiten(_anon1* loopwk)
{
	short i;
	void(*tbl)(_anon1*)[6];
	// Line 116, Address: 0x1027210, Func Offset: 0
	// Line 118, Address: 0x1027220, Func Offset: 0x10
	// Line 126, Address: 0x1027254, Func Offset: 0x44
	// Line 128, Address: 0x10272b4, Func Offset: 0xa4
	// Line 129, Address: 0x10272c4, Func Offset: 0xb4
	// Line 130, Address: 0x10272d8, Func Offset: 0xc8
	// Line 131, Address: 0x10272fc, Func Offset: 0xec
	// Line 132, Address: 0x1027310, Func Offset: 0x100
	// Line 133, Address: 0x1027388, Func Offset: 0x178
	// Line 134, Address: 0x1027390, Func Offset: 0x180
	// Line 135, Address: 0x10273a4, Func Offset: 0x194
	// Line 136, Address: 0x10273c8, Func Offset: 0x1b8
	// Line 137, Address: 0x10273dc, Func Offset: 0x1cc
	// Line 141, Address: 0x1027454, Func Offset: 0x244
	// Line 142, Address: 0x1027490, Func Offset: 0x280
	// Line 143, Address: 0x10274b8, Func Offset: 0x2a8
	// Line 144, Address: 0x10274c4, Func Offset: 0x2b4
	// Line 145, Address: 0x10274f0, Func Offset: 0x2e0
	// Line 146, Address: 0x1027504, Func Offset: 0x2f4
	// Func End, Address: 0x1027518, Func Offset: 0x308
}

// 
// Start address: 0x1027520
void kaiten_init(_anon1* loopwk)
{
	short i;
	short sin_tmp;
	short cos_tmp;
	int cos_data;
	_anon1* old_actwk;
	_anon1* new_actwk;
	unsigned char tbl[3];
	// Line 150, Address: 0x1027520, Func Offset: 0
	// Line 154, Address: 0x1027538, Func Offset: 0x18
	// Line 156, Address: 0x102755c, Func Offset: 0x3c
	// Line 157, Address: 0x1027560, Func Offset: 0x40
	// Line 158, Address: 0x102756c, Func Offset: 0x4c
	// Line 159, Address: 0x1027584, Func Offset: 0x64
	// Line 160, Address: 0x1027588, Func Offset: 0x68
	// Line 161, Address: 0x10275a8, Func Offset: 0x88
	// Line 162, Address: 0x10275b8, Func Offset: 0x98
	// Line 163, Address: 0x10275c8, Func Offset: 0xa8
	// Line 164, Address: 0x10275d4, Func Offset: 0xb4
	// Line 165, Address: 0x10275e0, Func Offset: 0xc0
	// Line 166, Address: 0x10275ec, Func Offset: 0xcc
	// Line 168, Address: 0x10275fc, Func Offset: 0xdc
	// Line 169, Address: 0x102760c, Func Offset: 0xec
	// Line 170, Address: 0x1027618, Func Offset: 0xf8
	// Line 171, Address: 0x1027628, Func Offset: 0x108
	// Line 172, Address: 0x1027634, Func Offset: 0x114
	// Line 174, Address: 0x1027644, Func Offset: 0x124
	// Line 175, Address: 0x1027650, Func Offset: 0x130
	// Line 176, Address: 0x102765c, Func Offset: 0x13c
	// Line 177, Address: 0x102766c, Func Offset: 0x14c
	// Line 178, Address: 0x1027690, Func Offset: 0x170
	// Line 179, Address: 0x102769c, Func Offset: 0x17c
	// Line 181, Address: 0x10276ac, Func Offset: 0x18c
	// Line 182, Address: 0x10276b8, Func Offset: 0x198
	// Line 183, Address: 0x10276c8, Func Offset: 0x1a8
	// Line 184, Address: 0x10276d4, Func Offset: 0x1b4
	// Line 185, Address: 0x10276e4, Func Offset: 0x1c4
	// Line 186, Address: 0x10276f0, Func Offset: 0x1d0
	// Line 188, Address: 0x1027700, Func Offset: 0x1e0
	// Line 189, Address: 0x102770c, Func Offset: 0x1ec
	// Line 190, Address: 0x1027718, Func Offset: 0x1f8
	// Line 191, Address: 0x1027738, Func Offset: 0x218
	// Line 192, Address: 0x1027744, Func Offset: 0x224
	// Line 193, Address: 0x1027750, Func Offset: 0x230
	// Line 194, Address: 0x1027760, Func Offset: 0x240
	// Line 195, Address: 0x1027784, Func Offset: 0x264
	// Line 196, Address: 0x102779c, Func Offset: 0x27c
	// Line 197, Address: 0x10277b0, Func Offset: 0x290
	// Line 199, Address: 0x10277e4, Func Offset: 0x2c4
	// Line 200, Address: 0x1027804, Func Offset: 0x2e4
	// Func End, Address: 0x1027820, Func Offset: 0x300
}

// 
// Start address: 0x1027820
void kaiten_move0(_anon1* loopwk)
{
	short cal_xposi;
	// Line 203, Address: 0x1027820, Func Offset: 0
	// Line 206, Address: 0x1027830, Func Offset: 0x10
	// Line 207, Address: 0x1027840, Func Offset: 0x20
	// Line 208, Address: 0x1027870, Func Offset: 0x50
	// Line 211, Address: 0x1027878, Func Offset: 0x58
	// Line 212, Address: 0x10278a4, Func Offset: 0x84
	// Line 213, Address: 0x10278dc, Func Offset: 0xbc
	// Line 214, Address: 0x1027900, Func Offset: 0xe0
	// Line 215, Address: 0x1027910, Func Offset: 0xf0
	// Line 216, Address: 0x1027928, Func Offset: 0x108
	// Line 217, Address: 0x1027938, Func Offset: 0x118
	// Line 218, Address: 0x102794c, Func Offset: 0x12c
	// Line 219, Address: 0x102795c, Func Offset: 0x13c
	// Line 220, Address: 0x1027974, Func Offset: 0x154
	// Line 221, Address: 0x1027980, Func Offset: 0x160
	// Line 222, Address: 0x102799c, Func Offset: 0x17c
	// Line 223, Address: 0x10279ac, Func Offset: 0x18c
	// Func End, Address: 0x10279c0, Func Offset: 0x1a0
}

// 
// Start address: 0x10279c0
void kaiten_move1(_anon1* loopwk)
{
	// Line 226, Address: 0x10279c0, Func Offset: 0
	// Line 227, Address: 0x10279cc, Func Offset: 0xc
	// Line 228, Address: 0x10279e0, Func Offset: 0x20
	// Line 229, Address: 0x1027a10, Func Offset: 0x50
	// Line 230, Address: 0x1027a20, Func Offset: 0x60
	// Line 231, Address: 0x1027a2c, Func Offset: 0x6c
	// Func End, Address: 0x1027a3c, Func Offset: 0x7c
}

// 
// Start address: 0x1027a40
void kaiten_move2(_anon1* loopwk)
{
	// Line 234, Address: 0x1027a40, Func Offset: 0
	// Line 235, Address: 0x1027a4c, Func Offset: 0xc
	// Line 236, Address: 0x1027a60, Func Offset: 0x20
	// Line 237, Address: 0x1027a6c, Func Offset: 0x2c
	// Line 238, Address: 0x1027a80, Func Offset: 0x40
	// Line 239, Address: 0x1027a94, Func Offset: 0x54
	// Line 240, Address: 0x1027aa8, Func Offset: 0x68
	// Line 241, Address: 0x1027abc, Func Offset: 0x7c
	// Line 242, Address: 0x1027ae0, Func Offset: 0xa0
	// Line 243, Address: 0x1027aec, Func Offset: 0xac
	// Func End, Address: 0x1027afc, Func Offset: 0xbc
}

// 
// Start address: 0x1027b00
short ridechk_k(_anon1* loopwk)
{
	// Line 246, Address: 0x1027b00, Func Offset: 0
	// Line 247, Address: 0x1027b0c, Func Offset: 0xc
	// Line 249, Address: 0x1027b20, Func Offset: 0x20
	// Func End, Address: 0x1027b30, Func Offset: 0x30
}

// 
// Start address: 0x1027b30
void kaiten_bou0(_anon1* loopwk)
{
	// Line 252, Address: 0x1027b30, Func Offset: 0
	// Line 253, Address: 0x1027b38, Func Offset: 0x8
	// Line 254, Address: 0x1027b54, Func Offset: 0x24
	// Line 255, Address: 0x1027b64, Func Offset: 0x34
	// Line 256, Address: 0x1027b80, Func Offset: 0x50
	// Func End, Address: 0x1027b8c, Func Offset: 0x5c
}

// 
// Start address: 0x1027b90
void kaiten_bou1(_anon1* loopwk)
{
	unsigned char cal_dir;
	short sin_tmp;
	short cos_tmp;
	int cos_data;
	// Line 259, Address: 0x1027b90, Func Offset: 0
	// Line 264, Address: 0x1027ba4, Func Offset: 0x14
	// Line 265, Address: 0x1027bc0, Func Offset: 0x30
	// Line 266, Address: 0x1027bd0, Func Offset: 0x40
	// Line 267, Address: 0x1027be0, Func Offset: 0x50
	// Line 268, Address: 0x1027be8, Func Offset: 0x58
	// Line 269, Address: 0x1027bf0, Func Offset: 0x60
	// Line 270, Address: 0x1027c08, Func Offset: 0x78
	// Line 272, Address: 0x1027c28, Func Offset: 0x98
	// Line 273, Address: 0x1027c30, Func Offset: 0xa0
	// Line 274, Address: 0x1027c40, Func Offset: 0xb0
	// Line 276, Address: 0x1027c50, Func Offset: 0xc0
	// Line 278, Address: 0x1027c60, Func Offset: 0xd0
	// Line 279, Address: 0x1027c78, Func Offset: 0xe8
	// Line 280, Address: 0x1027c94, Func Offset: 0x104
	// Line 282, Address: 0x1027cc8, Func Offset: 0x138
	// Line 283, Address: 0x1027cd4, Func Offset: 0x144
	// Line 284, Address: 0x1027d00, Func Offset: 0x170
	// Func End, Address: 0x1027d18, Func Offset: 0x188
}

