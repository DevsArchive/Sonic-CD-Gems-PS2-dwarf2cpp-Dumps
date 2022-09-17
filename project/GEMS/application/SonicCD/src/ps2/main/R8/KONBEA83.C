typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_4)(_anon1*);

typedef unsigned char type_0[14];
typedef _anon7 type_1[20];
typedef _anon7 type_2[0];
typedef unsigned char type_3[2];
typedef void(*type_5)(_anon1*)[4];
typedef unsigned char type_6[22];
typedef short* type_7[2];
typedef unsigned char* type_8[1];
typedef short type_9[2];
typedef _anon1 type_10[128];
typedef _anon0* type_11[7];
typedef short type_12[5];

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

short a_tbl_00[2];
short a_tbl_01[5];
short* a_tbl0[2];
unsigned char pchg_00[14];
unsigned char* pchg[1];
_anon0 pat_00;
_anon0 pat_01;
_anon0 pat_02;
_anon0 pat_03;
_anon0 pat_04;
_anon0 pat_05;
_anon0* pat_konbea[7];
void(*a_act_tbl)(_anon1*)[4];
_anon1 actwk[128];

void konbea(_anon1* pActwk);
void a_init(_anon1* pActwk);
void a_init_sub(_anon1* pActwk, _anon1* pNewact);
void a_stop(_anon1* pActwk);
void a_stop1(_anon1* pActwk);
void a_move(_anon1* pActwk);

// 
// Start address: 0x10292b0
void konbea(_anon1* pActwk)
{
	_anon1* pMainwk;
	// Line 147, Address: 0x10292b0, Func Offset: 0
	// Line 151, Address: 0x10292c0, Func Offset: 0x10
	// Line 152, Address: 0x10292d0, Func Offset: 0x20
	// Line 154, Address: 0x10292f8, Func Offset: 0x48
	// Line 155, Address: 0x102930c, Func Offset: 0x5c
	// Line 158, Address: 0x1029320, Func Offset: 0x70
	// Line 160, Address: 0x1029344, Func Offset: 0x94
	// Line 163, Address: 0x1029358, Func Offset: 0xa8
	// Line 165, Address: 0x102937c, Func Offset: 0xcc
	// Line 170, Address: 0x1029390, Func Offset: 0xe0
	// Line 171, Address: 0x10293d4, Func Offset: 0x124
	// Line 173, Address: 0x10293e0, Func Offset: 0x130
	// Line 174, Address: 0x10293fc, Func Offset: 0x14c
	// Line 176, Address: 0x1029410, Func Offset: 0x160
	// Func End, Address: 0x1029424, Func Offset: 0x174
}

// 
// Start address: 0x1029430
void a_init(_anon1* pActwk)
{
	short* pTbl;
	short i;
	_anon1* pNewact;
	// Line 182, Address: 0x1029430, Func Offset: 0
	// Line 186, Address: 0x1029444, Func Offset: 0x14
	// Line 188, Address: 0x1029468, Func Offset: 0x38
	// Line 189, Address: 0x102947c, Func Offset: 0x4c
	// Line 190, Address: 0x1029484, Func Offset: 0x54
	// Line 192, Address: 0x1029494, Func Offset: 0x64
	// Line 194, Address: 0x10294c4, Func Offset: 0x94
	// Line 195, Address: 0x10294d8, Func Offset: 0xa8
	// Line 196, Address: 0x10294e4, Func Offset: 0xb4
	// Line 200, Address: 0x10294ec, Func Offset: 0xbc
	// Line 201, Address: 0x10294fc, Func Offset: 0xcc
	// Line 202, Address: 0x1029534, Func Offset: 0x104
	// Line 203, Address: 0x1029544, Func Offset: 0x114
	// Line 204, Address: 0x1029550, Func Offset: 0x120
	// Line 205, Address: 0x1029564, Func Offset: 0x134
	// Line 206, Address: 0x102959c, Func Offset: 0x16c
	// Line 207, Address: 0x10295d4, Func Offset: 0x1a4
	// Line 208, Address: 0x10295e4, Func Offset: 0x1b4
	// Line 209, Address: 0x1029600, Func Offset: 0x1d0
	// Func End, Address: 0x1029618, Func Offset: 0x1e8
}

// 
// Start address: 0x1029620
void a_init_sub(_anon1* pActwk, _anon1* pNewact)
{
	// Line 215, Address: 0x1029620, Func Offset: 0
	// Line 216, Address: 0x102962c, Func Offset: 0xc
	// Line 217, Address: 0x1029638, Func Offset: 0x18
	// Line 218, Address: 0x1029648, Func Offset: 0x28
	// Line 219, Address: 0x1029654, Func Offset: 0x34
	// Line 220, Address: 0x102966c, Func Offset: 0x4c
	// Line 221, Address: 0x1029678, Func Offset: 0x58
	// Line 222, Address: 0x1029684, Func Offset: 0x64
	// Line 223, Address: 0x1029694, Func Offset: 0x74
	// Line 224, Address: 0x10296a4, Func Offset: 0x84
	// Line 225, Address: 0x10296b4, Func Offset: 0x94
	// Func End, Address: 0x10296c0, Func Offset: 0xa0
}

// 
// Start address: 0x10296c0
void a_stop(_anon1* pActwk)
{
	// Line 231, Address: 0x10296c0, Func Offset: 0
	// Line 232, Address: 0x10296cc, Func Offset: 0xc
	// Line 233, Address: 0x10296d8, Func Offset: 0x18
	// Line 234, Address: 0x10296e4, Func Offset: 0x24
	// Line 235, Address: 0x10296f4, Func Offset: 0x34
	// Line 236, Address: 0x1029700, Func Offset: 0x40
	// Func End, Address: 0x1029710, Func Offset: 0x50
}

// 
// Start address: 0x1029710
void a_stop1(_anon1* pActwk)
{
	// Line 242, Address: 0x1029710, Func Offset: 0
	// Line 243, Address: 0x102971c, Func Offset: 0xc
	// Line 244, Address: 0x1029738, Func Offset: 0x28
	// Line 245, Address: 0x1029744, Func Offset: 0x34
	// Line 246, Address: 0x102974c, Func Offset: 0x3c
	// Line 249, Address: 0x1029754, Func Offset: 0x44
	// Line 250, Address: 0x1029774, Func Offset: 0x64
	// Line 251, Address: 0x1029780, Func Offset: 0x70
	// Line 252, Address: 0x102978c, Func Offset: 0x7c
	// Line 254, Address: 0x102979c, Func Offset: 0x8c
	// Line 255, Address: 0x10297ac, Func Offset: 0x9c
	// Line 262, Address: 0x10297c0, Func Offset: 0xb0
	// Func End, Address: 0x10297d0, Func Offset: 0xc0
}

// 
// Start address: 0x10297d0
void a_move(_anon1* pActwk)
{
	// Line 268, Address: 0x10297d0, Func Offset: 0
	// Line 269, Address: 0x10297dc, Func Offset: 0xc
	// Line 271, Address: 0x10297f0, Func Offset: 0x20
	// Line 272, Address: 0x1029800, Func Offset: 0x30
	// Line 276, Address: 0x102980c, Func Offset: 0x3c
	// Func End, Address: 0x102981c, Func Offset: 0x4c
}

