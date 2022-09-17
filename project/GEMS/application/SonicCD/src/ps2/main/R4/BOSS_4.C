typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;

typedef unsigned int(*type_7)(_anon0*);
typedef void(*type_14)(_anon0*);

typedef unsigned char type_0[4];
typedef _anon8 type_1[20];
typedef _anon2 type_2[4];
typedef unsigned char type_3[4];
typedef _anon8 type_4[0];
typedef _anon2 type_5[19];
typedef unsigned char type_6[6];
typedef unsigned int(*type_8)(_anon0*)[5];
typedef unsigned char type_9[4];
typedef unsigned char type_10[2];
typedef unsigned char type_11[22];
typedef unsigned char type_12[4];
typedef unsigned char type_13[4];
typedef void(*type_15)(_anon0*)[3];
typedef _anon2 type_16[3];
typedef unsigned char* type_17[2];
typedef unsigned char type_18[3];
typedef _anon0 type_19[128];
typedef _anon1* type_20[9];
typedef unsigned char* type_21[6];
typedef unsigned char type_22[4];
typedef _anon1* type_23[4];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon8 spra[20];
		_anon8 spr[0];
	};
};

struct _anon2
{
	char E4A_VEC;
	char E4A_ETC;
	short E4A_X;
	short E4A_Y;
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

struct _anon8
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char air_pchg0[4];
unsigned char air_pchg1[4];
unsigned char air_pchg2[4];
unsigned char air_pchg3[4];
unsigned char air_pchg4[4];
unsigned char air_pchg5[4];
unsigned char* egg4air_pchg[6];
_anon1 air_pat00;
_anon1 air_pat01;
_anon1 air_pat02;
_anon1 air_pat03;
_anon1 air_pat04;
_anon1 air_pat05;
_anon1 air_pat06;
_anon1 air_pat07;
_anon1 air_pat08;
_anon1* egg4air_pat[9];
unsigned int(*e4a_act_tbl)(_anon0*)[5];
_anon2 egg4_air_tbl1[19];
_anon2 egg4_air_tbl2[3];
_anon2 egg4_air_tbl3[4];
_anon0 actwk[128];
unsigned char bossstart;
unsigned char head_pchg0[3];
unsigned char head_pchg1[6];
unsigned char* egg4airhead_pchg[2];
_anon1 head_pat0;
_anon1 head_pat1;
_anon1 head_pat2;
_anon1 head_pat3;
_anon1* egg4airhead_pat[4];
void(*e4ahead_act_tbl)(_anon0*)[3];
unsigned char bossflag;

void egg4air(_anon0* pActwk);
unsigned int egg4air_ini(_anon0* pActwk);
void make_airhead(_anon0* pActwk);
unsigned int egg4air_01(_anon0* pActwk);
void egg4air_01_next(_anon0* pActwk, _anon2* pEscRoot);
void egg4air_yure(_anon0* pActwk);
void egg4air_yurenai(_anon0* pActwk);
void egg4air_hitchk(_anon0* pActwk);
unsigned int egg4air_02(_anon0* pActwk);
unsigned int egg4air_03(_anon0* pActwk);
void egg4air_bom(_anon0* pActwk);
void e4a_03_far(_anon0* pActwk);
void e4a_03_most_near(_anon0* pActwk);
void e4a_03_near(_anon0* pActwk);
void e4a_03_normal(_anon0* pActwk);
void egg4_make_bom(_anon0* pActwk);
unsigned int egg4air_04(_anon0* pActwk);
void egg4airhead(_anon0* pActwk);
void egg4airhead_ini(_anon0* pActwk);
void egg4airhead_01(_anon0* pActwk);
void egg4airhead_02(_anon0* pActwk);
void make_gate(_anon0* pActwk);

// 
// Start address: 0x1020920
void egg4air(_anon0* pActwk)
{
	// Line 309, Address: 0x1020920, Func Offset: 0
	// Line 310, Address: 0x102092c, Func Offset: 0xc
	// Line 311, Address: 0x1020978, Func Offset: 0x58
	// Line 313, Address: 0x1020988, Func Offset: 0x68
	// Line 314, Address: 0x1020998, Func Offset: 0x78
	// Line 315, Address: 0x10209a8, Func Offset: 0x88
	// Line 316, Address: 0x10209bc, Func Offset: 0x9c
	// Line 317, Address: 0x10209cc, Func Offset: 0xac
	// Line 318, Address: 0x10209d4, Func Offset: 0xb4
	// Line 321, Address: 0x10209e8, Func Offset: 0xc8
	// Line 323, Address: 0x10209f4, Func Offset: 0xd4
	// Func End, Address: 0x1020a04, Func Offset: 0xe4
}

// 
// Start address: 0x1020a10
unsigned int egg4air_ini(_anon0* pActwk)
{
	// Line 330, Address: 0x1020a10, Func Offset: 0
	// Line 331, Address: 0x1020a1c, Func Offset: 0xc
	// Line 332, Address: 0x1020a28, Func Offset: 0x18
	// Line 334, Address: 0x1020a34, Func Offset: 0x24
	// Line 335, Address: 0x1020a40, Func Offset: 0x30
	// Line 336, Address: 0x1020a4c, Func Offset: 0x3c
	// Line 337, Address: 0x1020a58, Func Offset: 0x48
	// Line 338, Address: 0x1020a64, Func Offset: 0x54
	// Line 339, Address: 0x1020a70, Func Offset: 0x60
	// Line 340, Address: 0x1020a7c, Func Offset: 0x6c
	// Line 341, Address: 0x1020a88, Func Offset: 0x78
	// Line 343, Address: 0x1020a98, Func Offset: 0x88
	// Line 344, Address: 0x1020aa8, Func Offset: 0x98
	// Line 346, Address: 0x1020ab8, Func Offset: 0xa8
	// Line 347, Address: 0x1020ac4, Func Offset: 0xb4
	// Line 349, Address: 0x1020ad0, Func Offset: 0xc0
	// Line 350, Address: 0x1020ad4, Func Offset: 0xc4
	// Func End, Address: 0x1020ae4, Func Offset: 0xd4
}

// 
// Start address: 0x1020af0
void make_airhead(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 356, Address: 0x1020af0, Func Offset: 0
	// Line 359, Address: 0x1020afc, Func Offset: 0xc
	// Line 360, Address: 0x1020b10, Func Offset: 0x20
	// Line 361, Address: 0x1020b48, Func Offset: 0x58
	// Line 362, Address: 0x1020b80, Func Offset: 0x90
	// Line 363, Address: 0x1020b8c, Func Offset: 0x9c
	// Line 364, Address: 0x1020b9c, Func Offset: 0xac
	// Line 366, Address: 0x1020bac, Func Offset: 0xbc
	// Func End, Address: 0x1020bbc, Func Offset: 0xcc
}

// 
// Start address: 0x1020bc0
unsigned int egg4air_01(_anon0* pActwk)
{
	_anon2* pEscRoot;
	int flg;
	int spdwk;
	// Line 373, Address: 0x1020bc0, Func Offset: 0
	// Line 378, Address: 0x1020bd8, Func Offset: 0x18
	// Line 380, Address: 0x1020bf0, Func Offset: 0x30
	// Line 382, Address: 0x1020bfc, Func Offset: 0x3c
	// Line 383, Address: 0x1020c14, Func Offset: 0x54
	// Line 384, Address: 0x1020c20, Func Offset: 0x60
	// Line 385, Address: 0x1020c40, Func Offset: 0x80
	// Line 386, Address: 0x1020c4c, Func Offset: 0x8c
	// Line 387, Address: 0x1020c54, Func Offset: 0x94
	// Line 391, Address: 0x1020c60, Func Offset: 0xa0
	// Line 393, Address: 0x1020c80, Func Offset: 0xc0
	// Line 396, Address: 0x1020cb4, Func Offset: 0xf4
	// Line 397, Address: 0x1020cc0, Func Offset: 0x100
	// Line 398, Address: 0x1020cd0, Func Offset: 0x110
	// Line 400, Address: 0x1020ce8, Func Offset: 0x128
	// Line 401, Address: 0x1020d10, Func Offset: 0x150
	// Line 402, Address: 0x1020d1c, Func Offset: 0x15c
	// Line 403, Address: 0x1020d24, Func Offset: 0x164
	// Line 406, Address: 0x1020d34, Func Offset: 0x174
	// Line 410, Address: 0x1020d3c, Func Offset: 0x17c
	// Line 411, Address: 0x1020d48, Func Offset: 0x188
	// Line 412, Address: 0x1020d58, Func Offset: 0x198
	// Line 414, Address: 0x1020d70, Func Offset: 0x1b0
	// Line 415, Address: 0x1020d98, Func Offset: 0x1d8
	// Line 416, Address: 0x1020da4, Func Offset: 0x1e4
	// Line 417, Address: 0x1020dac, Func Offset: 0x1ec
	// Line 420, Address: 0x1020dbc, Func Offset: 0x1fc
	// Line 424, Address: 0x1020dc4, Func Offset: 0x204
	// Line 425, Address: 0x1020dcc, Func Offset: 0x20c
	// Line 427, Address: 0x1020de4, Func Offset: 0x224
	// Line 428, Address: 0x1020e0c, Func Offset: 0x24c
	// Line 429, Address: 0x1020e18, Func Offset: 0x258
	// Line 430, Address: 0x1020e20, Func Offset: 0x260
	// Line 431, Address: 0x1020e38, Func Offset: 0x278
	// Line 432, Address: 0x1020e44, Func Offset: 0x284
	// Line 433, Address: 0x1020e4c, Func Offset: 0x28c
	// Line 436, Address: 0x1020e58, Func Offset: 0x298
	// Line 439, Address: 0x1020e68, Func Offset: 0x2a8
	// Line 443, Address: 0x1020e70, Func Offset: 0x2b0
	// Line 444, Address: 0x1020e7c, Func Offset: 0x2bc
	// Line 446, Address: 0x1020e8c, Func Offset: 0x2cc
	// Line 448, Address: 0x1020e90, Func Offset: 0x2d0
	// Line 449, Address: 0x1020e98, Func Offset: 0x2d8
	// Line 450, Address: 0x1020ea8, Func Offset: 0x2e8
	// Line 451, Address: 0x1020ed0, Func Offset: 0x310
	// Line 452, Address: 0x1020edc, Func Offset: 0x31c
	// Line 456, Address: 0x1020ee0, Func Offset: 0x320
	// Line 457, Address: 0x1020ef0, Func Offset: 0x330
	// Line 458, Address: 0x1020f18, Func Offset: 0x358
	// Line 459, Address: 0x1020f24, Func Offset: 0x364
	// Line 463, Address: 0x1020f28, Func Offset: 0x368
	// Line 464, Address: 0x1020f34, Func Offset: 0x374
	// Line 465, Address: 0x1020f44, Func Offset: 0x384
	// Line 466, Address: 0x1020f4c, Func Offset: 0x38c
	// Line 469, Address: 0x1020f58, Func Offset: 0x398
	// Line 473, Address: 0x1020f60, Func Offset: 0x3a0
	// Line 474, Address: 0x1020f6c, Func Offset: 0x3ac
	// Line 476, Address: 0x1020f7c, Func Offset: 0x3bc
	// Line 478, Address: 0x1020f80, Func Offset: 0x3c0
	// Line 479, Address: 0x1020f88, Func Offset: 0x3c8
	// Line 480, Address: 0x1020f98, Func Offset: 0x3d8
	// Line 481, Address: 0x1020fc0, Func Offset: 0x400
	// Line 482, Address: 0x1020fcc, Func Offset: 0x40c
	// Line 486, Address: 0x1020fd0, Func Offset: 0x410
	// Line 487, Address: 0x1020fe0, Func Offset: 0x420
	// Line 488, Address: 0x1021008, Func Offset: 0x448
	// Line 489, Address: 0x1021014, Func Offset: 0x454
	// Line 493, Address: 0x1021018, Func Offset: 0x458
	// Line 494, Address: 0x1021024, Func Offset: 0x464
	// Line 495, Address: 0x1021034, Func Offset: 0x474
	// Line 496, Address: 0x102103c, Func Offset: 0x47c
	// Line 499, Address: 0x1021048, Func Offset: 0x488
	// Line 503, Address: 0x1021050, Func Offset: 0x490
	// Line 504, Address: 0x1021058, Func Offset: 0x498
	// Line 506, Address: 0x1021070, Func Offset: 0x4b0
	// Line 507, Address: 0x1021098, Func Offset: 0x4d8
	// Line 508, Address: 0x10210a4, Func Offset: 0x4e4
	// Line 509, Address: 0x10210ac, Func Offset: 0x4ec
	// Line 510, Address: 0x10210c4, Func Offset: 0x504
	// Line 511, Address: 0x10210d0, Func Offset: 0x510
	// Line 512, Address: 0x10210d8, Func Offset: 0x518
	// Line 515, Address: 0x10210e4, Func Offset: 0x524
	// Line 518, Address: 0x10210f4, Func Offset: 0x534
	// Line 522, Address: 0x10210fc, Func Offset: 0x53c
	// Line 523, Address: 0x1021108, Func Offset: 0x548
	// Line 525, Address: 0x1021118, Func Offset: 0x558
	// Line 527, Address: 0x102111c, Func Offset: 0x55c
	// Line 528, Address: 0x1021124, Func Offset: 0x564
	// Line 529, Address: 0x1021134, Func Offset: 0x574
	// Line 530, Address: 0x102115c, Func Offset: 0x59c
	// Line 531, Address: 0x1021168, Func Offset: 0x5a8
	// Line 535, Address: 0x102116c, Func Offset: 0x5ac
	// Line 536, Address: 0x102117c, Func Offset: 0x5bc
	// Line 537, Address: 0x10211a4, Func Offset: 0x5e4
	// Line 538, Address: 0x10211b0, Func Offset: 0x5f0
	// Line 542, Address: 0x10211b4, Func Offset: 0x5f4
	// Line 543, Address: 0x10211c0, Func Offset: 0x600
	// Line 544, Address: 0x10211d0, Func Offset: 0x610
	// Line 545, Address: 0x10211d8, Func Offset: 0x618
	// Line 548, Address: 0x10211e4, Func Offset: 0x624
	// Line 552, Address: 0x10211ec, Func Offset: 0x62c
	// Line 554, Address: 0x10211f0, Func Offset: 0x630
	// Line 555, Address: 0x10211f8, Func Offset: 0x638
	// Line 556, Address: 0x1021208, Func Offset: 0x648
	// Line 557, Address: 0x1021230, Func Offset: 0x670
	// Line 558, Address: 0x102123c, Func Offset: 0x67c
	// Line 562, Address: 0x1021240, Func Offset: 0x680
	// Line 563, Address: 0x1021250, Func Offset: 0x690
	// Line 564, Address: 0x1021278, Func Offset: 0x6b8
	// Line 565, Address: 0x1021284, Func Offset: 0x6c4
	// Line 569, Address: 0x1021288, Func Offset: 0x6c8
	// Line 570, Address: 0x1021294, Func Offset: 0x6d4
	// Line 571, Address: 0x10212a4, Func Offset: 0x6e4
	// Line 572, Address: 0x10212b0, Func Offset: 0x6f0
	// Line 573, Address: 0x10212c0, Func Offset: 0x700
	// Line 574, Address: 0x10212c8, Func Offset: 0x708
	// Line 583, Address: 0x10212d4, Func Offset: 0x714
	// Line 584, Address: 0x10212dc, Func Offset: 0x71c
	// Func End, Address: 0x10212f8, Func Offset: 0x738
}

// 
// Start address: 0x1021300
void egg4air_01_next(_anon0* pActwk, _anon2* pEscRoot)
{
	short actidx;
	// Line 589, Address: 0x1021300, Func Offset: 0
	// Line 592, Address: 0x1021310, Func Offset: 0x10
	// Line 594, Address: 0x1021330, Func Offset: 0x30
	// Line 595, Address: 0x1021340, Func Offset: 0x40
	// Line 596, Address: 0x102135c, Func Offset: 0x5c
	// Line 598, Address: 0x102136c, Func Offset: 0x6c
	// Line 600, Address: 0x1021374, Func Offset: 0x74
	// Line 602, Address: 0x1021390, Func Offset: 0x90
	// Line 604, Address: 0x102139c, Func Offset: 0x9c
	// Line 605, Address: 0x10213bc, Func Offset: 0xbc
	// Line 606, Address: 0x10213f8, Func Offset: 0xf8
	// Line 609, Address: 0x1021420, Func Offset: 0x120
	// Line 611, Address: 0x1021444, Func Offset: 0x144
	// Line 613, Address: 0x1021450, Func Offset: 0x150
	// Line 614, Address: 0x1021470, Func Offset: 0x170
	// Line 615, Address: 0x10214ac, Func Offset: 0x1ac
	// Line 618, Address: 0x10214d4, Func Offset: 0x1d4
	// Line 620, Address: 0x10214dc, Func Offset: 0x1dc
	// Line 621, Address: 0x10214ec, Func Offset: 0x1ec
	// Line 622, Address: 0x10214f8, Func Offset: 0x1f8
	// Line 625, Address: 0x1021500, Func Offset: 0x200
	// Func End, Address: 0x1021510, Func Offset: 0x210
}

// 
// Start address: 0x1021510
void egg4air_yure(_anon0* pActwk)
{
	short sinwk;
	short coswk;
	// Line 631, Address: 0x1021510, Func Offset: 0
	// Line 634, Address: 0x102151c, Func Offset: 0xc
	// Line 635, Address: 0x102152c, Func Offset: 0x1c
	// Line 636, Address: 0x1021544, Func Offset: 0x34
	// Line 637, Address: 0x1021550, Func Offset: 0x40
	// Line 638, Address: 0x102155c, Func Offset: 0x4c
	// Line 639, Address: 0x1021570, Func Offset: 0x60
	// Func End, Address: 0x1021580, Func Offset: 0x70
}

// 
// Start address: 0x1021580
void egg4air_yurenai(_anon0* pActwk)
{
	// Line 645, Address: 0x1021580, Func Offset: 0
	// Line 646, Address: 0x1021588, Func Offset: 0x8
	// Line 647, Address: 0x10215a0, Func Offset: 0x20
	// Func End, Address: 0x10215ac, Func Offset: 0x2c
}

// 
// Start address: 0x10215b0
void egg4air_hitchk(_anon0* pActwk)
{
	short actidx;
	// Line 653, Address: 0x10215b0, Func Offset: 0
	// Line 656, Address: 0x10215c0, Func Offset: 0x10
	// Line 657, Address: 0x10215ec, Func Offset: 0x3c
	// Line 658, Address: 0x10215fc, Func Offset: 0x4c
	// Line 662, Address: 0x102160c, Func Offset: 0x5c
	// Line 667, Address: 0x102161c, Func Offset: 0x6c
	// Line 669, Address: 0x102162c, Func Offset: 0x7c
	// Line 670, Address: 0x102164c, Func Offset: 0x9c
	// Line 673, Address: 0x1021658, Func Offset: 0xa8
	// Line 676, Address: 0x1021660, Func Offset: 0xb0
	// Line 681, Address: 0x1021670, Func Offset: 0xc0
	// Line 684, Address: 0x102167c, Func Offset: 0xcc
	// Line 685, Address: 0x102169c, Func Offset: 0xec
	// Line 686, Address: 0x10216c4, Func Offset: 0x114
	// Line 687, Address: 0x10216d0, Func Offset: 0x120
	// Line 688, Address: 0x10216e0, Func Offset: 0x130
	// Line 690, Address: 0x10216f0, Func Offset: 0x140
	// Line 691, Address: 0x10216fc, Func Offset: 0x14c
	// Line 693, Address: 0x1021714, Func Offset: 0x164
	// Line 694, Address: 0x1021720, Func Offset: 0x170
	// Line 695, Address: 0x1021728, Func Offset: 0x178
	// Line 696, Address: 0x1021730, Func Offset: 0x180
	// Line 699, Address: 0x102173c, Func Offset: 0x18c
	// Func End, Address: 0x1021750, Func Offset: 0x1a0
}

// 
// Start address: 0x1021750
unsigned int egg4air_02(_anon0* pActwk)
{
	short actidx;
	// Line 706, Address: 0x1021750, Func Offset: 0
	// Line 709, Address: 0x1021760, Func Offset: 0x10
	// Line 710, Address: 0x1021778, Func Offset: 0x28
	// Line 712, Address: 0x1021788, Func Offset: 0x38
	// Line 713, Address: 0x10217a4, Func Offset: 0x54
	// Line 714, Address: 0x10217c4, Func Offset: 0x74
	// Line 719, Address: 0x10217f0, Func Offset: 0xa0
	// Line 720, Address: 0x10217fc, Func Offset: 0xac
	// Line 723, Address: 0x1021808, Func Offset: 0xb8
	// Line 724, Address: 0x102180c, Func Offset: 0xbc
	// Func End, Address: 0x1021820, Func Offset: 0xd0
}

// 
// Start address: 0x1021820
unsigned int egg4air_03(_anon0* pActwk)
{
	_anon3 xwk;
	_anon3 ywk;
	// Line 731, Address: 0x1021820, Func Offset: 0
	// Line 734, Address: 0x102182c, Func Offset: 0xc
	// Line 736, Address: 0x1021838, Func Offset: 0x18
	// Line 737, Address: 0x1021840, Func Offset: 0x20
	// Line 738, Address: 0x1021870, Func Offset: 0x50
	// Line 739, Address: 0x1021884, Func Offset: 0x64
	// Line 743, Address: 0x10218a0, Func Offset: 0x80
	// Line 744, Address: 0x10218d0, Func Offset: 0xb0
	// Line 745, Address: 0x10218e4, Func Offset: 0xc4
	// Line 749, Address: 0x1021900, Func Offset: 0xe0
	// Line 750, Address: 0x1021910, Func Offset: 0xf0
	// Line 751, Address: 0x1021920, Func Offset: 0x100
	// Line 753, Address: 0x1021930, Func Offset: 0x110
	// Line 755, Address: 0x1021948, Func Offset: 0x128
	// Line 756, Address: 0x1021960, Func Offset: 0x140
	// Line 757, Address: 0x102196c, Func Offset: 0x14c
	// Line 759, Address: 0x1021978, Func Offset: 0x158
	// Line 764, Address: 0x1021988, Func Offset: 0x168
	// Line 765, Address: 0x10219a8, Func Offset: 0x188
	// Line 766, Address: 0x10219b4, Func Offset: 0x194
	// Line 767, Address: 0x10219d4, Func Offset: 0x1b4
	// Line 768, Address: 0x10219e0, Func Offset: 0x1c0
	// Line 769, Address: 0x1021a00, Func Offset: 0x1e0
	// Line 770, Address: 0x1021a0c, Func Offset: 0x1ec
	// Line 771, Address: 0x1021a14, Func Offset: 0x1f4
	// Line 774, Address: 0x1021a20, Func Offset: 0x200
	// Line 775, Address: 0x1021a24, Func Offset: 0x204
	// Func End, Address: 0x1021a34, Func Offset: 0x214
}

// 
// Start address: 0x1021a40
void egg4air_bom(_anon0* pActwk)
{
	short actidx;
	// Line 781, Address: 0x1021a40, Func Offset: 0
	// Line 784, Address: 0x1021a50, Func Offset: 0x10
	// Line 785, Address: 0x1021a70, Func Offset: 0x30
	// Line 788, Address: 0x1021a98, Func Offset: 0x58
	// Line 789, Address: 0x1021aa8, Func Offset: 0x68
	// Line 790, Address: 0x1021ab4, Func Offset: 0x74
	// Line 794, Address: 0x1021ac0, Func Offset: 0x80
	// Line 795, Address: 0x1021ad0, Func Offset: 0x90
	// Func End, Address: 0x1021ae4, Func Offset: 0xa4
}

// 
// Start address: 0x1021af0
void e4a_03_far(_anon0* pActwk)
{
	// Line 801, Address: 0x1021af0, Func Offset: 0
	// Line 803, Address: 0x1021afc, Func Offset: 0xc
	// Line 805, Address: 0x1021b0c, Func Offset: 0x1c
	// Line 806, Address: 0x1021b24, Func Offset: 0x34
	// Line 807, Address: 0x1021b2c, Func Offset: 0x3c
	// Line 808, Address: 0x1021b38, Func Offset: 0x48
	// Func End, Address: 0x1021b48, Func Offset: 0x58
}

// 
// Start address: 0x1021b50
void e4a_03_most_near(_anon0* pActwk)
{
	// Line 814, Address: 0x1021b50, Func Offset: 0
	// Line 815, Address: 0x1021b5c, Func Offset: 0xc
	// Line 818, Address: 0x1021ba4, Func Offset: 0x54
	// Line 819, Address: 0x1021bb0, Func Offset: 0x60
	// Line 820, Address: 0x1021bc0, Func Offset: 0x70
	// Line 821, Address: 0x1021bc8, Func Offset: 0x78
	// Line 822, Address: 0x1021bd4, Func Offset: 0x84
	// Line 826, Address: 0x1021be4, Func Offset: 0x94
	// Line 827, Address: 0x1021bf0, Func Offset: 0xa0
	// Func End, Address: 0x1021c00, Func Offset: 0xb0
}

// 
// Start address: 0x1021c00
void e4a_03_near(_anon0* pActwk)
{
	// Line 833, Address: 0x1021c00, Func Offset: 0
	// Line 834, Address: 0x1021c0c, Func Offset: 0xc
	// Line 835, Address: 0x1021c18, Func Offset: 0x18
	// Line 838, Address: 0x1021c28, Func Offset: 0x28
	// Line 839, Address: 0x1021c34, Func Offset: 0x34
	// Func End, Address: 0x1021c44, Func Offset: 0x44
}

// 
// Start address: 0x1021c50
void e4a_03_normal(_anon0* pActwk)
{
	// Line 845, Address: 0x1021c50, Func Offset: 0
	// Line 846, Address: 0x1021c5c, Func Offset: 0xc
	// Line 847, Address: 0x1021c6c, Func Offset: 0x1c
	// Line 850, Address: 0x1021c7c, Func Offset: 0x2c
	// Line 851, Address: 0x1021c88, Func Offset: 0x38
	// Func End, Address: 0x1021c98, Func Offset: 0x48
}

// 
// Start address: 0x1021ca0
void egg4_make_bom(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 857, Address: 0x1021ca0, Func Offset: 0
	// Line 860, Address: 0x1021cac, Func Offset: 0xc
	// Line 861, Address: 0x1021cc0, Func Offset: 0x20
	// Line 862, Address: 0x1021ccc, Func Offset: 0x2c
	// Line 863, Address: 0x1021cd8, Func Offset: 0x38
	// Line 864, Address: 0x1021ce8, Func Offset: 0x48
	// Line 865, Address: 0x1021cf8, Func Offset: 0x58
	// Line 867, Address: 0x1021d04, Func Offset: 0x64
	// Func End, Address: 0x1021d14, Func Offset: 0x74
}

// 
// Start address: 0x1021d20
unsigned int egg4air_04(_anon0* pActwk)
{
	// Line 874, Address: 0x1021d20, Func Offset: 0
	// Line 875, Address: 0x1021d28, Func Offset: 0x8
	// Line 876, Address: 0x1021d44, Func Offset: 0x24
	// Line 878, Address: 0x1021d50, Func Offset: 0x30
	// Line 879, Address: 0x1021d5c, Func Offset: 0x3c
	// Line 883, Address: 0x1021d6c, Func Offset: 0x4c
	// Line 884, Address: 0x1021d70, Func Offset: 0x50
	// Func End, Address: 0x1021d7c, Func Offset: 0x5c
}

// 
// Start address: 0x1021d80
void egg4airhead(_anon0* pActwk)
{
	// Line 944, Address: 0x1021d80, Func Offset: 0
	// Line 945, Address: 0x1021d8c, Func Offset: 0xc
	// Line 946, Address: 0x1021dd0, Func Offset: 0x50
	// Func End, Address: 0x1021de0, Func Offset: 0x60
}

// 
// Start address: 0x1021de0
void egg4airhead_ini(_anon0* pActwk)
{
	// Line 952, Address: 0x1021de0, Func Offset: 0
	// Line 953, Address: 0x1021dec, Func Offset: 0xc
	// Line 954, Address: 0x1021dfc, Func Offset: 0x1c
	// Line 955, Address: 0x1021e08, Func Offset: 0x28
	// Line 956, Address: 0x1021e14, Func Offset: 0x34
	// Line 957, Address: 0x1021e20, Func Offset: 0x40
	// Line 958, Address: 0x1021e2c, Func Offset: 0x4c
	// Line 959, Address: 0x1021e38, Func Offset: 0x58
	// Line 960, Address: 0x1021e48, Func Offset: 0x68
	// Line 961, Address: 0x1021e54, Func Offset: 0x74
	// Func End, Address: 0x1021e64, Func Offset: 0x84
}

// 
// Start address: 0x1021e70
void egg4airhead_01(_anon0* pActwk)
{
	short actidx;
	// Line 967, Address: 0x1021e70, Func Offset: 0
	// Line 970, Address: 0x1021e80, Func Offset: 0x10
	// Line 971, Address: 0x1021e90, Func Offset: 0x20
	// Line 973, Address: 0x1021eac, Func Offset: 0x3c
	// Line 974, Address: 0x1021eb4, Func Offset: 0x44
	// Line 975, Address: 0x1021ebc, Func Offset: 0x4c
	// Line 976, Address: 0x1021ec4, Func Offset: 0x54
	// Line 977, Address: 0x1021ecc, Func Offset: 0x5c
	// Line 978, Address: 0x1021ed4, Func Offset: 0x64
	// Line 979, Address: 0x1021edc, Func Offset: 0x6c
	// Line 984, Address: 0x1021ee8, Func Offset: 0x78
	// Line 985, Address: 0x1021f08, Func Offset: 0x98
	// Line 986, Address: 0x1021f34, Func Offset: 0xc4
	// Line 987, Address: 0x1021f60, Func Offset: 0xf0
	// Line 990, Address: 0x1021f8c, Func Offset: 0x11c
	// Line 991, Address: 0x1021fa0, Func Offset: 0x130
	// Line 992, Address: 0x1021fac, Func Offset: 0x13c
	// Func End, Address: 0x1021fc0, Func Offset: 0x150
}

// 
// Start address: 0x1021fc0
void egg4airhead_02(_anon0* pActwk)
{
	short actidx;
	// Line 998, Address: 0x1021fc0, Func Offset: 0
	// Line 1001, Address: 0x1021fd0, Func Offset: 0x10
	// Line 1002, Address: 0x1022008, Func Offset: 0x48
	// Line 1004, Address: 0x1022014, Func Offset: 0x54
	// Line 1005, Address: 0x1022034, Func Offset: 0x74
	// Line 1006, Address: 0x1022060, Func Offset: 0xa0
	// Line 1011, Address: 0x1022088, Func Offset: 0xc8
	// Line 1012, Address: 0x10220a8, Func Offset: 0xe8
	// Line 1013, Address: 0x10220d4, Func Offset: 0x114
	// Line 1018, Address: 0x10220fc, Func Offset: 0x13c
	// Line 1020, Address: 0x1022108, Func Offset: 0x148
	// Func End, Address: 0x102211c, Func Offset: 0x15c
}

// 
// Start address: 0x1022120
void make_gate(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 1026, Address: 0x1022120, Func Offset: 0
	// Line 1029, Address: 0x102212c, Func Offset: 0xc
	// Line 1030, Address: 0x1022140, Func Offset: 0x20
	// Line 1031, Address: 0x1022178, Func Offset: 0x58
	// Line 1032, Address: 0x1022184, Func Offset: 0x64
	// Line 1033, Address: 0x1022190, Func Offset: 0x70
	// Line 1034, Address: 0x102219c, Func Offset: 0x7c
	// Line 1036, Address: 0x10221a8, Func Offset: 0x88
	// Line 1037, Address: 0x10221bc, Func Offset: 0x9c
	// Line 1038, Address: 0x10221f4, Func Offset: 0xd4
	// Line 1039, Address: 0x1022200, Func Offset: 0xe0
	// Line 1040, Address: 0x102220c, Func Offset: 0xec
	// Line 1041, Address: 0x1022218, Func Offset: 0xf8
	// Line 1046, Address: 0x1022224, Func Offset: 0x104
	// Func End, Address: 0x1022234, Func Offset: 0x114
}

