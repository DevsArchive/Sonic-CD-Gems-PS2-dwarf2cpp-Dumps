typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_17)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[2];
typedef char type_4[4];
typedef char type_5[4];
typedef char* type_6[4];
typedef char type_7[4];
typedef char* type_8[4];
typedef char type_9[4];
typedef char type_10[4];
typedef char** type_11[5];
typedef char type_12[3];
typedef char type_13[4];
typedef unsigned char type_14[2];
typedef _anon0* type_15[1];
typedef unsigned char type_16[22];
typedef void(*type_18)(_anon1*)[10];
typedef char* type_19[4];
typedef _anon1 type_20[128];
typedef char* type_21[4];
typedef char* type_22[4];
typedef char type_23[4];
typedef char type_24[4];
typedef char type_25[3];
typedef char type_26[4];
typedef char type_27[4];
typedef char type_28[4];
typedef char type_29[4];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
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

char dat00[4];
char dat01[4];
char dat02[4];
char dat03[4];
char* tbl00[4];
char* tbl03[4];
char tbl01_00[4];
char tbl01_01[4];
char tbl01_02[4];
char tbl01_03[4];
char* tbl01[4];
char tbl02_00[3];
char tbl02_01[3];
char* tbl02[4];
char tbl04_00[4];
char tbl04_01[4];
char tbl04_02[4];
char tbl04_03[4];
char* tbl04[4];
char** tbl0[5];
_anon0 block;
_anon0* pat_block6[1];
_anon1 actwk[128];
char stack_pointer;

void block6(_anon1* blockwk);
void main_init(_anon1* blockwk);
void main_move(_anon1* blockwk);
void sub(_anon1* blockwk);
void sub_go(_anon1* blockwk);
void sub_go1(_anon1* blockwk);
void sub_stop0(_anon1* blockwk);
void sub_stop01(_anon1* blockwk);
void sub_stop02(_anon1* blockwk);
void sub_back(_anon1* blockwk);
void sub_back1(_anon1* blockwk);
void sub_stop1(_anon1* blockwk);
void sub_stop11(_anon1* blockwk);
void sub_die(_anon1* blockwk);
unsigned char set_slave(_anon1* blockwk);

// 
// Start address: 0x10195e0
void block6(_anon1* blockwk)
{
	void(*main_tbl)(_anon1*)[2];
	// Line 54, Address: 0x10195e0, Func Offset: 0
	// Line 55, Address: 0x10195ec, Func Offset: 0xc
	// Line 57, Address: 0x1019608, Func Offset: 0x28
	// Line 59, Address: 0x1019634, Func Offset: 0x54
	// Line 60, Address: 0x1019670, Func Offset: 0x90
	// Line 61, Address: 0x1019684, Func Offset: 0xa4
	// Line 62, Address: 0x1019690, Func Offset: 0xb0
	// Line 63, Address: 0x101969c, Func Offset: 0xbc
	// Func End, Address: 0x10196ac, Func Offset: 0xcc
}

// 
// Start address: 0x10196b0
void main_init(_anon1* blockwk)
{
	// Line 67, Address: 0x10196b0, Func Offset: 0
	// Line 68, Address: 0x10196b8, Func Offset: 0x8
	// Line 69, Address: 0x10196c8, Func Offset: 0x18
	// Line 70, Address: 0x10196d8, Func Offset: 0x28
	// Line 71, Address: 0x10196e4, Func Offset: 0x34
	// Line 73, Address: 0x1019708, Func Offset: 0x58
	// Line 74, Address: 0x1019718, Func Offset: 0x68
	// Line 75, Address: 0x101974c, Func Offset: 0x9c
	// Line 76, Address: 0x1019758, Func Offset: 0xa8
	// Line 77, Address: 0x1019760, Func Offset: 0xb0
	// Func End, Address: 0x101976c, Func Offset: 0xbc
}

// 
// Start address: 0x1019770
void main_move(_anon1* blockwk)
{
	// Line 81, Address: 0x1019770, Func Offset: 0
	// Line 82, Address: 0x101977c, Func Offset: 0xc
	// Line 83, Address: 0x1019790, Func Offset: 0x20
	// Line 84, Address: 0x1019798, Func Offset: 0x28
	// Line 86, Address: 0x10197f4, Func Offset: 0x84
	// Line 87, Address: 0x1019818, Func Offset: 0xa8
	// Line 88, Address: 0x1019820, Func Offset: 0xb0
	// Line 89, Address: 0x1019844, Func Offset: 0xd4
	// Func End, Address: 0x1019854, Func Offset: 0xe4
}

// 
// Start address: 0x1019860
void sub(_anon1* blockwk)
{
	_anon1* parent_wk;
	void(*sub_tbl)(_anon1*)[10];
	// Line 103, Address: 0x1019860, Func Offset: 0
	// Line 105, Address: 0x1019870, Func Offset: 0x10
	// Line 109, Address: 0x10198a4, Func Offset: 0x44
	// Line 110, Address: 0x10198c8, Func Offset: 0x68
	// Line 111, Address: 0x10198dc, Func Offset: 0x7c
	// Line 112, Address: 0x10198f0, Func Offset: 0x90
	// Line 113, Address: 0x1019914, Func Offset: 0xb4
	// Line 115, Address: 0x1019928, Func Offset: 0xc8
	// Line 116, Address: 0x1019930, Func Offset: 0xd0
	// Line 117, Address: 0x101996c, Func Offset: 0x10c
	// Line 118, Address: 0x1019984, Func Offset: 0x124
	// Line 119, Address: 0x1019998, Func Offset: 0x138
	// Line 120, Address: 0x10199a4, Func Offset: 0x144
	// Func End, Address: 0x10199b8, Func Offset: 0x158
}

// 
// Start address: 0x10199c0
void sub_go(_anon1* blockwk)
{
	char* speed_tbl;
	char speed_data;
	// Line 124, Address: 0x10199c0, Func Offset: 0
	// Line 127, Address: 0x10199d4, Func Offset: 0x14
	// Line 128, Address: 0x10199e4, Func Offset: 0x24
	// Line 129, Address: 0x10199f0, Func Offset: 0x30
	// Line 131, Address: 0x1019a00, Func Offset: 0x40
	// Line 132, Address: 0x1019a0c, Func Offset: 0x4c
	// Line 134, Address: 0x1019a54, Func Offset: 0x94
	// Line 135, Address: 0x1019a60, Func Offset: 0xa0
	// Line 137, Address: 0x1019a68, Func Offset: 0xa8
	// Line 138, Address: 0x1019a74, Func Offset: 0xb4
	// Line 140, Address: 0x1019a7c, Func Offset: 0xbc
	// Line 141, Address: 0x1019a88, Func Offset: 0xc8
	// Line 143, Address: 0x1019a90, Func Offset: 0xd0
	// Line 148, Address: 0x1019a9c, Func Offset: 0xdc
	// Line 149, Address: 0x1019ad8, Func Offset: 0x118
	// Line 150, Address: 0x1019ae8, Func Offset: 0x128
	// Line 152, Address: 0x1019b0c, Func Offset: 0x14c
	// Line 154, Address: 0x1019b28, Func Offset: 0x168
	// Line 155, Address: 0x1019b34, Func Offset: 0x174
	// Func End, Address: 0x1019b4c, Func Offset: 0x18c
}

// 
// Start address: 0x1019b50
void sub_go1(_anon1* blockwk)
{
	// Line 159, Address: 0x1019b50, Func Offset: 0
	// Line 160, Address: 0x1019b58, Func Offset: 0x8
	// Line 161, Address: 0x1019b70, Func Offset: 0x20
	// Line 162, Address: 0x1019b88, Func Offset: 0x38
	// Line 163, Address: 0x1019bc0, Func Offset: 0x70
	// Func End, Address: 0x1019bcc, Func Offset: 0x7c
}

// 
// Start address: 0x1019bd0
void sub_stop0(_anon1* blockwk)
{
	_anon1* parent_wk;
	// Line 167, Address: 0x1019bd0, Func Offset: 0
	// Line 170, Address: 0x1019bdc, Func Offset: 0xc
	// Line 172, Address: 0x1019c00, Func Offset: 0x30
	// Line 173, Address: 0x1019c10, Func Offset: 0x40
	// Line 174, Address: 0x1019c18, Func Offset: 0x48
	// Line 175, Address: 0x1019c30, Func Offset: 0x60
	// Line 177, Address: 0x1019c44, Func Offset: 0x74
	// Line 178, Address: 0x1019c4c, Func Offset: 0x7c
	// Func End, Address: 0x1019c5c, Func Offset: 0x8c
}

// 
// Start address: 0x1019c60
void sub_stop01(_anon1* blockwk)
{
	// Line 182, Address: 0x1019c60, Func Offset: 0
	// Line 183, Address: 0x1019c6c, Func Offset: 0xc
	// Line 184, Address: 0x1019c94, Func Offset: 0x34
	// Line 185, Address: 0x1019ca4, Func Offset: 0x44
	// Line 186, Address: 0x1019cbc, Func Offset: 0x5c
	// Line 187, Address: 0x1019ccc, Func Offset: 0x6c
	// Line 188, Address: 0x1019cf8, Func Offset: 0x98
	// Func End, Address: 0x1019d08, Func Offset: 0xa8
}

// 
// Start address: 0x1019d10
void sub_stop02(_anon1* blockwk)
{
	// Line 192, Address: 0x1019d10, Func Offset: 0
	// Line 193, Address: 0x1019d18, Func Offset: 0x8
	// Line 194, Address: 0x1019d28, Func Offset: 0x18
	// Func End, Address: 0x1019d34, Func Offset: 0x24
}

// 
// Start address: 0x1019d40
void sub_back(_anon1* blockwk)
{
	// Line 198, Address: 0x1019d40, Func Offset: 0
	// Line 199, Address: 0x1019d48, Func Offset: 0x8
	// Line 200, Address: 0x1019d58, Func Offset: 0x18
	// Line 201, Address: 0x1019d64, Func Offset: 0x24
	// Line 202, Address: 0x1019d88, Func Offset: 0x48
	// Func End, Address: 0x1019d94, Func Offset: 0x54
}

// 
// Start address: 0x1019da0
void sub_back1(_anon1* blockwk)
{
	// Line 206, Address: 0x1019da0, Func Offset: 0
	// Line 207, Address: 0x1019da8, Func Offset: 0x8
	// Line 208, Address: 0x1019dc0, Func Offset: 0x20
	// Line 209, Address: 0x1019dd8, Func Offset: 0x38
	// Line 210, Address: 0x1019e10, Func Offset: 0x70
	// Func End, Address: 0x1019e1c, Func Offset: 0x7c
}

// 
// Start address: 0x1019e20
void sub_stop1(_anon1* blockwk)
{
	_anon1* parent_wk;
	// Line 214, Address: 0x1019e20, Func Offset: 0
	// Line 217, Address: 0x1019e2c, Func Offset: 0xc
	// Line 219, Address: 0x1019e50, Func Offset: 0x30
	// Line 220, Address: 0x1019e60, Func Offset: 0x40
	// Line 221, Address: 0x1019e68, Func Offset: 0x48
	// Line 222, Address: 0x1019e80, Func Offset: 0x60
	// Line 224, Address: 0x1019e94, Func Offset: 0x74
	// Line 225, Address: 0x1019e9c, Func Offset: 0x7c
	// Func End, Address: 0x1019eac, Func Offset: 0x8c
}

// 
// Start address: 0x1019eb0
void sub_stop11(_anon1* blockwk)
{
	_anon1* parent_wk;
	// Line 229, Address: 0x1019eb0, Func Offset: 0
	// Line 232, Address: 0x1019ebc, Func Offset: 0xc
	// Line 233, Address: 0x1019ee4, Func Offset: 0x34
	// Line 234, Address: 0x1019f08, Func Offset: 0x58
	// Line 235, Address: 0x1019f28, Func Offset: 0x78
	// Line 236, Address: 0x1019f38, Func Offset: 0x88
	// Func End, Address: 0x1019f48, Func Offset: 0x98
}

// 
// Start address: 0x1019f50
void sub_die(_anon1* blockwk)
{
	// Line 240, Address: 0x1019f50, Func Offset: 0
	// Line 241, Address: 0x1019f5c, Func Offset: 0xc
	// Line 242, Address: 0x1019f94, Func Offset: 0x44
	// Line 243, Address: 0x1019fa0, Func Offset: 0x50
	// Line 244, Address: 0x1019fac, Func Offset: 0x5c
	// Func End, Address: 0x1019fbc, Func Offset: 0x6c
}

// 
// Start address: 0x1019fc0
unsigned char set_slave(_anon1* blockwk)
{
	char* speed_tbl;
	char counter;
	_anon1* new_actwk;
	// Line 248, Address: 0x1019fc0, Func Offset: 0
	// Line 249, Address: 0x1019fd4, Func Offset: 0x14
	// Line 252, Address: 0x1019fd8, Func Offset: 0x18
	// Line 253, Address: 0x1019fe0, Func Offset: 0x20
	// Line 254, Address: 0x101a01c, Func Offset: 0x5c
	// Line 255, Address: 0x101a03c, Func Offset: 0x7c
	// Line 256, Address: 0x101a04c, Func Offset: 0x8c
	// Line 257, Address: 0x101a05c, Func Offset: 0x9c
	// Line 258, Address: 0x101a06c, Func Offset: 0xac
	// Line 259, Address: 0x101a07c, Func Offset: 0xbc
	// Line 260, Address: 0x101a08c, Func Offset: 0xcc
	// Line 261, Address: 0x101a09c, Func Offset: 0xdc
	// Line 262, Address: 0x101a0ac, Func Offset: 0xec
	// Line 263, Address: 0x101a0bc, Func Offset: 0xfc
	// Line 264, Address: 0x101a0cc, Func Offset: 0x10c
	// Line 265, Address: 0x101a0dc, Func Offset: 0x11c
	// Line 266, Address: 0x101a0ec, Func Offset: 0x12c
	// Line 267, Address: 0x101a0fc, Func Offset: 0x13c
	// Line 268, Address: 0x101a120, Func Offset: 0x160
	// Line 269, Address: 0x101a130, Func Offset: 0x170
	// Line 270, Address: 0x101a140, Func Offset: 0x180
	// Line 271, Address: 0x101a150, Func Offset: 0x190
	// Line 272, Address: 0x101a160, Func Offset: 0x1a0
	// Line 273, Address: 0x101a170, Func Offset: 0x1b0
	// Line 274, Address: 0x101a180, Func Offset: 0x1c0
	// Line 275, Address: 0x101a190, Func Offset: 0x1d0
	// Line 276, Address: 0x101a1a0, Func Offset: 0x1e0
	// Line 277, Address: 0x101a1b0, Func Offset: 0x1f0
	// Line 278, Address: 0x101a1b8, Func Offset: 0x1f8
	// Line 279, Address: 0x101a1c8, Func Offset: 0x208
	// Line 280, Address: 0x101a1d8, Func Offset: 0x218
	// Line 281, Address: 0x101a1e8, Func Offset: 0x228
	// Line 284, Address: 0x101a1f8, Func Offset: 0x238
	// Line 285, Address: 0x101a204, Func Offset: 0x244
	// Line 286, Address: 0x101a238, Func Offset: 0x278
	// Line 287, Address: 0x101a24c, Func Offset: 0x28c
	// Line 288, Address: 0x101a250, Func Offset: 0x290
	// Func End, Address: 0x101a268, Func Offset: 0x2a8
}

