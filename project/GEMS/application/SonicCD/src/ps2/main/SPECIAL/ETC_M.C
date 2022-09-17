typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_4)(int, int, int, int, int);

typedef unsigned short type_0[2];
typedef unsigned short type_1[2][3];
typedef unsigned short type_2[2][3][2];
typedef unsigned short type_3[20];
typedef int type_5[8];
typedef int type_6[24];

union _anon0
{
	int l;
	_anon1 w;
	_anon2 b;
};

struct _anon1
{
	short l;
	short h;
};

struct _anon2
{
	char b4;
	char b3;
	char b2;
	char b1;
};

short sonic_upcnt;
short sonic_upcnt2;
int subtbl[8];
unsigned short sonicup_no;
void(*SetGrid)(int, int, int, int, int);
int time_bonus;
unsigned char nullflg;
int ring_bonus;
int game_score;
unsigned short disp_ascii[20];
_anon0 spe_time;
unsigned char spgmmode;
unsigned short ringno;
unsigned char ufoleft;
int chrtbl[24];

void sonic_disp();
void sonic_disp_disp(short tbl_no);
void time_bonus_disp();
void ring_bonus_disp();
void game_score_disp();
void cset(int* subtbl, unsigned short x, unsigned short y, int disp_data, short counter);
unsigned short cntminus(unsigned short* work, unsigned short minus_data, unsigned short under_limit, unsigned short upper_limit);
unsigned short cntplus(unsigned short* work, unsigned short plus_data, unsigned short under_limit, unsigned short upper_limit);
void spetime_disp();
void ringno_disp();
void ufoleft_disp();
void sset(int* subtbl, unsigned short x, unsigned short y, int disp_data, short counter);
void rfill(unsigned int* address, unsigned int data, short size);
void rcopy(unsigned int* address1, unsigned int* address2, short size);

// 
// Start address: 0x1003500
void sonic_disp()
{
	unsigned short sonic_extend;
	// Line 30, Address: 0x1003500, Func Offset: 0
	// Line 33, Address: 0x100350c, Func Offset: 0xc
	// Line 34, Address: 0x100354c, Func Offset: 0x4c
	// Line 35, Address: 0x1003574, Func Offset: 0x74
	// Line 36, Address: 0x100358c, Func Offset: 0x8c
	// Line 37, Address: 0x10035b0, Func Offset: 0xb0
	// Line 39, Address: 0x10035f4, Func Offset: 0xf4
	// Line 41, Address: 0x1003600, Func Offset: 0x100
	// Line 43, Address: 0x100360c, Func Offset: 0x10c
	// Line 45, Address: 0x1003618, Func Offset: 0x118
	// Line 47, Address: 0x1003624, Func Offset: 0x124
	// Line 51, Address: 0x1003630, Func Offset: 0x130
	// Func End, Address: 0x1003644, Func Offset: 0x144
}

// 
// Start address: 0x1003650
void sonic_disp_disp(short tbl_no)
{
	int x;
	int y;
	unsigned short chibi_sonic_map[2][3][2];
	// Line 54, Address: 0x1003650, Func Offset: 0
	// Line 71, Address: 0x1003664, Func Offset: 0x14
	// Line 72, Address: 0x1003670, Func Offset: 0x20
	// Line 73, Address: 0x100367c, Func Offset: 0x2c
	// Line 75, Address: 0x10036ec, Func Offset: 0x9c
	// Line 76, Address: 0x10036fc, Func Offset: 0xac
	// Line 78, Address: 0x100370c, Func Offset: 0xbc
	// Func End, Address: 0x1003724, Func Offset: 0xd4
}

// 
// Start address: 0x1003730
void time_bonus_disp()
{
	// Line 102, Address: 0x1003730, Func Offset: 0
	// Line 103, Address: 0x1003738, Func Offset: 0x8
	// Line 105, Address: 0x1003740, Func Offset: 0x10
	// Line 106, Address: 0x1003764, Func Offset: 0x34
	// Func End, Address: 0x1003774, Func Offset: 0x44
}

// 
// Start address: 0x1003780
void ring_bonus_disp()
{
	// Line 109, Address: 0x1003780, Func Offset: 0
	// Line 110, Address: 0x1003788, Func Offset: 0x8
	// Line 112, Address: 0x1003790, Func Offset: 0x10
	// Line 113, Address: 0x10037b4, Func Offset: 0x34
	// Func End, Address: 0x10037c4, Func Offset: 0x44
}

// 
// Start address: 0x10037d0
void game_score_disp()
{
	// Line 116, Address: 0x10037d0, Func Offset: 0
	// Line 117, Address: 0x10037d8, Func Offset: 0x8
	// Line 119, Address: 0x10037e0, Func Offset: 0x10
	// Line 120, Address: 0x1003804, Func Offset: 0x34
	// Func End, Address: 0x1003814, Func Offset: 0x44
}

// 
// Start address: 0x1003820
void cset(int* subtbl, unsigned short x, unsigned short y, int disp_data, short counter)
{
	short one_number;
	short i;
	// Line 134, Address: 0x1003820, Func Offset: 0
	// Line 137, Address: 0x1003844, Func Offset: 0x24
	// Line 138, Address: 0x1003860, Func Offset: 0x40
	// Line 139, Address: 0x100386c, Func Offset: 0x4c
	// Line 141, Address: 0x10038ac, Func Offset: 0x8c
	// Line 142, Address: 0x10038e0, Func Offset: 0xc0
	// Line 144, Address: 0x1003904, Func Offset: 0xe4
	// Line 145, Address: 0x1003910, Func Offset: 0xf0
	// Line 146, Address: 0x1003958, Func Offset: 0x138
	// Line 147, Address: 0x10039a8, Func Offset: 0x188
	// Line 149, Address: 0x10039b0, Func Offset: 0x190
	// Line 150, Address: 0x10039dc, Func Offset: 0x1bc
	// Line 152, Address: 0x1003a0c, Func Offset: 0x1ec
	// Line 153, Address: 0x1003a18, Func Offset: 0x1f8
	// Line 154, Address: 0x1003a44, Func Offset: 0x224
	// Line 157, Address: 0x1003a4c, Func Offset: 0x22c
	// Line 159, Address: 0x1003a58, Func Offset: 0x238
	// Line 160, Address: 0x1003a84, Func Offset: 0x264
	// Line 161, Address: 0x1003ab4, Func Offset: 0x294
	// Line 162, Address: 0x1003ac0, Func Offset: 0x2a0
	// Line 164, Address: 0x1003aec, Func Offset: 0x2cc
	// Line 165, Address: 0x1003b20, Func Offset: 0x300
	// Line 167, Address: 0x1003b58, Func Offset: 0x338
	// Func End, Address: 0x1003b70, Func Offset: 0x350
}

// 
// Start address: 0x1003b70
unsigned short cntminus(unsigned short* work, unsigned short minus_data, unsigned short under_limit, unsigned short upper_limit)
{
	// Line 182, Address: 0x1003b70, Func Offset: 0
	// Line 183, Address: 0x1003b84, Func Offset: 0x14
	// Line 184, Address: 0x1003bdc, Func Offset: 0x6c
	// Line 185, Address: 0x1003be4, Func Offset: 0x74
	// Func End, Address: 0x1003bf0, Func Offset: 0x80
}

// 
// Start address: 0x1003bf0
unsigned short cntplus(unsigned short* work, unsigned short plus_data, unsigned short under_limit, unsigned short upper_limit)
{
	// Line 188, Address: 0x1003bf0, Func Offset: 0
	// Line 189, Address: 0x1003c04, Func Offset: 0x14
	// Line 190, Address: 0x1003c44, Func Offset: 0x54
	// Line 191, Address: 0x1003c4c, Func Offset: 0x5c
	// Func End, Address: 0x1003c58, Func Offset: 0x68
}

// 
// Start address: 0x1003c60
void spetime_disp()
{
	// Line 197, Address: 0x1003c60, Func Offset: 0
	// Line 198, Address: 0x1003c68, Func Offset: 0x8
	// Line 200, Address: 0x1003c80, Func Offset: 0x20
	// Line 201, Address: 0x1003ca4, Func Offset: 0x44
	// Line 203, Address: 0x1003cac, Func Offset: 0x4c
	// Line 204, Address: 0x1003cd8, Func Offset: 0x78
	// Line 205, Address: 0x1003d04, Func Offset: 0xa4
	// Line 208, Address: 0x1003d58, Func Offset: 0xf8
	// Func End, Address: 0x1003d68, Func Offset: 0x108
}

// 
// Start address: 0x1003d70
void ringno_disp()
{
	// Line 211, Address: 0x1003d70, Func Offset: 0
	// Line 212, Address: 0x1003d78, Func Offset: 0x8
	// Line 213, Address: 0x1003da0, Func Offset: 0x30
	// Func End, Address: 0x1003db0, Func Offset: 0x40
}

// 
// Start address: 0x1003db0
void ufoleft_disp()
{
	// Line 216, Address: 0x1003db0, Func Offset: 0
	// Line 217, Address: 0x1003db8, Func Offset: 0x8
	// Line 218, Address: 0x1003de0, Func Offset: 0x30
	// Func End, Address: 0x1003df0, Func Offset: 0x40
}

// 
// Start address: 0x1003df0
void sset(int* subtbl, unsigned short x, unsigned short y, int disp_data, short counter)
{
	short one_number;
	short i;
	int disp_x;
	int disp_y;
	// Line 250, Address: 0x1003df0, Func Offset: 0
	// Line 251, Address: 0x1003e1c, Func Offset: 0x2c
	// Line 254, Address: 0x1003e20, Func Offset: 0x30
	// Line 257, Address: 0x1003e48, Func Offset: 0x58
	// Line 258, Address: 0x1003e88, Func Offset: 0x98
	// Line 259, Address: 0x1003ecc, Func Offset: 0xdc
	// Line 260, Address: 0x1003f08, Func Offset: 0x118
	// Line 261, Address: 0x1003f48, Func Offset: 0x158
	// Line 262, Address: 0x1003f4c, Func Offset: 0x15c
	// Line 263, Address: 0x1003f6c, Func Offset: 0x17c
	// Func End, Address: 0x1003f8c, Func Offset: 0x19c
}

// 
// Start address: 0x1003f90
void rfill(unsigned int* address, unsigned int data, short size)
{
	// Line 299, Address: 0x1003f90, Func Offset: 0
	// Line 300, Address: 0x1003fa0, Func Offset: 0x10
	// Line 301, Address: 0x1003ffc, Func Offset: 0x6c
	// Func End, Address: 0x1004008, Func Offset: 0x78
}

// 
// Start address: 0x1004010
void rcopy(unsigned int* address1, unsigned int* address2, short size)
{
	// Line 303, Address: 0x1004010, Func Offset: 0
	// Line 304, Address: 0x1004020, Func Offset: 0x10
	// Line 305, Address: 0x1004088, Func Offset: 0x78
	// Func End, Address: 0x1004094, Func Offset: 0x84
}

