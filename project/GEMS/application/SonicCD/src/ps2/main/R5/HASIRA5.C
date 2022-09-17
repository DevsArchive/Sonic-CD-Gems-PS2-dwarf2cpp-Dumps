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
typedef _anon0* type_1[8];
typedef _anon7 type_2[0];
typedef short type_3[16];
typedef void(*type_5)(_anon1*)[3];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef unsigned char type_8[8];
typedef int type_9[16];
typedef _anon1 type_10[128];

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
_anon0* pat_hasira5[8];
unsigned char tbl0patno[8];
short tbl0dposi[16];
int tbl0speed[16];
_anon1 actwk[128];

void hasira5(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_wait(_anon1* pActwk);
void m_down(_anon1* pActwk);

// 
// Start address: 0x10253a0
void hasira5(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 125, Address: 0x10253a0, Func Offset: 0
	// Line 126, Address: 0x10253ac, Func Offset: 0xc
	// Line 133, Address: 0x10253d0, Func Offset: 0x30
	// Line 134, Address: 0x102540c, Func Offset: 0x6c
	// Line 135, Address: 0x1025418, Func Offset: 0x78
	// Line 136, Address: 0x1025424, Func Offset: 0x84
	// Func End, Address: 0x1025434, Func Offset: 0x94
}

// 
// Start address: 0x1025440
void m_init(_anon1* pActwk)
{
	// Line 141, Address: 0x1025440, Func Offset: 0
	// Line 142, Address: 0x102544c, Func Offset: 0xc
	// Line 143, Address: 0x102545c, Func Offset: 0x1c
	// Line 144, Address: 0x102546c, Func Offset: 0x2c
	// Line 145, Address: 0x1025478, Func Offset: 0x38
	// Line 146, Address: 0x1025484, Func Offset: 0x44
	// Line 147, Address: 0x1025490, Func Offset: 0x50
	// Line 148, Address: 0x102549c, Func Offset: 0x5c
	// Line 149, Address: 0x10254a8, Func Offset: 0x68
	// Line 150, Address: 0x10254b4, Func Offset: 0x74
	// Line 152, Address: 0x10254c4, Func Offset: 0x84
	// Line 153, Address: 0x10254d0, Func Offset: 0x90
	// Func End, Address: 0x10254e0, Func Offset: 0xa0
}

// 
// Start address: 0x10254e0
void m_wait(_anon1* pActwk)
{
	short* a6;
	int* a5;
	unsigned char* a4;
	_anon1* a1;
	_anon1* pPlayerwk;
	unsigned char d6;
	// Line 158, Address: 0x10254e0, Func Offset: 0
	// Line 167, Address: 0x1025500, Func Offset: 0x20
	// Line 168, Address: 0x1025508, Func Offset: 0x28
	// Line 169, Address: 0x1025514, Func Offset: 0x34
	// Line 171, Address: 0x102551c, Func Offset: 0x3c
	// Line 172, Address: 0x1025524, Func Offset: 0x44
	// Line 173, Address: 0x1025530, Func Offset: 0x50
	// Line 174, Address: 0x102553c, Func Offset: 0x5c
	// Line 176, Address: 0x1025554, Func Offset: 0x74
	// Line 178, Address: 0x1025564, Func Offset: 0x84
	// Line 180, Address: 0x102556c, Func Offset: 0x8c
	// Line 181, Address: 0x102557c, Func Offset: 0x9c
	// Line 184, Address: 0x1025584, Func Offset: 0xa4
	// Line 185, Address: 0x1025590, Func Offset: 0xb0
	// Line 186, Address: 0x10255a0, Func Offset: 0xc0
	// Line 187, Address: 0x10255a8, Func Offset: 0xc8
	// Line 188, Address: 0x10255b0, Func Offset: 0xd0
	// Line 189, Address: 0x10255b8, Func Offset: 0xd8
	// Line 190, Address: 0x10255c0, Func Offset: 0xe0
	// Line 191, Address: 0x10255c8, Func Offset: 0xe8
	// Line 194, Address: 0x10255d0, Func Offset: 0xf0
	// Line 196, Address: 0x10255e0, Func Offset: 0x100
	// Line 197, Address: 0x10255f4, Func Offset: 0x114
	// Line 198, Address: 0x1025604, Func Offset: 0x124
	// Line 199, Address: 0x1025614, Func Offset: 0x134
	// Line 200, Address: 0x1025624, Func Offset: 0x144
	// Line 201, Address: 0x1025634, Func Offset: 0x154
	// Line 202, Address: 0x1025644, Func Offset: 0x164
	// Line 203, Address: 0x1025654, Func Offset: 0x174
	// Line 204, Address: 0x1025664, Func Offset: 0x184
	// Line 206, Address: 0x1025674, Func Offset: 0x194
	// Line 207, Address: 0x1025680, Func Offset: 0x1a0
	// Line 208, Address: 0x102568c, Func Offset: 0x1ac
	// Line 209, Address: 0x1025698, Func Offset: 0x1b8
	// Line 210, Address: 0x10256b4, Func Offset: 0x1d4
	// Line 211, Address: 0x10256d0, Func Offset: 0x1f0
	// Line 212, Address: 0x10256e8, Func Offset: 0x208
	// Line 213, Address: 0x1025700, Func Offset: 0x220
	// Line 214, Address: 0x1025714, Func Offset: 0x234
	// Line 217, Address: 0x1025728, Func Offset: 0x248
	// Line 218, Address: 0x1025734, Func Offset: 0x254
	// Func End, Address: 0x1025758, Func Offset: 0x278
}

// 
// Start address: 0x1025760
void m_down(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short d0;
	// Line 223, Address: 0x1025760, Func Offset: 0
	// Line 227, Address: 0x1025774, Func Offset: 0x14
	// Line 228, Address: 0x102578c, Func Offset: 0x2c
	// Line 229, Address: 0x10257a8, Func Offset: 0x48
	// Line 230, Address: 0x10257c4, Func Offset: 0x64
	// Line 231, Address: 0x10257cc, Func Offset: 0x6c
	// Line 232, Address: 0x10257d8, Func Offset: 0x78
	// Line 233, Address: 0x10257ec, Func Offset: 0x8c
	// Line 234, Address: 0x1025814, Func Offset: 0xb4
	// Line 235, Address: 0x1025820, Func Offset: 0xc0
	// Func End, Address: 0x1025838, Func Offset: 0xd8
}

