typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_4)(_anon1*);
typedef void(*type_8)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[3];
typedef void(*type_5)(_anon1*)[2];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef void(*type_9)(_anon1*)[5];
typedef _anon1 type_10[128];
typedef _anon0* type_11[2];

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
_anon0* pat_legmeca[2];
_anon1 actwk[128];

void legmeca(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m0move(_anon1* pActwk);
void m_move_com(_anon1* pActwk);
void m1reset(_anon1* pActwk);
void m1move(_anon1* pActwk);
void m0reset(_anon1* pActwk);
void m_init_leg(_anon1* pActwk);
void leg_center(_anon1* pActwk);
void c_wait(_anon1* pActwk);
void c_roll(_anon1* pActwk);
void c_roll1(_anon1* pActwk);
void leg_radius(_anon1* pActwk);
void r_wait(_anon1* pActwk);
void r_roll(_anon1* pActwk);
void _ridechk(_anon1* pActwk, _anon1* pPlayerwk);
void slave(_anon1* pActwk);

// 
// Start address: 0x1026140
void legmeca(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[5];
	// Line 91, Address: 0x1026140, Func Offset: 0
	// Line 92, Address: 0x102614c, Func Offset: 0xc
	// Line 101, Address: 0x1026178, Func Offset: 0x38
	// Line 103, Address: 0x1026188, Func Offset: 0x48
	// Line 104, Address: 0x1026194, Func Offset: 0x54
	// Line 107, Address: 0x102619c, Func Offset: 0x5c
	// Line 109, Address: 0x10261d8, Func Offset: 0x98
	// Func End, Address: 0x10261e8, Func Offset: 0xa8
}

// 
// Start address: 0x10261f0
void m_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	short a6;
	short d4;
	short d5;
	short d6;
	short i;
	// Line 114, Address: 0x10261f0, Func Offset: 0
	// Line 130, Address: 0x1026210, Func Offset: 0x20
	// Line 131, Address: 0x102621c, Func Offset: 0x2c
	// Line 132, Address: 0x102622c, Func Offset: 0x3c
	// Line 133, Address: 0x1026238, Func Offset: 0x48
	// Line 134, Address: 0x1026244, Func Offset: 0x54
	// Line 135, Address: 0x102624c, Func Offset: 0x5c
	// Line 137, Address: 0x1026258, Func Offset: 0x68
	// Line 139, Address: 0x1026260, Func Offset: 0x70
	// Line 141, Address: 0x1026274, Func Offset: 0x84
	// Line 142, Address: 0x1026280, Func Offset: 0x90
	// Line 144, Address: 0x1026288, Func Offset: 0x98
	// Line 145, Address: 0x1026298, Func Offset: 0xa8
	// Line 146, Address: 0x10262a4, Func Offset: 0xb4
	// Line 147, Address: 0x10262b0, Func Offset: 0xc0
	// Line 148, Address: 0x10262bc, Func Offset: 0xcc
	// Line 149, Address: 0x10262c8, Func Offset: 0xd8
	// Line 150, Address: 0x10262d4, Func Offset: 0xe4
	// Line 151, Address: 0x10262e0, Func Offset: 0xf0
	// Line 152, Address: 0x10262f0, Func Offset: 0x100
	// Line 153, Address: 0x10262fc, Func Offset: 0x10c
	// Line 156, Address: 0x1026304, Func Offset: 0x114
	// Line 157, Address: 0x102634c, Func Offset: 0x15c
	// Line 158, Address: 0x1026358, Func Offset: 0x168
	// Line 159, Address: 0x1026394, Func Offset: 0x1a4
	// Line 160, Address: 0x10263a4, Func Offset: 0x1b4
	// Line 161, Address: 0x10263b0, Func Offset: 0x1c0
	// Line 162, Address: 0x10263c0, Func Offset: 0x1d0
	// Line 163, Address: 0x10263e8, Func Offset: 0x1f8
	// Line 164, Address: 0x10263f4, Func Offset: 0x204
	// Line 166, Address: 0x1026400, Func Offset: 0x210
	// Line 167, Address: 0x1026410, Func Offset: 0x220
	// Line 168, Address: 0x102641c, Func Offset: 0x22c
	// Line 170, Address: 0x1026428, Func Offset: 0x238
	// Line 171, Address: 0x1026434, Func Offset: 0x244
	// Func End, Address: 0x1026458, Func Offset: 0x268
}

// 
// Start address: 0x1026460
void m0move(_anon1* pActwk)
{
	// Line 176, Address: 0x1026460, Func Offset: 0
	// Line 178, Address: 0x102646c, Func Offset: 0xc
	// Line 181, Address: 0x102649c, Func Offset: 0x3c
	// Line 183, Address: 0x10264a8, Func Offset: 0x48
	// Line 184, Address: 0x10264b4, Func Offset: 0x54
	// Func End, Address: 0x10264c4, Func Offset: 0x64
}

// 
// Start address: 0x10264d0
void m_move_com(_anon1* pActwk)
{
	// Line 187, Address: 0x10264d0, Func Offset: 0
	// Line 189, Address: 0x10264dc, Func Offset: 0xc
	// Line 190, Address: 0x102650c, Func Offset: 0x3c
	// Line 191, Address: 0x102653c, Func Offset: 0x6c
	// Line 192, Address: 0x102656c, Func Offset: 0x9c
	// Line 193, Address: 0x102659c, Func Offset: 0xcc
	// Line 194, Address: 0x10265cc, Func Offset: 0xfc
	// Line 195, Address: 0x10265fc, Func Offset: 0x12c
	// Line 198, Address: 0x102662c, Func Offset: 0x15c
	// Line 199, Address: 0x1026638, Func Offset: 0x168
	// Func End, Address: 0x1026648, Func Offset: 0x178
}

// 
// Start address: 0x1026650
void m1reset(_anon1* pActwk)
{
	// Line 204, Address: 0x1026650, Func Offset: 0
	// Line 205, Address: 0x102665c, Func Offset: 0xc
	// Line 207, Address: 0x1026668, Func Offset: 0x18
	// Line 208, Address: 0x1026674, Func Offset: 0x24
	// Func End, Address: 0x1026684, Func Offset: 0x34
}

// 
// Start address: 0x1026690
void m1move(_anon1* pActwk)
{
	// Line 213, Address: 0x1026690, Func Offset: 0
	// Line 215, Address: 0x102669c, Func Offset: 0xc
	// Line 217, Address: 0x10266a8, Func Offset: 0x18
	// Line 219, Address: 0x10266d8, Func Offset: 0x48
	// Line 220, Address: 0x10266e4, Func Offset: 0x54
	// Func End, Address: 0x10266f4, Func Offset: 0x64
}

// 
// Start address: 0x1026700
void m0reset(_anon1* pActwk)
{
	// Line 225, Address: 0x1026700, Func Offset: 0
	// Line 226, Address: 0x102670c, Func Offset: 0xc
	// Line 227, Address: 0x1026718, Func Offset: 0x18
	// Line 228, Address: 0x1026724, Func Offset: 0x24
	// Func End, Address: 0x1026734, Func Offset: 0x34
}

// 
// Start address: 0x1026740
void m_init_leg(_anon1* pActwk)
{
	// Line 234, Address: 0x1026740, Func Offset: 0
	// Line 235, Address: 0x1026748, Func Offset: 0x8
	// Line 236, Address: 0x1026750, Func Offset: 0x10
	// Line 237, Address: 0x102675c, Func Offset: 0x1c
	// Line 238, Address: 0x1026768, Func Offset: 0x28
	// Line 239, Address: 0x1026774, Func Offset: 0x34
	// Line 240, Address: 0x1026780, Func Offset: 0x40
	// Func End, Address: 0x102678c, Func Offset: 0x4c
}

// 
// Start address: 0x1026790
void leg_center(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 245, Address: 0x1026790, Func Offset: 0
	// Line 246, Address: 0x102679c, Func Offset: 0xc
	// Line 253, Address: 0x10267c0, Func Offset: 0x30
	// Line 254, Address: 0x10267fc, Func Offset: 0x6c
	// Func End, Address: 0x102680c, Func Offset: 0x7c
}

// 
// Start address: 0x1026810
void c_wait(_anon1* pActwk)
{
	// Line 259, Address: 0x1026810, Func Offset: 0
	// Line 260, Address: 0x102681c, Func Offset: 0xc
	// Line 261, Address: 0x1026830, Func Offset: 0x20
	// Line 262, Address: 0x102683c, Func Offset: 0x2c
	// Func End, Address: 0x102684c, Func Offset: 0x3c
}

// 
// Start address: 0x1026850
void c_roll(_anon1* pActwk)
{
	// Line 267, Address: 0x1026850, Func Offset: 0
	// Line 268, Address: 0x1026858, Func Offset: 0x8
	// Line 269, Address: 0x1026868, Func Offset: 0x18
	// Line 270, Address: 0x1026874, Func Offset: 0x24
	// Line 271, Address: 0x1026880, Func Offset: 0x30
	// Func End, Address: 0x102688c, Func Offset: 0x3c
}

// 
// Start address: 0x1026890
void c_roll1(_anon1* pActwk)
{
	_anon1* pMasterwk;
	_anon1* pLegwk;
	_anon1* pKusariwk;
	_anon2 ld0;
	_anon2 ld1;
	_anon2 ld3;
	_anon2 ld4;
	_anon2 ld5;
	short d0;
	short d1;
	short d6;
	short a6;
	// Line 276, Address: 0x1026890, Func Offset: 0
	// Line 285, Address: 0x10268b0, Func Offset: 0x20
	// Line 286, Address: 0x10268d8, Func Offset: 0x48
	// Line 289, Address: 0x10268e4, Func Offset: 0x54
	// Line 290, Address: 0x10268f0, Func Offset: 0x60
	// Line 291, Address: 0x10268fc, Func Offset: 0x6c
	// Line 292, Address: 0x1026908, Func Offset: 0x78
	// Line 293, Address: 0x1026914, Func Offset: 0x84
	// Line 294, Address: 0x1026918, Func Offset: 0x88
	// Line 295, Address: 0x102691c, Func Offset: 0x8c
	// Line 296, Address: 0x1026930, Func Offset: 0xa0
	// Line 297, Address: 0x1026938, Func Offset: 0xa8
	// Line 298, Address: 0x1026940, Func Offset: 0xb0
	// Line 299, Address: 0x102694c, Func Offset: 0xbc
	// Line 302, Address: 0x1026958, Func Offset: 0xc8
	// Line 303, Address: 0x1026988, Func Offset: 0xf8
	// Line 304, Address: 0x1026994, Func Offset: 0x104
	// Line 305, Address: 0x10269a4, Func Offset: 0x114
	// Line 306, Address: 0x10269b4, Func Offset: 0x124
	// Line 307, Address: 0x10269bc, Func Offset: 0x12c
	// Line 308, Address: 0x10269c4, Func Offset: 0x134
	// Line 312, Address: 0x10269dc, Func Offset: 0x14c
	// Line 313, Address: 0x1026a00, Func Offset: 0x170
	// Line 315, Address: 0x1026a10, Func Offset: 0x180
	// Line 317, Address: 0x1026a34, Func Offset: 0x1a4
	// Line 318, Address: 0x1026a3c, Func Offset: 0x1ac
	// Line 319, Address: 0x1026a4c, Func Offset: 0x1bc
	// Line 320, Address: 0x1026a5c, Func Offset: 0x1cc
	// Line 321, Address: 0x1026a64, Func Offset: 0x1d4
	// Line 322, Address: 0x1026a6c, Func Offset: 0x1dc
	// Line 323, Address: 0x1026a7c, Func Offset: 0x1ec
	// Line 324, Address: 0x1026a88, Func Offset: 0x1f8
	// Line 326, Address: 0x1026a90, Func Offset: 0x200
	// Line 327, Address: 0x1026a9c, Func Offset: 0x20c
	// Func End, Address: 0x1026ac0, Func Offset: 0x230
}

// 
// Start address: 0x1026ac0
void leg_radius(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 332, Address: 0x1026ac0, Func Offset: 0
	// Line 333, Address: 0x1026acc, Func Offset: 0xc
	// Line 339, Address: 0x1026ae8, Func Offset: 0x28
	// Line 340, Address: 0x1026b24, Func Offset: 0x64
	// Func End, Address: 0x1026b34, Func Offset: 0x74
}

// 
// Start address: 0x1026b40
void r_wait(_anon1* pActwk)
{
	_anon1* pMasterwk;
	_anon1* pLegwk0;
	_anon1* pLegwk1;
	// Line 345, Address: 0x1026b40, Func Offset: 0
	// Line 350, Address: 0x1026b58, Func Offset: 0x18
	// Line 352, Address: 0x1026b74, Func Offset: 0x34
	// Line 353, Address: 0x1026b9c, Func Offset: 0x5c
	// Line 355, Address: 0x1026ba8, Func Offset: 0x68
	// Line 356, Address: 0x1026bb4, Func Offset: 0x74
	// Line 357, Address: 0x1026bd8, Func Offset: 0x98
	// Line 358, Address: 0x1026bfc, Func Offset: 0xbc
	// Line 359, Address: 0x1026c08, Func Offset: 0xc8
	// Line 362, Address: 0x1026c14, Func Offset: 0xd4
	// Line 363, Address: 0x1026c20, Func Offset: 0xe0
	// Func End, Address: 0x1026c3c, Func Offset: 0xfc
}

// 
// Start address: 0x1026c40
void r_roll(_anon1* pActwk)
{
	_anon1* pMasterwk;
	_anon1* pLegwk0;
	_anon1* pLegwk1;
	short d0;
	short d1;
	// Line 368, Address: 0x1026c40, Func Offset: 0
	// Line 374, Address: 0x1026c60, Func Offset: 0x20
	// Line 375, Address: 0x1026c74, Func Offset: 0x34
	// Line 378, Address: 0x1026c80, Func Offset: 0x40
	// Line 379, Address: 0x1026ca8, Func Offset: 0x68
	// Line 380, Address: 0x1026cb4, Func Offset: 0x74
	// Line 381, Address: 0x1026cc0, Func Offset: 0x80
	// Line 383, Address: 0x1026cd0, Func Offset: 0x90
	// Line 384, Address: 0x1026ce4, Func Offset: 0xa4
	// Line 386, Address: 0x1026cf4, Func Offset: 0xb4
	// Line 387, Address: 0x1026d00, Func Offset: 0xc0
	// Line 390, Address: 0x1026d10, Func Offset: 0xd0
	// Line 391, Address: 0x1026d38, Func Offset: 0xf8
	// Line 393, Address: 0x1026d44, Func Offset: 0x104
	// Line 394, Address: 0x1026d50, Func Offset: 0x110
	// Line 395, Address: 0x1026d74, Func Offset: 0x134
	// Line 396, Address: 0x1026d98, Func Offset: 0x158
	// Line 397, Address: 0x1026d9c, Func Offset: 0x15c
	// Line 398, Address: 0x1026da0, Func Offset: 0x160
	// Line 399, Address: 0x1026da4, Func Offset: 0x164
	// Line 400, Address: 0x1026da8, Func Offset: 0x168
	// Line 401, Address: 0x1026dac, Func Offset: 0x16c
	// Line 404, Address: 0x1026db0, Func Offset: 0x170
	// Func End, Address: 0x1026dd4, Func Offset: 0x194
}

// 
// Start address: 0x1026de0
void _ridechk(_anon1* pActwk, _anon1* pPlayerwk)
{
	short stack;
	unsigned char d0;
	// Line 409, Address: 0x1026de0, Func Offset: 0
	// Line 413, Address: 0x1026df8, Func Offset: 0x18
	// Line 414, Address: 0x1026e08, Func Offset: 0x28
	// Line 415, Address: 0x1026e10, Func Offset: 0x30
	// Line 416, Address: 0x1026e1c, Func Offset: 0x3c
	// Line 417, Address: 0x1026e44, Func Offset: 0x64
	// Line 418, Address: 0x1026e48, Func Offset: 0x68
	// Line 419, Address: 0x1026e50, Func Offset: 0x70
	// Line 420, Address: 0x1026e5c, Func Offset: 0x7c
	// Line 422, Address: 0x1026e64, Func Offset: 0x84
	// Line 424, Address: 0x1026e74, Func Offset: 0x94
	// Func End, Address: 0x1026e8c, Func Offset: 0xac
}

// 
// Start address: 0x1026e90
void slave(_anon1* pActwk)
{
	_anon1* pMasterwk;
	// Line 429, Address: 0x1026e90, Func Offset: 0
	// Line 432, Address: 0x1026ea0, Func Offset: 0x10
	// Line 433, Address: 0x1026ec8, Func Offset: 0x38
	// Line 435, Address: 0x1026edc, Func Offset: 0x4c
	// Line 437, Address: 0x1026ee8, Func Offset: 0x58
	// Func End, Address: 0x1026efc, Func Offset: 0x6c
}

