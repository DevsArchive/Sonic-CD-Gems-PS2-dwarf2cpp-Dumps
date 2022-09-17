typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[4];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon0* type_5[0];
typedef void(*type_7)(_anon1*)[4];

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

_anon0 tekkyu7j_pat0;
_anon0 tekkyu7j_pat1;
_anon0 tekkyu7j_pat2;
_anon0 tekkyu7j_pat3;
_anon0* pat_tekkyu7j[4];
_anon0* pat_tekkyu7[0];

void tekkyu7j(_anon1* pActwk);
void tekkyu7(_anon1* pActwk);
void tekkyu7_init(_anon1* pActwk);
void tekkyu7_move(_anon1* pActwk);
void tekkyu7_stop(_anon1* pActwk);
void tekkyu7_jump(_anon1* pActwk);

// 
// Start address: 0x101ff50
void tekkyu7j(_anon1* pActwk)
{
	_anon1* pNewactwk;
	// Line 90, Address: 0x101ff50, Func Offset: 0
	// Line 93, Address: 0x101ff5c, Func Offset: 0xc
	// Line 94, Address: 0x101ff6c, Func Offset: 0x1c
	// Line 95, Address: 0x101ff78, Func Offset: 0x28
	// Line 98, Address: 0x101ff80, Func Offset: 0x30
	// Line 100, Address: 0x101ff90, Func Offset: 0x40
	// Line 101, Address: 0x101ffa0, Func Offset: 0x50
	// Line 102, Address: 0x101ffb0, Func Offset: 0x60
	// Line 103, Address: 0x101ffbc, Func Offset: 0x6c
	// Line 104, Address: 0x101ffc8, Func Offset: 0x78
	// Line 105, Address: 0x101ffd8, Func Offset: 0x88
	// Line 106, Address: 0x101ffe8, Func Offset: 0x98
	// Line 107, Address: 0x101fff4, Func Offset: 0xa4
	// Line 108, Address: 0x1020000, Func Offset: 0xb0
	// Line 109, Address: 0x102000c, Func Offset: 0xbc
	// Line 112, Address: 0x1020018, Func Offset: 0xc8
	// Line 113, Address: 0x1020038, Func Offset: 0xe8
	// Line 114, Address: 0x1020044, Func Offset: 0xf4
	// Line 115, Address: 0x1020058, Func Offset: 0x108
	// Line 116, Address: 0x1020068, Func Offset: 0x118
	// Line 117, Address: 0x1020078, Func Offset: 0x128
	// Line 118, Address: 0x1020084, Func Offset: 0x134
	// Line 119, Address: 0x1020094, Func Offset: 0x144
	// Line 122, Address: 0x10200a4, Func Offset: 0x154
	// Line 123, Address: 0x10200b0, Func Offset: 0x160
	// Line 125, Address: 0x10200bc, Func Offset: 0x16c
	// Func End, Address: 0x10200cc, Func Offset: 0x17c
}

// 
// Start address: 0x10200d0
void tekkyu7(_anon1* pActwk)
{
	void(*tekkyu7_acttbl)(_anon1*)[4];
	// Line 134, Address: 0x10200d0, Func Offset: 0
	// Line 135, Address: 0x10200dc, Func Offset: 0xc
	// Line 142, Address: 0x1020108, Func Offset: 0x38
	// Line 143, Address: 0x1020144, Func Offset: 0x74
	// Line 144, Address: 0x1020150, Func Offset: 0x80
	// Func End, Address: 0x1020160, Func Offset: 0x90
}

// 
// Start address: 0x1020160
void tekkyu7_init(_anon1* pActwk)
{
	short wD0;
	// Line 153, Address: 0x1020160, Func Offset: 0
	// Line 156, Address: 0x1020170, Func Offset: 0x10
	// Line 157, Address: 0x1020180, Func Offset: 0x20
	// Line 158, Address: 0x1020190, Func Offset: 0x30
	// Line 159, Address: 0x102019c, Func Offset: 0x3c
	// Line 160, Address: 0x10201a8, Func Offset: 0x48
	// Line 161, Address: 0x10201b4, Func Offset: 0x54
	// Line 162, Address: 0x10201c0, Func Offset: 0x60
	// Line 163, Address: 0x10201cc, Func Offset: 0x6c
	// Line 164, Address: 0x10201d8, Func Offset: 0x78
	// Line 165, Address: 0x10201e8, Func Offset: 0x88
	// Line 167, Address: 0x10201f4, Func Offset: 0x94
	// Line 168, Address: 0x1020200, Func Offset: 0xa0
	// Line 169, Address: 0x1020208, Func Offset: 0xa8
	// Line 170, Address: 0x1020224, Func Offset: 0xc4
	// Line 171, Address: 0x1020230, Func Offset: 0xd0
	// Line 173, Address: 0x1020240, Func Offset: 0xe0
	// Line 174, Address: 0x1020248, Func Offset: 0xe8
	// Line 175, Address: 0x1020258, Func Offset: 0xf8
	// Line 176, Address: 0x1020274, Func Offset: 0x114
	// Line 177, Address: 0x1020280, Func Offset: 0x120
	// Line 179, Address: 0x1020290, Func Offset: 0x130
	// Line 181, Address: 0x1020298, Func Offset: 0x138
	// Line 182, Address: 0x10202a4, Func Offset: 0x144
	// Func End, Address: 0x10202b8, Func Offset: 0x158
}

// 
// Start address: 0x10202c0
void tekkyu7_move(_anon1* pActwk)
{
	// Line 191, Address: 0x10202c0, Func Offset: 0
	// Line 192, Address: 0x10202c8, Func Offset: 0x8
	// Line 193, Address: 0x10202d8, Func Offset: 0x18
	// Line 195, Address: 0x10202f8, Func Offset: 0x38
	// Line 196, Address: 0x1020310, Func Offset: 0x50
	// Line 197, Address: 0x1020330, Func Offset: 0x70
	// Line 198, Address: 0x1020340, Func Offset: 0x80
	// Line 200, Address: 0x102034c, Func Offset: 0x8c
	// Func End, Address: 0x1020358, Func Offset: 0x98
}

// 
// Start address: 0x1020360
void tekkyu7_stop(_anon1* pActwk)
{
	// Line 209, Address: 0x1020360, Func Offset: 0
	// Line 210, Address: 0x1020368, Func Offset: 0x8
	// Line 211, Address: 0x1020388, Func Offset: 0x28
	// Line 212, Address: 0x1020398, Func Offset: 0x38
	// Line 213, Address: 0x10203a4, Func Offset: 0x44
	// Line 214, Address: 0x10203b0, Func Offset: 0x50
	// Line 215, Address: 0x10203cc, Func Offset: 0x6c
	// Line 216, Address: 0x10203dc, Func Offset: 0x7c
	// Line 219, Address: 0x10203ec, Func Offset: 0x8c
	// Func End, Address: 0x10203f8, Func Offset: 0x98
}

// 
// Start address: 0x1020400
void tekkyu7_jump(_anon1* pActwk)
{
	short wD0;
	unsigned char bD0;
	// Line 228, Address: 0x1020400, Func Offset: 0
	// Line 232, Address: 0x1020414, Func Offset: 0x14
	// Line 233, Address: 0x102042c, Func Offset: 0x2c
	// Line 234, Address: 0x102043c, Func Offset: 0x3c
	// Line 235, Address: 0x1020454, Func Offset: 0x54
	// Line 236, Address: 0x1020464, Func Offset: 0x64
	// Line 238, Address: 0x102046c, Func Offset: 0x6c
	// Line 239, Address: 0x1020484, Func Offset: 0x84
	// Line 241, Address: 0x1020494, Func Offset: 0x94
	// Line 242, Address: 0x1020498, Func Offset: 0x98
	// Line 243, Address: 0x10204bc, Func Offset: 0xbc
	// Line 244, Address: 0x10204c4, Func Offset: 0xc4
	// Line 245, Address: 0x10204dc, Func Offset: 0xdc
	// Line 246, Address: 0x10204e8, Func Offset: 0xe8
	// Func End, Address: 0x1020500, Func Offset: 0x100
}

