typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;


typedef unsigned short type_0[130];
typedef unsigned short type_1[65];

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

union _anon3
{
	unsigned int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	unsigned short l;
	unsigned short h;
};

struct _anon5
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

unsigned char ufoleft;
unsigned short ringno;
unsigned char tdecflg;
unsigned char tcnt20;
unsigned char spgmmode;
_anon3 se_no;
_anon0 spe_time;
unsigned char pldeadflg;
unsigned char game_start;
unsigned char time_stop;
unsigned short sincostbl[130];
unsigned short acostbl[65];
unsigned int ranum;

void ufo_dec();
void ring_add(unsigned short iD0);
void time_dec();
void dec();
void time_time_attack();
void angleget(short iXtget, short iYtget, short iXbase, short iYbase, unsigned char* iAngle, unsigned char* iDirflg);
void speedget(unsigned char bAngle, unsigned char bDirflg, short iBaseSpd, int* lXspeed, int* lYspeed);
int dstnsget(unsigned char bAngle, unsigned char bDirflg, short iXposi, short iYposi, short iXbase, short iYbase);
int random();

// 
// Start address: 0x10040a0
void ufo_dec()
{
	// Line 32, Address: 0x10040a0, Func Offset: 0
	// Line 33, Address: 0x10040b4, Func Offset: 0x14
	// Func End, Address: 0x10040bc, Func Offset: 0x1c
}

// 
// Start address: 0x10040c0
void ring_add(unsigned short iD0)
{
	// Line 37, Address: 0x10040c0, Func Offset: 0
	// Line 38, Address: 0x10040c8, Func Offset: 0x8
	// Line 39, Address: 0x10040e0, Func Offset: 0x20
	// Line 40, Address: 0x10040f8, Func Offset: 0x38
	// Line 41, Address: 0x1004104, Func Offset: 0x44
	// Func End, Address: 0x1004110, Func Offset: 0x50
}

// 
// Start address: 0x1004110
void time_dec()
{
	// Line 45, Address: 0x1004110, Func Offset: 0
	// Line 46, Address: 0x1004118, Func Offset: 0x8
	// Line 48, Address: 0x1004130, Func Offset: 0x20
	// Line 49, Address: 0x1004138, Func Offset: 0x28
	// Line 51, Address: 0x1004140, Func Offset: 0x30
	// Line 52, Address: 0x1004154, Func Offset: 0x44
	// Line 54, Address: 0x1004168, Func Offset: 0x58
	// Line 55, Address: 0x1004174, Func Offset: 0x64
	// Line 59, Address: 0x100417c, Func Offset: 0x6c
	// Line 61, Address: 0x1004190, Func Offset: 0x80
	// Line 62, Address: 0x10041a4, Func Offset: 0x94
	// Line 64, Address: 0x10041ac, Func Offset: 0x9c
	// Func End, Address: 0x10041bc, Func Offset: 0xac
}

// 
// Start address: 0x10041c0
void dec()
{
	// Line 68, Address: 0x10041c0, Func Offset: 0
	// Line 69, Address: 0x10041c8, Func Offset: 0x8
	// Line 70, Address: 0x10041dc, Func Offset: 0x1c
	// Line 71, Address: 0x10041f0, Func Offset: 0x30
	// Line 73, Address: 0x100420c, Func Offset: 0x4c
	// Line 74, Address: 0x1004214, Func Offset: 0x54
	// Line 75, Address: 0x100421c, Func Offset: 0x5c
	// Line 78, Address: 0x1004228, Func Offset: 0x68
	// Line 79, Address: 0x1004230, Func Offset: 0x70
	// Line 80, Address: 0x100424c, Func Offset: 0x8c
	// Line 81, Address: 0x1004258, Func Offset: 0x98
	// Func End, Address: 0x1004268, Func Offset: 0xa8
}

// 
// Start address: 0x1004270
void time_time_attack()
{
	// Line 86, Address: 0x1004270, Func Offset: 0
	// Line 87, Address: 0x1004284, Func Offset: 0x14
	// Line 88, Address: 0x1004298, Func Offset: 0x28
	// Line 89, Address: 0x10042ac, Func Offset: 0x3c
	// Line 91, Address: 0x10042c8, Func Offset: 0x58
	// Line 92, Address: 0x10042dc, Func Offset: 0x6c
	// Line 93, Address: 0x10042f0, Func Offset: 0x80
	// Line 95, Address: 0x100430c, Func Offset: 0x9c
	// Line 96, Address: 0x1004320, Func Offset: 0xb0
	// Line 97, Address: 0x1004334, Func Offset: 0xc4
	// Line 99, Address: 0x1004350, Func Offset: 0xe0
	// Line 100, Address: 0x1004360, Func Offset: 0xf0
	// Line 101, Address: 0x100436c, Func Offset: 0xfc
	// Func End, Address: 0x1004374, Func Offset: 0x104
}

// 
// Start address: 0x1004380
void angleget(short iXtget, short iYtget, short iXbase, short iYbase, unsigned char* iAngle, unsigned char* iDirflg)
{
	short iD1;
	short iD2;
	short iD3;
	short iwk;
	int lD1;
	// Line 123, Address: 0x1004380, Func Offset: 0
	// Line 128, Address: 0x10043b0, Func Offset: 0x30
	// Line 129, Address: 0x10043b4, Func Offset: 0x34
	// Line 130, Address: 0x10043c0, Func Offset: 0x40
	// Line 131, Address: 0x10043d0, Func Offset: 0x50
	// Line 133, Address: 0x10043e0, Func Offset: 0x60
	// Line 135, Address: 0x10043f4, Func Offset: 0x74
	// Line 138, Address: 0x1004408, Func Offset: 0x88
	// Line 139, Address: 0x1004414, Func Offset: 0x94
	// Line 140, Address: 0x1004430, Func Offset: 0xb0
	// Line 142, Address: 0x1004438, Func Offset: 0xb8
	// Line 145, Address: 0x100444c, Func Offset: 0xcc
	// Line 146, Address: 0x100445c, Func Offset: 0xdc
	// Line 148, Address: 0x1004470, Func Offset: 0xf0
	// Line 150, Address: 0x1004484, Func Offset: 0x104
	// Line 151, Address: 0x1004490, Func Offset: 0x110
	// Line 153, Address: 0x10044ac, Func Offset: 0x12c
	// Line 155, Address: 0x10044d0, Func Offset: 0x150
	// Line 156, Address: 0x10044dc, Func Offset: 0x15c
	// Line 157, Address: 0x10044e8, Func Offset: 0x168
	// Line 158, Address: 0x10044f0, Func Offset: 0x170
	// Line 160, Address: 0x10044f4, Func Offset: 0x174
	// Line 161, Address: 0x1004500, Func Offset: 0x180
	// Line 162, Address: 0x1004504, Func Offset: 0x184
	// Line 164, Address: 0x1004518, Func Offset: 0x198
	// Line 165, Address: 0x100451c, Func Offset: 0x19c
	// Line 167, Address: 0x1004524, Func Offset: 0x1a4
	// Line 169, Address: 0x1004544, Func Offset: 0x1c4
	// Line 170, Address: 0x1004558, Func Offset: 0x1d8
	// Line 171, Address: 0x100456c, Func Offset: 0x1ec
	// Line 173, Address: 0x1004578, Func Offset: 0x1f8
	// Line 174, Address: 0x1004584, Func Offset: 0x204
	// Line 175, Address: 0x1004590, Func Offset: 0x210
	// Func End, Address: 0x10045b0, Func Offset: 0x230
}

// 
// Start address: 0x10045b0
void speedget(unsigned char bAngle, unsigned char bDirflg, short iBaseSpd, int* lXspeed, int* lYspeed)
{
	int lwk;
	_anon0 lD0;
	_anon0 lD1;
	// Line 195, Address: 0x10045b0, Func Offset: 0
	// Line 199, Address: 0x10045cc, Func Offset: 0x1c
	// Line 200, Address: 0x10045d0, Func Offset: 0x20
	// Line 201, Address: 0x10045d4, Func Offset: 0x24
	// Line 203, Address: 0x10045e0, Func Offset: 0x30
	// Line 205, Address: 0x10045ec, Func Offset: 0x3c
	// Line 207, Address: 0x1004600, Func Offset: 0x50
	// Line 208, Address: 0x1004604, Func Offset: 0x54
	// Line 209, Address: 0x1004618, Func Offset: 0x68
	// Line 213, Address: 0x1004620, Func Offset: 0x70
	// Line 214, Address: 0x100464c, Func Offset: 0x9c
	// Line 216, Address: 0x1004670, Func Offset: 0xc0
	// Line 217, Address: 0x1004690, Func Offset: 0xe0
	// Line 218, Address: 0x10046d0, Func Offset: 0x120
	// Line 219, Address: 0x10046f0, Func Offset: 0x140
	// Line 222, Address: 0x1004730, Func Offset: 0x180
	// Line 224, Address: 0x1004744, Func Offset: 0x194
	// Line 225, Address: 0x1004748, Func Offset: 0x198
	// Line 226, Address: 0x1004750, Func Offset: 0x1a0
	// Line 229, Address: 0x1004754, Func Offset: 0x1a4
	// Line 230, Address: 0x1004768, Func Offset: 0x1b8
	// Line 232, Address: 0x1004784, Func Offset: 0x1d4
	// Line 233, Address: 0x10047c4, Func Offset: 0x214
	// Line 234, Address: 0x10047c8, Func Offset: 0x218
	// Line 235, Address: 0x10047d4, Func Offset: 0x224
	// Line 236, Address: 0x10047e8, Func Offset: 0x238
	// Line 238, Address: 0x1004804, Func Offset: 0x254
	// Line 239, Address: 0x1004844, Func Offset: 0x294
	// Line 240, Address: 0x1004848, Func Offset: 0x298
	// Line 242, Address: 0x1004854, Func Offset: 0x2a4
	// Line 243, Address: 0x1004860, Func Offset: 0x2b0
	// Line 244, Address: 0x100486c, Func Offset: 0x2bc
	// Func End, Address: 0x100487c, Func Offset: 0x2cc
}

// 
// Start address: 0x1004880
int dstnsget(unsigned char bAngle, unsigned char bDirflg, short iXposi, short iYposi, short iXbase, short iYbase)
{
	short iD0;
	short iD1;
	short iD2;
	int lD0;
	// Line 267, Address: 0x1004880, Func Offset: 0
	// Line 271, Address: 0x10048ac, Func Offset: 0x2c
	// Line 273, Address: 0x10048bc, Func Offset: 0x3c
	// Line 274, Address: 0x10048e0, Func Offset: 0x60
	// Line 276, Address: 0x10048f4, Func Offset: 0x74
	// Line 277, Address: 0x1004900, Func Offset: 0x80
	// Line 278, Address: 0x100490c, Func Offset: 0x8c
	// Line 282, Address: 0x1004914, Func Offset: 0x94
	// Line 283, Address: 0x1004920, Func Offset: 0xa0
	// Line 286, Address: 0x100492c, Func Offset: 0xac
	// Line 287, Address: 0x1004938, Func Offset: 0xb8
	// Line 288, Address: 0x1004948, Func Offset: 0xc8
	// Line 290, Address: 0x1004964, Func Offset: 0xe4
	// Line 291, Address: 0x1004978, Func Offset: 0xf8
	// Line 292, Address: 0x100497c, Func Offset: 0xfc
	// Line 293, Address: 0x1004980, Func Offset: 0x100
	// Func End, Address: 0x100499c, Func Offset: 0x11c
}

// 
// Start address: 0x10049a0
int random()
{
	_anon0 lD0;
	_anon0 lD1;
	// Line 305, Address: 0x10049a0, Func Offset: 0
	// Line 308, Address: 0x10049a4, Func Offset: 0x4
	// Line 309, Address: 0x10049b0, Func Offset: 0x10
	// Line 310, Address: 0x10049c4, Func Offset: 0x24
	// Line 312, Address: 0x10049d0, Func Offset: 0x30
	// Line 313, Address: 0x10049d8, Func Offset: 0x38
	// Line 314, Address: 0x1004a28, Func Offset: 0x88
	// Line 315, Address: 0x1004a38, Func Offset: 0x98
	// Line 316, Address: 0x1004a88, Func Offset: 0xe8
	// Line 317, Address: 0x1004a98, Func Offset: 0xf8
	// Line 318, Address: 0x1004aa0, Func Offset: 0x100
	// Line 319, Address: 0x1004ae0, Func Offset: 0x140
	// Line 320, Address: 0x1004af0, Func Offset: 0x150
	// Line 321, Address: 0x1004af8, Func Offset: 0x158
	// Line 322, Address: 0x1004b38, Func Offset: 0x198
	// Line 323, Address: 0x1004b44, Func Offset: 0x1a4
	// Line 324, Address: 0x1004b48, Func Offset: 0x1a8
	// Func End, Address: 0x1004b54, Func Offset: 0x1b4
}

