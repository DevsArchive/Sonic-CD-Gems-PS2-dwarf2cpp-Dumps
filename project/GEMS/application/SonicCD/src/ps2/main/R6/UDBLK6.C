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
typedef _anon0* type_2[1];
typedef short type_3[6];
typedef short type_4[6];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];

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

_anon0 udblk6pat0;
_anon0* udblk6pat[1];
_anon1 actwk[128];

void udblk6(_anon1* actionwk);
void udblk6_ridechk(_anon1* actionwk);
void udblk6_init(_anon1* actionwk);
void udblk6_chk1(_anon1* actionwk);
void udblk6_mov1(_anon1* actionwk);
void udblk6_chk2(_anon1* actionwk);
void udblk6_mov2(_anon1* actionwk);
void movecnt(_anon1* actionwk);

// 
// Start address: 0x101f850
void udblk6(_anon1* actionwk)
{
	// Line 39, Address: 0x101f850, Func Offset: 0
	// Line 40, Address: 0x101f85c, Func Offset: 0xc
	// Line 43, Address: 0x101f8a8, Func Offset: 0x58
	// Line 45, Address: 0x101f8b4, Func Offset: 0x64
	// Line 46, Address: 0x101f8c0, Func Offset: 0x70
	// Line 48, Address: 0x101f8c8, Func Offset: 0x78
	// Line 49, Address: 0x101f8d4, Func Offset: 0x84
	// Line 51, Address: 0x101f8dc, Func Offset: 0x8c
	// Line 52, Address: 0x101f8e8, Func Offset: 0x98
	// Line 54, Address: 0x101f8f0, Func Offset: 0xa0
	// Line 57, Address: 0x101f8fc, Func Offset: 0xac
	// Line 58, Address: 0x101f908, Func Offset: 0xb8
	// Line 59, Address: 0x101f914, Func Offset: 0xc4
	// Func End, Address: 0x101f924, Func Offset: 0xd4
}

// 
// Start address: 0x101f930
void udblk6_ridechk(_anon1* actionwk)
{
	// Line 61, Address: 0x101f930, Func Offset: 0
	// Line 62, Address: 0x101f93c, Func Offset: 0xc
	// Line 63, Address: 0x101f950, Func Offset: 0x20
	// Func End, Address: 0x101f960, Func Offset: 0x30
}

// 
// Start address: 0x101f960
void udblk6_init(_anon1* actionwk)
{
	// Line 66, Address: 0x101f960, Func Offset: 0
	// Line 67, Address: 0x101f968, Func Offset: 0x8
	// Line 68, Address: 0x101f978, Func Offset: 0x18
	// Line 69, Address: 0x101f988, Func Offset: 0x28
	// Line 70, Address: 0x101f994, Func Offset: 0x34
	// Line 71, Address: 0x101f9a0, Func Offset: 0x40
	// Line 72, Address: 0x101f9b0, Func Offset: 0x50
	// Line 73, Address: 0x101f9bc, Func Offset: 0x5c
	// Line 74, Address: 0x101f9c8, Func Offset: 0x68
	// Line 75, Address: 0x101f9d8, Func Offset: 0x78
	// Func End, Address: 0x101f9e4, Func Offset: 0x84
}

// 
// Start address: 0x101f9f0
void udblk6_chk1(_anon1* actionwk)
{
	short d0;
	// Line 78, Address: 0x101f9f0, Func Offset: 0
	// Line 81, Address: 0x101fa00, Func Offset: 0x10
	// Line 82, Address: 0x101fa34, Func Offset: 0x44
	// Line 84, Address: 0x101fa44, Func Offset: 0x54
	// Line 87, Address: 0x101fa60, Func Offset: 0x70
	// Line 89, Address: 0x101fa74, Func Offset: 0x84
	// Line 90, Address: 0x101faa8, Func Offset: 0xb8
	// Line 92, Address: 0x101fab8, Func Offset: 0xc8
	// Line 94, Address: 0x101facc, Func Offset: 0xdc
	// Line 95, Address: 0x101fad4, Func Offset: 0xe4
	// Line 96, Address: 0x101fadc, Func Offset: 0xec
	// Line 101, Address: 0x101faec, Func Offset: 0xfc
	// Line 102, Address: 0x101faf8, Func Offset: 0x108
	// Func End, Address: 0x101fb0c, Func Offset: 0x11c
}

// 
// Start address: 0x101fb10
void udblk6_mov1(_anon1* actionwk)
{
	// Line 105, Address: 0x101fb10, Func Offset: 0
	// Line 106, Address: 0x101fb1c, Func Offset: 0xc
	// Line 107, Address: 0x101fb24, Func Offset: 0x14
	// Line 108, Address: 0x101fb30, Func Offset: 0x20
	// Line 109, Address: 0x101fb48, Func Offset: 0x38
	// Line 111, Address: 0x101fb58, Func Offset: 0x48
	// Line 112, Address: 0x101fb64, Func Offset: 0x54
	// Func End, Address: 0x101fb74, Func Offset: 0x64
}

// 
// Start address: 0x101fb80
void udblk6_chk2(_anon1* actionwk)
{
	short d0;
	// Line 115, Address: 0x101fb80, Func Offset: 0
	// Line 118, Address: 0x101fb90, Func Offset: 0x10
	// Line 119, Address: 0x101fbc4, Func Offset: 0x44
	// Line 121, Address: 0x101fbd4, Func Offset: 0x54
	// Line 124, Address: 0x101fbf0, Func Offset: 0x70
	// Line 126, Address: 0x101fc04, Func Offset: 0x84
	// Line 127, Address: 0x101fc38, Func Offset: 0xb8
	// Line 129, Address: 0x101fc48, Func Offset: 0xc8
	// Line 131, Address: 0x101fc5c, Func Offset: 0xdc
	// Line 132, Address: 0x101fc64, Func Offset: 0xe4
	// Line 137, Address: 0x101fc74, Func Offset: 0xf4
	// Line 138, Address: 0x101fc80, Func Offset: 0x100
	// Func End, Address: 0x101fc94, Func Offset: 0x114
}

// 
// Start address: 0x101fca0
void udblk6_mov2(_anon1* actionwk)
{
	// Line 141, Address: 0x101fca0, Func Offset: 0
	// Line 142, Address: 0x101fcac, Func Offset: 0xc
	// Line 143, Address: 0x101fcb8, Func Offset: 0x18
	// Line 144, Address: 0x101fcc4, Func Offset: 0x24
	// Line 145, Address: 0x101fcdc, Func Offset: 0x3c
	// Line 147, Address: 0x101fce8, Func Offset: 0x48
	// Line 148, Address: 0x101fcf4, Func Offset: 0x54
	// Func End, Address: 0x101fd04, Func Offset: 0x64
}

// 
// Start address: 0x101fd10
void movecnt(_anon1* actionwk)
{
	short mvtbl1[6];
	short mvtbl2[6];
	short* a2;
	short d0;
	// Line 151, Address: 0x101fd10, Func Offset: 0
	// Line 153, Address: 0x101fd20, Func Offset: 0x10
	// Line 160, Address: 0x101fd54, Func Offset: 0x44
	// Line 170, Address: 0x101fd88, Func Offset: 0x78
	// Line 171, Address: 0x101fd8c, Func Offset: 0x7c
	// Line 173, Address: 0x101fda4, Func Offset: 0x94
	// Line 175, Address: 0x101fdb8, Func Offset: 0xa8
	// Line 176, Address: 0x101fddc, Func Offset: 0xcc
	// Line 177, Address: 0x101fe04, Func Offset: 0xf4
	// Line 178, Address: 0x101fe24, Func Offset: 0x114
	// Line 179, Address: 0x101fe44, Func Offset: 0x134
	// Line 183, Address: 0x101fe4c, Func Offset: 0x13c
	// Line 184, Address: 0x101fe70, Func Offset: 0x160
	// Line 186, Address: 0x101fe88, Func Offset: 0x178
	// Line 187, Address: 0x101fea8, Func Offset: 0x198
	// Line 189, Address: 0x101feb8, Func Offset: 0x1a8
	// Func End, Address: 0x101fecc, Func Offset: 0x1bc
}

