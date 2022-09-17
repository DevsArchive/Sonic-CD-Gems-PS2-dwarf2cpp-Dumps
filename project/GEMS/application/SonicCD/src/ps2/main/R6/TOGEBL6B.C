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
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon1* type_4[1];
typedef _anon0 type_5[128];
typedef _anon1* type_6[1];

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

_anon1 spat_chg0;
_anon1 spat_chg1;
_anon1* pat_chg[1];
_anon1* pat_togeball[1];
_anon0 actwk[128];

void togeball(_anon0* actionwk);
void togeball_main(_anon0* actionwk);
void act_init(_anon0* actionwk);
void act_move(_anon0* actionwk);
void togeball_opt(_anon0* actionwk);
void act_init2(_anon0* actionwk);
void act_move2(_anon0* actionwk);

// 
// Start address: 0x102e7f0
void togeball(_anon0* actionwk)
{
	// Line 53, Address: 0x102e7f0, Func Offset: 0
	// Line 54, Address: 0x102e7fc, Func Offset: 0xc
	// Line 55, Address: 0x102e814, Func Offset: 0x24
	// Line 57, Address: 0x102e828, Func Offset: 0x38
	// Line 58, Address: 0x102e834, Func Offset: 0x44
	// Func End, Address: 0x102e844, Func Offset: 0x54
}

// 
// Start address: 0x102e850
void togeball_main(_anon0* actionwk)
{
	// Line 60, Address: 0x102e850, Func Offset: 0
	// Line 61, Address: 0x102e85c, Func Offset: 0xc
	// Line 64, Address: 0x102e884, Func Offset: 0x34
	// Line 65, Address: 0x102e890, Func Offset: 0x40
	// Line 67, Address: 0x102e898, Func Offset: 0x48
	// Line 70, Address: 0x102e8a4, Func Offset: 0x54
	// Line 71, Address: 0x102e8b0, Func Offset: 0x60
	// Line 72, Address: 0x102e8bc, Func Offset: 0x6c
	// Func End, Address: 0x102e8cc, Func Offset: 0x7c
}

// 
// Start address: 0x102e8d0
void act_init(_anon0* actionwk)
{
	_anon0* a1;
	// Line 74, Address: 0x102e8d0, Func Offset: 0
	// Line 77, Address: 0x102e8dc, Func Offset: 0xc
	// Line 78, Address: 0x102e8ec, Func Offset: 0x1c
	// Line 79, Address: 0x102e8fc, Func Offset: 0x2c
	// Line 80, Address: 0x102e908, Func Offset: 0x38
	// Line 81, Address: 0x102e914, Func Offset: 0x44
	// Line 82, Address: 0x102e920, Func Offset: 0x50
	// Line 83, Address: 0x102e930, Func Offset: 0x60
	// Line 84, Address: 0x102e93c, Func Offset: 0x6c
	// Line 85, Address: 0x102e948, Func Offset: 0x78
	// Line 86, Address: 0x102e960, Func Offset: 0x90
	// Line 89, Address: 0x102e984, Func Offset: 0xb4
	// Line 91, Address: 0x102e99c, Func Offset: 0xcc
	// Line 92, Address: 0x102e9a8, Func Offset: 0xd8
	// Line 94, Address: 0x102e9b0, Func Offset: 0xe0
	// Line 95, Address: 0x102e9e4, Func Offset: 0x114
	// Line 96, Address: 0x102ea18, Func Offset: 0x148
	// Line 97, Address: 0x102ea28, Func Offset: 0x158
	// Line 98, Address: 0x102ea34, Func Offset: 0x164
	// Line 99, Address: 0x102ea40, Func Offset: 0x170
	// Line 101, Address: 0x102ea4c, Func Offset: 0x17c
	// Line 103, Address: 0x102ea64, Func Offset: 0x194
	// Line 104, Address: 0x102ea70, Func Offset: 0x1a0
	// Line 106, Address: 0x102ea78, Func Offset: 0x1a8
	// Line 107, Address: 0x102eaac, Func Offset: 0x1dc
	// Line 108, Address: 0x102eae0, Func Offset: 0x210
	// Line 109, Address: 0x102eaf0, Func Offset: 0x220
	// Line 110, Address: 0x102eafc, Func Offset: 0x22c
	// Line 111, Address: 0x102eb08, Func Offset: 0x238
	// Line 113, Address: 0x102eb14, Func Offset: 0x244
	// Line 115, Address: 0x102eb2c, Func Offset: 0x25c
	// Line 116, Address: 0x102eb38, Func Offset: 0x268
	// Line 118, Address: 0x102eb40, Func Offset: 0x270
	// Line 119, Address: 0x102eb74, Func Offset: 0x2a4
	// Line 120, Address: 0x102eba8, Func Offset: 0x2d8
	// Line 121, Address: 0x102ebb8, Func Offset: 0x2e8
	// Line 122, Address: 0x102ebc4, Func Offset: 0x2f4
	// Line 123, Address: 0x102ebd0, Func Offset: 0x300
	// Line 125, Address: 0x102ebdc, Func Offset: 0x30c
	// Line 127, Address: 0x102ebf4, Func Offset: 0x324
	// Line 128, Address: 0x102ec00, Func Offset: 0x330
	// Line 130, Address: 0x102ec08, Func Offset: 0x338
	// Line 131, Address: 0x102ec3c, Func Offset: 0x36c
	// Line 132, Address: 0x102ec70, Func Offset: 0x3a0
	// Line 133, Address: 0x102ec80, Func Offset: 0x3b0
	// Line 134, Address: 0x102ec8c, Func Offset: 0x3bc
	// Line 135, Address: 0x102ec98, Func Offset: 0x3c8
	// Line 137, Address: 0x102eca4, Func Offset: 0x3d4
	// Line 139, Address: 0x102ecbc, Func Offset: 0x3ec
	// Line 140, Address: 0x102ecc8, Func Offset: 0x3f8
	// Line 142, Address: 0x102ecd0, Func Offset: 0x400
	// Line 143, Address: 0x102ed04, Func Offset: 0x434
	// Line 144, Address: 0x102ed38, Func Offset: 0x468
	// Line 145, Address: 0x102ed48, Func Offset: 0x478
	// Line 146, Address: 0x102ed54, Func Offset: 0x484
	// Line 147, Address: 0x102ed60, Func Offset: 0x490
	// Line 149, Address: 0x102ed6c, Func Offset: 0x49c
	// Func End, Address: 0x102ed7c, Func Offset: 0x4ac
}

// 
// Start address: 0x102ed80
void act_move(_anon0* actionwk)
{
	short d0;
	unsigned short sin;
	unsigned short cos;
	int d0l;
	int d1l;
	int d2l;
	int d3l;
	int d4l;
	int d5l;
	_anon0* a1;
	// Line 151, Address: 0x102ed80, Func Offset: 0
	// Line 157, Address: 0x102edac, Func Offset: 0x2c
	// Line 158, Address: 0x102edbc, Func Offset: 0x3c
	// Line 159, Address: 0x102edcc, Func Offset: 0x4c
	// Line 160, Address: 0x102eddc, Func Offset: 0x5c
	// Line 162, Address: 0x102ede8, Func Offset: 0x68
	// Line 163, Address: 0x102edfc, Func Offset: 0x7c
	// Line 164, Address: 0x102ee04, Func Offset: 0x84
	// Line 165, Address: 0x102ee10, Func Offset: 0x90
	// Line 166, Address: 0x102ee1c, Func Offset: 0x9c
	// Line 167, Address: 0x102ee20, Func Offset: 0xa0
	// Line 168, Address: 0x102ee24, Func Offset: 0xa4
	// Line 169, Address: 0x102ee28, Func Offset: 0xa8
	// Line 170, Address: 0x102ee2c, Func Offset: 0xac
	// Line 171, Address: 0x102ee30, Func Offset: 0xb0
	// Line 172, Address: 0x102ee34, Func Offset: 0xb4
	// Line 173, Address: 0x102ee38, Func Offset: 0xb8
	// Line 174, Address: 0x102ee3c, Func Offset: 0xbc
	// Line 175, Address: 0x102ee40, Func Offset: 0xc0
	// Line 176, Address: 0x102ee44, Func Offset: 0xc4
	// Line 177, Address: 0x102ee68, Func Offset: 0xe8
	// Line 178, Address: 0x102ee7c, Func Offset: 0xfc
	// Line 179, Address: 0x102ee90, Func Offset: 0x110
	// Line 180, Address: 0x102eeb4, Func Offset: 0x134
	// Line 181, Address: 0x102eec8, Func Offset: 0x148
	// Line 182, Address: 0x102eedc, Func Offset: 0x15c
	// Line 183, Address: 0x102ef00, Func Offset: 0x180
	// Line 184, Address: 0x102ef18, Func Offset: 0x198
	// Line 186, Address: 0x102ef30, Func Offset: 0x1b0
	// Line 187, Address: 0x102ef54, Func Offset: 0x1d4
	// Line 188, Address: 0x102ef68, Func Offset: 0x1e8
	// Line 189, Address: 0x102ef7c, Func Offset: 0x1fc
	// Func End, Address: 0x102efac, Func Offset: 0x22c
}

// 
// Start address: 0x102efb0
void togeball_opt(_anon0* actionwk)
{
	_anon0* a1;
	// Line 191, Address: 0x102efb0, Func Offset: 0
	// Line 194, Address: 0x102efc0, Func Offset: 0x10
	// Line 197, Address: 0x102efe8, Func Offset: 0x38
	// Line 199, Address: 0x102eff4, Func Offset: 0x44
	// Line 202, Address: 0x102f000, Func Offset: 0x50
	// Line 203, Address: 0x102f024, Func Offset: 0x74
	// Line 205, Address: 0x102f038, Func Offset: 0x88
	// Line 206, Address: 0x102f044, Func Offset: 0x94
	// Line 208, Address: 0x102f04c, Func Offset: 0x9c
	// Line 209, Address: 0x102f058, Func Offset: 0xa8
	// Func End, Address: 0x102f06c, Func Offset: 0xbc
}

// 
// Start address: 0x102f070
void act_init2(_anon0* actionwk)
{
	// Line 211, Address: 0x102f070, Func Offset: 0
	// Line 212, Address: 0x102f078, Func Offset: 0x8
	// Line 213, Address: 0x102f088, Func Offset: 0x18
	// Line 214, Address: 0x102f098, Func Offset: 0x28
	// Line 215, Address: 0x102f0a4, Func Offset: 0x34
	// Line 216, Address: 0x102f0b4, Func Offset: 0x44
	// Line 217, Address: 0x102f0c0, Func Offset: 0x50
	// Line 218, Address: 0x102f0cc, Func Offset: 0x5c
	// Func End, Address: 0x102f0d8, Func Offset: 0x68
}

// 
// Start address: 0x102f0e0
void act_move2(_anon0* actionwk)
{
	// Line 220, Address: 0x102f0e0, Func Offset: 0
	// Line 221, Address: 0x102f0e8, Func Offset: 0x8
	// Line 222, Address: 0x102f0f8, Func Offset: 0x18
	// Line 223, Address: 0x102f108, Func Offset: 0x28
	// Func End, Address: 0x102f114, Func Offset: 0x34
}

