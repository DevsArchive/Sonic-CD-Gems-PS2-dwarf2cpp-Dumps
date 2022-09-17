typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_4)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef void(*type_5)(_anon1*)[6];
typedef _anon1 type_6[128];
typedef _anon0* type_7[2];

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

_anon0 pat0;
_anon0 pat1;
_anon0* pat_daid4[2];
_anon1 actwk[128];

void daid4(_anon1* pActwk);
void a_ini(_anon1* pActwk);
void a_born(_anon1* pActwk);
void a_off(_anon1* pActwk);
void a_off1(_anon1* pActwk);
void a_on(_anon1* pActwk);
void a_on1(_anon1* pActwk);

// 
// Start address: 0x102adb0
void daid4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[6];
	// Line 78, Address: 0x102adb0, Func Offset: 0
	// Line 79, Address: 0x102adbc, Func Offset: 0xc
	// Line 89, Address: 0x102adf0, Func Offset: 0x40
	// Line 90, Address: 0x102ae2c, Func Offset: 0x7c
	// Func End, Address: 0x102ae3c, Func Offset: 0x8c
}

// 
// Start address: 0x102ae40
void a_ini(_anon1* pActwk)
{
	// Line 95, Address: 0x102ae40, Func Offset: 0
	// Line 96, Address: 0x102ae48, Func Offset: 0x8
	// Line 97, Address: 0x102ae58, Func Offset: 0x18
	// Line 98, Address: 0x102ae68, Func Offset: 0x28
	// Line 99, Address: 0x102ae74, Func Offset: 0x34
	// Line 100, Address: 0x102ae80, Func Offset: 0x40
	// Line 101, Address: 0x102ae8c, Func Offset: 0x4c
	// Line 102, Address: 0x102ae98, Func Offset: 0x58
	// Line 103, Address: 0x102aea8, Func Offset: 0x68
	// Line 104, Address: 0x102aeb8, Func Offset: 0x78
	// Line 105, Address: 0x102aec4, Func Offset: 0x84
	// Func End, Address: 0x102aed0, Func Offset: 0x90
}

// 
// Start address: 0x102aed0
void a_born(_anon1* pActwk)
{
	short d0;
	// Line 110, Address: 0x102aed0, Func Offset: 0
	// Line 113, Address: 0x102aee0, Func Offset: 0x10
	// Line 114, Address: 0x102aef0, Func Offset: 0x20
	// Line 115, Address: 0x102aefc, Func Offset: 0x2c
	// Line 117, Address: 0x102af20, Func Offset: 0x50
	// Line 118, Address: 0x102af30, Func Offset: 0x60
	// Line 120, Address: 0x102af38, Func Offset: 0x68
	// Line 121, Address: 0x102af44, Func Offset: 0x74
	// Func End, Address: 0x102af58, Func Offset: 0x88
}

// 
// Start address: 0x102af60
void a_off(_anon1* pActwk)
{
	// Line 126, Address: 0x102af60, Func Offset: 0
	// Line 127, Address: 0x102af6c, Func Offset: 0xc
	// Line 128, Address: 0x102af7c, Func Offset: 0x1c
	// Line 129, Address: 0x102af88, Func Offset: 0x28
	// Line 130, Address: 0x102af98, Func Offset: 0x38
	// Line 131, Address: 0x102afa0, Func Offset: 0x40
	// Line 133, Address: 0x102afa8, Func Offset: 0x48
	// Line 134, Address: 0x102afb4, Func Offset: 0x54
	// Func End, Address: 0x102afc4, Func Offset: 0x64
}

// 
// Start address: 0x102afd0
void a_off1(_anon1* pActwk)
{
	short d0;
	// Line 139, Address: 0x102afd0, Func Offset: 0
	// Line 142, Address: 0x102afe0, Func Offset: 0x10
	// Line 143, Address: 0x102aff8, Func Offset: 0x28
	// Line 144, Address: 0x102b008, Func Offset: 0x38
	// Line 146, Address: 0x102b02c, Func Offset: 0x5c
	// Line 148, Address: 0x102b038, Func Offset: 0x68
	// Line 150, Address: 0x102b050, Func Offset: 0x80
	// Line 151, Address: 0x102b060, Func Offset: 0x90
	// Line 152, Address: 0x102b074, Func Offset: 0xa4
	// Line 154, Address: 0x102b084, Func Offset: 0xb4
	// Line 156, Address: 0x102b090, Func Offset: 0xc0
	// Line 158, Address: 0x102b0a4, Func Offset: 0xd4
	// Line 159, Address: 0x102b0b0, Func Offset: 0xe0
	// Line 162, Address: 0x102b0b8, Func Offset: 0xe8
	// Line 164, Address: 0x102b0d4, Func Offset: 0x104
	// Line 165, Address: 0x102b0e0, Func Offset: 0x110
	// Line 166, Address: 0x102b0f4, Func Offset: 0x124
	// Line 167, Address: 0x102b100, Func Offset: 0x130
	// Line 168, Address: 0x102b110, Func Offset: 0x140
	// Line 169, Address: 0x102b124, Func Offset: 0x154
	// Line 172, Address: 0x102b130, Func Offset: 0x160
	// Line 173, Address: 0x102b13c, Func Offset: 0x16c
	// Line 174, Address: 0x102b148, Func Offset: 0x178
	// Func End, Address: 0x102b15c, Func Offset: 0x18c
}

// 
// Start address: 0x102b160
void a_on(_anon1* pActwk)
{
	// Line 179, Address: 0x102b160, Func Offset: 0
	// Line 180, Address: 0x102b16c, Func Offset: 0xc
	// Line 181, Address: 0x102b17c, Func Offset: 0x1c
	// Line 182, Address: 0x102b18c, Func Offset: 0x2c
	// Line 183, Address: 0x102b198, Func Offset: 0x38
	// Line 185, Address: 0x102b1a4, Func Offset: 0x44
	// Line 186, Address: 0x102b1b0, Func Offset: 0x50
	// Func End, Address: 0x102b1c0, Func Offset: 0x60
}

// 
// Start address: 0x102b1c0
void a_on1(_anon1* pActwk)
{
	short d0;
	// Line 191, Address: 0x102b1c0, Func Offset: 0
	// Line 194, Address: 0x102b1d0, Func Offset: 0x10
	// Line 195, Address: 0x102b1e0, Func Offset: 0x20
	// Line 197, Address: 0x102b204, Func Offset: 0x44
	// Line 198, Address: 0x102b210, Func Offset: 0x50
	// Line 200, Address: 0x102b218, Func Offset: 0x58
	// Line 202, Address: 0x102b23c, Func Offset: 0x7c
	// Line 203, Address: 0x102b248, Func Offset: 0x88
	// Line 204, Address: 0x102b258, Func Offset: 0x98
	// Line 207, Address: 0x102b26c, Func Offset: 0xac
	// Line 208, Address: 0x102b278, Func Offset: 0xb8
	// Line 209, Address: 0x102b28c, Func Offset: 0xcc
	// Line 210, Address: 0x102b298, Func Offset: 0xd8
	// Func End, Address: 0x102b2ac, Func Offset: 0xec
}

