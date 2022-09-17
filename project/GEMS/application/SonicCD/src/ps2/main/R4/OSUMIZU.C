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
typedef _anon0* type_2[4];
typedef unsigned char* type_3[1];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon0* type_6[1];
typedef unsigned char type_7[6];
typedef _anon1 type_8[128];

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

_anon0 osumizu_pat0;
_anon0 osumizu_pat1;
_anon0 osumizu_pat2;
_anon0 osumizu_pat3;
_anon0 osumizu_pat4;
_anon0* pat_osumizu[1];
_anon0* pat_osumizu1[4];
unsigned char osumizu_chg0[6];
unsigned char* osumizu_chg[1];
_anon1 actwk[128];

void osumizu(_anon1* pActwk);

// 
// Start address: 0x102c980
void osumizu(_anon1* pActwk)
{
	_anon1* pNewactwk;
	// Line 91, Address: 0x102c980, Func Offset: 0
	// Line 94, Address: 0x102c98c, Func Offset: 0xc
	// Line 96, Address: 0x102c9a8, Func Offset: 0x28
	// Line 98, Address: 0x102c9b8, Func Offset: 0x38
	// Line 100, Address: 0x102c9c8, Func Offset: 0x48
	// Line 101, Address: 0x102c9d8, Func Offset: 0x58
	// Line 102, Address: 0x102c9e4, Func Offset: 0x64
	// Line 103, Address: 0x102c9f0, Func Offset: 0x70
	// Line 104, Address: 0x102c9fc, Func Offset: 0x7c
	// Line 105, Address: 0x102ca08, Func Offset: 0x88
	// Line 107, Address: 0x102ca18, Func Offset: 0x98
	// Line 108, Address: 0x102ca28, Func Offset: 0xa8
	// Line 109, Address: 0x102ca38, Func Offset: 0xb8
	// Line 111, Address: 0x102ca48, Func Offset: 0xc8
	// Line 112, Address: 0x102ca54, Func Offset: 0xd4
	// Line 113, Address: 0x102ca60, Func Offset: 0xe0
	// Line 115, Address: 0x102ca68, Func Offset: 0xe8
	// Line 116, Address: 0x102ca74, Func Offset: 0xf4
	// Line 118, Address: 0x102ca80, Func Offset: 0x100
	// Line 121, Address: 0x102ca98, Func Offset: 0x118
	// Line 122, Address: 0x102cac0, Func Offset: 0x140
	// Line 124, Address: 0x102cacc, Func Offset: 0x14c
	// Line 126, Address: 0x102cae0, Func Offset: 0x160
	// Line 127, Address: 0x102caf0, Func Offset: 0x170
	// Line 128, Address: 0x102cafc, Func Offset: 0x17c
	// Line 129, Address: 0x102cb0c, Func Offset: 0x18c
	// Line 130, Address: 0x102cb30, Func Offset: 0x1b0
	// Line 131, Address: 0x102cb40, Func Offset: 0x1c0
	// Line 132, Address: 0x102cb50, Func Offset: 0x1d0
	// Line 133, Address: 0x102cb6c, Func Offset: 0x1ec
	// Line 134, Address: 0x102cb78, Func Offset: 0x1f8
	// Line 135, Address: 0x102cb84, Func Offset: 0x204
	// Line 136, Address: 0x102cb90, Func Offset: 0x210
	// Line 137, Address: 0x102cba0, Func Offset: 0x220
	// Line 140, Address: 0x102cbb0, Func Offset: 0x230
	// Line 141, Address: 0x102cbbc, Func Offset: 0x23c
	// Line 142, Address: 0x102cbc8, Func Offset: 0x248
	// Line 146, Address: 0x102cbd0, Func Offset: 0x250
	// Line 147, Address: 0x102cc0c, Func Offset: 0x28c
	// Line 148, Address: 0x102cc48, Func Offset: 0x2c8
	// Line 151, Address: 0x102cc64, Func Offset: 0x2e4
	// Line 153, Address: 0x102cc7c, Func Offset: 0x2fc
	// Line 154, Address: 0x102cc90, Func Offset: 0x310
	// Line 155, Address: 0x102cc9c, Func Offset: 0x31c
	// Line 157, Address: 0x102cca8, Func Offset: 0x328
	// Func End, Address: 0x102ccb8, Func Offset: 0x338
}

