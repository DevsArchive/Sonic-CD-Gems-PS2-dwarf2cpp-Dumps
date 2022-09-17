typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);
typedef void(*type_6)(_anon0*);

typedef void(*type_0)(_anon0*)[3];
typedef _anon7 type_1[20];
typedef _anon7 type_3[0];
typedef unsigned char* type_4[2];
typedef unsigned char type_5[4];
typedef void(*type_7)(_anon0*)[2];
typedef _anon1* type_8[1];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef _anon1* type_11[4];
typedef unsigned char type_12[4];
typedef _anon0 type_13[128];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
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

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
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

_anon1 cub00;
_anon1* pat_kabuto[1];
_anon0 actwk[128];
unsigned char p00[4];
unsigned char p01[4];
unsigned char* pchg[2];
_anon1 hea00;
_anon1 hea01;
_anon1 hea02;
_anon1 hea03;
_anon1* pat[4];

void kabuto(_anon0* kabutowk);
void kabuto0(_anon0* kabutowk);
void a_init(_anon0* kabutowk);
void a_fall(_anon0* kabutowk);
void a_move(_anon0* kabutowk);
void kabuto1(_anon0* tunowk);
void b_init(_anon0* tunowk);
void b_move(_anon0* tunowk);

// 
// Start address: 0x1022340
void kabuto(_anon0* kabutowk)
{
	// Line 17, Address: 0x1022340, Func Offset: 0
	// Line 18, Address: 0x102234c, Func Offset: 0xc
	// Line 19, Address: 0x1022378, Func Offset: 0x38
	// Line 20, Address: 0x1022384, Func Offset: 0x44
	// Func End, Address: 0x1022394, Func Offset: 0x54
}

// 
// Start address: 0x10223a0
void kabuto0(_anon0* kabutowk)
{
	void(*tbl)(_anon0*)[3];
	// Line 37, Address: 0x10223a0, Func Offset: 0
	// Line 38, Address: 0x10223ac, Func Offset: 0xc
	// Line 39, Address: 0x10223d0, Func Offset: 0x30
	// Line 40, Address: 0x10223e4, Func Offset: 0x44
	// Line 41, Address: 0x1022420, Func Offset: 0x80
	// Line 42, Address: 0x102242c, Func Offset: 0x8c
	// Line 43, Address: 0x1022440, Func Offset: 0xa0
	// Func End, Address: 0x1022450, Func Offset: 0xb0
}

// 
// Start address: 0x1022450
void a_init(_anon0* kabutowk)
{
	_anon0* new_actwk;
	// Line 47, Address: 0x1022450, Func Offset: 0
	// Line 50, Address: 0x102245c, Func Offset: 0xc
	// Line 52, Address: 0x102246c, Func Offset: 0x1c
	// Line 53, Address: 0x102247c, Func Offset: 0x2c
	// Line 55, Address: 0x1022488, Func Offset: 0x38
	// Line 56, Address: 0x1022498, Func Offset: 0x48
	// Line 57, Address: 0x10224a4, Func Offset: 0x54
	// Line 58, Address: 0x10224b0, Func Offset: 0x60
	// Line 59, Address: 0x10224bc, Func Offset: 0x6c
	// Line 60, Address: 0x10224c8, Func Offset: 0x78
	// Line 61, Address: 0x10224d8, Func Offset: 0x88
	// Line 62, Address: 0x10224f0, Func Offset: 0xa0
	// Line 63, Address: 0x10224fc, Func Offset: 0xac
	// Line 65, Address: 0x1022504, Func Offset: 0xb4
	// Line 66, Address: 0x1022514, Func Offset: 0xc4
	// Line 67, Address: 0x1022524, Func Offset: 0xd4
	// Line 68, Address: 0x1022530, Func Offset: 0xe0
	// Line 69, Address: 0x1022540, Func Offset: 0xf0
	// Line 70, Address: 0x1022550, Func Offset: 0x100
	// Line 71, Address: 0x1022584, Func Offset: 0x134
	// Line 72, Address: 0x102259c, Func Offset: 0x14c
	// Line 73, Address: 0x10225ac, Func Offset: 0x15c
	// Line 74, Address: 0x10225bc, Func Offset: 0x16c
	// Line 75, Address: 0x10225cc, Func Offset: 0x17c
	// Line 77, Address: 0x10225dc, Func Offset: 0x18c
	// Line 78, Address: 0x10225e8, Func Offset: 0x198
	// Func End, Address: 0x10225f8, Func Offset: 0x1a8
}

// 
// Start address: 0x1022600
void a_fall(_anon0* kabutowk)
{
	short colli_data;
	// Line 82, Address: 0x1022600, Func Offset: 0
	// Line 85, Address: 0x1022610, Func Offset: 0x10
	// Line 86, Address: 0x1022624, Func Offset: 0x24
	// Line 87, Address: 0x1022650, Func Offset: 0x50
	// Line 88, Address: 0x1022660, Func Offset: 0x60
	// Line 90, Address: 0x1022670, Func Offset: 0x70
	// Func End, Address: 0x1022684, Func Offset: 0x84
}

// 
// Start address: 0x1022690
void a_move(_anon0* kabutowk)
{
	// Line 94, Address: 0x1022690, Func Offset: 0
	// Line 95, Address: 0x102269c, Func Offset: 0xc
	// Line 97, Address: 0x10226e8, Func Offset: 0x58
	// Line 99, Address: 0x10226f4, Func Offset: 0x64
	// Line 101, Address: 0x102270c, Func Offset: 0x7c
	// Line 103, Address: 0x1022728, Func Offset: 0x98
	// Line 104, Address: 0x1022750, Func Offset: 0xc0
	// Line 105, Address: 0x102275c, Func Offset: 0xcc
	// Line 108, Address: 0x1022770, Func Offset: 0xe0
	// Func End, Address: 0x1022780, Func Offset: 0xf0
}

// 
// Start address: 0x1022780
void kabuto1(_anon0* tunowk)
{
	void(*tbl)(_anon0*)[2];
	// Line 157, Address: 0x1022780, Func Offset: 0
	// Line 158, Address: 0x102278c, Func Offset: 0xc
	// Line 159, Address: 0x10227a8, Func Offset: 0x28
	// Line 160, Address: 0x10227e4, Func Offset: 0x64
	// Line 161, Address: 0x10227f0, Func Offset: 0x70
	// Func End, Address: 0x1022800, Func Offset: 0x80
}

// 
// Start address: 0x1022800
void b_init(_anon0* tunowk)
{
	// Line 165, Address: 0x1022800, Func Offset: 0
	// Line 166, Address: 0x1022808, Func Offset: 0x8
	// Line 167, Address: 0x1022818, Func Offset: 0x18
	// Line 168, Address: 0x1022828, Func Offset: 0x28
	// Line 169, Address: 0x1022834, Func Offset: 0x34
	// Line 170, Address: 0x1022844, Func Offset: 0x44
	// Line 171, Address: 0x1022850, Func Offset: 0x50
	// Line 172, Address: 0x102285c, Func Offset: 0x5c
	// Line 173, Address: 0x1022868, Func Offset: 0x68
	// Func End, Address: 0x1022874, Func Offset: 0x74
}

// 
// Start address: 0x1022880
void b_move(_anon0* tunowk)
{
	_anon0* bodywk;
	// Line 177, Address: 0x1022880, Func Offset: 0
	// Line 180, Address: 0x1022890, Func Offset: 0x10
	// Line 181, Address: 0x10228b4, Func Offset: 0x34
	// Line 182, Address: 0x10228dc, Func Offset: 0x5c
	// Line 184, Address: 0x10228ec, Func Offset: 0x6c
	// Line 185, Address: 0x1022914, Func Offset: 0x94
	// Line 186, Address: 0x1022920, Func Offset: 0xa0
	// Line 188, Address: 0x1022930, Func Offset: 0xb0
	// Line 189, Address: 0x102293c, Func Offset: 0xbc
	// Line 190, Address: 0x1022944, Func Offset: 0xc4
	// Line 191, Address: 0x1022954, Func Offset: 0xd4
	// Line 192, Address: 0x1022960, Func Offset: 0xe0
	// Line 194, Address: 0x102296c, Func Offset: 0xec
	// Line 195, Address: 0x1022984, Func Offset: 0x104
	// Line 199, Address: 0x10229a8, Func Offset: 0x128
	// Line 200, Address: 0x10229d8, Func Offset: 0x158
	// Line 202, Address: 0x1022a08, Func Offset: 0x188
	// Line 203, Address: 0x1022a1c, Func Offset: 0x19c
	// Func End, Address: 0x1022a30, Func Offset: 0x1b0
}

