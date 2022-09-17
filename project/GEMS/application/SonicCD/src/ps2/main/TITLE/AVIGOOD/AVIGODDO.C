typedef struct tagPOINT;

typedef int(*type_1)(int);
typedef int(*type_3)();
typedef int(*type_4)();

typedef char* type_0[2];
typedef tagPOINT type_2[2];
typedef tagPOINT type_5[2];
typedef int type_6[2];

struct tagPOINT
{
	int x;
	int y;
};

char* fileName[2];
tagPOINT bmpSize[2];
tagPOINT bmpPosi[2];
int(*sMovieStat)();
int(*sMoviePlay)(int);
int nTimerCunt;
int nPlayFileNum;
int(*sMovieStop)();
int nDispBMPFileNum;
unsigned int* lpbFullScreen;
unsigned short swData1;
int hBmp[2];

void AVIOpeningMove();
void PlayNextAVI();
void AVIEnd();
void AVIEndWait();
int AVIEndKeyWait();
void ReadDIB();
void FreeDIB();

// 
// Start address: 0x1000000
void AVIOpeningMove()
{
	int stat;
	// Line 88, Address: 0x1000000, Func Offset: 0
	// Line 91, Address: 0x100000c, Func Offset: 0xc
	// Line 96, Address: 0x100001c, Func Offset: 0x1c
	// Line 98, Address: 0x1000030, Func Offset: 0x30
	// Line 99, Address: 0x1000038, Func Offset: 0x38
	// Line 100, Address: 0x100004c, Func Offset: 0x4c
	// Line 101, Address: 0x1000058, Func Offset: 0x58
	// Line 106, Address: 0x1000060, Func Offset: 0x60
	// Func End, Address: 0x1000074, Func Offset: 0x74
}

// 
// Start address: 0x1000080
void PlayNextAVI()
{
	// Line 111, Address: 0x1000080, Func Offset: 0
	// Line 114, Address: 0x1000088, Func Offset: 0x8
	// Line 115, Address: 0x100009c, Func Offset: 0x1c
	// Line 116, Address: 0x10000ac, Func Offset: 0x2c
	// Line 121, Address: 0x10000c0, Func Offset: 0x40
	// Line 123, Address: 0x10000d4, Func Offset: 0x54
	// Line 126, Address: 0x10000dc, Func Offset: 0x5c
	// Line 128, Address: 0x10000e8, Func Offset: 0x68
	// Func End, Address: 0x10000f8, Func Offset: 0x78
}

// 
// Start address: 0x1000100
void AVIEnd()
{
	// Line 133, Address: 0x1000100, Func Offset: 0
	// Line 134, Address: 0x1000108, Func Offset: 0x8
	// Line 135, Address: 0x1000118, Func Offset: 0x18
	// Func End, Address: 0x1000128, Func Offset: 0x28
}

// 
// Start address: 0x1000130
void AVIEndWait()
{
	// Line 140, Address: 0x1000130, Func Offset: 0
	// Line 142, Address: 0x1000138, Func Offset: 0x8
	// Line 143, Address: 0x100014c, Func Offset: 0x1c
	// Line 144, Address: 0x1000158, Func Offset: 0x28
	// Line 145, Address: 0x1000160, Func Offset: 0x30
	// Line 148, Address: 0x1000174, Func Offset: 0x44
	// Line 149, Address: 0x1000180, Func Offset: 0x50
	// Line 151, Address: 0x100018c, Func Offset: 0x5c
	// Func End, Address: 0x100019c, Func Offset: 0x6c
}

// 
// Start address: 0x10001a0
int AVIEndKeyWait()
{
	int ret;
	// Line 160, Address: 0x10001a0, Func Offset: 0
	// Line 161, Address: 0x10001a8, Func Offset: 0x8
	// Line 164, Address: 0x10001ac, Func Offset: 0xc
	// Line 169, Address: 0x10001dc, Func Offset: 0x3c
	// Line 172, Address: 0x10001e0, Func Offset: 0x40
	// Line 173, Address: 0x10001e4, Func Offset: 0x44
	// Func End, Address: 0x10001f4, Func Offset: 0x54
}

// 
// Start address: 0x1000200
void ReadDIB()
{
	// Line 332, Address: 0x1000200, Func Offset: 0
	// Func End, Address: 0x1000208, Func Offset: 0x8
}

// 
// Start address: 0x1000210
void FreeDIB()
{
	// Line 345, Address: 0x1000210, Func Offset: 0
	// Func End, Address: 0x1000218, Func Offset: 0x8
}

