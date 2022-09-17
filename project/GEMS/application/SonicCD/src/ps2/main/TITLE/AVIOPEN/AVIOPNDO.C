
typedef int(*type_0)(int);
typedef int(*type_1)();

typedef char type_2[21];

char szAVIFile[21];
unsigned int bAVIStart;
int(*sMoviePlay)(int);
int nTimerCunt;
int(*sMovieStop)();
unsigned int hWndMovie;
unsigned short wMCIDeviceID;

void ReadDIB();
void FreeDIB();
void AVIOpeningMove();
void AVIEnd();
void AVIPaint();

// 
// Start address: 0x1000000
void ReadDIB()
{
	// Line 74, Address: 0x1000000, Func Offset: 0
	// Line 85, Address: 0x1000004, Func Offset: 0x4
	// Func End, Address: 0x1000010, Func Offset: 0x10
}

// 
// Start address: 0x1000010
void FreeDIB()
{
	// Line 98, Address: 0x1000010, Func Offset: 0
	// Func End, Address: 0x1000018, Func Offset: 0x8
}

// 
// Start address: 0x1000020
void AVIOpeningMove()
{
	// Line 118, Address: 0x1000020, Func Offset: 0
	// Line 119, Address: 0x1000028, Func Offset: 0x8
	// Line 124, Address: 0x1000038, Func Offset: 0x18
	// Line 132, Address: 0x100004c, Func Offset: 0x2c
	// Line 138, Address: 0x1000058, Func Offset: 0x38
	// Func End, Address: 0x1000068, Func Offset: 0x48
}

// 
// Start address: 0x1000070
void AVIEnd()
{
	// Line 143, Address: 0x1000070, Func Offset: 0
	// Line 144, Address: 0x1000078, Func Offset: 0x8
	// Line 147, Address: 0x1000088, Func Offset: 0x18
	// Line 148, Address: 0x1000090, Func Offset: 0x20
	// Func End, Address: 0x10000a0, Func Offset: 0x30
}

// 
// Start address: 0x10000a0
void AVIPaint()
{
	// Line 153, Address: 0x10000a0, Func Offset: 0
	// Line 163, Address: 0x10000a4, Func Offset: 0x4
	// Func End, Address: 0x10000b0, Func Offset: 0x10
}

