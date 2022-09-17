typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_4)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon1* type_2[3];
typedef _anon1* type_3[3];
typedef void(*type_5)(_anon0*)[13];
typedef _anon1* type_6[3];
typedef char* type_7[1];
typedef char* type_8[1];
typedef _anon1* type_9[1];
typedef unsigned char type_10[2];
typedef unsigned char type_11[22];
typedef _anon1* type_12[3];
typedef short type_13[2];
typedef _anon1* type_14[3];
typedef _anon1* type_15[3];
typedef _anon0 type_16[128];
typedef _anon1* type_17[2];
typedef char type_18[12];
typedef char type_19[4];

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

_anon1 spat00;
_anon1 spat01;
_anon1 spat02;
_anon1 spat03;
_anon1 spat04;
_anon1 spat05;
_anon1 spat06;
_anon1 spat07;
_anon1 spat08;
_anon1 kpat00;
_anon1 kpat01;
_anon1 ipat00;
_anon1 spat10;
_anon1 spat11;
_anon1 spat12;
_anon1 spat13;
_anon1 spat14;
_anon1 spat15;
_anon1 spat16;
_anon1 spat17;
_anon1 spat18;
_anon1* springpat[3];
_anon1* spring90pat[3];
_anon1* spring45pat[3];
_anon1* springpat2[3];
_anon1* spring90pat2[3];
_anon1* spring45pat2[3];
_anon1* komapat[2];
_anon1* iwapat[1];
char springchg0[12];
char* springchg[1];
char komachg0[4];
char* komachg[1];
_anon0 actwk[128];
_anon2 scra_h_posit;
short time_stop;
void(*sjump_move_tbl)(_anon0*)[13];

void iwa(_anon0* actionwk);
void iwa_init(_anon0* actionwk);
void iwa_move(_anon0* actionwk);
void koma(_anon0* actionwk);
void koma_init(_anon0* actionwk);
void koma_move(_anon0* actionwk);
void koma_move2(_anon0* actionwk);
void spring_d(_anon0* actionwk);
void spr_d_init(_anon0* actionwk);
void spr_d_move(_anon0* actionwk);
void spring(_anon0* actionwk);
void sjumpinit(_anon0* actionwk);
int ride_on_chk_s(_anon0* actionwk, _anon0* a1);
void sjumpmove(_anon0* actionwk);
void sjumpmove2(_anon0* actionwk);
void sjumpmove3(_anon0* actionwk);
int ride_on_chk_s1(_anon0* actionwk, _anon0* a1);
void sdushmove(_anon0* actionwk);
void sdushmove2(_anon0* actionwk);
void sdushmove3(_anon0* actionwk);
int ride_on_chk_s2(_anon0* actionwk, _anon0* a1);
void sjump2move(_anon0* actionwk);
void sjump2move2(_anon0* actionwk);
void sjump2move3(_anon0* actionwk);
void sjump3move(_anon0* actionwk);
void sjump3move2(_anon0* actionwk);
void sjump3move3(_anon0* actionwk);

// 
// Start address: 0x1003de0
void iwa(_anon0* actionwk)
{
	// Line 219, Address: 0x1003de0, Func Offset: 0
	// Line 220, Address: 0x1003dec, Func Offset: 0xc
	// Line 223, Address: 0x1003e14, Func Offset: 0x34
	// Line 225, Address: 0x1003e20, Func Offset: 0x40
	// Line 228, Address: 0x1003e2c, Func Offset: 0x4c
	// Line 229, Address: 0x1003e38, Func Offset: 0x58
	// Line 230, Address: 0x1003e44, Func Offset: 0x64
	// Func End, Address: 0x1003e54, Func Offset: 0x74
}

// 
// Start address: 0x1003e60
void iwa_init(_anon0* actionwk)
{
	unsigned char d0;
	// Line 232, Address: 0x1003e60, Func Offset: 0
	// Line 235, Address: 0x1003e70, Func Offset: 0x10
	// Line 236, Address: 0x1003e80, Func Offset: 0x20
	// Line 237, Address: 0x1003e90, Func Offset: 0x30
	// Line 238, Address: 0x1003ea0, Func Offset: 0x40
	// Line 239, Address: 0x1003eb0, Func Offset: 0x50
	// Line 240, Address: 0x1003ebc, Func Offset: 0x5c
	// Line 241, Address: 0x1003ec8, Func Offset: 0x68
	// Line 242, Address: 0x1003ed0, Func Offset: 0x70
	// Line 243, Address: 0x1003ed8, Func Offset: 0x78
	// Line 244, Address: 0x1003ee0, Func Offset: 0x80
	// Func End, Address: 0x1003ef4, Func Offset: 0x94
}

// 
// Start address: 0x1003f00
void iwa_move(_anon0* actionwk)
{
	_anon0* a1;
	// Line 246, Address: 0x1003f00, Func Offset: 0
	// Line 249, Address: 0x1003f10, Func Offset: 0x10
	// Line 251, Address: 0x1003f28, Func Offset: 0x28
	// Line 252, Address: 0x1003f30, Func Offset: 0x30
	// Line 253, Address: 0x1003f40, Func Offset: 0x40
	// Func End, Address: 0x1003f54, Func Offset: 0x54
}

// 
// Start address: 0x1003f60
void koma(_anon0* actionwk)
{
	unsigned short d0;
	unsigned short d1;
	// Line 255, Address: 0x1003f60, Func Offset: 0
	// Line 258, Address: 0x1003f74, Func Offset: 0x14
	// Line 261, Address: 0x1003fa8, Func Offset: 0x48
	// Line 263, Address: 0x1003fb4, Func Offset: 0x54
	// Line 264, Address: 0x1003fc0, Func Offset: 0x60
	// Line 266, Address: 0x1003fc8, Func Offset: 0x68
	// Line 269, Address: 0x1003fd4, Func Offset: 0x74
	// Line 270, Address: 0x1003fe0, Func Offset: 0x80
	// Line 271, Address: 0x1003fe8, Func Offset: 0x88
	// Line 272, Address: 0x1004010, Func Offset: 0xb0
	// Line 273, Address: 0x1004018, Func Offset: 0xb8
	// Line 274, Address: 0x1004034, Func Offset: 0xd4
	// Func End, Address: 0x100404c, Func Offset: 0xec
}

// 
// Start address: 0x1004050
void koma_init(_anon0* actionwk)
{
	_anon0* a1;
	// Line 276, Address: 0x1004050, Func Offset: 0
	// Line 280, Address: 0x100405c, Func Offset: 0xc
	// Line 281, Address: 0x100406c, Func Offset: 0x1c
	// Line 282, Address: 0x100407c, Func Offset: 0x2c
	// Line 283, Address: 0x1004088, Func Offset: 0x38
	// Line 284, Address: 0x1004098, Func Offset: 0x48
	// Line 285, Address: 0x10040a4, Func Offset: 0x54
	// Line 286, Address: 0x10040b0, Func Offset: 0x60
	// Line 287, Address: 0x10040bc, Func Offset: 0x6c
	// Line 288, Address: 0x10040cc, Func Offset: 0x7c
	// Line 290, Address: 0x10040d8, Func Offset: 0x88
	// Line 291, Address: 0x10040e0, Func Offset: 0x90
	// Line 293, Address: 0x10040f4, Func Offset: 0xa4
	// Line 295, Address: 0x1004108, Func Offset: 0xb8
	// Line 296, Address: 0x1004114, Func Offset: 0xc4
	// Line 298, Address: 0x100411c, Func Offset: 0xcc
	// Line 299, Address: 0x1004128, Func Offset: 0xd8
	// Line 300, Address: 0x1004138, Func Offset: 0xe8
	// Line 301, Address: 0x1004148, Func Offset: 0xf8
	// Line 302, Address: 0x1004158, Func Offset: 0x108
	// Line 303, Address: 0x1004164, Func Offset: 0x114
	// Line 304, Address: 0x1004198, Func Offset: 0x148
	// Line 305, Address: 0x10041c8, Func Offset: 0x178
	// Func End, Address: 0x10041d8, Func Offset: 0x188
}

// 
// Start address: 0x10041e0
void koma_move(_anon0* actionwk)
{
	short d1;
	// Line 307, Address: 0x10041e0, Func Offset: 0
	// Line 310, Address: 0x10041f0, Func Offset: 0x10
	// Line 311, Address: 0x1004204, Func Offset: 0x24
	// Line 313, Address: 0x1004214, Func Offset: 0x34
	// Line 314, Address: 0x1004224, Func Offset: 0x44
	// Line 316, Address: 0x100422c, Func Offset: 0x4c
	// Line 317, Address: 0x100423c, Func Offset: 0x5c
	// Line 318, Address: 0x100424c, Func Offset: 0x6c
	// Line 320, Address: 0x100425c, Func Offset: 0x7c
	// Func End, Address: 0x1004270, Func Offset: 0x90
}

// 
// Start address: 0x1004270
void koma_move2(_anon0* actionwk)
{
	short d0;
	short d1;
	// Line 322, Address: 0x1004270, Func Offset: 0
	// Line 325, Address: 0x1004284, Func Offset: 0x14
	// Line 326, Address: 0x1004294, Func Offset: 0x24
	// Line 327, Address: 0x10042a8, Func Offset: 0x38
	// Line 328, Address: 0x10042b8, Func Offset: 0x48
	// Line 329, Address: 0x10042c8, Func Offset: 0x58
	// Line 330, Address: 0x10042dc, Func Offset: 0x6c
	// Line 331, Address: 0x1004314, Func Offset: 0xa4
	// Line 332, Address: 0x1004320, Func Offset: 0xb0
	// Line 334, Address: 0x1004334, Func Offset: 0xc4
	// Line 335, Address: 0x1004340, Func Offset: 0xd0
	// Func End, Address: 0x1004358, Func Offset: 0xe8
}

// 
// Start address: 0x1004360
void spring_d(_anon0* actionwk)
{
	// Line 337, Address: 0x1004360, Func Offset: 0
	// Line 338, Address: 0x100436c, Func Offset: 0xc
	// Line 341, Address: 0x1004394, Func Offset: 0x34
	// Line 343, Address: 0x10043a0, Func Offset: 0x40
	// Line 346, Address: 0x10043ac, Func Offset: 0x4c
	// Func End, Address: 0x10043bc, Func Offset: 0x5c
}

// 
// Start address: 0x10043c0
void spr_d_init(_anon0* actionwk)
{
	// Line 348, Address: 0x10043c0, Func Offset: 0
	// Line 349, Address: 0x10043cc, Func Offset: 0xc
	// Line 350, Address: 0x10043e8, Func Offset: 0x28
	// Line 352, Address: 0x1004400, Func Offset: 0x40
	// Line 354, Address: 0x1004410, Func Offset: 0x50
	// Line 355, Address: 0x100441c, Func Offset: 0x5c
	// Line 356, Address: 0x100442c, Func Offset: 0x6c
	// Line 357, Address: 0x1004438, Func Offset: 0x78
	// Line 358, Address: 0x1004444, Func Offset: 0x84
	// Line 359, Address: 0x1004450, Func Offset: 0x90
	// Line 360, Address: 0x1004460, Func Offset: 0xa0
	// Line 361, Address: 0x100446c, Func Offset: 0xac
	// Func End, Address: 0x100447c, Func Offset: 0xbc
}

// 
// Start address: 0x1004480
void spr_d_move(_anon0* actionwk)
{
	// Line 363, Address: 0x1004480, Func Offset: 0
	// Line 364, Address: 0x100448c, Func Offset: 0xc
	// Line 365, Address: 0x100449c, Func Offset: 0x1c
	// Line 366, Address: 0x10044ac, Func Offset: 0x2c
	// Line 367, Address: 0x10044b8, Func Offset: 0x38
	// Func End, Address: 0x10044c8, Func Offset: 0x48
}

// 
// Start address: 0x10044d0
void spring(_anon0* actionwk)
{
	unsigned short d1;
	_anon0* a1;
	unsigned short d0;
	// Line 385, Address: 0x10044d0, Func Offset: 0
	// Line 395, Address: 0x10044e8, Func Offset: 0x18
	// Line 397, Address: 0x1004500, Func Offset: 0x30
	// Line 399, Address: 0x100450c, Func Offset: 0x3c
	// Line 400, Address: 0x1004520, Func Offset: 0x50
	// Line 402, Address: 0x1004538, Func Offset: 0x68
	// Line 404, Address: 0x100457c, Func Offset: 0xac
	// Line 406, Address: 0x1004588, Func Offset: 0xb8
	// Line 407, Address: 0x1004594, Func Offset: 0xc4
	// Line 408, Address: 0x10045a0, Func Offset: 0xd0
	// Line 409, Address: 0x10045bc, Func Offset: 0xec
	// Line 410, Address: 0x10045c8, Func Offset: 0xf8
	// Line 411, Address: 0x10045d4, Func Offset: 0x104
	// Line 412, Address: 0x10045f4, Func Offset: 0x124
	// Line 415, Address: 0x1004614, Func Offset: 0x144
	// Line 416, Address: 0x1004620, Func Offset: 0x150
	// Line 417, Address: 0x1004628, Func Offset: 0x158
	// Line 418, Address: 0x1004650, Func Offset: 0x180
	// Line 419, Address: 0x1004658, Func Offset: 0x188
	// Line 420, Address: 0x1004674, Func Offset: 0x1a4
	// Func End, Address: 0x1004690, Func Offset: 0x1c0
}

// 
// Start address: 0x1004690
void sjumpinit(_anon0* actionwk)
{
	short sjumptbl[2];
	unsigned char d0;
	// Line 422, Address: 0x1004690, Func Offset: 0
	// Line 423, Address: 0x10046a0, Func Offset: 0x10
	// Line 427, Address: 0x10046bc, Func Offset: 0x2c
	// Line 428, Address: 0x10046cc, Func Offset: 0x3c
	// Line 429, Address: 0x10046e8, Func Offset: 0x58
	// Line 431, Address: 0x1004700, Func Offset: 0x70
	// Line 433, Address: 0x1004710, Func Offset: 0x80
	// Line 434, Address: 0x100471c, Func Offset: 0x8c
	// Line 435, Address: 0x100472c, Func Offset: 0x9c
	// Line 436, Address: 0x1004738, Func Offset: 0xa8
	// Line 437, Address: 0x1004744, Func Offset: 0xb4
	// Line 438, Address: 0x1004754, Func Offset: 0xc4
	// Line 440, Address: 0x1004760, Func Offset: 0xd0
	// Line 441, Address: 0x100476c, Func Offset: 0xdc
	// Line 442, Address: 0x100477c, Func Offset: 0xec
	// Line 443, Address: 0x1004788, Func Offset: 0xf8
	// Line 444, Address: 0x1004794, Func Offset: 0x104
	// Line 445, Address: 0x10047a0, Func Offset: 0x110
	// Line 446, Address: 0x10047bc, Func Offset: 0x12c
	// Line 448, Address: 0x10047d4, Func Offset: 0x144
	// Line 449, Address: 0x10047e4, Func Offset: 0x154
	// Line 451, Address: 0x10047ec, Func Offset: 0x15c
	// Line 452, Address: 0x10047fc, Func Offset: 0x16c
	// Line 453, Address: 0x1004808, Func Offset: 0x178
	// Line 454, Address: 0x1004814, Func Offset: 0x184
	// Line 455, Address: 0x1004820, Func Offset: 0x190
	// Line 456, Address: 0x100483c, Func Offset: 0x1ac
	// Line 458, Address: 0x1004854, Func Offset: 0x1c4
	// Line 459, Address: 0x1004864, Func Offset: 0x1d4
	// Line 460, Address: 0x100486c, Func Offset: 0x1dc
	// Line 462, Address: 0x1004874, Func Offset: 0x1e4
	// Line 463, Address: 0x100488c, Func Offset: 0x1fc
	// Line 464, Address: 0x1004898, Func Offset: 0x208
	// Line 466, Address: 0x10048a8, Func Offset: 0x218
	// Line 467, Address: 0x10048b8, Func Offset: 0x228
	// Line 469, Address: 0x10048c8, Func Offset: 0x238
	// Line 471, Address: 0x10048fc, Func Offset: 0x26c
	// Func End, Address: 0x1004910, Func Offset: 0x280
}

// 
// Start address: 0x1004910
int ride_on_chk_s(_anon0* actionwk, _anon0* a1)
{
	// Line 473, Address: 0x1004910, Func Offset: 0
	// Line 474, Address: 0x1004920, Func Offset: 0x10
	// Line 475, Address: 0x1004938, Func Offset: 0x28
	// Func End, Address: 0x1004948, Func Offset: 0x38
}

// 
// Start address: 0x1004950
void sjumpmove(_anon0* actionwk)
{
	_anon0* a1;
	// Line 477, Address: 0x1004950, Func Offset: 0
	// Line 480, Address: 0x1004960, Func Offset: 0x10
	// Line 482, Address: 0x1004978, Func Offset: 0x28
	// Line 483, Address: 0x1004980, Func Offset: 0x30
	// Line 485, Address: 0x1004998, Func Offset: 0x48
	// Line 486, Address: 0x10049a4, Func Offset: 0x54
	// Line 487, Address: 0x10049b0, Func Offset: 0x60
	// Line 488, Address: 0x10049bc, Func Offset: 0x6c
	// Line 489, Address: 0x10049c8, Func Offset: 0x78
	// Line 490, Address: 0x10049d4, Func Offset: 0x84
	// Line 491, Address: 0x10049dc, Func Offset: 0x8c
	// Line 492, Address: 0x10049ec, Func Offset: 0x9c
	// Line 493, Address: 0x10049f8, Func Offset: 0xa8
	// Func End, Address: 0x1004a0c, Func Offset: 0xbc
}

// 
// Start address: 0x1004a10
void sjumpmove2(_anon0* actionwk)
{
	// Line 495, Address: 0x1004a10, Func Offset: 0
	// Line 496, Address: 0x1004a1c, Func Offset: 0xc
	// Line 497, Address: 0x1004a30, Func Offset: 0x20
	// Func End, Address: 0x1004a40, Func Offset: 0x30
}

// 
// Start address: 0x1004a40
void sjumpmove3(_anon0* actionwk)
{
	// Line 499, Address: 0x1004a40, Func Offset: 0
	// Line 500, Address: 0x1004a48, Func Offset: 0x8
	// Line 501, Address: 0x1004a58, Func Offset: 0x18
	// Line 502, Address: 0x1004a64, Func Offset: 0x24
	// Line 503, Address: 0x1004a74, Func Offset: 0x34
	// Line 504, Address: 0x1004a7c, Func Offset: 0x3c
	// Func End, Address: 0x1004a88, Func Offset: 0x48
}

// 
// Start address: 0x1004a90
int ride_on_chk_s1(_anon0* actionwk, _anon0* a1)
{
	// Line 506, Address: 0x1004a90, Func Offset: 0
	// Line 507, Address: 0x1004aa0, Func Offset: 0x10
	// Line 508, Address: 0x1004ab8, Func Offset: 0x28
	// Func End, Address: 0x1004ac8, Func Offset: 0x38
}

// 
// Start address: 0x1004ad0
void sdushmove(_anon0* actionwk)
{
	_anon0* a1;
	// Line 511, Address: 0x1004ad0, Func Offset: 0
	// Line 514, Address: 0x1004ae0, Func Offset: 0x10
	// Line 516, Address: 0x1004af8, Func Offset: 0x28
	// Line 517, Address: 0x1004b00, Func Offset: 0x30
	// Line 518, Address: 0x1004b10, Func Offset: 0x40
	// Line 520, Address: 0x1004b28, Func Offset: 0x58
	// Line 521, Address: 0x1004b34, Func Offset: 0x64
	// Line 522, Address: 0x1004b40, Func Offset: 0x70
	// Line 523, Address: 0x1004b4c, Func Offset: 0x7c
	// Line 524, Address: 0x1004b58, Func Offset: 0x88
	// Line 525, Address: 0x1004b70, Func Offset: 0xa0
	// Line 526, Address: 0x1004b7c, Func Offset: 0xac
	// Line 527, Address: 0x1004b98, Func Offset: 0xc8
	// Line 529, Address: 0x1004ba4, Func Offset: 0xd4
	// Line 530, Address: 0x1004bac, Func Offset: 0xdc
	// Line 531, Address: 0x1004bb4, Func Offset: 0xe4
	// Line 532, Address: 0x1004bc8, Func Offset: 0xf8
	// Line 534, Address: 0x1004bcc, Func Offset: 0xfc
	// Line 535, Address: 0x1004bd0, Func Offset: 0x100
	// Line 536, Address: 0x1004be0, Func Offset: 0x110
	// Line 537, Address: 0x1004bec, Func Offset: 0x11c
	// Line 538, Address: 0x1004bf8, Func Offset: 0x128
	// Func End, Address: 0x1004c0c, Func Offset: 0x13c
}

// 
// Start address: 0x1004c10
void sdushmove2(_anon0* actionwk)
{
	// Line 540, Address: 0x1004c10, Func Offset: 0
	// Line 541, Address: 0x1004c1c, Func Offset: 0xc
	// Line 542, Address: 0x1004c30, Func Offset: 0x20
	// Func End, Address: 0x1004c40, Func Offset: 0x30
}

// 
// Start address: 0x1004c40
void sdushmove3(_anon0* actionwk)
{
	// Line 544, Address: 0x1004c40, Func Offset: 0
	// Line 545, Address: 0x1004c48, Func Offset: 0x8
	// Line 546, Address: 0x1004c54, Func Offset: 0x14
	// Line 547, Address: 0x1004c64, Func Offset: 0x24
	// Line 548, Address: 0x1004c6c, Func Offset: 0x2c
	// Func End, Address: 0x1004c78, Func Offset: 0x38
}

// 
// Start address: 0x1004c80
int ride_on_chk_s2(_anon0* actionwk, _anon0* a1)
{
	// Line 550, Address: 0x1004c80, Func Offset: 0
	// Line 551, Address: 0x1004c90, Func Offset: 0x10
	// Line 552, Address: 0x1004ca8, Func Offset: 0x28
	// Func End, Address: 0x1004cb8, Func Offset: 0x38
}

// 
// Start address: 0x1004cc0
void sjump2move(_anon0* actionwk)
{
	_anon0* a1;
	// Line 554, Address: 0x1004cc0, Func Offset: 0
	// Line 557, Address: 0x1004cd0, Func Offset: 0x10
	// Line 559, Address: 0x1004ce8, Func Offset: 0x28
	// Line 560, Address: 0x1004cf0, Func Offset: 0x30
	// Line 562, Address: 0x1004d08, Func Offset: 0x48
	// Line 563, Address: 0x1004d14, Func Offset: 0x54
	// Line 564, Address: 0x1004d20, Func Offset: 0x60
	// Line 565, Address: 0x1004d2c, Func Offset: 0x6c
	// Line 566, Address: 0x1004d48, Func Offset: 0x88
	// Line 567, Address: 0x1004d54, Func Offset: 0x94
	// Line 568, Address: 0x1004d60, Func Offset: 0xa0
	// Line 569, Address: 0x1004d70, Func Offset: 0xb0
	// Line 570, Address: 0x1004d7c, Func Offset: 0xbc
	// Func End, Address: 0x1004d90, Func Offset: 0xd0
}

// 
// Start address: 0x1004d90
void sjump2move2(_anon0* actionwk)
{
	// Line 572, Address: 0x1004d90, Func Offset: 0
	// Line 573, Address: 0x1004d9c, Func Offset: 0xc
	// Line 574, Address: 0x1004db0, Func Offset: 0x20
	// Func End, Address: 0x1004dc0, Func Offset: 0x30
}

// 
// Start address: 0x1004dc0
void sjump2move3(_anon0* actionwk)
{
	// Line 576, Address: 0x1004dc0, Func Offset: 0
	// Line 577, Address: 0x1004dc8, Func Offset: 0x8
	// Line 578, Address: 0x1004dd4, Func Offset: 0x14
	// Line 579, Address: 0x1004de4, Func Offset: 0x24
	// Line 580, Address: 0x1004dec, Func Offset: 0x2c
	// Func End, Address: 0x1004df8, Func Offset: 0x38
}

// 
// Start address: 0x1004e00
void sjump3move(_anon0* actionwk)
{
	_anon0* a1;
	unsigned short sin;
	unsigned short cos;
	int sinl;
	int cosl;
	unsigned char d0;
	short d2;
	// Line 582, Address: 0x1004e00, Func Offset: 0
	// Line 589, Address: 0x1004e20, Func Offset: 0x20
	// Line 591, Address: 0x1004e38, Func Offset: 0x38
	// Line 592, Address: 0x1004e40, Func Offset: 0x40
	// Line 593, Address: 0x1004e58, Func Offset: 0x58
	// Line 595, Address: 0x1004e70, Func Offset: 0x70
	// Line 596, Address: 0x1004e7c, Func Offset: 0x7c
	// Line 597, Address: 0x1004e84, Func Offset: 0x84
	// Line 598, Address: 0x1004e98, Func Offset: 0x98
	// Line 599, Address: 0x1004ea8, Func Offset: 0xa8
	// Line 600, Address: 0x1004ec4, Func Offset: 0xc4
	// Line 601, Address: 0x1004ed8, Func Offset: 0xd8
	// Line 602, Address: 0x1004eec, Func Offset: 0xec
	// Line 603, Address: 0x1004ef0, Func Offset: 0xf0
	// Line 604, Address: 0x1004ef4, Func Offset: 0xf4
	// Line 605, Address: 0x1004f00, Func Offset: 0x100
	// Line 606, Address: 0x1004f0c, Func Offset: 0x10c
	// Line 607, Address: 0x1004f18, Func Offset: 0x118
	// Line 608, Address: 0x1004f30, Func Offset: 0x130
	// Line 609, Address: 0x1004f3c, Func Offset: 0x13c
	// Line 611, Address: 0x1004f58, Func Offset: 0x158
	// Line 612, Address: 0x1004f64, Func Offset: 0x164
	// Line 613, Address: 0x1004f70, Func Offset: 0x170
	// Line 614, Address: 0x1004f88, Func Offset: 0x188
	// Line 615, Address: 0x1004f94, Func Offset: 0x194
	// Line 616, Address: 0x1004fa0, Func Offset: 0x1a0
	// Line 618, Address: 0x1004fbc, Func Offset: 0x1bc
	// Line 619, Address: 0x1004fc8, Func Offset: 0x1c8
	// Line 620, Address: 0x1004fd4, Func Offset: 0x1d4
	// Line 621, Address: 0x1004fe0, Func Offset: 0x1e0
	// Line 622, Address: 0x1004ff0, Func Offset: 0x1f0
	// Line 623, Address: 0x1005000, Func Offset: 0x200
	// Line 624, Address: 0x100500c, Func Offset: 0x20c
	// Line 625, Address: 0x1005018, Func Offset: 0x218
	// Func End, Address: 0x100503c, Func Offset: 0x23c
}

// 
// Start address: 0x1005040
void sjump3move2(_anon0* actionwk)
{
	// Line 627, Address: 0x1005040, Func Offset: 0
	// Line 628, Address: 0x100504c, Func Offset: 0xc
	// Line 629, Address: 0x1005060, Func Offset: 0x20
	// Func End, Address: 0x1005070, Func Offset: 0x30
}

// 
// Start address: 0x1005070
void sjump3move3(_anon0* actionwk)
{
	// Line 631, Address: 0x1005070, Func Offset: 0
	// Line 632, Address: 0x1005078, Func Offset: 0x8
	// Line 633, Address: 0x1005084, Func Offset: 0x14
	// Line 634, Address: 0x1005094, Func Offset: 0x24
	// Line 635, Address: 0x100509c, Func Offset: 0x2c
	// Func End, Address: 0x10050a8, Func Offset: 0x38
}

