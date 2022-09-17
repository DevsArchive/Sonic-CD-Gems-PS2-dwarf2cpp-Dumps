typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_7)(_anon0*);
typedef void(*type_17)(_anon0*);
typedef void(*type_21)(_anon0*);

typedef _anon7 type_0[20];
typedef unsigned char type_1[16];
typedef unsigned char type_2[4];
typedef _anon7 type_3[0];
typedef unsigned char type_4[16];
typedef unsigned char type_5[6];
typedef tagPALETTEENTRY type_6[48];
typedef void(*type_8)(_anon0*)[7];
typedef tagPALETTEENTRY type_9[108];
typedef char type_10[32];
typedef unsigned char type_11[2];
typedef unsigned char type_12[6];
typedef unsigned char type_13[22];
typedef unsigned char type_14[4];
typedef unsigned char type_15[4];
typedef unsigned char type_16[5];
typedef void(*type_18)(_anon0*)[7];
typedef _anon1* type_19[17];
typedef _anon0 type_20[128];
typedef void(*type_22)(_anon0*)[3];
typedef unsigned char* type_23[10];
typedef unsigned char type_24[4];
typedef unsigned char type_25[4];

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

unsigned char pchg0[6];
unsigned char pchg1[5];
unsigned char pchg2[4];
unsigned char pchg3[4];
unsigned char pchg4[4];
unsigned char pchg5[4];
unsigned char pchg8[4];
unsigned char pchg9[6];
unsigned char* hotaru8_pchg[10];
_anon1 hotaru00;
_anon1 hotaru01;
_anon1 hotaru04;
_anon1 hotaru05;
_anon1 hotaru06;
_anon1 hotaru07;
_anon1 hotaru08;
_anon1 hotaru09;
_anon1 hotaru0b;
_anon1 hotaru0c;
_anon1 hotaru0f;
_anon1 hotaru10;
_anon1 hotaru;
_anon1* hotaru8pat[17];
_anon0 actwk[128];
_anon5 gametimer;
unsigned char shut_flag;
unsigned char bossflag;
short scra_vline;
unsigned char clrchgtbl1[16];
unsigned char clrchgtbl2[16];
tagPALETTEENTRY clrtblC1[48];
tagPALETTEENTRY* lpcolorwk;
tagPALETTEENTRY clrtblD[108];

void hotaru8(_anon0* hotaru);
void hotaru8_initx(_anon0* hotaru, unsigned char pr_data);
void hotaru8_init(_anon0* hotaru);
void hotaru8_dspin(_anon0* hotaru);
void hotaru8_setup(_anon0* hotaru);
void hotaru8_idou(_anon0* hotaru);
void hota8_zanzou(_anon0* hotaru);
void hotaru8_move2(_anon0* hotaru);
void hotaru8_move3(_anon0* hotaru);
void hotaru8_beemset(_anon0* hotaru);
void hotaru8_move4(_anon0* hotaru);
void hotaru8_beem(_anon0* beemwk);
void h8bem_init(_anon0* beemwk);
void h8bem_move1(_anon0* beemwk);
void h8bem_move2(_anon0* beemwk);
void hotaru8_zanact(_anon0* shadowwk);
void hotaru8_main(_anon0* roomwk);
void ht8main_init(_anon0* roomwk);
void ht8main_move1(_anon0* roomwk);
void ht8main_move2(_anon0* roomwk);
void ht8main_move3(_anon0* roomwk);
void ht8main_move4(_anon0* roomwk);
void ht8main_move5(_anon0* roomwk);
void ht8main_move6(_anon0* roomwk);
void colchg2(unsigned char tbl_number);
void clrtrn(tagPALETTEENTRY* color_tbl);
void colchg(_anon0* roomwk, unsigned char* chgtbl);

// 
// Start address: 0x102ec60
void hotaru8(_anon0* hotaru)
{
	void(*tbl)(_anon0*)[7];
	// Line 89, Address: 0x102ec60, Func Offset: 0
	// Line 90, Address: 0x102ec6c, Func Offset: 0xc
	// Line 99, Address: 0x102ec98, Func Offset: 0x38
	// Line 100, Address: 0x102ecc8, Func Offset: 0x68
	// Line 101, Address: 0x102ecf8, Func Offset: 0x98
	// Line 103, Address: 0x102ed28, Func Offset: 0xc8
	// Line 104, Address: 0x102ed4c, Func Offset: 0xec
	// Line 105, Address: 0x102ed88, Func Offset: 0x128
	// Line 106, Address: 0x102ed94, Func Offset: 0x134
	// Func End, Address: 0x102eda4, Func Offset: 0x144
}

// 
// Start address: 0x102edb0
void hotaru8_initx(_anon0* hotaru, unsigned char pr_data)
{
	// Line 109, Address: 0x102edb0, Func Offset: 0
	// Line 110, Address: 0x102edbc, Func Offset: 0xc
	// Line 111, Address: 0x102edcc, Func Offset: 0x1c
	// Line 112, Address: 0x102edd8, Func Offset: 0x28
	// Line 113, Address: 0x102ede8, Func Offset: 0x38
	// Line 114, Address: 0x102edf8, Func Offset: 0x48
	// Line 115, Address: 0x102ee08, Func Offset: 0x58
	// Func End, Address: 0x102ee14, Func Offset: 0x64
}

// 
// Start address: 0x102ee20
void hotaru8_init(_anon0* hotaru)
{
	// Line 118, Address: 0x102ee20, Func Offset: 0
	// Line 119, Address: 0x102ee2c, Func Offset: 0xc
	// Line 120, Address: 0x102ee3c, Func Offset: 0x1c
	// Line 121, Address: 0x102ee54, Func Offset: 0x34
	// Line 122, Address: 0x102ee64, Func Offset: 0x44
	// Line 123, Address: 0x102ee70, Func Offset: 0x50
	// Func End, Address: 0x102ee80, Func Offset: 0x60
}

// 
// Start address: 0x102ee80
void hotaru8_dspin(_anon0* hotaru)
{
	// Line 126, Address: 0x102ee80, Func Offset: 0
	// Line 127, Address: 0x102ee8c, Func Offset: 0xc
	// Line 128, Address: 0x102ee98, Func Offset: 0x18
	// Line 129, Address: 0x102eeac, Func Offset: 0x2c
	// Line 130, Address: 0x102eecc, Func Offset: 0x4c
	// Line 131, Address: 0x102eed8, Func Offset: 0x58
	// Line 132, Address: 0x102eee8, Func Offset: 0x68
	// Line 133, Address: 0x102eef8, Func Offset: 0x78
	// Func End, Address: 0x102ef08, Func Offset: 0x88
}

// 
// Start address: 0x102ef10
void hotaru8_setup(_anon0* hotaru)
{
	short next_position;
	short speed_calc;
	// Line 136, Address: 0x102ef10, Func Offset: 0
	// Line 139, Address: 0x102ef20, Func Offset: 0x10
	// Line 142, Address: 0x102ef38, Func Offset: 0x28
	// Line 143, Address: 0x102ef5c, Func Offset: 0x4c
	// Line 144, Address: 0x102ef70, Func Offset: 0x60
	// Line 145, Address: 0x102ef84, Func Offset: 0x74
	// Line 146, Address: 0x102ef8c, Func Offset: 0x7c
	// Line 147, Address: 0x102ef98, Func Offset: 0x88
	// Line 150, Address: 0x102efa0, Func Offset: 0x90
	// Line 151, Address: 0x102efc8, Func Offset: 0xb8
	// Line 152, Address: 0x102efd0, Func Offset: 0xc0
	// Line 153, Address: 0x102f000, Func Offset: 0xf0
	// Line 156, Address: 0x102f008, Func Offset: 0xf8
	// Line 157, Address: 0x102f010, Func Offset: 0x100
	// Line 158, Address: 0x102f044, Func Offset: 0x134
	// Line 160, Address: 0x102f070, Func Offset: 0x160
	// Line 161, Address: 0x102f078, Func Offset: 0x168
	// Line 162, Address: 0x102f0ac, Func Offset: 0x19c
	// Line 164, Address: 0x102f0d8, Func Offset: 0x1c8
	// Line 165, Address: 0x102f0e8, Func Offset: 0x1d8
	// Line 166, Address: 0x102f0f4, Func Offset: 0x1e4
	// Line 167, Address: 0x102f104, Func Offset: 0x1f4
	// Line 168, Address: 0x102f10c, Func Offset: 0x1fc
	// Func End, Address: 0x102f120, Func Offset: 0x210
}

// 
// Start address: 0x102f120
void hotaru8_idou(_anon0* hotaru)
{
	// Line 172, Address: 0x102f120, Func Offset: 0
	// Line 173, Address: 0x102f12c, Func Offset: 0xc
	// Line 174, Address: 0x102f150, Func Offset: 0x30
	// Line 176, Address: 0x102f174, Func Offset: 0x54
	// Line 177, Address: 0x102f180, Func Offset: 0x60
	// Line 178, Address: 0x102f1b0, Func Offset: 0x90
	// Line 179, Address: 0x102f1c4, Func Offset: 0xa4
	// Func End, Address: 0x102f1d4, Func Offset: 0xb4
}

// 
// Start address: 0x102f1e0
void hota8_zanzou(_anon0* hotaru)
{
	_anon0* shadowwk;
	// Line 182, Address: 0x102f1e0, Func Offset: 0
	// Line 185, Address: 0x102f1ec, Func Offset: 0xc
	// Line 186, Address: 0x102f208, Func Offset: 0x28
	// Line 187, Address: 0x102f21c, Func Offset: 0x3c
	// Line 188, Address: 0x102f228, Func Offset: 0x48
	// Line 189, Address: 0x102f238, Func Offset: 0x58
	// Line 190, Address: 0x102f248, Func Offset: 0x68
	// Line 191, Address: 0x102f254, Func Offset: 0x74
	// Func End, Address: 0x102f264, Func Offset: 0x84
}

// 
// Start address: 0x102f270
void hotaru8_move2(_anon0* hotaru)
{
	char color_change_number;
	char tbl[32];
	// Line 194, Address: 0x102f270, Func Offset: 0
	// Line 196, Address: 0x102f280, Func Offset: 0x10
	// Line 212, Address: 0x102f2b4, Func Offset: 0x44
	// Line 213, Address: 0x102f2bc, Func Offset: 0x4c
	// Line 215, Address: 0x102f2d0, Func Offset: 0x60
	// Line 216, Address: 0x102f308, Func Offset: 0x98
	// Line 218, Address: 0x102f31c, Func Offset: 0xac
	// Line 219, Address: 0x102f32c, Func Offset: 0xbc
	// Line 221, Address: 0x102f334, Func Offset: 0xc4
	// Func End, Address: 0x102f348, Func Offset: 0xd8
}

// 
// Start address: 0x102f350
void hotaru8_move3(_anon0* hotaru)
{
	// Line 224, Address: 0x102f350, Func Offset: 0
	// Line 225, Address: 0x102f35c, Func Offset: 0xc
	// Line 226, Address: 0x102f370, Func Offset: 0x20
	// Line 227, Address: 0x102f37c, Func Offset: 0x2c
	// Line 228, Address: 0x102f388, Func Offset: 0x38
	// Line 231, Address: 0x102f394, Func Offset: 0x44
	// Line 233, Address: 0x102f3c4, Func Offset: 0x74
	// Line 234, Address: 0x102f3d8, Func Offset: 0x88
	// Line 235, Address: 0x102f408, Func Offset: 0xb8
	// Func End, Address: 0x102f418, Func Offset: 0xc8
}

// 
// Start address: 0x102f420
void hotaru8_beemset(_anon0* hotaru)
{
	_anon0* beemwk;
	// Line 238, Address: 0x102f420, Func Offset: 0
	// Line 241, Address: 0x102f42c, Func Offset: 0xc
	// Line 242, Address: 0x102f440, Func Offset: 0x20
	// Line 243, Address: 0x102f44c, Func Offset: 0x2c
	// Line 244, Address: 0x102f458, Func Offset: 0x38
	// Line 245, Address: 0x102f468, Func Offset: 0x48
	// Line 246, Address: 0x102f478, Func Offset: 0x58
	// Func End, Address: 0x102f488, Func Offset: 0x68
}

// 
// Start address: 0x102f490
void hotaru8_move4(_anon0* hotaru)
{
	// Line 249, Address: 0x102f490, Func Offset: 0
	// Line 250, Address: 0x102f49c, Func Offset: 0xc
	// Line 251, Address: 0x102f4b0, Func Offset: 0x20
	// Line 252, Address: 0x102f4bc, Func Offset: 0x2c
	// Line 255, Address: 0x102f4c4, Func Offset: 0x34
	// Line 257, Address: 0x102f4d8, Func Offset: 0x48
	// Line 259, Address: 0x102f4f8, Func Offset: 0x68
	// Line 260, Address: 0x102f504, Func Offset: 0x74
	// Line 261, Address: 0x102f510, Func Offset: 0x80
	// Line 262, Address: 0x102f51c, Func Offset: 0x8c
	// Func End, Address: 0x102f52c, Func Offset: 0x9c
}

// 
// Start address: 0x102f530
void hotaru8_beem(_anon0* beemwk)
{
	void(*tbl)(_anon0*)[3];
	// Line 265, Address: 0x102f530, Func Offset: 0
	// Line 266, Address: 0x102f53c, Func Offset: 0xc
	// Line 267, Address: 0x102f560, Func Offset: 0x30
	// Line 268, Address: 0x102f59c, Func Offset: 0x6c
	// Line 269, Address: 0x102f5a8, Func Offset: 0x78
	// Func End, Address: 0x102f5b8, Func Offset: 0x88
}

// 
// Start address: 0x102f5c0
void h8bem_init(_anon0* beemwk)
{
	// Line 272, Address: 0x102f5c0, Func Offset: 0
	// Line 273, Address: 0x102f5cc, Func Offset: 0xc
	// Line 274, Address: 0x102f5dc, Func Offset: 0x1c
	// Line 275, Address: 0x102f5ec, Func Offset: 0x2c
	// Line 276, Address: 0x102f5f8, Func Offset: 0x38
	// Line 277, Address: 0x102f604, Func Offset: 0x44
	// Line 278, Address: 0x102f610, Func Offset: 0x50
	// Func End, Address: 0x102f620, Func Offset: 0x60
}

// 
// Start address: 0x102f620
void h8bem_move1(_anon0* beemwk)
{
	// Line 281, Address: 0x102f620, Func Offset: 0
	// Line 282, Address: 0x102f62c, Func Offset: 0xc
	// Line 283, Address: 0x102f638, Func Offset: 0x18
	// Line 284, Address: 0x102f648, Func Offset: 0x28
	// Line 285, Address: 0x102f65c, Func Offset: 0x3c
	// Line 286, Address: 0x102f678, Func Offset: 0x58
	// Line 287, Address: 0x102f688, Func Offset: 0x68
	// Line 289, Address: 0x102f69c, Func Offset: 0x7c
	// Func End, Address: 0x102f6ac, Func Offset: 0x8c
}

// 
// Start address: 0x102f6b0
void h8bem_move2(_anon0* beemwk)
{
	// Line 292, Address: 0x102f6b0, Func Offset: 0
	// Line 293, Address: 0x102f6bc, Func Offset: 0xc
	// Line 294, Address: 0x102f6d0, Func Offset: 0x20
	// Line 295, Address: 0x102f6dc, Func Offset: 0x2c
	// Line 296, Address: 0x102f6e8, Func Offset: 0x38
	// Line 298, Address: 0x102f6fc, Func Offset: 0x4c
	// Line 299, Address: 0x102f710, Func Offset: 0x60
	// Line 300, Address: 0x102f730, Func Offset: 0x80
	// Line 301, Address: 0x102f760, Func Offset: 0xb0
	// Func End, Address: 0x102f770, Func Offset: 0xc0
}

// 
// Start address: 0x102f770
void hotaru8_zanact(_anon0* shadowwk)
{
	// Line 304, Address: 0x102f770, Func Offset: 0
	// Line 305, Address: 0x102f77c, Func Offset: 0xc
	// Line 306, Address: 0x102f790, Func Offset: 0x20
	// Line 307, Address: 0x102f7a0, Func Offset: 0x30
	// Line 308, Address: 0x102f7ac, Func Offset: 0x3c
	// Line 309, Address: 0x102f7b8, Func Offset: 0x48
	// Line 311, Address: 0x102f7c8, Func Offset: 0x58
	// Line 312, Address: 0x102f7dc, Func Offset: 0x6c
	// Line 313, Address: 0x102f80c, Func Offset: 0x9c
	// Line 314, Address: 0x102f818, Func Offset: 0xa8
	// Func End, Address: 0x102f828, Func Offset: 0xb8
}

// 
// Start address: 0x102f830
void hotaru8_main(_anon0* roomwk)
{
	void(*tbl)(_anon0*)[7];
	// Line 317, Address: 0x102f830, Func Offset: 0
	// Line 318, Address: 0x102f83c, Func Offset: 0xc
	// Line 320, Address: 0x102f868, Func Offset: 0x38
	// Line 321, Address: 0x102f8a4, Func Offset: 0x74
	// Func End, Address: 0x102f8b4, Func Offset: 0x84
}

// 
// Start address: 0x102f8c0
void ht8main_init(_anon0* roomwk)
{
	_anon0* doorwk;
	// Line 324, Address: 0x102f8c0, Func Offset: 0
	// Line 327, Address: 0x102f8cc, Func Offset: 0xc
	// Line 329, Address: 0x102f8dc, Func Offset: 0x1c
	// Line 331, Address: 0x102f8f8, Func Offset: 0x38
	// Line 332, Address: 0x102f904, Func Offset: 0x44
	// Line 333, Address: 0x102f918, Func Offset: 0x58
	// Line 334, Address: 0x102f924, Func Offset: 0x64
	// Line 335, Address: 0x102f930, Func Offset: 0x70
	// Line 336, Address: 0x102f93c, Func Offset: 0x7c
	// Line 337, Address: 0x102f970, Func Offset: 0xb0
	// Line 338, Address: 0x102f980, Func Offset: 0xc0
	// Func End, Address: 0x102f990, Func Offset: 0xd0
}

// 
// Start address: 0x102f990
void ht8main_move1(_anon0* roomwk)
{
	// Line 341, Address: 0x102f990, Func Offset: 0
	// Line 342, Address: 0x102f998, Func Offset: 0x8
	// Line 343, Address: 0x102f9b4, Func Offset: 0x24
	// Line 344, Address: 0x102f9dc, Func Offset: 0x4c
	// Line 345, Address: 0x102f9f0, Func Offset: 0x60
	// Line 346, Address: 0x102fa08, Func Offset: 0x78
	// Line 347, Address: 0x102fa18, Func Offset: 0x88
	// Line 349, Address: 0x102fa2c, Func Offset: 0x9c
	// Func End, Address: 0x102fa38, Func Offset: 0xa8
}

// 
// Start address: 0x102fa40
void ht8main_move2(_anon0* roomwk)
{
	_anon0* hotaru;
	// Line 352, Address: 0x102fa40, Func Offset: 0
	// Line 355, Address: 0x102fa4c, Func Offset: 0xc
	// Line 356, Address: 0x102fa60, Func Offset: 0x20
	// Line 357, Address: 0x102fa78, Func Offset: 0x38
	// Line 358, Address: 0x102fa8c, Func Offset: 0x4c
	// Line 359, Address: 0x102faa0, Func Offset: 0x60
	// Line 360, Address: 0x102faac, Func Offset: 0x6c
	// Line 361, Address: 0x102fab8, Func Offset: 0x78
	// Line 362, Address: 0x102fac4, Func Offset: 0x84
	// Line 363, Address: 0x102faf8, Func Offset: 0xb8
	// Line 364, Address: 0x102fb04, Func Offset: 0xc4
	// Line 365, Address: 0x102fb14, Func Offset: 0xd4
	// Func End, Address: 0x102fb24, Func Offset: 0xe4
}

// 
// Start address: 0x102fb30
void ht8main_move3(_anon0* roomwk)
{
	_anon0* hotaru;
	// Line 368, Address: 0x102fb30, Func Offset: 0
	// Line 371, Address: 0x102fb3c, Func Offset: 0xc
	// Line 374, Address: 0x102fb74, Func Offset: 0x44
	// Line 375, Address: 0x102fb80, Func Offset: 0x50
	// Line 377, Address: 0x102fb9c, Func Offset: 0x6c
	// Line 378, Address: 0x102fbb0, Func Offset: 0x80
	// Line 379, Address: 0x102fbbc, Func Offset: 0x8c
	// Line 380, Address: 0x102fbc8, Func Offset: 0x98
	// Line 381, Address: 0x102fbd4, Func Offset: 0xa4
	// Line 382, Address: 0x102fc08, Func Offset: 0xd8
	// Line 383, Address: 0x102fc14, Func Offset: 0xe4
	// Line 384, Address: 0x102fc24, Func Offset: 0xf4
	// Line 385, Address: 0x102fc30, Func Offset: 0x100
	// Func End, Address: 0x102fc40, Func Offset: 0x110
}

// 
// Start address: 0x102fc40
void ht8main_move4(_anon0* roomwk)
{
	_anon0* hotaru;
	// Line 388, Address: 0x102fc40, Func Offset: 0
	// Line 391, Address: 0x102fc4c, Func Offset: 0xc
	// Line 392, Address: 0x102fc60, Func Offset: 0x20
	// Line 393, Address: 0x102fc6c, Func Offset: 0x2c
	// Line 394, Address: 0x102fc78, Func Offset: 0x38
	// Line 395, Address: 0x102fc84, Func Offset: 0x44
	// Line 396, Address: 0x102fcb8, Func Offset: 0x78
	// Line 397, Address: 0x102fcc0, Func Offset: 0x80
	// Line 398, Address: 0x102fcd4, Func Offset: 0x94
	// Line 399, Address: 0x102fce4, Func Offset: 0xa4
	// Func End, Address: 0x102fcf4, Func Offset: 0xb4
}

// 
// Start address: 0x102fd00
void ht8main_move5(_anon0* roomwk)
{
	// Line 402, Address: 0x102fd00, Func Offset: 0
	// Line 403, Address: 0x102fd08, Func Offset: 0x8
	// Line 405, Address: 0x102fd40, Func Offset: 0x40
	// Line 407, Address: 0x102fd78, Func Offset: 0x78
	// Line 408, Address: 0x102fd88, Func Offset: 0x88
	// Func End, Address: 0x102fd94, Func Offset: 0x94
}

// 
// Start address: 0x102fda0
void ht8main_move6(_anon0* roomwk)
{
	_anon0* eggwk;
	// Line 411, Address: 0x102fda0, Func Offset: 0
	// Line 414, Address: 0x102fdac, Func Offset: 0xc
	// Line 415, Address: 0x102fdc0, Func Offset: 0x20
	// Line 416, Address: 0x102fdd8, Func Offset: 0x38
	// Line 417, Address: 0x102fe04, Func Offset: 0x64
	// Line 418, Address: 0x102fe18, Func Offset: 0x78
	// Line 419, Address: 0x102fe24, Func Offset: 0x84
	// Line 420, Address: 0x102fe30, Func Offset: 0x90
	// Line 421, Address: 0x102fe3c, Func Offset: 0x9c
	// Line 422, Address: 0x102fe48, Func Offset: 0xa8
	// Func End, Address: 0x102fe58, Func Offset: 0xb8
}

// 
// Start address: 0x102fe60
void colchg2(unsigned char tbl_number)
{
	// Line 425, Address: 0x102fe60, Func Offset: 0
	// Line 426, Address: 0x102fe6c, Func Offset: 0xc
	// Line 427, Address: 0x102fea4, Func Offset: 0x44
	// Func End, Address: 0x102feb4, Func Offset: 0x54
}

// 
// Start address: 0x102fec0
void clrtrn(tagPALETTEENTRY* color_tbl)
{
	tagPALETTEENTRY* colorwk;
	// Line 430, Address: 0x102fec0, Func Offset: 0
	// Line 433, Address: 0x102fecc, Func Offset: 0xc
	// Line 434, Address: 0x102fed8, Func Offset: 0x18
	// Line 435, Address: 0x102ff0c, Func Offset: 0x4c
	// Line 436, Address: 0x102ff40, Func Offset: 0x80
	// Line 437, Address: 0x102ff4c, Func Offset: 0x8c
	// Line 438, Address: 0x102ff80, Func Offset: 0xc0
	// Line 439, Address: 0x102ffb4, Func Offset: 0xf4
	// Line 440, Address: 0x102ffe8, Func Offset: 0x128
	// Line 441, Address: 0x103001c, Func Offset: 0x15c
	// Func End, Address: 0x103002c, Func Offset: 0x16c
}

// 
// Start address: 0x1030030
void colchg(_anon0* roomwk, unsigned char* chgtbl)
{
	unsigned char clrtbl_index;
	// Line 444, Address: 0x1030030, Func Offset: 0
	// Line 447, Address: 0x1030044, Func Offset: 0x14
	// Line 449, Address: 0x103005c, Func Offset: 0x2c
	// Line 450, Address: 0x1030088, Func Offset: 0x58
	// Line 451, Address: 0x10300a4, Func Offset: 0x74
	// Line 452, Address: 0x10300c8, Func Offset: 0x98
	// Line 453, Address: 0x10300fc, Func Offset: 0xcc
	// Line 454, Address: 0x103010c, Func Offset: 0xdc
	// Func End, Address: 0x1030120, Func Offset: 0xf0
}

