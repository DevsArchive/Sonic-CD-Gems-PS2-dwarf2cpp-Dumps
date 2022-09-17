typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef union _anon10;
typedef struct _anon11;
typedef struct _anon12;

typedef void(*type_2)(_anon0*);
typedef void(*type_5)(_anon0*);
typedef void(*type_6)(_anon0*);
typedef void(*type_10)(_anon0*);
typedef void(*type_12)(_anon0*);
typedef void(*type_15)(_anon0*);
typedef void(*type_19)(_anon0*);
typedef void(*type_21)(_anon0*);
typedef void(*type_23)(_anon0*);

typedef _anon12 type_0[0];
typedef _anon0 type_1[48];
typedef void(*type_3)(_anon0*)[4];
typedef short type_4[24];
typedef void(*type_7)(_anon0*)[24];
typedef void(*type_8)(_anon0*)[2];
typedef _anon3* type_9[64];
typedef void(*type_11)(_anon0*)[2];
typedef void(*type_13)(_anon0*)[3];
typedef _anon1* type_14[3];
typedef void(*type_16)(_anon0*)[2];
typedef unsigned char type_17[20];
typedef _anon1* type_18[1];
typedef void(*type_20)(_anon0*)[8];
typedef void(*type_22)(_anon0*)[10];
typedef void(*type_24)(_anon0*)[8];
typedef unsigned char type_25[3];
typedef unsigned char type_26[48];
typedef _anon1* type_27[0];
typedef _anon1* type_28[0];
typedef _anon12 type_29[20];

struct _anon0
{
	unsigned char actno;
	unsigned char cgno;
	unsigned char actflg;
	unsigned char exeno;
	unsigned short sprcolor;
	_anon1** pattbl;
	unsigned char pattblno;
	unsigned char patno;
	char pctime;
	char pctime_b;
	unsigned char scno_ce;
	unsigned char scno_ul;
	unsigned char scno_ur;
	unsigned char scno_dr;
	unsigned char scno_dl;
	unsigned char scno_sdir;
	short spdcnt;
	short spdcnt_shock;
	short spdcnt_max;
	_anon4 x_posi;
	_anon4 y_posi;
	_anon4 z_posi;
	_anon4 sx_posi;
	_anon4 sy_posi;
	_anon4 x_speed;
	_anon4 y_speed;
	_anon4 z_speed;
	_anon4 sx_speed;
	_anon4 sy_speed;
	unsigned char colliflg;
	unsigned char dummy[3];
	unsigned char actfree[48];
};

struct _anon1
{
	unsigned char cnt;
	char timer;
	_anon3* spr[64];
};

struct _anon2
{
	short x;
	short y;
	short z;
	short ax;
	short sx;
	short cx;
	short az;
	short sz;
	short cz;
	short msz;
	short mcz;
	short h;
	short i;
	int hsxsz;
	int hsxcz;
	int hcxcz;
	int hcxsz;
	int hcx;
	int hzsx;
	_anon4 hsz;
	_anon4 hcz;
	_anon4 zcx;
	_anon4 hisxsz;
	_anon4 hisxcz;
	_anon4 cxsz;
	_anon4 cxcz;
	_anon4 sxsz;
	_anon4 sxcz;
};

struct _anon3
{
	unsigned char cnt;
	union
	{
		_anon12 spra[20];
		_anon12 spr[0];
	};
};

union _anon4
{
	int l;
	_anon5 w;
	_anon6 b;
};

struct _anon5
{
	short l;
	short h;
};

struct _anon6
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon7
{
	unsigned int l;
	_anon8 w;
	_anon9 b;
};

struct _anon8
{
	unsigned short l;
	unsigned short h;
};

struct _anon9
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon10
{
	unsigned short w;
	_anon11 b;
};

struct _anon11
{
	unsigned char l;
	unsigned char h;
};

struct _anon12
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

void(*pl_acttbl)(_anon0*)[24];
_anon2 zoomwk;
unsigned char game_start;
_anon10 swdata_pl;
_anon10 swdata1;
_anon1* mpplayer[0];
short jmpswcnt;
_anon0 actwk[48];
unsigned char rlscrflg;
unsigned char stagenm;
unsigned char ufoleft;
unsigned char spgmmode;
unsigned char time_stop;
unsigned short ringno;
unsigned char tdecflg;
_anon1* mpsibuki[0];
_anon3 kem00;
_anon3 kem01;
_anon3 kem02;
_anon1 kemuri00;
_anon1* mpkemuri[1];
_anon3 stn00;
_anon3 stn01;
_anon3 stn02;
_anon3 stn03;
_anon3 stn04;
_anon3 stn05;
_anon3 stn06;
_anon3 stn07;
_anon3 stn08;
_anon3 stn09;
_anon3 stn0a;
_anon3 stn0b;
_anon1 stone00;
_anon1 stone01;
_anon1 stone02;
_anon1* mpstone[3];
unsigned char gmclrflg;

void player(_anon0* plwk);
void play0(_anon0* plwk);
void play20(_anon0* plwk);
void play21(_anon0* plwk);
void play22(_anon0* plwk);
void play23(_anon0* plwk);
void play1(_anon0* plwk);
void play2(_anon0* plwk);
void play3(_anon0* plwk);
void play4(_anon0* plwk);
void play5(_anon0* plwk);
void play6(_anon0* plwk);
void play7(_anon0* plwk);
void play8(_anon0* plwk);
void play9(_anon0* plwk);
void play10(_anon0* plwk);
void play11(_anon0* plwk);
void play12(_anon0* plwk);
void play13(_anon0* plwk);
void play14(_anon0* plwk);
void play15(_anon0* plwk);
void play16(_anon0* plwk);
void play17(_anon0* plwk);
void play18(_anon0* plwk);
void play19(_anon0* plwk);
void init_xyget(_anon0* plwk);
void clear_chk();
void colli_evt(_anon0* plwk);
void noevt(_anon0* plwk);
void evt08(_anon0* plwk);
void evt01(_anon0* plwk);
void evt02(_anon0* plwk);
void evt03(_anon0* plwk);
void evt04(_anon0* plwk);
void evt05(_anon0* plwk);
void evt06(_anon0* plwk);
void tobi_b0(_anon0* plwk);
void tobi_b2(_anon0* plwk);
void tobi_b4(_anon0* plwk);
void tobi_b6(_anon0* plwk);
void tobi_b(_anon0* plwk, short cal_x, short cal_y);
void evt07(_anon0* plwk);
void tobi_s0(_anon0* plwk);
void tobi_s2(_anon0* plwk);
void tobi_s4(_anon0* plwk);
void tobi_s6(_anon0* plwk);
void tobi_s(_anon0* plwk, short cal_x, short cal_y);
void boundchk(_anon0* plwk);
short k_search(_anon0** new_actwk);
void jumpset(_anon0* plwk);
void rlmove(_anon0* plwk);
void rlmove_j(_anon0* plwk);
void speed_ud(_anon0* plwk);
void go_down(_anon0* plwk);
void go_up(_anon0* plwk);
void go_right(_anon0* plwk);
void go_left(_anon0* plwk);
void go_x_plus(_anon0* plwk, unsigned short cal_plus, short cal_speed);
void ptrlget(_anon0* plwk);
void plptsel(_anon0* plwk);
void plcgchg(_anon0* plwk);
void sibuki(_anon0* sibukiwk);
void sibuki0(_anon0* sibukiwk);
void sibuki1(_anon0* sibukiwk);
void sibuki2(_anon0* sibukiwk);
void sibuki_clr();
void kemuri(_anon0* kemuriwk);
void kemuri0(_anon0* kemuriwk);
void kemuri1(_anon0* kemuriwk);
void time_stone(_anon0* stonewk);
void t_stone0(_anon0* stonewk);
void t_stone1(_anon0* stonewk);
void t_stone2(_anon0* stonewk);
void t_stone3(_anon0* stonewk);
void tskira0(_anon0* kirawk);
void tskira00(_anon0* kirawk);
void tskira01(_anon0* kirawk);
void tskira1(_anon0* kirawk);
void tskira10(_anon0* kirawk);
void tskira11(_anon0* kirawk);

// 
// Start address: 0x1009ec0
void player(_anon0* plwk)
{
	// Line 49, Address: 0x1009ec0, Func Offset: 0
	// Line 53, Address: 0x1009ecc, Func Offset: 0xc
	// Line 54, Address: 0x1009edc, Func Offset: 0x1c
	// Line 55, Address: 0x1009ee8, Func Offset: 0x28
	// Line 56, Address: 0x1009ef8, Func Offset: 0x38
	// Line 57, Address: 0x1009f04, Func Offset: 0x44
	// Line 58, Address: 0x1009f30, Func Offset: 0x70
	// Line 59, Address: 0x1009f48, Func Offset: 0x88
	// Line 61, Address: 0x1009f60, Func Offset: 0xa0
	// Line 62, Address: 0x1009f74, Func Offset: 0xb4
	// Line 63, Address: 0x1009f80, Func Offset: 0xc0
	// Line 65, Address: 0x1009f8c, Func Offset: 0xcc
	// Line 66, Address: 0x1009fb0, Func Offset: 0xf0
	// Line 68, Address: 0x1009fd8, Func Offset: 0x118
	// Line 69, Address: 0x100a000, Func Offset: 0x140
	// Line 70, Address: 0x100a028, Func Offset: 0x168
	// Line 71, Address: 0x100a050, Func Offset: 0x190
	// Line 72, Address: 0x100a060, Func Offset: 0x1a0
	// Line 73, Address: 0x100a070, Func Offset: 0x1b0
	// Line 74, Address: 0x100a080, Func Offset: 0x1c0
	// Line 75, Address: 0x100a090, Func Offset: 0x1d0
	// Line 76, Address: 0x100a0a0, Func Offset: 0x1e0
	// Line 77, Address: 0x100a0d0, Func Offset: 0x210
	// Line 78, Address: 0x100a0dc, Func Offset: 0x21c
	// Line 80, Address: 0x100a0e8, Func Offset: 0x228
	// Line 81, Address: 0x100a0f4, Func Offset: 0x234
	// Line 82, Address: 0x100a100, Func Offset: 0x240
	// Line 83, Address: 0x100a108, Func Offset: 0x248
	// Func End, Address: 0x100a118, Func Offset: 0x258
}

// 
// Start address: 0x100a120
void play0(_anon0* plwk)
{
	// Line 87, Address: 0x100a120, Func Offset: 0
	// Line 89, Address: 0x100a12c, Func Offset: 0xc
	// Line 90, Address: 0x100a13c, Func Offset: 0x1c
	// Line 91, Address: 0x100a148, Func Offset: 0x28
	// Line 92, Address: 0x100a154, Func Offset: 0x34
	// Line 93, Address: 0x100a164, Func Offset: 0x44
	// Line 94, Address: 0x100a170, Func Offset: 0x50
	// Line 95, Address: 0x100a178, Func Offset: 0x58
	// Line 96, Address: 0x100a184, Func Offset: 0x64
	// Line 97, Address: 0x100a190, Func Offset: 0x70
	// Line 98, Address: 0x100a19c, Func Offset: 0x7c
	// Func End, Address: 0x100a1ac, Func Offset: 0x8c
}

// 
// Start address: 0x100a1b0
void play20(_anon0* plwk)
{
	// Line 101, Address: 0x100a1b0, Func Offset: 0
	// Line 102, Address: 0x100a1b8, Func Offset: 0x8
	// Line 103, Address: 0x100a1c8, Func Offset: 0x18
	// Func End, Address: 0x100a1d4, Func Offset: 0x24
}

// 
// Start address: 0x100a1e0
void play21(_anon0* plwk)
{
	// Line 106, Address: 0x100a1e0, Func Offset: 0
	// Line 107, Address: 0x100a1ec, Func Offset: 0xc
	// Line 108, Address: 0x100a1fc, Func Offset: 0x1c
	// Line 109, Address: 0x100a208, Func Offset: 0x28
	// Line 110, Address: 0x100a214, Func Offset: 0x34
	// Func End, Address: 0x100a224, Func Offset: 0x44
}

// 
// Start address: 0x100a230
void play22(_anon0* plwk)
{
	// Line 113, Address: 0x100a230, Func Offset: 0
	// Line 114, Address: 0x100a23c, Func Offset: 0xc
	// Line 115, Address: 0x100a25c, Func Offset: 0x2c
	// Line 116, Address: 0x100a26c, Func Offset: 0x3c
	// Line 118, Address: 0x100a278, Func Offset: 0x48
	// Func End, Address: 0x100a288, Func Offset: 0x58
}

// 
// Start address: 0x100a290
void play23(_anon0* plwk)
{
	// Line 121, Address: 0x100a290, Func Offset: 0
	// Line 122, Address: 0x100a298, Func Offset: 0x8
	// Line 123, Address: 0x100a2a8, Func Offset: 0x18
	// Func End, Address: 0x100a2b4, Func Offset: 0x24
}

// 
// Start address: 0x100a2c0
void play1(_anon0* plwk)
{
	// Line 127, Address: 0x100a2c0, Func Offset: 0
	// Line 128, Address: 0x100a2cc, Func Offset: 0xc
	// Line 129, Address: 0x100a2d8, Func Offset: 0x18
	// Line 130, Address: 0x100a2e4, Func Offset: 0x24
	// Line 131, Address: 0x100a2ec, Func Offset: 0x2c
	// Func End, Address: 0x100a2fc, Func Offset: 0x3c
}

// 
// Start address: 0x100a300
void play2(_anon0* plwk)
{
	// Line 134, Address: 0x100a300, Func Offset: 0
	// Line 135, Address: 0x100a30c, Func Offset: 0xc
	// Line 136, Address: 0x100a324, Func Offset: 0x24
	// Line 137, Address: 0x100a338, Func Offset: 0x38
	// Line 138, Address: 0x100a350, Func Offset: 0x50
	// Line 139, Address: 0x100a364, Func Offset: 0x64
	// Line 140, Address: 0x100a378, Func Offset: 0x78
	// Line 142, Address: 0x100a3a4, Func Offset: 0xa4
	// Line 143, Address: 0x100a3c0, Func Offset: 0xc0
	// Line 144, Address: 0x100a3cc, Func Offset: 0xcc
	// Line 145, Address: 0x100a3d8, Func Offset: 0xd8
	// Line 146, Address: 0x100a3e0, Func Offset: 0xe0
	// Line 147, Address: 0x100a3f0, Func Offset: 0xf0
	// Line 149, Address: 0x100a3fc, Func Offset: 0xfc
	// Line 150, Address: 0x100a408, Func Offset: 0x108
	// Line 151, Address: 0x100a438, Func Offset: 0x138
	// Func End, Address: 0x100a448, Func Offset: 0x148
}

// 
// Start address: 0x100a450
void play3(_anon0* plwk)
{
	// Line 154, Address: 0x100a450, Func Offset: 0
	// Line 155, Address: 0x100a45c, Func Offset: 0xc
	// Line 156, Address: 0x100a474, Func Offset: 0x24
	// Line 157, Address: 0x100a484, Func Offset: 0x34
	// Line 158, Address: 0x100a4a0, Func Offset: 0x50
	// Line 159, Address: 0x100a4ac, Func Offset: 0x5c
	// Line 160, Address: 0x100a4b8, Func Offset: 0x68
	// Line 161, Address: 0x100a4c0, Func Offset: 0x70
	// Line 162, Address: 0x100a4d0, Func Offset: 0x80
	// Line 164, Address: 0x100a4dc, Func Offset: 0x8c
	// Line 165, Address: 0x100a4e8, Func Offset: 0x98
	// Line 166, Address: 0x100a518, Func Offset: 0xc8
	// Func End, Address: 0x100a528, Func Offset: 0xd8
}

// 
// Start address: 0x100a530
void play4(_anon0* plwk)
{
	// Line 169, Address: 0x100a530, Func Offset: 0
	// Line 170, Address: 0x100a53c, Func Offset: 0xc
	// Line 171, Address: 0x100a564, Func Offset: 0x34
	// Line 172, Address: 0x100a570, Func Offset: 0x40
	// Line 173, Address: 0x100a580, Func Offset: 0x50
	// Line 174, Address: 0x100a588, Func Offset: 0x58
	// Line 175, Address: 0x100a5a0, Func Offset: 0x70
	// Line 177, Address: 0x100a5b8, Func Offset: 0x88
	// Line 178, Address: 0x100a5c4, Func Offset: 0x94
	// Line 179, Address: 0x100a5d0, Func Offset: 0xa0
	// Line 180, Address: 0x100a5d8, Func Offset: 0xa8
	// Func End, Address: 0x100a5e8, Func Offset: 0xb8
}

// 
// Start address: 0x100a5f0
void play5(_anon0* plwk)
{
	// Line 183, Address: 0x100a5f0, Func Offset: 0
	// Line 184, Address: 0x100a5f8, Func Offset: 0x8
	// Line 185, Address: 0x100a608, Func Offset: 0x18
	// Line 186, Address: 0x100a630, Func Offset: 0x40
	// Func End, Address: 0x100a63c, Func Offset: 0x4c
}

// 
// Start address: 0x100a640
void play6(_anon0* plwk)
{
	// Line 189, Address: 0x100a640, Func Offset: 0
	// Line 190, Address: 0x100a648, Func Offset: 0x8
	// Line 191, Address: 0x100a658, Func Offset: 0x18
	// Func End, Address: 0x100a664, Func Offset: 0x24
}

// 
// Start address: 0x100a670
void play7(_anon0* plwk)
{
	// Line 194, Address: 0x100a670, Func Offset: 0
	// Line 195, Address: 0x100a67c, Func Offset: 0xc
	// Line 196, Address: 0x100a69c, Func Offset: 0x2c
	// Line 197, Address: 0x100a6a8, Func Offset: 0x38
	// Line 199, Address: 0x100a6b8, Func Offset: 0x48
	// Func End, Address: 0x100a6c8, Func Offset: 0x58
}

// 
// Start address: 0x100a6d0
void play8(_anon0* plwk)
{
	// Line 202, Address: 0x100a6d0, Func Offset: 0
	// Line 203, Address: 0x100a6dc, Func Offset: 0xc
	// Line 204, Address: 0x100a6f8, Func Offset: 0x28
	// Line 205, Address: 0x100a704, Func Offset: 0x34
	// Line 206, Address: 0x100a714, Func Offset: 0x44
	// Line 207, Address: 0x100a720, Func Offset: 0x50
	// Line 208, Address: 0x100a72c, Func Offset: 0x5c
	// Line 209, Address: 0x100a734, Func Offset: 0x64
	// Line 210, Address: 0x100a73c, Func Offset: 0x6c
	// Line 211, Address: 0x100a748, Func Offset: 0x78
	// Line 213, Address: 0x100a754, Func Offset: 0x84
	// Func End, Address: 0x100a764, Func Offset: 0x94
}

// 
// Start address: 0x100a770
void play9(_anon0* plwk)
{
	// Line 216, Address: 0x100a770, Func Offset: 0
	// Line 217, Address: 0x100a778, Func Offset: 0x8
	// Line 218, Address: 0x100a798, Func Offset: 0x28
	// Line 219, Address: 0x100a7a4, Func Offset: 0x34
	// Line 220, Address: 0x100a7b0, Func Offset: 0x40
	// Line 221, Address: 0x100a7bc, Func Offset: 0x4c
	// Line 222, Address: 0x100a7c8, Func Offset: 0x58
	// Line 224, Address: 0x100a7d4, Func Offset: 0x64
	// Func End, Address: 0x100a7e0, Func Offset: 0x70
}

// 
// Start address: 0x100a7e0
void play10(_anon0* plwk)
{
	// Line 227, Address: 0x100a7e0, Func Offset: 0
	// Line 228, Address: 0x100a7ec, Func Offset: 0xc
	// Line 229, Address: 0x100a800, Func Offset: 0x20
	// Line 230, Address: 0x100a810, Func Offset: 0x30
	// Line 231, Address: 0x100a820, Func Offset: 0x40
	// Line 232, Address: 0x100a840, Func Offset: 0x60
	// Line 233, Address: 0x100a84c, Func Offset: 0x6c
	// Line 234, Address: 0x100a858, Func Offset: 0x78
	// Line 236, Address: 0x100a868, Func Offset: 0x88
	// Func End, Address: 0x100a878, Func Offset: 0x98
}

// 
// Start address: 0x100a880
void play11(_anon0* plwk)
{
	// Line 239, Address: 0x100a880, Func Offset: 0
	// Line 240, Address: 0x100a88c, Func Offset: 0xc
	// Line 241, Address: 0x100a8a0, Func Offset: 0x20
	// Line 242, Address: 0x100a8b0, Func Offset: 0x30
	// Line 243, Address: 0x100a8c0, Func Offset: 0x40
	// Line 244, Address: 0x100a8e0, Func Offset: 0x60
	// Line 245, Address: 0x100a8ec, Func Offset: 0x6c
	// Line 246, Address: 0x100a8f8, Func Offset: 0x78
	// Line 248, Address: 0x100a908, Func Offset: 0x88
	// Func End, Address: 0x100a918, Func Offset: 0x98
}

// 
// Start address: 0x100a920
void play12(_anon0* plwk)
{
	// Line 251, Address: 0x100a920, Func Offset: 0
	// Line 252, Address: 0x100a92c, Func Offset: 0xc
	// Line 253, Address: 0x100a940, Func Offset: 0x20
	// Line 254, Address: 0x100a950, Func Offset: 0x30
	// Line 255, Address: 0x100a960, Func Offset: 0x40
	// Line 256, Address: 0x100a980, Func Offset: 0x60
	// Line 257, Address: 0x100a98c, Func Offset: 0x6c
	// Line 258, Address: 0x100a998, Func Offset: 0x78
	// Line 260, Address: 0x100a9a8, Func Offset: 0x88
	// Func End, Address: 0x100a9b8, Func Offset: 0x98
}

// 
// Start address: 0x100a9c0
void play13(_anon0* plwk)
{
	// Line 263, Address: 0x100a9c0, Func Offset: 0
	// Line 264, Address: 0x100a9cc, Func Offset: 0xc
	// Line 265, Address: 0x100a9e0, Func Offset: 0x20
	// Line 266, Address: 0x100a9f0, Func Offset: 0x30
	// Line 267, Address: 0x100aa00, Func Offset: 0x40
	// Line 268, Address: 0x100aa20, Func Offset: 0x60
	// Line 269, Address: 0x100aa2c, Func Offset: 0x6c
	// Line 270, Address: 0x100aa38, Func Offset: 0x78
	// Line 272, Address: 0x100aa48, Func Offset: 0x88
	// Func End, Address: 0x100aa58, Func Offset: 0x98
}

// 
// Start address: 0x100aa60
void play14(_anon0* plwk)
{
	// Line 275, Address: 0x100aa60, Func Offset: 0
	// Line 276, Address: 0x100aa6c, Func Offset: 0xc
	// Line 277, Address: 0x100aa80, Func Offset: 0x20
	// Line 278, Address: 0x100aa90, Func Offset: 0x30
	// Line 279, Address: 0x100aaa0, Func Offset: 0x40
	// Line 280, Address: 0x100aac0, Func Offset: 0x60
	// Line 281, Address: 0x100aacc, Func Offset: 0x6c
	// Line 282, Address: 0x100aad8, Func Offset: 0x78
	// Line 284, Address: 0x100aae8, Func Offset: 0x88
	// Func End, Address: 0x100aaf8, Func Offset: 0x98
}

// 
// Start address: 0x100ab00
void play15(_anon0* plwk)
{
	// Line 287, Address: 0x100ab00, Func Offset: 0
	// Line 288, Address: 0x100ab0c, Func Offset: 0xc
	// Line 289, Address: 0x100ab20, Func Offset: 0x20
	// Line 290, Address: 0x100ab30, Func Offset: 0x30
	// Line 291, Address: 0x100ab40, Func Offset: 0x40
	// Line 292, Address: 0x100ab60, Func Offset: 0x60
	// Line 293, Address: 0x100ab6c, Func Offset: 0x6c
	// Line 294, Address: 0x100ab78, Func Offset: 0x78
	// Line 296, Address: 0x100ab88, Func Offset: 0x88
	// Func End, Address: 0x100ab98, Func Offset: 0x98
}

// 
// Start address: 0x100aba0
void play16(_anon0* plwk)
{
	// Line 299, Address: 0x100aba0, Func Offset: 0
	// Line 300, Address: 0x100abac, Func Offset: 0xc
	// Line 301, Address: 0x100abc0, Func Offset: 0x20
	// Line 302, Address: 0x100abd0, Func Offset: 0x30
	// Line 303, Address: 0x100abe0, Func Offset: 0x40
	// Line 304, Address: 0x100ac00, Func Offset: 0x60
	// Line 305, Address: 0x100ac0c, Func Offset: 0x6c
	// Line 307, Address: 0x100ac1c, Func Offset: 0x7c
	// Func End, Address: 0x100ac2c, Func Offset: 0x8c
}

// 
// Start address: 0x100ac30
void play17(_anon0* plwk)
{
	// Line 310, Address: 0x100ac30, Func Offset: 0
	// Line 311, Address: 0x100ac38, Func Offset: 0x8
	// Line 312, Address: 0x100ac48, Func Offset: 0x18
	// Func End, Address: 0x100ac54, Func Offset: 0x24
}

// 
// Start address: 0x100ac60
void play18(_anon0* plwk)
{
	// Line 315, Address: 0x100ac60, Func Offset: 0
	// Line 316, Address: 0x100ac6c, Func Offset: 0xc
	// Line 317, Address: 0x100ac7c, Func Offset: 0x1c
	// Func End, Address: 0x100ac8c, Func Offset: 0x2c
}

// 
// Start address: 0x100ac90
void play19(_anon0* plwk)
{
	// Line 320, Address: 0x100ac90, Func Offset: 0
	// Line 321, Address: 0x100ac9c, Func Offset: 0xc
	// Line 322, Address: 0x100acc4, Func Offset: 0x34
	// Line 323, Address: 0x100acd0, Func Offset: 0x40
	// Line 324, Address: 0x100ace0, Func Offset: 0x50
	// Line 325, Address: 0x100acf0, Func Offset: 0x60
	// Line 326, Address: 0x100acf8, Func Offset: 0x68
	// Line 327, Address: 0x100ad10, Func Offset: 0x80
	// Line 329, Address: 0x100ad28, Func Offset: 0x98
	// Line 330, Address: 0x100ad34, Func Offset: 0xa4
	// Line 331, Address: 0x100ad40, Func Offset: 0xb0
	// Func End, Address: 0x100ad50, Func Offset: 0xc0
}

// 
// Start address: 0x100ad50
void init_xyget(_anon0* plwk)
{
	short tbl[24];
	// Line 337, Address: 0x100ad50, Func Offset: 0
	// Line 338, Address: 0x100ad58, Func Offset: 0x8
	// Line 349, Address: 0x100ad8c, Func Offset: 0x3c
	// Line 350, Address: 0x100adb4, Func Offset: 0x64
	// Line 351, Address: 0x100ade0, Func Offset: 0x90
	// Line 352, Address: 0x100ae0c, Func Offset: 0xbc
	// Func End, Address: 0x100ae18, Func Offset: 0xc8
}

// 
// Start address: 0x100ae20
void clear_chk()
{
	// Line 359, Address: 0x100ae20, Func Offset: 0
	// Line 360, Address: 0x100ae34, Func Offset: 0x14
	// Line 361, Address: 0x100ae40, Func Offset: 0x20
	// Line 362, Address: 0x100ae68, Func Offset: 0x48
	// Line 363, Address: 0x100ae90, Func Offset: 0x70
	// Func End, Address: 0x100ae98, Func Offset: 0x78
}

// 
// Start address: 0x100aea0
void colli_evt(_anon0* plwk)
{
	unsigned char cal_jump_no;
	void(*jmptbl)(_anon0*)[10];
	// Line 369, Address: 0x100aea0, Func Offset: 0
	// Line 371, Address: 0x100aeb0, Func Offset: 0x10
	// Line 384, Address: 0x100aee4, Func Offset: 0x44
	// Line 385, Address: 0x100aef0, Func Offset: 0x50
	// Line 386, Address: 0x100af04, Func Offset: 0x64
	// Line 387, Address: 0x100af24, Func Offset: 0x84
	// Line 388, Address: 0x100af40, Func Offset: 0xa0
	// Func End, Address: 0x100af54, Func Offset: 0xb4
}

// 
// Start address: 0x100af60
void noevt(_anon0* plwk)
{
	// Line 391, Address: 0x100af60, Func Offset: 0
	// Line 392, Address: 0x100af68, Func Offset: 0x8
	// Line 393, Address: 0x100af78, Func Offset: 0x18
	// Func End, Address: 0x100af84, Func Offset: 0x24
}

// 
// Start address: 0x100af90
void evt08(_anon0* plwk)
{
	// Line 396, Address: 0x100af90, Func Offset: 0
	// Line 397, Address: 0x100af98, Func Offset: 0x8
	// Line 398, Address: 0x100afa8, Func Offset: 0x18
	// Func End, Address: 0x100afb4, Func Offset: 0x24
}

// 
// Start address: 0x100afc0
void evt01(_anon0* plwk)
{
	// Line 401, Address: 0x100afc0, Func Offset: 0
	// Line 402, Address: 0x100afcc, Func Offset: 0xc
	// Line 403, Address: 0x100afd8, Func Offset: 0x18
	// Line 404, Address: 0x100afe4, Func Offset: 0x24
	// Line 405, Address: 0x100aff4, Func Offset: 0x34
	// Line 406, Address: 0x100b000, Func Offset: 0x40
	// Line 407, Address: 0x100b008, Func Offset: 0x48
	// Func End, Address: 0x100b018, Func Offset: 0x58
}

// 
// Start address: 0x100b020
void evt02(_anon0* plwk)
{
	// Line 410, Address: 0x100b020, Func Offset: 0
	// Line 411, Address: 0x100b028, Func Offset: 0x8
	// Line 412, Address: 0x100b03c, Func Offset: 0x1c
	// Line 413, Address: 0x100b048, Func Offset: 0x28
	// Line 414, Address: 0x100b06c, Func Offset: 0x4c
	// Func End, Address: 0x100b078, Func Offset: 0x58
}

// 
// Start address: 0x100b080
void evt03(_anon0* plwk)
{
	_anon0* new_actwk;
	// Line 418, Address: 0x100b080, Func Offset: 0
	// Line 421, Address: 0x100b08c, Func Offset: 0xc
	// Line 422, Address: 0x100b098, Func Offset: 0x18
	// Line 423, Address: 0x100b0b4, Func Offset: 0x34
	// Line 425, Address: 0x100b0dc, Func Offset: 0x5c
	// Line 426, Address: 0x100b0e8, Func Offset: 0x68
	// Func End, Address: 0x100b0f8, Func Offset: 0x78
}

// 
// Start address: 0x100b100
void evt04(_anon0* plwk)
{
	// Line 429, Address: 0x100b100, Func Offset: 0
	// Line 430, Address: 0x100b10c, Func Offset: 0xc
	// Line 431, Address: 0x100b118, Func Offset: 0x18
	// Line 432, Address: 0x100b124, Func Offset: 0x24
	// Line 433, Address: 0x100b134, Func Offset: 0x34
	// Line 434, Address: 0x100b140, Func Offset: 0x40
	// Line 435, Address: 0x100b148, Func Offset: 0x48
	// Func End, Address: 0x100b158, Func Offset: 0x58
}

// 
// Start address: 0x100b160
void evt05(_anon0* plwk)
{
	short cal_ring;
	// Line 438, Address: 0x100b160, Func Offset: 0
	// Line 441, Address: 0x100b170, Func Offset: 0x10
	// Line 442, Address: 0x100b1a8, Func Offset: 0x48
	// Line 443, Address: 0x100b1b4, Func Offset: 0x54
	// Line 444, Address: 0x100b1c0, Func Offset: 0x60
	// Line 445, Address: 0x100b1d0, Func Offset: 0x70
	// Line 446, Address: 0x100b200, Func Offset: 0xa0
	// Line 447, Address: 0x100b214, Func Offset: 0xb4
	// Line 448, Address: 0x100b234, Func Offset: 0xd4
	// Line 449, Address: 0x100b244, Func Offset: 0xe4
	// Line 451, Address: 0x100b250, Func Offset: 0xf0
	// Line 452, Address: 0x100b2a4, Func Offset: 0x144
	// Func End, Address: 0x100b2b8, Func Offset: 0x158
}

// 
// Start address: 0x100b2c0
void evt06(_anon0* plwk)
{
	void(*tbl)(_anon0*)[8];
	// Line 455, Address: 0x100b2c0, Func Offset: 0
	// Line 456, Address: 0x100b2cc, Func Offset: 0xc
	// Line 461, Address: 0x100b300, Func Offset: 0x40
	// Line 462, Address: 0x100b30c, Func Offset: 0x4c
	// Line 464, Address: 0x100b31c, Func Offset: 0x5c
	// Line 465, Address: 0x100b35c, Func Offset: 0x9c
	// Func End, Address: 0x100b36c, Func Offset: 0xac
}

// 
// Start address: 0x100b370
void tobi_b0(_anon0* plwk)
{
	// Line 468, Address: 0x100b370, Func Offset: 0
	// Line 469, Address: 0x100b37c, Func Offset: 0xc
	// Line 470, Address: 0x100b390, Func Offset: 0x20
	// Func End, Address: 0x100b3a0, Func Offset: 0x30
}

// 
// Start address: 0x100b3a0
void tobi_b2(_anon0* plwk)
{
	// Line 473, Address: 0x100b3a0, Func Offset: 0
	// Line 474, Address: 0x100b3ac, Func Offset: 0xc
	// Line 475, Address: 0x100b3c0, Func Offset: 0x20
	// Func End, Address: 0x100b3d0, Func Offset: 0x30
}

// 
// Start address: 0x100b3d0
void tobi_b4(_anon0* plwk)
{
	// Line 478, Address: 0x100b3d0, Func Offset: 0
	// Line 479, Address: 0x100b3dc, Func Offset: 0xc
	// Line 480, Address: 0x100b3f0, Func Offset: 0x20
	// Func End, Address: 0x100b400, Func Offset: 0x30
}

// 
// Start address: 0x100b400
void tobi_b6(_anon0* plwk)
{
	// Line 483, Address: 0x100b400, Func Offset: 0
	// Line 484, Address: 0x100b40c, Func Offset: 0xc
	// Line 485, Address: 0x100b420, Func Offset: 0x20
	// Func End, Address: 0x100b430, Func Offset: 0x30
}

// 
// Start address: 0x100b430
void tobi_b(_anon0* plwk, short cal_x, short cal_y)
{
	// Line 488, Address: 0x100b430, Func Offset: 0
	// Line 489, Address: 0x100b440, Func Offset: 0x10
	// Line 490, Address: 0x100b44c, Func Offset: 0x1c
	// Line 491, Address: 0x100b458, Func Offset: 0x28
	// Line 492, Address: 0x100b464, Func Offset: 0x34
	// Line 493, Address: 0x100b470, Func Offset: 0x40
	// Func End, Address: 0x100b47c, Func Offset: 0x4c
}

// 
// Start address: 0x100b480
void evt07(_anon0* plwk)
{
	void(*tbl)(_anon0*)[8];
	// Line 496, Address: 0x100b480, Func Offset: 0
	// Line 497, Address: 0x100b48c, Func Offset: 0xc
	// Line 502, Address: 0x100b4c0, Func Offset: 0x40
	// Line 504, Address: 0x100b4cc, Func Offset: 0x4c
	// Line 505, Address: 0x100b50c, Func Offset: 0x8c
	// Func End, Address: 0x100b51c, Func Offset: 0x9c
}

// 
// Start address: 0x100b520
void tobi_s0(_anon0* plwk)
{
	// Line 508, Address: 0x100b520, Func Offset: 0
	// Line 509, Address: 0x100b52c, Func Offset: 0xc
	// Line 510, Address: 0x100b540, Func Offset: 0x20
	// Func End, Address: 0x100b550, Func Offset: 0x30
}

// 
// Start address: 0x100b550
void tobi_s2(_anon0* plwk)
{
	// Line 513, Address: 0x100b550, Func Offset: 0
	// Line 514, Address: 0x100b55c, Func Offset: 0xc
	// Line 515, Address: 0x100b570, Func Offset: 0x20
	// Func End, Address: 0x100b580, Func Offset: 0x30
}

// 
// Start address: 0x100b580
void tobi_s4(_anon0* plwk)
{
	// Line 518, Address: 0x100b580, Func Offset: 0
	// Line 519, Address: 0x100b58c, Func Offset: 0xc
	// Line 520, Address: 0x100b5a0, Func Offset: 0x20
	// Func End, Address: 0x100b5b0, Func Offset: 0x30
}

// 
// Start address: 0x100b5b0
void tobi_s6(_anon0* plwk)
{
	// Line 523, Address: 0x100b5b0, Func Offset: 0
	// Line 524, Address: 0x100b5bc, Func Offset: 0xc
	// Line 525, Address: 0x100b5d0, Func Offset: 0x20
	// Func End, Address: 0x100b5e0, Func Offset: 0x30
}

// 
// Start address: 0x100b5e0
void tobi_s(_anon0* plwk, short cal_x, short cal_y)
{
	// Line 528, Address: 0x100b5e0, Func Offset: 0
	// Line 529, Address: 0x100b5f0, Func Offset: 0x10
	// Line 530, Address: 0x100b5fc, Func Offset: 0x1c
	// Line 531, Address: 0x100b608, Func Offset: 0x28
	// Line 532, Address: 0x100b614, Func Offset: 0x34
	// Line 533, Address: 0x100b620, Func Offset: 0x40
	// Func End, Address: 0x100b62c, Func Offset: 0x4c
}

// 
// Start address: 0x100b630
void boundchk(_anon0* plwk)
{
	short branch_d0;
	int speed_d1;
	int speed_d2;
	int speed_d3;
	// Line 536, Address: 0x100b630, Func Offset: 0
	// Line 540, Address: 0x100b64c, Func Offset: 0x1c
	// Line 541, Address: 0x100b668, Func Offset: 0x38
	// Line 542, Address: 0x100b66c, Func Offset: 0x3c
	// Line 544, Address: 0x100b670, Func Offset: 0x40
	// Line 545, Address: 0x100b674, Func Offset: 0x44
	// Line 546, Address: 0x100b698, Func Offset: 0x68
	// Line 547, Address: 0x100b6bc, Func Offset: 0x8c
	// Line 548, Address: 0x100b6e0, Func Offset: 0xb0
	// Line 550, Address: 0x100b704, Func Offset: 0xd4
	// Line 552, Address: 0x100b734, Func Offset: 0x104
	// Line 553, Address: 0x100b744, Func Offset: 0x114
	// Line 555, Address: 0x100b74c, Func Offset: 0x11c
	// Line 556, Address: 0x100b754, Func Offset: 0x124
	// Line 557, Address: 0x100b75c, Func Offset: 0x12c
	// Line 559, Address: 0x100b764, Func Offset: 0x134
	// Line 560, Address: 0x100b76c, Func Offset: 0x13c
	// Line 561, Address: 0x100b774, Func Offset: 0x144
	// Line 563, Address: 0x100b77c, Func Offset: 0x14c
	// Line 564, Address: 0x100b78c, Func Offset: 0x15c
	// Line 566, Address: 0x100b794, Func Offset: 0x164
	// Line 567, Address: 0x100b79c, Func Offset: 0x16c
	// Line 568, Address: 0x100b7a4, Func Offset: 0x174
	// Line 570, Address: 0x100b7ac, Func Offset: 0x17c
	// Line 571, Address: 0x100b7b4, Func Offset: 0x184
	// Line 572, Address: 0x100b7bc, Func Offset: 0x18c
	// Line 574, Address: 0x100b7c4, Func Offset: 0x194
	// Line 575, Address: 0x100b7cc, Func Offset: 0x19c
	// Line 576, Address: 0x100b7d4, Func Offset: 0x1a4
	// Line 578, Address: 0x100b7dc, Func Offset: 0x1ac
	// Line 579, Address: 0x100b7e4, Func Offset: 0x1b4
	// Line 580, Address: 0x100b7ec, Func Offset: 0x1bc
	// Line 582, Address: 0x100b7f4, Func Offset: 0x1c4
	// Line 583, Address: 0x100b7fc, Func Offset: 0x1cc
	// Line 584, Address: 0x100b804, Func Offset: 0x1d4
	// Line 586, Address: 0x100b80c, Func Offset: 0x1dc
	// Line 587, Address: 0x100b81c, Func Offset: 0x1ec
	// Line 589, Address: 0x100b824, Func Offset: 0x1f4
	// Line 590, Address: 0x100b834, Func Offset: 0x204
	// Line 592, Address: 0x100b83c, Func Offset: 0x20c
	// Line 593, Address: 0x100b844, Func Offset: 0x214
	// Line 594, Address: 0x100b84c, Func Offset: 0x21c
	// Line 596, Address: 0x100b854, Func Offset: 0x224
	// Line 597, Address: 0x100b85c, Func Offset: 0x22c
	// Line 598, Address: 0x100b864, Func Offset: 0x234
	// Line 600, Address: 0x100b86c, Func Offset: 0x23c
	// Line 601, Address: 0x100b87c, Func Offset: 0x24c
	// Line 603, Address: 0x100b884, Func Offset: 0x254
	// Line 608, Address: 0x100b894, Func Offset: 0x264
	// Line 610, Address: 0x100b8a4, Func Offset: 0x274
	// Line 611, Address: 0x100b8b0, Func Offset: 0x280
	// Line 612, Address: 0x100b8bc, Func Offset: 0x28c
	// Line 613, Address: 0x100b8cc, Func Offset: 0x29c
	// Line 614, Address: 0x100b8d8, Func Offset: 0x2a8
	// Line 615, Address: 0x100b8e8, Func Offset: 0x2b8
	// Func End, Address: 0x100b908, Func Offset: 0x2d8
}

// 
// Start address: 0x100b910
short k_search(_anon0** new_actwk)
{
	short i;
	// Line 621, Address: 0x100b910, Func Offset: 0
	// Line 624, Address: 0x100b91c, Func Offset: 0xc
	// Line 625, Address: 0x100b930, Func Offset: 0x20
	// Line 626, Address: 0x100b994, Func Offset: 0x84
	// Line 627, Address: 0x100b998, Func Offset: 0x88
	// Func End, Address: 0x100b9a8, Func Offset: 0x98
}

// 
// Start address: 0x100b9b0
void jumpset(_anon0* plwk)
{
	// Line 633, Address: 0x100b9b0, Func Offset: 0
	// Line 634, Address: 0x100b9bc, Func Offset: 0xc
	// Line 635, Address: 0x100b9d0, Func Offset: 0x20
	// Line 636, Address: 0x100b9e8, Func Offset: 0x38
	// Line 637, Address: 0x100b9f4, Func Offset: 0x44
	// Line 638, Address: 0x100ba00, Func Offset: 0x50
	// Line 639, Address: 0x100ba0c, Func Offset: 0x5c
	// Line 640, Address: 0x100ba1c, Func Offset: 0x6c
	// Line 641, Address: 0x100ba24, Func Offset: 0x74
	// Line 642, Address: 0x100ba30, Func Offset: 0x80
	// Line 643, Address: 0x100ba38, Func Offset: 0x88
	// Func End, Address: 0x100ba48, Func Offset: 0x98
}

// 
// Start address: 0x100ba50
void rlmove(_anon0* plwk)
{
	// Line 649, Address: 0x100ba50, Func Offset: 0
	// Line 650, Address: 0x100ba58, Func Offset: 0x8
	// Line 651, Address: 0x100ba6c, Func Offset: 0x1c
	// Line 652, Address: 0x100ba84, Func Offset: 0x34
	// Line 653, Address: 0x100ba98, Func Offset: 0x48
	// Line 654, Address: 0x100baac, Func Offset: 0x5c
	// Line 656, Address: 0x100bac0, Func Offset: 0x70
	// Line 657, Address: 0x100bad8, Func Offset: 0x88
	// Line 658, Address: 0x100baec, Func Offset: 0x9c
	// Line 659, Address: 0x100bb00, Func Offset: 0xb0
	// Line 661, Address: 0x100bb14, Func Offset: 0xc4
	// Func End, Address: 0x100bb20, Func Offset: 0xd0
}

// 
// Start address: 0x100bb20
void rlmove_j(_anon0* plwk)
{
	// Line 664, Address: 0x100bb20, Func Offset: 0
	// Line 665, Address: 0x100bb28, Func Offset: 0x8
	// Line 666, Address: 0x100bb3c, Func Offset: 0x1c
	// Line 667, Address: 0x100bb54, Func Offset: 0x34
	// Line 668, Address: 0x100bb68, Func Offset: 0x48
	// Line 669, Address: 0x100bb7c, Func Offset: 0x5c
	// Line 671, Address: 0x100bb90, Func Offset: 0x70
	// Line 672, Address: 0x100bba8, Func Offset: 0x88
	// Line 673, Address: 0x100bbbc, Func Offset: 0x9c
	// Line 674, Address: 0x100bbd0, Func Offset: 0xb0
	// Line 676, Address: 0x100bbe4, Func Offset: 0xc4
	// Func End, Address: 0x100bbf0, Func Offset: 0xd0
}

// 
// Start address: 0x100bbf0
void speed_ud(_anon0* plwk)
{
	short max_speed;
	// Line 682, Address: 0x100bbf0, Func Offset: 0
	// Line 685, Address: 0x100bbfc, Func Offset: 0xc
	// Line 686, Address: 0x100bc10, Func Offset: 0x20
	// Line 687, Address: 0x100bc2c, Func Offset: 0x3c
	// Line 688, Address: 0x100bc44, Func Offset: 0x54
	// Line 689, Address: 0x100bc54, Func Offset: 0x64
	// Line 690, Address: 0x100bc60, Func Offset: 0x70
	// Line 691, Address: 0x100bc68, Func Offset: 0x78
	// Line 692, Address: 0x100bc94, Func Offset: 0xa4
	// Line 694, Address: 0x100bca4, Func Offset: 0xb4
	// Line 695, Address: 0x100bcb4, Func Offset: 0xc4
	// Line 696, Address: 0x100bce0, Func Offset: 0xf0
	// Line 699, Address: 0x100bce8, Func Offset: 0xf8
	// Line 700, Address: 0x100bcf8, Func Offset: 0x108
	// Line 701, Address: 0x100bd20, Func Offset: 0x130
	// Func End, Address: 0x100bd30, Func Offset: 0x140
}

// 
// Start address: 0x100bd30
void go_down(_anon0* plwk)
{
	// Line 704, Address: 0x100bd30, Func Offset: 0
	// Line 705, Address: 0x100bd3c, Func Offset: 0xc
	// Line 707, Address: 0x100bd54, Func Offset: 0x24
	// Func End, Address: 0x100bd64, Func Offset: 0x34
}

// 
// Start address: 0x100bd70
void go_up(_anon0* plwk)
{
	// Line 710, Address: 0x100bd70, Func Offset: 0
	// Line 711, Address: 0x100bd7c, Func Offset: 0xc
	// Line 712, Address: 0x100bd94, Func Offset: 0x24
	// Func End, Address: 0x100bda4, Func Offset: 0x34
}

// 
// Start address: 0x100bdb0
void go_right(_anon0* plwk)
{
	// Line 715, Address: 0x100bdb0, Func Offset: 0
	// Line 716, Address: 0x100bdbc, Func Offset: 0xc
	// Line 717, Address: 0x100bdd4, Func Offset: 0x24
	// Func End, Address: 0x100bde4, Func Offset: 0x34
}

// 
// Start address: 0x100bdf0
void go_left(_anon0* plwk)
{
	// Line 720, Address: 0x100bdf0, Func Offset: 0
	// Line 721, Address: 0x100bdfc, Func Offset: 0xc
	// Line 722, Address: 0x100be14, Func Offset: 0x24
	// Func End, Address: 0x100be24, Func Offset: 0x34
}

// 
// Start address: 0x100be30
void go_x_plus(_anon0* plwk, unsigned short cal_plus, short cal_speed)
{
	short cal_z_kaku;
	int cal_plus_position;
	// Line 725, Address: 0x100be30, Func Offset: 0
	// Line 729, Address: 0x100be4c, Func Offset: 0x1c
	// Line 730, Address: 0x100be74, Func Offset: 0x44
	// Line 731, Address: 0x100be80, Func Offset: 0x50
	// Line 732, Address: 0x100be94, Func Offset: 0x64
	// Line 733, Address: 0x100bea4, Func Offset: 0x74
	// Line 734, Address: 0x100beb4, Func Offset: 0x84
	// Line 735, Address: 0x100becc, Func Offset: 0x9c
	// Line 736, Address: 0x100bee0, Func Offset: 0xb0
	// Line 737, Address: 0x100bef0, Func Offset: 0xc0
	// Line 738, Address: 0x100bf00, Func Offset: 0xd0
	// Line 739, Address: 0x100bf18, Func Offset: 0xe8
	// Func End, Address: 0x100bf30, Func Offset: 0x100
}

// 
// Start address: 0x100bf30
void ptrlget(_anon0* plwk)
{
	// Line 745, Address: 0x100bf30, Func Offset: 0
	// Line 746, Address: 0x100bf38, Func Offset: 0x8
	// Line 747, Address: 0x100bf50, Func Offset: 0x20
	// Line 748, Address: 0x100bf84, Func Offset: 0x54
	// Line 750, Address: 0x100bf8c, Func Offset: 0x5c
	// Line 751, Address: 0x100bfa4, Func Offset: 0x74
	// Line 752, Address: 0x100bfd4, Func Offset: 0xa4
	// Line 762, Address: 0x100bfdc, Func Offset: 0xac
	// Line 763, Address: 0x100bfe8, Func Offset: 0xb8
	// Func End, Address: 0x100bff4, Func Offset: 0xc4
}

// 
// Start address: 0x100c000
void plptsel(_anon0* plwk)
{
	unsigned char cal_pattblno;
	unsigned char tbl[20];
	// Line 769, Address: 0x100c000, Func Offset: 0
	// Line 771, Address: 0x100c010, Func Offset: 0x10
	// Line 779, Address: 0x100c044, Func Offset: 0x44
	// Line 780, Address: 0x100c058, Func Offset: 0x58
	// Line 781, Address: 0x100c060, Func Offset: 0x60
	// Line 782, Address: 0x100c078, Func Offset: 0x78
	// Line 783, Address: 0x100c080, Func Offset: 0x80
	// Line 784, Address: 0x100c098, Func Offset: 0x98
	// Line 785, Address: 0x100c0a0, Func Offset: 0xa0
	// Line 786, Address: 0x100c0b8, Func Offset: 0xb8
	// Line 787, Address: 0x100c0dc, Func Offset: 0xdc
	// Line 788, Address: 0x100c0f8, Func Offset: 0xf8
	// Line 789, Address: 0x100c11c, Func Offset: 0x11c
	// Line 790, Address: 0x100c138, Func Offset: 0x138
	// Line 791, Address: 0x100c15c, Func Offset: 0x15c
	// Line 792, Address: 0x100c178, Func Offset: 0x178
	// Line 793, Address: 0x100c198, Func Offset: 0x198
	// Line 794, Address: 0x100c1b4, Func Offset: 0x1b4
	// Line 795, Address: 0x100c1bc, Func Offset: 0x1bc
	// Line 798, Address: 0x100c1c4, Func Offset: 0x1c4
	// Line 800, Address: 0x100c1d4, Func Offset: 0x1d4
	// Line 801, Address: 0x100c1fc, Func Offset: 0x1fc
	// Line 803, Address: 0x100c204, Func Offset: 0x204
	// Line 804, Address: 0x100c21c, Func Offset: 0x21c
	// Line 805, Address: 0x100c22c, Func Offset: 0x22c
	// Line 807, Address: 0x100c234, Func Offset: 0x234
	// Line 808, Address: 0x100c25c, Func Offset: 0x25c
	// Func End, Address: 0x100c270, Func Offset: 0x270
}

// 
// Start address: 0x100c270
void plcgchg(_anon0* plwk)
{
	// Line 816, Address: 0x100c270, Func Offset: 0
	// Line 817, Address: 0x100c278, Func Offset: 0x8
	// Line 818, Address: 0x100c288, Func Offset: 0x18
	// Func End, Address: 0x100c294, Func Offset: 0x24
}

// 
// Start address: 0x100c2a0
void sibuki(_anon0* sibukiwk)
{
	void(*acttbl)(_anon0*)[3];
	// Line 826, Address: 0x100c2a0, Func Offset: 0
	// Line 827, Address: 0x100c2ac, Func Offset: 0xc
	// Line 833, Address: 0x100c2d0, Func Offset: 0x30
	// Line 834, Address: 0x100c2f4, Func Offset: 0x54
	// Line 835, Address: 0x100c300, Func Offset: 0x60
	// Line 836, Address: 0x100c324, Func Offset: 0x84
	// Func End, Address: 0x100c334, Func Offset: 0x94
}

// 
// Start address: 0x100c340
void sibuki0(_anon0* sibukiwk)
{
	// Line 840, Address: 0x100c340, Func Offset: 0
	// Line 842, Address: 0x100c34c, Func Offset: 0xc
	// Line 843, Address: 0x100c35c, Func Offset: 0x1c
	// Line 844, Address: 0x100c368, Func Offset: 0x28
	// Line 845, Address: 0x100c374, Func Offset: 0x34
	// Line 846, Address: 0x100c384, Func Offset: 0x44
	// Line 847, Address: 0x100c390, Func Offset: 0x50
	// Line 848, Address: 0x100c3a0, Func Offset: 0x60
	// Line 849, Address: 0x100c3ac, Func Offset: 0x6c
	// Line 850, Address: 0x100c3d0, Func Offset: 0x90
	// Line 851, Address: 0x100c3dc, Func Offset: 0x9c
	// Func End, Address: 0x100c3ec, Func Offset: 0xac
}

// 
// Start address: 0x100c3f0
void sibuki1(_anon0* sibukiwk)
{
	// Line 854, Address: 0x100c3f0, Func Offset: 0
	// Line 855, Address: 0x100c3fc, Func Offset: 0xc
	// Line 856, Address: 0x100c424, Func Offset: 0x34
	// Line 857, Address: 0x100c454, Func Offset: 0x64
	// Line 858, Address: 0x100c464, Func Offset: 0x74
	// Line 859, Address: 0x100c470, Func Offset: 0x80
	// Func End, Address: 0x100c480, Func Offset: 0x90
}

// 
// Start address: 0x100c480
void sibuki2(_anon0* sibukiwk)
{
	// Line 862, Address: 0x100c480, Func Offset: 0
	// Line 863, Address: 0x100c488, Func Offset: 0x8
	// Line 864, Address: 0x100c4b8, Func Offset: 0x38
	// Line 865, Address: 0x100c4d8, Func Offset: 0x58
	// Func End, Address: 0x100c4e4, Func Offset: 0x64
}

// 
// Start address: 0x100c4f0
void sibuki_clr()
{
	// Line 869, Address: 0x100c4f0, Func Offset: 0
	// Line 870, Address: 0x100c518, Func Offset: 0x28
	// Func End, Address: 0x100c520, Func Offset: 0x30
}

// 
// Start address: 0x100c520
void kemuri(_anon0* kemuriwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 887, Address: 0x100c520, Func Offset: 0
	// Line 888, Address: 0x100c52c, Func Offset: 0xc
	// Line 893, Address: 0x100c548, Func Offset: 0x28
	// Line 894, Address: 0x100c56c, Func Offset: 0x4c
	// Line 895, Address: 0x100c578, Func Offset: 0x58
	// Func End, Address: 0x100c588, Func Offset: 0x68
}

// 
// Start address: 0x100c590
void kemuri0(_anon0* kemuriwk)
{
	_anon7 cal_random;
	// Line 899, Address: 0x100c590, Func Offset: 0
	// Line 903, Address: 0x100c59c, Func Offset: 0xc
	// Line 904, Address: 0x100c5ac, Func Offset: 0x1c
	// Line 905, Address: 0x100c5b8, Func Offset: 0x28
	// Line 906, Address: 0x100c5c4, Func Offset: 0x34
	// Line 907, Address: 0x100c5d4, Func Offset: 0x44
	// Line 908, Address: 0x100c5e0, Func Offset: 0x50
	// Line 909, Address: 0x100c5f0, Func Offset: 0x60
	// Line 910, Address: 0x100c5fc, Func Offset: 0x6c
	// Line 911, Address: 0x100c620, Func Offset: 0x90
	// Line 912, Address: 0x100c644, Func Offset: 0xb4
	// Line 913, Address: 0x100c670, Func Offset: 0xe0
	// Line 914, Address: 0x100c69c, Func Offset: 0x10c
	// Line 915, Address: 0x100c6a4, Func Offset: 0x114
	// Line 916, Address: 0x100c6b0, Func Offset: 0x120
	// Func End, Address: 0x100c6c0, Func Offset: 0x130
}

// 
// Start address: 0x100c6c0
void kemuri1(_anon0* kemuriwk)
{
	// Line 919, Address: 0x100c6c0, Func Offset: 0
	// Line 920, Address: 0x100c6c8, Func Offset: 0x8
	// Line 921, Address: 0x100c700, Func Offset: 0x40
	// Line 922, Address: 0x100c718, Func Offset: 0x58
	// Line 923, Address: 0x100c728, Func Offset: 0x68
	// Func End, Address: 0x100c734, Func Offset: 0x74
}

// 
// Start address: 0x100c740
void time_stone(_anon0* stonewk)
{
	void(*acttbl)(_anon0*)[4];
	// Line 955, Address: 0x100c740, Func Offset: 0
	// Line 956, Address: 0x100c74c, Func Offset: 0xc
	// Line 963, Address: 0x100c778, Func Offset: 0x38
	// Line 964, Address: 0x100c79c, Func Offset: 0x5c
	// Line 965, Address: 0x100c7a8, Func Offset: 0x68
	// Func End, Address: 0x100c7b8, Func Offset: 0x78
}

// 
// Start address: 0x100c7c0
void t_stone0(_anon0* stonewk)
{
	// Line 969, Address: 0x100c7c0, Func Offset: 0
	// Line 971, Address: 0x100c7cc, Func Offset: 0xc
	// Line 972, Address: 0x100c7dc, Func Offset: 0x1c
	// Line 973, Address: 0x100c7e8, Func Offset: 0x28
	// Line 974, Address: 0x100c7f4, Func Offset: 0x34
	// Line 975, Address: 0x100c804, Func Offset: 0x44
	// Line 976, Address: 0x100c810, Func Offset: 0x50
	// Line 977, Address: 0x100c820, Func Offset: 0x60
	// Line 978, Address: 0x100c82c, Func Offset: 0x6c
	// Func End, Address: 0x100c83c, Func Offset: 0x7c
}

// 
// Start address: 0x100c840
void t_stone1(_anon0* stonewk)
{
	// Line 981, Address: 0x100c840, Func Offset: 0
	// Line 982, Address: 0x100c848, Func Offset: 0x8
	// Line 983, Address: 0x100c880, Func Offset: 0x40
	// Func End, Address: 0x100c88c, Func Offset: 0x4c
}

// 
// Start address: 0x100c890
void t_stone2(_anon0* stonewk)
{
	// Line 986, Address: 0x100c890, Func Offset: 0
	// Line 987, Address: 0x100c89c, Func Offset: 0xc
	// Line 988, Address: 0x100c8ac, Func Offset: 0x1c
	// Line 989, Address: 0x100c8c8, Func Offset: 0x38
	// Line 990, Address: 0x100c8d8, Func Offset: 0x48
	// Line 991, Address: 0x100c900, Func Offset: 0x70
	// Line 992, Address: 0x100c90c, Func Offset: 0x7c
	// Line 993, Address: 0x100c918, Func Offset: 0x88
	// Line 994, Address: 0x100c924, Func Offset: 0x94
	// Func End, Address: 0x100c934, Func Offset: 0xa4
}

// 
// Start address: 0x100c940
void t_stone3(_anon0* stonewk)
{
	// Line 997, Address: 0x100c940, Func Offset: 0
	// Line 998, Address: 0x100c948, Func Offset: 0x8
	// Line 999, Address: 0x100c97c, Func Offset: 0x3c
	// Func End, Address: 0x100c988, Func Offset: 0x48
}

// 
// Start address: 0x100c990
void tskira0(_anon0* kirawk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1005, Address: 0x100c990, Func Offset: 0
	// Line 1006, Address: 0x100c99c, Func Offset: 0xc
	// Line 1011, Address: 0x100c9b8, Func Offset: 0x28
	// Line 1012, Address: 0x100c9dc, Func Offset: 0x4c
	// Line 1013, Address: 0x100c9e8, Func Offset: 0x58
	// Func End, Address: 0x100c9f8, Func Offset: 0x68
}

// 
// Start address: 0x100ca00
void tskira00(_anon0* kirawk)
{
	// Line 1017, Address: 0x100ca00, Func Offset: 0
	// Line 1019, Address: 0x100ca0c, Func Offset: 0xc
	// Line 1020, Address: 0x100ca1c, Func Offset: 0x1c
	// Line 1021, Address: 0x100ca2c, Func Offset: 0x2c
	// Line 1022, Address: 0x100ca3c, Func Offset: 0x3c
	// Line 1023, Address: 0x100ca48, Func Offset: 0x48
	// Func End, Address: 0x100ca58, Func Offset: 0x58
}

// 
// Start address: 0x100ca60
void tskira01(_anon0* kirawk)
{
	// Line 1026, Address: 0x100ca60, Func Offset: 0
	// Line 1027, Address: 0x100ca68, Func Offset: 0x8
	// Line 1028, Address: 0x100ca78, Func Offset: 0x18
	// Line 1029, Address: 0x100ca9c, Func Offset: 0x3c
	// Func End, Address: 0x100caa8, Func Offset: 0x48
}

// 
// Start address: 0x100cab0
void tskira1(_anon0* kirawk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1035, Address: 0x100cab0, Func Offset: 0
	// Line 1036, Address: 0x100cabc, Func Offset: 0xc
	// Line 1041, Address: 0x100cad8, Func Offset: 0x28
	// Line 1042, Address: 0x100cafc, Func Offset: 0x4c
	// Line 1043, Address: 0x100cb08, Func Offset: 0x58
	// Func End, Address: 0x100cb18, Func Offset: 0x68
}

// 
// Start address: 0x100cb20
void tskira10(_anon0* kirawk)
{
	// Line 1046, Address: 0x100cb20, Func Offset: 0
	// Line 1048, Address: 0x100cb2c, Func Offset: 0xc
	// Line 1049, Address: 0x100cb3c, Func Offset: 0x1c
	// Line 1050, Address: 0x100cb4c, Func Offset: 0x2c
	// Line 1051, Address: 0x100cb5c, Func Offset: 0x3c
	// Line 1052, Address: 0x100cb68, Func Offset: 0x48
	// Func End, Address: 0x100cb78, Func Offset: 0x58
}

// 
// Start address: 0x100cb80
void tskira11(_anon0* kirawk)
{
	// Line 1055, Address: 0x100cb80, Func Offset: 0
	// Line 1056, Address: 0x100cb88, Func Offset: 0x8
	// Line 1057, Address: 0x100cb98, Func Offset: 0x18
	// Line 1058, Address: 0x100cbbc, Func Offset: 0x3c
	// Func End, Address: 0x100cbc8, Func Offset: 0x48
}

