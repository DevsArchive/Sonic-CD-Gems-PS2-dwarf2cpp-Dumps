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
typedef _anon0* type_2[10];
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
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 pat06;
_anon0 pat07;
_anon0 pat08;
_anon0 pat09;
_anon0* pat_kuzure_a[10];
_anon5 stageno;
_anon1 actwk[128];

void kuzure8(_anon1* actionwk);
void main_ini(_anon1* actionwk);
void main_check(_anon1* actionwk);
void main_wait(_anon1* actionwk);
void main_break(_anon1* actionwk);
void main_hitchk(_anon1* actionwk);
void parts(_anon1* actionwk);
void parts_ini(_anon1* actionwk);
void parts_wait(_anon1* actionwk);
void parts_fall(_anon1* actionwk);

// 
// Start address: 0x1022a30
void kuzure8(_anon1* actionwk)
{
	// Line 51, Address: 0x1022a30, Func Offset: 0
	// Line 52, Address: 0x1022a3c, Func Offset: 0xc
	// Line 54, Address: 0x1022a54, Func Offset: 0x24
	// Line 55, Address: 0x1022a60, Func Offset: 0x30
	// Line 57, Address: 0x1022a68, Func Offset: 0x38
	// Line 60, Address: 0x1022ab4, Func Offset: 0x84
	// Line 61, Address: 0x1022ac0, Func Offset: 0x90
	// Line 63, Address: 0x1022ac8, Func Offset: 0x98
	// Line 64, Address: 0x1022ad4, Func Offset: 0xa4
	// Line 66, Address: 0x1022adc, Func Offset: 0xac
	// Line 67, Address: 0x1022ae8, Func Offset: 0xb8
	// Line 69, Address: 0x1022af0, Func Offset: 0xc0
	// Line 70, Address: 0x1022afc, Func Offset: 0xcc
	// Line 72, Address: 0x1022b04, Func Offset: 0xd4
	// Line 75, Address: 0x1022b10, Func Offset: 0xe0
	// Func End, Address: 0x1022b20, Func Offset: 0xf0
}

// 
// Start address: 0x1022b20
void main_ini(_anon1* actionwk)
{
	char d0;
	char d1;
	// Line 77, Address: 0x1022b20, Func Offset: 0
	// Line 80, Address: 0x1022b30, Func Offset: 0x10
	// Line 81, Address: 0x1022b40, Func Offset: 0x20
	// Line 82, Address: 0x1022b50, Func Offset: 0x30
	// Line 83, Address: 0x1022b5c, Func Offset: 0x3c
	// Line 84, Address: 0x1022b78, Func Offset: 0x58
	// Line 86, Address: 0x1022b8c, Func Offset: 0x6c
	// Line 87, Address: 0x1022b98, Func Offset: 0x78
	// Line 88, Address: 0x1022ba8, Func Offset: 0x88
	// Line 90, Address: 0x1022bd4, Func Offset: 0xb4
	// Line 91, Address: 0x1022bdc, Func Offset: 0xbc
	// Line 92, Address: 0x1022be8, Func Offset: 0xc8
	// Line 93, Address: 0x1022bf0, Func Offset: 0xd0
	// Line 94, Address: 0x1022bfc, Func Offset: 0xdc
	// Line 95, Address: 0x1022c04, Func Offset: 0xe4
	// Line 96, Address: 0x1022c0c, Func Offset: 0xec
	// Line 97, Address: 0x1022c18, Func Offset: 0xf8
	// Line 98, Address: 0x1022c24, Func Offset: 0x104
	// Line 100, Address: 0x1022c3c, Func Offset: 0x11c
	// Line 101, Address: 0x1022c48, Func Offset: 0x128
	// Line 103, Address: 0x1022c54, Func Offset: 0x134
	// Line 104, Address: 0x1022c5c, Func Offset: 0x13c
	// Line 105, Address: 0x1022c64, Func Offset: 0x144
	// Func End, Address: 0x1022c78, Func Offset: 0x158
}

// 
// Start address: 0x1022c80
void main_check(_anon1* actionwk)
{
	// Line 107, Address: 0x1022c80, Func Offset: 0
	// Line 108, Address: 0x1022c8c, Func Offset: 0xc
	// Line 110, Address: 0x1022cb0, Func Offset: 0x30
	// Line 111, Address: 0x1022cc0, Func Offset: 0x40
	// Line 112, Address: 0x1022cc8, Func Offset: 0x48
	// Line 113, Address: 0x1022cd4, Func Offset: 0x54
	// Line 114, Address: 0x1022cec, Func Offset: 0x6c
	// Line 116, Address: 0x1022d00, Func Offset: 0x80
	// Line 117, Address: 0x1022d0c, Func Offset: 0x8c
	// Line 119, Address: 0x1022d18, Func Offset: 0x98
	// Line 120, Address: 0x1022d24, Func Offset: 0xa4
	// Line 121, Address: 0x1022d30, Func Offset: 0xb0
	// Func End, Address: 0x1022d40, Func Offset: 0xc0
}

// 
// Start address: 0x1022d40
void main_wait(_anon1* actionwk)
{
	short t;
	// Line 123, Address: 0x1022d40, Func Offset: 0
	// Line 126, Address: 0x1022d50, Func Offset: 0x10
	// Line 127, Address: 0x1022d64, Func Offset: 0x24
	// Line 128, Address: 0x1022d74, Func Offset: 0x34
	// Line 129, Address: 0x1022d84, Func Offset: 0x44
	// Line 130, Address: 0x1022da4, Func Offset: 0x64
	// Line 131, Address: 0x1022db0, Func Offset: 0x70
	// Func End, Address: 0x1022dc4, Func Offset: 0x84
}

// 
// Start address: 0x1022dd0
void main_break(_anon1* actionwk)
{
	short d1;
	short d2;
	short d3;
	char ride;
	_anon1* a1;
	// Line 137, Address: 0x1022dd0, Func Offset: 0
	// Line 142, Address: 0x1022dec, Func Offset: 0x1c
	// Line 143, Address: 0x1022df0, Func Offset: 0x20
	// Line 144, Address: 0x1022dfc, Func Offset: 0x2c
	// Line 145, Address: 0x1022e08, Func Offset: 0x38
	// Line 146, Address: 0x1022e30, Func Offset: 0x60
	// Line 147, Address: 0x1022e64, Func Offset: 0x94
	// Line 149, Address: 0x1022e78, Func Offset: 0xa8
	// Line 150, Address: 0x1022e88, Func Offset: 0xb8
	// Line 151, Address: 0x1022e98, Func Offset: 0xc8
	// Line 152, Address: 0x1022ea8, Func Offset: 0xd8
	// Line 153, Address: 0x1022eb8, Func Offset: 0xe8
	// Line 154, Address: 0x1022ec8, Func Offset: 0xf8
	// Line 156, Address: 0x1022ed8, Func Offset: 0x108
	// Line 157, Address: 0x1022ee8, Func Offset: 0x118
	// Line 158, Address: 0x1022ef8, Func Offset: 0x128
	// Line 159, Address: 0x1022f08, Func Offset: 0x138
	// Line 160, Address: 0x1022f14, Func Offset: 0x144
	// Line 161, Address: 0x1022f20, Func Offset: 0x150
	// Line 163, Address: 0x1022f34, Func Offset: 0x164
	// Line 164, Address: 0x1022f44, Func Offset: 0x174
	// Line 165, Address: 0x1022f54, Func Offset: 0x184
	// Line 166, Address: 0x1022f64, Func Offset: 0x194
	// Line 167, Address: 0x1022f74, Func Offset: 0x1a4
	// Line 168, Address: 0x1022f84, Func Offset: 0x1b4
	// Line 170, Address: 0x1022f94, Func Offset: 0x1c4
	// Line 171, Address: 0x1022fa4, Func Offset: 0x1d4
	// Line 172, Address: 0x1022fb4, Func Offset: 0x1e4
	// Line 173, Address: 0x1022fc4, Func Offset: 0x1f4
	// Line 174, Address: 0x1022fcc, Func Offset: 0x1fc
	// Line 179, Address: 0x1022fd8, Func Offset: 0x208
	// Line 181, Address: 0x1023008, Func Offset: 0x238
	// Line 182, Address: 0x1023018, Func Offset: 0x248
	// Line 183, Address: 0x1023028, Func Offset: 0x258
	// Line 185, Address: 0x1023038, Func Offset: 0x268
	// Line 186, Address: 0x1023044, Func Offset: 0x274
	// Line 188, Address: 0x102304c, Func Offset: 0x27c
	// Line 189, Address: 0x102305c, Func Offset: 0x28c
	// Line 190, Address: 0x102306c, Func Offset: 0x29c
	// Line 191, Address: 0x102307c, Func Offset: 0x2ac
	// Line 192, Address: 0x102308c, Func Offset: 0x2bc
	// Line 193, Address: 0x1023098, Func Offset: 0x2c8
	// Line 195, Address: 0x10230b0, Func Offset: 0x2e0
	// Line 196, Address: 0x10230c4, Func Offset: 0x2f4
	// Line 197, Address: 0x10230d0, Func Offset: 0x300
	// Func End, Address: 0x10230f0, Func Offset: 0x320
}

// 
// Start address: 0x10230f0
void main_hitchk(_anon1* actionwk)
{
	// Line 199, Address: 0x10230f0, Func Offset: 0
	// Line 200, Address: 0x10230fc, Func Offset: 0xc
	// Line 201, Address: 0x1023110, Func Offset: 0x20
	// Line 202, Address: 0x102311c, Func Offset: 0x2c
	// Line 203, Address: 0x1023128, Func Offset: 0x38
	// Func End, Address: 0x1023138, Func Offset: 0x48
}

// 
// Start address: 0x1023140
void parts(_anon1* actionwk)
{
	// Line 212, Address: 0x1023140, Func Offset: 0
	// Line 213, Address: 0x102314c, Func Offset: 0xc
	// Line 216, Address: 0x1023180, Func Offset: 0x40
	// Line 217, Address: 0x102318c, Func Offset: 0x4c
	// Line 219, Address: 0x1023194, Func Offset: 0x54
	// Line 220, Address: 0x10231a0, Func Offset: 0x60
	// Line 222, Address: 0x10231a8, Func Offset: 0x68
	// Line 225, Address: 0x10231b4, Func Offset: 0x74
	// Func End, Address: 0x10231c4, Func Offset: 0x84
}

// 
// Start address: 0x10231d0
void parts_ini(_anon1* actionwk)
{
	// Line 227, Address: 0x10231d0, Func Offset: 0
	// Line 228, Address: 0x10231dc, Func Offset: 0xc
	// Line 229, Address: 0x10231ec, Func Offset: 0x1c
	// Line 230, Address: 0x10231f8, Func Offset: 0x28
	// Line 231, Address: 0x1023204, Func Offset: 0x34
	// Line 232, Address: 0x1023210, Func Offset: 0x40
	// Line 233, Address: 0x102321c, Func Offset: 0x4c
	// Line 234, Address: 0x1023228, Func Offset: 0x58
	// Func End, Address: 0x1023238, Func Offset: 0x68
}

// 
// Start address: 0x1023240
void parts_wait(_anon1* actionwk)
{
	short t;
	// Line 236, Address: 0x1023240, Func Offset: 0
	// Line 239, Address: 0x1023250, Func Offset: 0x10
	// Line 240, Address: 0x1023268, Func Offset: 0x28
	// Line 241, Address: 0x1023288, Func Offset: 0x48
	// Line 242, Address: 0x1023294, Func Offset: 0x54
	// Func End, Address: 0x10232a8, Func Offset: 0x68
}

// 
// Start address: 0x10232b0
void parts_fall(_anon1* actionwk)
{
	int d0;
	// Line 244, Address: 0x10232b0, Func Offset: 0
	// Line 247, Address: 0x10232c0, Func Offset: 0x10
	// Line 249, Address: 0x10232e0, Func Offset: 0x30
	// Line 250, Address: 0x10232ec, Func Offset: 0x3c
	// Line 252, Address: 0x10232f4, Func Offset: 0x44
	// Line 253, Address: 0x1023300, Func Offset: 0x50
	// Line 255, Address: 0x1023318, Func Offset: 0x68
	// Line 256, Address: 0x1023320, Func Offset: 0x70
	// Line 257, Address: 0x1023330, Func Offset: 0x80
	// Line 258, Address: 0x102333c, Func Offset: 0x8c
	// Func End, Address: 0x1023350, Func Offset: 0xa0
}

