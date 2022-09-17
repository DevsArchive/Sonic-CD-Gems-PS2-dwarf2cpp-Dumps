typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);
typedef void(*type_10)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[4];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef unsigned char type_5[12];
typedef void(*type_7)(_anon1*)[4];
typedef _anon1 type_8[128];
typedef unsigned char type_9[766];
typedef void(*type_11)(_anon1*)[2];

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

_anon0 harir5_pat1;
_anon0 harir5_pat2;
_anon0 harir5_pat3;
_anon0 harir5_pat4;
_anon0* harir5pat[4];
unsigned char flagwork[766];
unsigned char time_flag;
_anon2 scra_h_posit;
_anon1 actwk[128];
unsigned char plpower_m;
unsigned char plpower_a;

void harir5(_anon1* pActwk);
void harir3_init(_anon1* pActwk);
void harir3_move(_anon1* pActwk);
void harir3_kind(_anon1* pActwk);
void harir3_ymv1(_anon1* pActwk);
void harir3_ymv2(_anon1* pActwk);
void harir3_xmv1(_anon1* pActwk);
void harir3_xmv2(_anon1* pActwk);
void harir3_sub(_anon1* pActwk);

// 
// Start address: 0x1023fa0
void harir5(_anon1* pActwk)
{
	_anon1* pRideactwk;
	void(*harir3_acttbl)(_anon1*)[2];
	// Line 94, Address: 0x1023fa0, Func Offset: 0
	// Line 97, Address: 0x1023fb0, Func Offset: 0x10
	// Line 102, Address: 0x1023fcc, Func Offset: 0x2c
	// Line 103, Address: 0x1024008, Func Offset: 0x68
	// Line 105, Address: 0x1024014, Func Offset: 0x74
	// Line 106, Address: 0x1024024, Func Offset: 0x84
	// Line 107, Address: 0x102404c, Func Offset: 0xac
	// Line 108, Address: 0x102408c, Func Offset: 0xec
	// Line 111, Address: 0x10240cc, Func Offset: 0x12c
	// Line 114, Address: 0x1024114, Func Offset: 0x174
	// Line 115, Address: 0x1024124, Func Offset: 0x184
	// Line 117, Address: 0x1024160, Func Offset: 0x1c0
	// Line 119, Address: 0x102416c, Func Offset: 0x1cc
	// Func End, Address: 0x1024180, Func Offset: 0x1e0
}

// 
// Start address: 0x1024180
void harir3_init(_anon1* pActwk)
{
	unsigned char bD0;
	unsigned char harir3sztbl[12];
	// Line 128, Address: 0x1024180, Func Offset: 0
	// Line 132, Address: 0x1024190, Func Offset: 0x10
	// Line 139, Address: 0x10241c4, Func Offset: 0x44
	// Line 140, Address: 0x10241d4, Func Offset: 0x54
	// Line 141, Address: 0x10241e4, Func Offset: 0x64
	// Line 142, Address: 0x10241f0, Func Offset: 0x70
	// Line 143, Address: 0x10241fc, Func Offset: 0x7c
	// Line 145, Address: 0x102420c, Func Offset: 0x8c
	// Line 146, Address: 0x102421c, Func Offset: 0x9c
	// Line 148, Address: 0x102422c, Func Offset: 0xac
	// Line 149, Address: 0x1024248, Func Offset: 0xc8
	// Line 150, Address: 0x1024250, Func Offset: 0xd0
	// Line 151, Address: 0x102426c, Func Offset: 0xec
	// Line 152, Address: 0x102428c, Func Offset: 0x10c
	// Line 154, Address: 0x10242ac, Func Offset: 0x12c
	// Line 155, Address: 0x10242b8, Func Offset: 0x138
	// Func End, Address: 0x10242cc, Func Offset: 0x14c
}

// 
// Start address: 0x10242d0
void harir3_move(_anon1* pActwk)
{
	// Line 164, Address: 0x10242d0, Func Offset: 0
	// Line 165, Address: 0x10242dc, Func Offset: 0xc
	// Line 168, Address: 0x10242e8, Func Offset: 0x18
	// Line 169, Address: 0x10242f8, Func Offset: 0x28
	// Line 170, Address: 0x102430c, Func Offset: 0x3c
	// Line 175, Address: 0x1024314, Func Offset: 0x44
	// Line 176, Address: 0x1024330, Func Offset: 0x60
	// Line 177, Address: 0x1024348, Func Offset: 0x78
	// Line 178, Address: 0x1024358, Func Offset: 0x88
	// Line 179, Address: 0x1024368, Func Offset: 0x98
	// Line 180, Address: 0x1024380, Func Offset: 0xb0
	// Line 181, Address: 0x1024390, Func Offset: 0xc0
	// Line 182, Address: 0x10243b8, Func Offset: 0xe8
	// Line 191, Address: 0x10243cc, Func Offset: 0xfc
	// Func End, Address: 0x10243dc, Func Offset: 0x10c
}

// 
// Start address: 0x10243e0
void harir3_kind(_anon1* pActwk)
{
	void(*harir3_kndtbl)(_anon1*)[4];
	// Line 200, Address: 0x10243e0, Func Offset: 0
	// Line 201, Address: 0x10243ec, Func Offset: 0xc
	// Line 208, Address: 0x1024418, Func Offset: 0x38
	// Line 209, Address: 0x1024434, Func Offset: 0x54
	// Line 210, Address: 0x1024460, Func Offset: 0x80
	// Func End, Address: 0x1024470, Func Offset: 0x90
}

// 
// Start address: 0x1024470
void harir3_ymv1(_anon1* pActwk)
{
	// Line 219, Address: 0x1024470, Func Offset: 0
	// Line 220, Address: 0x102447c, Func Offset: 0xc
	// Line 221, Address: 0x1024488, Func Offset: 0x18
	// Line 222, Address: 0x10244c8, Func Offset: 0x58
	// Func End, Address: 0x10244d8, Func Offset: 0x68
}

// 
// Start address: 0x10244e0
void harir3_ymv2(_anon1* pActwk)
{
	// Line 231, Address: 0x10244e0, Func Offset: 0
	// Line 232, Address: 0x10244ec, Func Offset: 0xc
	// Line 233, Address: 0x10244f8, Func Offset: 0x18
	// Line 234, Address: 0x102453c, Func Offset: 0x5c
	// Func End, Address: 0x102454c, Func Offset: 0x6c
}

// 
// Start address: 0x1024550
void harir3_xmv1(_anon1* pActwk)
{
	// Line 242, Address: 0x1024550, Func Offset: 0
	// Line 243, Address: 0x102455c, Func Offset: 0xc
	// Line 244, Address: 0x1024568, Func Offset: 0x18
	// Line 245, Address: 0x10245ac, Func Offset: 0x5c
	// Func End, Address: 0x10245bc, Func Offset: 0x6c
}

// 
// Start address: 0x10245c0
void harir3_xmv2(_anon1* pActwk)
{
	// Line 253, Address: 0x10245c0, Func Offset: 0
	// Line 254, Address: 0x10245cc, Func Offset: 0xc
	// Line 255, Address: 0x10245d8, Func Offset: 0x18
	// Line 256, Address: 0x1024618, Func Offset: 0x58
	// Func End, Address: 0x1024628, Func Offset: 0x68
}

// 
// Start address: 0x1024630
void harir3_sub(_anon1* pActwk)
{
	// Line 265, Address: 0x1024630, Func Offset: 0
	// Line 266, Address: 0x1024638, Func Offset: 0x8
	// Line 267, Address: 0x1024648, Func Offset: 0x18
	// Line 270, Address: 0x1024664, Func Offset: 0x34
	// Line 271, Address: 0x1024674, Func Offset: 0x44
	// Line 272, Address: 0x102468c, Func Offset: 0x5c
	// Line 273, Address: 0x102469c, Func Offset: 0x6c
	// Line 275, Address: 0x10246a4, Func Offset: 0x74
	// Line 276, Address: 0x10246ac, Func Offset: 0x7c
	// Line 277, Address: 0x10246b4, Func Offset: 0x84
	// Line 278, Address: 0x10246c0, Func Offset: 0x90
	// Line 282, Address: 0x10246c8, Func Offset: 0x98
	// Line 283, Address: 0x10246d8, Func Offset: 0xa8
	// Line 284, Address: 0x10246f0, Func Offset: 0xc0
	// Line 285, Address: 0x10246fc, Func Offset: 0xcc
	// Line 286, Address: 0x1024708, Func Offset: 0xd8
	// Line 289, Address: 0x1024714, Func Offset: 0xe4
	// Func End, Address: 0x1024720, Func Offset: 0xf0
}

