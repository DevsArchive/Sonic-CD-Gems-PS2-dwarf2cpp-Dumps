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
typedef char type_3[4];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon1 type_6[128];
typedef _anon0* type_7[2];
typedef _anon0* type_8[2];
typedef char* type_9[1];

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

char pchg00[4];
char* pchg[1];
_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0* pat_tobira0[2];
_anon0* pat_tobira1[2];
_anon0* pat_tobira2[2];
_anon1 actwk[128];

void tobira(_anon1* actionwk);
void master(_anon1* actionwk);
void m_init(_anon1* actionwk);
void ini_com(_anon1* actionwk, _anon1* a1, short* d0, short* d1);
void m_closed(_anon1* actionwk);
void ms_end(_anon1* actionwk);
void m_open(_anon1* actionwk);
void m_opend(_anon1* actionwk);
void m_close(_anon1* actionwk);
short ms_hitchk(_anon1* actionwk);
short m_area(_anon1* actionwk, short d4, short d5);
void slave(_anon1* actionwk, short ano);

// 
// Start address: 0x1023cd0
void tobira(_anon1* actionwk)
{
	short a;
	// Line 63, Address: 0x1023cd0, Func Offset: 0
	// Line 65, Address: 0x1023ce0, Func Offset: 0x10
	// Line 66, Address: 0x1023cf0, Func Offset: 0x20
	// Line 68, Address: 0x1023d00, Func Offset: 0x30
	// Line 69, Address: 0x1023d14, Func Offset: 0x44
	// Line 71, Address: 0x1023d1c, Func Offset: 0x4c
	// Line 72, Address: 0x1023d28, Func Offset: 0x58
	// Func End, Address: 0x1023d3c, Func Offset: 0x6c
}

// 
// Start address: 0x1023d40
void master(_anon1* actionwk)
{
	// Line 74, Address: 0x1023d40, Func Offset: 0
	// Line 75, Address: 0x1023d4c, Func Offset: 0xc
	// Line 78, Address: 0x1023d98, Func Offset: 0x58
	// Line 79, Address: 0x1023da4, Func Offset: 0x64
	// Line 81, Address: 0x1023dac, Func Offset: 0x6c
	// Line 82, Address: 0x1023db8, Func Offset: 0x78
	// Line 84, Address: 0x1023dc0, Func Offset: 0x80
	// Line 85, Address: 0x1023dcc, Func Offset: 0x8c
	// Line 87, Address: 0x1023dd4, Func Offset: 0x94
	// Line 88, Address: 0x1023de0, Func Offset: 0xa0
	// Line 90, Address: 0x1023de8, Func Offset: 0xa8
	// Line 93, Address: 0x1023df4, Func Offset: 0xb4
	// Func End, Address: 0x1023e04, Func Offset: 0xc4
}

// 
// Start address: 0x1023e10
void m_init(_anon1* actionwk)
{
	short d0;
	short d1;
	_anon1* a1;
	// Line 95, Address: 0x1023e10, Func Offset: 0
	// Line 99, Address: 0x1023e1c, Func Offset: 0xc
	// Line 100, Address: 0x1023e2c, Func Offset: 0x1c
	// Line 103, Address: 0x1023e50, Func Offset: 0x40
	// Line 104, Address: 0x1023e78, Func Offset: 0x68
	// Line 105, Address: 0x1023ea4, Func Offset: 0x94
	// Line 106, Address: 0x1023ed0, Func Offset: 0xc0
	// Line 108, Address: 0x1023ee8, Func Offset: 0xd8
	// Line 109, Address: 0x1023ef4, Func Offset: 0xe4
	// Line 111, Address: 0x1023efc, Func Offset: 0xec
	// Line 112, Address: 0x1023f0c, Func Offset: 0xfc
	// Line 113, Address: 0x1023f1c, Func Offset: 0x10c
	// Line 114, Address: 0x1023f2c, Func Offset: 0x11c
	// Line 115, Address: 0x1023f60, Func Offset: 0x150
	// Line 116, Address: 0x1023f94, Func Offset: 0x184
	// Line 117, Address: 0x1023fa4, Func Offset: 0x194
	// Line 118, Address: 0x1023fbc, Func Offset: 0x1ac
	// Line 119, Address: 0x1023fd0, Func Offset: 0x1c0
	// Line 120, Address: 0x1023fe4, Func Offset: 0x1d4
	// Line 121, Address: 0x1023ff8, Func Offset: 0x1e8
	// Line 122, Address: 0x1024000, Func Offset: 0x1f0
	// Line 123, Address: 0x1024018, Func Offset: 0x208
	// Line 124, Address: 0x102402c, Func Offset: 0x21c
	// Line 125, Address: 0x1024040, Func Offset: 0x230
	// Line 126, Address: 0x1024054, Func Offset: 0x244
	// Func End, Address: 0x1024064, Func Offset: 0x254
}

// 
// Start address: 0x1024070
void ini_com(_anon1* actionwk, _anon1* a1, short* d0, short* d1)
{
	// Line 128, Address: 0x1024070, Func Offset: 0
	// Line 129, Address: 0x1024084, Func Offset: 0x14
	// Line 130, Address: 0x1024094, Func Offset: 0x24
	// Line 131, Address: 0x10240a0, Func Offset: 0x30
	// Line 132, Address: 0x10240ac, Func Offset: 0x3c
	// Line 133, Address: 0x10240b8, Func Offset: 0x48
	// Line 134, Address: 0x10240c4, Func Offset: 0x54
	// Line 135, Address: 0x10240d4, Func Offset: 0x64
	// Line 136, Address: 0x10240e4, Func Offset: 0x74
	// Line 137, Address: 0x10240f4, Func Offset: 0x84
	// Line 138, Address: 0x1024100, Func Offset: 0x90
	// Line 139, Address: 0x102410c, Func Offset: 0x9c
	// Func End, Address: 0x1024118, Func Offset: 0xa8
}

// 
// Start address: 0x1024120
void m_closed(_anon1* actionwk)
{
	short d0;
	short d4;
	short d5;
	// Line 141, Address: 0x1024120, Func Offset: 0
	// Line 144, Address: 0x1024138, Func Offset: 0x18
	// Line 145, Address: 0x1024144, Func Offset: 0x24
	// Line 147, Address: 0x1024158, Func Offset: 0x38
	// Line 148, Address: 0x1024160, Func Offset: 0x40
	// Line 151, Address: 0x1024168, Func Offset: 0x48
	// Line 152, Address: 0x1024180, Func Offset: 0x60
	// Line 153, Address: 0x1024190, Func Offset: 0x70
	// Line 154, Address: 0x102419c, Func Offset: 0x7c
	// Line 155, Address: 0x10241a8, Func Offset: 0x88
	// Line 157, Address: 0x10241bc, Func Offset: 0x9c
	// Line 158, Address: 0x10241c8, Func Offset: 0xa8
	// Line 160, Address: 0x10241d4, Func Offset: 0xb4
	// Line 163, Address: 0x10241f8, Func Offset: 0xd8
	// Line 165, Address: 0x1024208, Func Offset: 0xe8
	// Line 166, Address: 0x1024214, Func Offset: 0xf4
	// Func End, Address: 0x1024230, Func Offset: 0x110
}

// 
// Start address: 0x1024230
void ms_end(_anon1* actionwk)
{
	short ano;
	// Line 168, Address: 0x1024230, Func Offset: 0
	// Line 171, Address: 0x1024240, Func Offset: 0x10
	// Line 172, Address: 0x1024254, Func Offset: 0x24
	// Line 173, Address: 0x1024264, Func Offset: 0x34
	// Line 175, Address: 0x1024290, Func Offset: 0x60
	// Line 176, Address: 0x10242b8, Func Offset: 0x88
	// Line 177, Address: 0x10242c4, Func Offset: 0x94
	// Line 178, Address: 0x10242d0, Func Offset: 0xa0
	// Func End, Address: 0x10242e4, Func Offset: 0xb4
}

// 
// Start address: 0x10242f0
void m_open(_anon1* actionwk)
{
	short ano;
	// Line 180, Address: 0x10242f0, Func Offset: 0
	// Line 183, Address: 0x1024300, Func Offset: 0x10
	// Line 185, Address: 0x102430c, Func Offset: 0x1c
	// Line 186, Address: 0x102431c, Func Offset: 0x2c
	// Line 187, Address: 0x102432c, Func Offset: 0x3c
	// Line 188, Address: 0x1024358, Func Offset: 0x68
	// Line 190, Address: 0x1024384, Func Offset: 0x94
	// Line 191, Address: 0x1024394, Func Offset: 0xa4
	// Line 192, Address: 0x10243a4, Func Offset: 0xb4
	// Line 195, Address: 0x10243ec, Func Offset: 0xfc
	// Line 196, Address: 0x10243f8, Func Offset: 0x108
	// Func End, Address: 0x102440c, Func Offset: 0x11c
}

// 
// Start address: 0x1024410
void m_opend(_anon1* actionwk)
{
	short d0;
	short d4;
	short d5;
	// Line 198, Address: 0x1024410, Func Offset: 0
	// Line 201, Address: 0x1024428, Func Offset: 0x18
	// Line 203, Address: 0x1024434, Func Offset: 0x24
	// Line 204, Address: 0x102444c, Func Offset: 0x3c
	// Line 206, Address: 0x102445c, Func Offset: 0x4c
	// Line 207, Address: 0x1024468, Func Offset: 0x58
	// Line 208, Address: 0x1024474, Func Offset: 0x64
	// Line 210, Address: 0x1024488, Func Offset: 0x78
	// Line 211, Address: 0x1024494, Func Offset: 0x84
	// Line 213, Address: 0x10244a0, Func Offset: 0x90
	// Line 216, Address: 0x10244d4, Func Offset: 0xc4
	// Line 217, Address: 0x10244e0, Func Offset: 0xd0
	// Func End, Address: 0x10244fc, Func Offset: 0xec
}

// 
// Start address: 0x1024500
void m_close(_anon1* actionwk)
{
	short ano;
	// Line 219, Address: 0x1024500, Func Offset: 0
	// Line 222, Address: 0x1024510, Func Offset: 0x10
	// Line 224, Address: 0x102451c, Func Offset: 0x1c
	// Line 225, Address: 0x102452c, Func Offset: 0x2c
	// Line 226, Address: 0x102453c, Func Offset: 0x3c
	// Line 228, Address: 0x1024568, Func Offset: 0x68
	// Line 230, Address: 0x1024594, Func Offset: 0x94
	// Line 231, Address: 0x10245a0, Func Offset: 0xa0
	// Line 232, Address: 0x10245b0, Func Offset: 0xb0
	// Line 234, Address: 0x10245f8, Func Offset: 0xf8
	// Line 235, Address: 0x1024604, Func Offset: 0x104
	// Func End, Address: 0x1024618, Func Offset: 0x118
}

// 
// Start address: 0x1024620
short ms_hitchk(_anon1* actionwk)
{
	short ano;
	// Line 237, Address: 0x1024620, Func Offset: 0
	// Line 240, Address: 0x1024630, Func Offset: 0x10
	// Line 241, Address: 0x1024640, Func Offset: 0x20
	// Line 242, Address: 0x1024670, Func Offset: 0x50
	// Line 243, Address: 0x1024684, Func Offset: 0x64
	// Func End, Address: 0x1024698, Func Offset: 0x78
}

// 
// Start address: 0x10246a0
short m_area(_anon1* actionwk, short d4, short d5)
{
	short d0;
	// Line 246, Address: 0x10246a0, Func Offset: 0
	// Line 249, Address: 0x10246b4, Func Offset: 0x14
	// Line 250, Address: 0x10246f8, Func Offset: 0x58
	// Line 251, Address: 0x1024724, Func Offset: 0x84
	// Line 253, Address: 0x102475c, Func Offset: 0xbc
	// Line 254, Address: 0x102477c, Func Offset: 0xdc
	// Line 255, Address: 0x1024780, Func Offset: 0xe0
	// Func End, Address: 0x1024790, Func Offset: 0xf0
}

// 
// Start address: 0x1024790
void slave(_anon1* actionwk, short ano)
{
	// Line 257, Address: 0x1024790, Func Offset: 0
	// Line 258, Address: 0x10247a0, Func Offset: 0x10
	// Line 260, Address: 0x10247d8, Func Offset: 0x48
	// Line 262, Address: 0x10247e4, Func Offset: 0x54
	// Func End, Address: 0x10247f4, Func Offset: 0x64
}

