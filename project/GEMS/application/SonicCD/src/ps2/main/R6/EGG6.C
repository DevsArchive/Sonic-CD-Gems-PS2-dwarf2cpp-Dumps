typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);
typedef void(*type_8)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char* type_2[1];
typedef void(*type_4)(_anon1*)[3];
typedef char type_5[28];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef void(*type_9)(_anon1*)[5];
typedef _anon0* type_10[2];
typedef unsigned char type_11[4];
typedef _anon1 type_12[128];
typedef _anon0* type_13[2];
typedef char type_14[21];

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

_anon0 egg00;
_anon0 pat00;
_anon0* pat_egg6[2];
char tbl0[28];
char tbl1[21];
unsigned char stack_pointer;
unsigned char generate_flag;
_anon1 actwk[128];
unsigned char pchg_bomb00[4];
unsigned char* pchg_bomb[1];
_anon0 bomb0;
_anon0 bomb1;
_anon0* pat_bomb[2];

void eggz6(_anon1* eggwk);
void act_init(_anon1* eggwk);
void act_check(_anon1* eggwk);
void act_make0(_anon1* eggwk);
void act_wait(_anon1* eggwk);
void act_make1(_anon1* eggwk);
void bomb(_anon1* bombwk);
void bomb_init(_anon1* bombwk);
void bomb_fall(_anon1* bombwk);
void bomb_die(_anon1* bombwk);

// 
// Start address: 0x101a7a0
void eggz6(_anon1* eggwk)
{
	void(*act_tbl)(_anon1*)[5];
	// Line 47, Address: 0x101a7a0, Func Offset: 0
	// Line 48, Address: 0x101a7ac, Func Offset: 0xc
	// Line 51, Address: 0x101a7d8, Func Offset: 0x38
	// Line 53, Address: 0x101a804, Func Offset: 0x64
	// Line 54, Address: 0x101a80c, Func Offset: 0x6c
	// Line 55, Address: 0x101a848, Func Offset: 0xa8
	// Line 56, Address: 0x101a85c, Func Offset: 0xbc
	// Line 57, Address: 0x101a868, Func Offset: 0xc8
	// Line 58, Address: 0x101a88c, Func Offset: 0xec
	// Func End, Address: 0x101a89c, Func Offset: 0xfc
}

// 
// Start address: 0x101a8a0
void act_init(_anon1* eggwk)
{
	// Line 62, Address: 0x101a8a0, Func Offset: 0
	// Line 63, Address: 0x101a8ac, Func Offset: 0xc
	// Line 66, Address: 0x101a8e0, Func Offset: 0x40
	// Line 67, Address: 0x101a8f0, Func Offset: 0x50
	// Line 68, Address: 0x101a900, Func Offset: 0x60
	// Line 69, Address: 0x101a90c, Func Offset: 0x6c
	// Line 70, Address: 0x101a924, Func Offset: 0x84
	// Line 72, Address: 0x101a930, Func Offset: 0x90
	// Line 73, Address: 0x101a940, Func Offset: 0xa0
	// Line 74, Address: 0x101a94c, Func Offset: 0xac
	// Line 75, Address: 0x101a95c, Func Offset: 0xbc
	// Func End, Address: 0x101a96c, Func Offset: 0xcc
}

// 
// Start address: 0x101a970
void act_check(_anon1* eggwk)
{
	// Line 79, Address: 0x101a970, Func Offset: 0
	// Line 80, Address: 0x101a97c, Func Offset: 0xc
	// Line 81, Address: 0x101a990, Func Offset: 0x20
	// Line 82, Address: 0x101a9a4, Func Offset: 0x34
	// Line 83, Address: 0x101a9b4, Func Offset: 0x44
	// Line 84, Address: 0x101a9e4, Func Offset: 0x74
	// Line 85, Address: 0x101a9ec, Func Offset: 0x7c
	// Line 86, Address: 0x101aa00, Func Offset: 0x90
	// Func End, Address: 0x101aa10, Func Offset: 0xa0
}

// 
// Start address: 0x101aa10
void act_make0(_anon1* eggwk)
{
	char* tbl_address;
	char tbl_data;
	short position_data_x;
	short position_data_y;
	_anon1* new_actwk;
	// Line 90, Address: 0x101aa10, Func Offset: 0
	// Line 95, Address: 0x101aa2c, Func Offset: 0x1c
	// Line 96, Address: 0x101aa34, Func Offset: 0x24
	// Line 97, Address: 0x101aa58, Func Offset: 0x48
	// Line 98, Address: 0x101aa68, Func Offset: 0x58
	// Line 99, Address: 0x101aa74, Func Offset: 0x64
	// Line 100, Address: 0x101aa80, Func Offset: 0x70
	// Line 102, Address: 0x101aa88, Func Offset: 0x78
	// Line 103, Address: 0x101aab0, Func Offset: 0xa0
	// Line 104, Address: 0x101aacc, Func Offset: 0xbc
	// Line 105, Address: 0x101aae8, Func Offset: 0xd8
	// Line 106, Address: 0x101aaf0, Func Offset: 0xe0
	// Line 107, Address: 0x101ab04, Func Offset: 0xf4
	// Line 108, Address: 0x101ab10, Func Offset: 0x100
	// Line 109, Address: 0x101ab1c, Func Offset: 0x10c
	// Line 110, Address: 0x101ab48, Func Offset: 0x138
	// Line 111, Address: 0x101ab74, Func Offset: 0x164
	// Line 112, Address: 0x101ab80, Func Offset: 0x170
	// Func End, Address: 0x101aba0, Func Offset: 0x190
}

// 
// Start address: 0x101aba0
void act_wait(_anon1* eggwk)
{
	// Line 116, Address: 0x101aba0, Func Offset: 0
	// Line 117, Address: 0x101aba8, Func Offset: 0x8
	// Line 118, Address: 0x101abd8, Func Offset: 0x38
	// Func End, Address: 0x101abe4, Func Offset: 0x44
}

// 
// Start address: 0x101abf0
void act_make1(_anon1* eggwk)
{
	char* tbl_address;
	short data_x;
	short data_y;
	_anon1* new_actwk;
	// Line 122, Address: 0x101abf0, Func Offset: 0
	// Line 127, Address: 0x101ac08, Func Offset: 0x18
	// Line 128, Address: 0x101ac10, Func Offset: 0x20
	// Line 129, Address: 0x101ac18, Func Offset: 0x28
	// Line 130, Address: 0x101ac34, Func Offset: 0x44
	// Line 131, Address: 0x101ac5c, Func Offset: 0x6c
	// Line 132, Address: 0x101ac6c, Func Offset: 0x7c
	// Line 133, Address: 0x101ac78, Func Offset: 0x88
	// Line 134, Address: 0x101aca4, Func Offset: 0xb4
	// Line 135, Address: 0x101acd4, Func Offset: 0xe4
	// Line 137, Address: 0x101acf8, Func Offset: 0x108
	// Line 138, Address: 0x101ad30, Func Offset: 0x140
	// Line 139, Address: 0x101ad3c, Func Offset: 0x14c
	// Func End, Address: 0x101ad58, Func Offset: 0x168
}

// 
// Start address: 0x101ad60
void bomb(_anon1* bombwk)
{
	void(*bomb_tbl)(_anon1*)[3];
	// Line 149, Address: 0x101ad60, Func Offset: 0
	// Line 150, Address: 0x101ad6c, Func Offset: 0xc
	// Line 152, Address: 0x101ad90, Func Offset: 0x30
	// Line 153, Address: 0x101adcc, Func Offset: 0x6c
	// Line 154, Address: 0x101add8, Func Offset: 0x78
	// Func End, Address: 0x101ade8, Func Offset: 0x88
}

// 
// Start address: 0x101adf0
void bomb_init(_anon1* bombwk)
{
	// Line 158, Address: 0x101adf0, Func Offset: 0
	// Line 159, Address: 0x101adf8, Func Offset: 0x8
	// Line 160, Address: 0x101ae08, Func Offset: 0x18
	// Line 161, Address: 0x101ae18, Func Offset: 0x28
	// Line 162, Address: 0x101ae24, Func Offset: 0x34
	// Line 164, Address: 0x101ae48, Func Offset: 0x58
	// Line 165, Address: 0x101ae58, Func Offset: 0x68
	// Line 166, Address: 0x101ae64, Func Offset: 0x74
	// Line 167, Address: 0x101ae70, Func Offset: 0x80
	// Func End, Address: 0x101ae7c, Func Offset: 0x8c
}

// 
// Start address: 0x101ae80
void bomb_fall(_anon1* bombwk)
{
	// Line 171, Address: 0x101ae80, Func Offset: 0
	// Line 172, Address: 0x101ae8c, Func Offset: 0xc
	// Line 173, Address: 0x101aea8, Func Offset: 0x28
	// Line 174, Address: 0x101aec0, Func Offset: 0x40
	// Line 175, Address: 0x101aeec, Func Offset: 0x6c
	// Line 176, Address: 0x101aefc, Func Offset: 0x7c
	// Line 177, Address: 0x101af10, Func Offset: 0x90
	// Func End, Address: 0x101af20, Func Offset: 0xa0
}

// 
// Start address: 0x101af20
void bomb_die(_anon1* bombwk)
{
	// Line 181, Address: 0x101af20, Func Offset: 0
	// Line 182, Address: 0x101af2c, Func Offset: 0xc
	// Line 183, Address: 0x101af38, Func Offset: 0x18
	// Line 184, Address: 0x101af40, Func Offset: 0x20
	// Line 185, Address: 0x101af4c, Func Offset: 0x2c
	// Line 186, Address: 0x101af58, Func Offset: 0x38
	// Func End, Address: 0x101af68, Func Offset: 0x48
}

