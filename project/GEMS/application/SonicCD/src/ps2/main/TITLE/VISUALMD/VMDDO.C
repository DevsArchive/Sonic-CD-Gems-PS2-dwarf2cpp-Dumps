


unsigned short nSequenceNum;
unsigned short nMenuKind;
unsigned short swData1;
unsigned int* lpbVisualmode;
int nTimerCunt;

void VMDDraw();
void UpdateMenu();
void VMDStart();
void VMDMenu();
int VMDEnd();

// 
// Start address: 0x1000000
void VMDDraw()
{
	// Line 46, Address: 0x1000000, Func Offset: 0
	// Line 47, Address: 0x1000008, Func Offset: 0x8
	// Line 49, Address: 0x1000020, Func Offset: 0x20
	// Line 52, Address: 0x1000028, Func Offset: 0x28
	// Func End, Address: 0x1000038, Func Offset: 0x38
}

// 
// Start address: 0x1000040
void UpdateMenu()
{
	// Line 57, Address: 0x1000040, Func Offset: 0
	// Line 58, Address: 0x1000048, Func Offset: 0x8
	// Line 59, Address: 0x1000074, Func Offset: 0x34
	// Line 60, Address: 0x1000080, Func Offset: 0x40
	// Line 61, Address: 0x10000ac, Func Offset: 0x6c
	// Line 62, Address: 0x10000b8, Func Offset: 0x78
	// Line 63, Address: 0x10000e4, Func Offset: 0xa4
	// Line 64, Address: 0x10000f0, Func Offset: 0xb0
	// Line 65, Address: 0x100011c, Func Offset: 0xdc
	// Line 66, Address: 0x1000128, Func Offset: 0xe8
	// Line 67, Address: 0x1000154, Func Offset: 0x114
	// Line 68, Address: 0x1000160, Func Offset: 0x120
	// Func End, Address: 0x1000170, Func Offset: 0x130
}

// 
// Start address: 0x1000170
void VMDStart()
{
	int n;
	// Line 73, Address: 0x1000170, Func Offset: 0
	// Line 76, Address: 0x100017c, Func Offset: 0xc
	// Line 77, Address: 0x1000188, Func Offset: 0x18
	// Line 79, Address: 0x1000194, Func Offset: 0x24
	// Line 80, Address: 0x10001a0, Func Offset: 0x30
	// Line 81, Address: 0x10001b4, Func Offset: 0x44
	// Line 82, Address: 0x10001c0, Func Offset: 0x50
	// Line 83, Address: 0x10001c8, Func Offset: 0x58
	// Line 84, Address: 0x10001d4, Func Offset: 0x64
	// Func End, Address: 0x10001e8, Func Offset: 0x78
}

// 
// Start address: 0x10001f0
void VMDMenu()
{
	unsigned short nMenuKindOld;
	// Line 89, Address: 0x10001f0, Func Offset: 0
	// Line 92, Address: 0x1000204, Func Offset: 0x14
	// Line 94, Address: 0x100021c, Func Offset: 0x2c
	// Line 95, Address: 0x1000228, Func Offset: 0x38
	// Line 96, Address: 0x100026c, Func Offset: 0x7c
	// Line 98, Address: 0x1000284, Func Offset: 0x94
	// Line 99, Address: 0x100028c, Func Offset: 0x9c
	// Line 101, Address: 0x1000294, Func Offset: 0xa4
	// Line 102, Address: 0x100029c, Func Offset: 0xac
	// Line 104, Address: 0x10002b4, Func Offset: 0xc4
	// Line 105, Address: 0x10002c0, Func Offset: 0xd0
	// Line 106, Address: 0x1000304, Func Offset: 0x114
	// Line 108, Address: 0x100031c, Func Offset: 0x12c
	// Line 109, Address: 0x1000324, Func Offset: 0x134
	// Line 111, Address: 0x100032c, Func Offset: 0x13c
	// Line 112, Address: 0x1000334, Func Offset: 0x144
	// Line 114, Address: 0x1000364, Func Offset: 0x174
	// Line 117, Address: 0x1000370, Func Offset: 0x180
	// Func End, Address: 0x100038c, Func Offset: 0x19c
}

// 
// Start address: 0x1000390
int VMDEnd()
{
	int ret;
	// Line 122, Address: 0x1000390, Func Offset: 0
	// Line 123, Address: 0x1000398, Func Offset: 0x8
	// Line 125, Address: 0x100039c, Func Offset: 0xc
	// Line 127, Address: 0x10003ac, Func Offset: 0x1c
	// Line 130, Address: 0x10003fc, Func Offset: 0x6c
	// Line 131, Address: 0x1000400, Func Offset: 0x70
	// Line 132, Address: 0x100040c, Func Offset: 0x7c
	// Line 133, Address: 0x1000414, Func Offset: 0x84
	// Line 134, Address: 0x1000420, Func Offset: 0x90
	// Line 135, Address: 0x100042c, Func Offset: 0x9c
	// Line 136, Address: 0x1000438, Func Offset: 0xa8
	// Line 139, Address: 0x100043c, Func Offset: 0xac
	// Line 140, Address: 0x1000440, Func Offset: 0xb0
	// Func End, Address: 0x1000450, Func Offset: 0xc0
}

