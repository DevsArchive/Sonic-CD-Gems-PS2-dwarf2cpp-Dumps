typedef union _anon0;
typedef struct _anon1;

typedef void(*type_2)(char*);
typedef int(*type_3)(char*);
typedef void(*type_5)(char*, char*);
typedef int(*type_6)(int, void*, int);
typedef void(*type_10)(int);
typedef void(*type_12)(short);
typedef void(*type_13)(void*, unsigned char, int);
typedef void(*type_14)(short);

typedef char type_0[80];
typedef char type_1[80];
typedef char type_4[80];
typedef char type_7[80];
typedef unsigned short type_8[4];
typedef unsigned short type_9[4][1024];
typedef unsigned char type_11[80];

union _anon0
{
	short w;
	_anon1 b;
};

struct _anon1
{
	char l;
	char h;
};

unsigned int SE_DashReq;
unsigned char generate_flag;
void(*sOutputDebugString)(char*);
void(*sPrintf)(char*, char*);
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
unsigned short blockwk[4][1024];
int(*sOpenFile)(char*);
void(*sMemSet)(void*, unsigned char, int);
unsigned char time_flag;
_anon0 stageno;
unsigned short* pmapwk;
unsigned char SeToWavTbl[80];
void(*WaveRequest)(short);
void(*CDPlay)(short);
unsigned char boss_sound;

void GetRoundStr(unsigned short StageNo, unsigned char Time_Flag, char* buf);
void ReadBlockMap();
void ReadScrolMap();
void soundset(short ReqNo);
void sub_sync(short ReqNo);

// 
// Start address: 0x10136b0
void GetRoundStr(unsigned short StageNo, unsigned char Time_Flag, char* buf)
{
	unsigned char stage;
	unsigned char round;
	// Line 33, Address: 0x10136b0, Func Offset: 0
	// Line 36, Address: 0x10136c8, Func Offset: 0x18
	// Line 37, Address: 0x10136e0, Func Offset: 0x30
	// Line 38, Address: 0x10136f8, Func Offset: 0x48
	// Line 40, Address: 0x1013710, Func Offset: 0x60
	// Line 41, Address: 0x1013734, Func Offset: 0x84
	// Line 42, Address: 0x1013758, Func Offset: 0xa8
	// Line 44, Address: 0x101378c, Func Offset: 0xdc
	// Line 45, Address: 0x10137a0, Func Offset: 0xf0
	// Line 47, Address: 0x10137a8, Func Offset: 0xf8
	// Line 48, Address: 0x10137bc, Func Offset: 0x10c
	// Line 50, Address: 0x10137c4, Func Offset: 0x114
	// Line 51, Address: 0x10137f0, Func Offset: 0x140
	// Line 54, Address: 0x1013804, Func Offset: 0x154
	// Line 56, Address: 0x1013814, Func Offset: 0x164
	// Func End, Address: 0x1013828, Func Offset: 0x178
}

// 
// Start address: 0x1013830
void ReadBlockMap()
{
	int hf;
	char buf[80];
	char fn[80];
	// Line 59, Address: 0x1013830, Func Offset: 0
	// Line 64, Address: 0x101383c, Func Offset: 0xc
	// Line 68, Address: 0x101385c, Func Offset: 0x2c
	// Line 75, Address: 0x101388c, Func Offset: 0x5c
	// Line 76, Address: 0x10138ac, Func Offset: 0x7c
	// Line 77, Address: 0x10138c4, Func Offset: 0x94
	// Line 79, Address: 0x10138d0, Func Offset: 0xa0
	// Line 80, Address: 0x10138f0, Func Offset: 0xc0
	// Line 82, Address: 0x1013904, Func Offset: 0xd4
	// Line 84, Address: 0x101390c, Func Offset: 0xdc
	// Line 85, Address: 0x101392c, Func Offset: 0xfc
	// Line 87, Address: 0x1013940, Func Offset: 0x110
	// Line 88, Address: 0x1013960, Func Offset: 0x130
	// Line 91, Address: 0x1013974, Func Offset: 0x144
	// Func End, Address: 0x1013988, Func Offset: 0x158
}

// 
// Start address: 0x1013990
void ReadScrolMap()
{
	int hf;
	unsigned short* p;
	int i;
	char buf[80];
	char fn[80];
	// Line 95, Address: 0x1013990, Func Offset: 0
	// Line 103, Address: 0x10139a4, Func Offset: 0x14
	// Line 107, Address: 0x10139c4, Func Offset: 0x34
	// Line 114, Address: 0x10139f4, Func Offset: 0x64
	// Line 115, Address: 0x10139fc, Func Offset: 0x6c
	// Line 116, Address: 0x1013a08, Func Offset: 0x78
	// Line 117, Address: 0x1013a28, Func Offset: 0x98
	// Line 118, Address: 0x1013a2c, Func Offset: 0x9c
	// Line 120, Address: 0x1013a3c, Func Offset: 0xac
	// Line 121, Address: 0x1013a54, Func Offset: 0xc4
	// Line 123, Address: 0x1013a60, Func Offset: 0xd0
	// Line 124, Address: 0x1013a80, Func Offset: 0xf0
	// Line 126, Address: 0x1013a94, Func Offset: 0x104
	// Line 128, Address: 0x1013a9c, Func Offset: 0x10c
	// Line 129, Address: 0x1013aa4, Func Offset: 0x114
	// Line 132, Address: 0x1013ab0, Func Offset: 0x120
	// Line 135, Address: 0x1013ad8, Func Offset: 0x148
	// Line 136, Address: 0x1013adc, Func Offset: 0x14c
	// Line 137, Address: 0x1013aec, Func Offset: 0x15c
	// Line 139, Address: 0x1013b00, Func Offset: 0x170
	// Line 140, Address: 0x1013b20, Func Offset: 0x190
	// Line 143, Address: 0x1013b34, Func Offset: 0x1a4
	// Func End, Address: 0x1013b50, Func Offset: 0x1c0
}

// 
// Start address: 0x1013b50
void soundset(short ReqNo)
{
	// Line 163, Address: 0x1013b50, Func Offset: 0
	// Line 164, Address: 0x1013b5c, Func Offset: 0xc
	// Line 168, Address: 0x1013b74, Func Offset: 0x24
	// Line 169, Address: 0x1013b80, Func Offset: 0x30
	// Line 171, Address: 0x1013bac, Func Offset: 0x5c
	// Line 172, Address: 0x1013bc0, Func Offset: 0x70
	// Func End, Address: 0x1013bd0, Func Offset: 0x80
}

// 
// Start address: 0x1013bd0
void sub_sync(short ReqNo)
{
	// Line 177, Address: 0x1013bd0, Func Offset: 0
	// Line 178, Address: 0x1013bdc, Func Offset: 0xc
	// Line 179, Address: 0x1013bf4, Func Offset: 0x24
	// Line 182, Address: 0x1013c00, Func Offset: 0x30
	// Line 183, Address: 0x1013c30, Func Offset: 0x60
	// Line 184, Address: 0x1013c58, Func Offset: 0x88
	// Line 186, Address: 0x1013c60, Func Offset: 0x90
	// Line 187, Address: 0x1013cc0, Func Offset: 0xf0
	// Line 188, Address: 0x1013ce8, Func Offset: 0x118
	// Line 189, Address: 0x1013cf0, Func Offset: 0x120
	// Line 190, Address: 0x1013d20, Func Offset: 0x150
	// Line 191, Address: 0x1013d48, Func Offset: 0x178
	// Line 192, Address: 0x1013d50, Func Offset: 0x180
	// Line 193, Address: 0x1013d68, Func Offset: 0x198
	// Line 194, Address: 0x1013d7c, Func Offset: 0x1ac
	// Line 195, Address: 0x1013d84, Func Offset: 0x1b4
	// Line 196, Address: 0x1013db4, Func Offset: 0x1e4
	// Line 197, Address: 0x1013ddc, Func Offset: 0x20c
	// Line 198, Address: 0x1013dfc, Func Offset: 0x22c
	// Line 200, Address: 0x1013e10, Func Offset: 0x240
	// Func End, Address: 0x1013e20, Func Offset: 0x250
}

