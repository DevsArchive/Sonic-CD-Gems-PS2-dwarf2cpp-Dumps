typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);
typedef void(*type_12)(_anon0*);
typedef void(*type_20)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon0*)[4];
typedef unsigned char type_4[4];
typedef unsigned char* type_5[4];
typedef unsigned char type_6[5];
typedef unsigned char type_7[14];
typedef unsigned char type_8[12];
typedef unsigned char type_9[12];
typedef unsigned char type_10[2];
typedef unsigned char type_11[22];
typedef void(*type_13)(_anon0*)[3];
typedef _anon1* type_14[3];
typedef _anon1* type_15[5];
typedef _anon1* type_16[5];
typedef unsigned char type_17[766];
typedef _anon0 type_18[128];
typedef unsigned char* type_19[4];
typedef unsigned char type_21[12];
typedef void(*type_22)(_anon0*)[11];
typedef unsigned char* type_23[1];
typedef unsigned char type_24[4];
typedef unsigned char type_25[12];
typedef unsigned char type_26[14];
typedef short type_27[8];

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

short tbl_hotaru7[8];
unsigned char pchg_e00[12];
unsigned char pchg_e01[14];
unsigned char pchg_e02[12];
unsigned char pchg_e03[4];
unsigned char* pchg_hotaru7_e[4];
unsigned char pchg_b00[12];
unsigned char pchg_b01[14];
unsigned char pchg_b02[12];
unsigned char pchg_b03[4];
unsigned char* pchg_hotaru7_b[4];
unsigned char pchg_tama00[5];
unsigned char* pchg_tama[1];
_anon1 pat_e00;
_anon1 pat_e01;
_anon1 pat_e02;
_anon1 pat_e03;
_anon1 pat_e04;
_anon1* pat_hotaru7_e[5];
_anon1 pat_b00;
_anon1 pat_b01;
_anon1 pat_b02;
_anon1 pat_b03;
_anon1 pat_b04;
_anon1* pat_hotaru7_b[5];
_anon1 pat_tama00;
_anon1 pat_tama01;
_anon1 pat_tama02;
_anon1* pat_tama[3];
void(*a_act_tbl)(_anon0*)[4];
void(*b_act_tbl)(_anon0*)[11];
void(*c_act_tbl)(_anon0*)[3];
_anon0 actwk[128];
_anon5 stageno;
unsigned char flagwork[766];
unsigned char time_flag;
_anon2 scra_v_posit;
_anon2 scra_h_posit;

void hotaru7(_anon0* pActwk);
void a_init(_anon0* pActwk);
void a_wait(_anon0* pActwk);
void a_make(_anon0* pActwk);
void ini_b(_anon0* pActwk, _anon0* pNewact);
void a_move(_anon0* pActwk);
void b_init(_anon0* pActwk);
void b_fly(_anon0* pActwk);
void b_near(_anon0* pActwk);
void b_fix(_anon0* pActwk);
void b_fix1(_anon0* pActwk);
void b_start(_anon0* pActwk);
void b_com(_anon0* pActwk);
void b_com1(_anon0* pActwk);
void b_kill_v(_anon0* pActwk);
void b_die_v(_anon0* pActwk, _anon0* pMainwk);
void b_light(_anon0* pActwk);
void b_up(_anon0* pActwk);
void b_up1(_anon0* pActwk);
void b_make_c(_anon0* pActwk);
void c_init(_anon0* pActwk);
void c_move(_anon0* pActwk);
unsigned int area(_anon0* pActwk, _anon0* pPlayerwk, unsigned short Ypos, unsigned short Ylen, unsigned short Xpos, unsigned short Xlen);

// 
// Start address: 0x10288e0
void hotaru7(_anon0* pActwk)
{
	_anon0* pMainact;
	_anon0* pBact1;
	_anon0* pBact2;
	// Line 315, Address: 0x10288e0, Func Offset: 0
	// Line 316, Address: 0x10288f8, Func Offset: 0x18
	// Line 322, Address: 0x1028928, Func Offset: 0x48
	// Line 323, Address: 0x1028950, Func Offset: 0x70
	// Line 325, Address: 0x1028980, Func Offset: 0xa0
	// Line 328, Address: 0x1028994, Func Offset: 0xb4
	// Line 329, Address: 0x10289a8, Func Offset: 0xc8
	// Line 332, Address: 0x10289ec, Func Offset: 0x10c
	// Line 339, Address: 0x10289f4, Func Offset: 0x114
	// Line 340, Address: 0x1028a1c, Func Offset: 0x13c
	// Line 342, Address: 0x1028a44, Func Offset: 0x164
	// Line 344, Address: 0x1028a94, Func Offset: 0x1b4
	// Line 347, Address: 0x1028aa8, Func Offset: 0x1c8
	// Line 349, Address: 0x1028aec, Func Offset: 0x20c
	// Line 353, Address: 0x1028af4, Func Offset: 0x214
	// Line 356, Address: 0x1028b38, Func Offset: 0x258
	// Func End, Address: 0x1028b54, Func Offset: 0x274
}

// 
// Start address: 0x1028b60
void a_init(_anon0* pActwk)
{
	unsigned short flagwk;
	unsigned char* pFlagwork;
	int idx;
	// Line 362, Address: 0x1028b60, Func Offset: 0
	// Line 367, Address: 0x1028b78, Func Offset: 0x18
	// Line 368, Address: 0x1028b88, Func Offset: 0x28
	// Line 369, Address: 0x1028b98, Func Offset: 0x38
	// Line 370, Address: 0x1028bb4, Func Offset: 0x54
	// Line 371, Address: 0x1028bc0, Func Offset: 0x60
	// Line 373, Address: 0x1028bd8, Func Offset: 0x78
	// Line 374, Address: 0x1028bec, Func Offset: 0x8c
	// Line 376, Address: 0x1028c20, Func Offset: 0xc0
	// Line 377, Address: 0x1028c3c, Func Offset: 0xdc
	// Line 378, Address: 0x1028c48, Func Offset: 0xe8
	// Line 379, Address: 0x1028c50, Func Offset: 0xf0
	// Line 382, Address: 0x1028c58, Func Offset: 0xf8
	// Line 383, Address: 0x1028c74, Func Offset: 0x114
	// Line 384, Address: 0x1028c80, Func Offset: 0x120
	// Line 385, Address: 0x1028c88, Func Offset: 0x128
	// Line 388, Address: 0x1028c94, Func Offset: 0x134
	// Line 389, Address: 0x1028ca0, Func Offset: 0x140
	// Func End, Address: 0x1028cbc, Func Offset: 0x15c
}

// 
// Start address: 0x1028cc0
void a_wait(_anon0* pActwk)
{
	// Line 395, Address: 0x1028cc0, Func Offset: 0
	// Line 396, Address: 0x1028ccc, Func Offset: 0xc
	// Line 399, Address: 0x1028cf8, Func Offset: 0x38
	// Line 402, Address: 0x1028d08, Func Offset: 0x48
	// Line 403, Address: 0x1028d14, Func Offset: 0x54
	// Func End, Address: 0x1028d24, Func Offset: 0x64
}

// 
// Start address: 0x1028d30
void a_make(_anon0* pActwk)
{
	unsigned char* pFlagWork;
	_anon0* pNewact;
	short* pTbl;
	// Line 409, Address: 0x1028d30, Func Offset: 0
	// Line 414, Address: 0x1028d44, Func Offset: 0x14
	// Line 415, Address: 0x1028d54, Func Offset: 0x24
	// Line 417, Address: 0x1028d60, Func Offset: 0x30
	// Line 418, Address: 0x1028d74, Func Offset: 0x44
	// Line 419, Address: 0x1028d8c, Func Offset: 0x5c
	// Line 422, Address: 0x1028da0, Func Offset: 0x70
	// Line 424, Address: 0x1028dd8, Func Offset: 0xa8
	// Line 425, Address: 0x1028de8, Func Offset: 0xb8
	// Line 426, Address: 0x1028df4, Func Offset: 0xc4
	// Line 427, Address: 0x1028e10, Func Offset: 0xe0
	// Line 431, Address: 0x1028e24, Func Offset: 0xf4
	// Line 432, Address: 0x1028e38, Func Offset: 0x108
	// Line 433, Address: 0x1028e50, Func Offset: 0x120
	// Line 436, Address: 0x1028e64, Func Offset: 0x134
	// Line 438, Address: 0x1028e9c, Func Offset: 0x16c
	// Line 439, Address: 0x1028eac, Func Offset: 0x17c
	// Line 440, Address: 0x1028eb8, Func Offset: 0x188
	// Line 441, Address: 0x1028ed4, Func Offset: 0x1a4
	// Line 445, Address: 0x1028ee8, Func Offset: 0x1b8
	// Func End, Address: 0x1028f00, Func Offset: 0x1d0
}

// 
// Start address: 0x1028f00
void ini_b(_anon0* pActwk, _anon0* pNewact)
{
	// Line 451, Address: 0x1028f00, Func Offset: 0
	// Line 452, Address: 0x1028f0c, Func Offset: 0xc
	// Line 453, Address: 0x1028f44, Func Offset: 0x44
	// Line 454, Address: 0x1028f54, Func Offset: 0x54
	// Line 455, Address: 0x1028f64, Func Offset: 0x64
	// Line 456, Address: 0x1028f70, Func Offset: 0x70
	// Line 457, Address: 0x1028f80, Func Offset: 0x80
	// Line 458, Address: 0x1028f90, Func Offset: 0x90
	// Line 459, Address: 0x1028fa0, Func Offset: 0xa0
	// Line 460, Address: 0x1028fb0, Func Offset: 0xb0
	// Func End, Address: 0x1028fbc, Func Offset: 0xbc
}

// 
// Start address: 0x1028fc0
void a_move(_anon0* pActwk)
{
	unsigned char* pFlagWork;
	_anon0* pChildact;
	short idx;
	// Line 466, Address: 0x1028fc0, Func Offset: 0
	// Line 471, Address: 0x1028fd8, Func Offset: 0x18
	// Line 473, Address: 0x1028fe4, Func Offset: 0x24
	// Line 474, Address: 0x1028ff8, Func Offset: 0x38
	// Line 475, Address: 0x1029008, Func Offset: 0x48
	// Line 476, Address: 0x1029010, Func Offset: 0x50
	// Line 477, Address: 0x1029030, Func Offset: 0x70
	// Line 479, Address: 0x102904c, Func Offset: 0x8c
	// Line 480, Address: 0x1029058, Func Offset: 0x98
	// Line 490, Address: 0x1029060, Func Offset: 0xa0
	// Line 491, Address: 0x1029074, Func Offset: 0xb4
	// Line 492, Address: 0x1029084, Func Offset: 0xc4
	// Line 493, Address: 0x102908c, Func Offset: 0xcc
	// Line 494, Address: 0x10290ac, Func Offset: 0xec
	// Line 496, Address: 0x10290c8, Func Offset: 0x108
	// Line 497, Address: 0x10290d4, Func Offset: 0x114
	// Line 507, Address: 0x10290dc, Func Offset: 0x11c
	// Line 508, Address: 0x10290f0, Func Offset: 0x130
	// Line 511, Address: 0x1029104, Func Offset: 0x144
	// Line 512, Address: 0x1029118, Func Offset: 0x158
	// Line 514, Address: 0x1029124, Func Offset: 0x164
	// Func End, Address: 0x1029140, Func Offset: 0x180
}

// 
// Start address: 0x1029140
void b_init(_anon0* pActwk)
{
	// Line 523, Address: 0x1029140, Func Offset: 0
	// Line 524, Address: 0x1029148, Func Offset: 0x8
	// Line 525, Address: 0x1029158, Func Offset: 0x18
	// Line 526, Address: 0x1029168, Func Offset: 0x28
	// Line 527, Address: 0x1029174, Func Offset: 0x34
	// Line 528, Address: 0x102918c, Func Offset: 0x4c
	// Line 529, Address: 0x1029198, Func Offset: 0x58
	// Line 530, Address: 0x10291a4, Func Offset: 0x64
	// Line 532, Address: 0x10291b4, Func Offset: 0x74
	// Line 534, Address: 0x10291c4, Func Offset: 0x84
	// Line 535, Address: 0x10291d4, Func Offset: 0x94
	// Line 536, Address: 0x10291e8, Func Offset: 0xa8
	// Line 537, Address: 0x10291f8, Func Offset: 0xb8
	// Line 539, Address: 0x1029200, Func Offset: 0xc0
	// Line 540, Address: 0x1029210, Func Offset: 0xd0
	// Line 541, Address: 0x1029224, Func Offset: 0xe4
	// Line 545, Address: 0x1029234, Func Offset: 0xf4
	// Line 546, Address: 0x1029260, Func Offset: 0x120
	// Line 547, Address: 0x1029278, Func Offset: 0x138
	// Line 548, Address: 0x1029288, Func Offset: 0x148
	// Line 552, Address: 0x1029298, Func Offset: 0x158
	// Func End, Address: 0x10292a4, Func Offset: 0x164
}

// 
// Start address: 0x10292b0
void b_fly(_anon0* pActwk)
{
	short xPos;
	short idx;
	_anon0* pMainwk;
	_anon0* pSubwk;
	// Line 558, Address: 0x10292b0, Func Offset: 0
	// Line 562, Address: 0x10292cc, Func Offset: 0x1c
	// Line 564, Address: 0x10292e8, Func Offset: 0x38
	// Line 565, Address: 0x102931c, Func Offset: 0x6c
	// Line 566, Address: 0x102932c, Func Offset: 0x7c
	// Line 570, Address: 0x1029338, Func Offset: 0x88
	// Line 571, Address: 0x1029354, Func Offset: 0xa4
	// Line 572, Address: 0x1029370, Func Offset: 0xc0
	// Line 573, Address: 0x1029388, Func Offset: 0xd8
	// Line 574, Address: 0x1029398, Func Offset: 0xe8
	// Line 578, Address: 0x10293a8, Func Offset: 0xf8
	// Line 582, Address: 0x10293d4, Func Offset: 0x124
	// Line 584, Address: 0x10293fc, Func Offset: 0x14c
	// Line 585, Address: 0x1029408, Func Offset: 0x158
	// Line 586, Address: 0x1029410, Func Offset: 0x160
	// Line 587, Address: 0x1029430, Func Offset: 0x180
	// Line 591, Address: 0x1029438, Func Offset: 0x188
	// Line 592, Address: 0x1029444, Func Offset: 0x194
	// Line 593, Address: 0x102944c, Func Offset: 0x19c
	// Line 594, Address: 0x102946c, Func Offset: 0x1bc
	// Line 601, Address: 0x1029474, Func Offset: 0x1c4
	// Line 602, Address: 0x1029480, Func Offset: 0x1d0
	// Func End, Address: 0x10294a0, Func Offset: 0x1f0
}

// 
// Start address: 0x10294a0
void b_near(_anon0* pActwk)
{
	_anon0* pMainwk;
	_anon0* pSubwk1;
	_anon0* pSubwk2;
	short idx;
	short xwk;
	short ywk;
	unsigned int flag1;
	unsigned int flag2;
	int speedwk;
	// Line 608, Address: 0x10294a0, Func Offset: 0
	// Line 614, Address: 0x10294d0, Func Offset: 0x30
	// Line 615, Address: 0x10294e0, Func Offset: 0x40
	// Line 617, Address: 0x1029500, Func Offset: 0x60
	// Line 618, Address: 0x102951c, Func Offset: 0x7c
	// Line 620, Address: 0x102953c, Func Offset: 0x9c
	// Line 621, Address: 0x1029558, Func Offset: 0xb8
	// Line 622, Address: 0x1029578, Func Offset: 0xd8
	// Line 624, Address: 0x102957c, Func Offset: 0xdc
	// Line 627, Address: 0x10295c0, Func Offset: 0x120
	// Line 629, Address: 0x10295d4, Func Offset: 0x134
	// Line 630, Address: 0x10295e0, Func Offset: 0x140
	// Line 631, Address: 0x10295ec, Func Offset: 0x14c
	// Line 632, Address: 0x10295f8, Func Offset: 0x158
	// Line 634, Address: 0x1029604, Func Offset: 0x164
	// Line 635, Address: 0x1029618, Func Offset: 0x178
	// Line 639, Address: 0x102961c, Func Offset: 0x17c
	// Line 640, Address: 0x1029628, Func Offset: 0x188
	// Line 641, Address: 0x1029634, Func Offset: 0x194
	// Line 643, Address: 0x1029650, Func Offset: 0x1b0
	// Line 644, Address: 0x102965c, Func Offset: 0x1bc
	// Line 645, Address: 0x1029668, Func Offset: 0x1c8
	// Line 646, Address: 0x1029674, Func Offset: 0x1d4
	// Line 648, Address: 0x1029680, Func Offset: 0x1e0
	// Line 649, Address: 0x1029694, Func Offset: 0x1f4
	// Line 653, Address: 0x1029698, Func Offset: 0x1f8
	// Line 654, Address: 0x10296a4, Func Offset: 0x204
	// Line 655, Address: 0x10296b0, Func Offset: 0x210
	// Line 656, Address: 0x10296b8, Func Offset: 0x218
	// Line 660, Address: 0x10296bc, Func Offset: 0x21c
	// Line 662, Address: 0x10296c0, Func Offset: 0x220
	// Line 665, Address: 0x1029704, Func Offset: 0x264
	// Line 667, Address: 0x1029718, Func Offset: 0x278
	// Line 668, Address: 0x102972c, Func Offset: 0x28c
	// Line 672, Address: 0x1029730, Func Offset: 0x290
	// Line 673, Address: 0x102973c, Func Offset: 0x29c
	// Line 674, Address: 0x1029748, Func Offset: 0x2a8
	// Line 676, Address: 0x1029764, Func Offset: 0x2c4
	// Line 677, Address: 0x1029778, Func Offset: 0x2d8
	// Line 681, Address: 0x102977c, Func Offset: 0x2dc
	// Line 682, Address: 0x1029788, Func Offset: 0x2e8
	// Line 683, Address: 0x1029794, Func Offset: 0x2f4
	// Line 684, Address: 0x102979c, Func Offset: 0x2fc
	// Line 688, Address: 0x10297a0, Func Offset: 0x300
	// Line 689, Address: 0x10297b0, Func Offset: 0x310
	// Line 693, Address: 0x10297c0, Func Offset: 0x320
	// Line 694, Address: 0x10297cc, Func Offset: 0x32c
	// Line 699, Address: 0x10297d4, Func Offset: 0x334
	// Line 700, Address: 0x10297e4, Func Offset: 0x344
	// Line 701, Address: 0x10297f0, Func Offset: 0x350
	// Func End, Address: 0x1029824, Func Offset: 0x384
}

// 
// Start address: 0x1029830
void b_fix(_anon0* pActwk)
{
	short hwk;
	short vwk;
	// Line 707, Address: 0x1029830, Func Offset: 0
	// Line 710, Address: 0x1029844, Func Offset: 0x14
	// Line 711, Address: 0x1029854, Func Offset: 0x24
	// Line 712, Address: 0x102986c, Func Offset: 0x3c
	// Line 713, Address: 0x1029878, Func Offset: 0x48
	// Line 715, Address: 0x1029884, Func Offset: 0x54
	// Line 716, Address: 0x1029890, Func Offset: 0x60
	// Line 717, Address: 0x10298c8, Func Offset: 0x98
	// Line 721, Address: 0x1029900, Func Offset: 0xd0
	// Line 722, Address: 0x1029908, Func Offset: 0xd8
	// Line 724, Address: 0x1029910, Func Offset: 0xe0
	// Line 725, Address: 0x102991c, Func Offset: 0xec
	// Func End, Address: 0x1029934, Func Offset: 0x104
}

// 
// Start address: 0x1029940
void b_fix1(_anon0* pActwk)
{
	// Line 731, Address: 0x1029940, Func Offset: 0
	// Line 732, Address: 0x102994c, Func Offset: 0xc
	// Line 733, Address: 0x1029964, Func Offset: 0x24
	// Line 734, Address: 0x1029970, Func Offset: 0x30
	// Func End, Address: 0x1029980, Func Offset: 0x40
}

// 
// Start address: 0x1029980
void b_start(_anon0* pActwk)
{
	short xwk;
	short ywk;
	// Line 740, Address: 0x1029980, Func Offset: 0
	// Line 743, Address: 0x1029994, Func Offset: 0x14
	// Line 744, Address: 0x10299a4, Func Offset: 0x24
	// Line 746, Address: 0x10299b0, Func Offset: 0x30
	// Line 749, Address: 0x10299bc, Func Offset: 0x3c
	// Line 750, Address: 0x10299f4, Func Offset: 0x74
	// Line 752, Address: 0x1029a2c, Func Offset: 0xac
	// Line 753, Address: 0x1029a34, Func Offset: 0xb4
	// Line 755, Address: 0x1029a3c, Func Offset: 0xbc
	// Line 756, Address: 0x1029a48, Func Offset: 0xc8
	// Func End, Address: 0x1029a60, Func Offset: 0xe0
}

// 
// Start address: 0x1029a60
void b_com(_anon0* pActwk)
{
	// Line 762, Address: 0x1029a60, Func Offset: 0
	// Line 763, Address: 0x1029a6c, Func Offset: 0xc
	// Line 764, Address: 0x1029a84, Func Offset: 0x24
	// Line 765, Address: 0x1029a90, Func Offset: 0x30
	// Func End, Address: 0x1029aa0, Func Offset: 0x40
}

// 
// Start address: 0x1029aa0
void b_com1(_anon0* pActwk)
{
	_anon0* pMainwk;
	// Line 771, Address: 0x1029aa0, Func Offset: 0
	// Line 774, Address: 0x1029ab0, Func Offset: 0x10
	// Line 775, Address: 0x1029abc, Func Offset: 0x1c
	// Line 776, Address: 0x1029ae4, Func Offset: 0x44
	// Line 778, Address: 0x1029af0, Func Offset: 0x50
	// Line 779, Address: 0x1029b00, Func Offset: 0x60
	// Line 781, Address: 0x1029b10, Func Offset: 0x70
	// Func End, Address: 0x1029b24, Func Offset: 0x84
}

// 
// Start address: 0x1029b30
void b_kill_v(_anon0* pActwk)
{
	_anon0* pMainwk;
	// Line 787, Address: 0x1029b30, Func Offset: 0
	// Line 790, Address: 0x1029b40, Func Offset: 0x10
	// Line 791, Address: 0x1029b68, Func Offset: 0x38
	// Line 792, Address: 0x1029b74, Func Offset: 0x44
	// Line 793, Address: 0x1029b84, Func Offset: 0x54
	// Func End, Address: 0x1029b98, Func Offset: 0x68
}

// 
// Start address: 0x1029ba0
void b_die_v(_anon0* pActwk, _anon0* pMainwk)
{
	short idx;
	// Line 796, Address: 0x1029ba0, Func Offset: 0
	// Line 799, Address: 0x1029bb0, Func Offset: 0x10
	// Line 800, Address: 0x1029bc0, Func Offset: 0x20
	// Line 801, Address: 0x1029c08, Func Offset: 0x68
	// Line 802, Address: 0x1029c10, Func Offset: 0x70
	// Line 803, Address: 0x1029c18, Func Offset: 0x78
	// Line 805, Address: 0x1029c20, Func Offset: 0x80
	// Func End, Address: 0x1029c30, Func Offset: 0x90
}

// 
// Start address: 0x1029c30
void b_light(_anon0* pActwk)
{
	// Line 811, Address: 0x1029c30, Func Offset: 0
	// Line 812, Address: 0x1029c3c, Func Offset: 0xc
	// Line 813, Address: 0x1029c4c, Func Offset: 0x1c
	// Line 814, Address: 0x1029c58, Func Offset: 0x28
	// Line 815, Address: 0x1029c68, Func Offset: 0x38
	// Line 819, Address: 0x1029c74, Func Offset: 0x44
	// Line 820, Address: 0x1029c80, Func Offset: 0x50
	// Func End, Address: 0x1029c90, Func Offset: 0x60
}

// 
// Start address: 0x1029c90
void b_up(_anon0* pActwk)
{
	// Line 826, Address: 0x1029c90, Func Offset: 0
	// Line 827, Address: 0x1029c9c, Func Offset: 0xc
	// Line 828, Address: 0x1029cac, Func Offset: 0x1c
	// Line 829, Address: 0x1029cb8, Func Offset: 0x28
	// Line 830, Address: 0x1029cc4, Func Offset: 0x34
	// Func End, Address: 0x1029cd4, Func Offset: 0x44
}

// 
// Start address: 0x1029ce0
void b_up1(_anon0* pActwk)
{
	// Line 836, Address: 0x1029ce0, Func Offset: 0
	// Line 837, Address: 0x1029cec, Func Offset: 0xc
	// Line 838, Address: 0x1029cfc, Func Offset: 0x1c
	// Line 839, Address: 0x1029d14, Func Offset: 0x34
	// Line 840, Address: 0x1029d4c, Func Offset: 0x6c
	// Line 841, Address: 0x1029d58, Func Offset: 0x78
	// Line 846, Address: 0x1029d60, Func Offset: 0x80
	// Line 847, Address: 0x1029d6c, Func Offset: 0x8c
	// Func End, Address: 0x1029d7c, Func Offset: 0x9c
}

// 
// Start address: 0x1029d80
void b_make_c(_anon0* pActwk)
{
	short idx1;
	short idx2;
	short xPos;
	short xWk;
	short yPos;
	short yWk;
	_anon0* pMainwk;
	_anon0* pSubwk1;
	_anon0* pSubwk2;
	_anon0* pNewact;
	int i;
	// Line 853, Address: 0x1029d80, Func Offset: 0
	// Line 858, Address: 0x1029db0, Func Offset: 0x30
	// Line 859, Address: 0x1029dd8, Func Offset: 0x58
	// Line 860, Address: 0x1029de0, Func Offset: 0x60
	// Line 861, Address: 0x1029dec, Func Offset: 0x6c
	// Line 863, Address: 0x1029e00, Func Offset: 0x80
	// Line 866, Address: 0x1029e08, Func Offset: 0x88
	// Line 867, Address: 0x1029e2c, Func Offset: 0xac
	// Line 868, Address: 0x1029e4c, Func Offset: 0xcc
	// Line 873, Address: 0x1029e58, Func Offset: 0xd8
	// Line 875, Address: 0x1029e80, Func Offset: 0x100
	// Line 878, Address: 0x1029e88, Func Offset: 0x108
	// Line 879, Address: 0x1029e94, Func Offset: 0x114
	// Line 880, Address: 0x1029ea0, Func Offset: 0x120
	// Line 881, Address: 0x1029eac, Func Offset: 0x12c
	// Line 882, Address: 0x1029eb8, Func Offset: 0x138
	// Line 883, Address: 0x1029ee0, Func Offset: 0x160
	// Line 884, Address: 0x1029f08, Func Offset: 0x188
	// Line 885, Address: 0x1029f14, Func Offset: 0x194
	// Line 886, Address: 0x1029f20, Func Offset: 0x1a0
	// Line 890, Address: 0x1029f34, Func Offset: 0x1b4
	// Line 892, Address: 0x1029f68, Func Offset: 0x1e8
	// Line 894, Address: 0x1029f9c, Func Offset: 0x21c
	// Line 895, Address: 0x1029fa8, Func Offset: 0x228
	// Line 896, Address: 0x1029fb4, Func Offset: 0x234
	// Line 897, Address: 0x1029fc0, Func Offset: 0x240
	// Line 898, Address: 0x1029fcc, Func Offset: 0x24c
	// Line 899, Address: 0x1029fd8, Func Offset: 0x258
	// Line 900, Address: 0x1029fe4, Func Offset: 0x264
	// Line 901, Address: 0x1029fec, Func Offset: 0x26c
	// Line 902, Address: 0x1029ff4, Func Offset: 0x274
	// Line 905, Address: 0x102a004, Func Offset: 0x284
	// Func End, Address: 0x102a038, Func Offset: 0x2b8
}

// 
// Start address: 0x102a040
void c_init(_anon0* pActwk)
{
	// Line 914, Address: 0x102a040, Func Offset: 0
	// Line 915, Address: 0x102a04c, Func Offset: 0xc
	// Line 916, Address: 0x102a05c, Func Offset: 0x1c
	// Line 917, Address: 0x102a06c, Func Offset: 0x2c
	// Line 918, Address: 0x102a078, Func Offset: 0x38
	// Line 919, Address: 0x102a090, Func Offset: 0x50
	// Line 920, Address: 0x102a09c, Func Offset: 0x5c
	// Line 921, Address: 0x102a0a8, Func Offset: 0x68
	// Line 922, Address: 0x102a0b8, Func Offset: 0x78
	// Line 923, Address: 0x102a0c4, Func Offset: 0x84
	// Func End, Address: 0x102a0d4, Func Offset: 0x94
}

// 
// Start address: 0x102a0e0
void c_move(_anon0* pActwk)
{
	// Line 929, Address: 0x102a0e0, Func Offset: 0
	// Line 930, Address: 0x102a0ec, Func Offset: 0xc
	// Line 931, Address: 0x102a100, Func Offset: 0x20
	// Line 932, Address: 0x102a10c, Func Offset: 0x2c
	// Func End, Address: 0x102a11c, Func Offset: 0x3c
}

// 
// Start address: 0x102a120
unsigned int area(_anon0* pActwk, _anon0* pPlayerwk, unsigned short Ypos, unsigned short Ylen, unsigned short Xpos, unsigned short Xlen)
{
	unsigned short len;
	// Line 957, Address: 0x102a120, Func Offset: 0
	// Line 960, Address: 0x102a140, Func Offset: 0x20
	// Line 961, Address: 0x102a178, Func Offset: 0x58
	// Line 962, Address: 0x102a190, Func Offset: 0x70
	// Line 965, Address: 0x102a19c, Func Offset: 0x7c
	// Line 966, Address: 0x102a1d4, Func Offset: 0xb4
	// Line 967, Address: 0x102a1ec, Func Offset: 0xcc
	// Line 970, Address: 0x102a1f8, Func Offset: 0xd8
	// Line 971, Address: 0x102a1fc, Func Offset: 0xdc
	// Func End, Address: 0x102a20c, Func Offset: 0xec
}

