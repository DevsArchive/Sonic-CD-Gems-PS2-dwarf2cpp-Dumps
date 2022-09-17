typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_9)(_anon1*);
typedef void(*type_11)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[4];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef char type_5[44];
typedef _anon0* type_6[4];
typedef char type_7[16];
typedef char type_8[16];
typedef void(*type_10)(_anon1*)[2];
typedef void(*type_12)(_anon1*)[9];
typedef char type_13[32];

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

_anon0 slight_pat0;
_anon0 slight_pat1;
_anon0 slight_pat2;
_anon0 slight_pat3;
_anon0 slight_pat4;
_anon0 slight_pat5;
_anon0 slight_pat6;
_anon0* slight7pat[4];
_anon0* slight7patb[4];
unsigned char time_flag;
_anon5 gametimer;
_anon2 scra_v_posit;

void slight7(_anon1* pActwk);
void slight7_init(_anon1* pActwk);
void slight7_move(_anon1* pActwk);
void type0(_anon1* pActwk);
void slight7_pchgsub(_anon1* pActwk, char* pA2);
void type1(_anon1* pActwk);
void type2(_anon1* pActwk);
void type3(_anon1* pActwk);
void type4(_anon1* pActwk);
void type7(_anon1* pActwk);

// 
// Start address: 0x10205b0
void slight7(_anon1* pActwk)
{
	void(*slight_acttbl)(_anon1*)[2];
	// Line 106, Address: 0x10205b0, Func Offset: 0
	// Line 107, Address: 0x10205bc, Func Offset: 0xc
	// Line 112, Address: 0x10205d8, Func Offset: 0x28
	// Line 113, Address: 0x1020614, Func Offset: 0x64
	// Line 114, Address: 0x1020628, Func Offset: 0x78
	// Func End, Address: 0x1020638, Func Offset: 0x88
}

// 
// Start address: 0x1020640
void slight7_init(_anon1* pActwk)
{
	// Line 123, Address: 0x1020640, Func Offset: 0
	// Line 124, Address: 0x102064c, Func Offset: 0xc
	// Line 125, Address: 0x102065c, Func Offset: 0x1c
	// Line 126, Address: 0x102066c, Func Offset: 0x2c
	// Line 127, Address: 0x102067c, Func Offset: 0x3c
	// Line 128, Address: 0x1020688, Func Offset: 0x48
	// Line 129, Address: 0x1020694, Func Offset: 0x54
	// Line 131, Address: 0x10206a4, Func Offset: 0x64
	// Line 133, Address: 0x10206c4, Func Offset: 0x84
	// Line 134, Address: 0x10206d0, Func Offset: 0x90
	// Line 135, Address: 0x10206dc, Func Offset: 0x9c
	// Line 136, Address: 0x10206f8, Func Offset: 0xb8
	// Line 137, Address: 0x1020704, Func Offset: 0xc4
	// Line 139, Address: 0x1020710, Func Offset: 0xd0
	// Line 140, Address: 0x1020728, Func Offset: 0xe8
	// Line 141, Address: 0x1020738, Func Offset: 0xf8
	// Line 144, Address: 0x1020748, Func Offset: 0x108
	// Line 145, Address: 0x1020754, Func Offset: 0x114
	// Func End, Address: 0x1020764, Func Offset: 0x124
}

// 
// Start address: 0x1020770
void slight7_move(_anon1* pActwk)
{
	unsigned char bD0;
	void(*slight_move_tbl)(_anon1*)[9];
	// Line 154, Address: 0x1020770, Func Offset: 0
	// Line 157, Address: 0x1020780, Func Offset: 0x10
	// Line 169, Address: 0x10207ac, Func Offset: 0x3c
	// Line 171, Address: 0x10207d0, Func Offset: 0x60
	// Line 173, Address: 0x10207f8, Func Offset: 0x88
	// Line 174, Address: 0x1020814, Func Offset: 0xa4
	// Line 176, Address: 0x1020830, Func Offset: 0xc0
	// Line 177, Address: 0x1020848, Func Offset: 0xd8
	// Line 179, Address: 0x1020854, Func Offset: 0xe4
	// Line 182, Address: 0x102085c, Func Offset: 0xec
	// Line 183, Address: 0x1020878, Func Offset: 0x108
	// Line 186, Address: 0x1020884, Func Offset: 0x114
	// Func End, Address: 0x1020898, Func Offset: 0x128
}

// 
// Start address: 0x10208a0
void type0(_anon1* pActwk)
{
	char type0_pchgtbl[44];
	// Line 195, Address: 0x10208a0, Func Offset: 0
	// Line 196, Address: 0x10208ac, Func Offset: 0xc
	// Line 211, Address: 0x10208e0, Func Offset: 0x40
	// Line 212, Address: 0x10208ec, Func Offset: 0x4c
	// Line 213, Address: 0x10208fc, Func Offset: 0x5c
	// Func End, Address: 0x102090c, Func Offset: 0x6c
}

// 
// Start address: 0x1020910
void slight7_pchgsub(_anon1* pActwk, char* pA2)
{
	unsigned char bD1;
	// Line 224, Address: 0x1020910, Func Offset: 0
	// Line 227, Address: 0x1020920, Func Offset: 0x10
	// Line 228, Address: 0x1020930, Func Offset: 0x20
	// Line 229, Address: 0x102094c, Func Offset: 0x3c
	// Line 230, Address: 0x1020964, Func Offset: 0x54
	// Line 231, Address: 0x102097c, Func Offset: 0x6c
	// Line 232, Address: 0x1020990, Func Offset: 0x80
	// Line 234, Address: 0x10209d4, Func Offset: 0xc4
	// Line 235, Address: 0x10209e4, Func Offset: 0xd4
	// Line 236, Address: 0x10209f4, Func Offset: 0xe4
	// Line 237, Address: 0x10209fc, Func Offset: 0xec
	// Line 238, Address: 0x1020a0c, Func Offset: 0xfc
	// Line 242, Address: 0x1020a1c, Func Offset: 0x10c
	// Line 243, Address: 0x1020a38, Func Offset: 0x128
	// Line 244, Address: 0x1020a68, Func Offset: 0x158
	// Line 246, Address: 0x1020a70, Func Offset: 0x160
	// Func End, Address: 0x1020a80, Func Offset: 0x170
}

// 
// Start address: 0x1020a80
void type1(_anon1* pActwk)
{
	char type1_pchgtbl[32];
	// Line 255, Address: 0x1020a80, Func Offset: 0
	// Line 256, Address: 0x1020a8c, Func Offset: 0xc
	// Line 267, Address: 0x1020ac0, Func Offset: 0x40
	// Line 268, Address: 0x1020acc, Func Offset: 0x4c
	// Line 269, Address: 0x1020adc, Func Offset: 0x5c
	// Func End, Address: 0x1020aec, Func Offset: 0x6c
}

// 
// Start address: 0x1020af0
void type2(_anon1* pActwk)
{
	char type2_pchgtbl[16];
	// Line 278, Address: 0x1020af0, Func Offset: 0
	// Line 279, Address: 0x1020afc, Func Offset: 0xc
	// Line 286, Address: 0x1020b30, Func Offset: 0x40
	// Line 287, Address: 0x1020b3c, Func Offset: 0x4c
	// Line 288, Address: 0x1020b4c, Func Offset: 0x5c
	// Func End, Address: 0x1020b5c, Func Offset: 0x6c
}

// 
// Start address: 0x1020b60
void type3(_anon1* pActwk)
{
	char type3_pchgtbl[16];
	// Line 297, Address: 0x1020b60, Func Offset: 0
	// Line 298, Address: 0x1020b6c, Func Offset: 0xc
	// Line 305, Address: 0x1020ba0, Func Offset: 0x40
	// Line 306, Address: 0x1020bac, Func Offset: 0x4c
	// Line 307, Address: 0x1020bbc, Func Offset: 0x5c
	// Func End, Address: 0x1020bcc, Func Offset: 0x6c
}

// 
// Start address: 0x1020bd0
void type4(_anon1* pActwk)
{
	// Line 316, Address: 0x1020bd0, Func Offset: 0
	// Line 317, Address: 0x1020bd8, Func Offset: 0x8
	// Line 318, Address: 0x1020bf4, Func Offset: 0x24
	// Line 320, Address: 0x1020c04, Func Offset: 0x34
	// Line 321, Address: 0x1020c24, Func Offset: 0x54
	// Func End, Address: 0x1020c30, Func Offset: 0x60
}

// 
// Start address: 0x1020c30
void type7(_anon1* pActwk)
{
	// Line 329, Address: 0x1020c30, Func Offset: 0
	// Line 330, Address: 0x1020c38, Func Offset: 0x8
	// Line 331, Address: 0x1020c54, Func Offset: 0x24
	// Line 333, Address: 0x1020c64, Func Offset: 0x34
	// Line 334, Address: 0x1020c84, Func Offset: 0x54
	// Line 335, Address: 0x1020c94, Func Offset: 0x64
	// Line 336, Address: 0x1020ca4, Func Offset: 0x74
	// Func End, Address: 0x1020cb0, Func Offset: 0x80
}

