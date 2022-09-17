typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_7)(_anon1*);
typedef void(*type_14)(_anon1*);
typedef void(*type_17)(_anon1*);
typedef void(*type_20)(_anon1*);
typedef void(*type_23)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef tagPALETTEENTRY type_2[16];
typedef unsigned char* type_3[3];
typedef unsigned char* type_4[1];
typedef unsigned char type_5[3];
typedef unsigned char type_6[5];
typedef void(*type_8)(_anon1*)[3];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef short type_11[8];
typedef _anon1 type_12[128];
typedef tagPALETTEENTRY type_13[0];
typedef void(*type_15)(_anon1*)[2];
typedef _anon0* type_16[0];
typedef void(*type_18)(_anon1*)[6];
typedef unsigned char type_19[9];
typedef void(*type_21)(_anon1*)[3];
typedef _anon0* type_22[0];
typedef void(*type_24)(_anon1*)[2];
typedef unsigned char type_25[6];
typedef _anon0* type_26[0];
typedef unsigned char* type_27[0];

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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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

unsigned char bCarry;
void(*msnc_tbl)(_anon1*)[6];
_anon1 actwk[128];
unsigned char jmp_flg;
_anon0* mecasnc3pat[0];
unsigned char* msc_pchg[3];
tagPALETTEENTRY zone3colora[0];
unsigned char emie3end;
void(*emie3_tbl)(_anon1*)[3];
unsigned char ta_flag;
unsigned char* em_pchg[0];
_anon0* emie3pat[0];
tagPALETTEENTRY emie3_clr[16];
tagPALETTEENTRY* lpcolorwk;
void(*hari_tbl)(_anon1*)[3];
unsigned char plpower_m;
unsigned char plpower_a;
_anon0* hari3xpat[0];
short spd_tbl[8];
void(*heart_tbl)(_anon1*)[2];
void(*msfire_tbl)(_anon1*)[2];
unsigned char* fire_pchg[1];
unsigned char vatck_pchg[5];
unsigned char elec_pchg[9];
unsigned char hover_pchg[3];
unsigned char fire_pchg0[6];

unsigned char CSset_b(unsigned char bySrc, unsigned char byDst);
void mecasnc3(_anon1* pActwk);
void mecasnc3_init(_anon1* pActwk);
void mecasnc3_matu1(_anon1* pActwk);
void mecasnc3_come(_anon1* pActwk);
void mecasnc3_hovr(_anon1* pActwk);
void yposisetsub(_anon1* pActwk);
void mecasnc3_upmv(_anon1* pActwk);
void setfire(_anon1* pActwk);
void mecasnc3_rght(_anon1* pActwk);
void mecasnc3_fout(_anon1* pActwk);
void emie_speedset(_anon1* pActwk);
void emie_speedsety(_anon1* pActwk);
void emie_speedsetx(_anon1* pActwk);
void emie3(_anon1* pActwk);
void emie3_init(_anon1* pActwk);
void emiewalkret(_anon1* pActwk);
void emie3_walk(_anon1* pActwk);
void emie3_help(_anon1* pActwk);
void setdirect(_anon1* pActwk, _anon1* pPlaywk);
void dir_right(_anon1* pActwk);
void dir_left(_anon1* pActwk);
void empatchg(_anon1* pActwk, unsigned char** bppPtbl);
void emie3clrsetx(tagPALETTEENTRY* pPalet);
void emie3clrset();
void heartset(_anon1* pActwk);
void hari3x_fout(_anon1* pActwk);
void hari3x(_anon1* pActwk);
void hari3x_ridechk(_anon1* pActwk);
void hari3x_init(_anon1* pActwk);
void hari3x_move(_anon1* pActwk);
void brknset(_anon1* pActwk);
void hari3x_spdset(_anon1* pActwk);
void hari3x_brkn(_anon1* pActwk);
void heart3(_anon1* pActwk);
void heart3_init(_anon1* pActwk);
void heart3_move(_anon1* pActwk);
void msnc3fire(_anon1* pActwk);
void msnc3fire_init(_anon1* pActwk);
void msnc3fire_move(_anon1* pActwk);

// 
// Start address: 0x10256a0
unsigned char CSset_b(unsigned char bySrc, unsigned char byDst)
{
	unsigned short wk;
	unsigned short wSrc;
	unsigned short wDst;
	// Line 145, Address: 0x10256a0, Func Offset: 0
	// Line 148, Address: 0x10256b8, Func Offset: 0x18
	// Line 149, Address: 0x10256c4, Func Offset: 0x24
	// Line 150, Address: 0x10256d0, Func Offset: 0x30
	// Line 151, Address: 0x10256e4, Func Offset: 0x44
	// Line 152, Address: 0x1025700, Func Offset: 0x60
	// Line 153, Address: 0x1025704, Func Offset: 0x64
	// Func End, Address: 0x102571c, Func Offset: 0x7c
}

// 
// Start address: 0x1025720
void mecasnc3(_anon1* pActwk)
{
	_anon1* pPlaywk;
	// Line 176, Address: 0x1025720, Func Offset: 0
	// Line 179, Address: 0x1025730, Func Offset: 0x10
	// Line 180, Address: 0x1025738, Func Offset: 0x18
	// Line 191, Address: 0x102577c, Func Offset: 0x5c
	// Line 192, Address: 0x1025784, Func Offset: 0x64
	// Line 193, Address: 0x102579c, Func Offset: 0x7c
	// Line 195, Address: 0x10257b0, Func Offset: 0x90
	// Line 196, Address: 0x10257bc, Func Offset: 0x9c
	// Func End, Address: 0x10257d0, Func Offset: 0xb0
}

// 
// Start address: 0x10257d0
void mecasnc3_init(_anon1* pActwk)
{
	// Line 208, Address: 0x10257d0, Func Offset: 0
	// Line 209, Address: 0x10257dc, Func Offset: 0xc
	// Line 210, Address: 0x10257ec, Func Offset: 0x1c
	// Line 211, Address: 0x10257fc, Func Offset: 0x2c
	// Line 212, Address: 0x1025808, Func Offset: 0x38
	// Line 213, Address: 0x1025814, Func Offset: 0x44
	// Line 214, Address: 0x1025824, Func Offset: 0x54
	// Line 215, Address: 0x1025830, Func Offset: 0x60
	// Line 216, Address: 0x102583c, Func Offset: 0x6c
	// Line 217, Address: 0x1025848, Func Offset: 0x78
	// Line 218, Address: 0x1025850, Func Offset: 0x80
	// Line 219, Address: 0x102585c, Func Offset: 0x8c
	// Func End, Address: 0x102586c, Func Offset: 0x9c
}

// 
// Start address: 0x1025870
void mecasnc3_matu1(_anon1* pActwk)
{
	// Line 231, Address: 0x1025870, Func Offset: 0
	// Line 232, Address: 0x102587c, Func Offset: 0xc
	// Line 234, Address: 0x1025890, Func Offset: 0x20
	// Line 235, Address: 0x10258a0, Func Offset: 0x30
	// Line 238, Address: 0x10258a8, Func Offset: 0x38
	// Line 239, Address: 0x10258b4, Func Offset: 0x44
	// Line 240, Address: 0x10258c0, Func Offset: 0x50
	// Line 242, Address: 0x10258d0, Func Offset: 0x60
	// Line 243, Address: 0x10258e8, Func Offset: 0x78
	// Line 244, Address: 0x10258f4, Func Offset: 0x84
	// Func End, Address: 0x1025904, Func Offset: 0x94
}

// 
// Start address: 0x1025910
void mecasnc3_come(_anon1* pActwk)
{
	short iD0;
	short iD1;
	// Line 256, Address: 0x1025910, Func Offset: 0
	// Line 259, Address: 0x1025924, Func Offset: 0x14
	// Line 260, Address: 0x1025930, Func Offset: 0x20
	// Line 261, Address: 0x1025940, Func Offset: 0x30
	// Line 262, Address: 0x1025954, Func Offset: 0x44
	// Line 263, Address: 0x1025968, Func Offset: 0x58
	// Line 265, Address: 0x1025974, Func Offset: 0x64
	// Line 267, Address: 0x102597c, Func Offset: 0x6c
	// Line 268, Address: 0x1025988, Func Offset: 0x78
	// Line 269, Address: 0x1025998, Func Offset: 0x88
	// Line 270, Address: 0x10259a8, Func Offset: 0x98
	// Line 272, Address: 0x10259e8, Func Offset: 0xd8
	// Line 274, Address: 0x1025a0c, Func Offset: 0xfc
	// Line 275, Address: 0x1025a14, Func Offset: 0x104
	// Line 276, Address: 0x1025a1c, Func Offset: 0x10c
	// Line 277, Address: 0x1025a28, Func Offset: 0x118
	// Line 278, Address: 0x1025a34, Func Offset: 0x124
	// Line 279, Address: 0x1025a40, Func Offset: 0x130
	// Line 280, Address: 0x1025a48, Func Offset: 0x138
	// Line 281, Address: 0x1025a58, Func Offset: 0x148
	// Line 284, Address: 0x1025a68, Func Offset: 0x158
	// Line 285, Address: 0x1025a7c, Func Offset: 0x16c
	// Func End, Address: 0x1025a94, Func Offset: 0x184
}

// 
// Start address: 0x1025aa0
void mecasnc3_hovr(_anon1* pActwk)
{
	_anon1* pPlaywk;
	char wWk;
	// Line 297, Address: 0x1025aa0, Func Offset: 0
	// Line 301, Address: 0x1025ab4, Func Offset: 0x14
	// Line 302, Address: 0x1025abc, Func Offset: 0x1c
	// Line 303, Address: 0x1025acc, Func Offset: 0x2c
	// Line 306, Address: 0x1025ad8, Func Offset: 0x38
	// Line 307, Address: 0x1025ae8, Func Offset: 0x48
	// Line 308, Address: 0x1025af8, Func Offset: 0x58
	// Line 310, Address: 0x1025b08, Func Offset: 0x68
	// Line 311, Address: 0x1025b18, Func Offset: 0x78
	// Line 312, Address: 0x1025b24, Func Offset: 0x84
	// Line 313, Address: 0x1025b30, Func Offset: 0x90
	// Line 314, Address: 0x1025b3c, Func Offset: 0x9c
	// Line 317, Address: 0x1025b48, Func Offset: 0xa8
	// Line 318, Address: 0x1025b5c, Func Offset: 0xbc
	// Func End, Address: 0x1025b74, Func Offset: 0xd4
}

// 
// Start address: 0x1025b80
void yposisetsub(_anon1* pActwk)
{
	unsigned char byR;
	short iSin;
	short iCos;
	_anon2 lD0;
	// Line 330, Address: 0x1025b80, Func Offset: 0
	// Line 331, Address: 0x1025b90, Func Offset: 0x10
	// Line 335, Address: 0x1025b9c, Func Offset: 0x1c
	// Line 336, Address: 0x1025bb0, Func Offset: 0x30
	// Line 337, Address: 0x1025bc4, Func Offset: 0x44
	// Line 339, Address: 0x1025c08, Func Offset: 0x88
	// Line 340, Address: 0x1025c1c, Func Offset: 0x9c
	// Line 341, Address: 0x1025c28, Func Offset: 0xa8
	// Func End, Address: 0x1025c3c, Func Offset: 0xbc
}

// 
// Start address: 0x1025c40
void mecasnc3_upmv(_anon1* pActwk)
{
	_anon1* pPlaywk;
	_anon5 iD0;
	// Line 353, Address: 0x1025c40, Func Offset: 0
	// Line 357, Address: 0x1025c50, Func Offset: 0x10
	// Line 358, Address: 0x1025c58, Func Offset: 0x18
	// Line 359, Address: 0x1025c68, Func Offset: 0x28
	// Line 361, Address: 0x1025c7c, Func Offset: 0x3c
	// Line 362, Address: 0x1025c88, Func Offset: 0x48
	// Line 364, Address: 0x1025ca0, Func Offset: 0x60
	// Line 366, Address: 0x1025cc0, Func Offset: 0x80
	// Line 367, Address: 0x1025cc8, Func Offset: 0x88
	// Line 368, Address: 0x1025cd0, Func Offset: 0x90
	// Line 369, Address: 0x1025ce0, Func Offset: 0xa0
	// Line 372, Address: 0x1025ce8, Func Offset: 0xa8
	// Line 373, Address: 0x1025cfc, Func Offset: 0xbc
	// Line 377, Address: 0x1025d04, Func Offset: 0xc4
	// Line 378, Address: 0x1025d10, Func Offset: 0xd0
	// Line 380, Address: 0x1025d20, Func Offset: 0xe0
	// Line 381, Address: 0x1025d2c, Func Offset: 0xec
	// Line 382, Address: 0x1025d54, Func Offset: 0x114
	// Line 383, Address: 0x1025d64, Func Offset: 0x124
	// Line 385, Address: 0x1025d78, Func Offset: 0x138
	// Line 387, Address: 0x1025d90, Func Offset: 0x150
	// Line 388, Address: 0x1025da4, Func Offset: 0x164
	// Line 392, Address: 0x1025dac, Func Offset: 0x16c
	// Line 394, Address: 0x1025dcc, Func Offset: 0x18c
	// Line 395, Address: 0x1025dd8, Func Offset: 0x198
	// Line 396, Address: 0x1025de0, Func Offset: 0x1a0
	// Line 397, Address: 0x1025dec, Func Offset: 0x1ac
	// Line 400, Address: 0x1025dfc, Func Offset: 0x1bc
	// Line 401, Address: 0x1025e10, Func Offset: 0x1d0
	// Func End, Address: 0x1025e24, Func Offset: 0x1e4
}

// 
// Start address: 0x1025e30
void setfire(_anon1* pActwk)
{
	_anon1* pActfree;
	// Line 413, Address: 0x1025e30, Func Offset: 0
	// Line 416, Address: 0x1025e3c, Func Offset: 0xc
	// Line 418, Address: 0x1025e50, Func Offset: 0x20
	// Line 419, Address: 0x1025e5c, Func Offset: 0x2c
	// Line 422, Address: 0x1025e90, Func Offset: 0x60
	// Func End, Address: 0x1025ea0, Func Offset: 0x70
}

// 
// Start address: 0x1025ea0
void mecasnc3_rght(_anon1* pActwk)
{
	short iD0;
	// Line 434, Address: 0x1025ea0, Func Offset: 0
	// Line 437, Address: 0x1025eb0, Func Offset: 0x10
	// Line 438, Address: 0x1025ebc, Func Offset: 0x1c
	// Line 439, Address: 0x1025ecc, Func Offset: 0x2c
	// Line 440, Address: 0x1025ee0, Func Offset: 0x40
	// Line 441, Address: 0x1025ef4, Func Offset: 0x54
	// Line 443, Address: 0x1025f00, Func Offset: 0x60
	// Line 444, Address: 0x1025f08, Func Offset: 0x68
	// Line 445, Address: 0x1025f24, Func Offset: 0x84
	// Line 448, Address: 0x1025f40, Func Offset: 0xa0
	// Line 449, Address: 0x1025f4c, Func Offset: 0xac
	// Func End, Address: 0x1025f60, Func Offset: 0xc0
}

// 
// Start address: 0x1025f60
void mecasnc3_fout(_anon1* pActwk)
{
	// Line 461, Address: 0x1025f60, Func Offset: 0
	// Line 463, Address: 0x1025f6c, Func Offset: 0xc
	// Line 464, Address: 0x1025f78, Func Offset: 0x18
	// Line 465, Address: 0x1025f88, Func Offset: 0x28
	// Line 466, Address: 0x1025f94, Func Offset: 0x34
	// Line 467, Address: 0x1025fa0, Func Offset: 0x40
	// Func End, Address: 0x1025fb0, Func Offset: 0x50
}

// 
// Start address: 0x1025fb0
void emie_speedset(_anon1* pActwk)
{
	// Line 487, Address: 0x1025fb0, Func Offset: 0
	// Line 488, Address: 0x1025fbc, Func Offset: 0xc
	// Line 489, Address: 0x1025fc8, Func Offset: 0x18
	// Line 490, Address: 0x1025fd4, Func Offset: 0x24
	// Func End, Address: 0x1025fe4, Func Offset: 0x34
}

// 
// Start address: 0x1025ff0
void emie_speedsety(_anon1* pActwk)
{
	_anon2 lD0;
	// Line 492, Address: 0x1025ff0, Func Offset: 0
	// Line 495, Address: 0x1025ff8, Func Offset: 0x8
	// Line 496, Address: 0x102600c, Func Offset: 0x1c
	// Line 497, Address: 0x1026050, Func Offset: 0x60
	// Line 498, Address: 0x1026064, Func Offset: 0x74
	// Func End, Address: 0x1026070, Func Offset: 0x80
}

// 
// Start address: 0x1026070
void emie_speedsetx(_anon1* pActwk)
{
	_anon2 lD0;
	// Line 500, Address: 0x1026070, Func Offset: 0
	// Line 503, Address: 0x1026078, Func Offset: 0x8
	// Line 504, Address: 0x102608c, Func Offset: 0x1c
	// Line 505, Address: 0x10260d0, Func Offset: 0x60
	// Line 506, Address: 0x10260e4, Func Offset: 0x74
	// Func End, Address: 0x10260f0, Func Offset: 0x80
}

// 
// Start address: 0x10260f0
void emie3(_anon1* pActwk)
{
	_anon1* pPlaywk;
	// Line 539, Address: 0x10260f0, Func Offset: 0
	// Line 542, Address: 0x1026100, Func Offset: 0x10
	// Line 543, Address: 0x1026108, Func Offset: 0x18
	// Line 546, Address: 0x1026130, Func Offset: 0x40
	// Line 547, Address: 0x1026174, Func Offset: 0x84
	// Line 548, Address: 0x102617c, Func Offset: 0x8c
	// Line 549, Address: 0x1026194, Func Offset: 0xa4
	// Line 551, Address: 0x10261a8, Func Offset: 0xb8
	// Line 552, Address: 0x10261b4, Func Offset: 0xc4
	// Line 555, Address: 0x10261bc, Func Offset: 0xcc
	// Line 557, Address: 0x10261c8, Func Offset: 0xd8
	// Line 558, Address: 0x10261d0, Func Offset: 0xe0
	// Func End, Address: 0x10261e4, Func Offset: 0xf4
}

// 
// Start address: 0x10261f0
void emie3_init(_anon1* pActwk)
{
	_anon1* pPlaywk;
	// Line 570, Address: 0x10261f0, Func Offset: 0
	// Line 573, Address: 0x1026200, Func Offset: 0x10
	// Line 576, Address: 0x1026214, Func Offset: 0x24
	// Line 579, Address: 0x1026220, Func Offset: 0x30
	// Line 580, Address: 0x1026230, Func Offset: 0x40
	// Line 581, Address: 0x102623c, Func Offset: 0x4c
	// Line 582, Address: 0x1026248, Func Offset: 0x58
	// Line 583, Address: 0x1026258, Func Offset: 0x68
	// Line 584, Address: 0x1026260, Func Offset: 0x70
	// Line 585, Address: 0x1026268, Func Offset: 0x78
	// Line 586, Address: 0x1026278, Func Offset: 0x88
	// Line 587, Address: 0x10262a0, Func Offset: 0xb0
	// Line 589, Address: 0x10262b0, Func Offset: 0xc0
	// Line 591, Address: 0x10262c4, Func Offset: 0xd4
	// Func End, Address: 0x10262d8, Func Offset: 0xe8
}

// 
// Start address: 0x10262e0
void emiewalkret(_anon1* pActwk)
{
	// Line 594, Address: 0x10262e0, Func Offset: 0
	// Line 595, Address: 0x10262ec, Func Offset: 0xc
	// Line 596, Address: 0x1026300, Func Offset: 0x20
	// Line 597, Address: 0x102630c, Func Offset: 0x2c
	// Func End, Address: 0x102631c, Func Offset: 0x3c
}

// 
// Start address: 0x1026320
void emie3_walk(_anon1* pActwk)
{
	short iD0;
	short iD1;
	short iD2;
	_anon1* pPlaywk;
	_anon1* pRideAct;
	// Line 608, Address: 0x1026320, Func Offset: 0
	// Line 612, Address: 0x102633c, Func Offset: 0x1c
	// Line 613, Address: 0x1026348, Func Offset: 0x28
	// Line 614, Address: 0x1026358, Func Offset: 0x38
	// Line 616, Address: 0x1026368, Func Offset: 0x48
	// Line 617, Address: 0x1026388, Func Offset: 0x68
	// Line 619, Address: 0x1026398, Func Offset: 0x78
	// Line 620, Address: 0x10263a4, Func Offset: 0x84
	// Line 621, Address: 0x10263b0, Func Offset: 0x90
	// Line 622, Address: 0x10263bc, Func Offset: 0x9c
	// Line 626, Address: 0x10263c4, Func Offset: 0xa4
	// Line 627, Address: 0x10263d4, Func Offset: 0xb4
	// Line 629, Address: 0x10263ec, Func Offset: 0xcc
	// Line 631, Address: 0x1026408, Func Offset: 0xe8
	// Line 632, Address: 0x1026410, Func Offset: 0xf0
	// Line 633, Address: 0x1026418, Func Offset: 0xf8
	// Line 634, Address: 0x1026424, Func Offset: 0x104
	// Line 638, Address: 0x102642c, Func Offset: 0x10c
	// Line 641, Address: 0x1026448, Func Offset: 0x128
	// Line 642, Address: 0x1026454, Func Offset: 0x134
	// Line 643, Address: 0x102646c, Func Offset: 0x14c
	// Line 645, Address: 0x1026488, Func Offset: 0x168
	// Line 646, Address: 0x102649c, Func Offset: 0x17c
	// Line 647, Address: 0x10264a4, Func Offset: 0x184
	// Line 648, Address: 0x10264b0, Func Offset: 0x190
	// Line 650, Address: 0x10264c0, Func Offset: 0x1a0
	// Line 651, Address: 0x10264dc, Func Offset: 0x1bc
	// Line 654, Address: 0x10264f8, Func Offset: 0x1d8
	// Line 655, Address: 0x102650c, Func Offset: 0x1ec
	// Line 657, Address: 0x1026514, Func Offset: 0x1f4
	// Line 658, Address: 0x102651c, Func Offset: 0x1fc
	// Line 659, Address: 0x1026528, Func Offset: 0x208
	// Line 660, Address: 0x1026534, Func Offset: 0x214
	// Line 662, Address: 0x1026550, Func Offset: 0x230
	// Line 663, Address: 0x102655c, Func Offset: 0x23c
	// Line 667, Address: 0x1026564, Func Offset: 0x244
	// Line 669, Address: 0x102656c, Func Offset: 0x24c
	// Line 671, Address: 0x1026584, Func Offset: 0x264
	// Line 673, Address: 0x1026598, Func Offset: 0x278
	// Line 674, Address: 0x10265a4, Func Offset: 0x284
	// Line 675, Address: 0x10265b0, Func Offset: 0x290
	// Line 677, Address: 0x10265bc, Func Offset: 0x29c
	// Line 679, Address: 0x10265f0, Func Offset: 0x2d0
	// Line 682, Address: 0x1026624, Func Offset: 0x304
	// Line 683, Address: 0x1026630, Func Offset: 0x310
	// Func End, Address: 0x1026650, Func Offset: 0x330
}

// 
// Start address: 0x1026650
void emie3_help(_anon1* pActwk)
{
	short iD0;
	_anon1* pRideAct;
	// Line 695, Address: 0x1026650, Func Offset: 0
	// Line 699, Address: 0x1026664, Func Offset: 0x14
	// Line 700, Address: 0x1026674, Func Offset: 0x24
	// Line 701, Address: 0x1026694, Func Offset: 0x44
	// Line 703, Address: 0x10266a8, Func Offset: 0x58
	// Line 704, Address: 0x10266b4, Func Offset: 0x64
	// Line 705, Address: 0x10266c0, Func Offset: 0x70
	// Line 707, Address: 0x10266d4, Func Offset: 0x84
	// Line 708, Address: 0x10266f0, Func Offset: 0xa0
	// Line 711, Address: 0x10266fc, Func Offset: 0xac
	// Line 712, Address: 0x102670c, Func Offset: 0xbc
	// Line 713, Address: 0x1026714, Func Offset: 0xc4
	// Line 714, Address: 0x1026734, Func Offset: 0xe4
	// Line 715, Address: 0x1026740, Func Offset: 0xf0
	// Line 716, Address: 0x1026754, Func Offset: 0x104
	// Line 719, Address: 0x102675c, Func Offset: 0x10c
	// Line 720, Address: 0x1026768, Func Offset: 0x118
	// Line 721, Address: 0x1026774, Func Offset: 0x124
	// Func End, Address: 0x102678c, Func Offset: 0x13c
}

// 
// Start address: 0x1026790
void setdirect(_anon1* pActwk, _anon1* pPlaywk)
{
	// Line 733, Address: 0x1026790, Func Offset: 0
	// Line 734, Address: 0x10267a0, Func Offset: 0x10
	// Line 735, Address: 0x10267ac, Func Offset: 0x1c
	// Line 736, Address: 0x10267c8, Func Offset: 0x38
	// Line 737, Address: 0x10267d4, Func Offset: 0x44
	// Func End, Address: 0x10267e4, Func Offset: 0x54
}

// 
// Start address: 0x10267f0
void dir_right(_anon1* pActwk)
{
	// Line 749, Address: 0x10267f0, Func Offset: 0
	// Line 750, Address: 0x10267f8, Func Offset: 0x8
	// Line 751, Address: 0x1026808, Func Offset: 0x18
	// Line 752, Address: 0x1026818, Func Offset: 0x28
	// Func End, Address: 0x1026824, Func Offset: 0x34
}

// 
// Start address: 0x1026830
void dir_left(_anon1* pActwk)
{
	// Line 764, Address: 0x1026830, Func Offset: 0
	// Line 765, Address: 0x1026838, Func Offset: 0x8
	// Line 766, Address: 0x1026848, Func Offset: 0x18
	// Line 767, Address: 0x1026858, Func Offset: 0x28
	// Func End, Address: 0x1026864, Func Offset: 0x34
}

// 
// Start address: 0x1026870
void empatchg(_anon1* pActwk, unsigned char** bppPtbl)
{
	unsigned char byD0;
	unsigned char byD1;
	unsigned char byPwk;
	unsigned char* bpPchg;
	// Line 780, Address: 0x1026870, Func Offset: 0
	// Line 786, Address: 0x102688c, Func Offset: 0x1c
	// Line 787, Address: 0x1026898, Func Offset: 0x28
	// Line 789, Address: 0x10268b4, Func Offset: 0x44
	// Line 790, Address: 0x10268c4, Func Offset: 0x54
	// Line 791, Address: 0x10268cc, Func Offset: 0x5c
	// Line 794, Address: 0x10268d4, Func Offset: 0x64
	// Line 795, Address: 0x10268e4, Func Offset: 0x74
	// Line 797, Address: 0x1026904, Func Offset: 0x94
	// Line 802, Address: 0x1026918, Func Offset: 0xa8
	// Line 803, Address: 0x1026924, Func Offset: 0xb4
	// Line 804, Address: 0x1026928, Func Offset: 0xb8
	// Line 805, Address: 0x1026938, Func Offset: 0xc8
	// Line 806, Address: 0x1026948, Func Offset: 0xd8
	// Line 807, Address: 0x1026950, Func Offset: 0xe0
	// Line 810, Address: 0x1026958, Func Offset: 0xe8
	// Line 811, Address: 0x102695c, Func Offset: 0xec
	// Line 812, Address: 0x1026964, Func Offset: 0xf4
	// Line 813, Address: 0x102696c, Func Offset: 0xfc
	// Line 814, Address: 0x1026978, Func Offset: 0x108
	// Line 815, Address: 0x1026980, Func Offset: 0x110
	// Line 816, Address: 0x1026988, Func Offset: 0x118
	// Line 817, Address: 0x1026990, Func Offset: 0x120
	// Line 818, Address: 0x10269a0, Func Offset: 0x130
	// Line 819, Address: 0x10269b0, Func Offset: 0x140
	// Line 821, Address: 0x10269c8, Func Offset: 0x158
	// Line 822, Address: 0x10269e0, Func Offset: 0x170
	// Line 824, Address: 0x10269f0, Func Offset: 0x180
	// Line 825, Address: 0x1026a00, Func Offset: 0x190
	// Func End, Address: 0x1026a1c, Func Offset: 0x1ac
}

// 
// Start address: 0x1026a20
void emie3clrsetx(tagPALETTEENTRY* pPalet)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 844, Address: 0x1026a20, Func Offset: 0
	// Line 849, Address: 0x1026a30, Func Offset: 0x10
	// Line 851, Address: 0x1026a3c, Func Offset: 0x1c
	// Line 852, Address: 0x1026a48, Func Offset: 0x28
	// Line 853, Address: 0x1026a6c, Func Offset: 0x4c
	// Line 854, Address: 0x1026a70, Func Offset: 0x50
	// Line 855, Address: 0x1026a7c, Func Offset: 0x5c
	// Line 856, Address: 0x1026a9c, Func Offset: 0x7c
	// Func End, Address: 0x1026ab0, Func Offset: 0x90
}

// 
// Start address: 0x1026ab0
void emie3clrset()
{
	// Line 858, Address: 0x1026ab0, Func Offset: 0
	// Line 859, Address: 0x1026ab8, Func Offset: 0x8
	// Line 860, Address: 0x1026ac8, Func Offset: 0x18
	// Func End, Address: 0x1026ad8, Func Offset: 0x28
}

// 
// Start address: 0x1026ae0
void heartset(_anon1* pActwk)
{
	unsigned char bywk;
	short iD1;
	short wk;
	_anon1* pActfree;
	// Line 871, Address: 0x1026ae0, Func Offset: 0
	// Line 876, Address: 0x1026af8, Func Offset: 0x18
	// Line 877, Address: 0x1026b04, Func Offset: 0x24
	// Line 878, Address: 0x1026b24, Func Offset: 0x44
	// Line 879, Address: 0x1026b34, Func Offset: 0x54
	// Line 882, Address: 0x1026b48, Func Offset: 0x68
	// Line 883, Address: 0x1026b5c, Func Offset: 0x7c
	// Line 884, Address: 0x1026b68, Func Offset: 0x88
	// Line 885, Address: 0x1026b80, Func Offset: 0xa0
	// Line 887, Address: 0x1026b94, Func Offset: 0xb4
	// Line 888, Address: 0x1026ba0, Func Offset: 0xc0
	// Line 889, Address: 0x1026bcc, Func Offset: 0xec
	// Line 890, Address: 0x1026bf0, Func Offset: 0x110
	// Func End, Address: 0x1026c0c, Func Offset: 0x12c
}

// 
// Start address: 0x1026c10
void hari3x_fout(_anon1* pActwk)
{
	// Line 903, Address: 0x1026c10, Func Offset: 0
	// Line 904, Address: 0x1026c1c, Func Offset: 0xc
	// Line 905, Address: 0x1026c28, Func Offset: 0x18
	// Line 906, Address: 0x1026c34, Func Offset: 0x24
	// Func End, Address: 0x1026c44, Func Offset: 0x34
}

// 
// Start address: 0x1026c50
void hari3x(_anon1* pActwk)
{
	// Line 923, Address: 0x1026c50, Func Offset: 0
	// Line 924, Address: 0x1026c5c, Func Offset: 0xc
	// Line 925, Address: 0x1026c64, Func Offset: 0x14
	// Line 927, Address: 0x1026c78, Func Offset: 0x28
	// Line 928, Address: 0x1026cbc, Func Offset: 0x6c
	// Line 929, Address: 0x1026cd0, Func Offset: 0x80
	// Line 930, Address: 0x1026cdc, Func Offset: 0x8c
	// Line 932, Address: 0x1026ce4, Func Offset: 0x94
	// Line 933, Address: 0x1026cf0, Func Offset: 0xa0
	// Line 934, Address: 0x1026cf8, Func Offset: 0xa8
	// Func End, Address: 0x1026d08, Func Offset: 0xb8
}

// 
// Start address: 0x1026d10
void hari3x_ridechk(_anon1* pActwk)
{
	_anon1* pPlaywk;
	int lD0;
	int lD3;
	// Line 946, Address: 0x1026d10, Func Offset: 0
	// Line 950, Address: 0x1026d28, Func Offset: 0x18
	// Line 952, Address: 0x1026d44, Func Offset: 0x34
	// Line 953, Address: 0x1026d58, Func Offset: 0x48
	// Line 956, Address: 0x1026d60, Func Offset: 0x50
	// Line 958, Address: 0x1026d84, Func Offset: 0x74
	// Line 961, Address: 0x1026d9c, Func Offset: 0x8c
	// Line 962, Address: 0x1026db0, Func Offset: 0xa0
	// Line 964, Address: 0x1026dc4, Func Offset: 0xb4
	// Line 965, Address: 0x1026dcc, Func Offset: 0xbc
	// Line 967, Address: 0x1026de0, Func Offset: 0xd0
	// Line 969, Address: 0x1026df0, Func Offset: 0xe0
	// Line 970, Address: 0x1026df4, Func Offset: 0xe4
	// Line 971, Address: 0x1026e00, Func Offset: 0xf0
	// Line 972, Address: 0x1026e28, Func Offset: 0x118
	// Line 973, Address: 0x1026e2c, Func Offset: 0x11c
	// Line 974, Address: 0x1026e30, Func Offset: 0x120
	// Line 977, Address: 0x1026e40, Func Offset: 0x130
	// Func End, Address: 0x1026e5c, Func Offset: 0x14c
}

// 
// Start address: 0x1026e60
void hari3x_init(_anon1* pActwk)
{
	// Line 989, Address: 0x1026e60, Func Offset: 0
	// Line 990, Address: 0x1026e6c, Func Offset: 0xc
	// Line 992, Address: 0x1026e80, Func Offset: 0x20
	// Line 993, Address: 0x1026e8c, Func Offset: 0x2c
	// Line 995, Address: 0x1026e94, Func Offset: 0x34
	// Line 996, Address: 0x1026ea4, Func Offset: 0x44
	// Line 997, Address: 0x1026eb4, Func Offset: 0x54
	// Line 998, Address: 0x1026ec0, Func Offset: 0x60
	// Line 999, Address: 0x1026ecc, Func Offset: 0x6c
	// Line 1000, Address: 0x1026edc, Func Offset: 0x7c
	// Line 1001, Address: 0x1026ee8, Func Offset: 0x88
	// Line 1003, Address: 0x1026ef4, Func Offset: 0x94
	// Line 1005, Address: 0x1026f10, Func Offset: 0xb0
	// Line 1006, Address: 0x1026f1c, Func Offset: 0xbc
	// Line 1008, Address: 0x1026f34, Func Offset: 0xd4
	// Line 1009, Address: 0x1026f50, Func Offset: 0xf0
	// Line 1011, Address: 0x1026f64, Func Offset: 0x104
	// Line 1012, Address: 0x1026f70, Func Offset: 0x110
	// Line 1013, Address: 0x1026f7c, Func Offset: 0x11c
	// Line 1017, Address: 0x1026f88, Func Offset: 0x128
	// Line 1019, Address: 0x1026f9c, Func Offset: 0x13c
	// Line 1020, Address: 0x1026fa8, Func Offset: 0x148
	// Line 1022, Address: 0x1026fb0, Func Offset: 0x150
	// Line 1023, Address: 0x1026fb8, Func Offset: 0x158
	// Line 1024, Address: 0x1026fc8, Func Offset: 0x168
	// Line 1025, Address: 0x1026fd4, Func Offset: 0x174
	// Line 1026, Address: 0x1026fe0, Func Offset: 0x180
	// Func End, Address: 0x1026ff0, Func Offset: 0x190
}

// 
// Start address: 0x1026ff0
void hari3x_move(_anon1* pActwk)
{
	short i;
	short iD0;
	short iD1;
	_anon1* pActmsnc;
	// Line 1038, Address: 0x1026ff0, Func Offset: 0
	// Line 1042, Address: 0x102700c, Func Offset: 0x1c
	// Line 1044, Address: 0x1027028, Func Offset: 0x38
	// Line 1045, Address: 0x1027034, Func Offset: 0x44
	// Line 1048, Address: 0x102703c, Func Offset: 0x4c
	// Line 1050, Address: 0x1027044, Func Offset: 0x54
	// Line 1052, Address: 0x1027050, Func Offset: 0x60
	// Line 1053, Address: 0x1027064, Func Offset: 0x74
	// Line 1054, Address: 0x1027088, Func Offset: 0x98
	// Line 1056, Address: 0x102709c, Func Offset: 0xac
	// Line 1057, Address: 0x10270a8, Func Offset: 0xb8
	// Line 1060, Address: 0x10270b0, Func Offset: 0xc0
	// Line 1061, Address: 0x10270d0, Func Offset: 0xe0
	// Line 1062, Address: 0x10270dc, Func Offset: 0xec
	// Line 1063, Address: 0x102710c, Func Offset: 0x11c
	// Line 1064, Address: 0x1027118, Func Offset: 0x128
	// Line 1066, Address: 0x1027128, Func Offset: 0x138
	// Line 1067, Address: 0x1027134, Func Offset: 0x144
	// Line 1069, Address: 0x102713c, Func Offset: 0x14c
	// Line 1070, Address: 0x1027148, Func Offset: 0x158
	// Line 1072, Address: 0x1027164, Func Offset: 0x174
	// Line 1073, Address: 0x1027170, Func Offset: 0x180
	// Line 1076, Address: 0x1027178, Func Offset: 0x188
	// Line 1077, Address: 0x1027198, Func Offset: 0x1a8
	// Line 1078, Address: 0x10271a4, Func Offset: 0x1b4
	// Line 1079, Address: 0x10271d4, Func Offset: 0x1e4
	// Line 1080, Address: 0x10271e0, Func Offset: 0x1f0
	// Line 1082, Address: 0x10271f0, Func Offset: 0x200
	// Line 1083, Address: 0x10271fc, Func Offset: 0x20c
	// Line 1085, Address: 0x1027204, Func Offset: 0x214
	// Line 1086, Address: 0x1027210, Func Offset: 0x220
	// Line 1088, Address: 0x102722c, Func Offset: 0x23c
	// Line 1089, Address: 0x1027238, Func Offset: 0x248
	// Line 1091, Address: 0x1027240, Func Offset: 0x250
	// Line 1092, Address: 0x1027250, Func Offset: 0x260
	// Line 1093, Address: 0x102725c, Func Offset: 0x26c
	// Line 1094, Address: 0x1027270, Func Offset: 0x280
	// Func End, Address: 0x1027290, Func Offset: 0x2a0
}

// 
// Start address: 0x1027290
void brknset(_anon1* pActwk)
{
	short iD1;
	short iD2;
	_anon1* pActfree;
	// Line 1106, Address: 0x1027290, Func Offset: 0
	// Line 1110, Address: 0x10272a4, Func Offset: 0x14
	// Line 1111, Address: 0x10272b0, Func Offset: 0x20
	// Line 1112, Address: 0x10272bc, Func Offset: 0x2c
	// Line 1113, Address: 0x10272c0, Func Offset: 0x30
	// Line 1115, Address: 0x10272d8, Func Offset: 0x48
	// Line 1116, Address: 0x10272e4, Func Offset: 0x54
	// Line 1117, Address: 0x10272f0, Func Offset: 0x60
	// Line 1119, Address: 0x102730c, Func Offset: 0x7c
	// Line 1120, Address: 0x1027318, Func Offset: 0x88
	// Line 1124, Address: 0x1027324, Func Offset: 0x94
	// Line 1126, Address: 0x102732c, Func Offset: 0x9c
	// Line 1128, Address: 0x1027340, Func Offset: 0xb0
	// Line 1129, Address: 0x102734c, Func Offset: 0xbc
	// Line 1130, Address: 0x102735c, Func Offset: 0xcc
	// Line 1131, Address: 0x102736c, Func Offset: 0xdc
	// Line 1132, Address: 0x102738c, Func Offset: 0xfc
	// Line 1135, Address: 0x1027398, Func Offset: 0x108
	// Line 1136, Address: 0x10273a4, Func Offset: 0x114
	// Line 1137, Address: 0x10273b4, Func Offset: 0x124
	// Line 1139, Address: 0x10273cc, Func Offset: 0x13c
	// Line 1141, Address: 0x10273d8, Func Offset: 0x148
	// Line 1142, Address: 0x10273e4, Func Offset: 0x154
	// Func End, Address: 0x10273fc, Func Offset: 0x16c
}

// 
// Start address: 0x1027400
void hari3x_spdset(_anon1* pActwk)
{
	unsigned char byD0;
	// Line 1161, Address: 0x1027400, Func Offset: 0
	// Line 1164, Address: 0x102740c, Func Offset: 0xc
	// Line 1165, Address: 0x1027418, Func Offset: 0x18
	// Line 1166, Address: 0x1027428, Func Offset: 0x28
	// Line 1167, Address: 0x1027448, Func Offset: 0x48
	// Line 1168, Address: 0x102746c, Func Offset: 0x6c
	// Line 1169, Address: 0x1027478, Func Offset: 0x78
	// Line 1170, Address: 0x1027484, Func Offset: 0x84
	// Func End, Address: 0x1027494, Func Offset: 0x94
}

// 
// Start address: 0x10274a0
void hari3x_brkn(_anon1* pActwk)
{
	short iD0;
	// Line 1182, Address: 0x10274a0, Func Offset: 0
	// Line 1185, Address: 0x10274b0, Func Offset: 0x10
	// Line 1186, Address: 0x10274bc, Func Offset: 0x1c
	// Line 1187, Address: 0x10274cc, Func Offset: 0x2c
	// Line 1188, Address: 0x10274dc, Func Offset: 0x3c
	// Line 1189, Address: 0x10274ec, Func Offset: 0x4c
	// Line 1191, Address: 0x1027500, Func Offset: 0x60
	// Line 1192, Address: 0x102750c, Func Offset: 0x6c
	// Line 1194, Address: 0x1027518, Func Offset: 0x78
	// Func End, Address: 0x102752c, Func Offset: 0x8c
}

// 
// Start address: 0x1027530
void heart3(_anon1* pActwk)
{
	// Line 1213, Address: 0x1027530, Func Offset: 0
	// Line 1214, Address: 0x102753c, Func Offset: 0xc
	// Line 1215, Address: 0x1027544, Func Offset: 0x14
	// Line 1216, Address: 0x1027588, Func Offset: 0x58
	// Line 1218, Address: 0x102759c, Func Offset: 0x6c
	// Line 1219, Address: 0x10275a8, Func Offset: 0x78
	// Line 1221, Address: 0x10275b4, Func Offset: 0x84
	// Line 1222, Address: 0x10275bc, Func Offset: 0x8c
	// Func End, Address: 0x10275cc, Func Offset: 0x9c
}

// 
// Start address: 0x10275d0
void heart3_init(_anon1* pActwk)
{
	// Line 1234, Address: 0x10275d0, Func Offset: 0
	// Line 1235, Address: 0x10275dc, Func Offset: 0xc
	// Line 1236, Address: 0x10275ec, Func Offset: 0x1c
	// Line 1237, Address: 0x10275fc, Func Offset: 0x2c
	// Line 1238, Address: 0x1027608, Func Offset: 0x38
	// Line 1239, Address: 0x1027618, Func Offset: 0x48
	// Line 1240, Address: 0x1027624, Func Offset: 0x54
	// Line 1241, Address: 0x1027630, Func Offset: 0x60
	// Line 1242, Address: 0x102763c, Func Offset: 0x6c
	// Line 1243, Address: 0x1027648, Func Offset: 0x78
	// Func End, Address: 0x1027658, Func Offset: 0x88
}

// 
// Start address: 0x1027660
void heart3_move(_anon1* pActwk)
{
	unsigned char byR;
	short iD0;
	short iD1;
	// Line 1255, Address: 0x1027660, Func Offset: 0
	// Line 1259, Address: 0x1027670, Func Offset: 0x10
	// Line 1261, Address: 0x1027684, Func Offset: 0x24
	// Line 1262, Address: 0x1027690, Func Offset: 0x30
	// Line 1263, Address: 0x10276a4, Func Offset: 0x44
	// Line 1264, Address: 0x10276b8, Func Offset: 0x58
	// Line 1265, Address: 0x10276d8, Func Offset: 0x78
	// Line 1268, Address: 0x10276e4, Func Offset: 0x84
	// Line 1269, Address: 0x10276f0, Func Offset: 0x90
	// Line 1270, Address: 0x1027700, Func Offset: 0xa0
	// Line 1271, Address: 0x1027718, Func Offset: 0xb8
	// Line 1273, Address: 0x1027728, Func Offset: 0xc8
	// Line 1275, Address: 0x1027740, Func Offset: 0xe0
	// Line 1276, Address: 0x1027750, Func Offset: 0xf0
	// Line 1277, Address: 0x1027758, Func Offset: 0xf8
	// Line 1278, Address: 0x1027760, Func Offset: 0x100
	// Line 1281, Address: 0x102776c, Func Offset: 0x10c
	// Line 1283, Address: 0x1027784, Func Offset: 0x124
	// Line 1284, Address: 0x1027790, Func Offset: 0x130
	// Line 1286, Address: 0x102779c, Func Offset: 0x13c
	// Func End, Address: 0x10277b0, Func Offset: 0x150
}

// 
// Start address: 0x10277b0
void msnc3fire(_anon1* pActwk)
{
	// Line 1303, Address: 0x10277b0, Func Offset: 0
	// Line 1304, Address: 0x10277bc, Func Offset: 0xc
	// Line 1305, Address: 0x1027800, Func Offset: 0x50
	// Line 1306, Address: 0x102780c, Func Offset: 0x5c
	// Func End, Address: 0x102781c, Func Offset: 0x6c
}

// 
// Start address: 0x1027820
void msnc3fire_init(_anon1* pActwk)
{
	// Line 1318, Address: 0x1027820, Func Offset: 0
	// Line 1319, Address: 0x102782c, Func Offset: 0xc
	// Line 1320, Address: 0x102783c, Func Offset: 0x1c
	// Line 1321, Address: 0x102784c, Func Offset: 0x2c
	// Line 1322, Address: 0x1027858, Func Offset: 0x38
	// Line 1323, Address: 0x1027868, Func Offset: 0x48
	// Line 1324, Address: 0x1027874, Func Offset: 0x54
	// Line 1325, Address: 0x1027880, Func Offset: 0x60
	// Func End, Address: 0x1027890, Func Offset: 0x70
}

// 
// Start address: 0x1027890
void msnc3fire_move(_anon1* pActwk)
{
	short iD0;
	_anon1* pActmsnc;
	// Line 1337, Address: 0x1027890, Func Offset: 0
	// Line 1341, Address: 0x10278a4, Func Offset: 0x14
	// Line 1342, Address: 0x10278b4, Func Offset: 0x24
	// Line 1343, Address: 0x10278d4, Func Offset: 0x44
	// Line 1345, Address: 0x10278e8, Func Offset: 0x58
	// Line 1346, Address: 0x10278f4, Func Offset: 0x64
	// Line 1347, Address: 0x1027900, Func Offset: 0x70
	// Line 1349, Address: 0x1027908, Func Offset: 0x78
	// Line 1350, Address: 0x1027914, Func Offset: 0x84
	// Line 1351, Address: 0x1027920, Func Offset: 0x90
	// Line 1352, Address: 0x1027934, Func Offset: 0xa4
	// Line 1354, Address: 0x1027940, Func Offset: 0xb0
	// Line 1355, Address: 0x1027948, Func Offset: 0xb8
	// Line 1357, Address: 0x1027954, Func Offset: 0xc4
	// Line 1358, Address: 0x1027968, Func Offset: 0xd8
	// Line 1359, Address: 0x1027974, Func Offset: 0xe4
	// Func End, Address: 0x102798c, Func Offset: 0xfc
}

