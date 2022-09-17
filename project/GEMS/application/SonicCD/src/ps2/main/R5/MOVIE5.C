typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_7)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[6];
typedef unsigned char* type_3[2];
typedef unsigned char type_4[6];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_8[128];
typedef void(*type_9)(_anon1*)[5];
typedef char type_10[37];
typedef unsigned char type_11[58];

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

char tbl0[37];
_anon0 movie_pat00;
_anon0 movie_pat01;
_anon0 movie_pat02;
_anon0 movie_pat03;
_anon0 movie_pat04;
_anon0 movie_pat05;
_anon0* pat_movie[6];
void(*movie_act_tbl)(_anon1*)[5];
_anon1 actwk[128];
unsigned char projector_flag;
unsigned char pchg00[6];
unsigned char pchg01[58];
unsigned char* pchg[2];

void movie(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_wait(_anon1* pActwk);
void m_die(_anon1* pActwk);
void m_baku(_anon1* pActwk);
void m1wait(_anon1* pActwk);
void s_init(_anon1* pActwk);
void s_move(_anon1* pActwk);

// 
// Start address: 0x101d950
void movie(_anon1* pActwk)
{
	_anon1* pMainwk;
	// Line 149, Address: 0x101d950, Func Offset: 0
	// Line 150, Address: 0x101d960, Func Offset: 0x10
	// Line 153, Address: 0x101d970, Func Offset: 0x20
	// Line 154, Address: 0x101d998, Func Offset: 0x48
	// Line 155, Address: 0x101d9b8, Func Offset: 0x68
	// Line 156, Address: 0x101d9c4, Func Offset: 0x74
	// Line 159, Address: 0x101d9cc, Func Offset: 0x7c
	// Line 160, Address: 0x101d9dc, Func Offset: 0x8c
	// Line 161, Address: 0x101d9e8, Func Offset: 0x98
	// Line 162, Address: 0x101d9f0, Func Offset: 0xa0
	// Line 164, Address: 0x101d9fc, Func Offset: 0xac
	// Line 165, Address: 0x101da04, Func Offset: 0xb4
	// Line 166, Address: 0x101da48, Func Offset: 0xf8
	// Line 167, Address: 0x101da54, Func Offset: 0x104
	// Line 168, Address: 0x101da6c, Func Offset: 0x11c
	// Line 171, Address: 0x101da78, Func Offset: 0x128
	// Func End, Address: 0x101da8c, Func Offset: 0x13c
}

// 
// Start address: 0x101da90
void m_init(_anon1* pActwk)
{
	_anon1* pNewact;
	// Line 177, Address: 0x101da90, Func Offset: 0
	// Line 180, Address: 0x101da9c, Func Offset: 0xc
	// Line 181, Address: 0x101daac, Func Offset: 0x1c
	// Line 182, Address: 0x101dab8, Func Offset: 0x28
	// Line 188, Address: 0x101dac0, Func Offset: 0x30
	// Line 189, Address: 0x101dad0, Func Offset: 0x40
	// Line 190, Address: 0x101dae0, Func Offset: 0x50
	// Line 191, Address: 0x101daec, Func Offset: 0x5c
	// Line 192, Address: 0x101daf8, Func Offset: 0x68
	// Line 193, Address: 0x101db04, Func Offset: 0x74
	// Line 194, Address: 0x101db10, Func Offset: 0x80
	// Line 195, Address: 0x101db1c, Func Offset: 0x8c
	// Line 196, Address: 0x101db2c, Func Offset: 0x9c
	// Line 201, Address: 0x101db3c, Func Offset: 0xac
	// Line 202, Address: 0x101db50, Func Offset: 0xc0
	// Line 203, Address: 0x101db5c, Func Offset: 0xcc
	// Line 206, Address: 0x101db64, Func Offset: 0xd4
	// Line 207, Address: 0x101db74, Func Offset: 0xe4
	// Line 208, Address: 0x101db84, Func Offset: 0xf4
	// Line 209, Address: 0x101db94, Func Offset: 0x104
	// Line 210, Address: 0x101dba4, Func Offset: 0x114
	// Line 211, Address: 0x101dbb4, Func Offset: 0x124
	// Line 212, Address: 0x101dbc0, Func Offset: 0x130
	// Line 217, Address: 0x101dbf8, Func Offset: 0x168
	// Line 218, Address: 0x101dc0c, Func Offset: 0x17c
	// Line 219, Address: 0x101dc18, Func Offset: 0x188
	// Line 222, Address: 0x101dc20, Func Offset: 0x190
	// Line 223, Address: 0x101dc30, Func Offset: 0x1a0
	// Line 224, Address: 0x101dc40, Func Offset: 0x1b0
	// Line 225, Address: 0x101dc50, Func Offset: 0x1c0
	// Line 226, Address: 0x101dc60, Func Offset: 0x1d0
	// Line 227, Address: 0x101dc70, Func Offset: 0x1e0
	// Line 228, Address: 0x101dc7c, Func Offset: 0x1ec
	// Line 233, Address: 0x101dcb4, Func Offset: 0x224
	// Line 234, Address: 0x101dcc8, Func Offset: 0x238
	// Line 235, Address: 0x101dcd4, Func Offset: 0x244
	// Line 238, Address: 0x101dcdc, Func Offset: 0x24c
	// Line 239, Address: 0x101dce8, Func Offset: 0x258
	// Line 240, Address: 0x101dcf8, Func Offset: 0x268
	// Line 241, Address: 0x101dd08, Func Offset: 0x278
	// Line 242, Address: 0x101dd18, Func Offset: 0x288
	// Line 243, Address: 0x101dd28, Func Offset: 0x298
	// Line 244, Address: 0x101dd34, Func Offset: 0x2a4
	// Line 249, Address: 0x101dd6c, Func Offset: 0x2dc
	// Line 250, Address: 0x101dd80, Func Offset: 0x2f0
	// Line 251, Address: 0x101dd8c, Func Offset: 0x2fc
	// Line 254, Address: 0x101dd94, Func Offset: 0x304
	// Line 255, Address: 0x101dda0, Func Offset: 0x310
	// Line 256, Address: 0x101ddb0, Func Offset: 0x320
	// Line 257, Address: 0x101ddc0, Func Offset: 0x330
	// Line 258, Address: 0x101ddd0, Func Offset: 0x340
	// Line 259, Address: 0x101dde0, Func Offset: 0x350
	// Line 260, Address: 0x101ddec, Func Offset: 0x35c
	// Line 262, Address: 0x101de24, Func Offset: 0x394
	// Line 263, Address: 0x101de30, Func Offset: 0x3a0
	// Func End, Address: 0x101de40, Func Offset: 0x3b0
}

// 
// Start address: 0x101de40
void m_wait(_anon1* pActwk)
{
	// Line 269, Address: 0x101de40, Func Offset: 0
	// Line 270, Address: 0x101de4c, Func Offset: 0xc
	// Line 271, Address: 0x101de5c, Func Offset: 0x1c
	// Line 272, Address: 0x101de64, Func Offset: 0x24
	// Line 273, Address: 0x101de6c, Func Offset: 0x2c
	// Line 277, Address: 0x101de7c, Func Offset: 0x3c
	// Line 278, Address: 0x101de90, Func Offset: 0x50
	// Func End, Address: 0x101dea0, Func Offset: 0x60
}

// 
// Start address: 0x101dea0
void m_die(_anon1* pActwk)
{
	// Line 284, Address: 0x101dea0, Func Offset: 0
	// Line 285, Address: 0x101deac, Func Offset: 0xc
	// Line 286, Address: 0x101debc, Func Offset: 0x1c
	// Line 287, Address: 0x101dec8, Func Offset: 0x28
	// Line 291, Address: 0x101ded4, Func Offset: 0x34
	// Line 292, Address: 0x101def0, Func Offset: 0x50
	// Line 296, Address: 0x101df04, Func Offset: 0x64
	// Line 297, Address: 0x101df10, Func Offset: 0x70
	// Func End, Address: 0x101df20, Func Offset: 0x80
}

// 
// Start address: 0x101df20
void m_baku(_anon1* pActwk)
{
	char* pTbl;
	char timewk;
	short xwk;
	short ywk;
	_anon1* pNewact;
	// Line 303, Address: 0x101df20, Func Offset: 0
	// Line 308, Address: 0x101df3c, Func Offset: 0x1c
	// Line 309, Address: 0x101df44, Func Offset: 0x24
	// Line 310, Address: 0x101df68, Func Offset: 0x48
	// Line 311, Address: 0x101df90, Func Offset: 0x70
	// Line 312, Address: 0x101dfac, Func Offset: 0x8c
	// Line 313, Address: 0x101dfc8, Func Offset: 0xa8
	// Line 314, Address: 0x101dfd0, Func Offset: 0xb0
	// Line 315, Address: 0x101dfe4, Func Offset: 0xc4
	// Line 316, Address: 0x101dff0, Func Offset: 0xd0
	// Line 317, Address: 0x101dffc, Func Offset: 0xdc
	// Line 318, Address: 0x101e00c, Func Offset: 0xec
	// Line 319, Address: 0x101e01c, Func Offset: 0xfc
	// Line 320, Address: 0x101e02c, Func Offset: 0x10c
	// Line 321, Address: 0x101e03c, Func Offset: 0x11c
	// Line 326, Address: 0x101e048, Func Offset: 0x128
	// Line 328, Address: 0x101e050, Func Offset: 0x130
	// Line 329, Address: 0x101e060, Func Offset: 0x140
	// Line 331, Address: 0x101e06c, Func Offset: 0x14c
	// Func End, Address: 0x101e08c, Func Offset: 0x16c
}

// 
// Start address: 0x101e090
void m1wait(_anon1* pActwk)
{
	// Line 337, Address: 0x101e090, Func Offset: 0
	// Line 338, Address: 0x101e09c, Func Offset: 0xc
	// Line 339, Address: 0x101e0bc, Func Offset: 0x2c
	// Line 340, Address: 0x101e0c8, Func Offset: 0x38
	// Line 342, Address: 0x101e0d4, Func Offset: 0x44
	// Func End, Address: 0x101e0e4, Func Offset: 0x54
}

// 
// Start address: 0x101e0f0
void s_init(_anon1* pActwk)
{
	// Line 370, Address: 0x101e0f0, Func Offset: 0
	// Line 371, Address: 0x101e0fc, Func Offset: 0xc
	// Line 372, Address: 0x101e10c, Func Offset: 0x1c
	// Line 373, Address: 0x101e11c, Func Offset: 0x2c
	// Line 374, Address: 0x101e128, Func Offset: 0x38
	// Line 375, Address: 0x101e134, Func Offset: 0x44
	// Line 377, Address: 0x101e144, Func Offset: 0x54
	// Line 379, Address: 0x101e160, Func Offset: 0x70
	// Line 380, Address: 0x101e178, Func Offset: 0x88
	// Line 381, Address: 0x101e184, Func Offset: 0x94
	// Line 382, Address: 0x101e18c, Func Offset: 0x9c
	// Line 384, Address: 0x101e194, Func Offset: 0xa4
	// Line 385, Address: 0x101e1ac, Func Offset: 0xbc
	// Line 386, Address: 0x101e1b8, Func Offset: 0xc8
	// Line 389, Address: 0x101e1c4, Func Offset: 0xd4
	// Line 390, Address: 0x101e1d0, Func Offset: 0xe0
	// Func End, Address: 0x101e1e0, Func Offset: 0xf0
}

// 
// Start address: 0x101e1e0
void s_move(_anon1* pActwk)
{
	// Line 396, Address: 0x101e1e0, Func Offset: 0
	// Line 397, Address: 0x101e1ec, Func Offset: 0xc
	// Line 398, Address: 0x101e200, Func Offset: 0x20
	// Line 399, Address: 0x101e20c, Func Offset: 0x2c
	// Func End, Address: 0x101e21c, Func Offset: 0x3c
}

