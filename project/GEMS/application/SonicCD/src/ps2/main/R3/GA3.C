typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon0* type_1[6];
typedef _anon7 type_2[0];
typedef char type_3[6];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef char type_6[6];
typedef _anon0* type_7[0];
typedef char type_8[4];
typedef _anon0* type_9[6];
typedef _anon1 type_10[128];
typedef char* type_11[3];
typedef char* type_12[1];
typedef char type_13[3];

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

_anon0 spat_b3;
_anon0 spat_b4;
_anon0 spat_b5;
_anon0 spat_e3;
_anon0 spat_e4;
_anon0 spat_e5;
_anon0 spat_0;
_anon0 spat_1;
_anon0 spat_2;
_anon0* pat_b_ga[6];
_anon0* pat_e_ga[6];
char pchg0[4];
char pchg1[3];
char pchg2[6];
char* pchg[3];
char ringchg0[6];
char* ringchg[1];
_anon1 actwk[128];
_anon0* ringpat[0];

void ga(_anon1* actionwk);
void eb_ga0(_anon1* actionwk);
void m_init(_anon1* actionwk);
void m_wait(_anon1* actionwk);
void m_appear0(_anon1* actionwk);
void m_disp(_anon1* actionwk);
void m_appear1(_anon1* actionwk);
void m_move(_anon1* actionwk);
void eb_ga1(_anon1* actionwk);
void s_init(_anon1* actionwk);
void s_fall(_anon1* actionwk);
void s_die(_anon1* actionwk);

// 
// Start address: 0x101d910
void ga(_anon1* actionwk)
{
	// Line 96, Address: 0x101d910, Func Offset: 0
	// Line 97, Address: 0x101d91c, Func Offset: 0xc
	// Line 98, Address: 0x101d938, Func Offset: 0x28
	// Line 100, Address: 0x101d94c, Func Offset: 0x3c
	// Line 101, Address: 0x101d958, Func Offset: 0x48
	// Func End, Address: 0x101d968, Func Offset: 0x58
}

// 
// Start address: 0x101d970
void eb_ga0(_anon1* actionwk)
{
	// Line 103, Address: 0x101d970, Func Offset: 0
	// Line 106, Address: 0x101d97c, Func Offset: 0xc
	// Line 110, Address: 0x101d99c, Func Offset: 0x2c
	// Line 113, Address: 0x101d9e8, Func Offset: 0x78
	// Line 115, Address: 0x101d9f4, Func Offset: 0x84
	// Line 116, Address: 0x101da00, Func Offset: 0x90
	// Line 118, Address: 0x101da08, Func Offset: 0x98
	// Line 119, Address: 0x101da14, Func Offset: 0xa4
	// Line 121, Address: 0x101da1c, Func Offset: 0xac
	// Line 122, Address: 0x101da28, Func Offset: 0xb8
	// Line 124, Address: 0x101da30, Func Offset: 0xc0
	// Line 127, Address: 0x101da3c, Func Offset: 0xcc
	// Line 128, Address: 0x101da48, Func Offset: 0xd8
	// Line 129, Address: 0x101da54, Func Offset: 0xe4
	// Func End, Address: 0x101da64, Func Offset: 0xf4
}

// 
// Start address: 0x101da70
void m_init(_anon1* actionwk)
{
	// Line 131, Address: 0x101da70, Func Offset: 0
	// Line 132, Address: 0x101da78, Func Offset: 0x8
	// Line 133, Address: 0x101da88, Func Offset: 0x18
	// Line 134, Address: 0x101da98, Func Offset: 0x28
	// Line 135, Address: 0x101daa0, Func Offset: 0x30
	// Line 136, Address: 0x101daac, Func Offset: 0x3c
	// Line 137, Address: 0x101dab8, Func Offset: 0x48
	// Line 138, Address: 0x101dac4, Func Offset: 0x54
	// Line 139, Address: 0x101dad0, Func Offset: 0x60
	// Line 140, Address: 0x101dadc, Func Offset: 0x6c
	// Line 141, Address: 0x101daf8, Func Offset: 0x88
	// Line 144, Address: 0x101db10, Func Offset: 0xa0
	// Line 145, Address: 0x101db20, Func Offset: 0xb0
	// Line 147, Address: 0x101db2c, Func Offset: 0xbc
	// Func End, Address: 0x101db38, Func Offset: 0xc8
}

// 
// Start address: 0x101db40
void m_wait(_anon1* actionwk)
{
	// Line 149, Address: 0x101db40, Func Offset: 0
	// Line 150, Address: 0x101db48, Func Offset: 0x8
	// Line 152, Address: 0x101db70, Func Offset: 0x30
	// Line 153, Address: 0x101db80, Func Offset: 0x40
	// Line 155, Address: 0x101db8c, Func Offset: 0x4c
	// Func End, Address: 0x101db98, Func Offset: 0x58
}

// 
// Start address: 0x101dba0
void m_appear0(_anon1* actionwk)
{
	// Line 157, Address: 0x101dba0, Func Offset: 0
	// Line 158, Address: 0x101dbac, Func Offset: 0xc
	// Line 160, Address: 0x101dbd4, Func Offset: 0x34
	// Line 161, Address: 0x101dbe0, Func Offset: 0x40
	// Line 162, Address: 0x101dbf0, Func Offset: 0x50
	// Line 163, Address: 0x101dc00, Func Offset: 0x60
	// Line 165, Address: 0x101dc0c, Func Offset: 0x6c
	// Line 166, Address: 0x101dc18, Func Offset: 0x78
	// Func End, Address: 0x101dc28, Func Offset: 0x88
}

// 
// Start address: 0x101dc30
void m_disp(_anon1* actionwk)
{
	// Line 168, Address: 0x101dc30, Func Offset: 0
	// Line 169, Address: 0x101dc3c, Func Offset: 0xc
	// Line 170, Address: 0x101dc50, Func Offset: 0x20
	// Line 171, Address: 0x101dc5c, Func Offset: 0x2c
	// Func End, Address: 0x101dc6c, Func Offset: 0x3c
}

// 
// Start address: 0x101dc70
void m_appear1(_anon1* actionwk)
{
	// Line 173, Address: 0x101dc70, Func Offset: 0
	// Line 174, Address: 0x101dc7c, Func Offset: 0xc
	// Line 176, Address: 0x101dca4, Func Offset: 0x34
	// Line 177, Address: 0x101dcb0, Func Offset: 0x40
	// Line 178, Address: 0x101dcc0, Func Offset: 0x50
	// Line 179, Address: 0x101dcd0, Func Offset: 0x60
	// Line 180, Address: 0x101dcdc, Func Offset: 0x6c
	// Line 181, Address: 0x101dce8, Func Offset: 0x78
	// Line 182, Address: 0x101dcf4, Func Offset: 0x84
	// Line 183, Address: 0x101dd0c, Func Offset: 0x9c
	// Line 184, Address: 0x101dd18, Func Offset: 0xa8
	// Line 186, Address: 0x101dd24, Func Offset: 0xb4
	// Line 188, Address: 0x101dd50, Func Offset: 0xe0
	// Line 190, Address: 0x101dd64, Func Offset: 0xf4
	// Line 191, Address: 0x101dd74, Func Offset: 0x104
	// Line 194, Address: 0x101dd84, Func Offset: 0x114
	// Line 195, Address: 0x101dd90, Func Offset: 0x120
	// Func End, Address: 0x101dda0, Func Offset: 0x130
}

// 
// Start address: 0x101dda0
void m_move(_anon1* actionwk)
{
	_anon1* a1;
	// Line 197, Address: 0x101dda0, Func Offset: 0
	// Line 200, Address: 0x101ddac, Func Offset: 0xc
	// Line 201, Address: 0x101ddc4, Func Offset: 0x24
	// Line 202, Address: 0x101dddc, Func Offset: 0x3c
	// Line 204, Address: 0x101de04, Func Offset: 0x64
	// Line 205, Address: 0x101de10, Func Offset: 0x70
	// Line 207, Address: 0x101de28, Func Offset: 0x88
	// Line 209, Address: 0x101de34, Func Offset: 0x94
	// Line 211, Address: 0x101de48, Func Offset: 0xa8
	// Line 213, Address: 0x101de5c, Func Offset: 0xbc
	// Line 214, Address: 0x101de70, Func Offset: 0xd0
	// Line 215, Address: 0x101de80, Func Offset: 0xe0
	// Line 216, Address: 0x101de90, Func Offset: 0xf0
	// Line 217, Address: 0x101dea0, Func Offset: 0x100
	// Line 221, Address: 0x101deac, Func Offset: 0x10c
	// Line 222, Address: 0x101deb8, Func Offset: 0x118
	// Func End, Address: 0x101dec8, Func Offset: 0x128
}

// 
// Start address: 0x101ded0
void eb_ga1(_anon1* actionwk)
{
	// Line 229, Address: 0x101ded0, Func Offset: 0
	// Line 230, Address: 0x101dedc, Func Offset: 0xc
	// Line 233, Address: 0x101df10, Func Offset: 0x40
	// Line 235, Address: 0x101df1c, Func Offset: 0x4c
	// Line 236, Address: 0x101df28, Func Offset: 0x58
	// Line 238, Address: 0x101df30, Func Offset: 0x60
	// Line 239, Address: 0x101df3c, Func Offset: 0x6c
	// Line 241, Address: 0x101df44, Func Offset: 0x74
	// Line 242, Address: 0x101df50, Func Offset: 0x80
	// Func End, Address: 0x101df60, Func Offset: 0x90
}

// 
// Start address: 0x101df60
void s_init(_anon1* actionwk)
{
	// Line 244, Address: 0x101df60, Func Offset: 0
	// Line 245, Address: 0x101df68, Func Offset: 0x8
	// Line 246, Address: 0x101df78, Func Offset: 0x18
	// Line 247, Address: 0x101df88, Func Offset: 0x28
	// Line 249, Address: 0x101df94, Func Offset: 0x34
	// Line 250, Address: 0x101dfa0, Func Offset: 0x40
	// Line 251, Address: 0x101dfac, Func Offset: 0x4c
	// Line 252, Address: 0x101dfb8, Func Offset: 0x58
	// Line 253, Address: 0x101dfc4, Func Offset: 0x64
	// Line 254, Address: 0x101dfd4, Func Offset: 0x74
	// Line 255, Address: 0x101dfe0, Func Offset: 0x80
	// Line 256, Address: 0x101dfec, Func Offset: 0x8c
	// Func End, Address: 0x101dff8, Func Offset: 0x98
}

// 
// Start address: 0x101e000
void s_fall(_anon1* actionwk)
{
	// Line 258, Address: 0x101e000, Func Offset: 0
	// Line 259, Address: 0x101e00c, Func Offset: 0xc
	// Line 261, Address: 0x101e034, Func Offset: 0x34
	// Line 262, Address: 0x101e040, Func Offset: 0x40
	// Line 274, Address: 0x101e048, Func Offset: 0x48
	// Line 275, Address: 0x101e05c, Func Offset: 0x5c
	// Line 276, Address: 0x101e070, Func Offset: 0x70
	// Func End, Address: 0x101e080, Func Offset: 0x80
}

// 
// Start address: 0x101e080
void s_die(_anon1* actionwk)
{
	// Line 278, Address: 0x101e080, Func Offset: 0
	// Line 279, Address: 0x101e08c, Func Offset: 0xc
	// Line 280, Address: 0x101e098, Func Offset: 0x18
	// Func End, Address: 0x101e0a8, Func Offset: 0x28
}

