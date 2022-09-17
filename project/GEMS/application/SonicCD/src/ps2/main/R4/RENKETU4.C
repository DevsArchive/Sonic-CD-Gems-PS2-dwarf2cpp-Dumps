typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_5)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef char type_4[18];
typedef void(*type_6)(_anon1*)[2];
typedef _anon1 type_7[128];
typedef _anon0* type_8[2];
typedef unsigned char type_9[32];

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

_anon0 renketu4_pat0;
_anon0 renketu4_pat1;
_anon0* renketu4pat[2];
_anon2 scra_h_posit;
_anon1 actwk[128];
_anon5 stageno;
unsigned char switchflag[32];

void renketu4(_anon1* pActwk);
void renketu4_ridechk(_anon1* pActwk);
void renketu4_init(_anon1* pActwk);
void renketu4_move(_anon1* pActwk);
void swchk(_anon1* pActwk);

// 
// Start address: 0x1025cc0
void renketu4(_anon1* pActwk)
{
	unsigned short xwk1;
	unsigned short xwk2;
	void(*renketu4_acttbl)(_anon1*)[2];
	// Line 79, Address: 0x1025cc0, Func Offset: 0
	// Line 82, Address: 0x1025cd4, Func Offset: 0x14
	// Line 87, Address: 0x1025cf0, Func Offset: 0x30
	// Line 88, Address: 0x1025d2c, Func Offset: 0x6c
	// Line 90, Address: 0x1025d38, Func Offset: 0x78
	// Line 91, Address: 0x1025d50, Func Offset: 0x90
	// Line 92, Address: 0x1025d70, Func Offset: 0xb0
	// Line 93, Address: 0x1025d90, Func Offset: 0xd0
	// Line 95, Address: 0x1025d9c, Func Offset: 0xdc
	// Func End, Address: 0x1025db4, Func Offset: 0xf4
}

// 
// Start address: 0x1025dc0
void renketu4_ridechk(_anon1* pActwk)
{
	// Line 104, Address: 0x1025dc0, Func Offset: 0
	// Line 105, Address: 0x1025dcc, Func Offset: 0xc
	// Line 107, Address: 0x1025de8, Func Offset: 0x28
	// Line 110, Address: 0x1025e3c, Func Offset: 0x7c
	// Func End, Address: 0x1025e4c, Func Offset: 0x8c
}

// 
// Start address: 0x1025e50
void renketu4_init(_anon1* pActwk)
{
	char renketu4_tbl[18];
	_anon1* pNewactwk;
	unsigned char i;
	// Line 119, Address: 0x1025e50, Func Offset: 0
	// Line 120, Address: 0x1025e60, Func Offset: 0x10
	// Line 135, Address: 0x1025e94, Func Offset: 0x44
	// Line 136, Address: 0x1025ea4, Func Offset: 0x54
	// Line 138, Address: 0x1025eb4, Func Offset: 0x64
	// Line 139, Address: 0x1025ed0, Func Offset: 0x80
	// Line 141, Address: 0x1025ee4, Func Offset: 0x94
	// Line 143, Address: 0x1025ef0, Func Offset: 0xa0
	// Line 144, Address: 0x1025f00, Func Offset: 0xb0
	// Line 145, Address: 0x1025f0c, Func Offset: 0xbc
	// Line 147, Address: 0x1025f18, Func Offset: 0xc8
	// Line 148, Address: 0x1025f28, Func Offset: 0xd8
	// Line 149, Address: 0x1025f38, Func Offset: 0xe8
	// Line 151, Address: 0x1025f48, Func Offset: 0xf8
	// Line 152, Address: 0x1025f58, Func Offset: 0x108
	// Line 153, Address: 0x1025f6c, Func Offset: 0x11c
	// Line 154, Address: 0x1025f78, Func Offset: 0x128
	// Line 155, Address: 0x1025f88, Func Offset: 0x138
	// Line 156, Address: 0x1025f90, Func Offset: 0x140
	// Line 157, Address: 0x1025fa0, Func Offset: 0x150
	// Line 159, Address: 0x1025fb0, Func Offset: 0x160
	// Line 162, Address: 0x1025fc8, Func Offset: 0x178
	// Line 163, Address: 0x1025fe8, Func Offset: 0x198
	// Line 165, Address: 0x102600c, Func Offset: 0x1bc
	// Line 166, Address: 0x1026018, Func Offset: 0x1c8
	// Line 167, Address: 0x1026028, Func Offset: 0x1d8
	// Line 168, Address: 0x1026034, Func Offset: 0x1e4
	// Line 171, Address: 0x1026044, Func Offset: 0x1f4
	// Line 172, Address: 0x1026060, Func Offset: 0x210
	// Line 174, Address: 0x1026074, Func Offset: 0x224
	// Line 176, Address: 0x1026080, Func Offset: 0x230
	// Line 177, Address: 0x102608c, Func Offset: 0x23c
	// Func End, Address: 0x10260a0, Func Offset: 0x250
}

// 
// Start address: 0x10260a0
void renketu4_move(_anon1* pActwk)
{
	unsigned short wD0;
	unsigned short wD1;
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD4;
	_anon2 lD5;
	short wk;
	// Line 186, Address: 0x10260a0, Func Offset: 0
	// Line 191, Address: 0x10260b0, Func Offset: 0x10
	// Line 193, Address: 0x10260bc, Func Offset: 0x1c
	// Line 195, Address: 0x10260d4, Func Offset: 0x34
	// Line 197, Address: 0x10260ec, Func Offset: 0x4c
	// Line 198, Address: 0x1026114, Func Offset: 0x74
	// Line 199, Address: 0x102613c, Func Offset: 0x9c
	// Line 200, Address: 0x1026148, Func Offset: 0xa8
	// Line 201, Address: 0x1026150, Func Offset: 0xb0
	// Line 202, Address: 0x1026154, Func Offset: 0xb4
	// Line 203, Address: 0x1026160, Func Offset: 0xc0
	// Line 204, Address: 0x1026168, Func Offset: 0xc8
	// Line 206, Address: 0x102616c, Func Offset: 0xcc
	// Line 207, Address: 0x102617c, Func Offset: 0xdc
	// Line 208, Address: 0x1026188, Func Offset: 0xe8
	// Line 209, Address: 0x1026194, Func Offset: 0xf4
	// Line 210, Address: 0x10261a4, Func Offset: 0x104
	// Line 212, Address: 0x10261b4, Func Offset: 0x114
	// Line 213, Address: 0x10261dc, Func Offset: 0x13c
	// Line 214, Address: 0x1026204, Func Offset: 0x164
	// Line 215, Address: 0x1026210, Func Offset: 0x170
	// Line 217, Address: 0x102621c, Func Offset: 0x17c
	// Line 219, Address: 0x1026238, Func Offset: 0x198
	// Func End, Address: 0x102624c, Func Offset: 0x1ac
}

// 
// Start address: 0x1026250
void swchk(_anon1* pActwk)
{
	// Line 228, Address: 0x1026250, Func Offset: 0
	// Line 229, Address: 0x1026258, Func Offset: 0x8
	// Line 230, Address: 0x1026274, Func Offset: 0x24
	// Line 231, Address: 0x10262a8, Func Offset: 0x58
	// Line 232, Address: 0x10262b8, Func Offset: 0x68
	// Line 233, Address: 0x10262c8, Func Offset: 0x78
	// Line 234, Address: 0x10262d4, Func Offset: 0x84
	// Line 236, Address: 0x10262dc, Func Offset: 0x8c
	// Line 239, Address: 0x10262e4, Func Offset: 0x94
	// Func End, Address: 0x10262f0, Func Offset: 0xa0
}

