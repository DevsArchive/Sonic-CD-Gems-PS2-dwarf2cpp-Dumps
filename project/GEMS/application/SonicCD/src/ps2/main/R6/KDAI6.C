typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_8)(_anon1*);
typedef void(*type_10)(_anon1*);

typedef _anon9 type_0[20];
typedef _anon9 type_1[0];
typedef unsigned char type_2[8];
typedef unsigned char type_3[2];
typedef _anon0* type_4[6];
typedef unsigned char type_5[22];
typedef unsigned char* type_6[0];
typedef unsigned char type_7[16];
typedef void(*type_9)(_anon1*)[2];
typedef void(*type_11)(_anon1*)[4];
typedef _anon1 type_12[128];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
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

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

void(*kdai6_tbl)(_anon1*)[2];
_anon1 actwk[128];
_anon0* kdai6pat[6];
unsigned char* kdai6pchg[0];
_anon7 swdata;
_anon7 swdata2;
_anon7 swdata1;
unsigned char chibi_flag;
void(*move_tbl)(_anon1*)[4];
_anon5 gametimer;
unsigned char kdpat0[8];
_anon0 kdai6pat0;
_anon0 kdai6pat1;
_anon0 kdai6pat2;
_anon0 kdai6pat3;
_anon0 kdai6pat4;
_anon0 kdai6pat5;

void kdai6(_anon1* pActwk);
short kdai6_ridechk(_anon1* pActwk);
void kdai6_init(_anon1* pActwk);
void kdai6_move(_anon1* pActwk);
short kdai6_rangecheck(_anon1* pActwk);
void kaiten_play(_anon1* pActwk);
void k_move(_anon1* pActwk);
void jumpchk_d(_anon1* pActwk);
void dai6_move(_anon1* pActwk);
void kd_mv_up(_anon1* pActwk);
void kd_mv_down(_anon1* pActwk);
void kd_mv_right(_anon1* pActwk);
void kd_mv_left(_anon1* pActwk);
short kd_dair6_sub2(_anon1* pActwk);

// 
// Start address: 0x1017c60
void kdai6(_anon1* pActwk)
{
	// Line 80, Address: 0x1017c60, Func Offset: 0
	// Line 81, Address: 0x1017c6c, Func Offset: 0xc
	// Line 82, Address: 0x1017cb0, Func Offset: 0x50
	// Line 83, Address: 0x1017cbc, Func Offset: 0x5c
	// Line 84, Address: 0x1017cd0, Func Offset: 0x70
	// Func End, Address: 0x1017ce0, Func Offset: 0x80
}

// 
// Start address: 0x1017ce0
short kdai6_ridechk(_anon1* pActwk)
{
	// Line 88, Address: 0x1017ce0, Func Offset: 0
	// Line 89, Address: 0x1017cec, Func Offset: 0xc
	// Line 90, Address: 0x1017d00, Func Offset: 0x20
	// Func End, Address: 0x1017d10, Func Offset: 0x30
}

// 
// Start address: 0x1017d10
void kdai6_init(_anon1* pActwk)
{
	// Line 102, Address: 0x1017d10, Func Offset: 0
	// Line 103, Address: 0x1017d18, Func Offset: 0x8
	// Line 104, Address: 0x1017d28, Func Offset: 0x18
	// Line 105, Address: 0x1017d34, Func Offset: 0x24
	// Line 106, Address: 0x1017d40, Func Offset: 0x30
	// Line 107, Address: 0x1017d50, Func Offset: 0x40
	// Line 108, Address: 0x1017d60, Func Offset: 0x50
	// Line 109, Address: 0x1017d70, Func Offset: 0x60
	// Line 110, Address: 0x1017d7c, Func Offset: 0x6c
	// Line 111, Address: 0x1017d88, Func Offset: 0x78
	// Line 112, Address: 0x1017d98, Func Offset: 0x88
	// Func End, Address: 0x1017da4, Func Offset: 0x94
}

// 
// Start address: 0x1017db0
void kdai6_move(_anon1* pActwk)
{
	short iD0;
	_anon1* pPlaywk;
	// Line 124, Address: 0x1017db0, Func Offset: 0
	// Line 129, Address: 0x1017dc4, Func Offset: 0x14
	// Line 130, Address: 0x1017dcc, Func Offset: 0x1c
	// Line 132, Address: 0x1017dd8, Func Offset: 0x28
	// Line 134, Address: 0x1017dec, Func Offset: 0x3c
	// Line 135, Address: 0x1017e00, Func Offset: 0x50
	// Line 140, Address: 0x1017e10, Func Offset: 0x60
	// Line 141, Address: 0x1017e1c, Func Offset: 0x6c
	// Line 142, Address: 0x1017e28, Func Offset: 0x78
	// Line 143, Address: 0x1017e34, Func Offset: 0x84
	// Line 145, Address: 0x1017e48, Func Offset: 0x98
	// Line 146, Address: 0x1017e50, Func Offset: 0xa0
	// Line 147, Address: 0x1017e54, Func Offset: 0xa4
	// Line 148, Address: 0x1017e84, Func Offset: 0xd4
	// Line 150, Address: 0x1017e94, Func Offset: 0xe4
	// Line 151, Address: 0x1017eb0, Func Offset: 0x100
	// Line 154, Address: 0x1017eb8, Func Offset: 0x108
	// Line 157, Address: 0x1017ec0, Func Offset: 0x110
	// Line 158, Address: 0x1017ecc, Func Offset: 0x11c
	// Line 160, Address: 0x1017ee0, Func Offset: 0x130
	// Line 161, Address: 0x1017eec, Func Offset: 0x13c
	// Func End, Address: 0x1017f04, Func Offset: 0x154
}

// 
// Start address: 0x1017f10
short kdai6_rangecheck(_anon1* pActwk)
{
	short iD0;
	// Line 173, Address: 0x1017f10, Func Offset: 0
	// Line 176, Address: 0x1017f1c, Func Offset: 0xc
	// Line 177, Address: 0x1017f5c, Func Offset: 0x4c
	// Line 178, Address: 0x1017f70, Func Offset: 0x60
	// Line 179, Address: 0x1017f8c, Func Offset: 0x7c
	// Line 180, Address: 0x1017fac, Func Offset: 0x9c
	// Line 181, Address: 0x1017fb0, Func Offset: 0xa0
	// Func End, Address: 0x1017fc0, Func Offset: 0xb0
}

// 
// Start address: 0x1017fc0
void kaiten_play(_anon1* pActwk)
{
	unsigned char tbl[16];
	unsigned char byD0;
	unsigned char byD1;
	short iSin;
	short iCos;
	_anon1* pPlaywk;
	_anon2 lD0;
	// Line 193, Address: 0x1017fc0, Func Offset: 0
	// Line 194, Address: 0x1017fd8, Func Offset: 0x18
	// Line 204, Address: 0x101800c, Func Offset: 0x4c
	// Line 205, Address: 0x1018014, Func Offset: 0x54
	// Line 206, Address: 0x1018020, Func Offset: 0x60
	// Line 207, Address: 0x1018034, Func Offset: 0x74
	// Line 208, Address: 0x101803c, Func Offset: 0x7c
	// Line 209, Address: 0x101804c, Func Offset: 0x8c
	// Line 210, Address: 0x101806c, Func Offset: 0xac
	// Line 211, Address: 0x1018078, Func Offset: 0xb8
	// Line 213, Address: 0x10180a4, Func Offset: 0xe4
	// Line 214, Address: 0x10180ac, Func Offset: 0xec
	// Line 215, Address: 0x10180b0, Func Offset: 0xf0
	// Line 216, Address: 0x10180b8, Func Offset: 0xf8
	// Line 217, Address: 0x10180c0, Func Offset: 0x100
	// Line 218, Address: 0x10180d0, Func Offset: 0x110
	// Line 219, Address: 0x10180e0, Func Offset: 0x120
	// Line 221, Address: 0x10180ec, Func Offset: 0x12c
	// Line 222, Address: 0x10180fc, Func Offset: 0x13c
	// Line 223, Address: 0x1018110, Func Offset: 0x150
	// Line 225, Address: 0x1018120, Func Offset: 0x160
	// Line 226, Address: 0x101812c, Func Offset: 0x16c
	// Line 227, Address: 0x1018138, Func Offset: 0x178
	// Func End, Address: 0x1018154, Func Offset: 0x194
}

// 
// Start address: 0x1018160
void k_move(_anon1* pActwk)
{
	_anon1* pPlaywk;
	// Line 239, Address: 0x1018160, Func Offset: 0
	// Line 242, Address: 0x101816c, Func Offset: 0xc
	// Line 243, Address: 0x1018174, Func Offset: 0x14
	// Line 246, Address: 0x101819c, Func Offset: 0x3c
	// Line 248, Address: 0x10181b4, Func Offset: 0x54
	// Line 249, Address: 0x10181c0, Func Offset: 0x60
	// Line 251, Address: 0x10181c8, Func Offset: 0x68
	// Line 253, Address: 0x10181e0, Func Offset: 0x80
	// Line 254, Address: 0x10181ec, Func Offset: 0x8c
	// Line 255, Address: 0x1018200, Func Offset: 0xa0
	// Line 257, Address: 0x1018204, Func Offset: 0xa4
	// Line 261, Address: 0x101820c, Func Offset: 0xac
	// Line 263, Address: 0x1018224, Func Offset: 0xc4
	// Line 264, Address: 0x1018230, Func Offset: 0xd0
	// Line 266, Address: 0x1018238, Func Offset: 0xd8
	// Line 268, Address: 0x1018250, Func Offset: 0xf0
	// Line 269, Address: 0x101825c, Func Offset: 0xfc
	// Line 270, Address: 0x1018270, Func Offset: 0x110
	// Line 273, Address: 0x1018274, Func Offset: 0x114
	// Func End, Address: 0x1018284, Func Offset: 0x124
}

// 
// Start address: 0x1018290
void jumpchk_d(_anon1* pActwk)
{
	_anon1* pPlaywk;
	short iSin;
	short iCos;
	unsigned char byD0;
	_anon2 lD1;
	// Line 285, Address: 0x1018290, Func Offset: 0
	// Line 291, Address: 0x10182a4, Func Offset: 0x14
	// Line 292, Address: 0x10182ac, Func Offset: 0x1c
	// Line 293, Address: 0x10182b8, Func Offset: 0x28
	// Line 294, Address: 0x10182d0, Func Offset: 0x40
	// Line 296, Address: 0x10182d4, Func Offset: 0x44
	// Line 297, Address: 0x10182dc, Func Offset: 0x4c
	// Line 298, Address: 0x10182e4, Func Offset: 0x54
	// Line 299, Address: 0x10182f8, Func Offset: 0x68
	// Line 300, Address: 0x101831c, Func Offset: 0x8c
	// Line 301, Address: 0x1018328, Func Offset: 0x98
	// Line 302, Address: 0x1018338, Func Offset: 0xa8
	// Line 303, Address: 0x101835c, Func Offset: 0xcc
	// Line 304, Address: 0x1018368, Func Offset: 0xd8
	// Line 306, Address: 0x1018378, Func Offset: 0xe8
	// Line 307, Address: 0x1018384, Func Offset: 0xf4
	// Line 308, Address: 0x1018390, Func Offset: 0x100
	// Line 309, Address: 0x1018398, Func Offset: 0x108
	// Line 311, Address: 0x101839c, Func Offset: 0x10c
	// Line 313, Address: 0x10183b0, Func Offset: 0x120
	// Line 314, Address: 0x10183b8, Func Offset: 0x128
	// Line 315, Address: 0x10183c0, Func Offset: 0x130
	// Line 319, Address: 0x10183c8, Func Offset: 0x138
	// Line 320, Address: 0x10183d0, Func Offset: 0x140
	// Line 323, Address: 0x10183d8, Func Offset: 0x148
	// Line 325, Address: 0x10183ec, Func Offset: 0x15c
	// Line 326, Address: 0x10183f8, Func Offset: 0x168
	// Line 328, Address: 0x1018400, Func Offset: 0x170
	// Line 330, Address: 0x1018414, Func Offset: 0x184
	// Line 331, Address: 0x101841c, Func Offset: 0x18c
	// Line 332, Address: 0x1018424, Func Offset: 0x194
	// Line 336, Address: 0x101842c, Func Offset: 0x19c
	// Line 337, Address: 0x1018434, Func Offset: 0x1a4
	// Line 338, Address: 0x101843c, Func Offset: 0x1ac
	// Line 341, Address: 0x1018448, Func Offset: 0x1b8
	// Line 342, Address: 0x1018454, Func Offset: 0x1c4
	// Line 343, Address: 0x101845c, Func Offset: 0x1cc
	// Func End, Address: 0x1018474, Func Offset: 0x1e4
}

// 
// Start address: 0x1018480
void dai6_move(_anon1* pActwk)
{
	// Line 362, Address: 0x1018480, Func Offset: 0
	// Line 363, Address: 0x101848c, Func Offset: 0xc
	// Line 364, Address: 0x10184bc, Func Offset: 0x3c
	// Func End, Address: 0x10184cc, Func Offset: 0x4c
}

// 
// Start address: 0x10184d0
void kd_mv_up(_anon1* pActwk)
{
	short iD0;
	// Line 376, Address: 0x10184d0, Func Offset: 0
	// Line 379, Address: 0x10184e0, Func Offset: 0x10
	// Line 380, Address: 0x10184f4, Func Offset: 0x24
	// Line 381, Address: 0x1018524, Func Offset: 0x54
	// Line 382, Address: 0x101852c, Func Offset: 0x5c
	// Func End, Address: 0x1018540, Func Offset: 0x70
}

// 
// Start address: 0x1018540
void kd_mv_down(_anon1* pActwk)
{
	short iD0;
	// Line 394, Address: 0x1018540, Func Offset: 0
	// Line 397, Address: 0x1018550, Func Offset: 0x10
	// Line 398, Address: 0x1018564, Func Offset: 0x24
	// Line 399, Address: 0x1018590, Func Offset: 0x50
	// Func End, Address: 0x10185a4, Func Offset: 0x64
}

// 
// Start address: 0x10185b0
void kd_mv_right(_anon1* pActwk)
{
	short iD0;
	int lXsv;
	_anon2 lD0;
	// Line 411, Address: 0x10185b0, Func Offset: 0
	// Line 416, Address: 0x10185c4, Func Offset: 0x14
	// Line 417, Address: 0x10185cc, Func Offset: 0x1c
	// Line 418, Address: 0x10185e0, Func Offset: 0x30
	// Line 420, Address: 0x101860c, Func Offset: 0x5c
	// Line 421, Address: 0x101861c, Func Offset: 0x6c
	// Line 422, Address: 0x1018628, Func Offset: 0x78
	// Line 423, Address: 0x1018634, Func Offset: 0x84
	// Func End, Address: 0x101864c, Func Offset: 0x9c
}

// 
// Start address: 0x1018650
void kd_mv_left(_anon1* pActwk)
{
	short iD0;
	int lXsv;
	_anon2 lD0;
	// Line 435, Address: 0x1018650, Func Offset: 0
	// Line 440, Address: 0x1018664, Func Offset: 0x14
	// Line 441, Address: 0x101866c, Func Offset: 0x1c
	// Line 442, Address: 0x1018680, Func Offset: 0x30
	// Line 444, Address: 0x10186b0, Func Offset: 0x60
	// Line 445, Address: 0x10186c0, Func Offset: 0x70
	// Line 446, Address: 0x10186cc, Func Offset: 0x7c
	// Line 447, Address: 0x10186d8, Func Offset: 0x88
	// Func End, Address: 0x10186f0, Func Offset: 0xa0
}

// 
// Start address: 0x10186f0
short kd_dair6_sub2(_anon1* pActwk)
{
	short iSin;
	short iCos;
	unsigned short wD0;
	// Line 459, Address: 0x10186f0, Func Offset: 0
	// Line 465, Address: 0x1018700, Func Offset: 0x10
	// Line 466, Address: 0x101871c, Func Offset: 0x2c
	// Line 468, Address: 0x1018730, Func Offset: 0x40
	// Line 469, Address: 0x1018740, Func Offset: 0x50
	// Line 470, Address: 0x1018750, Func Offset: 0x60
	// Line 475, Address: 0x1018770, Func Offset: 0x80
	// Line 476, Address: 0x1018780, Func Offset: 0x90
	// Line 477, Address: 0x1018784, Func Offset: 0x94
	// Func End, Address: 0x1018798, Func Offset: 0xa8
}

