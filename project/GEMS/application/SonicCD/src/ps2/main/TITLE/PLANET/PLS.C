typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;

typedef _anon0*(*type_0)(unsigned int);
typedef void(*type_2)();

typedef unsigned char type_1[256];
typedef void(*type_3)()[3];

struct _anon0
{
	unsigned int On;
	unsigned int Press;
	unsigned int Release;
	short X1;
	short Y1;
	short X2;
	short Y2;
};

struct _anon1
{
	short actno;
	unsigned char actflg;
	unsigned char ACT_NO;
	short spdcnt;
	short k_kaku;
	short x_kaku;
	_anon3 x_posi;
	_anon3 y_posi;
	_anon3 z_posi;
	_anon3 k_speed;
	_anon3 x_speed;
	_anon3 y_speed;
	_anon3 z_speed;
};

struct _anon2
{
	short x;
	short y;
	short z;
	short az;
	short sz;
	short cz;
	short xscale;
	short yscale;
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	unsigned short w;
	_anon7 b;
};

struct _anon7
{
	unsigned char l;
	unsigned char h;
};

void(*player_acttbl)()[3];
_anon1 playwk;
_anon3 rotspeed;
short zoomflg;
unsigned short rotflg;
_anon2 zoomwk;
_anon6 swdata1;
unsigned char comflag_m;
unsigned char comflag_s;
unsigned char keyBuf[256];
_anon0*(*sPeriPadGet)(unsigned int);
unsigned char push_flg_s;

void player();
void play0();
void play1();
void check_Bbtn();
void check_Cbtn();
void play2();

// 
// Start address: 0x1008570
void player()
{
	// Line 51, Address: 0x1008570, Func Offset: 0
	// Line 52, Address: 0x1008578, Func Offset: 0x8
	// Line 53, Address: 0x10085a0, Func Offset: 0x30
	// Func End, Address: 0x10085b0, Func Offset: 0x40
}

// 
// Start address: 0x10085b0
void play0()
{
	// Line 66, Address: 0x10085b0, Func Offset: 0
	// Line 67, Address: 0x10085bc, Func Offset: 0xc
	// Line 68, Address: 0x10085c8, Func Offset: 0x18
	// Line 69, Address: 0x10085d4, Func Offset: 0x24
	// Line 71, Address: 0x10085dc, Func Offset: 0x2c
	// Line 72, Address: 0x10085e8, Func Offset: 0x38
	// Line 73, Address: 0x10085f4, Func Offset: 0x44
	// Line 75, Address: 0x10085fc, Func Offset: 0x4c
	// Line 76, Address: 0x1008608, Func Offset: 0x58
	// Line 77, Address: 0x1008614, Func Offset: 0x64
	// Line 78, Address: 0x1008620, Func Offset: 0x70
	// Line 79, Address: 0x1008634, Func Offset: 0x84
	// Func End, Address: 0x100863c, Func Offset: 0x8c
}

// 
// Start address: 0x1008640
void play1()
{
	short iD0;
	short iD5;
	short iD6;
	_anon0* padStatus;
	// Line 91, Address: 0x1008640, Func Offset: 0
	// Line 108, Address: 0x1008658, Func Offset: 0x18
	// Line 109, Address: 0x1008670, Func Offset: 0x30
	// Line 110, Address: 0x1008680, Func Offset: 0x40
	// Line 112, Address: 0x1008694, Func Offset: 0x54
	// Line 113, Address: 0x100869c, Func Offset: 0x5c
	// Line 114, Address: 0x10086ac, Func Offset: 0x6c
	// Line 116, Address: 0x10086c0, Func Offset: 0x80
	// Line 119, Address: 0x10086c8, Func Offset: 0x88
	// Line 121, Address: 0x10086e0, Func Offset: 0xa0
	// Line 122, Address: 0x10086f4, Func Offset: 0xb4
	// Line 123, Address: 0x10086fc, Func Offset: 0xbc
	// Line 126, Address: 0x1008704, Func Offset: 0xc4
	// Line 127, Address: 0x100871c, Func Offset: 0xdc
	// Line 131, Address: 0x1008728, Func Offset: 0xe8
	// Line 133, Address: 0x1008730, Func Offset: 0xf0
	// Line 135, Address: 0x1008738, Func Offset: 0xf8
	// Line 136, Address: 0x1008748, Func Offset: 0x108
	// Line 137, Address: 0x1008754, Func Offset: 0x114
	// Line 139, Address: 0x1008770, Func Offset: 0x130
	// Line 141, Address: 0x1008788, Func Offset: 0x148
	// Line 142, Address: 0x100879c, Func Offset: 0x15c
	// Line 145, Address: 0x10087b0, Func Offset: 0x170
	// Line 147, Address: 0x10087c8, Func Offset: 0x188
	// Line 148, Address: 0x10087dc, Func Offset: 0x19c
	// Line 151, Address: 0x10087f0, Func Offset: 0x1b0
	// Line 153, Address: 0x1008808, Func Offset: 0x1c8
	// Line 154, Address: 0x100881c, Func Offset: 0x1dc
	// Line 157, Address: 0x1008830, Func Offset: 0x1f0
	// Line 159, Address: 0x1008848, Func Offset: 0x208
	// Line 160, Address: 0x100885c, Func Offset: 0x21c
	// Line 164, Address: 0x1008870, Func Offset: 0x230
	// Line 165, Address: 0x1008894, Func Offset: 0x254
	// Line 166, Address: 0x10088b8, Func Offset: 0x278
	// Line 168, Address: 0x10088c0, Func Offset: 0x280
	// Line 169, Address: 0x10088e4, Func Offset: 0x2a4
	// Line 170, Address: 0x10088f0, Func Offset: 0x2b0
	// Line 171, Address: 0x1008914, Func Offset: 0x2d4
	// Line 173, Address: 0x100891c, Func Offset: 0x2dc
	// Line 174, Address: 0x1008940, Func Offset: 0x300
	// Line 175, Address: 0x1008964, Func Offset: 0x324
	// Line 177, Address: 0x100896c, Func Offset: 0x32c
	// Line 178, Address: 0x1008994, Func Offset: 0x354
	// Line 179, Address: 0x10089b8, Func Offset: 0x378
	// Line 181, Address: 0x10089c0, Func Offset: 0x380
	// Line 182, Address: 0x10089dc, Func Offset: 0x39c
	// Line 183, Address: 0x10089f0, Func Offset: 0x3b0
	// Func End, Address: 0x1008a10, Func Offset: 0x3d0
}

// 
// Start address: 0x1008a10
void check_Bbtn()
{
	// Line 189, Address: 0x1008a10, Func Offset: 0
	// Line 191, Address: 0x1008a24, Func Offset: 0x14
	// Line 192, Address: 0x1008a38, Func Offset: 0x28
	// Line 195, Address: 0x1008a40, Func Offset: 0x30
	// Line 197, Address: 0x1008a50, Func Offset: 0x40
	// Line 199, Address: 0x1008a68, Func Offset: 0x58
	// Line 200, Address: 0x1008a70, Func Offset: 0x60
	// Line 201, Address: 0x1008a8c, Func Offset: 0x7c
	// Line 202, Address: 0x1008aa0, Func Offset: 0x90
	// Line 208, Address: 0x1008aa8, Func Offset: 0x98
	// Line 210, Address: 0x1008ac0, Func Offset: 0xb0
	// Line 211, Address: 0x1008ad4, Func Offset: 0xc4
	// Line 215, Address: 0x1008adc, Func Offset: 0xcc
	// Line 216, Address: 0x1008afc, Func Offset: 0xec
	// Line 218, Address: 0x1008b1c, Func Offset: 0x10c
	// Line 220, Address: 0x1008b30, Func Offset: 0x120
	// Line 221, Address: 0x1008b44, Func Offset: 0x134
	// Func End, Address: 0x1008b4c, Func Offset: 0x13c
}

// 
// Start address: 0x1008b50
void check_Cbtn()
{
	// Line 227, Address: 0x1008b50, Func Offset: 0
	// Line 229, Address: 0x1008b64, Func Offset: 0x14
	// Line 230, Address: 0x1008b78, Func Offset: 0x28
	// Line 233, Address: 0x1008b80, Func Offset: 0x30
	// Line 235, Address: 0x1008b98, Func Offset: 0x48
	// Line 237, Address: 0x1008bb0, Func Offset: 0x60
	// Line 241, Address: 0x1008bb8, Func Offset: 0x68
	// Line 245, Address: 0x1008bd0, Func Offset: 0x80
	// Line 246, Address: 0x1008bdc, Func Offset: 0x8c
	// Line 247, Address: 0x1008bf8, Func Offset: 0xa8
	// Line 248, Address: 0x1008c0c, Func Offset: 0xbc
	// Line 249, Address: 0x1008c20, Func Offset: 0xd0
	// Line 252, Address: 0x1008c28, Func Offset: 0xd8
	// Line 253, Address: 0x1008c34, Func Offset: 0xe4
	// Line 254, Address: 0x1008c50, Func Offset: 0x100
	// Line 256, Address: 0x1008c64, Func Offset: 0x114
	// Line 257, Address: 0x1008c78, Func Offset: 0x128
	// Func End, Address: 0x1008c80, Func Offset: 0x130
}

// 
// Start address: 0x1008c80
void play2()
{
	// Line 273, Address: 0x1008c80, Func Offset: 0
	// Line 275, Address: 0x1008c98, Func Offset: 0x18
	// Line 276, Address: 0x1008cac, Func Offset: 0x2c
	// Line 279, Address: 0x1008cb4, Func Offset: 0x34
	// Line 280, Address: 0x1008ccc, Func Offset: 0x4c
	// Line 281, Address: 0x1008cd8, Func Offset: 0x58
	// Line 282, Address: 0x1008cf4, Func Offset: 0x74
	// Line 283, Address: 0x1008d08, Func Offset: 0x88
	// Func End, Address: 0x1008d10, Func Offset: 0x90
}

