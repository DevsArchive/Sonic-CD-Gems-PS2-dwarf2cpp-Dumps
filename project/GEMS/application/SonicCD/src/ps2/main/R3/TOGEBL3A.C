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
typedef _anon0* type_4[1];
typedef _anon1 type_5[128];
typedef _anon0* type_6[1];

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

_anon0 spat_chg0;
_anon0 spat_chg1;
_anon0* pat_chg[1];
_anon0* togeball_pat[1];
_anon1 actwk[128];

void togeball(_anon1* actionwk);
void togeball_main(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_move(_anon1* actionwk);
void togeball_opt(_anon1* actionwk);
void act_init2(_anon1* actionwk);
void act_move2(_anon1* actionwk);

// 
// Start address: 0x1020080
void togeball(_anon1* actionwk)
{
	// Line 52, Address: 0x1020080, Func Offset: 0
	// Line 53, Address: 0x102008c, Func Offset: 0xc
	// Line 54, Address: 0x10200a4, Func Offset: 0x24
	// Line 56, Address: 0x10200b8, Func Offset: 0x38
	// Line 57, Address: 0x10200c4, Func Offset: 0x44
	// Func End, Address: 0x10200d4, Func Offset: 0x54
}

// 
// Start address: 0x10200e0
void togeball_main(_anon1* actionwk)
{
	// Line 59, Address: 0x10200e0, Func Offset: 0
	// Line 60, Address: 0x10200ec, Func Offset: 0xc
	// Line 63, Address: 0x1020114, Func Offset: 0x34
	// Line 64, Address: 0x1020120, Func Offset: 0x40
	// Line 66, Address: 0x1020128, Func Offset: 0x48
	// Line 69, Address: 0x1020134, Func Offset: 0x54
	// Line 70, Address: 0x1020140, Func Offset: 0x60
	// Line 71, Address: 0x102014c, Func Offset: 0x6c
	// Func End, Address: 0x102015c, Func Offset: 0x7c
}

// 
// Start address: 0x1020160
void act_init(_anon1* actionwk)
{
	_anon1* a1;
	// Line 73, Address: 0x1020160, Func Offset: 0
	// Line 76, Address: 0x102016c, Func Offset: 0xc
	// Line 77, Address: 0x102017c, Func Offset: 0x1c
	// Line 78, Address: 0x102018c, Func Offset: 0x2c
	// Line 79, Address: 0x1020198, Func Offset: 0x38
	// Line 80, Address: 0x10201a4, Func Offset: 0x44
	// Line 81, Address: 0x10201b0, Func Offset: 0x50
	// Line 82, Address: 0x10201c0, Func Offset: 0x60
	// Line 83, Address: 0x10201cc, Func Offset: 0x6c
	// Line 84, Address: 0x10201d8, Func Offset: 0x78
	// Line 85, Address: 0x10201f0, Func Offset: 0x90
	// Line 88, Address: 0x1020214, Func Offset: 0xb4
	// Line 90, Address: 0x102022c, Func Offset: 0xcc
	// Line 91, Address: 0x1020238, Func Offset: 0xd8
	// Line 93, Address: 0x1020240, Func Offset: 0xe0
	// Line 94, Address: 0x1020274, Func Offset: 0x114
	// Line 95, Address: 0x10202a8, Func Offset: 0x148
	// Line 96, Address: 0x10202b8, Func Offset: 0x158
	// Line 97, Address: 0x10202c4, Func Offset: 0x164
	// Line 98, Address: 0x10202d0, Func Offset: 0x170
	// Line 100, Address: 0x10202dc, Func Offset: 0x17c
	// Line 102, Address: 0x10202f4, Func Offset: 0x194
	// Line 103, Address: 0x1020300, Func Offset: 0x1a0
	// Line 105, Address: 0x1020308, Func Offset: 0x1a8
	// Line 106, Address: 0x102033c, Func Offset: 0x1dc
	// Line 107, Address: 0x1020370, Func Offset: 0x210
	// Line 108, Address: 0x1020380, Func Offset: 0x220
	// Line 109, Address: 0x102038c, Func Offset: 0x22c
	// Line 110, Address: 0x1020398, Func Offset: 0x238
	// Line 112, Address: 0x10203a4, Func Offset: 0x244
	// Line 114, Address: 0x10203bc, Func Offset: 0x25c
	// Line 115, Address: 0x10203c8, Func Offset: 0x268
	// Line 117, Address: 0x10203d0, Func Offset: 0x270
	// Line 118, Address: 0x1020404, Func Offset: 0x2a4
	// Line 119, Address: 0x1020438, Func Offset: 0x2d8
	// Line 120, Address: 0x1020448, Func Offset: 0x2e8
	// Line 121, Address: 0x1020454, Func Offset: 0x2f4
	// Line 122, Address: 0x1020460, Func Offset: 0x300
	// Line 123, Address: 0x102046c, Func Offset: 0x30c
	// Func End, Address: 0x102047c, Func Offset: 0x31c
}

// 
// Start address: 0x1020480
void act_move(_anon1* actionwk)
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
	_anon1* a1;
	// Line 125, Address: 0x1020480, Func Offset: 0
	// Line 131, Address: 0x10204ac, Func Offset: 0x2c
	// Line 132, Address: 0x10204bc, Func Offset: 0x3c
	// Line 133, Address: 0x10204cc, Func Offset: 0x4c
	// Line 134, Address: 0x10204dc, Func Offset: 0x5c
	// Line 136, Address: 0x10204e8, Func Offset: 0x68
	// Line 137, Address: 0x10204fc, Func Offset: 0x7c
	// Line 138, Address: 0x1020504, Func Offset: 0x84
	// Line 139, Address: 0x1020510, Func Offset: 0x90
	// Line 140, Address: 0x102051c, Func Offset: 0x9c
	// Line 141, Address: 0x1020520, Func Offset: 0xa0
	// Line 142, Address: 0x1020524, Func Offset: 0xa4
	// Line 143, Address: 0x1020528, Func Offset: 0xa8
	// Line 144, Address: 0x102052c, Func Offset: 0xac
	// Line 145, Address: 0x1020530, Func Offset: 0xb0
	// Line 146, Address: 0x1020534, Func Offset: 0xb4
	// Line 147, Address: 0x1020538, Func Offset: 0xb8
	// Line 148, Address: 0x102053c, Func Offset: 0xbc
	// Line 149, Address: 0x1020540, Func Offset: 0xc0
	// Line 150, Address: 0x1020544, Func Offset: 0xc4
	// Line 151, Address: 0x1020568, Func Offset: 0xe8
	// Line 152, Address: 0x102057c, Func Offset: 0xfc
	// Line 153, Address: 0x1020590, Func Offset: 0x110
	// Line 154, Address: 0x10205b4, Func Offset: 0x134
	// Line 155, Address: 0x10205c8, Func Offset: 0x148
	// Line 156, Address: 0x10205dc, Func Offset: 0x15c
	// Line 157, Address: 0x1020600, Func Offset: 0x180
	// Line 158, Address: 0x1020618, Func Offset: 0x198
	// Line 159, Address: 0x1020630, Func Offset: 0x1b0
	// Func End, Address: 0x1020660, Func Offset: 0x1e0
}

// 
// Start address: 0x1020660
void togeball_opt(_anon1* actionwk)
{
	_anon1* a1;
	// Line 161, Address: 0x1020660, Func Offset: 0
	// Line 164, Address: 0x1020670, Func Offset: 0x10
	// Line 167, Address: 0x1020698, Func Offset: 0x38
	// Line 169, Address: 0x10206a4, Func Offset: 0x44
	// Line 172, Address: 0x10206b0, Func Offset: 0x50
	// Line 173, Address: 0x10206d4, Func Offset: 0x74
	// Line 175, Address: 0x10206e8, Func Offset: 0x88
	// Line 176, Address: 0x10206f4, Func Offset: 0x94
	// Line 178, Address: 0x10206fc, Func Offset: 0x9c
	// Line 179, Address: 0x1020708, Func Offset: 0xa8
	// Func End, Address: 0x102071c, Func Offset: 0xbc
}

// 
// Start address: 0x1020720
void act_init2(_anon1* actionwk)
{
	// Line 181, Address: 0x1020720, Func Offset: 0
	// Line 182, Address: 0x1020728, Func Offset: 0x8
	// Line 183, Address: 0x1020738, Func Offset: 0x18
	// Line 184, Address: 0x1020748, Func Offset: 0x28
	// Line 185, Address: 0x1020754, Func Offset: 0x34
	// Line 186, Address: 0x1020764, Func Offset: 0x44
	// Line 187, Address: 0x1020770, Func Offset: 0x50
	// Line 188, Address: 0x102077c, Func Offset: 0x5c
	// Func End, Address: 0x1020788, Func Offset: 0x68
}

// 
// Start address: 0x1020790
void act_move2(_anon1* actionwk)
{
	// Line 190, Address: 0x1020790, Func Offset: 0
	// Line 191, Address: 0x1020798, Func Offset: 0x8
	// Line 192, Address: 0x10207a8, Func Offset: 0x18
	// Line 193, Address: 0x10207b8, Func Offset: 0x28
	// Func End, Address: 0x10207c4, Func Offset: 0x34
}

