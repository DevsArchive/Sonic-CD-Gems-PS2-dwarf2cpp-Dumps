typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef char type_2[58];
typedef char* type_3[1];
typedef char type_4[4];
typedef _anon0* type_5[5];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef char* type_8[2];
typedef _anon1 type_9[128];
typedef unsigned char type_10[30];
typedef unsigned short type_11[11];
typedef _anon0* type_12[3];

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

_anon0 patnull;
_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0* pat_friend0[3];
_anon0* pat_friend1[5];
char p00[4];
unsigned char p01[30];
char p10[58];
char* pchg0[2];
char* pchg1[1];
unsigned short tbl0sproffset[11];
_anon1 actwk[128];
unsigned char time_flag;
_anon5 stageno;

void friend(_anon1* actionwk);
void tsubame(_anon1* actionwk);
void t_init(_anon1* actionwk);
void t_move(_anon1* actionwk);
void t_movie(_anon1* actionwk);
void t_roll(_anon1* actionwk, short d2, short d3);
void pecky(_anon1* actionwk);
void p_init(_anon1* actionwk);
void p_move(_anon1* actionwk);
void p_end(_anon1* actionwk);
void p_rev(_anon1* actionwk);
void p_movie(_anon1* actionwk);
void set_sproffset(_anon1* actionwk);

// 
// Start address: 0x101b630
void friend(_anon1* actionwk)
{
	// Line 128, Address: 0x101b630, Func Offset: 0
	// Line 130, Address: 0x101b63c, Func Offset: 0xc
	// Line 133, Address: 0x101b65c, Func Offset: 0x2c
	// Line 134, Address: 0x101b678, Func Offset: 0x48
	// Line 136, Address: 0x101b68c, Func Offset: 0x5c
	// Line 137, Address: 0x101b698, Func Offset: 0x68
	// Func End, Address: 0x101b6a8, Func Offset: 0x78
}

// 
// Start address: 0x101b6b0
void tsubame(_anon1* actionwk)
{
	// Line 139, Address: 0x101b6b0, Func Offset: 0
	// Line 140, Address: 0x101b6bc, Func Offset: 0xc
	// Line 143, Address: 0x101b6f0, Func Offset: 0x40
	// Line 144, Address: 0x101b6fc, Func Offset: 0x4c
	// Line 146, Address: 0x101b704, Func Offset: 0x54
	// Line 147, Address: 0x101b710, Func Offset: 0x60
	// Line 149, Address: 0x101b718, Func Offset: 0x68
	// Line 152, Address: 0x101b724, Func Offset: 0x74
	// Func End, Address: 0x101b734, Func Offset: 0x84
}

// 
// Start address: 0x101b740
void t_init(_anon1* actionwk)
{
	// Line 154, Address: 0x101b740, Func Offset: 0
	// Line 155, Address: 0x101b74c, Func Offset: 0xc
	// Line 156, Address: 0x101b75c, Func Offset: 0x1c
	// Line 158, Address: 0x101b768, Func Offset: 0x28
	// Line 159, Address: 0x101b774, Func Offset: 0x34
	// Line 160, Address: 0x101b780, Func Offset: 0x40
	// Line 161, Address: 0x101b78c, Func Offset: 0x4c
	// Line 162, Address: 0x101b798, Func Offset: 0x58
	// Line 163, Address: 0x101b7a8, Func Offset: 0x68
	// Line 164, Address: 0x101b7b8, Func Offset: 0x78
	// Line 165, Address: 0x101b7c8, Func Offset: 0x88
	// Line 166, Address: 0x101b7e8, Func Offset: 0xa8
	// Line 168, Address: 0x101b7f4, Func Offset: 0xb4
	// Line 170, Address: 0x101b80c, Func Offset: 0xcc
	// Line 171, Address: 0x101b81c, Func Offset: 0xdc
	// Line 172, Address: 0x101b828, Func Offset: 0xe8
	// Line 173, Address: 0x101b834, Func Offset: 0xf4
	// Line 176, Address: 0x101b83c, Func Offset: 0xfc
	// Line 177, Address: 0x101b848, Func Offset: 0x108
	// Line 178, Address: 0x101b858, Func Offset: 0x118
	// Line 179, Address: 0x101b864, Func Offset: 0x124
	// Line 181, Address: 0x101b870, Func Offset: 0x130
	// Func End, Address: 0x101b880, Func Offset: 0x140
}

// 
// Start address: 0x101b880
void t_move(_anon1* actionwk)
{
	char d0;
	char d1;
	// Line 183, Address: 0x101b880, Func Offset: 0
	// Line 186, Address: 0x101b894, Func Offset: 0x14
	// Line 187, Address: 0x101b8a8, Func Offset: 0x28
	// Line 188, Address: 0x101b8fc, Func Offset: 0x7c
	// Line 189, Address: 0x101b908, Func Offset: 0x88
	// Line 191, Address: 0x101b918, Func Offset: 0x98
	// Line 192, Address: 0x101b928, Func Offset: 0xa8
	// Line 193, Address: 0x101b944, Func Offset: 0xc4
	// Line 196, Address: 0x101b964, Func Offset: 0xe4
	// Line 197, Address: 0x101b96c, Func Offset: 0xec
	// Line 198, Address: 0x101b980, Func Offset: 0x100
	// Line 199, Address: 0x101b98c, Func Offset: 0x10c
	// Line 200, Address: 0x101b9a0, Func Offset: 0x120
	// Func End, Address: 0x101b9b8, Func Offset: 0x138
}

// 
// Start address: 0x101b9c0
void t_movie(_anon1* actionwk)
{
	_anon1* a1;
	// Line 202, Address: 0x101b9c0, Func Offset: 0
	// Line 205, Address: 0x101b9d0, Func Offset: 0x10
	// Line 206, Address: 0x101b9f4, Func Offset: 0x34
	// Line 208, Address: 0x101ba14, Func Offset: 0x54
	// Line 209, Address: 0x101ba20, Func Offset: 0x60
	// Line 211, Address: 0x101ba28, Func Offset: 0x68
	// Line 212, Address: 0x101ba3c, Func Offset: 0x7c
	// Line 213, Address: 0x101ba4c, Func Offset: 0x8c
	// Line 215, Address: 0x101ba84, Func Offset: 0xc4
	// Line 216, Address: 0x101ba98, Func Offset: 0xd8
	// Line 217, Address: 0x101baa4, Func Offset: 0xe4
	// Func End, Address: 0x101bab8, Func Offset: 0xf8
}

// 
// Start address: 0x101bac0
void t_roll(_anon1* actionwk, short d2, short d3)
{
	short sin;
	short cos;
	// Line 219, Address: 0x101bac0, Func Offset: 0
	// Line 222, Address: 0x101bad4, Func Offset: 0x14
	// Line 223, Address: 0x101baec, Func Offset: 0x2c
	// Line 224, Address: 0x101bafc, Func Offset: 0x3c
	// Line 225, Address: 0x101bb0c, Func Offset: 0x4c
	// Line 226, Address: 0x101bb3c, Func Offset: 0x7c
	// Line 227, Address: 0x101bb6c, Func Offset: 0xac
	// Func End, Address: 0x101bb7c, Func Offset: 0xbc
}

// 
// Start address: 0x101bb80
void pecky(_anon1* actionwk)
{
	// Line 229, Address: 0x101bb80, Func Offset: 0
	// Line 230, Address: 0x101bb8c, Func Offset: 0xc
	// Line 233, Address: 0x101bbd8, Func Offset: 0x58
	// Line 234, Address: 0x101bbe4, Func Offset: 0x64
	// Line 236, Address: 0x101bbec, Func Offset: 0x6c
	// Line 237, Address: 0x101bbf8, Func Offset: 0x78
	// Line 239, Address: 0x101bc00, Func Offset: 0x80
	// Line 240, Address: 0x101bc0c, Func Offset: 0x8c
	// Line 242, Address: 0x101bc14, Func Offset: 0x94
	// Line 243, Address: 0x101bc20, Func Offset: 0xa0
	// Line 245, Address: 0x101bc28, Func Offset: 0xa8
	// Line 248, Address: 0x101bc34, Func Offset: 0xb4
	// Func End, Address: 0x101bc44, Func Offset: 0xc4
}

// 
// Start address: 0x101bc50
void p_init(_anon1* actionwk)
{
	// Line 250, Address: 0x101bc50, Func Offset: 0
	// Line 251, Address: 0x101bc5c, Func Offset: 0xc
	// Line 252, Address: 0x101bc6c, Func Offset: 0x1c
	// Line 253, Address: 0x101bc7c, Func Offset: 0x2c
	// Line 254, Address: 0x101bc88, Func Offset: 0x38
	// Line 255, Address: 0x101bc94, Func Offset: 0x44
	// Line 256, Address: 0x101bca0, Func Offset: 0x50
	// Line 257, Address: 0x101bcac, Func Offset: 0x5c
	// Line 259, Address: 0x101bcbc, Func Offset: 0x6c
	// Line 260, Address: 0x101bcc8, Func Offset: 0x78
	// Line 262, Address: 0x101bce0, Func Offset: 0x90
	// Line 264, Address: 0x101bcec, Func Offset: 0x9c
	// Line 267, Address: 0x101bcf4, Func Offset: 0xa4
	// Line 268, Address: 0x101bd00, Func Offset: 0xb0
	// Line 270, Address: 0x101bd0c, Func Offset: 0xbc
	// Func End, Address: 0x101bd1c, Func Offset: 0xcc
}

// 
// Start address: 0x101bd20
void p_move(_anon1* actionwk)
{
	short d1;
	// Line 272, Address: 0x101bd20, Func Offset: 0
	// Line 275, Address: 0x101bd30, Func Offset: 0x10
	// Line 276, Address: 0x101bd48, Func Offset: 0x28
	// Line 278, Address: 0x101bd60, Func Offset: 0x40
	// Line 279, Address: 0x101bd70, Func Offset: 0x50
	// Line 280, Address: 0x101bd80, Func Offset: 0x60
	// Line 282, Address: 0x101bd90, Func Offset: 0x70
	// Line 283, Address: 0x101bd9c, Func Offset: 0x7c
	// Line 284, Address: 0x101bdb0, Func Offset: 0x90
	// Line 286, Address: 0x101bdc0, Func Offset: 0xa0
	// Line 287, Address: 0x101bdd0, Func Offset: 0xb0
	// Line 288, Address: 0x101bde0, Func Offset: 0xc0
	// Line 290, Address: 0x101bdec, Func Offset: 0xcc
	// Line 291, Address: 0x101bdf8, Func Offset: 0xd8
	// Func End, Address: 0x101be0c, Func Offset: 0xec
}

// 
// Start address: 0x101be10
void p_end(_anon1* actionwk)
{
	// Line 293, Address: 0x101be10, Func Offset: 0
	// Line 294, Address: 0x101be1c, Func Offset: 0xc
	// Line 295, Address: 0x101be28, Func Offset: 0x18
	// Line 296, Address: 0x101be34, Func Offset: 0x24
	// Func End, Address: 0x101be44, Func Offset: 0x34
}

// 
// Start address: 0x101be50
void p_rev(_anon1* actionwk)
{
	// Line 298, Address: 0x101be50, Func Offset: 0
	// Line 299, Address: 0x101be5c, Func Offset: 0xc
	// Line 300, Address: 0x101be68, Func Offset: 0x18
	// Line 302, Address: 0x101be7c, Func Offset: 0x2c
	// Line 303, Address: 0x101be9c, Func Offset: 0x4c
	// Line 304, Address: 0x101bea8, Func Offset: 0x58
	// Func End, Address: 0x101beb8, Func Offset: 0x68
}

// 
// Start address: 0x101bec0
void p_movie(_anon1* actionwk)
{
	_anon1* a1;
	// Line 306, Address: 0x101bec0, Func Offset: 0
	// Line 309, Address: 0x101bed0, Func Offset: 0x10
	// Line 310, Address: 0x101bef4, Func Offset: 0x34
	// Line 312, Address: 0x101bf14, Func Offset: 0x54
	// Line 313, Address: 0x101bf20, Func Offset: 0x60
	// Line 315, Address: 0x101bf28, Func Offset: 0x68
	// Line 316, Address: 0x101bf3c, Func Offset: 0x7c
	// Line 317, Address: 0x101bf48, Func Offset: 0x88
	// Func End, Address: 0x101bf5c, Func Offset: 0x9c
}

// 
// Start address: 0x101bf60
void set_sproffset(_anon1* actionwk)
{
	unsigned short* a1;
	unsigned short d0;
	// Line 319, Address: 0x101bf60, Func Offset: 0
	// Line 323, Address: 0x101bf70, Func Offset: 0x10
	// Line 324, Address: 0x101bf78, Func Offset: 0x18
	// Line 325, Address: 0x101bfac, Func Offset: 0x4c
	// Line 326, Address: 0x101bfc4, Func Offset: 0x64
	// Func End, Address: 0x101bfd8, Func Offset: 0x78
}

