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
typedef unsigned char type_4[12];
typedef _anon0* type_5[6];
typedef _anon1 type_6[128];

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

_anon0 wall7_pat0;
_anon0 wall7_pat1;
_anon0 wall7_pat2;
_anon0 wall7_pat3;
_anon0 wall7_pat4;
_anon0 wall7_pat5;
_anon0* pat_wall7[6];
_anon1 actwk[128];

void wall7(_anon1* pActwk);

// 
// Start address: 0x101f9e0
void wall7(_anon1* pActwk)
{
	unsigned char wall7_tbl0[12];
	// Line 68, Address: 0x101f9e0, Func Offset: 0
	// Line 69, Address: 0x101f9ec, Func Offset: 0xc
	// Line 78, Address: 0x101fa20, Func Offset: 0x40
	// Line 80, Address: 0x101fa30, Func Offset: 0x50
	// Line 81, Address: 0x101fa40, Func Offset: 0x60
	// Line 82, Address: 0x101fa50, Func Offset: 0x70
	// Line 83, Address: 0x101fa5c, Func Offset: 0x7c
	// Line 84, Address: 0x101fa68, Func Offset: 0x88
	// Line 85, Address: 0x101fa78, Func Offset: 0x98
	// Line 87, Address: 0x101fa88, Func Offset: 0xa8
	// Line 88, Address: 0x101faac, Func Offset: 0xcc
	// Line 89, Address: 0x101fad0, Func Offset: 0xf0
	// Line 92, Address: 0x101faf8, Func Offset: 0x118
	// Line 93, Address: 0x101fb0c, Func Offset: 0x12c
	// Line 94, Address: 0x101fb18, Func Offset: 0x138
	// Line 95, Address: 0x101fb24, Func Offset: 0x144
	// Func End, Address: 0x101fb34, Func Offset: 0x154
}

