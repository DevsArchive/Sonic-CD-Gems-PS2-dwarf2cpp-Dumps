typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;


typedef short type[128];

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
	short w;
	_anon4 b;
};

struct _anon4
{
	char l;
	char h;
};

union _anon5
{
	unsigned short w;
	_anon6 b;
};

struct _anon6
{
	unsigned char l;
	unsigned char h;
};

_anon5 swdata1;
int ranum;

void sync();
void swclear();
int random();
short cos_planet(short sDir);
short sin_planet(short sDir);
void unlze(unsigned char* pSrc, unsigned char* pDst);

// 
// Start address: 0x10032e0
void sync()
{
	// Line 28, Address: 0x10032e0, Func Offset: 0
	// Func End, Address: 0x10032e8, Func Offset: 0x8
}

// 
// Start address: 0x10032f0
void swclear()
{
	// Line 36, Address: 0x10032f0, Func Offset: 0
	// Line 37, Address: 0x10032fc, Func Offset: 0xc
	// Func End, Address: 0x1003304, Func Offset: 0x14
}

// 
// Start address: 0x1003310
int random()
{
	_anon0 lD0;
	_anon0 lD1;
	// Line 44, Address: 0x1003310, Func Offset: 0
	// Line 47, Address: 0x1003314, Func Offset: 0x4
	// Line 48, Address: 0x1003334, Func Offset: 0x24
	// Line 49, Address: 0x100333c, Func Offset: 0x2c
	// Line 50, Address: 0x1003348, Func Offset: 0x38
	// Line 51, Address: 0x1003358, Func Offset: 0x48
	// Line 52, Address: 0x1003364, Func Offset: 0x54
	// Line 53, Address: 0x1003374, Func Offset: 0x64
	// Line 54, Address: 0x100337c, Func Offset: 0x6c
	// Line 55, Address: 0x10033bc, Func Offset: 0xac
	// Line 56, Address: 0x10033cc, Func Offset: 0xbc
	// Line 57, Address: 0x10033d4, Func Offset: 0xc4
	// Line 58, Address: 0x1003414, Func Offset: 0x104
	// Line 59, Address: 0x1003420, Func Offset: 0x110
	// Line 60, Address: 0x1003424, Func Offset: 0x114
	// Func End, Address: 0x1003430, Func Offset: 0x120
}

// 
// Start address: 0x1003430
short cos_planet(short sDir)
{
	// Line 67, Address: 0x1003430, Func Offset: 0
	// Line 68, Address: 0x100343c, Func Offset: 0xc
	// Line 69, Address: 0x100345c, Func Offset: 0x2c
	// Func End, Address: 0x100346c, Func Offset: 0x3c
}

// 
// Start address: 0x1003470
short sin_planet(short sDir)
{
	short sDirWk;
	short sin_tbl[128];
	// Line 76, Address: 0x1003470, Func Offset: 0
	// Line 90, Address: 0x100347c, Func Offset: 0xc
	// Line 91, Address: 0x1003488, Func Offset: 0x18
	// Line 92, Address: 0x1003494, Func Offset: 0x24
	// Line 93, Address: 0x10034c8, Func Offset: 0x58
	// Line 94, Address: 0x10034d4, Func Offset: 0x64
	// Line 95, Address: 0x10034f8, Func Offset: 0x88
	// Line 96, Address: 0x100352c, Func Offset: 0xbc
	// Line 97, Address: 0x1003530, Func Offset: 0xc0
	// Func End, Address: 0x1003540, Func Offset: 0xd0
}

// 
// Start address: 0x1003540
void unlze(unsigned char* pSrc, unsigned char* pDst)
{
	_anon3 sp;
	short sD5;
	short sD4;
	short sD3;
	short sD2;
	short sD1;
	short sD0;
	unsigned char CarryFlg;
	unsigned char XFlg;
	// Line 105, Address: 0x1003540, Func Offset: 0
	// Line 110, Address: 0x100356c, Func Offset: 0x2c
	// Line 111, Address: 0x1003580, Func Offset: 0x40
	// Line 112, Address: 0x1003594, Func Offset: 0x54
	// Line 113, Address: 0x10035a0, Func Offset: 0x60
	// Line 117, Address: 0x10035ac, Func Offset: 0x6c
	// Line 118, Address: 0x10035c0, Func Offset: 0x80
	// Line 119, Address: 0x10035c4, Func Offset: 0x84
	// Line 120, Address: 0x10035e0, Func Offset: 0xa0
	// Line 122, Address: 0x1003604, Func Offset: 0xc4
	// Line 123, Address: 0x1003618, Func Offset: 0xd8
	// Line 124, Address: 0x100362c, Func Offset: 0xec
	// Line 125, Address: 0x1003638, Func Offset: 0xf8
	// Line 128, Address: 0x1003644, Func Offset: 0x104
	// Line 130, Address: 0x1003650, Func Offset: 0x110
	// Line 131, Address: 0x1003670, Func Offset: 0x130
	// Line 134, Address: 0x1003678, Func Offset: 0x138
	// Line 135, Address: 0x100367c, Func Offset: 0x13c
	// Line 136, Address: 0x1003690, Func Offset: 0x150
	// Line 137, Address: 0x1003694, Func Offset: 0x154
	// Line 139, Address: 0x10036b8, Func Offset: 0x178
	// Line 140, Address: 0x10036cc, Func Offset: 0x18c
	// Line 141, Address: 0x10036e0, Func Offset: 0x1a0
	// Line 142, Address: 0x10036ec, Func Offset: 0x1ac
	// Line 145, Address: 0x10036f8, Func Offset: 0x1b8
	// Line 147, Address: 0x1003704, Func Offset: 0x1c4
	// Line 148, Address: 0x1003720, Func Offset: 0x1e0
	// Line 150, Address: 0x1003744, Func Offset: 0x204
	// Line 151, Address: 0x1003758, Func Offset: 0x218
	// Line 152, Address: 0x100376c, Func Offset: 0x22c
	// Line 153, Address: 0x1003778, Func Offset: 0x238
	// Line 156, Address: 0x1003784, Func Offset: 0x244
	// Line 157, Address: 0x100379c, Func Offset: 0x25c
	// Line 158, Address: 0x10037c0, Func Offset: 0x280
	// Line 159, Address: 0x10037c4, Func Offset: 0x284
	// Line 160, Address: 0x10037d0, Func Offset: 0x290
	// Line 161, Address: 0x10037dc, Func Offset: 0x29c
	// Line 162, Address: 0x1003810, Func Offset: 0x2d0
	// Line 166, Address: 0x1003818, Func Offset: 0x2d8
	// Line 167, Address: 0x1003834, Func Offset: 0x2f4
	// Line 168, Address: 0x1003850, Func Offset: 0x310
	// Line 169, Address: 0x100385c, Func Offset: 0x31c
	// Line 170, Address: 0x1003888, Func Offset: 0x348
	// Line 171, Address: 0x10038a4, Func Offset: 0x364
	// Line 172, Address: 0x10038d0, Func Offset: 0x390
	// Line 175, Address: 0x10038e4, Func Offset: 0x3a4
	// Line 176, Address: 0x1003918, Func Offset: 0x3d8
	// Line 177, Address: 0x100392c, Func Offset: 0x3ec
	// Line 178, Address: 0x1003934, Func Offset: 0x3f4
	// Line 181, Address: 0x100393c, Func Offset: 0x3fc
	// Line 187, Address: 0x1003958, Func Offset: 0x418
	// Line 188, Address: 0x1003978, Func Offset: 0x438
	// Line 189, Address: 0x100398c, Func Offset: 0x44c
	// Line 190, Address: 0x10039b0, Func Offset: 0x470
	// Line 191, Address: 0x10039b8, Func Offset: 0x478
	// Func End, Address: 0x10039e4, Func Offset: 0x4a4
}

