typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef int(*type_18)();

typedef char type_0[5];
typedef char type_1[3];
typedef char type_2[8];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef unsigned char type_5[8];
typedef short type_6[4];
typedef _anon1* type_7[2];
typedef short type_8[4];
typedef char type_9[6];
typedef unsigned char type_10[766];
typedef _anon0 type_11[128];
typedef _anon1* type_12[3];
typedef char type_13[8];
typedef _anon1* type_14[0];
typedef char* type_15[5];
typedef char* type_16[0];
typedef char type_17[3];
typedef char* type_19[2];
typedef char type_20[4];
typedef _anon1* type_21[2];
typedef char type_22[4];
typedef char type_23[5];
typedef _anon1* type_24[10];
typedef _anon7 type_25[20];
typedef _anon7 type_26[0];
typedef _anon1* type_27[7];
typedef char type_28[8];
typedef char type_29[22];
typedef _anon1* type_30[5];
typedef char type_31[4];
typedef char* type_32[2];
typedef char type_33[3];

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

_anon1 segg3_01;
_anon1 segg3_02;
_anon1 segg3_03;
_anon1 segg3_04;
_anon1 segg3_05;
_anon1 segg3_06;
_anon1 segg3_07;
_anon1 segg3_08;
_anon1 segg3_09;
_anon1 segg3_10;
_anon1 segg3_11;
_anon1 segg3_12;
_anon1 segg3_13;
_anon1 segg3_14;
_anon1 segg3_15;
_anon1 segg3_16;
_anon1 segg3_17;
_anon1 segg3_18;
_anon1 segg3_19;
_anon1 segg3_20;
_anon1 segg3_21;
_anon1 segg3_22;
_anon1 segg3_23;
_anon1 segg3_24;
_anon1 segg3_25;
_anon1 segg3_26;
_anon1 segg3_27;
_anon1 segg3_28;
_anon1 segg3_29;
_anon1 segg3_B1;
_anon1 segg3_B2;
_anon1 segg3_B3;
_anon1 segg3_B4;
_anon1 segg3_B5;
_anon1 segg3_B6;
_anon1 segg3_B7;
_anon1* egg3_pat[10];
_anon1* egg3dai_s_pat[2];
_anon1* egg3dai_l_pat[7];
_anon1* egg3haguruma_pat[3];
_anon1* egg3cannon_pat[5];
_anon1* egg3punchbom_pat[2];
char pchg0[8];
char pchg1[4];
char pchg2[3];
char pchg3[3];
char pchg4[4];
char* egg3_pchg[5];
char schg0[3];
char schg1[4];
char* egg3dai_s_pchg[2];
char hchg0[5];
char hchg1[5];
char* egg3haguruma_pchg[2];
char bomtbl_dai[22];
char bomtbl_cannon[8];
char bomtbl_ctrl[8];
char bomtbl_ctrl2[6];
_anon0 actwk[128];
short scra_vline;
unsigned char generate_flag;
unsigned char bossflag;
int(*sRandom)();
unsigned char flagwork[766];
_anon1* bakupat[0];
char* bakuchg[0];

void egg3dai_s(_anon0* actionwk);
void egg3dai_s_ini(_anon0* actionwk);
void egg3dai_s_chk(_anon0* actionwk);
void egg3dai_s_up(_anon0* actionwk);
void egg3dai_s_bom(_anon0* actionwk);
void jaba_s_chk(_anon0* actionwk);
void egg3flash(_anon0* actionwk);
void egg3dai_l(_anon0* actionwk);
void egg3dai_l_ini(_anon0* actionwk);
void egg3dai_l_demo(_anon0* actionwk);
short jabaopen_chk(_anon0* actionwk);
void egg3dai_l_chk(_anon0* actionwk);
void jaba_open(_anon0* actionwk);
void egg3dai_l_hit(_anon0* actionwk);
void hitact2(_anon0* actionwk);
void hitact3(_anon0* actionwk);
void egg3dai_l_hit2(_anon0* actionwk);
void jaba_last(_anon0* actionwk);
void egg3dai_l_up(_anon0* actionwk);
void egg3dai_l_bom(_anon0* actionwk);
void egg3dai_l_end(_anon0* actionwk);
void bom_set_dai(_anon0* actionwk);
void bom_set_cannon(_anon0* actionwk);
void bom_set_ctrl(_anon0* actionwk);
void bom_set_ctrl2(_anon0* actionwk);
void bom_set(_anon0* actionwk, char* tbl);
void egg3(_anon0* actionwk);
void egg3_ini(_anon0* actionwk);
void egg3_norm(_anon0* actionwk);
void egg3_tobi(_anon0* actionwk);
void egg3_esc1(_anon0* actionwk);
void egg3_esc2(_anon0* actionwk);
void egg3haguruma(_anon0* actionwk);
void egg3cannon(_anon0* actionwk);
void egg3cannon_ini(_anon0* actionwk);
void egg3cannon_01(_anon0* actionwk);
void egg3cannon_fire(_anon0* actionwk);
void punchbom(_anon0* actionwk);
void punchbom_ini(_anon0* actionwk);
void punchbom_mov(_anon0* actionwk);
void punchbom_hit(_anon0* actionwk);
void punchbom_kemini(_anon0* actionwk);
void punchbom_fireini(_anon0* actionwk);
void punchbom_bomset(_anon0* actionwk);
void punchbom_kem(_anon0* actionwk);
void punchbom_del(_anon0* actionwk);
void add_spd3(_anon0* actionwk);
void add_spd2(_anon0* actionwk);
void add_spd(_anon0* actionwk);

// 
// Start address: 0x102baa0
void egg3dai_s(_anon0* actionwk)
{
	// Line 344, Address: 0x102baa0, Func Offset: 0
	// Line 345, Address: 0x102baac, Func Offset: 0xc
	// Line 348, Address: 0x102baec, Func Offset: 0x4c
	// Line 350, Address: 0x102baf8, Func Offset: 0x58
	// Line 351, Address: 0x102bb04, Func Offset: 0x64
	// Line 353, Address: 0x102bb0c, Func Offset: 0x6c
	// Line 354, Address: 0x102bb18, Func Offset: 0x78
	// Line 356, Address: 0x102bb20, Func Offset: 0x80
	// Line 359, Address: 0x102bb2c, Func Offset: 0x8c
	// Func End, Address: 0x102bb3c, Func Offset: 0x9c
}

// 
// Start address: 0x102bb40
void egg3dai_s_ini(_anon0* actionwk)
{
	_anon0* a1;
	// Line 361, Address: 0x102bb40, Func Offset: 0
	// Line 364, Address: 0x102bb4c, Func Offset: 0xc
	// Line 365, Address: 0x102bb58, Func Offset: 0x18
	// Line 366, Address: 0x102bb64, Func Offset: 0x24
	// Line 367, Address: 0x102bb70, Func Offset: 0x30
	// Line 368, Address: 0x102bb7c, Func Offset: 0x3c
	// Line 369, Address: 0x102bb88, Func Offset: 0x48
	// Line 370, Address: 0x102bb94, Func Offset: 0x54
	// Line 371, Address: 0x102bba4, Func Offset: 0x64
	// Line 372, Address: 0x102bbb4, Func Offset: 0x74
	// Line 373, Address: 0x102bbd8, Func Offset: 0x98
	// Line 374, Address: 0x102bbe4, Func Offset: 0xa4
	// Line 376, Address: 0x102bbf0, Func Offset: 0xb0
	// Line 377, Address: 0x102bc04, Func Offset: 0xc4
	// Line 378, Address: 0x102bc38, Func Offset: 0xf8
	// Line 379, Address: 0x102bc44, Func Offset: 0x104
	// Line 380, Address: 0x102bc68, Func Offset: 0x128
	// Line 381, Address: 0x102bc78, Func Offset: 0x138
	// Line 382, Address: 0x102bcac, Func Offset: 0x16c
	// Func End, Address: 0x102bcbc, Func Offset: 0x17c
}

// 
// Start address: 0x102bcc0
void egg3dai_s_chk(_anon0* actionwk)
{
	// Line 384, Address: 0x102bcc0, Func Offset: 0
	// Line 385, Address: 0x102bccc, Func Offset: 0xc
	// Line 387, Address: 0x102bcdc, Func Offset: 0x1c
	// Line 388, Address: 0x102bce8, Func Offset: 0x28
	// Line 389, Address: 0x102bcf4, Func Offset: 0x34
	// Line 390, Address: 0x102bd04, Func Offset: 0x44
	// Line 391, Address: 0x102bd10, Func Offset: 0x50
	// Line 393, Address: 0x102bd18, Func Offset: 0x58
	// Line 394, Address: 0x102bd24, Func Offset: 0x64
	// Func End, Address: 0x102bd34, Func Offset: 0x74
}

// 
// Start address: 0x102bd40
void egg3dai_s_up(_anon0* actionwk)
{
	// Line 396, Address: 0x102bd40, Func Offset: 0
	// Line 397, Address: 0x102bd4c, Func Offset: 0xc
	// Line 398, Address: 0x102bd58, Func Offset: 0x18
	// Line 399, Address: 0x102bd68, Func Offset: 0x28
	// Line 401, Address: 0x102bd80, Func Offset: 0x40
	// Line 402, Address: 0x102bd88, Func Offset: 0x48
	// Line 405, Address: 0x102bd9c, Func Offset: 0x5c
	// Line 406, Address: 0x102bdb4, Func Offset: 0x74
	// Line 408, Address: 0x102bde0, Func Offset: 0xa0
	// Line 409, Address: 0x102bdf0, Func Offset: 0xb0
	// Line 410, Address: 0x102be00, Func Offset: 0xc0
	// Line 412, Address: 0x102be0c, Func Offset: 0xcc
	// Line 413, Address: 0x102be18, Func Offset: 0xd8
	// Func End, Address: 0x102be28, Func Offset: 0xe8
}

// 
// Start address: 0x102be30
void egg3dai_s_bom(_anon0* actionwk)
{
	// Line 415, Address: 0x102be30, Func Offset: 0
	// Line 416, Address: 0x102be3c, Func Offset: 0xc
	// Line 417, Address: 0x102be48, Func Offset: 0x18
	// Line 419, Address: 0x102be64, Func Offset: 0x34
	// Line 420, Address: 0x102be70, Func Offset: 0x40
	// Line 423, Address: 0x102be7c, Func Offset: 0x4c
	// Line 425, Address: 0x102be94, Func Offset: 0x64
	// Line 426, Address: 0x102bec0, Func Offset: 0x90
	// Line 428, Address: 0x102becc, Func Offset: 0x9c
	// Func End, Address: 0x102bedc, Func Offset: 0xac
}

// 
// Start address: 0x102bee0
void jaba_s_chk(_anon0* actionwk)
{
	_anon0* a1;
	// Line 431, Address: 0x102bee0, Func Offset: 0
	// Line 434, Address: 0x102beec, Func Offset: 0xc
	// Line 436, Address: 0x102bf04, Func Offset: 0x24
	// Line 437, Address: 0x102bf10, Func Offset: 0x30
	// Line 438, Address: 0x102bf50, Func Offset: 0x70
	// Line 439, Address: 0x102bf60, Func Offset: 0x80
	// Line 441, Address: 0x102bf6c, Func Offset: 0x8c
	// Line 442, Address: 0x102bf80, Func Offset: 0xa0
	// Line 443, Address: 0x102bf8c, Func Offset: 0xac
	// Line 444, Address: 0x102bf98, Func Offset: 0xb8
	// Line 445, Address: 0x102bfa4, Func Offset: 0xc4
	// Line 446, Address: 0x102bfb0, Func Offset: 0xd0
	// Func End, Address: 0x102bfc0, Func Offset: 0xe0
}

// 
// Start address: 0x102bfc0
void egg3flash(_anon0* actionwk)
{
	int d0;
	// Line 452, Address: 0x102bfc0, Func Offset: 0
	// Line 455, Address: 0x102bfd0, Func Offset: 0x10
	// Line 459, Address: 0x102bfe4, Func Offset: 0x24
	// Line 461, Address: 0x102c000, Func Offset: 0x40
	// Line 462, Address: 0x102c004, Func Offset: 0x44
	// Line 463, Address: 0x102c014, Func Offset: 0x54
	// Line 466, Address: 0x102c01c, Func Offset: 0x5c
	// Line 467, Address: 0x102c020, Func Offset: 0x60
	// Line 470, Address: 0x102c030, Func Offset: 0x70
	// Line 471, Address: 0x102c040, Func Offset: 0x80
	// Line 472, Address: 0x102c04c, Func Offset: 0x8c
	// Func End, Address: 0x102c060, Func Offset: 0xa0
}

// 
// Start address: 0x102c060
void egg3dai_l(_anon0* actionwk)
{
	// Line 474, Address: 0x102c060, Func Offset: 0
	// Line 475, Address: 0x102c06c, Func Offset: 0xc
	// Line 478, Address: 0x102c07c, Func Offset: 0x1c
	// Line 480, Address: 0x102c098, Func Offset: 0x38
	// Line 481, Address: 0x102c0ac, Func Offset: 0x4c
	// Line 483, Address: 0x102c0c8, Func Offset: 0x68
	// Line 487, Address: 0x102c0d4, Func Offset: 0x74
	// Line 490, Address: 0x102c12c, Func Offset: 0xcc
	// Line 491, Address: 0x102c138, Func Offset: 0xd8
	// Line 493, Address: 0x102c140, Func Offset: 0xe0
	// Line 494, Address: 0x102c14c, Func Offset: 0xec
	// Line 496, Address: 0x102c154, Func Offset: 0xf4
	// Line 497, Address: 0x102c160, Func Offset: 0x100
	// Line 499, Address: 0x102c168, Func Offset: 0x108
	// Line 500, Address: 0x102c174, Func Offset: 0x114
	// Line 502, Address: 0x102c17c, Func Offset: 0x11c
	// Line 503, Address: 0x102c188, Func Offset: 0x128
	// Line 505, Address: 0x102c190, Func Offset: 0x130
	// Line 508, Address: 0x102c19c, Func Offset: 0x13c
	// Line 509, Address: 0x102c1b4, Func Offset: 0x154
	// Line 510, Address: 0x102c1c0, Func Offset: 0x160
	// Line 511, Address: 0x102c1cc, Func Offset: 0x16c
	// Func End, Address: 0x102c1dc, Func Offset: 0x17c
}

// 
// Start address: 0x102c1e0
void egg3dai_l_ini(_anon0* actionwk)
{
	_anon0* a1;
	// Line 513, Address: 0x102c1e0, Func Offset: 0
	// Line 516, Address: 0x102c1ec, Func Offset: 0xc
	// Line 517, Address: 0x102c1f8, Func Offset: 0x18
	// Line 518, Address: 0x102c204, Func Offset: 0x24
	// Line 519, Address: 0x102c210, Func Offset: 0x30
	// Line 520, Address: 0x102c21c, Func Offset: 0x3c
	// Line 521, Address: 0x102c228, Func Offset: 0x48
	// Line 522, Address: 0x102c234, Func Offset: 0x54
	// Line 523, Address: 0x102c240, Func Offset: 0x60
	// Line 526, Address: 0x102c250, Func Offset: 0x70
	// Line 527, Address: 0x102c268, Func Offset: 0x88
	// Line 528, Address: 0x102c29c, Func Offset: 0xbc
	// Line 529, Address: 0x102c2d0, Func Offset: 0xf0
	// Line 530, Address: 0x102c2dc, Func Offset: 0xfc
	// Line 531, Address: 0x102c2ec, Func Offset: 0x10c
	// Line 533, Address: 0x102c310, Func Offset: 0x130
	// Line 534, Address: 0x102c328, Func Offset: 0x148
	// Line 535, Address: 0x102c35c, Func Offset: 0x17c
	// Line 536, Address: 0x102c390, Func Offset: 0x1b0
	// Line 537, Address: 0x102c39c, Func Offset: 0x1bc
	// Line 538, Address: 0x102c3c0, Func Offset: 0x1e0
	// Line 540, Address: 0x102c3d0, Func Offset: 0x1f0
	// Line 541, Address: 0x102c3e8, Func Offset: 0x208
	// Line 542, Address: 0x102c41c, Func Offset: 0x23c
	// Line 543, Address: 0x102c428, Func Offset: 0x248
	// Line 544, Address: 0x102c438, Func Offset: 0x258
	// Func End, Address: 0x102c448, Func Offset: 0x268
}

// 
// Start address: 0x102c450
void egg3dai_l_demo(_anon0* actionwk)
{
	_anon0* a1;
	short d0;
	short d1;
	short d2;
	// Line 546, Address: 0x102c450, Func Offset: 0
	// Line 550, Address: 0x102c468, Func Offset: 0x18
	// Line 551, Address: 0x102c48c, Func Offset: 0x3c
	// Line 553, Address: 0x102c494, Func Offset: 0x44
	// Line 554, Address: 0x102c49c, Func Offset: 0x4c
	// Line 555, Address: 0x102c4a8, Func Offset: 0x58
	// Line 556, Address: 0x102c4b4, Func Offset: 0x64
	// Line 557, Address: 0x102c4c0, Func Offset: 0x70
	// Line 558, Address: 0x102c4dc, Func Offset: 0x8c
	// Line 561, Address: 0x102c4f8, Func Offset: 0xa8
	// Line 562, Address: 0x102c518, Func Offset: 0xc8
	// Line 564, Address: 0x102c530, Func Offset: 0xe0
	// Line 565, Address: 0x102c540, Func Offset: 0xf0
	// Line 566, Address: 0x102c548, Func Offset: 0xf8
	// Line 567, Address: 0x102c550, Func Offset: 0x100
	// Line 570, Address: 0x102c558, Func Offset: 0x108
	// Line 571, Address: 0x102c560, Func Offset: 0x110
	// Line 573, Address: 0x102c568, Func Offset: 0x118
	// Line 574, Address: 0x102c570, Func Offset: 0x120
	// Line 575, Address: 0x102c580, Func Offset: 0x130
	// Line 576, Address: 0x102c58c, Func Offset: 0x13c
	// Line 577, Address: 0x102c59c, Func Offset: 0x14c
	// Line 578, Address: 0x102c5c0, Func Offset: 0x170
	// Line 579, Address: 0x102c5cc, Func Offset: 0x17c
	// Line 581, Address: 0x102c5d8, Func Offset: 0x188
	// Line 582, Address: 0x102c5fc, Func Offset: 0x1ac
	// Line 583, Address: 0x102c600, Func Offset: 0x1b0
	// Func End, Address: 0x102c61c, Func Offset: 0x1cc
}

// 
// Start address: 0x102c620
short jabaopen_chk(_anon0* actionwk)
{
	short jabaopen_tbl[4];
	short d0;
	short d1;
	// Line 592, Address: 0x102c620, Func Offset: 0
	// Line 593, Address: 0x102c630, Func Offset: 0x10
	// Line 596, Address: 0x102c65c, Func Offset: 0x3c
	// Line 597, Address: 0x102c680, Func Offset: 0x60
	// Line 599, Address: 0x102c694, Func Offset: 0x74
	// Line 601, Address: 0x102c6b0, Func Offset: 0x90
	// Line 602, Address: 0x102c6c0, Func Offset: 0xa0
	// Line 603, Address: 0x102c6e8, Func Offset: 0xc8
	// Line 605, Address: 0x102c708, Func Offset: 0xe8
	// Line 606, Address: 0x102c718, Func Offset: 0xf8
	// Line 607, Address: 0x102c738, Func Offset: 0x118
	// Line 609, Address: 0x102c758, Func Offset: 0x138
	// Line 610, Address: 0x102c75c, Func Offset: 0x13c
	// Func End, Address: 0x102c770, Func Offset: 0x150
}

// 
// Start address: 0x102c770
void egg3dai_l_chk(_anon0* actionwk)
{
	// Line 612, Address: 0x102c770, Func Offset: 0
	// Line 613, Address: 0x102c77c, Func Offset: 0xc
	// Line 615, Address: 0x102c7a4, Func Offset: 0x34
	// Line 616, Address: 0x102c7c4, Func Offset: 0x54
	// Func End, Address: 0x102c7d4, Func Offset: 0x64
}

// 
// Start address: 0x102c7e0
void jaba_open(_anon0* actionwk)
{
	_anon0* a1;
	short jabapos_tbl[4];
	// Line 618, Address: 0x102c7e0, Func Offset: 0
	// Line 620, Address: 0x102c7ec, Func Offset: 0xc
	// Line 623, Address: 0x102c818, Func Offset: 0x38
	// Line 624, Address: 0x102c82c, Func Offset: 0x4c
	// Line 625, Address: 0x102c838, Func Offset: 0x58
	// Line 626, Address: 0x102c844, Func Offset: 0x64
	// Line 627, Address: 0x102c86c, Func Offset: 0x8c
	// Func End, Address: 0x102c87c, Func Offset: 0x9c
}

// 
// Start address: 0x102c880
void egg3dai_l_hit(_anon0* actionwk)
{
	// Line 629, Address: 0x102c880, Func Offset: 0
	// Line 630, Address: 0x102c88c, Func Offset: 0xc
	// Line 635, Address: 0x102c8c0, Func Offset: 0x40
	// Line 636, Address: 0x102c8cc, Func Offset: 0x4c
	// Line 638, Address: 0x102c8d4, Func Offset: 0x54
	// Line 641, Address: 0x102c8e0, Func Offset: 0x60
	// Line 642, Address: 0x102c8f0, Func Offset: 0x70
	// Func End, Address: 0x102c900, Func Offset: 0x80
}

// 
// Start address: 0x102c900
void hitact2(_anon0* actionwk)
{
	_anon0* a1;
	// Line 651, Address: 0x102c900, Func Offset: 0
	// Line 655, Address: 0x102c910, Func Offset: 0x10
	// Line 656, Address: 0x102c934, Func Offset: 0x34
	// Line 657, Address: 0x102c93c, Func Offset: 0x3c
	// Line 658, Address: 0x102c944, Func Offset: 0x44
	// Line 659, Address: 0x102c950, Func Offset: 0x50
	// Line 660, Address: 0x102c95c, Func Offset: 0x5c
	// Func End, Address: 0x102c970, Func Offset: 0x70
}

// 
// Start address: 0x102c970
void hitact3(_anon0* actionwk)
{
	_anon0* a1;
	// Line 662, Address: 0x102c970, Func Offset: 0
	// Line 665, Address: 0x102c980, Func Offset: 0x10
	// Line 667, Address: 0x102c98c, Func Offset: 0x1c
	// Line 668, Address: 0x102c9b0, Func Offset: 0x40
	// Line 669, Address: 0x102c9b8, Func Offset: 0x48
	// Line 670, Address: 0x102c9bc, Func Offset: 0x4c
	// Line 672, Address: 0x102c9dc, Func Offset: 0x6c
	// Line 673, Address: 0x102c9e8, Func Offset: 0x78
	// Line 674, Address: 0x102c9f0, Func Offset: 0x80
	// Line 675, Address: 0x102c9f8, Func Offset: 0x88
	// Line 676, Address: 0x102ca04, Func Offset: 0x94
	// Func End, Address: 0x102ca18, Func Offset: 0xa8
}

// 
// Start address: 0x102ca20
void egg3dai_l_hit2(_anon0* actionwk)
{
	// Line 678, Address: 0x102ca20, Func Offset: 0
	// Line 679, Address: 0x102ca2c, Func Offset: 0xc
	// Line 680, Address: 0x102ca38, Func Offset: 0x18
	// Line 681, Address: 0x102ca40, Func Offset: 0x20
	// Line 682, Address: 0x102ca4c, Func Offset: 0x2c
	// Line 683, Address: 0x102ca58, Func Offset: 0x38
	// Line 685, Address: 0x102ca70, Func Offset: 0x50
	// Line 686, Address: 0x102ca7c, Func Offset: 0x5c
	// Line 688, Address: 0x102ca84, Func Offset: 0x64
	// Line 689, Address: 0x102ca90, Func Offset: 0x70
	// Line 690, Address: 0x102ca98, Func Offset: 0x78
	// Line 691, Address: 0x102cabc, Func Offset: 0x9c
	// Line 692, Address: 0x102cae0, Func Offset: 0xc0
	// Line 694, Address: 0x102caec, Func Offset: 0xcc
	// Line 695, Address: 0x102caf8, Func Offset: 0xd8
	// Func End, Address: 0x102cb08, Func Offset: 0xe8
}

// 
// Start address: 0x102cb10
void jaba_last(_anon0* actionwk)
{
	// Line 697, Address: 0x102cb10, Func Offset: 0
	// Line 698, Address: 0x102cb1c, Func Offset: 0xc
	// Line 699, Address: 0x102cb34, Func Offset: 0x24
	// Line 700, Address: 0x102cb48, Func Offset: 0x38
	// Line 701, Address: 0x102cb54, Func Offset: 0x44
	// Line 702, Address: 0x102cb60, Func Offset: 0x50
	// Func End, Address: 0x102cb70, Func Offset: 0x60
}

// 
// Start address: 0x102cb70
void egg3dai_l_up(_anon0* actionwk)
{
	// Line 704, Address: 0x102cb70, Func Offset: 0
	// Line 705, Address: 0x102cb7c, Func Offset: 0xc
	// Line 708, Address: 0x102cbb4, Func Offset: 0x44
	// Line 709, Address: 0x102cbc0, Func Offset: 0x50
	// Line 711, Address: 0x102cbc8, Func Offset: 0x58
	// Line 712, Address: 0x102cbd4, Func Offset: 0x64
	// Line 714, Address: 0x102cbdc, Func Offset: 0x6c
	// Line 718, Address: 0x102cbe8, Func Offset: 0x78
	// Line 719, Address: 0x102cbf8, Func Offset: 0x88
	// Line 720, Address: 0x102cc04, Func Offset: 0x94
	// Line 721, Address: 0x102cc1c, Func Offset: 0xac
	// Line 723, Address: 0x102cc48, Func Offset: 0xd8
	// Line 724, Address: 0x102cc58, Func Offset: 0xe8
	// Line 725, Address: 0x102cc68, Func Offset: 0xf8
	// Line 727, Address: 0x102cc80, Func Offset: 0x110
	// Line 728, Address: 0x102cc88, Func Offset: 0x118
	// Line 729, Address: 0x102cc94, Func Offset: 0x124
	// Line 730, Address: 0x102cca0, Func Offset: 0x130
	// Line 731, Address: 0x102ccc4, Func Offset: 0x154
	// Line 734, Address: 0x102cccc, Func Offset: 0x15c
	// Line 735, Address: 0x102ccd4, Func Offset: 0x164
	// Line 736, Address: 0x102ccdc, Func Offset: 0x16c
	// Line 737, Address: 0x102cce8, Func Offset: 0x178
	// Line 739, Address: 0x102cd0c, Func Offset: 0x19c
	// Func End, Address: 0x102cd1c, Func Offset: 0x1ac
}

// 
// Start address: 0x102cd20
void egg3dai_l_bom(_anon0* actionwk)
{
	// Line 741, Address: 0x102cd20, Func Offset: 0
	// Line 742, Address: 0x102cd2c, Func Offset: 0xc
	// Line 743, Address: 0x102cd38, Func Offset: 0x18
	// Line 744, Address: 0x102cd44, Func Offset: 0x24
	// Line 745, Address: 0x102cd54, Func Offset: 0x34
	// Line 747, Address: 0x102cd6c, Func Offset: 0x4c
	// Line 750, Address: 0x102cd78, Func Offset: 0x58
	// Line 751, Address: 0x102cd90, Func Offset: 0x70
	// Line 752, Address: 0x102cdbc, Func Offset: 0x9c
	// Line 753, Address: 0x102cdc8, Func Offset: 0xa8
	// Func End, Address: 0x102cdd8, Func Offset: 0xb8
}

// 
// Start address: 0x102cde0
void egg3dai_l_end(_anon0* actionwk)
{
	_anon0* a1;
	// Line 755, Address: 0x102cde0, Func Offset: 0
	// Line 758, Address: 0x102cdf0, Func Offset: 0x10
	// Line 759, Address: 0x102cdfc, Func Offset: 0x1c
	// Line 760, Address: 0x102ce08, Func Offset: 0x28
	// Line 761, Address: 0x102ce20, Func Offset: 0x40
	// Line 763, Address: 0x102ce38, Func Offset: 0x58
	// Line 764, Address: 0x102ce5c, Func Offset: 0x7c
	// Line 765, Address: 0x102ce68, Func Offset: 0x88
	// Line 767, Address: 0x102ce74, Func Offset: 0x94
	// Func End, Address: 0x102ce88, Func Offset: 0xa8
}

// 
// Start address: 0x102ce90
void bom_set_dai(_anon0* actionwk)
{
	_anon0* a1;
	// Line 769, Address: 0x102ce90, Func Offset: 0
	// Line 772, Address: 0x102cea0, Func Offset: 0x10
	// Line 773, Address: 0x102ceb0, Func Offset: 0x20
	// Line 775, Address: 0x102cecc, Func Offset: 0x3c
	// Line 776, Address: 0x102cee8, Func Offset: 0x58
	// Line 777, Address: 0x102cefc, Func Offset: 0x6c
	// Line 780, Address: 0x102cf04, Func Offset: 0x74
	// Line 781, Address: 0x102cf14, Func Offset: 0x84
	// Line 782, Address: 0x102cf38, Func Offset: 0xa8
	// Line 784, Address: 0x102cf44, Func Offset: 0xb4
	// Func End, Address: 0x102cf58, Func Offset: 0xc8
}

// 
// Start address: 0x102cf60
void bom_set_cannon(_anon0* actionwk)
{
	// Line 786, Address: 0x102cf60, Func Offset: 0
	// Line 787, Address: 0x102cf6c, Func Offset: 0xc
	// Line 788, Address: 0x102cf7c, Func Offset: 0x1c
	// Line 789, Address: 0x102cf98, Func Offset: 0x38
	// Line 791, Address: 0x102cfac, Func Offset: 0x4c
	// Func End, Address: 0x102cfbc, Func Offset: 0x5c
}

// 
// Start address: 0x102cfc0
void bom_set_ctrl(_anon0* actionwk)
{
	// Line 793, Address: 0x102cfc0, Func Offset: 0
	// Line 794, Address: 0x102cfcc, Func Offset: 0xc
	// Line 795, Address: 0x102cfdc, Func Offset: 0x1c
	// Line 796, Address: 0x102cff8, Func Offset: 0x38
	// Line 798, Address: 0x102d00c, Func Offset: 0x4c
	// Func End, Address: 0x102d01c, Func Offset: 0x5c
}

// 
// Start address: 0x102d020
void bom_set_ctrl2(_anon0* actionwk)
{
	// Line 800, Address: 0x102d020, Func Offset: 0
	// Line 801, Address: 0x102d02c, Func Offset: 0xc
	// Line 802, Address: 0x102d03c, Func Offset: 0x1c
	// Line 803, Address: 0x102d058, Func Offset: 0x38
	// Line 804, Address: 0x102d06c, Func Offset: 0x4c
	// Func End, Address: 0x102d07c, Func Offset: 0x5c
}

// 
// Start address: 0x102d080
void bom_set(_anon0* actionwk, char* tbl)
{
	short d0;
	short d2;
	char* a2;
	_anon0* a1;
	// Line 806, Address: 0x102d080, Func Offset: 0
	// Line 811, Address: 0x102d09c, Func Offset: 0x1c
	// Line 812, Address: 0x102d0a0, Func Offset: 0x20
	// Line 813, Address: 0x102d0b0, Func Offset: 0x30
	// Line 814, Address: 0x102d0c4, Func Offset: 0x44
	// Line 815, Address: 0x102d0f0, Func Offset: 0x70
	// Line 816, Address: 0x102d10c, Func Offset: 0x8c
	// Line 817, Address: 0x102d134, Func Offset: 0xb4
	// Line 818, Address: 0x102d140, Func Offset: 0xc0
	// Line 819, Address: 0x102d154, Func Offset: 0xd4
	// Line 820, Address: 0x102d19c, Func Offset: 0x11c
	// Line 829, Address: 0x102d1e4, Func Offset: 0x164
	// Line 830, Address: 0x102d1f0, Func Offset: 0x170
	// Line 831, Address: 0x102d1fc, Func Offset: 0x17c
	// Line 832, Address: 0x102d208, Func Offset: 0x188
	// Func End, Address: 0x102d224, Func Offset: 0x1a4
}

// 
// Start address: 0x102d230
void egg3(_anon0* actionwk)
{
	// Line 834, Address: 0x102d230, Func Offset: 0
	// Line 835, Address: 0x102d23c, Func Offset: 0xc
	// Line 838, Address: 0x102d288, Func Offset: 0x58
	// Line 840, Address: 0x102d294, Func Offset: 0x64
	// Line 841, Address: 0x102d2a0, Func Offset: 0x70
	// Line 843, Address: 0x102d2a8, Func Offset: 0x78
	// Line 844, Address: 0x102d2b4, Func Offset: 0x84
	// Line 846, Address: 0x102d2bc, Func Offset: 0x8c
	// Line 847, Address: 0x102d2c8, Func Offset: 0x98
	// Line 849, Address: 0x102d2d0, Func Offset: 0xa0
	// Line 852, Address: 0x102d2dc, Func Offset: 0xac
	// Line 853, Address: 0x102d2fc, Func Offset: 0xcc
	// Line 854, Address: 0x102d310, Func Offset: 0xe0
	// Line 855, Address: 0x102d31c, Func Offset: 0xec
	// Func End, Address: 0x102d32c, Func Offset: 0xfc
}

// 
// Start address: 0x102d330
void egg3_ini(_anon0* actionwk)
{
	// Line 857, Address: 0x102d330, Func Offset: 0
	// Line 858, Address: 0x102d338, Func Offset: 0x8
	// Line 859, Address: 0x102d344, Func Offset: 0x14
	// Line 860, Address: 0x102d350, Func Offset: 0x20
	// Line 861, Address: 0x102d35c, Func Offset: 0x2c
	// Line 862, Address: 0x102d368, Func Offset: 0x38
	// Line 863, Address: 0x102d374, Func Offset: 0x44
	// Line 864, Address: 0x102d380, Func Offset: 0x50
	// Line 865, Address: 0x102d390, Func Offset: 0x60
	// Line 866, Address: 0x102d3b4, Func Offset: 0x84
	// Func End, Address: 0x102d3c0, Func Offset: 0x90
}

// 
// Start address: 0x102d3c0
void egg3_norm(_anon0* actionwk)
{
	_anon0* a1;
	// Line 868, Address: 0x102d3c0, Func Offset: 0
	// Line 871, Address: 0x102d3cc, Func Offset: 0xc
	// Line 872, Address: 0x102d3f0, Func Offset: 0x30
	// Line 873, Address: 0x102d40c, Func Offset: 0x4c
	// Func End, Address: 0x102d41c, Func Offset: 0x5c
}

// 
// Start address: 0x102d420
void egg3_tobi(_anon0* actionwk)
{
	_anon0* a1;
	// Line 875, Address: 0x102d420, Func Offset: 0
	// Line 878, Address: 0x102d42c, Func Offset: 0xc
	// Line 879, Address: 0x102d444, Func Offset: 0x24
	// Line 880, Address: 0x102d454, Func Offset: 0x34
	// Line 881, Address: 0x102d478, Func Offset: 0x58
	// Line 883, Address: 0x102d4a0, Func Offset: 0x80
	// Line 884, Address: 0x102d4ac, Func Offset: 0x8c
	// Line 885, Address: 0x102d4b8, Func Offset: 0x98
	// Line 887, Address: 0x102d4cc, Func Offset: 0xac
	// Line 888, Address: 0x102d4d8, Func Offset: 0xb8
	// Line 891, Address: 0x102d4e0, Func Offset: 0xc0
	// Line 892, Address: 0x102d4e8, Func Offset: 0xc8
	// Line 893, Address: 0x102d4f4, Func Offset: 0xd4
	// Line 895, Address: 0x102d500, Func Offset: 0xe0
	// Func End, Address: 0x102d510, Func Offset: 0xf0
}

// 
// Start address: 0x102d510
void egg3_esc1(_anon0* actionwk)
{
	// Line 897, Address: 0x102d510, Func Offset: 0
	// Line 898, Address: 0x102d518, Func Offset: 0x8
	// Line 899, Address: 0x102d52c, Func Offset: 0x1c
	// Line 901, Address: 0x102d558, Func Offset: 0x48
	// Line 902, Address: 0x102d564, Func Offset: 0x54
	// Line 903, Address: 0x102d570, Func Offset: 0x60
	// Line 904, Address: 0x102d580, Func Offset: 0x70
	// Line 905, Address: 0x102d58c, Func Offset: 0x7c
	// Line 907, Address: 0x102d5b0, Func Offset: 0xa0
	// Func End, Address: 0x102d5bc, Func Offset: 0xac
}

// 
// Start address: 0x102d5c0
void egg3_esc2(_anon0* actionwk)
{
	// Line 909, Address: 0x102d5c0, Func Offset: 0
	// Line 910, Address: 0x102d5cc, Func Offset: 0xc
	// Line 911, Address: 0x102d5e0, Func Offset: 0x20
	// Line 913, Address: 0x102d60c, Func Offset: 0x4c
	// Line 914, Address: 0x102d618, Func Offset: 0x58
	// Func End, Address: 0x102d628, Func Offset: 0x68
}

// 
// Start address: 0x102d630
void egg3haguruma(_anon0* actionwk)
{
	_anon0* a1;
	// Line 916, Address: 0x102d630, Func Offset: 0
	// Line 919, Address: 0x102d640, Func Offset: 0x10
	// Line 922, Address: 0x102d654, Func Offset: 0x24
	// Line 923, Address: 0x102d664, Func Offset: 0x34
	// Line 924, Address: 0x102d670, Func Offset: 0x40
	// Line 925, Address: 0x102d67c, Func Offset: 0x4c
	// Line 926, Address: 0x102d688, Func Offset: 0x58
	// Line 927, Address: 0x102d694, Func Offset: 0x64
	// Line 928, Address: 0x102d6a0, Func Offset: 0x70
	// Line 931, Address: 0x102d6b0, Func Offset: 0x80
	// Line 932, Address: 0x102d6c8, Func Offset: 0x98
	// Line 933, Address: 0x102d6ec, Func Offset: 0xbc
	// Line 934, Address: 0x102d6f8, Func Offset: 0xc8
	// Line 936, Address: 0x102d70c, Func Offset: 0xdc
	// Line 938, Address: 0x102d720, Func Offset: 0xf0
	// Line 939, Address: 0x102d72c, Func Offset: 0xfc
	// Func End, Address: 0x102d740, Func Offset: 0x110
}

// 
// Start address: 0x102d740
void egg3cannon(_anon0* actionwk)
{
	_anon0* a2;
	// Line 941, Address: 0x102d740, Func Offset: 0
	// Line 944, Address: 0x102d750, Func Offset: 0x10
	// Line 945, Address: 0x102d774, Func Offset: 0x34
	// Line 946, Address: 0x102d794, Func Offset: 0x54
	// Line 948, Address: 0x102d7a0, Func Offset: 0x60
	// Line 949, Address: 0x102d7ac, Func Offset: 0x6c
	// Line 952, Address: 0x102d7b4, Func Offset: 0x74
	// Line 955, Address: 0x102d7e8, Func Offset: 0xa8
	// Line 956, Address: 0x102d7f4, Func Offset: 0xb4
	// Line 958, Address: 0x102d7fc, Func Offset: 0xbc
	// Line 959, Address: 0x102d808, Func Offset: 0xc8
	// Line 961, Address: 0x102d810, Func Offset: 0xd0
	// Line 964, Address: 0x102d81c, Func Offset: 0xdc
	// Line 965, Address: 0x102d828, Func Offset: 0xe8
	// Func End, Address: 0x102d83c, Func Offset: 0xfc
}

// 
// Start address: 0x102d840
void egg3cannon_ini(_anon0* actionwk)
{
	// Line 967, Address: 0x102d840, Func Offset: 0
	// Line 968, Address: 0x102d848, Func Offset: 0x8
	// Line 969, Address: 0x102d858, Func Offset: 0x18
	// Line 970, Address: 0x102d864, Func Offset: 0x24
	// Line 971, Address: 0x102d870, Func Offset: 0x30
	// Line 972, Address: 0x102d87c, Func Offset: 0x3c
	// Line 973, Address: 0x102d888, Func Offset: 0x48
	// Line 974, Address: 0x102d894, Func Offset: 0x54
	// Line 975, Address: 0x102d8a4, Func Offset: 0x64
	// Func End, Address: 0x102d8b0, Func Offset: 0x70
}

// 
// Start address: 0x102d8b0
void egg3cannon_01(_anon0* actionwk)
{
	_anon0* a1;
	_anon0* a2;
	int d0;
	short d1;
	// Line 977, Address: 0x102d8b0, Func Offset: 0
	// Line 982, Address: 0x102d8c8, Func Offset: 0x18
	// Line 983, Address: 0x102d8ec, Func Offset: 0x3c
	// Line 984, Address: 0x102d908, Func Offset: 0x58
	// Line 985, Address: 0x102d914, Func Offset: 0x64
	// Line 986, Address: 0x102d924, Func Offset: 0x74
	// Line 989, Address: 0x102d93c, Func Offset: 0x8c
	// Line 990, Address: 0x102d944, Func Offset: 0x94
	// Line 992, Address: 0x102d950, Func Offset: 0xa0
	// Line 993, Address: 0x102d964, Func Offset: 0xb4
	// Line 994, Address: 0x102d970, Func Offset: 0xc0
	// Line 995, Address: 0x102d980, Func Offset: 0xd0
	// Line 996, Address: 0x102d9a4, Func Offset: 0xf4
	// Line 997, Address: 0x102d9bc, Func Offset: 0x10c
	// Line 998, Address: 0x102d9dc, Func Offset: 0x12c
	// Line 999, Address: 0x102d9e8, Func Offset: 0x138
	// Line 1001, Address: 0x102d9fc, Func Offset: 0x14c
	// Line 1002, Address: 0x102da00, Func Offset: 0x150
	// Line 1004, Address: 0x102da1c, Func Offset: 0x16c
	// Line 1005, Address: 0x102da2c, Func Offset: 0x17c
	// Line 1006, Address: 0x102da3c, Func Offset: 0x18c
	// Line 1008, Address: 0x102da48, Func Offset: 0x198
	// Line 1009, Address: 0x102da50, Func Offset: 0x1a0
	// Line 1011, Address: 0x102da58, Func Offset: 0x1a8
	// Func End, Address: 0x102da74, Func Offset: 0x1c4
}

// 
// Start address: 0x102da80
void egg3cannon_fire(_anon0* actionwk)
{
	unsigned char cannon_chg_tbl[8];
	unsigned char d0;
	// Line 1013, Address: 0x102da80, Func Offset: 0
	// Line 1014, Address: 0x102da8c, Func Offset: 0xc
	// Line 1018, Address: 0x102dac0, Func Offset: 0x40
	// Line 1019, Address: 0x102dad8, Func Offset: 0x58
	// Line 1020, Address: 0x102daf8, Func Offset: 0x78
	// Line 1021, Address: 0x102db04, Func Offset: 0x84
	// Line 1022, Address: 0x102db0c, Func Offset: 0x8c
	// Line 1024, Address: 0x102db1c, Func Offset: 0x9c
	// Line 1025, Address: 0x102db28, Func Offset: 0xa8
	// Line 1027, Address: 0x102db30, Func Offset: 0xb0
	// Line 1029, Address: 0x102db40, Func Offset: 0xc0
	// Line 1030, Address: 0x102db44, Func Offset: 0xc4
	// Line 1031, Address: 0x102db50, Func Offset: 0xd0
	// Line 1033, Address: 0x102db58, Func Offset: 0xd8
	// Line 1035, Address: 0x102db64, Func Offset: 0xe4
	// Line 1036, Address: 0x102db6c, Func Offset: 0xec
	// Line 1037, Address: 0x102db80, Func Offset: 0x100
	// Func End, Address: 0x102db90, Func Offset: 0x110
}

// 
// Start address: 0x102db90
void punchbom(_anon0* actionwk)
{
	// Line 1039, Address: 0x102db90, Func Offset: 0
	// Line 1040, Address: 0x102db9c, Func Offset: 0xc
	// Line 1043, Address: 0x102dbf4, Func Offset: 0x64
	// Line 1045, Address: 0x102dc00, Func Offset: 0x70
	// Line 1046, Address: 0x102dc0c, Func Offset: 0x7c
	// Line 1048, Address: 0x102dc14, Func Offset: 0x84
	// Line 1049, Address: 0x102dc20, Func Offset: 0x90
	// Line 1051, Address: 0x102dc28, Func Offset: 0x98
	// Line 1052, Address: 0x102dc34, Func Offset: 0xa4
	// Line 1054, Address: 0x102dc3c, Func Offset: 0xac
	// Line 1055, Address: 0x102dc48, Func Offset: 0xb8
	// Line 1057, Address: 0x102dc50, Func Offset: 0xc0
	// Line 1060, Address: 0x102dc5c, Func Offset: 0xcc
	// Func End, Address: 0x102dc6c, Func Offset: 0xdc
}

// 
// Start address: 0x102dc70
void punchbom_ini(_anon0* actionwk)
{
	// Line 1062, Address: 0x102dc70, Func Offset: 0
	// Line 1063, Address: 0x102dc78, Func Offset: 0x8
	// Line 1064, Address: 0x102dc84, Func Offset: 0x14
	// Line 1065, Address: 0x102dc90, Func Offset: 0x20
	// Line 1066, Address: 0x102dc9c, Func Offset: 0x2c
	// Line 1067, Address: 0x102dca8, Func Offset: 0x38
	// Line 1068, Address: 0x102dcb4, Func Offset: 0x44
	// Line 1069, Address: 0x102dcc0, Func Offset: 0x50
	// Line 1070, Address: 0x102dcd0, Func Offset: 0x60
	// Line 1072, Address: 0x102dcdc, Func Offset: 0x6c
	// Line 1073, Address: 0x102dce4, Func Offset: 0x74
	// Line 1074, Address: 0x102dcf0, Func Offset: 0x80
	// Line 1075, Address: 0x102dcfc, Func Offset: 0x8c
	// Func End, Address: 0x102dd08, Func Offset: 0x98
}

// 
// Start address: 0x102dd10
void punchbom_mov(_anon0* actionwk)
{
	short d1;
	// Line 1077, Address: 0x102dd10, Func Offset: 0
	// Line 1080, Address: 0x102dd20, Func Offset: 0x10
	// Line 1082, Address: 0x102dd30, Func Offset: 0x20
	// Line 1083, Address: 0x102dd3c, Func Offset: 0x2c
	// Line 1085, Address: 0x102dd44, Func Offset: 0x34
	// Line 1086, Address: 0x102dd54, Func Offset: 0x44
	// Line 1088, Address: 0x102dd6c, Func Offset: 0x5c
	// Line 1089, Address: 0x102dd78, Func Offset: 0x68
	// Line 1091, Address: 0x102dd80, Func Offset: 0x70
	// Line 1093, Address: 0x102dd90, Func Offset: 0x80
	// Line 1094, Address: 0x102ddc0, Func Offset: 0xb0
	// Line 1096, Address: 0x102ddc8, Func Offset: 0xb8
	// Line 1098, Address: 0x102ddd4, Func Offset: 0xc4
	// Line 1101, Address: 0x102ddf0, Func Offset: 0xe0
	// Line 1103, Address: 0x102de08, Func Offset: 0xf8
	// Line 1104, Address: 0x102de1c, Func Offset: 0x10c
	// Line 1106, Address: 0x102de2c, Func Offset: 0x11c
	// Line 1107, Address: 0x102de3c, Func Offset: 0x12c
	// Line 1109, Address: 0x102de60, Func Offset: 0x150
	// Line 1112, Address: 0x102de68, Func Offset: 0x158
	// Line 1113, Address: 0x102de7c, Func Offset: 0x16c
	// Line 1115, Address: 0x102de8c, Func Offset: 0x17c
	// Line 1116, Address: 0x102de9c, Func Offset: 0x18c
	// Line 1120, Address: 0x102dec0, Func Offset: 0x1b0
	// Line 1122, Address: 0x102ded8, Func Offset: 0x1c8
	// Line 1123, Address: 0x102def4, Func Offset: 0x1e4
	// Line 1125, Address: 0x102df04, Func Offset: 0x1f4
	// Line 1126, Address: 0x102df14, Func Offset: 0x204
	// Line 1128, Address: 0x102df38, Func Offset: 0x228
	// Line 1131, Address: 0x102df40, Func Offset: 0x230
	// Line 1132, Address: 0x102df5c, Func Offset: 0x24c
	// Line 1134, Address: 0x102df6c, Func Offset: 0x25c
	// Line 1135, Address: 0x102df7c, Func Offset: 0x26c
	// Line 1138, Address: 0x102dfa0, Func Offset: 0x290
	// Line 1139, Address: 0x102dfac, Func Offset: 0x29c
	// Func End, Address: 0x102dfc0, Func Offset: 0x2b0
}

// 
// Start address: 0x102dfc0
void punchbom_hit(_anon0* actionwk)
{
	_anon0* a1;
	unsigned char d;
	int d0l;
	int d1l;
	short d0;
	short d1;
	short d2;
	// Line 1144, Address: 0x102dfc0, Func Offset: 0
	// Line 1150, Address: 0x102dfe0, Func Offset: 0x20
	// Line 1151, Address: 0x102dfe8, Func Offset: 0x28
	// Line 1152, Address: 0x102dff0, Func Offset: 0x30
	// Line 1153, Address: 0x102e01c, Func Offset: 0x5c
	// Line 1154, Address: 0x102e04c, Func Offset: 0x8c
	// Line 1155, Address: 0x102e064, Func Offset: 0xa4
	// Line 1156, Address: 0x102e078, Func Offset: 0xb8
	// Line 1157, Address: 0x102e090, Func Offset: 0xd0
	// Line 1158, Address: 0x102e0a0, Func Offset: 0xe0
	// Line 1159, Address: 0x102e0b8, Func Offset: 0xf8
	// Line 1160, Address: 0x102e0c8, Func Offset: 0x108
	// Line 1161, Address: 0x102e0d4, Func Offset: 0x114
	// Line 1162, Address: 0x102e0e0, Func Offset: 0x120
	// Line 1163, Address: 0x102e0ec, Func Offset: 0x12c
	// Line 1164, Address: 0x102e0f0, Func Offset: 0x130
	// Line 1165, Address: 0x102e0fc, Func Offset: 0x13c
	// Line 1166, Address: 0x102e10c, Func Offset: 0x14c
	// Line 1167, Address: 0x102e138, Func Offset: 0x178
	// Line 1169, Address: 0x102e15c, Func Offset: 0x19c
	// Line 1170, Address: 0x102e168, Func Offset: 0x1a8
	// Line 1171, Address: 0x102e174, Func Offset: 0x1b4
	// Func End, Address: 0x102e198, Func Offset: 0x1d8
}

// 
// Start address: 0x102e1a0
void punchbom_kemini(_anon0* actionwk)
{
	// Line 1173, Address: 0x102e1a0, Func Offset: 0
	// Line 1174, Address: 0x102e1ac, Func Offset: 0xc
	// Line 1175, Address: 0x102e1b8, Func Offset: 0x18
	// Line 1176, Address: 0x102e1c4, Func Offset: 0x24
	// Line 1177, Address: 0x102e1d0, Func Offset: 0x30
	// Line 1178, Address: 0x102e1dc, Func Offset: 0x3c
	// Func End, Address: 0x102e1ec, Func Offset: 0x4c
}

// 
// Start address: 0x102e1f0
void punchbom_fireini(_anon0* actionwk)
{
	// Line 1180, Address: 0x102e1f0, Func Offset: 0
	// Line 1181, Address: 0x102e1fc, Func Offset: 0xc
	// Line 1182, Address: 0x102e208, Func Offset: 0x18
	// Line 1183, Address: 0x102e214, Func Offset: 0x24
	// Line 1184, Address: 0x102e220, Func Offset: 0x30
	// Func End, Address: 0x102e230, Func Offset: 0x40
}

// 
// Start address: 0x102e230
void punchbom_bomset(_anon0* actionwk)
{
	// Line 1186, Address: 0x102e230, Func Offset: 0
	// Line 1187, Address: 0x102e23c, Func Offset: 0xc
	// Line 1188, Address: 0x102e244, Func Offset: 0x14
	// Line 1189, Address: 0x102e250, Func Offset: 0x20
	// Line 1190, Address: 0x102e25c, Func Offset: 0x2c
	// Line 1191, Address: 0x102e268, Func Offset: 0x38
	// Line 1192, Address: 0x102e274, Func Offset: 0x44
	// Line 1193, Address: 0x102e280, Func Offset: 0x50
	// Line 1194, Address: 0x102e290, Func Offset: 0x60
	// Line 1195, Address: 0x102e29c, Func Offset: 0x6c
	// Func End, Address: 0x102e2ac, Func Offset: 0x7c
}

// 
// Start address: 0x102e2b0
void punchbom_kem(_anon0* actionwk)
{
	// Line 1197, Address: 0x102e2b0, Func Offset: 0
	// Line 1198, Address: 0x102e2bc, Func Offset: 0xc
	// Line 1199, Address: 0x102e2d0, Func Offset: 0x20
	// Line 1200, Address: 0x102e2dc, Func Offset: 0x2c
	// Func End, Address: 0x102e2ec, Func Offset: 0x3c
}

// 
// Start address: 0x102e2f0
void punchbom_del(_anon0* actionwk)
{
	// Line 1202, Address: 0x102e2f0, Func Offset: 0
	// Line 1203, Address: 0x102e2fc, Func Offset: 0xc
	// Line 1204, Address: 0x102e308, Func Offset: 0x18
	// Func End, Address: 0x102e318, Func Offset: 0x28
}

// 
// Start address: 0x102e320
void add_spd3(_anon0* actionwk)
{
	short d0;
	// Line 1206, Address: 0x102e320, Func Offset: 0
	// Line 1209, Address: 0x102e330, Func Offset: 0x10
	// Line 1210, Address: 0x102e348, Func Offset: 0x28
	// Line 1211, Address: 0x102e360, Func Offset: 0x40
	// Line 1213, Address: 0x102e378, Func Offset: 0x58
	// Line 1214, Address: 0x102e384, Func Offset: 0x64
	// Line 1216, Address: 0x102e38c, Func Offset: 0x6c
	// Line 1218, Address: 0x102e3a4, Func Offset: 0x84
	// Line 1219, Address: 0x102e3b4, Func Offset: 0x94
	// Line 1221, Address: 0x102e3d8, Func Offset: 0xb8
	// Line 1222, Address: 0x102e3e4, Func Offset: 0xc4
	// Line 1225, Address: 0x102e3ec, Func Offset: 0xcc
	// Line 1226, Address: 0x102e3f4, Func Offset: 0xd4
	// Line 1228, Address: 0x102e400, Func Offset: 0xe0
	// Line 1231, Address: 0x102e408, Func Offset: 0xe8
	// Line 1232, Address: 0x102e418, Func Offset: 0xf8
	// Line 1234, Address: 0x102e43c, Func Offset: 0x11c
	// Line 1235, Address: 0x102e448, Func Offset: 0x128
	// Line 1238, Address: 0x102e450, Func Offset: 0x130
	// Line 1239, Address: 0x102e458, Func Offset: 0x138
	// Line 1242, Address: 0x102e464, Func Offset: 0x144
	// Func End, Address: 0x102e478, Func Offset: 0x158
}

// 
// Start address: 0x102e480
void add_spd2(_anon0* actionwk)
{
	// Line 1244, Address: 0x102e480, Func Offset: 0
	// Line 1245, Address: 0x102e48c, Func Offset: 0xc
	// Line 1246, Address: 0x102e4a4, Func Offset: 0x24
	// Line 1247, Address: 0x102e4bc, Func Offset: 0x3c
	// Line 1248, Address: 0x102e4c8, Func Offset: 0x48
	// Func End, Address: 0x102e4d8, Func Offset: 0x58
}

// 
// Start address: 0x102e4e0
void add_spd(_anon0* actionwk)
{
	int d0;
	// Line 1250, Address: 0x102e4e0, Func Offset: 0
	// Line 1253, Address: 0x102e4ec, Func Offset: 0xc
	// Line 1254, Address: 0x102e4fc, Func Offset: 0x1c
	// Line 1255, Address: 0x102e510, Func Offset: 0x30
	// Line 1256, Address: 0x102e520, Func Offset: 0x40
	// Line 1257, Address: 0x102e534, Func Offset: 0x54
	// Func End, Address: 0x102e544, Func Offset: 0x64
}

