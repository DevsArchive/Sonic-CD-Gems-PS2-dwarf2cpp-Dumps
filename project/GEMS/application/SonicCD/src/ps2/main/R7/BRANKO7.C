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
typedef void(*type_2)(_anon1*)[2];
typedef _anon7 type_3[0];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon0* type_6[3];
typedef short type_7[32];
typedef _anon1 type_8[128];

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

short branko7_initbl[32];
_anon0 pat0;
_anon0 pat1;
_anon0 pat2;
_anon0* branko7pat[3];
void(*branko7_act_tbl)(_anon1*)[2];
_anon1 actwk[128];

void branko7(_anon1* pActwk);
void branko7_ridechk(_anon1* pActwk);
void branko7_init(_anon1* pActwk);
void branko7_move(_anon1* pActwk);
void branko7_posiset(_anon1* pActwk);
void branko7_posiset2(_anon1* pActwk, unsigned char dirwk);

// 
// Start address: 0x1020da0
void branko7(_anon1* pActwk)
{
	// Line 117, Address: 0x1020da0, Func Offset: 0
	// Line 118, Address: 0x1020dac, Func Offset: 0xc
	// Line 119, Address: 0x1020df0, Func Offset: 0x50
	// Line 120, Address: 0x1020dfc, Func Offset: 0x5c
	// Line 121, Address: 0x1020e10, Func Offset: 0x70
	// Func End, Address: 0x1020e20, Func Offset: 0x80
}

// 
// Start address: 0x1020e20
void branko7_ridechk(_anon1* pActwk)
{
	// Line 127, Address: 0x1020e20, Func Offset: 0
	// Line 128, Address: 0x1020e2c, Func Offset: 0xc
	// Line 130, Address: 0x1020e38, Func Offset: 0x18
	// Line 131, Address: 0x1020e54, Func Offset: 0x34
	// Line 133, Address: 0x1020e60, Func Offset: 0x40
	// Line 134, Address: 0x1020e7c, Func Offset: 0x5c
	// Line 135, Address: 0x1020e88, Func Offset: 0x68
	// Line 140, Address: 0x1020e90, Func Offset: 0x70
	// Line 142, Address: 0x1020e9c, Func Offset: 0x7c
	// Line 143, Address: 0x1020ec8, Func Offset: 0xa8
	// Line 148, Address: 0x1020f34, Func Offset: 0x114
	// Func End, Address: 0x1020f44, Func Offset: 0x124
}

// 
// Start address: 0x1020f50
void branko7_init(_anon1* pActwk)
{
	int flagwk;
	int flagcnt;
	_anon1* pNewact;
	short* pIniTbl;
	// Line 154, Address: 0x1020f50, Func Offset: 0
	// Line 159, Address: 0x1020f68, Func Offset: 0x18
	// Line 160, Address: 0x1020f78, Func Offset: 0x28
	// Line 161, Address: 0x1020f88, Func Offset: 0x38
	// Line 162, Address: 0x1020f94, Func Offset: 0x44
	// Line 163, Address: 0x1020fa4, Func Offset: 0x54
	// Line 164, Address: 0x1020fb0, Func Offset: 0x60
	// Line 165, Address: 0x1020fbc, Func Offset: 0x6c
	// Line 167, Address: 0x1020fc8, Func Offset: 0x78
	// Line 168, Address: 0x1020fd8, Func Offset: 0x88
	// Line 169, Address: 0x1020fe8, Func Offset: 0x98
	// Line 171, Address: 0x1020ff8, Func Offset: 0xa8
	// Line 172, Address: 0x1021000, Func Offset: 0xb0
	// Line 173, Address: 0x1021014, Func Offset: 0xc4
	// Line 175, Address: 0x1021020, Func Offset: 0xd0
	// Line 177, Address: 0x102102c, Func Offset: 0xdc
	// Line 178, Address: 0x1021040, Func Offset: 0xf0
	// Line 179, Address: 0x102104c, Func Offset: 0xfc
	// Line 181, Address: 0x102105c, Func Offset: 0x10c
	// Line 183, Address: 0x102106c, Func Offset: 0x11c
	// Line 184, Address: 0x102107c, Func Offset: 0x12c
	// Line 185, Address: 0x102108c, Func Offset: 0x13c
	// Line 186, Address: 0x1021098, Func Offset: 0x148
	// Line 188, Address: 0x10210a4, Func Offset: 0x154
	// Line 189, Address: 0x10210b8, Func Offset: 0x168
	// Line 190, Address: 0x10210c4, Func Offset: 0x174
	// Line 193, Address: 0x10210d0, Func Offset: 0x180
	// Line 197, Address: 0x10210e0, Func Offset: 0x190
	// Line 198, Address: 0x10210f4, Func Offset: 0x1a4
	// Line 199, Address: 0x10210f8, Func Offset: 0x1a8
	// Line 200, Address: 0x1021120, Func Offset: 0x1d0
	// Line 201, Address: 0x1021134, Func Offset: 0x1e4
	// Line 202, Address: 0x1021148, Func Offset: 0x1f8
	// Line 203, Address: 0x102115c, Func Offset: 0x20c
	// Line 205, Address: 0x1021170, Func Offset: 0x220
	// Line 206, Address: 0x102117c, Func Offset: 0x22c
	// Func End, Address: 0x1021198, Func Offset: 0x248
}

// 
// Start address: 0x10211a0
void branko7_move(_anon1* pActwk)
{
	int lXpos;
	int lYpos;
	// Line 212, Address: 0x10211a0, Func Offset: 0
	// Line 215, Address: 0x10211b4, Func Offset: 0x14
	// Line 216, Address: 0x10211bc, Func Offset: 0x1c
	// Line 218, Address: 0x10211c4, Func Offset: 0x24
	// Line 220, Address: 0x10211d0, Func Offset: 0x30
	// Line 221, Address: 0x10211f0, Func Offset: 0x50
	// Line 222, Address: 0x1021210, Func Offset: 0x70
	// Line 223, Address: 0x1021230, Func Offset: 0x90
	// Line 225, Address: 0x102123c, Func Offset: 0x9c
	// Func End, Address: 0x1021254, Func Offset: 0xb4
}

// 
// Start address: 0x1021260
void branko7_posiset(_anon1* pActwk)
{
	short spdwk;
	// Line 231, Address: 0x1021260, Func Offset: 0
	// Line 234, Address: 0x1021270, Func Offset: 0x10
	// Line 235, Address: 0x1021280, Func Offset: 0x20
	// Line 237, Address: 0x10212b4, Func Offset: 0x54
	// Line 238, Address: 0x10212bc, Func Offset: 0x5c
	// Line 239, Address: 0x10212cc, Func Offset: 0x6c
	// Line 240, Address: 0x10212ec, Func Offset: 0x8c
	// Line 242, Address: 0x10212f8, Func Offset: 0x98
	// Line 244, Address: 0x1021300, Func Offset: 0xa0
	// Line 246, Address: 0x1021334, Func Offset: 0xd4
	// Line 247, Address: 0x102133c, Func Offset: 0xdc
	// Line 248, Address: 0x102134c, Func Offset: 0xec
	// Line 249, Address: 0x102136c, Func Offset: 0x10c
	// Line 254, Address: 0x1021374, Func Offset: 0x114
	// Line 255, Address: 0x102138c, Func Offset: 0x12c
	// Func End, Address: 0x10213a0, Func Offset: 0x140
}

// 
// Start address: 0x10213a0
void branko7_posiset2(_anon1* pActwk, unsigned char dirwk)
{
	short usrwk;
	_anon2 sinwk;
	_anon2 coswk;
	// Line 261, Address: 0x10213a0, Func Offset: 0
	// Line 265, Address: 0x10213b4, Func Offset: 0x14
	// Line 266, Address: 0x10213bc, Func Offset: 0x1c
	// Line 267, Address: 0x10213d0, Func Offset: 0x30
	// Line 268, Address: 0x10213e8, Func Offset: 0x48
	// Line 269, Address: 0x10213f4, Func Offset: 0x54
	// Line 270, Address: 0x1021408, Func Offset: 0x68
	// Line 272, Address: 0x102141c, Func Offset: 0x7c
	// Line 273, Address: 0x1021428, Func Offset: 0x88
	// Line 274, Address: 0x1021434, Func Offset: 0x94
	// Line 275, Address: 0x1021440, Func Offset: 0xa0
	// Line 276, Address: 0x102144c, Func Offset: 0xac
	// Line 277, Address: 0x102147c, Func Offset: 0xdc
	// Line 278, Address: 0x10214ac, Func Offset: 0x10c
	// Func End, Address: 0x10214c0, Func Offset: 0x120
}

