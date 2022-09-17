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
typedef _anon0* type_2[2];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];

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

_anon0 pat00;
_anon0 pat01;
_anon0* pat_chgwall7[2];
_anon1 actwk[128];
unsigned char prio_flag;

void chgwall7(_anon1* pActwk);

// 
// Start address: 0x101c9f0
void chgwall7(_anon1* pActwk)
{
	// Line 66, Address: 0x101c9f0, Func Offset: 0
	// Line 67, Address: 0x101c9fc, Func Offset: 0xc
	// Line 69, Address: 0x101ca0c, Func Offset: 0x1c
	// Line 70, Address: 0x101ca1c, Func Offset: 0x2c
	// Line 71, Address: 0x101ca2c, Func Offset: 0x3c
	// Line 72, Address: 0x101ca44, Func Offset: 0x54
	// Line 73, Address: 0x101ca50, Func Offset: 0x60
	// Line 78, Address: 0x101ca60, Func Offset: 0x70
	// Line 79, Address: 0x101ca68, Func Offset: 0x78
	// Line 81, Address: 0x101ca78, Func Offset: 0x88
	// Line 82, Address: 0x101ca94, Func Offset: 0xa4
	// Line 84, Address: 0x101caa0, Func Offset: 0xb0
	// Line 86, Address: 0x101caa8, Func Offset: 0xb8
	// Line 87, Address: 0x101cab8, Func Offset: 0xc8
	// Line 88, Address: 0x101cac0, Func Offset: 0xd0
	// Line 93, Address: 0x101cad4, Func Offset: 0xe4
	// Line 94, Address: 0x101cae0, Func Offset: 0xf0
	// Line 95, Address: 0x101caec, Func Offset: 0xfc
	// Func End, Address: 0x101cafc, Func Offset: 0x10c
}

