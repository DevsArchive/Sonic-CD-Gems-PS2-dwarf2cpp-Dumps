typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_1)(_anon1*);

typedef _anon7 type_0[20];
typedef void(*type_2)(_anon1*)[7];
typedef unsigned char type_3[10];
typedef _anon7 type_4[0];
typedef unsigned char type_5[3];
typedef _anon0* type_6[6];
typedef unsigned char type_7[2];
typedef unsigned char* type_8[3];
typedef unsigned char type_9[22];
typedef unsigned char type_10[10];
typedef _anon1 type_11[128];

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

void(*block_tbl)(_anon1*)[7];
_anon2 scra_h_posit;
_anon0* blockpat[6];
unsigned char time_flag;
_anon2 scra_v_posit;
unsigned char* blockchg[3];
_anon1 actwk[128];
unsigned char blockchg0[3];
unsigned char blockchg1[10];
unsigned char blockchg2[10];
_anon0 block0;
_anon0 block1;
_anon0 block2;
_anon0 block3;
_anon0 block4;
_anon0 block5;

void block(_anon1* pActwk);
void block_init(_anon1* pActwk);
void block_move(_anon1* pActwk);
void block_move2(_anon1* pActwk);
void block_move3(_anon1* pActwk);
void block_move4(_anon1* pActwk);
void block_move5(_anon1* pActwk);
void block_move6(_anon1* pActwk);
void block_ride(_anon1* pActwk);
void ride_on_chk_b(_anon1* pActwk, _anon1* pPlaywk);

// 
// Start address: 0x10150b0
void block(_anon1* pActwk)
{
	short iD0;
	short iD1;
	// Line 54, Address: 0x10150b0, Func Offset: 0
	// Line 57, Address: 0x10150c4, Func Offset: 0x14
	// Line 58, Address: 0x1015108, Func Offset: 0x58
	// Line 59, Address: 0x101512c, Func Offset: 0x7c
	// Line 60, Address: 0x1015150, Func Offset: 0xa0
	// Line 61, Address: 0x1015160, Func Offset: 0xb0
	// Line 62, Address: 0x101516c, Func Offset: 0xbc
	// Line 63, Address: 0x1015180, Func Offset: 0xd0
	// Line 64, Address: 0x101518c, Func Offset: 0xdc
	// Func End, Address: 0x10151a4, Func Offset: 0xf4
}

// 
// Start address: 0x10151b0
void block_init(_anon1* pActwk)
{
	// Line 76, Address: 0x10151b0, Func Offset: 0
	// Line 77, Address: 0x10151bc, Func Offset: 0xc
	// Line 78, Address: 0x10151cc, Func Offset: 0x1c
	// Line 79, Address: 0x10151dc, Func Offset: 0x2c
	// Line 81, Address: 0x10151ec, Func Offset: 0x3c
	// Line 83, Address: 0x10151fc, Func Offset: 0x4c
	// Line 84, Address: 0x1015208, Func Offset: 0x58
	// Line 85, Address: 0x1015214, Func Offset: 0x64
	// Line 86, Address: 0x1015220, Func Offset: 0x70
	// Line 87, Address: 0x101522c, Func Offset: 0x7c
	// Line 88, Address: 0x1015238, Func Offset: 0x88
	// Func End, Address: 0x1015248, Func Offset: 0x98
}

// 
// Start address: 0x1015250
void block_move(_anon1* pActwk)
{
	// Line 100, Address: 0x1015250, Func Offset: 0
	// Line 101, Address: 0x101525c, Func Offset: 0xc
	// Line 102, Address: 0x1015268, Func Offset: 0x18
	// Line 103, Address: 0x101527c, Func Offset: 0x2c
	// Line 105, Address: 0x1015294, Func Offset: 0x44
	// Line 106, Address: 0x10152ac, Func Offset: 0x5c
	// Line 110, Address: 0x10152b4, Func Offset: 0x64
	// Line 111, Address: 0x10152bc, Func Offset: 0x6c
	// Line 113, Address: 0x10152d4, Func Offset: 0x84
	// Line 114, Address: 0x10152e0, Func Offset: 0x90
	// Line 118, Address: 0x10152ec, Func Offset: 0x9c
	// Line 119, Address: 0x10152f8, Func Offset: 0xa8
	// Line 121, Address: 0x1015300, Func Offset: 0xb0
	// Line 122, Address: 0x1015310, Func Offset: 0xc0
	// Line 123, Address: 0x101531c, Func Offset: 0xcc
	// Func End, Address: 0x101532c, Func Offset: 0xdc
}

// 
// Start address: 0x1015330
void block_move2(_anon1* pActwk)
{
	short iD0;
	// Line 135, Address: 0x1015330, Func Offset: 0
	// Line 138, Address: 0x1015340, Func Offset: 0x10
	// Line 139, Address: 0x101534c, Func Offset: 0x1c
	// Line 140, Address: 0x101535c, Func Offset: 0x2c
	// Line 141, Address: 0x101536c, Func Offset: 0x3c
	// Line 142, Address: 0x1015378, Func Offset: 0x48
	// Line 144, Address: 0x101539c, Func Offset: 0x6c
	// Line 145, Address: 0x10153a8, Func Offset: 0x78
	// Line 147, Address: 0x10153b0, Func Offset: 0x80
	// Line 149, Address: 0x10153bc, Func Offset: 0x8c
	// Func End, Address: 0x10153d0, Func Offset: 0xa0
}

// 
// Start address: 0x10153d0
void block_move3(_anon1* pActwk)
{
	// Line 161, Address: 0x10153d0, Func Offset: 0
	// Line 162, Address: 0x10153dc, Func Offset: 0xc
	// Line 163, Address: 0x10153e8, Func Offset: 0x18
	// Line 165, Address: 0x1015400, Func Offset: 0x30
	// Line 166, Address: 0x101540c, Func Offset: 0x3c
	// Line 169, Address: 0x1015414, Func Offset: 0x44
	// Line 170, Address: 0x1015428, Func Offset: 0x58
	// Line 171, Address: 0x1015434, Func Offset: 0x64
	// Func End, Address: 0x1015444, Func Offset: 0x74
}

// 
// Start address: 0x1015450
void block_move4(_anon1* pActwk)
{
	// Line 183, Address: 0x1015450, Func Offset: 0
	// Line 184, Address: 0x101545c, Func Offset: 0xc
	// Line 185, Address: 0x1015464, Func Offset: 0x14
	// Line 186, Address: 0x1015470, Func Offset: 0x20
	// Line 188, Address: 0x1015488, Func Offset: 0x38
	// Line 189, Address: 0x1015498, Func Offset: 0x48
	// Line 190, Address: 0x10154a4, Func Offset: 0x54
	// Line 193, Address: 0x10154ac, Func Offset: 0x5c
	// Line 194, Address: 0x10154c0, Func Offset: 0x70
	// Line 195, Address: 0x10154cc, Func Offset: 0x7c
	// Func End, Address: 0x10154dc, Func Offset: 0x8c
}

// 
// Start address: 0x10154e0
void block_move5(_anon1* pActwk)
{
	// Line 207, Address: 0x10154e0, Func Offset: 0
	// Line 208, Address: 0x10154ec, Func Offset: 0xc
	// Line 209, Address: 0x10154f8, Func Offset: 0x18
	// Line 210, Address: 0x101550c, Func Offset: 0x2c
	// Line 211, Address: 0x1015518, Func Offset: 0x38
	// Func End, Address: 0x1015528, Func Offset: 0x48
}

// 
// Start address: 0x1015530
void block_move6(_anon1* pActwk)
{
	// Line 223, Address: 0x1015530, Func Offset: 0
	// Line 224, Address: 0x1015538, Func Offset: 0x8
	// Line 225, Address: 0x1015544, Func Offset: 0x14
	// Func End, Address: 0x1015550, Func Offset: 0x20
}

// 
// Start address: 0x1015550
void block_ride(_anon1* pActwk)
{
	// Line 237, Address: 0x1015550, Func Offset: 0
	// Line 238, Address: 0x101555c, Func Offset: 0xc
	// Line 239, Address: 0x1015570, Func Offset: 0x20
	// Line 240, Address: 0x1015584, Func Offset: 0x34
	// Func End, Address: 0x1015594, Func Offset: 0x44
}

// 
// Start address: 0x10155a0
void ride_on_chk_b(_anon1* pActwk, _anon1* pPlaywk)
{
	// Line 253, Address: 0x10155a0, Func Offset: 0
	// Line 254, Address: 0x10155b0, Func Offset: 0x10
	// Line 255, Address: 0x10155c0, Func Offset: 0x20
	// Func End, Address: 0x10155d0, Func Offset: 0x30
}

