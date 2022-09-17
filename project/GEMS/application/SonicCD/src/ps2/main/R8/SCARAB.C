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

typedef void(*type_0)(_anon0*);
typedef void(*type_3)(_anon0*);
typedef void(*type_5)(_anon0*);
typedef void(*type_11)(_anon0*);

typedef _anon9 type_1[20];
typedef _anon9 type_2[0];
typedef void(*type_4)(_anon0*)[3];
typedef void(*type_6)(_anon0*)[3];
typedef unsigned char* type_7[1];
typedef unsigned char* type_8[1];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef void(*type_12)(_anon0*)[2];
typedef unsigned char type_13[766];
typedef _anon0 type_14[128];
typedef _anon1* type_15[6];
typedef _anon1* type_16[0];
typedef unsigned char* type_17[0];
typedef unsigned char type_18[4];
typedef unsigned char type_19[4];
typedef void(*type_20)(_anon0*)[5];

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
		_anon9 spra[20];
		_anon9 spr[0];
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

unsigned char pchg_n00[4];
unsigned char* pchg_n[1];
unsigned char pchg_o00[4];
unsigned char* pchg_o[1];
_anon1 pat00;
_anon1 pat01;
_anon1 pat02;
_anon1 pat03;
_anon1 pat04;
_anon1 pat05;
_anon1* pat_scarab[6];
void(*c_act_tbl)(_anon0*)[3];
void(*item_move_tbl)(_anon0*)[5];
_anon0 actwk[128];
unsigned char flagwork[766];
unsigned char time_flag;
void(*e_act_tbl)(_anon0*)[2];
void(*e_move_tbl)(_anon0*)[3];
_anon1* itempat[0];
unsigned char* itemchg[0];
short time_stop;

void scarab(_anon0* pActwk);
void c_init(_anon0* pActwk);
void c_wait(_anon0* pActwk);
void c_make(_anon0* pActwk);
void ini_e_i(_anon0* pActwk, _anon0* pNewact);
void c_move(_anon0* pActwk);
void enemy(_anon0* pActwk);
void e_init(_anon0* pActwk);
void e_move(_anon0* pActwk);
void turn(_anon0* pActwk);
void e1_check(_anon0* pActwk);
void e1_chk_patchg(_anon0* pActwk);
void e1_catch(_anon0* pActwk);
void e1_keep(_anon0* pActwk);
void e1_wait(_anon0* pActwk);
void iteminit(_anon0* pActwk);
void itemmove(_anon0* pActwk);
void itemmove2(_anon0* pActwk);
void itemmove3(_anon0* pActwk);
void itemget(_anon0* pActwk);
void ride_on_chk_i(_anon0* pActwk, _anon0* pPlayerwk);

// 
// Start address: 0x10207f0
void scarab(_anon0* pActwk)
{
	// Line 226, Address: 0x10207f0, Func Offset: 0
	// Line 227, Address: 0x10207fc, Func Offset: 0xc
	// Line 229, Address: 0x1020818, Func Offset: 0x28
	// Line 231, Address: 0x1020854, Func Offset: 0x64
	// Line 234, Address: 0x1020868, Func Offset: 0x78
	// Line 235, Address: 0x10208ac, Func Offset: 0xbc
	// Line 237, Address: 0x10208d0, Func Offset: 0xe0
	// Line 238, Address: 0x10208dc, Func Offset: 0xec
	// Line 240, Address: 0x10208e4, Func Offset: 0xf4
	// Line 242, Address: 0x1020928, Func Offset: 0x138
	// Func End, Address: 0x1020938, Func Offset: 0x148
}

// 
// Start address: 0x1020940
void c_init(_anon0* pActwk)
{
	unsigned char flgwk;
	// Line 248, Address: 0x1020940, Func Offset: 0
	// Line 251, Address: 0x1020950, Func Offset: 0x10
	// Line 252, Address: 0x1020960, Func Offset: 0x20
	// Line 253, Address: 0x102096c, Func Offset: 0x2c
	// Line 254, Address: 0x1020994, Func Offset: 0x54
	// Line 256, Address: 0x10209b0, Func Offset: 0x70
	// Line 257, Address: 0x10209bc, Func Offset: 0x7c
	// Func End, Address: 0x10209d0, Func Offset: 0x90
}

// 
// Start address: 0x10209d0
void c_wait(_anon0* pActwk)
{
	unsigned short xwk;
	unsigned short ywk;
	// Line 263, Address: 0x10209d0, Func Offset: 0
	// Line 266, Address: 0x10209e4, Func Offset: 0x14
	// Line 267, Address: 0x1020a14, Func Offset: 0x44
	// Line 269, Address: 0x1020a44, Func Offset: 0x74
	// Line 270, Address: 0x1020a64, Func Offset: 0x94
	// Line 271, Address: 0x1020a70, Func Offset: 0xa0
	// Line 272, Address: 0x1020a78, Func Offset: 0xa8
	// Line 274, Address: 0x1020a84, Func Offset: 0xb4
	// Func End, Address: 0x1020a9c, Func Offset: 0xcc
}

// 
// Start address: 0x1020aa0
void c_make(_anon0* pActwk)
{
	unsigned char* pFlagWork;
	unsigned char flg;
	_anon0* pNewact;
	// Line 280, Address: 0x1020aa0, Func Offset: 0
	// Line 284, Address: 0x1020ab4, Func Offset: 0x14
	// Line 285, Address: 0x1020ac4, Func Offset: 0x24
	// Line 287, Address: 0x1020ad0, Func Offset: 0x30
	// Line 288, Address: 0x1020ae4, Func Offset: 0x44
	// Line 289, Address: 0x1020afc, Func Offset: 0x5c
	// Line 292, Address: 0x1020b10, Func Offset: 0x70
	// Line 293, Address: 0x1020b20, Func Offset: 0x80
	// Line 294, Address: 0x1020b58, Func Offset: 0xb8
	// Line 296, Address: 0x1020b80, Func Offset: 0xe0
	// Line 297, Address: 0x1020b9c, Func Offset: 0xfc
	// Line 298, Address: 0x1020ba8, Func Offset: 0x108
	// Line 299, Address: 0x1020bb0, Func Offset: 0x110
	// Line 304, Address: 0x1020bb8, Func Offset: 0x118
	// Line 305, Address: 0x1020bcc, Func Offset: 0x12c
	// Line 307, Address: 0x1020bd8, Func Offset: 0x138
	// Line 309, Address: 0x1020bf8, Func Offset: 0x158
	// Line 310, Address: 0x1020c04, Func Offset: 0x164
	// Line 313, Address: 0x1020c0c, Func Offset: 0x16c
	// Line 314, Address: 0x1020c24, Func Offset: 0x184
	// Line 317, Address: 0x1020c38, Func Offset: 0x198
	// Line 318, Address: 0x1020c48, Func Offset: 0x1a8
	// Line 319, Address: 0x1020c80, Func Offset: 0x1e0
	// Line 320, Address: 0x1020c8c, Func Offset: 0x1ec
	// Line 321, Address: 0x1020c94, Func Offset: 0x1f4
	// Line 323, Address: 0x1020ca4, Func Offset: 0x204
	// Line 324, Address: 0x1020cc0, Func Offset: 0x220
	// Line 325, Address: 0x1020cd0, Func Offset: 0x230
	// Line 326, Address: 0x1020cd8, Func Offset: 0x238
	// Line 331, Address: 0x1020ce8, Func Offset: 0x248
	// Func End, Address: 0x1020d00, Func Offset: 0x260
}

// 
// Start address: 0x1020d00
void ini_e_i(_anon0* pActwk, _anon0* pNewact)
{
	// Line 337, Address: 0x1020d00, Func Offset: 0
	// Line 338, Address: 0x1020d0c, Func Offset: 0xc
	// Line 339, Address: 0x1020d44, Func Offset: 0x44
	// Line 340, Address: 0x1020d50, Func Offset: 0x50
	// Line 341, Address: 0x1020d60, Func Offset: 0x60
	// Line 346, Address: 0x1020d70, Func Offset: 0x70
	// Line 347, Address: 0x1020d7c, Func Offset: 0x7c
	// Func End, Address: 0x1020d88, Func Offset: 0x88
}

// 
// Start address: 0x1020d90
void c_move(_anon0* pActwk)
{
	unsigned char* pFlagWork;
	short idx;
	_anon0* pChildAct;
	_anon7 flagwk;
	// Line 353, Address: 0x1020d90, Func Offset: 0
	// Line 359, Address: 0x1020da8, Func Offset: 0x18
	// Line 361, Address: 0x1020db4, Func Offset: 0x24
	// Line 362, Address: 0x1020dc8, Func Offset: 0x38
	// Line 363, Address: 0x1020de8, Func Offset: 0x58
	// Line 365, Address: 0x1020e08, Func Offset: 0x78
	// Line 367, Address: 0x1020e1c, Func Offset: 0x8c
	// Line 368, Address: 0x1020e28, Func Offset: 0x98
	// Line 370, Address: 0x1020e30, Func Offset: 0xa0
	// Line 371, Address: 0x1020e50, Func Offset: 0xc0
	// Line 372, Address: 0x1020e70, Func Offset: 0xe0
	// Line 379, Address: 0x1020e74, Func Offset: 0xe4
	// Line 380, Address: 0x1020e90, Func Offset: 0x100
	// Line 381, Address: 0x1020eb0, Func Offset: 0x120
	// Line 394, Address: 0x1020ebc, Func Offset: 0x12c
	// Line 395, Address: 0x1020ed0, Func Offset: 0x140
	// Line 396, Address: 0x1020ef0, Func Offset: 0x160
	// Line 398, Address: 0x1020f10, Func Offset: 0x180
	// Line 400, Address: 0x1020f24, Func Offset: 0x194
	// Line 401, Address: 0x1020f30, Func Offset: 0x1a0
	// Line 411, Address: 0x1020f38, Func Offset: 0x1a8
	// Line 412, Address: 0x1020f4c, Func Offset: 0x1bc
	// Line 413, Address: 0x1020f54, Func Offset: 0x1c4
	// Line 414, Address: 0x1020f5c, Func Offset: 0x1cc
	// Line 417, Address: 0x1020f60, Func Offset: 0x1d0
	// Line 418, Address: 0x1020f74, Func Offset: 0x1e4
	// Line 419, Address: 0x1020f7c, Func Offset: 0x1ec
	// Line 420, Address: 0x1020f84, Func Offset: 0x1f4
	// Line 423, Address: 0x1020f88, Func Offset: 0x1f8
	// Line 424, Address: 0x1020f9c, Func Offset: 0x20c
	// Line 427, Address: 0x1020fb0, Func Offset: 0x220
	// Line 431, Address: 0x1020fc0, Func Offset: 0x230
	// Line 432, Address: 0x1020fec, Func Offset: 0x25c
	// Line 434, Address: 0x1020ff8, Func Offset: 0x268
	// Func End, Address: 0x1021014, Func Offset: 0x284
}

// 
// Start address: 0x1021020
void enemy(_anon0* pActwk)
{
	_anon0* pCtrlact;
	// Line 457, Address: 0x1021020, Func Offset: 0
	// Line 460, Address: 0x1021030, Func Offset: 0x10
	// Line 462, Address: 0x102104c, Func Offset: 0x2c
	// Line 464, Address: 0x1021088, Func Offset: 0x68
	// Line 467, Address: 0x102109c, Func Offset: 0x7c
	// Line 468, Address: 0x10210ac, Func Offset: 0x8c
	// Line 469, Address: 0x10210b8, Func Offset: 0x98
	// Line 471, Address: 0x10210c0, Func Offset: 0xa0
	// Line 472, Address: 0x10210d0, Func Offset: 0xb0
	// Line 474, Address: 0x10210dc, Func Offset: 0xbc
	// Line 475, Address: 0x10210e4, Func Offset: 0xc4
	// Line 477, Address: 0x102110c, Func Offset: 0xec
	// Line 478, Address: 0x1021120, Func Offset: 0x100
	// Line 481, Address: 0x1021134, Func Offset: 0x114
	// Line 485, Address: 0x1021148, Func Offset: 0x128
	// Line 486, Address: 0x102118c, Func Offset: 0x16c
	// Line 487, Address: 0x1021198, Func Offset: 0x178
	// Line 489, Address: 0x10211a4, Func Offset: 0x184
	// Line 490, Address: 0x10211b4, Func Offset: 0x194
	// Line 495, Address: 0x10211b8, Func Offset: 0x198
	// Func End, Address: 0x10211cc, Func Offset: 0x1ac
}

// 
// Start address: 0x10211d0
void e_init(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 501, Address: 0x10211d0, Func Offset: 0
	// Line 504, Address: 0x10211dc, Func Offset: 0xc
	// Line 505, Address: 0x10211ec, Func Offset: 0x1c
	// Line 506, Address: 0x10211fc, Func Offset: 0x2c
	// Line 507, Address: 0x1021214, Func Offset: 0x44
	// Line 508, Address: 0x1021220, Func Offset: 0x50
	// Line 509, Address: 0x102122c, Func Offset: 0x5c
	// Line 510, Address: 0x1021238, Func Offset: 0x68
	// Line 511, Address: 0x1021244, Func Offset: 0x74
	// Line 512, Address: 0x1021254, Func Offset: 0x84
	// Line 513, Address: 0x1021264, Func Offset: 0x94
	// Line 514, Address: 0x1021270, Func Offset: 0xa0
	// Line 517, Address: 0x102128c, Func Offset: 0xbc
	// Line 518, Address: 0x10212a4, Func Offset: 0xd4
	// Line 521, Address: 0x10212b8, Func Offset: 0xe8
	// Line 522, Address: 0x10212c4, Func Offset: 0xf4
	// Line 523, Address: 0x10212d0, Func Offset: 0x100
	// Line 524, Address: 0x10212e0, Func Offset: 0x110
	// Line 525, Address: 0x10212f0, Func Offset: 0x120
	// Line 526, Address: 0x1021300, Func Offset: 0x130
	// Line 527, Address: 0x1021310, Func Offset: 0x140
	// Line 528, Address: 0x1021320, Func Offset: 0x150
	// Line 529, Address: 0x1021330, Func Offset: 0x160
	// Line 530, Address: 0x1021340, Func Offset: 0x170
	// Line 531, Address: 0x1021350, Func Offset: 0x180
	// Line 532, Address: 0x1021388, Func Offset: 0x1b8
	// Line 534, Address: 0x10213c0, Func Offset: 0x1f0
	// Line 536, Address: 0x10213d0, Func Offset: 0x200
	// Line 537, Address: 0x10213e0, Func Offset: 0x210
	// Line 538, Address: 0x10213f0, Func Offset: 0x220
	// Line 539, Address: 0x1021400, Func Offset: 0x230
	// Line 543, Address: 0x1021410, Func Offset: 0x240
	// Line 545, Address: 0x1021420, Func Offset: 0x250
	// Line 546, Address: 0x1021430, Func Offset: 0x260
	// Line 547, Address: 0x1021440, Func Offset: 0x270
	// Line 549, Address: 0x1021448, Func Offset: 0x278
	// Line 550, Address: 0x1021458, Func Offset: 0x288
	// Line 553, Address: 0x1021468, Func Offset: 0x298
	// Line 554, Address: 0x1021474, Func Offset: 0x2a4
	// Func End, Address: 0x1021484, Func Offset: 0x2b4
}

// 
// Start address: 0x1021490
void e_move(_anon0* pActwk)
{
	short xSav;
	short ySav;
	short wk;
	_anon0* pSubact;
	// Line 565, Address: 0x1021490, Func Offset: 0
	// Line 569, Address: 0x10214ac, Func Offset: 0x1c
	// Line 570, Address: 0x10214bc, Func Offset: 0x2c
	// Line 572, Address: 0x10214cc, Func Offset: 0x3c
	// Line 573, Address: 0x10214e4, Func Offset: 0x54
	// Line 575, Address: 0x1021500, Func Offset: 0x70
	// Line 576, Address: 0x102154c, Func Offset: 0xbc
	// Line 580, Address: 0x1021558, Func Offset: 0xc8
	// Line 581, Address: 0x102156c, Func Offset: 0xdc
	// Line 585, Address: 0x1021578, Func Offset: 0xe8
	// Line 586, Address: 0x102158c, Func Offset: 0xfc
	// Line 588, Address: 0x10215a4, Func Offset: 0x114
	// Line 589, Address: 0x10215b0, Func Offset: 0x120
	// Line 591, Address: 0x10215b8, Func Offset: 0x128
	// Line 598, Address: 0x10215c8, Func Offset: 0x138
	// Line 599, Address: 0x10215dc, Func Offset: 0x14c
	// Line 601, Address: 0x10215f0, Func Offset: 0x160
	// Line 602, Address: 0x1021618, Func Offset: 0x188
	// Line 603, Address: 0x1021634, Func Offset: 0x1a4
	// Line 604, Address: 0x1021654, Func Offset: 0x1c4
	// Line 605, Address: 0x1021660, Func Offset: 0x1d0
	// Line 606, Address: 0x102166c, Func Offset: 0x1dc
	// Line 613, Address: 0x1021688, Func Offset: 0x1f8
	// Line 614, Address: 0x10216a8, Func Offset: 0x218
	// Line 615, Address: 0x10216c8, Func Offset: 0x238
	// Line 616, Address: 0x10216d4, Func Offset: 0x244
	// Line 620, Address: 0x10216e0, Func Offset: 0x250
	// Line 621, Address: 0x1021724, Func Offset: 0x294
	// Line 622, Address: 0x102174c, Func Offset: 0x2bc
	// Line 623, Address: 0x1021758, Func Offset: 0x2c8
	// Line 624, Address: 0x1021764, Func Offset: 0x2d4
	// Line 625, Address: 0x102177c, Func Offset: 0x2ec
	// Func End, Address: 0x102179c, Func Offset: 0x30c
}

// 
// Start address: 0x10217a0
void turn(_anon0* pActwk)
{
	// Line 631, Address: 0x10217a0, Func Offset: 0
	// Line 632, Address: 0x10217a8, Func Offset: 0x8
	// Line 633, Address: 0x10217c4, Func Offset: 0x24
	// Line 634, Address: 0x10217dc, Func Offset: 0x3c
	// Func End, Address: 0x10217e8, Func Offset: 0x48
}

// 
// Start address: 0x10217f0
void e1_check(_anon0* pActwk)
{
	// Line 640, Address: 0x10217f0, Func Offset: 0
	// Line 641, Address: 0x10217fc, Func Offset: 0xc
	// Line 642, Address: 0x102180c, Func Offset: 0x1c
	// Line 646, Address: 0x1021880, Func Offset: 0x90
	// Line 647, Address: 0x1021888, Func Offset: 0x98
	// Line 649, Address: 0x1021890, Func Offset: 0xa0
	// Line 650, Address: 0x102189c, Func Offset: 0xac
	// Line 655, Address: 0x10218a4, Func Offset: 0xb4
	// Line 656, Address: 0x10218b0, Func Offset: 0xc0
	// Func End, Address: 0x10218c0, Func Offset: 0xd0
}

// 
// Start address: 0x10218c0
void e1_chk_patchg(_anon0* pActwk)
{
	// Line 662, Address: 0x10218c0, Func Offset: 0
	// Line 663, Address: 0x10218cc, Func Offset: 0xc
	// Line 665, Address: 0x10218f4, Func Offset: 0x34
	// Line 666, Address: 0x1021908, Func Offset: 0x48
	// Line 667, Address: 0x1021910, Func Offset: 0x50
	// Line 668, Address: 0x102192c, Func Offset: 0x6c
	// Line 673, Address: 0x1021938, Func Offset: 0x78
	// Func End, Address: 0x1021948, Func Offset: 0x88
}

// 
// Start address: 0x1021950
void e1_catch(_anon0* pActwk)
{
	// Line 679, Address: 0x1021950, Func Offset: 0
	// Line 680, Address: 0x1021958, Func Offset: 0x8
	// Line 681, Address: 0x1021994, Func Offset: 0x44
	// Line 682, Address: 0x10219a8, Func Offset: 0x58
	// Line 683, Address: 0x10219bc, Func Offset: 0x6c
	// Line 684, Address: 0x10219c8, Func Offset: 0x78
	// Line 685, Address: 0x10219d4, Func Offset: 0x84
	// Line 686, Address: 0x10219e0, Func Offset: 0x90
	// Line 688, Address: 0x1021a04, Func Offset: 0xb4
	// Line 690, Address: 0x1021a14, Func Offset: 0xc4
	// Line 691, Address: 0x1021a38, Func Offset: 0xe8
	// Line 693, Address: 0x1021a40, Func Offset: 0xf0
	// Line 696, Address: 0x1021a64, Func Offset: 0x114
	// Line 697, Address: 0x1021a74, Func Offset: 0x124
	// Line 698, Address: 0x1021a80, Func Offset: 0x130
	// Line 699, Address: 0x1021a94, Func Offset: 0x144
	// Func End, Address: 0x1021aa0, Func Offset: 0x150
}

// 
// Start address: 0x1021aa0
void e1_keep(_anon0* pActwk)
{
	_anon0* pPlayerwk;
	// Line 705, Address: 0x1021aa0, Func Offset: 0
	// Line 708, Address: 0x1021ab0, Func Offset: 0x10
	// Line 709, Address: 0x1021ad8, Func Offset: 0x38
	// Line 710, Address: 0x1021aec, Func Offset: 0x4c
	// Line 711, Address: 0x1021af8, Func Offset: 0x58
	// Line 713, Address: 0x1021b00, Func Offset: 0x60
	// Line 717, Address: 0x1021b28, Func Offset: 0x88
	// Line 718, Address: 0x1021b34, Func Offset: 0x94
	// Line 719, Address: 0x1021b40, Func Offset: 0xa0
	// Line 721, Address: 0x1021b44, Func Offset: 0xa4
	// Line 723, Address: 0x1021b54, Func Offset: 0xb4
	// Line 724, Address: 0x1021b5c, Func Offset: 0xbc
	// Line 726, Address: 0x1021b64, Func Offset: 0xc4
	// Line 729, Address: 0x1021b6c, Func Offset: 0xcc
	// Line 731, Address: 0x1021b7c, Func Offset: 0xdc
	// Line 732, Address: 0x1021b88, Func Offset: 0xe8
	// Line 734, Address: 0x1021b90, Func Offset: 0xf0
	// Line 735, Address: 0x1021b9c, Func Offset: 0xfc
	// Line 738, Address: 0x1021ba8, Func Offset: 0x108
	// Line 739, Address: 0x1021bb0, Func Offset: 0x110
	// Line 740, Address: 0x1021bb8, Func Offset: 0x118
	// Line 741, Address: 0x1021bbc, Func Offset: 0x11c
	// Line 743, Address: 0x1021bc8, Func Offset: 0x128
	// Line 744, Address: 0x1021bd8, Func Offset: 0x138
	// Line 745, Address: 0x1021bec, Func Offset: 0x14c
	// Line 746, Address: 0x1021bf8, Func Offset: 0x158
	// Line 748, Address: 0x1021c04, Func Offset: 0x164
	// Func End, Address: 0x1021c18, Func Offset: 0x178
}

// 
// Start address: 0x1021c20
void e1_wait(_anon0* pActwk)
{
	// Line 754, Address: 0x1021c20, Func Offset: 0
	// Line 755, Address: 0x1021c28, Func Offset: 0x8
	// Line 757, Address: 0x1021c48, Func Offset: 0x28
	// Line 758, Address: 0x1021c50, Func Offset: 0x30
	// Line 759, Address: 0x1021c5c, Func Offset: 0x3c
	// Line 761, Address: 0x1021c70, Func Offset: 0x50
	// Func End, Address: 0x1021c7c, Func Offset: 0x5c
}

// 
// Start address: 0x1021c80
void iteminit(_anon0* pActwk)
{
	// Line 770, Address: 0x1021c80, Func Offset: 0
	// Line 771, Address: 0x1021c8c, Func Offset: 0xc
	// Line 772, Address: 0x1021c9c, Func Offset: 0x1c
	// Line 773, Address: 0x1021ca8, Func Offset: 0x28
	// Line 774, Address: 0x1021cb4, Func Offset: 0x34
	// Line 775, Address: 0x1021cc4, Func Offset: 0x44
	// Line 776, Address: 0x1021cd0, Func Offset: 0x50
	// Line 777, Address: 0x1021cdc, Func Offset: 0x5c
	// Line 778, Address: 0x1021ce8, Func Offset: 0x68
	// Line 779, Address: 0x1021cf4, Func Offset: 0x74
	// Line 780, Address: 0x1021d00, Func Offset: 0x80
	// Line 781, Address: 0x1021d10, Func Offset: 0x90
	// Line 783, Address: 0x1021d2c, Func Offset: 0xac
	// Line 784, Address: 0x1021d38, Func Offset: 0xb8
	// Func End, Address: 0x1021d48, Func Offset: 0xc8
}

// 
// Start address: 0x1021d50
void itemmove(_anon0* pActwk)
{
	short col;
	// Line 790, Address: 0x1021d50, Func Offset: 0
	// Line 793, Address: 0x1021d60, Func Offset: 0x10
	// Line 794, Address: 0x1021d78, Func Offset: 0x28
	// Line 795, Address: 0x1021d84, Func Offset: 0x34
	// Line 796, Address: 0x1021d8c, Func Offset: 0x3c
	// Line 797, Address: 0x1021d9c, Func Offset: 0x4c
	// Line 799, Address: 0x1021da8, Func Offset: 0x58
	// Line 800, Address: 0x1021dd4, Func Offset: 0x84
	// Line 801, Address: 0x1021de4, Func Offset: 0x94
	// Line 802, Address: 0x1021dec, Func Offset: 0x9c
	// Line 804, Address: 0x1021df4, Func Offset: 0xa4
	// Line 812, Address: 0x1021dfc, Func Offset: 0xac
	// Line 816, Address: 0x1021e10, Func Offset: 0xc0
	// Line 818, Address: 0x1021e1c, Func Offset: 0xcc
	// Func End, Address: 0x1021e30, Func Offset: 0xe0
}

// 
// Start address: 0x1021e30
void itemmove2(_anon0* pActwk)
{
	// Line 824, Address: 0x1021e30, Func Offset: 0
	// Line 825, Address: 0x1021e3c, Func Offset: 0xc
	// Line 826, Address: 0x1021e4c, Func Offset: 0x1c
	// Line 829, Address: 0x1021e60, Func Offset: 0x30
	// Line 830, Address: 0x1021e6c, Func Offset: 0x3c
	// Func End, Address: 0x1021e7c, Func Offset: 0x4c
}

// 
// Start address: 0x1021e80
void itemmove3(_anon0* pActwk)
{
	_anon0* pCtrlact;
	// Line 836, Address: 0x1021e80, Func Offset: 0
	// Line 839, Address: 0x1021e90, Func Offset: 0x10
	// Line 840, Address: 0x1021e9c, Func Offset: 0x1c
	// Line 841, Address: 0x1021ec4, Func Offset: 0x44
	// Line 843, Address: 0x1021ed0, Func Offset: 0x50
	// Line 844, Address: 0x1021ee0, Func Offset: 0x60
	// Line 848, Address: 0x1021ee4, Func Offset: 0x64
	// Func End, Address: 0x1021ef8, Func Offset: 0x78
}

// 
// Start address: 0x1021f00
void itemget(_anon0* pActwk)
{
	_anon0* pCtrlact;
	_anon0* pNewact;
	short idx;
	// Line 854, Address: 0x1021f00, Func Offset: 0
	// Line 858, Address: 0x1021f14, Func Offset: 0x14
	// Line 860, Address: 0x1021f3c, Func Offset: 0x3c
	// Line 861, Address: 0x1021f58, Func Offset: 0x58
	// Line 865, Address: 0x1021f80, Func Offset: 0x80
	// Line 866, Address: 0x1021f94, Func Offset: 0x94
	// Line 868, Address: 0x1021fa8, Func Offset: 0xa8
	// Line 869, Address: 0x1021fb4, Func Offset: 0xb4
	// Line 870, Address: 0x1021fc4, Func Offset: 0xc4
	// Line 872, Address: 0x1021fcc, Func Offset: 0xcc
	// Line 873, Address: 0x1021fe0, Func Offset: 0xe0
	// Line 874, Address: 0x1021fec, Func Offset: 0xec
	// Line 875, Address: 0x1021ffc, Func Offset: 0xfc
	// Line 876, Address: 0x102200c, Func Offset: 0x10c
	// Line 878, Address: 0x102201c, Func Offset: 0x11c
	// Line 879, Address: 0x1022030, Func Offset: 0x130
	// Line 880, Address: 0x102203c, Func Offset: 0x13c
	// Line 881, Address: 0x102204c, Func Offset: 0x14c
	// Line 882, Address: 0x102205c, Func Offset: 0x15c
	// Line 883, Address: 0x1022068, Func Offset: 0x168
	// Line 887, Address: 0x1022074, Func Offset: 0x174
	// Line 888, Address: 0x1022080, Func Offset: 0x180
	// Func End, Address: 0x1022098, Func Offset: 0x198
}

// 
// Start address: 0x10220a0
void ride_on_chk_i(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 894, Address: 0x10220a0, Func Offset: 0
	// Line 895, Address: 0x10220b0, Func Offset: 0x10
	// Line 896, Address: 0x10220bc, Func Offset: 0x1c
	// Line 897, Address: 0x10220cc, Func Offset: 0x2c
	// Line 898, Address: 0x10220d8, Func Offset: 0x38
	// Func End, Address: 0x10220e8, Func Offset: 0x48
}

