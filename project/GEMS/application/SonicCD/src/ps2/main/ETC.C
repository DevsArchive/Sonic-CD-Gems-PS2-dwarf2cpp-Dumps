typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;


typedef _anon0 type_0[20];
typedef _anon0 type_1[0];
typedef unsigned short type_2[320];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef char type_5[257];
typedef unsigned char type_6[766];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

unsigned char flagwork[766];
_anon3 scra_h_posit;
unsigned char int_flg;

void frameoutchk(_anon2* pActwk);
int sync();
void sinset(unsigned char kakudo, short* sin, short* cos);
short atan_sonic(short x, short y);

// 
// Start address: 0x1000fe0
void frameoutchk(_anon2* pActwk)
{
	short xposi;
	short scra_h;
	unsigned char index;
	// Line 23, Address: 0x1000fe0, Func Offset: 0
	// Line 28, Address: 0x1000ff8, Func Offset: 0x18
	// Line 29, Address: 0x1001008, Func Offset: 0x28
	// Line 30, Address: 0x1001018, Func Offset: 0x38
	// Line 31, Address: 0x1001028, Func Offset: 0x48
	// Line 32, Address: 0x1001034, Func Offset: 0x54
	// Line 33, Address: 0x1001044, Func Offset: 0x64
	// Line 34, Address: 0x1001050, Func Offset: 0x70
	// Line 36, Address: 0x1001064, Func Offset: 0x84
	// Line 37, Address: 0x1001070, Func Offset: 0x90
	// Line 40, Address: 0x1001078, Func Offset: 0x98
	// Line 41, Address: 0x1001084, Func Offset: 0xa4
	// Line 42, Address: 0x10010a8, Func Offset: 0xc8
	// Line 44, Address: 0x10010b4, Func Offset: 0xd4
	// Func End, Address: 0x10010d0, Func Offset: 0xf0
}

// 
// Start address: 0x10010d0
int sync()
{
	// Line 54, Address: 0x10010d0, Func Offset: 0
	// Line 55, Address: 0x10010ec, Func Offset: 0x1c
	// Line 56, Address: 0x10010f0, Func Offset: 0x20
	// Func End, Address: 0x10010f8, Func Offset: 0x28
}

// 
// Start address: 0x1001100
void sinset(unsigned char kakudo, short* sin, short* cos)
{
	unsigned short kakudo_w;
	unsigned short sintable[320];
	// Line 66, Address: 0x1001100, Func Offset: 0
	// Line 68, Address: 0x1001114, Func Offset: 0x14
	// Line 117, Address: 0x1001148, Func Offset: 0x48
	// Line 118, Address: 0x1001160, Func Offset: 0x60
	// Line 119, Address: 0x1001178, Func Offset: 0x78
	// Line 120, Address: 0x1001194, Func Offset: 0x94
	// Func End, Address: 0x10011a4, Func Offset: 0xa4
}

// 
// Start address: 0x10011b0
short atan_sonic(short x, short y)
{
	int xl;
	int yl;
	short ret;
	char atantbl[257];
	// Line 130, Address: 0x10011b0, Func Offset: 0
	// Line 133, Address: 0x10011c8, Func Offset: 0x18
	// Line 153, Address: 0x10011f4, Func Offset: 0x44
	// Line 154, Address: 0x1001200, Func Offset: 0x50
	// Line 155, Address: 0x100120c, Func Offset: 0x5c
	// Line 157, Address: 0x1001218, Func Offset: 0x68
	// Line 158, Address: 0x1001224, Func Offset: 0x74
	// Line 159, Address: 0x1001230, Func Offset: 0x80
	// Line 161, Address: 0x100123c, Func Offset: 0x8c
	// Line 162, Address: 0x1001248, Func Offset: 0x98
	// Line 163, Address: 0x100125c, Func Offset: 0xac
	// Line 164, Address: 0x1001274, Func Offset: 0xc4
	// Line 167, Address: 0x100127c, Func Offset: 0xcc
	// Line 168, Address: 0x1001288, Func Offset: 0xd8
	// Line 169, Address: 0x100129c, Func Offset: 0xec
	// Line 171, Address: 0x10012cc, Func Offset: 0x11c
	// Line 173, Address: 0x10012e0, Func Offset: 0x130
	// Line 174, Address: 0x10012ec, Func Offset: 0x13c
	// Line 176, Address: 0x10012f8, Func Offset: 0x148
	// Line 178, Address: 0x100130c, Func Offset: 0x15c
	// Line 179, Address: 0x1001318, Func Offset: 0x168
	// Line 181, Address: 0x1001324, Func Offset: 0x174
	// Line 183, Address: 0x1001330, Func Offset: 0x180
	// Line 184, Address: 0x1001334, Func Offset: 0x184
	// Func End, Address: 0x100134c, Func Offset: 0x19c
}

