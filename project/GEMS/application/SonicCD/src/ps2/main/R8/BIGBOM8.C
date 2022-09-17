typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_6)(_anon1*);
typedef void(*type_14)(_anon1*);
typedef void(*type_16)(_anon1*);
typedef void(*type_18)(_anon1*);
typedef void(*type_24)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon0* type_1[5];
typedef void(*type_3)(_anon1*)[13];
typedef _anon7 type_4[0];
typedef _anon0* type_5[2];
typedef short type_7[4];
typedef void(*type_8)(_anon1*)[7];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef short type_11[4];
typedef _anon0* type_12[5];
typedef _anon0* type_13[2];
typedef void(*type_15)(_anon1*)[4];
typedef void(*type_17)(_anon1*)[2];
typedef void(*type_19)(_anon1*)[2];
typedef _anon1 type_20[128];
typedef unsigned char* type_21[1];
typedef unsigned char* type_22[1];
typedef unsigned char* type_23[1];
typedef void(*type_25)(_anon1*)[5];
typedef unsigned char* type_26[1];

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

_anon0 pat000;
_anon0 pat001;
_anon0 pat002;
_anon0 pat003;
_anon0 pat004;
_anon0* pat_bigbom[5];
_anon0 pat100;
_anon0 pat101;
_anon0* pat1[2];
_anon0 pat200;
_anon0 pat201;
_anon0 pat202;
_anon0 pat203;
_anon0 pat204;
_anon0* pat2[5];
_anon0 pat300;
_anon0 pat301;
_anon0* pat3[2];
_anon1 actwk[128];
unsigned char prio_flag;

void bigbom(_anon1* pActwk);
void bigbom0(_anon1* pActwk);
void m_move0(_anon1* pActwk);
void m_move1();
void m_move2(_anon1* pActwk);
void m_move3(_anon1* pActwk);
void m_move4();
void m_move5(_anon1* pActwk);
void m_move6(_anon1* pActwk);
void make_fire(_anon1* pActwk, _anon1** pNewActwk);
void bigbom1(_anon1* pActwk);
void s0_init(_anon1* pActwk);
void s0_fall(_anon1* pActwk);
void s0_wait(_anon1* pActwk);
void s0_move_const0(_anon1* pActwk);
void s0_move_const(_anon1* pActwk);
void s0_prio_const(_anon1* pActwk);
void s0_move0(_anon1* pActwk);
void s0_move(_anon1* pActwk);
short s0_check(_anon1* pActwk, _anon1* pPlayerwk);
void to_s0_stop(_anon1* pActwk);
void s0_stop(_anon1* pActwk);
void s0_stop0(_anon1* pActwk);
void s0_move1(_anon1* pActwk);
void s0_stop1(_anon1* pActwk);
void s0_die(_anon1* pActwk);
void bigbom2(_anon1* pActwk);
void s1_init(_anon1* pActwk);
void s1_wait(_anon1* pActwk);
void s1_move(_anon1* pActwk);
void s1_die(_anon1* pActwk);
void bigbom3(_anon1* pActwk);
void s2_init(_anon1* pActwk);
void s2_move(_anon1* pActwk);
void bigbom4(_anon1* pActwk);
void s3_init(_anon1* pActwk);
void s3_move(_anon1* pActwk);

// 
// Start address: 0x1026f00
void bigbom(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[5];
	// Line 192, Address: 0x1026f00, Func Offset: 0
	// Line 193, Address: 0x1026f0c, Func Offset: 0xc
	// Line 202, Address: 0x1026f38, Func Offset: 0x38
	// Line 203, Address: 0x1026f78, Func Offset: 0x78
	// Func End, Address: 0x1026f88, Func Offset: 0x88
}

// 
// Start address: 0x1026f90
void bigbom0(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[7];
	// Line 245, Address: 0x1026f90, Func Offset: 0
	// Line 246, Address: 0x1026f9c, Func Offset: 0xc
	// Line 257, Address: 0x1026fc8, Func Offset: 0x38
	// Line 258, Address: 0x1027004, Func Offset: 0x74
	// Line 260, Address: 0x1027020, Func Offset: 0x90
	// Line 262, Address: 0x1027034, Func Offset: 0xa4
	// Func End, Address: 0x1027044, Func Offset: 0xb4
}

// 
// Start address: 0x1027050
void m_move0(_anon1* pActwk)
{
	_anon1* pNewActwk;
	// Line 267, Address: 0x1027050, Func Offset: 0
	// Line 270, Address: 0x102705c, Func Offset: 0xc
	// Line 272, Address: 0x102706c, Func Offset: 0x1c
	// Line 274, Address: 0x1027080, Func Offset: 0x30
	// Line 275, Address: 0x102708c, Func Offset: 0x3c
	// Line 278, Address: 0x1027094, Func Offset: 0x44
	// Line 279, Address: 0x10270a4, Func Offset: 0x54
	// Line 280, Address: 0x10270b0, Func Offset: 0x60
	// Line 281, Address: 0x10270c0, Func Offset: 0x70
	// Line 282, Address: 0x10270d0, Func Offset: 0x80
	// Line 283, Address: 0x10270e0, Func Offset: 0x90
	// Line 285, Address: 0x102711c, Func Offset: 0xcc
	// Line 286, Address: 0x1027158, Func Offset: 0x108
	// Line 288, Address: 0x1027168, Func Offset: 0x118
	// Line 290, Address: 0x1027174, Func Offset: 0x124
	// Func End, Address: 0x1027184, Func Offset: 0x134
}

// 
// Start address: 0x1027190
void m_move1()
{
	// Line 295, Address: 0x1027190, Func Offset: 0
	// Line 297, Address: 0x1027194, Func Offset: 0x4
	// Func End, Address: 0x10271a0, Func Offset: 0x10
}

// 
// Start address: 0x10271a0
void m_move2(_anon1* pActwk)
{
	// Line 302, Address: 0x10271a0, Func Offset: 0
	// Line 303, Address: 0x10271ac, Func Offset: 0xc
	// Line 304, Address: 0x10271b8, Func Offset: 0x18
	// Line 306, Address: 0x10271c8, Func Offset: 0x28
	// Line 307, Address: 0x10271d4, Func Offset: 0x34
	// Func End, Address: 0x10271e4, Func Offset: 0x44
}

// 
// Start address: 0x10271f0
void m_move3(_anon1* pActwk)
{
	_anon1* pObj1wk;
	_anon1* pNewActwk;
	// Line 312, Address: 0x10271f0, Func Offset: 0
	// Line 316, Address: 0x1027200, Func Offset: 0x10
	// Line 317, Address: 0x1027210, Func Offset: 0x20
	// Line 320, Address: 0x1027228, Func Offset: 0x38
	// Line 321, Address: 0x1027250, Func Offset: 0x60
	// Line 323, Address: 0x102725c, Func Offset: 0x6c
	// Line 325, Address: 0x1027270, Func Offset: 0x80
	// Line 326, Address: 0x102727c, Func Offset: 0x8c
	// Line 329, Address: 0x1027284, Func Offset: 0x94
	// Line 330, Address: 0x1027294, Func Offset: 0xa4
	// Line 332, Address: 0x10272a0, Func Offset: 0xb0
	// Line 333, Address: 0x10272dc, Func Offset: 0xec
	// Line 334, Address: 0x10272ec, Func Offset: 0xfc
	// Line 335, Address: 0x1027310, Func Offset: 0x120
	// Line 336, Address: 0x1027338, Func Offset: 0x148
	// Line 338, Address: 0x102734c, Func Offset: 0x15c
	// Line 339, Address: 0x102735c, Func Offset: 0x16c
	// Line 341, Address: 0x102736c, Func Offset: 0x17c
	// Line 344, Address: 0x102737c, Func Offset: 0x18c
	// Func End, Address: 0x1027390, Func Offset: 0x1a0
}

// 
// Start address: 0x1027390
void m_move4()
{
	// Line 349, Address: 0x1027390, Func Offset: 0
	// Line 351, Address: 0x1027394, Func Offset: 0x4
	// Func End, Address: 0x10273a0, Func Offset: 0x10
}

// 
// Start address: 0x10273a0
void m_move5(_anon1* pActwk)
{
	// Line 356, Address: 0x10273a0, Func Offset: 0
	// Line 357, Address: 0x10273ac, Func Offset: 0xc
	// Line 358, Address: 0x10273b4, Func Offset: 0x14
	// Line 360, Address: 0x10273c4, Func Offset: 0x24
	// Line 361, Address: 0x10273d0, Func Offset: 0x30
	// Func End, Address: 0x10273e0, Func Offset: 0x40
}

// 
// Start address: 0x10273e0
void m_move6(_anon1* pActwk)
{
	_anon1* pObj1wk;
	_anon1* pNewActwk;
	_anon1* pAct1;
	// Line 366, Address: 0x10273e0, Func Offset: 0
	// Line 371, Address: 0x10273f0, Func Offset: 0x10
	// Line 373, Address: 0x1027400, Func Offset: 0x20
	// Line 375, Address: 0x102741c, Func Offset: 0x3c
	// Line 376, Address: 0x1027444, Func Offset: 0x64
	// Line 379, Address: 0x1027450, Func Offset: 0x70
	// Line 381, Address: 0x102746c, Func Offset: 0x8c
	// Line 383, Address: 0x1027480, Func Offset: 0xa0
	// Line 384, Address: 0x102748c, Func Offset: 0xac
	// Line 388, Address: 0x1027494, Func Offset: 0xb4
	// Line 389, Address: 0x10274a4, Func Offset: 0xc4
	// Line 390, Address: 0x10274b0, Func Offset: 0xd0
	// Line 391, Address: 0x10274c0, Func Offset: 0xe0
	// Line 395, Address: 0x10274d0, Func Offset: 0xf0
	// Line 397, Address: 0x10274ec, Func Offset: 0x10c
	// Line 398, Address: 0x10274fc, Func Offset: 0x11c
	// Line 399, Address: 0x102750c, Func Offset: 0x12c
	// Line 400, Address: 0x1027520, Func Offset: 0x140
	// Line 401, Address: 0x1027530, Func Offset: 0x150
	// Line 402, Address: 0x1027540, Func Offset: 0x160
	// Line 403, Address: 0x1027554, Func Offset: 0x174
	// Line 404, Address: 0x1027564, Func Offset: 0x184
	// Line 405, Address: 0x1027574, Func Offset: 0x194
	// Line 406, Address: 0x1027588, Func Offset: 0x1a8
	// Line 407, Address: 0x1027598, Func Offset: 0x1b8
	// Line 408, Address: 0x10275a8, Func Offset: 0x1c8
	// Line 409, Address: 0x10275bc, Func Offset: 0x1dc
	// Line 410, Address: 0x10275cc, Func Offset: 0x1ec
	// Line 411, Address: 0x10275dc, Func Offset: 0x1fc
	// Line 412, Address: 0x10275f0, Func Offset: 0x210
	// Line 413, Address: 0x1027600, Func Offset: 0x220
	// Line 414, Address: 0x1027610, Func Offset: 0x230
	// Line 415, Address: 0x1027624, Func Offset: 0x244
	// Line 416, Address: 0x1027634, Func Offset: 0x254
	// Line 417, Address: 0x1027640, Func Offset: 0x260
	// Line 420, Address: 0x1027654, Func Offset: 0x274
	// Line 422, Address: 0x1027670, Func Offset: 0x290
	// Line 424, Address: 0x102767c, Func Offset: 0x29c
	// Func End, Address: 0x1027690, Func Offset: 0x2b0
}

// 
// Start address: 0x1027690
void make_fire(_anon1* pActwk, _anon1** pNewActwk)
{
	// Line 427, Address: 0x1027690, Func Offset: 0
	// Line 428, Address: 0x10276a0, Func Offset: 0x10
	// Line 430, Address: 0x10276b4, Func Offset: 0x24
	// Line 431, Address: 0x10276c0, Func Offset: 0x30
	// Line 434, Address: 0x10276c8, Func Offset: 0x38
	// Line 435, Address: 0x10276dc, Func Offset: 0x4c
	// Line 436, Address: 0x10276ec, Func Offset: 0x5c
	// Line 437, Address: 0x1027700, Func Offset: 0x70
	// Line 438, Address: 0x1027714, Func Offset: 0x84
	// Line 439, Address: 0x1027728, Func Offset: 0x98
	// Line 440, Address: 0x1027738, Func Offset: 0xa8
	// Line 442, Address: 0x102774c, Func Offset: 0xbc
	// Func End, Address: 0x102775c, Func Offset: 0xcc
}

// 
// Start address: 0x1027760
void bigbom1(_anon1* pActwk)
{
	_anon1* pMainwk;
	void(*tbl)(_anon1*)[13];
	// Line 469, Address: 0x1027760, Func Offset: 0
	// Line 472, Address: 0x1027770, Func Offset: 0x10
	// Line 491, Address: 0x102779c, Func Offset: 0x3c
	// Line 492, Address: 0x10277d8, Func Offset: 0x78
	// Line 493, Address: 0x1027800, Func Offset: 0xa0
	// Line 495, Address: 0x1027814, Func Offset: 0xb4
	// Line 496, Address: 0x1027820, Func Offset: 0xc0
	// Line 497, Address: 0x102782c, Func Offset: 0xcc
	// Line 498, Address: 0x1027838, Func Offset: 0xd8
	// Line 501, Address: 0x1027840, Func Offset: 0xe0
	// Line 503, Address: 0x102784c, Func Offset: 0xec
	// Func End, Address: 0x1027860, Func Offset: 0x100
}

// 
// Start address: 0x1027860
void s0_init(_anon1* pActwk)
{
	// Line 508, Address: 0x1027860, Func Offset: 0
	// Line 509, Address: 0x102786c, Func Offset: 0xc
	// Line 510, Address: 0x102787c, Func Offset: 0x1c
	// Line 511, Address: 0x1027888, Func Offset: 0x28
	// Line 512, Address: 0x1027894, Func Offset: 0x34
	// Line 513, Address: 0x10278a4, Func Offset: 0x44
	// Line 514, Address: 0x10278b0, Func Offset: 0x50
	// Line 515, Address: 0x10278bc, Func Offset: 0x5c
	// Line 516, Address: 0x10278c8, Func Offset: 0x68
	// Line 518, Address: 0x10278d8, Func Offset: 0x78
	// Line 519, Address: 0x10278e4, Func Offset: 0x84
	// Func End, Address: 0x10278f4, Func Offset: 0x94
}

// 
// Start address: 0x1027900
void s0_fall(_anon1* pActwk)
{
	short d1;
	// Line 524, Address: 0x1027900, Func Offset: 0
	// Line 527, Address: 0x1027910, Func Offset: 0x10
	// Line 528, Address: 0x1027924, Func Offset: 0x24
	// Line 529, Address: 0x1027938, Func Offset: 0x38
	// Line 531, Address: 0x1027948, Func Offset: 0x48
	// Line 532, Address: 0x1027958, Func Offset: 0x58
	// Line 534, Address: 0x1027974, Func Offset: 0x74
	// Line 535, Address: 0x1027980, Func Offset: 0x80
	// Line 536, Address: 0x102798c, Func Offset: 0x8c
	// Line 539, Address: 0x1027994, Func Offset: 0x94
	// Line 540, Address: 0x10279a4, Func Offset: 0xa4
	// Line 541, Address: 0x10279b4, Func Offset: 0xb4
	// Line 544, Address: 0x10279c4, Func Offset: 0xc4
	// Func End, Address: 0x10279d8, Func Offset: 0xd8
}

// 
// Start address: 0x10279e0
void s0_wait(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short d0;
	// Line 549, Address: 0x10279e0, Func Offset: 0
	// Line 553, Address: 0x10279f4, Func Offset: 0x14
	// Line 554, Address: 0x10279fc, Func Offset: 0x1c
	// Line 556, Address: 0x1027a14, Func Offset: 0x34
	// Line 557, Address: 0x1027a20, Func Offset: 0x40
	// Line 558, Address: 0x1027a34, Func Offset: 0x54
	// Line 560, Address: 0x1027a44, Func Offset: 0x64
	// Line 561, Address: 0x1027a54, Func Offset: 0x74
	// Line 564, Address: 0x1027a60, Func Offset: 0x80
	// Func End, Address: 0x1027a78, Func Offset: 0x98
}

// 
// Start address: 0x1027a80
void s0_move_const0(_anon1* pActwk)
{
	// Line 569, Address: 0x1027a80, Func Offset: 0
	// Line 570, Address: 0x1027a8c, Func Offset: 0xc
	// Line 571, Address: 0x1027a9c, Func Offset: 0x1c
	// Line 572, Address: 0x1027aac, Func Offset: 0x2c
	// Line 573, Address: 0x1027ab8, Func Offset: 0x38
	// Line 574, Address: 0x1027ac4, Func Offset: 0x44
	// Line 576, Address: 0x1027ad0, Func Offset: 0x50
	// Line 577, Address: 0x1027adc, Func Offset: 0x5c
	// Func End, Address: 0x1027aec, Func Offset: 0x6c
}

// 
// Start address: 0x1027af0
void s0_move_const(_anon1* pActwk)
{
	unsigned char bd0;
	short tbl[4];
	// Line 582, Address: 0x1027af0, Func Offset: 0
	// Line 584, Address: 0x1027afc, Func Offset: 0xc
	// Line 589, Address: 0x1027b28, Func Offset: 0x38
	// Line 590, Address: 0x1027b2c, Func Offset: 0x3c
	// Line 592, Address: 0x1027b40, Func Offset: 0x50
	// Line 594, Address: 0x1027b4c, Func Offset: 0x5c
	// Line 596, Address: 0x1027b54, Func Offset: 0x64
	// Line 598, Address: 0x1027b6c, Func Offset: 0x7c
	// Line 599, Address: 0x1027b7c, Func Offset: 0x8c
	// Line 601, Address: 0x1027b94, Func Offset: 0xa4
	// Line 602, Address: 0x1027ba4, Func Offset: 0xb4
	// Line 603, Address: 0x1027bb4, Func Offset: 0xc4
	// Line 605, Address: 0x1027bd4, Func Offset: 0xe4
	// Line 606, Address: 0x1027be4, Func Offset: 0xf4
	// Line 608, Address: 0x1027bfc, Func Offset: 0x10c
	// Line 610, Address: 0x1027c0c, Func Offset: 0x11c
	// Func End, Address: 0x1027c1c, Func Offset: 0x12c
}

// 
// Start address: 0x1027c20
void s0_prio_const(_anon1* pActwk)
{
	unsigned char bd0;
	// Line 615, Address: 0x1027c20, Func Offset: 0
	// Line 618, Address: 0x1027c30, Func Offset: 0x10
	// Line 619, Address: 0x1027c34, Func Offset: 0x14
	// Line 621, Address: 0x1027c48, Func Offset: 0x28
	// Line 623, Address: 0x1027c54, Func Offset: 0x34
	// Line 625, Address: 0x1027c5c, Func Offset: 0x3c
	// Line 627, Address: 0x1027c70, Func Offset: 0x50
	// Line 629, Address: 0x1027c8c, Func Offset: 0x6c
	// Line 632, Address: 0x1027c98, Func Offset: 0x78
	// Func End, Address: 0x1027cac, Func Offset: 0x8c
}

// 
// Start address: 0x1027cb0
void s0_move0(_anon1* pActwk)
{
	// Line 637, Address: 0x1027cb0, Func Offset: 0
	// Line 638, Address: 0x1027cbc, Func Offset: 0xc
	// Line 639, Address: 0x1027ccc, Func Offset: 0x1c
	// Line 640, Address: 0x1027cdc, Func Offset: 0x2c
	// Line 641, Address: 0x1027ce4, Func Offset: 0x34
	// Line 642, Address: 0x1027cec, Func Offset: 0x3c
	// Line 644, Address: 0x1027cf8, Func Offset: 0x48
	// Line 645, Address: 0x1027d04, Func Offset: 0x54
	// Func End, Address: 0x1027d14, Func Offset: 0x64
}

// 
// Start address: 0x1027d20
void s0_move(_anon1* pActwk)
{
	short d0;
	short d1;
	short tbl[4];
	// Line 650, Address: 0x1027d20, Func Offset: 0
	// Line 652, Address: 0x1027d34, Func Offset: 0x14
	// Line 657, Address: 0x1027d60, Func Offset: 0x40
	// Line 659, Address: 0x1027d78, Func Offset: 0x58
	// Line 660, Address: 0x1027d8c, Func Offset: 0x6c
	// Line 662, Address: 0x1027d9c, Func Offset: 0x7c
	// Line 663, Address: 0x1027dac, Func Offset: 0x8c
	// Line 665, Address: 0x1027dc4, Func Offset: 0xa4
	// Line 666, Address: 0x1027dd4, Func Offset: 0xb4
	// Line 667, Address: 0x1027de4, Func Offset: 0xc4
	// Line 668, Address: 0x1027df4, Func Offset: 0xd4
	// Line 669, Address: 0x1027e00, Func Offset: 0xe0
	// Line 671, Address: 0x1027e10, Func Offset: 0xf0
	// Line 673, Address: 0x1027e1c, Func Offset: 0xfc
	// Line 675, Address: 0x1027e24, Func Offset: 0x104
	// Line 676, Address: 0x1027e34, Func Offset: 0x114
	// Line 678, Address: 0x1027e4c, Func Offset: 0x12c
	// Line 679, Address: 0x1027e5c, Func Offset: 0x13c
	// Line 680, Address: 0x1027e6c, Func Offset: 0x14c
	// Line 682, Address: 0x1027e8c, Func Offset: 0x16c
	// Line 684, Address: 0x1027ea0, Func Offset: 0x180
	// Line 686, Address: 0x1027ebc, Func Offset: 0x19c
	// Line 689, Address: 0x1027ec8, Func Offset: 0x1a8
	// Func End, Address: 0x1027ee0, Func Offset: 0x1c0
}

// 
// Start address: 0x1027ee0
short s0_check(_anon1* pActwk, _anon1* pPlayerwk)
{
	short d0;
	short carry;
	// Line 694, Address: 0x1027ee0, Func Offset: 0
	// Line 698, Address: 0x1027ef4, Func Offset: 0x14
	// Line 699, Address: 0x1027f04, Func Offset: 0x24
	// Line 700, Address: 0x1027f18, Func Offset: 0x38
	// Line 701, Address: 0x1027f24, Func Offset: 0x44
	// Line 703, Address: 0x1027f38, Func Offset: 0x58
	// Line 704, Address: 0x1027f48, Func Offset: 0x68
	// Line 705, Address: 0x1027f5c, Func Offset: 0x7c
	// Line 706, Address: 0x1027f68, Func Offset: 0x88
	// Line 707, Address: 0x1027f90, Func Offset: 0xb0
	// Line 708, Address: 0x1027f94, Func Offset: 0xb4
	// Line 711, Address: 0x1027f9c, Func Offset: 0xbc
	// Line 713, Address: 0x1027fa0, Func Offset: 0xc0
	// Line 714, Address: 0x1027fa4, Func Offset: 0xc4
	// Func End, Address: 0x1027fb8, Func Offset: 0xd8
}

// 
// Start address: 0x1027fc0
void to_s0_stop(_anon1* pActwk)
{
	// Line 719, Address: 0x1027fc0, Func Offset: 0
	// Line 720, Address: 0x1027fcc, Func Offset: 0xc
	// Line 722, Address: 0x1027fdc, Func Offset: 0x1c
	// Line 723, Address: 0x1027fe8, Func Offset: 0x28
	// Func End, Address: 0x1027ff8, Func Offset: 0x38
}

// 
// Start address: 0x1028000
void s0_stop(_anon1* pActwk)
{
	_anon1* pMainwk;
	// Line 728, Address: 0x1028000, Func Offset: 0
	// Line 731, Address: 0x1028010, Func Offset: 0x10
	// Line 732, Address: 0x1028020, Func Offset: 0x20
	// Line 733, Address: 0x1028048, Func Offset: 0x48
	// Line 735, Address: 0x1028054, Func Offset: 0x54
	// Line 736, Address: 0x1028060, Func Offset: 0x60
	// Func End, Address: 0x1028074, Func Offset: 0x74
}

// 
// Start address: 0x1028080
void s0_stop0(_anon1* pActwk)
{
	unsigned char bd0;
	// Line 741, Address: 0x1028080, Func Offset: 0
	// Line 744, Address: 0x102808c, Func Offset: 0xc
	// Line 746, Address: 0x10280a8, Func Offset: 0x28
	// Line 747, Address: 0x10280ac, Func Offset: 0x2c
	// Line 749, Address: 0x10280c0, Func Offset: 0x40
	// Line 751, Address: 0x10280cc, Func Offset: 0x4c
	// Line 753, Address: 0x10280d4, Func Offset: 0x54
	// Func End, Address: 0x10280e4, Func Offset: 0x64
}

// 
// Start address: 0x10280f0
void s0_move1(_anon1* pActwk)
{
	// Line 758, Address: 0x10280f0, Func Offset: 0
	// Line 759, Address: 0x10280fc, Func Offset: 0xc
	// Line 760, Address: 0x1028108, Func Offset: 0x18
	// Line 762, Address: 0x1028118, Func Offset: 0x28
	// Line 763, Address: 0x1028124, Func Offset: 0x34
	// Func End, Address: 0x1028134, Func Offset: 0x44
}

// 
// Start address: 0x1028140
void s0_stop1(_anon1* pActwk)
{
	// Line 768, Address: 0x1028140, Func Offset: 0
	// Line 769, Address: 0x102814c, Func Offset: 0xc
	// Line 770, Address: 0x1028158, Func Offset: 0x18
	// Func End, Address: 0x1028168, Func Offset: 0x28
}

// 
// Start address: 0x1028170
void s0_die(_anon1* pActwk)
{
	// Line 775, Address: 0x1028170, Func Offset: 0
	// Line 776, Address: 0x102817c, Func Offset: 0xc
	// Line 777, Address: 0x1028188, Func Offset: 0x18
	// Func End, Address: 0x1028198, Func Offset: 0x28
}

// 
// Start address: 0x10281a0
void bigbom2(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[4];
	// Line 795, Address: 0x10281a0, Func Offset: 0
	// Line 796, Address: 0x10281ac, Func Offset: 0xc
	// Line 804, Address: 0x10281d8, Func Offset: 0x38
	// Line 805, Address: 0x1028214, Func Offset: 0x74
	// Line 806, Address: 0x1028220, Func Offset: 0x80
	// Func End, Address: 0x1028230, Func Offset: 0x90
}

// 
// Start address: 0x1028230
void s1_init(_anon1* pActwk)
{
	// Line 811, Address: 0x1028230, Func Offset: 0
	// Line 812, Address: 0x102823c, Func Offset: 0xc
	// Line 813, Address: 0x102824c, Func Offset: 0x1c
	// Line 814, Address: 0x102825c, Func Offset: 0x2c
	// Line 816, Address: 0x1028268, Func Offset: 0x38
	// Line 817, Address: 0x1028274, Func Offset: 0x44
	// Line 818, Address: 0x1028284, Func Offset: 0x54
	// Line 819, Address: 0x1028290, Func Offset: 0x60
	// Line 820, Address: 0x102829c, Func Offset: 0x6c
	// Line 822, Address: 0x10282a8, Func Offset: 0x78
	// Line 823, Address: 0x10282b4, Func Offset: 0x84
	// Func End, Address: 0x10282c4, Func Offset: 0x94
}

// 
// Start address: 0x10282d0
void s1_wait(_anon1* pActwk)
{
	unsigned char* pchg1[1];
	// Line 828, Address: 0x10282d0, Func Offset: 0
	// Line 839, Address: 0x10282dc, Func Offset: 0xc
	// Line 840, Address: 0x10282ec, Func Offset: 0x1c
	// Line 842, Address: 0x1028304, Func Offset: 0x34
	// Line 843, Address: 0x1028310, Func Offset: 0x40
	// Line 845, Address: 0x1028320, Func Offset: 0x50
	// Line 846, Address: 0x1028334, Func Offset: 0x64
	// Func End, Address: 0x1028344, Func Offset: 0x74
}

// 
// Start address: 0x1028350
void s1_move(_anon1* pActwk)
{
	unsigned char* pchg1[1];
	// Line 851, Address: 0x1028350, Func Offset: 0
	// Line 862, Address: 0x102835c, Func Offset: 0xc
	// Line 863, Address: 0x102836c, Func Offset: 0x1c
	// Line 864, Address: 0x102837c, Func Offset: 0x2c
	// Line 866, Address: 0x1028394, Func Offset: 0x44
	// Line 868, Address: 0x10283a4, Func Offset: 0x54
	// Line 869, Address: 0x10283b8, Func Offset: 0x68
	// Func End, Address: 0x10283c8, Func Offset: 0x78
}

// 
// Start address: 0x10283d0
void s1_die(_anon1* pActwk)
{
	_anon1* pMainwk;
	// Line 874, Address: 0x10283d0, Func Offset: 0
	// Line 877, Address: 0x10283e0, Func Offset: 0x10
	// Line 878, Address: 0x1028408, Func Offset: 0x38
	// Line 880, Address: 0x102841c, Func Offset: 0x4c
	// Line 882, Address: 0x1028428, Func Offset: 0x58
	// Line 883, Address: 0x1028434, Func Offset: 0x64
	// Func End, Address: 0x1028448, Func Offset: 0x78
}

// 
// Start address: 0x1028450
void bigbom3(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 895, Address: 0x1028450, Func Offset: 0
	// Line 896, Address: 0x102845c, Func Offset: 0xc
	// Line 902, Address: 0x1028478, Func Offset: 0x28
	// Line 903, Address: 0x10284b4, Func Offset: 0x64
	// Line 904, Address: 0x10284c0, Func Offset: 0x70
	// Func End, Address: 0x10284d0, Func Offset: 0x80
}

// 
// Start address: 0x10284d0
void s2_init(_anon1* pActwk)
{
	// Line 909, Address: 0x10284d0, Func Offset: 0
	// Line 910, Address: 0x10284dc, Func Offset: 0xc
	// Line 911, Address: 0x10284ec, Func Offset: 0x1c
	// Line 912, Address: 0x10284fc, Func Offset: 0x2c
	// Line 913, Address: 0x1028508, Func Offset: 0x38
	// Line 914, Address: 0x1028514, Func Offset: 0x44
	// Line 915, Address: 0x1028524, Func Offset: 0x54
	// Line 917, Address: 0x1028530, Func Offset: 0x60
	// Line 918, Address: 0x102853c, Func Offset: 0x6c
	// Func End, Address: 0x102854c, Func Offset: 0x7c
}

// 
// Start address: 0x1028550
void s2_move(_anon1* pActwk)
{
	unsigned char* pchg2[1];
	// Line 923, Address: 0x1028550, Func Offset: 0
	// Line 934, Address: 0x102855c, Func Offset: 0xc
	// Line 935, Address: 0x102856c, Func Offset: 0x1c
	// Line 937, Address: 0x1028584, Func Offset: 0x34
	// Line 938, Address: 0x1028590, Func Offset: 0x40
	// Line 941, Address: 0x1028598, Func Offset: 0x48
	// Line 943, Address: 0x10285ac, Func Offset: 0x5c
	// Func End, Address: 0x10285bc, Func Offset: 0x6c
}

// 
// Start address: 0x10285c0
void bigbom4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 961, Address: 0x10285c0, Func Offset: 0
	// Line 962, Address: 0x10285cc, Func Offset: 0xc
	// Line 968, Address: 0x10285e8, Func Offset: 0x28
	// Line 969, Address: 0x1028624, Func Offset: 0x64
	// Line 970, Address: 0x1028630, Func Offset: 0x70
	// Func End, Address: 0x1028640, Func Offset: 0x80
}

// 
// Start address: 0x1028640
void s3_init(_anon1* pActwk)
{
	// Line 975, Address: 0x1028640, Func Offset: 0
	// Line 976, Address: 0x102864c, Func Offset: 0xc
	// Line 977, Address: 0x102865c, Func Offset: 0x1c
	// Line 978, Address: 0x102866c, Func Offset: 0x2c
	// Line 979, Address: 0x1028678, Func Offset: 0x38
	// Line 980, Address: 0x1028684, Func Offset: 0x44
	// Line 981, Address: 0x1028690, Func Offset: 0x50
	// Line 982, Address: 0x102869c, Func Offset: 0x5c
	// Line 983, Address: 0x10286ac, Func Offset: 0x6c
	// Line 984, Address: 0x10286b8, Func Offset: 0x78
	// Line 986, Address: 0x10286c4, Func Offset: 0x84
	// Line 987, Address: 0x10286d0, Func Offset: 0x90
	// Func End, Address: 0x10286e0, Func Offset: 0xa0
}

// 
// Start address: 0x10286e0
void s3_move(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short d0;
	unsigned char bd0;
	unsigned char* pchg3[1];
	// Line 992, Address: 0x10286e0, Func Offset: 0
	// Line 1006, Address: 0x10286f8, Func Offset: 0x18
	// Line 1008, Address: 0x1028714, Func Offset: 0x34
	// Line 1009, Address: 0x1028718, Func Offset: 0x38
	// Line 1011, Address: 0x102872c, Func Offset: 0x4c
	// Line 1013, Address: 0x1028738, Func Offset: 0x58
	// Line 1016, Address: 0x1028740, Func Offset: 0x60
	// Line 1017, Address: 0x102875c, Func Offset: 0x7c
	// Line 1018, Address: 0x1028778, Func Offset: 0x98
	// Line 1019, Address: 0x102879c, Func Offset: 0xbc
	// Line 1021, Address: 0x10287c0, Func Offset: 0xe0
	// Line 1022, Address: 0x10287c8, Func Offset: 0xe8
	// Line 1023, Address: 0x10287d8, Func Offset: 0xf8
	// Line 1024, Address: 0x10287e8, Func Offset: 0x108
	// Line 1026, Address: 0x10287fc, Func Offset: 0x11c
	// Line 1027, Address: 0x1028808, Func Offset: 0x128
	// Line 1030, Address: 0x1028810, Func Offset: 0x130
	// Line 1032, Address: 0x1028824, Func Offset: 0x144
	// Func End, Address: 0x1028840, Func Offset: 0x160
}

