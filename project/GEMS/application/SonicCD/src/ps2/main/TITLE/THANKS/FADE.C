typedef struct tagPALETTEENTRY;



struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

unsigned char colorcnt;
unsigned char startcolor;
int* lpFadeFlag;
short FadeFlag;
int FadeCount;
tagPALETTEENTRY* lpcolorwk0;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk1;
tagPALETTEENTRY* lpcolorwk3;

void fadein();
void fadein0();
int fadein0_new();
void fadein1();
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc);
void fadeout();
int fadeout_new();
void fadeout1();
void fadeout2(tagPALETTEENTRY* lpPeDest);
int FadeProc();

// 
// Start address: 0x1001770
void fadein()
{
	// Line 40, Address: 0x1001770, Func Offset: 0
	// Line 41, Address: 0x1001778, Func Offset: 0x8
	// Line 42, Address: 0x1001780, Func Offset: 0x10
	// Line 43, Address: 0x100178c, Func Offset: 0x1c
	// Line 44, Address: 0x1001794, Func Offset: 0x24
	// Func End, Address: 0x10017a4, Func Offset: 0x34
}

// 
// Start address: 0x10017b0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 47, Address: 0x10017b0, Func Offset: 0
	// Line 51, Address: 0x10017bc, Func Offset: 0xc
	// Line 53, Address: 0x10017f0, Func Offset: 0x40
	// Line 54, Address: 0x10017fc, Func Offset: 0x4c
	// Line 55, Address: 0x1001800, Func Offset: 0x50
	// Line 56, Address: 0x1001804, Func Offset: 0x54
	// Line 57, Address: 0x1001808, Func Offset: 0x58
	// Line 58, Address: 0x1001810, Func Offset: 0x60
	// Line 59, Address: 0x1001814, Func Offset: 0x64
	// Line 60, Address: 0x1001830, Func Offset: 0x80
	// Line 61, Address: 0x1001838, Func Offset: 0x88
	// Line 62, Address: 0x1001844, Func Offset: 0x94
	// Line 64, Address: 0x1001854, Func Offset: 0xa4
	// Func End, Address: 0x1001868, Func Offset: 0xb8
}

// 
// Start address: 0x1001870
int fadein0_new()
{
	// Line 68, Address: 0x1001870, Func Offset: 0
	// Line 70, Address: 0x1001878, Func Offset: 0x8
	// Line 72, Address: 0x1001884, Func Offset: 0x14
	// Line 75, Address: 0x100188c, Func Offset: 0x1c
	// Line 76, Address: 0x10018ac, Func Offset: 0x3c
	// Line 77, Address: 0x10018b4, Func Offset: 0x44
	// Line 79, Address: 0x10018c0, Func Offset: 0x50
	// Line 80, Address: 0x10018c4, Func Offset: 0x54
	// Func End, Address: 0x10018d4, Func Offset: 0x64
}

// 
// Start address: 0x10018e0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 84, Address: 0x10018e0, Func Offset: 0
	// Line 88, Address: 0x10018f4, Func Offset: 0x14
	// Line 89, Address: 0x1001928, Func Offset: 0x48
	// Line 91, Address: 0x100195c, Func Offset: 0x7c
	// Line 92, Address: 0x1001968, Func Offset: 0x88
	// Line 93, Address: 0x1001978, Func Offset: 0x98
	// Line 94, Address: 0x100197c, Func Offset: 0x9c
	// Line 95, Address: 0x1001980, Func Offset: 0xa0
	// Line 106, Address: 0x100199c, Func Offset: 0xbc
	// Func End, Address: 0x10019b8, Func Offset: 0xd8
}

// 
// Start address: 0x10019c0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 110, Address: 0x10019c0, Func Offset: 0
	// Line 111, Address: 0x10019cc, Func Offset: 0xc
	// Line 114, Address: 0x1001a2c, Func Offset: 0x6c
	// Line 115, Address: 0x1001a50, Func Offset: 0x90
	// Line 116, Address: 0x1001a60, Func Offset: 0xa0
	// Line 117, Address: 0x1001a68, Func Offset: 0xa8
	// Line 118, Address: 0x1001a8c, Func Offset: 0xcc
	// Line 119, Address: 0x1001a9c, Func Offset: 0xdc
	// Line 120, Address: 0x1001aa4, Func Offset: 0xe4
	// Line 121, Address: 0x1001ac8, Func Offset: 0x108
	// Line 125, Address: 0x1001adc, Func Offset: 0x11c
	// Func End, Address: 0x1001ae8, Func Offset: 0x128
}

// 
// Start address: 0x1001af0
void fadeout()
{
	// Line 131, Address: 0x1001af0, Func Offset: 0
	// Line 132, Address: 0x1001af8, Func Offset: 0x8
	// Line 134, Address: 0x1001b04, Func Offset: 0x14
	// Line 135, Address: 0x1001b0c, Func Offset: 0x1c
	// Line 136, Address: 0x1001b18, Func Offset: 0x28
	// Line 138, Address: 0x1001b28, Func Offset: 0x38
	// Func End, Address: 0x1001b30, Func Offset: 0x40
}

// 
// Start address: 0x1001b30
int fadeout_new()
{
	// Line 142, Address: 0x1001b30, Func Offset: 0
	// Line 144, Address: 0x1001b38, Func Offset: 0x8
	// Line 146, Address: 0x1001b44, Func Offset: 0x14
	// Line 149, Address: 0x1001b4c, Func Offset: 0x1c
	// Line 150, Address: 0x1001b6c, Func Offset: 0x3c
	// Line 151, Address: 0x1001b74, Func Offset: 0x44
	// Line 153, Address: 0x1001b80, Func Offset: 0x50
	// Line 154, Address: 0x1001b84, Func Offset: 0x54
	// Func End, Address: 0x1001b94, Func Offset: 0x64
}

// 
// Start address: 0x1001ba0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 157, Address: 0x1001ba0, Func Offset: 0
	// Line 161, Address: 0x1001bb0, Func Offset: 0x10
	// Line 163, Address: 0x1001be4, Func Offset: 0x44
	// Line 164, Address: 0x1001bf0, Func Offset: 0x50
	// Line 165, Address: 0x1001bfc, Func Offset: 0x5c
	// Line 166, Address: 0x1001c00, Func Offset: 0x60
	// Line 167, Address: 0x1001c1c, Func Offset: 0x7c
	// Line 169, Address: 0x1001c50, Func Offset: 0xb0
	// Line 170, Address: 0x1001c5c, Func Offset: 0xbc
	// Line 171, Address: 0x1001c68, Func Offset: 0xc8
	// Line 172, Address: 0x1001c6c, Func Offset: 0xcc
	// Line 175, Address: 0x1001c88, Func Offset: 0xe8
	// Func End, Address: 0x1001ca0, Func Offset: 0x100
}

// 
// Start address: 0x1001ca0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 178, Address: 0x1001ca0, Func Offset: 0
	// Line 179, Address: 0x1001ca8, Func Offset: 0x8
	// Line 180, Address: 0x1001cb8, Func Offset: 0x18
	// Line 181, Address: 0x1001ccc, Func Offset: 0x2c
	// Line 182, Address: 0x1001cd4, Func Offset: 0x34
	// Line 183, Address: 0x1001ce4, Func Offset: 0x44
	// Line 184, Address: 0x1001cf4, Func Offset: 0x54
	// Line 185, Address: 0x1001cfc, Func Offset: 0x5c
	// Line 186, Address: 0x1001d0c, Func Offset: 0x6c
	// Line 189, Address: 0x1001d1c, Func Offset: 0x7c
	// Func End, Address: 0x1001d28, Func Offset: 0x88
}

// 
// Start address: 0x1001d30
int FadeProc()
{
	int ret;
	// Line 195, Address: 0x1001d30, Func Offset: 0
	// Line 198, Address: 0x1001d3c, Func Offset: 0xc
	// Line 200, Address: 0x1001d68, Func Offset: 0x38
	// Line 201, Address: 0x1001d74, Func Offset: 0x44
	// Line 204, Address: 0x1001d7c, Func Offset: 0x4c
	// Line 205, Address: 0x1001d88, Func Offset: 0x58
	// Line 216, Address: 0x1001d90, Func Offset: 0x60
	// Line 220, Address: 0x1001d94, Func Offset: 0x64
	// Line 222, Address: 0x1001d9c, Func Offset: 0x6c
	// Line 223, Address: 0x1001da0, Func Offset: 0x70
	// Func End, Address: 0x1001db4, Func Offset: 0x84
}

