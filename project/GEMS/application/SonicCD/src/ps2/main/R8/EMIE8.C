typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct tagPALETTEENTRY;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_5)(void*, unsigned char, int);
typedef void(*type_6)(_anon0*, _anon0*);
typedef void(*type_8)(_anon0*);

typedef _anon1* type_0[8];
typedef _anon0 type_1[128];
typedef unsigned char type_2[8];
typedef _anon9 type_3[20];
typedef _anon9 type_4[0];
typedef void(*type_7)(_anon0*, _anon0*)[4];
typedef void(*type_9)(_anon0*)[8];
typedef unsigned char* type_10[1];
typedef unsigned char type_11[7];
typedef unsigned char type_12[2];
typedef unsigned char type_13[22];

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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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

unsigned char pchg0[8];
unsigned char* emie8_pchg[1];
_anon1 pat00;
_anon1 pat01;
_anon1 pat02;
_anon1 pat03;
_anon1 pat04;
_anon1 pat05;
_anon1 pat06;
_anon1 pat07;
_anon1* emie8_pat[8];
void(*emie8_act_tbl)(_anon0*)[8];
unsigned char plautoflag;
unsigned char bossstart;
_anon5 stageno;
_anon5 gameflag;
unsigned char time_flag;
void(*sMemSet)(void*, unsigned char, int);
unsigned char clchgtim[7];
void(*snc_act_tbl)(_anon0*, _anon0*)[4];
_anon0 actwk[128];
_anon7 swdata;
tagPALETTEENTRY* lpcolorwk;
short scralim_n_down;
short scralim_down;

void emie8(_anon0* pActwk);
void emie8_ini(_anon0* pActwk);
void emie8_wait(_anon0* pActwk);
void emie8_l(_anon0* pActwk);
void emie8_j(_anon0* pActwk);
void emie8_j2(_anon0* pActwk);
void emie8_l2(_anon0* pActwk);
void add_spd(_anon0* pActwk);
void snc_ctrl(_anon0* pActwk);
void emie8_snc_r(_anon0* pActwk, _anon0* pPlayerwk);
void emie8_snc_l(_anon0* pActwk, _anon0* pPlayerwk);
void emie8_snc_w(_anon0* pActwk, _anon0* pPlayerwk);
void emie8_snc_pata(_anon0* pActwk, _anon0* pPlayerwk);
void flash_out8();
void emie8_jisin(_anon0* pActwk);

// 
// Start address: 0x1029820
void emie8(_anon0* pActwk)
{
	// Line 146, Address: 0x1029820, Func Offset: 0
	// Line 147, Address: 0x102982c, Func Offset: 0xc
	// Line 148, Address: 0x1029838, Func Offset: 0x18
	// Line 149, Address: 0x1029844, Func Offset: 0x24
	// Line 150, Address: 0x1029888, Func Offset: 0x68
	// Line 151, Address: 0x1029894, Func Offset: 0x74
	// Func End, Address: 0x10298a4, Func Offset: 0x84
}

// 
// Start address: 0x10298b0
void emie8_ini(_anon0* pActwk)
{
	// Line 157, Address: 0x10298b0, Func Offset: 0
	// Line 158, Address: 0x10298bc, Func Offset: 0xc
	// Line 159, Address: 0x10298cc, Func Offset: 0x1c
	// Line 160, Address: 0x10298d8, Func Offset: 0x28
	// Line 161, Address: 0x10298e4, Func Offset: 0x34
	// Line 163, Address: 0x10298f0, Func Offset: 0x40
	// Line 164, Address: 0x10298fc, Func Offset: 0x4c
	// Line 165, Address: 0x102990c, Func Offset: 0x5c
	// Line 166, Address: 0x102991c, Func Offset: 0x6c
	// Line 168, Address: 0x1029930, Func Offset: 0x80
	// Line 169, Address: 0x102993c, Func Offset: 0x8c
	// Func End, Address: 0x102994c, Func Offset: 0x9c
}

// 
// Start address: 0x1029950
void emie8_wait(_anon0* pActwk)
{
	// Line 175, Address: 0x1029950, Func Offset: 0
	// Line 176, Address: 0x102995c, Func Offset: 0xc
	// Line 181, Address: 0x102996c, Func Offset: 0x1c
	// Line 182, Address: 0x102997c, Func Offset: 0x2c
	// Line 184, Address: 0x1029988, Func Offset: 0x38
	// Line 185, Address: 0x1029994, Func Offset: 0x44
	// Func End, Address: 0x10299a4, Func Offset: 0x54
}

// 
// Start address: 0x10299b0
void emie8_l(_anon0* pActwk)
{
	// Line 191, Address: 0x10299b0, Func Offset: 0
	// Line 192, Address: 0x10299bc, Func Offset: 0xc
	// Line 193, Address: 0x10299d0, Func Offset: 0x20
	// Line 194, Address: 0x10299dc, Func Offset: 0x2c
	// Line 199, Address: 0x10299f8, Func Offset: 0x48
	// Line 200, Address: 0x1029a08, Func Offset: 0x58
	// Line 201, Address: 0x1029a14, Func Offset: 0x64
	// Func End, Address: 0x1029a24, Func Offset: 0x74
}

// 
// Start address: 0x1029a30
void emie8_j(_anon0* pActwk)
{
	// Line 207, Address: 0x1029a30, Func Offset: 0
	// Line 208, Address: 0x1029a3c, Func Offset: 0xc
	// Line 209, Address: 0x1029a48, Func Offset: 0x18
	// Line 210, Address: 0x1029a50, Func Offset: 0x20
	// Line 211, Address: 0x1029a5c, Func Offset: 0x2c
	// Line 212, Address: 0x1029a6c, Func Offset: 0x3c
	// Line 213, Address: 0x1029a78, Func Offset: 0x48
	// Func End, Address: 0x1029a88, Func Offset: 0x58
}

// 
// Start address: 0x1029a90
void emie8_j2(_anon0* pActwk)
{
	// Line 219, Address: 0x1029a90, Func Offset: 0
	// Line 220, Address: 0x1029a9c, Func Offset: 0xc
	// Line 221, Address: 0x1029aa8, Func Offset: 0x18
	// Line 222, Address: 0x1029ad0, Func Offset: 0x40
	// Line 226, Address: 0x1029adc, Func Offset: 0x4c
	// Line 231, Address: 0x1029af8, Func Offset: 0x68
	// Line 232, Address: 0x1029b04, Func Offset: 0x74
	// Line 233, Address: 0x1029b10, Func Offset: 0x80
	// Line 234, Address: 0x1029b18, Func Offset: 0x88
	// Line 235, Address: 0x1029b28, Func Offset: 0x98
	// Line 236, Address: 0x1029b34, Func Offset: 0xa4
	// Func End, Address: 0x1029b44, Func Offset: 0xb4
}

// 
// Start address: 0x1029b50
void emie8_l2(_anon0* pActwk)
{
	// Line 242, Address: 0x1029b50, Func Offset: 0
	// Line 243, Address: 0x1029b5c, Func Offset: 0xc
	// Line 245, Address: 0x1029b7c, Func Offset: 0x2c
	// Line 247, Address: 0x1029b88, Func Offset: 0x38
	// Line 248, Address: 0x1029ba4, Func Offset: 0x54
	// Line 249, Address: 0x1029bc8, Func Offset: 0x78
	// Line 251, Address: 0x1029bd0, Func Offset: 0x80
	// Line 253, Address: 0x1029bf4, Func Offset: 0xa4
	// Line 254, Address: 0x1029c08, Func Offset: 0xb8
	// Line 255, Address: 0x1029c14, Func Offset: 0xc4
	// Line 256, Address: 0x1029c20, Func Offset: 0xd0
	// Line 259, Address: 0x1029c28, Func Offset: 0xd8
	// Line 264, Address: 0x1029c30, Func Offset: 0xe0
	// Line 265, Address: 0x1029c44, Func Offset: 0xf4
	// Func End, Address: 0x1029c54, Func Offset: 0x104
}

// 
// Start address: 0x1029c60
void add_spd(_anon0* pActwk)
{
	// Line 282, Address: 0x1029c60, Func Offset: 0
	// Line 283, Address: 0x1029c68, Func Offset: 0x8
	// Line 284, Address: 0x1029c8c, Func Offset: 0x2c
	// Line 285, Address: 0x1029cb0, Func Offset: 0x50
	// Func End, Address: 0x1029cbc, Func Offset: 0x5c
}

// 
// Start address: 0x1029cc0
void snc_ctrl(_anon0* pActwk)
{
	// Line 307, Address: 0x1029cc0, Func Offset: 0
	// Line 308, Address: 0x1029ccc, Func Offset: 0xc
	// Line 309, Address: 0x1029d18, Func Offset: 0x58
	// Func End, Address: 0x1029d28, Func Offset: 0x68
}

// 
// Start address: 0x1029d30
void emie8_snc_r(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 315, Address: 0x1029d30, Func Offset: 0
	// Line 316, Address: 0x1029d40, Func Offset: 0x10
	// Line 317, Address: 0x1029d4c, Func Offset: 0x1c
	// Line 322, Address: 0x1029d68, Func Offset: 0x38
	// Line 323, Address: 0x1029d78, Func Offset: 0x48
	// Line 324, Address: 0x1029d88, Func Offset: 0x58
	// Func End, Address: 0x1029d98, Func Offset: 0x68
}

// 
// Start address: 0x1029da0
void emie8_snc_l(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 330, Address: 0x1029da0, Func Offset: 0
	// Line 331, Address: 0x1029db0, Func Offset: 0x10
	// Line 332, Address: 0x1029dbc, Func Offset: 0x1c
	// Line 337, Address: 0x1029dd8, Func Offset: 0x38
	// Line 338, Address: 0x1029de8, Func Offset: 0x48
	// Line 339, Address: 0x1029df0, Func Offset: 0x50
	// Line 340, Address: 0x1029e00, Func Offset: 0x60
	// Func End, Address: 0x1029e10, Func Offset: 0x70
}

// 
// Start address: 0x1029e10
void emie8_snc_w(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 346, Address: 0x1029e10, Func Offset: 0
	// Line 347, Address: 0x1029e1c, Func Offset: 0xc
	// Line 349, Address: 0x1029e34, Func Offset: 0x24
	// Line 350, Address: 0x1029e44, Func Offset: 0x34
	// Line 352, Address: 0x1029e50, Func Offset: 0x40
	// Func End, Address: 0x1029e5c, Func Offset: 0x4c
}

// 
// Start address: 0x1029e60
void emie8_snc_pata(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 358, Address: 0x1029e60, Func Offset: 0
	// Line 360, Address: 0x1029e6c, Func Offset: 0xc
	// Line 361, Address: 0x1029e74, Func Offset: 0x14
	// Line 362, Address: 0x1029e8c, Func Offset: 0x2c
	// Line 364, Address: 0x1029e98, Func Offset: 0x38
	// Func End, Address: 0x1029ea4, Func Offset: 0x44
}

// 
// Start address: 0x1029eb0
void flash_out8()
{
	tagPALETTEENTRY* lpColwk;
	int i;
	// Line 377, Address: 0x1029eb0, Func Offset: 0
	// Line 381, Address: 0x1029ebc, Func Offset: 0xc
	// Line 383, Address: 0x1029ec4, Func Offset: 0x14
	// Line 385, Address: 0x1029ed0, Func Offset: 0x20
	// Line 386, Address: 0x1029ee4, Func Offset: 0x34
	// Line 388, Address: 0x1029ef0, Func Offset: 0x40
	// Line 389, Address: 0x1029f04, Func Offset: 0x54
	// Line 391, Address: 0x1029f10, Func Offset: 0x60
	// Line 392, Address: 0x1029f24, Func Offset: 0x74
	// Line 394, Address: 0x1029f30, Func Offset: 0x80
	// Line 395, Address: 0x1029f34, Func Offset: 0x84
	// Line 396, Address: 0x1029f44, Func Offset: 0x94
	// Func End, Address: 0x1029f58, Func Offset: 0xa8
}

// 
// Start address: 0x1029f60
void emie8_jisin(_anon0* pActwk)
{
	short wk;
	// Line 409, Address: 0x1029f60, Func Offset: 0
	// Line 412, Address: 0x1029f6c, Func Offset: 0xc
	// Line 413, Address: 0x1029f7c, Func Offset: 0x1c
	// Line 416, Address: 0x1029f88, Func Offset: 0x28
	// Line 417, Address: 0x1029fb8, Func Offset: 0x58
	// Line 419, Address: 0x1029fc4, Func Offset: 0x64
	// Line 420, Address: 0x1029fd8, Func Offset: 0x78
	// Line 421, Address: 0x1029fec, Func Offset: 0x8c
	// Func End, Address: 0x1029ffc, Func Offset: 0x9c
}

