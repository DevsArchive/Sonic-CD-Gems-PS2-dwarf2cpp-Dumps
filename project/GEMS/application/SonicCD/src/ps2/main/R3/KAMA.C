typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_0)(_anon0*);
typedef void(*type_11)(_anon0*);

typedef _anon7 type_1[20];
typedef void(*type_2)(_anon0*)[3];
typedef unsigned char type_3[8];
typedef _anon7 type_4[0];
typedef unsigned char* type_5[5];
typedef unsigned char type_6[4];
typedef unsigned char* type_7[2];
typedef unsigned char type_8[4];
typedef _anon1* type_9[8];
typedef _anon1* type_10[8];
typedef void(*type_12)(_anon0*)[7];
typedef _anon1* type_13[6];
typedef unsigned char type_14[2];
typedef unsigned char type_15[22];
typedef unsigned char type_16[8];
typedef unsigned char type_17[3];
typedef unsigned char type_18[4];
typedef unsigned char type_19[6];
typedef _anon0 type_20[128];

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

unsigned char bCarry;
unsigned char jmp_flg;
void(*kama_tbl)(_anon0*)[7];
_anon1* bkamapat[8];
_anon1* kamapat[8];
unsigned char* kama_pchg[5];
_anon0 actwk[128];
void(*wpkama_tbl)(_anon0*)[3];
_anon1* wpkamapat[6];
unsigned char* wpkama_pchg[2];
unsigned char plpower_m;
unsigned char kama_pchg0[6];
unsigned char kama_pchg1[4];
unsigned char kama_pchg2[4];
unsigned char kama_pchg3[4];
unsigned char kama_pchg4[3];
_anon1 kama_patA;
_anon1 kama_patB;
_anon1 kama_patC;
_anon1 kama_patD;
_anon1 kama_patE;
_anon1 kama_patF;
_anon1 kama_patG;
_anon1 kama_patH;
_anon1 bkama_patA;
_anon1 bkama_patB;
_anon1 bkama_patC;
_anon1 bkama_patD;
_anon1 bkama_patE;
_anon1 bkama_patF;
_anon1 bkama_patG;
_anon1 bkama_patH;
unsigned char wpkama_pchg0[8];
unsigned char wpkama_pchg1[8];
_anon1 bu0;
_anon1 bu1;
_anon1 bu2;
_anon1 bu3;
_anon1 bu4;
_anon1 bu5;

void ene_kama(_anon0* pActwk);
void kama_init(_anon0* pActwk);
void kama_disp(_anon0* pActwk);
void kama_fall(_anon0* pActwk);
void kama_wait(_anon0* pActwk);
void kama_atck(_anon0* pActwk);
void kama_pati(_anon0* pActwk);
void kama_move(_anon0* pActwk);
void kama_reve(_anon0* pActwk);
void movement(_anon0* pActwk);
void set_wpkama(_anon0* pActwk);
void tama_kama(_anon0* pActwk);
void wpkama_init(_anon0* pActwk);
void wpkama_wait(_anon0* pActwk);
void wpkama_move(_anon0* pActwk);
void wpkama_disp(_anon0* pActwk);
short wpkama_colicheck(_anon0* pActwk, _anon0* pPlaywk);
void wpkama_reve(_anon0* pActwk, _anon0* pPlaywk);

// 
// Start address: 0x1025bd0
void ene_kama(_anon0* pActwk)
{
	unsigned char byRwk;
	// Line 108, Address: 0x1025bd0, Func Offset: 0
	// Line 111, Address: 0x1025be0, Func Offset: 0x10
	// Line 114, Address: 0x1025c18, Func Offset: 0x48
	// Line 116, Address: 0x1025c20, Func Offset: 0x50
	// Line 118, Address: 0x1025c40, Func Offset: 0x70
	// Line 119, Address: 0x1025c6c, Func Offset: 0x9c
	// Line 121, Address: 0x1025c90, Func Offset: 0xc0
	// Line 122, Address: 0x1025c9c, Func Offset: 0xcc
	// Func End, Address: 0x1025cb0, Func Offset: 0xe0
}

// 
// Start address: 0x1025cb0
void kama_init(_anon0* pActwk)
{
	// Line 134, Address: 0x1025cb0, Func Offset: 0
	// Line 135, Address: 0x1025cbc, Func Offset: 0xc
	// Line 136, Address: 0x1025ccc, Func Offset: 0x1c
	// Line 138, Address: 0x1025ce4, Func Offset: 0x34
	// Line 139, Address: 0x1025cf0, Func Offset: 0x40
	// Line 140, Address: 0x1025d00, Func Offset: 0x50
	// Line 144, Address: 0x1025d08, Func Offset: 0x58
	// Line 145, Address: 0x1025d14, Func Offset: 0x64
	// Line 148, Address: 0x1025d24, Func Offset: 0x74
	// Line 149, Address: 0x1025d30, Func Offset: 0x80
	// Line 150, Address: 0x1025d3c, Func Offset: 0x8c
	// Line 151, Address: 0x1025d48, Func Offset: 0x98
	// Line 152, Address: 0x1025d54, Func Offset: 0xa4
	// Line 153, Address: 0x1025d60, Func Offset: 0xb0
	// Line 154, Address: 0x1025d6c, Func Offset: 0xbc
	// Line 155, Address: 0x1025d78, Func Offset: 0xc8
	// Line 157, Address: 0x1025d88, Func Offset: 0xd8
	// Line 158, Address: 0x1025d94, Func Offset: 0xe4
	// Func End, Address: 0x1025da4, Func Offset: 0xf4
}

// 
// Start address: 0x1025db0
void kama_disp(_anon0* pActwk)
{
	// Line 164, Address: 0x1025db0, Func Offset: 0
	// Line 165, Address: 0x1025dbc, Func Offset: 0xc
	// Line 166, Address: 0x1025dd0, Func Offset: 0x20
	// Line 167, Address: 0x1025ddc, Func Offset: 0x2c
	// Line 168, Address: 0x1025de8, Func Offset: 0x38
	// Func End, Address: 0x1025df8, Func Offset: 0x48
}

// 
// Start address: 0x1025e00
void kama_fall(_anon0* pActwk)
{
	short iD1;
	// Line 179, Address: 0x1025e00, Func Offset: 0
	// Line 182, Address: 0x1025e10, Func Offset: 0x10
	// Line 183, Address: 0x1025e1c, Func Offset: 0x1c
	// Line 184, Address: 0x1025e30, Func Offset: 0x30
	// Line 185, Address: 0x1025e40, Func Offset: 0x40
	// Line 187, Address: 0x1025e50, Func Offset: 0x50
	// Line 188, Address: 0x1025e5c, Func Offset: 0x5c
	// Func End, Address: 0x1025e70, Func Offset: 0x70
}

// 
// Start address: 0x1025e70
void kama_wait(_anon0* pActwk)
{
	short iD0;
	short iD1;
	_anon0* pPlaywk;
	// Line 200, Address: 0x1025e70, Func Offset: 0
	// Line 204, Address: 0x1025e88, Func Offset: 0x18
	// Line 206, Address: 0x1025ea0, Func Offset: 0x30
	// Line 207, Address: 0x1025eb0, Func Offset: 0x40
	// Line 209, Address: 0x1025ec0, Func Offset: 0x50
	// Line 210, Address: 0x1025ec8, Func Offset: 0x58
	// Line 211, Address: 0x1025ed8, Func Offset: 0x68
	// Line 212, Address: 0x1025efc, Func Offset: 0x8c
	// Line 213, Address: 0x1025f0c, Func Offset: 0x9c
	// Line 215, Address: 0x1025f24, Func Offset: 0xb4
	// Line 216, Address: 0x1025f40, Func Offset: 0xd0
	// Line 217, Address: 0x1025f50, Func Offset: 0xe0
	// Line 220, Address: 0x1025f60, Func Offset: 0xf0
	// Line 222, Address: 0x1025f80, Func Offset: 0x110
	// Line 223, Address: 0x1025f90, Func Offset: 0x120
	// Line 224, Address: 0x1025fb4, Func Offset: 0x144
	// Line 225, Address: 0x1025fc4, Func Offset: 0x154
	// Line 226, Address: 0x1025fdc, Func Offset: 0x16c
	// Line 228, Address: 0x1025ff8, Func Offset: 0x188
	// Line 231, Address: 0x102600c, Func Offset: 0x19c
	// Line 232, Address: 0x1026018, Func Offset: 0x1a8
	// Line 233, Address: 0x1026024, Func Offset: 0x1b4
	// Line 234, Address: 0x1026030, Func Offset: 0x1c0
	// Line 235, Address: 0x1026040, Func Offset: 0x1d0
	// Line 236, Address: 0x102604c, Func Offset: 0x1dc
	// Line 241, Address: 0x1026054, Func Offset: 0x1e4
	// Line 242, Address: 0x1026060, Func Offset: 0x1f0
	// Line 243, Address: 0x102606c, Func Offset: 0x1fc
	// Func End, Address: 0x1026088, Func Offset: 0x218
}

// 
// Start address: 0x1026090
void kama_atck(_anon0* pActwk)
{
	// Line 255, Address: 0x1026090, Func Offset: 0
	// Line 256, Address: 0x102609c, Func Offset: 0xc
	// Line 257, Address: 0x10260ac, Func Offset: 0x1c
	// Line 258, Address: 0x10260c0, Func Offset: 0x30
	// Line 262, Address: 0x10260d4, Func Offset: 0x44
	// Line 263, Address: 0x10260e0, Func Offset: 0x50
	// Line 264, Address: 0x10260ec, Func Offset: 0x5c
	// Line 265, Address: 0x10260fc, Func Offset: 0x6c
	// Line 267, Address: 0x1026108, Func Offset: 0x78
	// Func End, Address: 0x1026118, Func Offset: 0x88
}

// 
// Start address: 0x1026120
void kama_pati(_anon0* pActwk)
{
	// Line 279, Address: 0x1026120, Func Offset: 0
	// Line 280, Address: 0x102612c, Func Offset: 0xc
	// Line 281, Address: 0x102613c, Func Offset: 0x1c
	// Line 282, Address: 0x1026150, Func Offset: 0x30
	// Line 286, Address: 0x1026164, Func Offset: 0x44
	// Line 287, Address: 0x1026174, Func Offset: 0x54
	// Line 289, Address: 0x1026180, Func Offset: 0x60
	// Func End, Address: 0x1026190, Func Offset: 0x70
}

// 
// Start address: 0x1026190
void kama_move(_anon0* pActwk)
{
	short iD0;
	short iD1;
	// Line 301, Address: 0x1026190, Func Offset: 0
	// Line 304, Address: 0x10261a4, Func Offset: 0x14
	// Line 305, Address: 0x10261bc, Func Offset: 0x2c
	// Line 307, Address: 0x10261d0, Func Offset: 0x40
	// Line 309, Address: 0x10261dc, Func Offset: 0x4c
	// Line 310, Address: 0x10261e4, Func Offset: 0x54
	// Line 311, Address: 0x10261fc, Func Offset: 0x6c
	// Line 313, Address: 0x1026218, Func Offset: 0x88
	// Line 315, Address: 0x1026220, Func Offset: 0x90
	// Line 317, Address: 0x102622c, Func Offset: 0x9c
	// Line 318, Address: 0x1026240, Func Offset: 0xb0
	// Line 320, Address: 0x1026250, Func Offset: 0xc0
	// Line 321, Address: 0x1026264, Func Offset: 0xd4
	// Line 323, Address: 0x1026274, Func Offset: 0xe4
	// Line 324, Address: 0x1026288, Func Offset: 0xf8
	// Line 326, Address: 0x1026298, Func Offset: 0x108
	// Line 327, Address: 0x10262a4, Func Offset: 0x114
	// Line 329, Address: 0x10262ac, Func Offset: 0x11c
	// Line 331, Address: 0x10262d4, Func Offset: 0x144
	// Line 332, Address: 0x10262e4, Func Offset: 0x154
	// Line 333, Address: 0x10262f0, Func Offset: 0x160
	// Line 338, Address: 0x10262f8, Func Offset: 0x168
	// Line 339, Address: 0x1026304, Func Offset: 0x174
	// Line 340, Address: 0x1026310, Func Offset: 0x180
	// Line 341, Address: 0x1026320, Func Offset: 0x190
	// Line 342, Address: 0x102632c, Func Offset: 0x19c
	// Func End, Address: 0x1026344, Func Offset: 0x1b4
}

// 
// Start address: 0x1026350
void kama_reve(_anon0* pActwk)
{
	// Line 354, Address: 0x1026350, Func Offset: 0
	// Line 355, Address: 0x102635c, Func Offset: 0xc
	// Line 356, Address: 0x102636c, Func Offset: 0x1c
	// Line 358, Address: 0x1026380, Func Offset: 0x30
	// Line 359, Address: 0x102639c, Func Offset: 0x4c
	// Line 360, Address: 0x10263b8, Func Offset: 0x68
	// Line 362, Address: 0x10263c8, Func Offset: 0x78
	// Line 363, Address: 0x10263d4, Func Offset: 0x84
	// Func End, Address: 0x10263e4, Func Offset: 0x94
}

// 
// Start address: 0x10263f0
void movement(_anon0* pActwk)
{
	int lD0;
	// Line 375, Address: 0x10263f0, Func Offset: 0
	// Line 376, Address: 0x10263fc, Func Offset: 0xc
	// Line 378, Address: 0x1026400, Func Offset: 0x10
	// Line 379, Address: 0x1026410, Func Offset: 0x20
	// Line 380, Address: 0x1026438, Func Offset: 0x48
	// Line 382, Address: 0x1026448, Func Offset: 0x58
	// Line 383, Address: 0x1026458, Func Offset: 0x68
	// Line 384, Address: 0x1026480, Func Offset: 0x90
	// Line 385, Address: 0x1026490, Func Offset: 0xa0
	// Func End, Address: 0x10264a0, Func Offset: 0xb0
}

// 
// Start address: 0x10264a0
void set_wpkama(_anon0* pActwk)
{
	_anon0* pActfree;
	// Line 397, Address: 0x10264a0, Func Offset: 0
	// Line 400, Address: 0x10264ac, Func Offset: 0xc
	// Line 403, Address: 0x10264c4, Func Offset: 0x24
	// Line 405, Address: 0x10264d8, Func Offset: 0x38
	// Line 407, Address: 0x10264e4, Func Offset: 0x44
	// Line 409, Address: 0x1026518, Func Offset: 0x78
	// Line 410, Address: 0x1026524, Func Offset: 0x84
	// Line 412, Address: 0x1026534, Func Offset: 0x94
	// Line 414, Address: 0x1026544, Func Offset: 0xa4
	// Line 415, Address: 0x1026568, Func Offset: 0xc8
	// Line 416, Address: 0x1026580, Func Offset: 0xe0
	// Line 418, Address: 0x10265ac, Func Offset: 0x10c
	// Line 421, Address: 0x10265d0, Func Offset: 0x130
	// Line 423, Address: 0x10265e4, Func Offset: 0x144
	// Line 425, Address: 0x10265f0, Func Offset: 0x150
	// Line 427, Address: 0x1026624, Func Offset: 0x184
	// Line 428, Address: 0x1026630, Func Offset: 0x190
	// Line 430, Address: 0x1026640, Func Offset: 0x1a0
	// Line 432, Address: 0x1026650, Func Offset: 0x1b0
	// Line 433, Address: 0x1026674, Func Offset: 0x1d4
	// Line 434, Address: 0x102668c, Func Offset: 0x1ec
	// Line 436, Address: 0x10266b8, Func Offset: 0x218
	// Line 439, Address: 0x10266dc, Func Offset: 0x23c
	// Func End, Address: 0x10266ec, Func Offset: 0x24c
}

// 
// Start address: 0x10266f0
void tama_kama(_anon0* pActwk)
{
	// Line 462, Address: 0x10266f0, Func Offset: 0
	// Line 463, Address: 0x10266fc, Func Offset: 0xc
	// Line 464, Address: 0x1026704, Func Offset: 0x14
	// Line 465, Address: 0x1026748, Func Offset: 0x58
	// Line 466, Address: 0x1026754, Func Offset: 0x64
	// Line 467, Address: 0x1026768, Func Offset: 0x78
	// Line 468, Address: 0x1026770, Func Offset: 0x80
	// Func End, Address: 0x1026780, Func Offset: 0x90
}

// 
// Start address: 0x1026780
void wpkama_init(_anon0* pActwk)
{
	short iD1;
	// Line 480, Address: 0x1026780, Func Offset: 0
	// Line 483, Address: 0x102678c, Func Offset: 0xc
	// Line 484, Address: 0x1026798, Func Offset: 0x18
	// Line 485, Address: 0x10267a4, Func Offset: 0x24
	// Line 486, Address: 0x10267b0, Func Offset: 0x30
	// Line 487, Address: 0x10267bc, Func Offset: 0x3c
	// Line 488, Address: 0x10267c8, Func Offset: 0x48
	// Line 489, Address: 0x10267d8, Func Offset: 0x58
	// Line 491, Address: 0x10267e8, Func Offset: 0x68
	// Line 493, Address: 0x10267f4, Func Offset: 0x74
	// Line 495, Address: 0x102680c, Func Offset: 0x8c
	// Line 496, Address: 0x102681c, Func Offset: 0x9c
	// Line 497, Address: 0x102682c, Func Offset: 0xac
	// Line 500, Address: 0x1026848, Func Offset: 0xc8
	// Line 501, Address: 0x1026850, Func Offset: 0xd0
	// Line 502, Address: 0x1026860, Func Offset: 0xe0
	// Func End, Address: 0x1026870, Func Offset: 0xf0
}

// 
// Start address: 0x1026870
void wpkama_wait(_anon0* pActwk)
{
	unsigned short wD0;
	_anon0* pActfree;
	// Line 515, Address: 0x1026870, Func Offset: 0
	// Line 519, Address: 0x1026884, Func Offset: 0x14
	// Line 520, Address: 0x1026894, Func Offset: 0x24
	// Line 522, Address: 0x10268a8, Func Offset: 0x38
	// Line 523, Address: 0x10268b8, Func Offset: 0x48
	// Line 524, Address: 0x10268c4, Func Offset: 0x54
	// Line 527, Address: 0x10268d0, Func Offset: 0x60
	// Line 528, Address: 0x10268dc, Func Offset: 0x6c
	// Line 529, Address: 0x10268f8, Func Offset: 0x88
	// Line 530, Address: 0x102690c, Func Offset: 0x9c
	// Line 533, Address: 0x1026920, Func Offset: 0xb0
	// Line 534, Address: 0x1026934, Func Offset: 0xc4
	// Line 535, Address: 0x1026940, Func Offset: 0xd0
	// Func End, Address: 0x1026958, Func Offset: 0xe8
}

// 
// Start address: 0x1026960
void wpkama_move(_anon0* pActwk)
{
	_anon0* pPlaywk;
	// Line 548, Address: 0x1026960, Func Offset: 0
	// Line 551, Address: 0x1026970, Func Offset: 0x10
	// Line 552, Address: 0x102697c, Func Offset: 0x1c
	// Line 554, Address: 0x1026994, Func Offset: 0x34
	// Line 556, Address: 0x10269a8, Func Offset: 0x48
	// Line 557, Address: 0x10269c0, Func Offset: 0x60
	// Line 560, Address: 0x10269cc, Func Offset: 0x6c
	// Line 561, Address: 0x10269d4, Func Offset: 0x74
	// Line 562, Address: 0x10269f4, Func Offset: 0x94
	// Line 563, Address: 0x1026a04, Func Offset: 0xa4
	// Line 564, Address: 0x1026a10, Func Offset: 0xb0
	// Func End, Address: 0x1026a24, Func Offset: 0xc4
}

// 
// Start address: 0x1026a30
void wpkama_disp(_anon0* pActwk)
{
	// Line 577, Address: 0x1026a30, Func Offset: 0
	// Line 578, Address: 0x1026a3c, Func Offset: 0xc
	// Line 579, Address: 0x1026a4c, Func Offset: 0x1c
	// Line 581, Address: 0x1026a60, Func Offset: 0x30
	// Line 582, Address: 0x1026a70, Func Offset: 0x40
	// Line 585, Address: 0x1026a78, Func Offset: 0x48
	// Line 586, Address: 0x1026a8c, Func Offset: 0x5c
	// Line 587, Address: 0x1026a98, Func Offset: 0x68
	// Func End, Address: 0x1026aa8, Func Offset: 0x78
}

// 
// Start address: 0x1026ab0
short wpkama_colicheck(_anon0* pActwk, _anon0* pPlaywk)
{
	unsigned char byFlg;
	short iD0;
	short iD1;
	// Line 600, Address: 0x1026ab0, Func Offset: 0
	// Line 604, Address: 0x1026acc, Func Offset: 0x1c
	// Line 606, Address: 0x1026ae0, Func Offset: 0x30
	// Line 607, Address: 0x1026af8, Func Offset: 0x48
	// Line 610, Address: 0x1026b04, Func Offset: 0x54
	// Line 611, Address: 0x1026b38, Func Offset: 0x88
	// Line 612, Address: 0x1026b44, Func Offset: 0x94
	// Line 613, Address: 0x1026b50, Func Offset: 0xa0
	// Line 614, Address: 0x1026b6c, Func Offset: 0xbc
	// Line 615, Address: 0x1026b78, Func Offset: 0xc8
	// Line 616, Address: 0x1026b94, Func Offset: 0xe4
	// Line 618, Address: 0x1026bac, Func Offset: 0xfc
	// Line 619, Address: 0x1026be0, Func Offset: 0x130
	// Line 620, Address: 0x1026bec, Func Offset: 0x13c
	// Line 621, Address: 0x1026bf8, Func Offset: 0x148
	// Line 622, Address: 0x1026c14, Func Offset: 0x164
	// Line 623, Address: 0x1026c20, Func Offset: 0x170
	// Line 624, Address: 0x1026c3c, Func Offset: 0x18c
	// Line 626, Address: 0x1026c54, Func Offset: 0x1a4
	// Line 627, Address: 0x1026c58, Func Offset: 0x1a8
	// Func End, Address: 0x1026c74, Func Offset: 0x1c4
}

// 
// Start address: 0x1026c80
void wpkama_reve(_anon0* pActwk, _anon0* pPlaywk)
{
	// Line 641, Address: 0x1026c80, Func Offset: 0
	// Line 642, Address: 0x1026c8c, Func Offset: 0xc
	// Line 643, Address: 0x1026c94, Func Offset: 0x14
	// Line 645, Address: 0x1026ca0, Func Offset: 0x20
	// Line 646, Address: 0x1026cb8, Func Offset: 0x38
	// Line 647, Address: 0x1026cc4, Func Offset: 0x44
	// Line 648, Address: 0x1026cd0, Func Offset: 0x50
	// Func End, Address: 0x1026cdc, Func Offset: 0x5c
}

