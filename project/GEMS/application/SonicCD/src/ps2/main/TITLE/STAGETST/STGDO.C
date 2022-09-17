typedef struct _anon0;


typedef _anon0 type[0];

struct _anon0
{
	int retcode;
	char* str;
};

unsigned short nSequenceNum;
_anon0 menuTbl[0];
int nMenuIndx;
unsigned short swData1;
int MENUITEMMAX;
unsigned short* lpSelectedStage;
int nTimerCunt;

void STGDraw();
void UpdateMenu();
void STGStart();
void STGMenu();
int STGEnd();
int STGEnd2();

// 
// Start address: 0x1000900
void STGDraw()
{
	// Line 46, Address: 0x1000900, Func Offset: 0
	// Line 47, Address: 0x1000908, Func Offset: 0x8
	// Line 49, Address: 0x1000920, Func Offset: 0x20
	// Line 51, Address: 0x1000928, Func Offset: 0x28
	// Func End, Address: 0x1000938, Func Offset: 0x38
}

// 
// Start address: 0x1000940
void UpdateMenu()
{
	// Line 56, Address: 0x1000940, Func Offset: 0
	// Line 57, Address: 0x1000948, Func Offset: 0x8
	// Line 58, Address: 0x100096c, Func Offset: 0x2c
	// Func End, Address: 0x100097c, Func Offset: 0x3c
}

// 
// Start address: 0x1000980
void STGStart()
{
	int n;
	// Line 63, Address: 0x1000980, Func Offset: 0
	// Line 66, Address: 0x100098c, Func Offset: 0xc
	// Line 67, Address: 0x1000998, Func Offset: 0x18
	// Line 69, Address: 0x10009a4, Func Offset: 0x24
	// Line 70, Address: 0x10009b0, Func Offset: 0x30
	// Line 71, Address: 0x10009c4, Func Offset: 0x44
	// Line 73, Address: 0x10009d0, Func Offset: 0x50
	// Line 74, Address: 0x10009dc, Func Offset: 0x5c
	// Line 75, Address: 0x10009f0, Func Offset: 0x70
	// Line 76, Address: 0x10009f8, Func Offset: 0x78
	// Line 77, Address: 0x1000a00, Func Offset: 0x80
	// Line 78, Address: 0x1000a0c, Func Offset: 0x8c
	// Func End, Address: 0x1000a20, Func Offset: 0xa0
}

// 
// Start address: 0x1000a20
void STGMenu()
{
	// Line 83, Address: 0x1000a20, Func Offset: 0
	// Line 84, Address: 0x1000a28, Func Offset: 0x8
	// Line 86, Address: 0x1000a40, Func Offset: 0x20
	// Line 87, Address: 0x1000a6c, Func Offset: 0x4c
	// Line 88, Address: 0x1000a80, Func Offset: 0x60
	// Line 89, Address: 0x1000a88, Func Offset: 0x68
	// Line 90, Address: 0x1000a90, Func Offset: 0x70
	// Line 91, Address: 0x1000a98, Func Offset: 0x78
	// Line 93, Address: 0x1000ab0, Func Offset: 0x90
	// Line 94, Address: 0x1000adc, Func Offset: 0xbc
	// Line 95, Address: 0x1000af0, Func Offset: 0xd0
	// Line 96, Address: 0x1000af8, Func Offset: 0xd8
	// Line 97, Address: 0x1000b00, Func Offset: 0xe0
	// Line 99, Address: 0x1000b08, Func Offset: 0xe8
	// Line 101, Address: 0x1000b20, Func Offset: 0x100
	// Line 104, Address: 0x1000b2c, Func Offset: 0x10c
	// Line 106, Address: 0x1000b44, Func Offset: 0x124
	// Line 108, Address: 0x1000b50, Func Offset: 0x130
	// Func End, Address: 0x1000b60, Func Offset: 0x140
}

// 
// Start address: 0x1000b60
int STGEnd()
{
	int ret;
	// Line 113, Address: 0x1000b60, Func Offset: 0
	// Line 114, Address: 0x1000b68, Func Offset: 0x8
	// Line 116, Address: 0x1000b6c, Func Offset: 0xc
	// Line 118, Address: 0x1000b7c, Func Offset: 0x1c
	// Line 119, Address: 0x1000ba8, Func Offset: 0x48
	// Line 121, Address: 0x1000bac, Func Offset: 0x4c
	// Line 122, Address: 0x1000bb0, Func Offset: 0x50
	// Func End, Address: 0x1000bc0, Func Offset: 0x60
}

// 
// Start address: 0x1000bc0
int STGEnd2()
{
	int ret;
	// Line 124, Address: 0x1000bc0, Func Offset: 0
	// Line 125, Address: 0x1000bc8, Func Offset: 0x8
	// Line 127, Address: 0x1000bcc, Func Offset: 0xc
	// Line 129, Address: 0x1000bdc, Func Offset: 0x1c
	// Line 131, Address: 0x1000be0, Func Offset: 0x20
	// Line 132, Address: 0x1000be4, Func Offset: 0x24
	// Func End, Address: 0x1000bf4, Func Offset: 0x34
}

