typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef short* type_1[4];
typedef _anon7 type_2[0];
typedef short type_3[61];
typedef short type_4[51];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef short type_7[51];
typedef short type_8[51];
typedef _anon1 type_9[128];

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

short belt_a[51];
short belt_b[51];
short belt_c[61];
short belt_d[51];
short* belt_tbl[4];
_anon1 actwk[128];
unsigned char bossflag;
unsigned char colrevflag;
unsigned char time_flag;
unsigned char generate_flag;

void playsp();
void belt();
void belt_effect();
int belt_chk(short wD0);

// 
// Start address: 0x1017d60
void playsp()
{
	// Line 78, Address: 0x1017d60, Func Offset: 0
	// Line 79, Address: 0x1017d68, Func Offset: 0x8
	// Line 80, Address: 0x1017d70, Func Offset: 0x10
	// Func End, Address: 0x1017d80, Func Offset: 0x20
}

// 
// Start address: 0x1017d80
void belt()
{
	short wD0;
	short wD2;
	short wD3;
	// Line 86, Address: 0x1017d80, Func Offset: 0
	// Line 89, Address: 0x1017d94, Func Offset: 0x14
	// Line 91, Address: 0x1017da4, Func Offset: 0x24
	// Line 92, Address: 0x1017de4, Func Offset: 0x64
	// Line 93, Address: 0x1017e28, Func Offset: 0xa8
	// Line 94, Address: 0x1017e5c, Func Offset: 0xdc
	// Line 95, Address: 0x1017e70, Func Offset: 0xf0
	// Line 97, Address: 0x1017eb0, Func Offset: 0x130
	// Line 98, Address: 0x1017ee4, Func Offset: 0x164
	// Line 100, Address: 0x1017ef8, Func Offset: 0x178
	// Line 101, Address: 0x1017f00, Func Offset: 0x180
	// Func End, Address: 0x1017f1c, Func Offset: 0x19c
}

// 
// Start address: 0x1017f20
void belt_effect()
{
	int lD0;
	char bD1;
	short wD1;
	// Line 107, Address: 0x1017f20, Func Offset: 0
	// Line 112, Address: 0x1017f30, Func Offset: 0x10
	// Line 114, Address: 0x1017f58, Func Offset: 0x38
	// Line 115, Address: 0x1017f5c, Func Offset: 0x3c
	// Line 117, Address: 0x1017f64, Func Offset: 0x44
	// Line 118, Address: 0x1017f68, Func Offset: 0x48
	// Line 120, Address: 0x1017f70, Func Offset: 0x50
	// Line 124, Address: 0x1017f74, Func Offset: 0x54
	// Line 125, Address: 0x1017f7c, Func Offset: 0x5c
	// Line 126, Address: 0x1017f8c, Func Offset: 0x6c
	// Line 127, Address: 0x1017f90, Func Offset: 0x70
	// Line 130, Address: 0x1017fac, Func Offset: 0x8c
	// Line 131, Address: 0x1017fc0, Func Offset: 0xa0
	// Line 132, Address: 0x1017ff4, Func Offset: 0xd4
	// Line 134, Address: 0x1018010, Func Offset: 0xf0
	// Line 137, Address: 0x1018024, Func Offset: 0x104
	// Func End, Address: 0x101803c, Func Offset: 0x11c
}

// 
// Start address: 0x1018040
int belt_chk(short wD0)
{
	unsigned char bD1;
	short* pBelt;
	short i;
	short wD6;
	// Line 147, Address: 0x1018040, Func Offset: 0
	// Line 152, Address: 0x1018058, Func Offset: 0x18
	// Line 153, Address: 0x1018070, Func Offset: 0x30
	// Line 155, Address: 0x1018090, Func Offset: 0x50
	// Line 156, Address: 0x10180a8, Func Offset: 0x68
	// Line 158, Address: 0x10180b4, Func Offset: 0x74
	// Line 159, Address: 0x10180c8, Func Offset: 0x88
	// Line 160, Address: 0x1018114, Func Offset: 0xd4
	// Line 161, Address: 0x1018130, Func Offset: 0xf0
	// Line 162, Address: 0x1018134, Func Offset: 0xf4
	// Func End, Address: 0x1018150, Func Offset: 0x110
}

