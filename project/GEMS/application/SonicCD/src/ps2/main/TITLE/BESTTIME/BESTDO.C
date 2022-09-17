typedef struct _anon0;

typedef void(*type_0)(short);
typedef void(*type_2)(short);

typedef _anon0 type_1[0];

struct _anon0
{
	int color;
	char* str;
};

unsigned short nSequenceNum;
_anon0 menuTbl[0];
int nMenuIndx;
int MENUITEMMAX;
int ScrollCount;
void(*CDPlay)(short);
unsigned short swData1;
void(*CDPause)(short);
int nTimerCunt;

void STGDraw();
void UpdateMenu();
int STGMenuMaxCheck(int index);
void STGStart();
void STGMenu();
int STGEnd2();

// 
// Start address: 0x1000900
void STGDraw()
{
	// Line 48, Address: 0x1000900, Func Offset: 0
	// Line 49, Address: 0x1000908, Func Offset: 0x8
	// Line 51, Address: 0x1000920, Func Offset: 0x20
	// Line 53, Address: 0x1000928, Func Offset: 0x28
	// Func End, Address: 0x1000938, Func Offset: 0x38
}

// 
// Start address: 0x1000940
void UpdateMenu()
{
	int i;
	int index;
	// Line 58, Address: 0x1000940, Func Offset: 0
	// Line 61, Address: 0x1000950, Func Offset: 0x10
	// Line 63, Address: 0x100095c, Func Offset: 0x1c
	// Line 64, Address: 0x1000974, Func Offset: 0x34
	// Line 65, Address: 0x1000990, Func Offset: 0x50
	// Line 67, Address: 0x10009b8, Func Offset: 0x78
	// Line 68, Address: 0x10009d8, Func Offset: 0x98
	// Line 69, Address: 0x10009e8, Func Offset: 0xa8
	// Func End, Address: 0x1000a00, Func Offset: 0xc0
}

// 
// Start address: 0x1000a00
int STGMenuMaxCheck(int index)
{
	// Line 71, Address: 0x1000a00, Func Offset: 0
	// Line 72, Address: 0x1000a08, Func Offset: 0x8
	// Line 73, Address: 0x1000a38, Func Offset: 0x38
	// Line 74, Address: 0x1000a3c, Func Offset: 0x3c
	// Func End, Address: 0x1000a48, Func Offset: 0x48
}

// 
// Start address: 0x1000a50
void STGStart()
{
	int n;
	// Line 79, Address: 0x1000a50, Func Offset: 0
	// Line 82, Address: 0x1000a5c, Func Offset: 0xc
	// Line 83, Address: 0x1000a70, Func Offset: 0x20
	// Line 84, Address: 0x1000a7c, Func Offset: 0x2c
	// Line 86, Address: 0x1000a88, Func Offset: 0x38
	// Line 87, Address: 0x1000a94, Func Offset: 0x44
	// Line 88, Address: 0x1000aa8, Func Offset: 0x58
	// Line 90, Address: 0x1000ab4, Func Offset: 0x64
	// Line 91, Address: 0x1000ac0, Func Offset: 0x70
	// Line 98, Address: 0x1000ad4, Func Offset: 0x84
	// Line 99, Address: 0x1000ae0, Func Offset: 0x90
	// Line 100, Address: 0x1000aec, Func Offset: 0x9c
	// Line 101, Address: 0x1000af8, Func Offset: 0xa8
	// Line 102, Address: 0x1000b00, Func Offset: 0xb0
	// Line 103, Address: 0x1000b08, Func Offset: 0xb8
	// Line 104, Address: 0x1000b10, Func Offset: 0xc0
	// Line 106, Address: 0x1000b1c, Func Offset: 0xcc
	// Func End, Address: 0x1000b30, Func Offset: 0xe0
}

// 
// Start address: 0x1000b30
void STGMenu()
{
	// Line 111, Address: 0x1000b30, Func Offset: 0
	// Line 112, Address: 0x1000b38, Func Offset: 0x8
	// Line 114, Address: 0x1000b50, Func Offset: 0x20
	// Line 116, Address: 0x1000b80, Func Offset: 0x50
	// Line 117, Address: 0x1000b94, Func Offset: 0x64
	// Line 119, Address: 0x1000ba8, Func Offset: 0x78
	// Line 121, Address: 0x1000bb0, Func Offset: 0x80
	// Line 122, Address: 0x1000bc0, Func Offset: 0x90
	// Line 124, Address: 0x1000bd4, Func Offset: 0xa4
	// Line 125, Address: 0x1000bdc, Func Offset: 0xac
	// Line 127, Address: 0x1000be4, Func Offset: 0xb4
	// Line 129, Address: 0x1000bec, Func Offset: 0xbc
	// Line 131, Address: 0x1000c04, Func Offset: 0xd4
	// Line 134, Address: 0x1000c54, Func Offset: 0x124
	// Line 135, Address: 0x1000c68, Func Offset: 0x138
	// Line 137, Address: 0x1000c7c, Func Offset: 0x14c
	// Line 139, Address: 0x1000c84, Func Offset: 0x154
	// Line 140, Address: 0x1000ca0, Func Offset: 0x170
	// Line 142, Address: 0x1000cb4, Func Offset: 0x184
	// Line 143, Address: 0x1000cbc, Func Offset: 0x18c
	// Line 147, Address: 0x1000cc4, Func Offset: 0x194
	// Line 149, Address: 0x1000cdc, Func Offset: 0x1ac
	// Line 151, Address: 0x1000ce8, Func Offset: 0x1b8
	// Func End, Address: 0x1000cf8, Func Offset: 0x1c8
}

// 
// Start address: 0x1000d00
int STGEnd2()
{
	int ret;
	// Line 169, Address: 0x1000d00, Func Offset: 0
	// Line 170, Address: 0x1000d0c, Func Offset: 0xc
	// Line 172, Address: 0x1000d10, Func Offset: 0x10
	// Line 174, Address: 0x1000d20, Func Offset: 0x20
	// Line 175, Address: 0x1000d24, Func Offset: 0x24
	// Line 177, Address: 0x1000d38, Func Offset: 0x38
	// Line 178, Address: 0x1000d3c, Func Offset: 0x3c
	// Func End, Address: 0x1000d50, Func Offset: 0x50
}

