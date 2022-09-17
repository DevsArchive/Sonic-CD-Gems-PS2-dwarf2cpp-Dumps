typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);

typedef _anon7 type_0[20];
typedef short type_1[8];
typedef _anon7 type_2[0];
typedef void(*type_4)(_anon1*)[3];
typedef int type_5[24];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef _anon0* type_8[2];
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

_anon0 pat00;
_anon0 pat01;
_anon0* pat_kowasi4[2];
void(*kowasi4_act_tbl)(_anon1*)[3];
_anon1 actwk[128];

void kowasi4(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_wait(_anon1* pActwk);
void m_down(_anon1* pActwk);
void m_make(_anon1* pActwk);

// 
// Start address: 0x102a820
void kowasi4(_anon1* pActwk)
{
	// Line 94, Address: 0x102a820, Func Offset: 0
	// Line 95, Address: 0x102a82c, Func Offset: 0xc
	// Line 96, Address: 0x102a870, Func Offset: 0x50
	// Func End, Address: 0x102a880, Func Offset: 0x60
}

// 
// Start address: 0x102a880
void m_init(_anon1* pActwk)
{
	// Line 102, Address: 0x102a880, Func Offset: 0
	// Line 103, Address: 0x102a88c, Func Offset: 0xc
	// Line 104, Address: 0x102a89c, Func Offset: 0x1c
	// Line 105, Address: 0x102a8ac, Func Offset: 0x2c
	// Line 106, Address: 0x102a8b8, Func Offset: 0x38
	// Line 107, Address: 0x102a8dc, Func Offset: 0x5c
	// Line 108, Address: 0x102a8e8, Func Offset: 0x68
	// Line 109, Address: 0x102a8f4, Func Offset: 0x74
	// Line 111, Address: 0x102a904, Func Offset: 0x84
	// Line 112, Address: 0x102a910, Func Offset: 0x90
	// Func End, Address: 0x102a920, Func Offset: 0xa0
}

// 
// Start address: 0x102a920
void m_wait(_anon1* pActwk)
{
	// Line 118, Address: 0x102a920, Func Offset: 0
	// Line 119, Address: 0x102a92c, Func Offset: 0xc
	// Line 120, Address: 0x102a93c, Func Offset: 0x1c
	// Line 121, Address: 0x102a950, Func Offset: 0x30
	// Line 122, Address: 0x102a960, Func Offset: 0x40
	// Line 123, Address: 0x102a970, Func Offset: 0x50
	// Line 124, Address: 0x102a980, Func Offset: 0x60
	// Line 125, Address: 0x102a99c, Func Offset: 0x7c
	// Line 129, Address: 0x102a9b0, Func Offset: 0x90
	// Line 130, Address: 0x102a9bc, Func Offset: 0x9c
	// Line 134, Address: 0x102a9c4, Func Offset: 0xa4
	// Line 135, Address: 0x102a9d8, Func Offset: 0xb8
	// Line 136, Address: 0x102a9e4, Func Offset: 0xc4
	// Line 137, Address: 0x102a9f0, Func Offset: 0xd0
	// Func End, Address: 0x102aa00, Func Offset: 0xe0
}

// 
// Start address: 0x102aa00
void m_down(_anon1* pActwk)
{
	// Line 143, Address: 0x102aa00, Func Offset: 0
	// Line 144, Address: 0x102aa0c, Func Offset: 0xc
	// Line 145, Address: 0x102aa24, Func Offset: 0x24
	// Line 146, Address: 0x102aa40, Func Offset: 0x40
	// Line 147, Address: 0x102aa5c, Func Offset: 0x5c
	// Line 149, Address: 0x102aa8c, Func Offset: 0x8c
	// Line 150, Address: 0x102aa98, Func Offset: 0x98
	// Line 151, Address: 0x102aaa0, Func Offset: 0xa0
	// Line 153, Address: 0x102aaac, Func Offset: 0xac
	// Func End, Address: 0x102aabc, Func Offset: 0xbc
}

// 
// Start address: 0x102aac0
void m_make(_anon1* pActwk)
{
	short tbl0dposi[8];
	int tbl0speed[24];
	short* pPosi;
	short spdwk1;
	short spdwk2;
	short yspdwk;
	int* pSpeed;
	int i;
	_anon1* pNewact;
	// Line 159, Address: 0x102aac0, Func Offset: 0
	// Line 160, Address: 0x102aae4, Func Offset: 0x24
	// Line 166, Address: 0x102ab18, Func Offset: 0x58
	// Line 181, Address: 0x102ab4c, Func Offset: 0x8c
	// Line 183, Address: 0x102ab58, Func Offset: 0x98
	// Line 184, Address: 0x102ab5c, Func Offset: 0x9c
	// Line 185, Address: 0x102ab60, Func Offset: 0xa0
	// Line 186, Address: 0x102ab78, Func Offset: 0xb8
	// Line 187, Address: 0x102ab88, Func Offset: 0xc8
	// Line 191, Address: 0x102ab94, Func Offset: 0xd4
	// Line 192, Address: 0x102abb4, Func Offset: 0xf4
	// Line 196, Address: 0x102abc0, Func Offset: 0x100
	// Line 197, Address: 0x102abdc, Func Offset: 0x11c
	// Line 198, Address: 0x102abe0, Func Offset: 0x120
	// Line 199, Address: 0x102abf0, Func Offset: 0x130
	// Line 204, Address: 0x102abf4, Func Offset: 0x134
	// Line 205, Address: 0x102ac1c, Func Offset: 0x15c
	// Line 206, Address: 0x102ac24, Func Offset: 0x164
	// Line 207, Address: 0x102ac30, Func Offset: 0x170
	// Line 208, Address: 0x102ac38, Func Offset: 0x178
	// Line 211, Address: 0x102ac4c, Func Offset: 0x18c
	// Line 212, Address: 0x102ac5c, Func Offset: 0x19c
	// Line 213, Address: 0x102ac6c, Func Offset: 0x1ac
	// Line 214, Address: 0x102ac7c, Func Offset: 0x1bc
	// Line 215, Address: 0x102ac8c, Func Offset: 0x1cc
	// Line 216, Address: 0x102ac9c, Func Offset: 0x1dc
	// Line 217, Address: 0x102acac, Func Offset: 0x1ec
	// Line 218, Address: 0x102acbc, Func Offset: 0x1fc
	// Line 222, Address: 0x102accc, Func Offset: 0x20c
	// Line 223, Address: 0x102acd8, Func Offset: 0x218
	// Line 224, Address: 0x102acfc, Func Offset: 0x23c
	// Line 225, Address: 0x102ad18, Func Offset: 0x258
	// Line 226, Address: 0x102ad34, Func Offset: 0x274
	// Line 227, Address: 0x102ad4c, Func Offset: 0x28c
	// Line 228, Address: 0x102ad64, Func Offset: 0x2a4
	// Line 231, Address: 0x102ad74, Func Offset: 0x2b4
	// Line 232, Address: 0x102ad80, Func Offset: 0x2c0
	// Func End, Address: 0x102ada8, Func Offset: 0x2e8
}

