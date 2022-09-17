typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef unsigned char type_0[11];
typedef unsigned char type_1[2];
typedef unsigned char type_2[22];
typedef unsigned char type_3[11];
typedef unsigned char type_4[11];
typedef _anon1* type_5[16];
typedef _anon0 type_6[128];
typedef unsigned char type_7[766];
typedef unsigned char type_8[10];
typedef unsigned char type_9[11];
typedef unsigned char type_10[11];
typedef unsigned char type_11[11];
typedef unsigned char type_12[11];
typedef _anon7 type_13[20];
typedef _anon7 type_14[0];
typedef unsigned char* type_15[10];
typedef unsigned char type_16[10];
typedef _anon1* type_17[20];
typedef unsigned char type_18[11];

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

unsigned char itemchg0[11];
unsigned char itemchg1[11];
unsigned char itemchg2[11];
unsigned char itemchg3[11];
unsigned char itemchg4[11];
unsigned char itemchg5[11];
unsigned char itemchg6[11];
unsigned char itemchg7[11];
unsigned char itemchg8[10];
unsigned char itemchg9[10];
unsigned char* itemchg[10];
_anon1 ite00;
_anon1 ite01;
_anon1 ite02;
_anon1 ite03;
_anon1 ite04;
_anon1 ite05;
_anon1 ite06;
_anon1 ite07;
_anon1 ite08;
_anon1 ite09;
_anon1 ite0a;
_anon1 ite0b;
_anon1 ite0c;
_anon1 ite0d;
_anon1 ite0e;
_anon1 ite0f;
_anon1 ite10;
_anon1 ite11;
_anon1 ite12;
_anon1 ite13;
_anon1* itempat[20];
_anon1 cor00;
_anon1 cor01;
_anon1 cor02;
_anon1 cor03;
_anon1 cor04;
_anon1 cor05;
_anon1 cor06;
_anon1 cor07;
_anon1 cor08;
_anon1 cor09;
_anon1 cor0a;
_anon1 cor0b;
_anon1 cor0c;
_anon1 cor0d;
_anon1 cor0e;
_anon1 cor0f;
_anon1* corepat[16];
_anon5 gametimer;
short backto_cnt;
char time_item;
unsigned char ta_flag;
unsigned char flagwork[766];
_anon5 stageno;
unsigned char prio_flag;
unsigned char time_flag;
_anon0 actwk[128];
short time_stop;
short plretspdwk;
short pladdspdwk;
short plmaxspdwk;
unsigned char plpower_s;
unsigned char plpower_m;
unsigned char plpower_b;
unsigned char conbine_flag;
unsigned char pl_suu_f;
unsigned char pl_suu;
unsigned char plring_f2;
short plring;
unsigned char plring_f;

void timedisp(_anon0* timewk);
void td_init(_anon0* timewk);
void td_move(_anon0* timewk);
void t_item(_anon0* t_itemwk);
void t_item_init(_anon0* t_itemwk);
void t_item_move0(_anon0* t_itemwk);
void t_item_move1(_anon0* t_itemwk);
void t_item_move2(_anon0* t_itemwk);
short flagwkadr(_anon0* t_itemwk);
void ride_on_chk_i(_anon0* itemwk);
void item(_anon0* itemwk);
void iteminit(_anon0* itemwk);
void itemmove(_anon0* itemwk);
void itemmove2(_anon0* itemwk);
void itemmove3(_anon0* itemwk);
void itemget(_anon0* itemwk);
void powerup_init(_anon0* powerwk);
void item2(_anon0* itemwk);
void item2init(_anon0* itemwk);
void item2move(_anon0* itemwk);
void item2die(_anon0* itemwk);
void error_item(_anon0* itemwk);

// 
// Start address: 0x1010de0
void timedisp(_anon0* timewk)
{
	// Line 167, Address: 0x1010de0, Func Offset: 0
	// Line 168, Address: 0x1010dec, Func Offset: 0xc
	// Line 170, Address: 0x1010e14, Func Offset: 0x34
	// Line 171, Address: 0x1010e20, Func Offset: 0x40
	// Line 173, Address: 0x1010e28, Func Offset: 0x48
	// Line 178, Address: 0x1010e34, Func Offset: 0x54
	// Line 179, Address: 0x1010e4c, Func Offset: 0x6c
	// Line 180, Address: 0x1010e7c, Func Offset: 0x9c
	// Line 181, Address: 0x1010ea4, Func Offset: 0xc4
	// Func End, Address: 0x1010eb4, Func Offset: 0xd4
}

// 
// Start address: 0x1010ec0
void td_init(_anon0* timewk)
{
	// Line 184, Address: 0x1010ec0, Func Offset: 0
	// Line 185, Address: 0x1010ecc, Func Offset: 0xc
	// Line 186, Address: 0x1010edc, Func Offset: 0x1c
	// Line 187, Address: 0x1010eec, Func Offset: 0x2c
	// Line 188, Address: 0x1010ef8, Func Offset: 0x38
	// Line 189, Address: 0x1010f04, Func Offset: 0x44
	// Line 190, Address: 0x1010f10, Func Offset: 0x50
	// Line 191, Address: 0x1010f1c, Func Offset: 0x5c
	// Func End, Address: 0x1010f2c, Func Offset: 0x6c
}

// 
// Start address: 0x1010f30
void td_move(_anon0* timewk)
{
	// Line 194, Address: 0x1010f30, Func Offset: 0
	// Line 195, Address: 0x1010f38, Func Offset: 0x8
	// Line 196, Address: 0x1010f44, Func Offset: 0x14
	// Line 197, Address: 0x1010f68, Func Offset: 0x38
	// Func End, Address: 0x1010f74, Func Offset: 0x44
}

// 
// Start address: 0x1010f80
void t_item(_anon0* t_itemwk)
{
	// Line 205, Address: 0x1010f80, Func Offset: 0
	// Line 206, Address: 0x1010f8c, Func Offset: 0xc
	// Line 207, Address: 0x1010fb4, Func Offset: 0x34
	// Line 208, Address: 0x1010fe4, Func Offset: 0x64
	// Line 210, Address: 0x1011024, Func Offset: 0xa4
	// Line 211, Address: 0x1011030, Func Offset: 0xb0
	// Line 213, Address: 0x1011038, Func Offset: 0xb8
	// Line 214, Address: 0x1011044, Func Offset: 0xc4
	// Line 216, Address: 0x101104c, Func Offset: 0xcc
	// Line 217, Address: 0x1011058, Func Offset: 0xd8
	// Line 219, Address: 0x1011060, Func Offset: 0xe0
	// Line 224, Address: 0x101106c, Func Offset: 0xec
	// Line 225, Address: 0x1011078, Func Offset: 0xf8
	// Line 226, Address: 0x1011084, Func Offset: 0x104
	// Func End, Address: 0x1011094, Func Offset: 0x114
}

// 
// Start address: 0x10110a0
void t_item_init(_anon0* t_itemwk)
{
	short flag_no;
	// Line 229, Address: 0x10110a0, Func Offset: 0
	// Line 232, Address: 0x10110b0, Func Offset: 0x10
	// Line 233, Address: 0x10110c0, Func Offset: 0x20
	// Line 234, Address: 0x10110cc, Func Offset: 0x2c
	// Line 235, Address: 0x10110d8, Func Offset: 0x38
	// Line 237, Address: 0x10110e8, Func Offset: 0x48
	// Line 238, Address: 0x10110f4, Func Offset: 0x54
	// Line 239, Address: 0x1011100, Func Offset: 0x60
	// Line 240, Address: 0x1011134, Func Offset: 0x94
	// Line 241, Address: 0x1011148, Func Offset: 0xa8
	// Line 242, Address: 0x1011154, Func Offset: 0xb4
	// Line 244, Address: 0x1011164, Func Offset: 0xc4
	// Line 245, Address: 0x1011178, Func Offset: 0xd8
	// Line 247, Address: 0x1011198, Func Offset: 0xf8
	// Line 248, Address: 0x10111a4, Func Offset: 0x104
	// Line 250, Address: 0x10111d0, Func Offset: 0x130
	// Line 251, Address: 0x10111f8, Func Offset: 0x158
	// Line 252, Address: 0x1011208, Func Offset: 0x168
	// Line 253, Address: 0x1011214, Func Offset: 0x174
	// Line 254, Address: 0x101121c, Func Offset: 0x17c
	// Line 255, Address: 0x1011228, Func Offset: 0x188
	// Line 257, Address: 0x1011234, Func Offset: 0x194
	// Func End, Address: 0x1011248, Func Offset: 0x1a8
}

// 
// Start address: 0x1011250
void t_item_move0(_anon0* t_itemwk)
{
	short flag_no;
	// Line 260, Address: 0x1011250, Func Offset: 0
	// Line 271, Address: 0x1011260, Func Offset: 0x10
	// Line 272, Address: 0x1011274, Func Offset: 0x24
	// Line 273, Address: 0x101127c, Func Offset: 0x2c
	// Line 274, Address: 0x1011298, Func Offset: 0x48
	// Line 276, Address: 0x10112b0, Func Offset: 0x60
	// Line 277, Address: 0x10112c4, Func Offset: 0x74
	// Line 279, Address: 0x10112cc, Func Offset: 0x7c
	// Line 283, Address: 0x10112e0, Func Offset: 0x90
	// Line 284, Address: 0x10112e8, Func Offset: 0x98
	// Line 285, Address: 0x10112f4, Func Offset: 0xa4
	// Line 286, Address: 0x1011304, Func Offset: 0xb4
	// Line 287, Address: 0x1011318, Func Offset: 0xc8
	// Line 288, Address: 0x1011338, Func Offset: 0xe8
	// Line 289, Address: 0x1011354, Func Offset: 0x104
	// Line 290, Address: 0x1011360, Func Offset: 0x110
	// Line 291, Address: 0x101136c, Func Offset: 0x11c
	// Line 292, Address: 0x1011374, Func Offset: 0x124
	// Line 293, Address: 0x1011380, Func Offset: 0x130
	// Line 295, Address: 0x101138c, Func Offset: 0x13c
	// Func End, Address: 0x10113a0, Func Offset: 0x150
}

// 
// Start address: 0x10113a0
void t_item_move1(_anon0* t_itemwk)
{
	// Line 298, Address: 0x10113a0, Func Offset: 0
	// Line 299, Address: 0x10113ac, Func Offset: 0xc
	// Line 300, Address: 0x10113cc, Func Offset: 0x2c
	// Line 301, Address: 0x10113e0, Func Offset: 0x40
	// Line 303, Address: 0x10113e8, Func Offset: 0x48
	// Line 304, Address: 0x10113f8, Func Offset: 0x58
	// Line 305, Address: 0x1011404, Func Offset: 0x64
	// Line 306, Address: 0x1011430, Func Offset: 0x90
	// Func End, Address: 0x1011440, Func Offset: 0xa0
}

// 
// Start address: 0x1011440
void t_item_move2(_anon0* t_itemwk)
{
	unsigned char action_no;
	// Line 309, Address: 0x1011440, Func Offset: 0
	// Line 311, Address: 0x101144c, Func Offset: 0xc
	// Line 312, Address: 0x1011458, Func Offset: 0x18
	// Func End, Address: 0x1011468, Func Offset: 0x28
}

// 
// Start address: 0x1011470
short flagwkadr(_anon0* t_itemwk)
{
	short flag_no;
	short t_flag;
	short t_item;
	// Line 315, Address: 0x1011470, Func Offset: 0
	// Line 318, Address: 0x1011484, Func Offset: 0x14
	// Line 319, Address: 0x10114a8, Func Offset: 0x38
	// Line 320, Address: 0x10114bc, Func Offset: 0x4c
	// Line 321, Address: 0x10114e8, Func Offset: 0x78
	// Line 322, Address: 0x10114f8, Func Offset: 0x88
	// Line 323, Address: 0x1011510, Func Offset: 0xa0
	// Line 324, Address: 0x101152c, Func Offset: 0xbc
	// Line 325, Address: 0x1011538, Func Offset: 0xc8
	// Line 326, Address: 0x1011554, Func Offset: 0xe4
	// Line 327, Address: 0x1011574, Func Offset: 0x104
	// Line 328, Address: 0x1011580, Func Offset: 0x110
	// Line 329, Address: 0x1011584, Func Offset: 0x114
	// Func End, Address: 0x101159c, Func Offset: 0x12c
}

// 
// Start address: 0x10115a0
void ride_on_chk_i(_anon0* itemwk)
{
	// Line 334, Address: 0x10115a0, Func Offset: 0
	// Line 335, Address: 0x10115ac, Func Offset: 0xc
	// Line 336, Address: 0x10115c8, Func Offset: 0x28
	// Line 338, Address: 0x10115dc, Func Offset: 0x3c
	// Line 339, Address: 0x10115f4, Func Offset: 0x54
	// Line 342, Address: 0x10115fc, Func Offset: 0x5c
	// Line 345, Address: 0x1011614, Func Offset: 0x74
	// Line 346, Address: 0x1011628, Func Offset: 0x88
	// Func End, Address: 0x1011638, Func Offset: 0x98
}

// 
// Start address: 0x1011640
void item(_anon0* itemwk)
{
	// Line 354, Address: 0x1011640, Func Offset: 0
	// Line 355, Address: 0x101164c, Func Offset: 0xc
	// Line 356, Address: 0x1011678, Func Offset: 0x38
	// Line 358, Address: 0x101168c, Func Offset: 0x4c
	// Line 359, Address: 0x10116bc, Func Offset: 0x7c
	// Line 361, Address: 0x1011708, Func Offset: 0xc8
	// Line 362, Address: 0x1011714, Func Offset: 0xd4
	// Line 364, Address: 0x101171c, Func Offset: 0xdc
	// Line 365, Address: 0x1011728, Func Offset: 0xe8
	// Line 367, Address: 0x1011730, Func Offset: 0xf0
	// Line 368, Address: 0x101173c, Func Offset: 0xfc
	// Line 370, Address: 0x1011744, Func Offset: 0x104
	// Line 371, Address: 0x1011750, Func Offset: 0x110
	// Line 373, Address: 0x1011758, Func Offset: 0x118
	// Line 378, Address: 0x1011764, Func Offset: 0x124
	// Func End, Address: 0x1011774, Func Offset: 0x134
}

// 
// Start address: 0x1011780
void iteminit(_anon0* itemwk)
{
	short flag_no;
	// Line 381, Address: 0x1011780, Func Offset: 0
	// Line 384, Address: 0x1011790, Func Offset: 0x10
	// Line 385, Address: 0x10117a0, Func Offset: 0x20
	// Line 386, Address: 0x10117ac, Func Offset: 0x2c
	// Line 387, Address: 0x10117b8, Func Offset: 0x38
	// Line 389, Address: 0x10117c8, Func Offset: 0x48
	// Line 390, Address: 0x10117d4, Func Offset: 0x54
	// Line 391, Address: 0x1011808, Func Offset: 0x88
	// Line 392, Address: 0x101181c, Func Offset: 0x9c
	// Line 393, Address: 0x1011828, Func Offset: 0xa8
	// Line 395, Address: 0x1011834, Func Offset: 0xb4
	// Line 396, Address: 0x1011848, Func Offset: 0xc8
	// Line 397, Address: 0x1011868, Func Offset: 0xe8
	// Line 398, Address: 0x1011890, Func Offset: 0x110
	// Line 399, Address: 0x101189c, Func Offset: 0x11c
	// Line 400, Address: 0x10118a8, Func Offset: 0x128
	// Line 402, Address: 0x10118b0, Func Offset: 0x130
	// Line 403, Address: 0x10118bc, Func Offset: 0x13c
	// Line 404, Address: 0x10118cc, Func Offset: 0x14c
	// Line 406, Address: 0x10118ec, Func Offset: 0x16c
	// Line 407, Address: 0x10118f8, Func Offset: 0x178
	// Func End, Address: 0x101190c, Func Offset: 0x18c
}

// 
// Start address: 0x1011910
void itemmove(_anon0* itemwk)
{
	short col_ofs;
	// Line 410, Address: 0x1011910, Func Offset: 0
	// Line 414, Address: 0x1011920, Func Offset: 0x10
	// Line 415, Address: 0x1011938, Func Offset: 0x28
	// Line 417, Address: 0x101194c, Func Offset: 0x3c
	// Line 418, Address: 0x1011980, Func Offset: 0x70
	// Line 419, Address: 0x1011994, Func Offset: 0x84
	// Line 420, Address: 0x10119a0, Func Offset: 0x90
	// Line 421, Address: 0x10119cc, Func Offset: 0xbc
	// Line 422, Address: 0x10119dc, Func Offset: 0xcc
	// Line 423, Address: 0x10119e4, Func Offset: 0xd4
	// Line 425, Address: 0x10119ec, Func Offset: 0xdc
	// Line 426, Address: 0x10119f4, Func Offset: 0xe4
	// Line 428, Address: 0x1011a20, Func Offset: 0x110
	// Line 436, Address: 0x1011a2c, Func Offset: 0x11c
	// Func End, Address: 0x1011a40, Func Offset: 0x130
}

// 
// Start address: 0x1011a40
void itemmove2(_anon0* itemwk)
{
	// Line 439, Address: 0x1011a40, Func Offset: 0
	// Line 440, Address: 0x1011a4c, Func Offset: 0xc
	// Line 441, Address: 0x1011a78, Func Offset: 0x38
	// Line 442, Address: 0x1011a84, Func Offset: 0x44
	// Func End, Address: 0x1011a94, Func Offset: 0x54
}

// 
// Start address: 0x1011aa0
void itemmove3(_anon0* itemwk)
{
	// Line 445, Address: 0x1011aa0, Func Offset: 0
	// Line 446, Address: 0x1011aac, Func Offset: 0xc
	// Line 447, Address: 0x1011ab8, Func Offset: 0x18
	// Line 448, Address: 0x1011ac4, Func Offset: 0x24
	// Func End, Address: 0x1011ad4, Func Offset: 0x34
}

// 
// Start address: 0x1011ae0
void itemget(_anon0* itemwk)
{
	_anon0* new_actwk;
	short flag_no;
	// Line 451, Address: 0x1011ae0, Func Offset: 0
	// Line 457, Address: 0x1011af0, Func Offset: 0x10
	// Line 458, Address: 0x1011afc, Func Offset: 0x1c
	// Line 459, Address: 0x1011b0c, Func Offset: 0x2c
	// Line 460, Address: 0x1011b14, Func Offset: 0x34
	// Line 461, Address: 0x1011b28, Func Offset: 0x48
	// Line 462, Address: 0x1011b34, Func Offset: 0x54
	// Line 463, Address: 0x1011b44, Func Offset: 0x64
	// Line 464, Address: 0x1011b54, Func Offset: 0x74
	// Line 465, Address: 0x1011b64, Func Offset: 0x84
	// Line 467, Address: 0x1011b74, Func Offset: 0x94
	// Line 468, Address: 0x1011b88, Func Offset: 0xa8
	// Line 469, Address: 0x1011b94, Func Offset: 0xb4
	// Line 470, Address: 0x1011ba4, Func Offset: 0xc4
	// Line 471, Address: 0x1011bb4, Func Offset: 0xd4
	// Line 472, Address: 0x1011bc0, Func Offset: 0xe0
	// Line 473, Address: 0x1011bcc, Func Offset: 0xec
	// Line 475, Address: 0x1011bdc, Func Offset: 0xfc
	// Line 476, Address: 0x1011bf0, Func Offset: 0x110
	// Line 477, Address: 0x1011c10, Func Offset: 0x130
	// Line 478, Address: 0x1011c1c, Func Offset: 0x13c
	// Line 479, Address: 0x1011c28, Func Offset: 0x148
	// Func End, Address: 0x1011c3c, Func Offset: 0x15c
}

// 
// Start address: 0x1011c40
void powerup_init(_anon0* powerwk)
{
	// Line 483, Address: 0x1011c40, Func Offset: 0
	// Line 484, Address: 0x1011c48, Func Offset: 0x8
	// Line 485, Address: 0x1011c50, Func Offset: 0x10
	// Line 486, Address: 0x1011c58, Func Offset: 0x18
	// Func End, Address: 0x1011c64, Func Offset: 0x24
}

// 
// Start address: 0x1011c70
void item2(_anon0* itemwk)
{
	// Line 492, Address: 0x1011c70, Func Offset: 0
	// Line 493, Address: 0x1011c7c, Func Offset: 0xc
	// Line 495, Address: 0x1011cb0, Func Offset: 0x40
	// Line 496, Address: 0x1011cbc, Func Offset: 0x4c
	// Line 498, Address: 0x1011cc4, Func Offset: 0x54
	// Line 499, Address: 0x1011cd0, Func Offset: 0x60
	// Line 501, Address: 0x1011cd8, Func Offset: 0x68
	// Line 506, Address: 0x1011ce4, Func Offset: 0x74
	// Line 507, Address: 0x1011cf0, Func Offset: 0x80
	// Func End, Address: 0x1011d00, Func Offset: 0x90
}

// 
// Start address: 0x1011d00
void item2init(_anon0* itemwk)
{
	// Line 510, Address: 0x1011d00, Func Offset: 0
	// Line 511, Address: 0x1011d0c, Func Offset: 0xc
	// Line 512, Address: 0x1011d1c, Func Offset: 0x1c
	// Line 514, Address: 0x1011d28, Func Offset: 0x28
	// Line 515, Address: 0x1011d34, Func Offset: 0x34
	// Line 516, Address: 0x1011d40, Func Offset: 0x40
	// Line 517, Address: 0x1011d4c, Func Offset: 0x4c
	// Line 518, Address: 0x1011d58, Func Offset: 0x58
	// Line 519, Address: 0x1011d68, Func Offset: 0x68
	// Line 520, Address: 0x1011d78, Func Offset: 0x78
	// Line 521, Address: 0x1011d84, Func Offset: 0x84
	// Func End, Address: 0x1011d94, Func Offset: 0x94
}

// 
// Start address: 0x1011da0
void item2move(_anon0* itemwk)
{
	// Line 524, Address: 0x1011da0, Func Offset: 0
	// Line 525, Address: 0x1011dac, Func Offset: 0xc
	// Line 526, Address: 0x1011dc4, Func Offset: 0x24
	// Line 527, Address: 0x1011dd0, Func Offset: 0x30
	// Line 528, Address: 0x1011de0, Func Offset: 0x40
	// Line 530, Address: 0x1011de8, Func Offset: 0x48
	// Line 531, Address: 0x1011df8, Func Offset: 0x58
	// Line 532, Address: 0x1011e04, Func Offset: 0x64
	// Line 534, Address: 0x1011e3c, Func Offset: 0x9c
	// Line 535, Address: 0x1011e64, Func Offset: 0xc4
	// Line 536, Address: 0x1011e70, Func Offset: 0xd0
	// Line 538, Address: 0x1011e78, Func Offset: 0xd8
	// Line 539, Address: 0x1011e8c, Func Offset: 0xec
	// Line 540, Address: 0x1011ea0, Func Offset: 0x100
	// Line 542, Address: 0x1011f08, Func Offset: 0x168
	// Line 543, Address: 0x1011f40, Func Offset: 0x1a0
	// Line 544, Address: 0x1011f54, Func Offset: 0x1b4
	// Line 545, Address: 0x1011f7c, Func Offset: 0x1dc
	// Line 546, Address: 0x1011f88, Func Offset: 0x1e8
	// Line 547, Address: 0x1011f90, Func Offset: 0x1f0
	// Line 549, Address: 0x1011f9c, Func Offset: 0x1fc
	// Line 551, Address: 0x1011fa4, Func Offset: 0x204
	// Line 552, Address: 0x1011fb0, Func Offset: 0x210
	// Line 553, Address: 0x1011fc0, Func Offset: 0x220
	// Line 554, Address: 0x1011fcc, Func Offset: 0x22c
	// Line 555, Address: 0x1011fd8, Func Offset: 0x238
	// Line 557, Address: 0x1011fe0, Func Offset: 0x240
	// Line 558, Address: 0x1011fec, Func Offset: 0x24c
	// Line 559, Address: 0x1011ff8, Func Offset: 0x258
	// Line 560, Address: 0x1012008, Func Offset: 0x268
	// Line 561, Address: 0x1012014, Func Offset: 0x274
	// Line 562, Address: 0x1012020, Func Offset: 0x280
	// Line 563, Address: 0x1012030, Func Offset: 0x290
	// Line 564, Address: 0x101203c, Func Offset: 0x29c
	// Line 565, Address: 0x1012048, Func Offset: 0x2a8
	// Line 566, Address: 0x1012058, Func Offset: 0x2b8
	// Line 567, Address: 0x1012064, Func Offset: 0x2c4
	// Line 568, Address: 0x1012078, Func Offset: 0x2d8
	// Line 569, Address: 0x1012088, Func Offset: 0x2e8
	// Line 570, Address: 0x1012094, Func Offset: 0x2f4
	// Line 571, Address: 0x10120a8, Func Offset: 0x308
	// Line 572, Address: 0x10120bc, Func Offset: 0x31c
	// Line 574, Address: 0x10120c8, Func Offset: 0x328
	// Line 575, Address: 0x10120d4, Func Offset: 0x334
	// Line 577, Address: 0x10120dc, Func Offset: 0x33c
	// Line 578, Address: 0x10120e8, Func Offset: 0x348
	// Line 579, Address: 0x10120f4, Func Offset: 0x354
	// Line 580, Address: 0x1012100, Func Offset: 0x360
	// Line 581, Address: 0x101210c, Func Offset: 0x36c
	// Line 582, Address: 0x1012118, Func Offset: 0x378
	// Line 583, Address: 0x101212c, Func Offset: 0x38c
	// Line 585, Address: 0x1012138, Func Offset: 0x398
	// Line 586, Address: 0x1012144, Func Offset: 0x3a4
	// Line 588, Address: 0x101214c, Func Offset: 0x3ac
	// Line 589, Address: 0x1012158, Func Offset: 0x3b8
	// Line 591, Address: 0x1012160, Func Offset: 0x3c0
	// Line 592, Address: 0x101216c, Func Offset: 0x3cc
	// Line 593, Address: 0x1012178, Func Offset: 0x3d8
	// Line 595, Address: 0x1012180, Func Offset: 0x3e0
	// Line 596, Address: 0x101218c, Func Offset: 0x3ec
	// Line 597, Address: 0x101219c, Func Offset: 0x3fc
	// Line 598, Address: 0x10121a8, Func Offset: 0x408
	// Line 599, Address: 0x10121b4, Func Offset: 0x414
	// Line 600, Address: 0x10121c0, Func Offset: 0x420
	// Line 601, Address: 0x10121d0, Func Offset: 0x430
	// Line 602, Address: 0x10121dc, Func Offset: 0x43c
	// Line 603, Address: 0x10121e8, Func Offset: 0x448
	// Line 604, Address: 0x10121f8, Func Offset: 0x458
	// Line 605, Address: 0x1012204, Func Offset: 0x464
	// Line 606, Address: 0x1012210, Func Offset: 0x470
	// Line 607, Address: 0x1012220, Func Offset: 0x480
	// Line 608, Address: 0x101222c, Func Offset: 0x48c
	// Line 609, Address: 0x1012238, Func Offset: 0x498
	// Line 610, Address: 0x1012248, Func Offset: 0x4a8
	// Line 611, Address: 0x1012254, Func Offset: 0x4b4
	// Line 612, Address: 0x1012260, Func Offset: 0x4c0
	// Line 613, Address: 0x101226c, Func Offset: 0x4cc
	// Line 614, Address: 0x1012278, Func Offset: 0x4d8
	// Line 615, Address: 0x1012284, Func Offset: 0x4e4
	// Line 616, Address: 0x1012290, Func Offset: 0x4f0
	// Line 619, Address: 0x101229c, Func Offset: 0x4fc
	// Func End, Address: 0x10122ac, Func Offset: 0x50c
}

// 
// Start address: 0x10122b0
void item2die(_anon0* itemwk)
{
	// Line 622, Address: 0x10122b0, Func Offset: 0
	// Line 623, Address: 0x10122bc, Func Offset: 0xc
	// Line 624, Address: 0x10122ec, Func Offset: 0x3c
	// Func End, Address: 0x10122fc, Func Offset: 0x4c
}

// 
// Start address: 0x1012300
void error_item(_anon0* itemwk)
{
	// Line 627, Address: 0x1012300, Func Offset: 0
	// Line 634, Address: 0x1012308, Func Offset: 0x8
	// Line 640, Address: 0x1012320, Func Offset: 0x20
	// Line 641, Address: 0x1012330, Func Offset: 0x30
	// Func End, Address: 0x101233c, Func Offset: 0x3c
}

