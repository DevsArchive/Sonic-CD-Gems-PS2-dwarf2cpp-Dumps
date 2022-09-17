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
typedef _anon1 type_4[128];

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

unsigned char limmoveflag;
short scralim_down;
short scralim_n_down;
_anon2 scra_v_posit;
_anon1 actwk[128];
unsigned char bossflag;
_anon5 stageno;

void scrchk();
void zone8chk();

// 
// Start address: 0x101c410
void scrchk()
{
	short ywk;
	short limwk;
	// Line 42, Address: 0x101c410, Func Offset: 0
	// Line 45, Address: 0x101c420, Func Offset: 0x10
	// Line 47, Address: 0x101c428, Func Offset: 0x18
	// Line 49, Address: 0x101c434, Func Offset: 0x24
	// Line 51, Address: 0x101c480, Func Offset: 0x70
	// Line 53, Address: 0x101c4e8, Func Offset: 0xd8
	// Line 57, Address: 0x101c4f4, Func Offset: 0xe4
	// Line 58, Address: 0x101c508, Func Offset: 0xf8
	// Line 59, Address: 0x101c514, Func Offset: 0x104
	// Line 60, Address: 0x101c52c, Func Offset: 0x11c
	// Line 62, Address: 0x101c538, Func Offset: 0x128
	// Line 63, Address: 0x101c56c, Func Offset: 0x15c
	// Line 67, Address: 0x101c588, Func Offset: 0x178
	// Line 68, Address: 0x101c59c, Func Offset: 0x18c
	// Line 70, Address: 0x101c5a8, Func Offset: 0x198
	// Func End, Address: 0x101c5c0, Func Offset: 0x1b0
}

// 
// Start address: 0x101c5c0
void zone8chk()
{
	// Line 78, Address: 0x101c5c0, Func Offset: 0
	// Line 81, Address: 0x101c5f8, Func Offset: 0x38
	// Line 82, Address: 0x101c604, Func Offset: 0x44
	// Line 85, Address: 0x101c60c, Func Offset: 0x4c
	// Line 86, Address: 0x101c61c, Func Offset: 0x5c
	// Line 87, Address: 0x101c628, Func Offset: 0x68
	// Line 89, Address: 0x101c630, Func Offset: 0x70
	// Line 96, Address: 0x101c64c, Func Offset: 0x8c
	// Func End, Address: 0x101c654, Func Offset: 0x94
}

