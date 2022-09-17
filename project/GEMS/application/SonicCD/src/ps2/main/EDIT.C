typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef union _anon10;
typedef struct _anon11;


typedef _anon0 type_0[20];
typedef _anon0 type_1[0];
typedef _anon4 type_2[0];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	char num;
	char dummy;
	_anon4 dat[0];
};

struct _anon2
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon3
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon2** patbase;
	_anon5 xposi;
	_anon5 yposi;
	_anon8 xspeed;
	_anon8 yspeed;
	_anon8 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon8 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon8 direc;
	_anon8 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon4
{
	unsigned char actno;
	unsigned char sprpri;
	_anon2** patbase;
	unsigned short offset;
	unsigned char userflag_h;
	unsigned char rludrv;
	unsigned char userflag_l;
	unsigned char patno;
};

union _anon5
{
	int l;
	_anon6 w;
	_anon7 b;
};

struct _anon6
{
	short l;
	short h;
};

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon8
{
	short w;
	_anon9 b;
};

struct _anon9
{
	char l;
	char h;
};

union _anon10
{
	unsigned short w;
	_anon11 b;
};

struct _anon11
{
	unsigned char l;
	unsigned char h;
};

int CKeyTogle;
_anon8 editno;
unsigned char edit_user;
_anon10 swdata1;
_anon2 sncpat;
_anon8 editmode;
_anon1 edit_tbl;
short blkno;

void edit(_anon3* pActwk);

// 
// Start address: 0x100edd0
void edit(_anon3* pActwk)
{
	int CKey;
	int edit_spd;
	_anon1* pEdit_tbl;
	_anon3* pActwk2;
	int speed;
	short xposi;
	short yposi;
	short sprvs;
	short index;
	char en;
	// Line 27, Address: 0x100edd0, Func Offset: 0
	// Line 31, Address: 0x100ee00, Func Offset: 0x30
	// Line 42, Address: 0x100ee04, Func Offset: 0x34
	// Line 44, Address: 0x100ee1c, Func Offset: 0x4c
	// Line 46, Address: 0x100ee34, Func Offset: 0x64
	// Line 47, Address: 0x100ee38, Func Offset: 0x68
	// Line 48, Address: 0x100ee50, Func Offset: 0x80
	// Line 51, Address: 0x100ee58, Func Offset: 0x88
	// Line 53, Address: 0x100ee5c, Func Offset: 0x8c
	// Line 54, Address: 0x100ee60, Func Offset: 0x90
	// Line 55, Address: 0x100ee88, Func Offset: 0xb8
	// Line 56, Address: 0x100eeb0, Func Offset: 0xe0
	// Line 57, Address: 0x100eed8, Func Offset: 0x108
	// Line 58, Address: 0x100ef00, Func Offset: 0x130
	// Line 59, Address: 0x100ef10, Func Offset: 0x140
	// Line 60, Address: 0x100ef24, Func Offset: 0x154
	// Line 61, Address: 0x100ef30, Func Offset: 0x160
	// Line 62, Address: 0x100ef40, Func Offset: 0x170
	// Line 64, Address: 0x100ef5c, Func Offset: 0x18c
	// Line 66, Address: 0x100ef64, Func Offset: 0x194
	// Line 68, Address: 0x100ef7c, Func Offset: 0x1ac
	// Line 69, Address: 0x100ef84, Func Offset: 0x1b4
	// Line 70, Address: 0x100ef94, Func Offset: 0x1c4
	// Line 71, Address: 0x100efa0, Func Offset: 0x1d0
	// Line 72, Address: 0x100efac, Func Offset: 0x1dc
	// Line 73, Address: 0x100efb4, Func Offset: 0x1e4
	// Line 74, Address: 0x100efc0, Func Offset: 0x1f0
	// Line 75, Address: 0x100efcc, Func Offset: 0x1fc
	// Line 78, Address: 0x100efd4, Func Offset: 0x204
	// Line 80, Address: 0x100efec, Func Offset: 0x21c
	// Line 81, Address: 0x100f010, Func Offset: 0x240
	// Line 82, Address: 0x100f034, Func Offset: 0x264
	// Line 92, Address: 0x100f03c, Func Offset: 0x26c
	// Line 94, Address: 0x100f054, Func Offset: 0x284
	// Line 95, Address: 0x100f070, Func Offset: 0x2a0
	// Line 96, Address: 0x100f08c, Func Offset: 0x2bc
	// Line 97, Address: 0x100f0a8, Func Offset: 0x2d8
	// Line 98, Address: 0x100f0c4, Func Offset: 0x2f4
	// Line 99, Address: 0x100f0e0, Func Offset: 0x310
	// Line 100, Address: 0x100f108, Func Offset: 0x338
	// Line 102, Address: 0x100f110, Func Offset: 0x340
	// Line 103, Address: 0x100f114, Func Offset: 0x344
	// Line 105, Address: 0x100f120, Func Offset: 0x350
	// Line 106, Address: 0x100f124, Func Offset: 0x354
	// Line 107, Address: 0x100f134, Func Offset: 0x364
	// Line 109, Address: 0x100f148, Func Offset: 0x378
	// Line 110, Address: 0x100f160, Func Offset: 0x390
	// Line 111, Address: 0x100f17c, Func Offset: 0x3ac
	// Line 112, Address: 0x100f198, Func Offset: 0x3c8
	// Line 113, Address: 0x100f1b4, Func Offset: 0x3e4
	// Line 114, Address: 0x100f1d0, Func Offset: 0x400
	// Line 115, Address: 0x100f1e0, Func Offset: 0x410
	// Line 116, Address: 0x100f1f0, Func Offset: 0x420
	// Line 117, Address: 0x100f20c, Func Offset: 0x43c
	// Line 121, Address: 0x100f228, Func Offset: 0x458
	// Line 122, Address: 0x100f234, Func Offset: 0x464
	// Line 123, Address: 0x100f240, Func Offset: 0x470
	// Func End, Address: 0x100f274, Func Offset: 0x4a4
}

