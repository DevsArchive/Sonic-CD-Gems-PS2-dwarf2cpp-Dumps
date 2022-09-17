typedef struct tagPALETTEENTRY;


typedef tagPALETTEENTRY type_0[64];
typedef unsigned short type_1[3];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

unsigned short code_tbl[3];
unsigned short wColwk;
int FadeCount;
int* lpFadeFlag;
tagPALETTEENTRY* lpcolorwk;
tagPALETTEENTRY colorsave[64];
unsigned char byMskwk;

void clwout();
void clwout_new();
void woutcolor(unsigned short wD1);
void clwin_init();
void clwin();
void clwin_new();
void wincolor(unsigned char byD0, unsigned short wD1);
int FadeProc();

// 
// Start address: 0x1001910
void clwout()
{
	// Line 43, Address: 0x1001910, Func Offset: 0
	// Line 44, Address: 0x1001920, Func Offset: 0x10
	// Line 45, Address: 0x100192c, Func Offset: 0x1c
	// Line 46, Address: 0x1001934, Func Offset: 0x24
	// Func End, Address: 0x100193c, Func Offset: 0x2c
}

// 
// Start address: 0x1001940
void clwout_new()
{
	short i;
	tagPALETTEENTRY* lpColwk;
	// Line 49, Address: 0x1001940, Func Offset: 0
	// Line 54, Address: 0x1001950, Func Offset: 0x10
	// Line 55, Address: 0x1001968, Func Offset: 0x28
	// Line 56, Address: 0x1001974, Func Offset: 0x34
	// Line 57, Address: 0x100197c, Func Offset: 0x3c
	// Line 58, Address: 0x1001988, Func Offset: 0x48
	// Line 59, Address: 0x1001990, Func Offset: 0x50
	// Line 60, Address: 0x1001998, Func Offset: 0x58
	// Line 61, Address: 0x10019a0, Func Offset: 0x60
	// Line 62, Address: 0x10019c4, Func Offset: 0x84
	// Line 64, Address: 0x10019cc, Func Offset: 0x8c
	// Line 66, Address: 0x10019e8, Func Offset: 0xa8
	// Line 67, Address: 0x1001a10, Func Offset: 0xd0
	// Line 70, Address: 0x1001a18, Func Offset: 0xd8
	// Line 71, Address: 0x1001a24, Func Offset: 0xe4
	// Line 73, Address: 0x1001a38, Func Offset: 0xf8
	// Func End, Address: 0x1001a50, Func Offset: 0x110
}

// 
// Start address: 0x1001a50
void woutcolor(unsigned short wD1)
{
	short i;
	tagPALETTEENTRY* lpColwk;
	// Line 85, Address: 0x1001a50, Func Offset: 0
	// Line 90, Address: 0x1001a60, Func Offset: 0x10
	// Line 91, Address: 0x1001a68, Func Offset: 0x18
	// Line 93, Address: 0x1001a74, Func Offset: 0x24
	// Line 96, Address: 0x1001aa8, Func Offset: 0x58
	// Line 97, Address: 0x1001abc, Func Offset: 0x6c
	// Line 99, Address: 0x1001ac8, Func Offset: 0x78
	// Line 101, Address: 0x1001ad0, Func Offset: 0x80
	// Line 102, Address: 0x1001ae4, Func Offset: 0x94
	// Line 104, Address: 0x1001af0, Func Offset: 0xa0
	// Line 106, Address: 0x1001af8, Func Offset: 0xa8
	// Line 107, Address: 0x1001b0c, Func Offset: 0xbc
	// Line 111, Address: 0x1001b18, Func Offset: 0xc8
	// Line 113, Address: 0x1001b3c, Func Offset: 0xec
	// Func End, Address: 0x1001b50, Func Offset: 0x100
}

// 
// Start address: 0x1001b50
void clwin_init()
{
	short i;
	tagPALETTEENTRY* lpColwk;
	tagPALETTEENTRY* lpSavewk;
	tagPALETTEENTRY tmp;
	// Line 125, Address: 0x1001b50, Func Offset: 0
	// Line 129, Address: 0x1001b60, Func Offset: 0x10
	// Line 131, Address: 0x1001b74, Func Offset: 0x24
	// Line 132, Address: 0x1001b7c, Func Offset: 0x2c
	// Line 133, Address: 0x1001b84, Func Offset: 0x34
	// Line 135, Address: 0x1001b90, Func Offset: 0x40
	// Line 136, Address: 0x1001bb8, Func Offset: 0x68
	// Line 137, Address: 0x1001be4, Func Offset: 0x94
	// Line 138, Address: 0x1001c04, Func Offset: 0xb4
	// Func End, Address: 0x1001c1c, Func Offset: 0xcc
}

// 
// Start address: 0x1001c20
void clwin()
{
	// Line 151, Address: 0x1001c20, Func Offset: 0
	// Line 152, Address: 0x1001c30, Func Offset: 0x10
	// Line 153, Address: 0x1001c3c, Func Offset: 0x1c
	// Line 154, Address: 0x1001c44, Func Offset: 0x24
	// Line 155, Address: 0x1001c50, Func Offset: 0x30
	// Func End, Address: 0x1001c58, Func Offset: 0x38
}

// 
// Start address: 0x1001c60
void clwin_new()
{
	// Line 158, Address: 0x1001c60, Func Offset: 0
	// Line 159, Address: 0x1001c68, Func Offset: 0x8
	// Line 161, Address: 0x1001c80, Func Offset: 0x20
	// Line 162, Address: 0x1001c8c, Func Offset: 0x2c
	// Line 164, Address: 0x1001c94, Func Offset: 0x34
	// Line 166, Address: 0x1001cb0, Func Offset: 0x50
	// Line 167, Address: 0x1001ce0, Func Offset: 0x80
	// Line 168, Address: 0x1001cf4, Func Offset: 0x94
	// Line 171, Address: 0x1001cfc, Func Offset: 0x9c
	// Line 172, Address: 0x1001d08, Func Offset: 0xa8
	// Line 173, Address: 0x1001d14, Func Offset: 0xb4
	// Line 175, Address: 0x1001d28, Func Offset: 0xc8
	// Func End, Address: 0x1001d38, Func Offset: 0xd8
}

// 
// Start address: 0x1001d40
void wincolor(unsigned char byD0, unsigned short wD1)
{
	short i;
	unsigned char byColwk;
	tagPALETTEENTRY* lpColwk;
	tagPALETTEENTRY* lpSavewk;
	// Line 187, Address: 0x1001d40, Func Offset: 0
	// Line 192, Address: 0x1001d5c, Func Offset: 0x1c
	// Line 193, Address: 0x1001d64, Func Offset: 0x24
	// Line 194, Address: 0x1001d6c, Func Offset: 0x2c
	// Line 196, Address: 0x1001d78, Func Offset: 0x38
	// Line 199, Address: 0x1001dac, Func Offset: 0x6c
	// Line 200, Address: 0x1001db4, Func Offset: 0x74
	// Line 201, Address: 0x1001dd4, Func Offset: 0x94
	// Line 202, Address: 0x1001dd8, Func Offset: 0x98
	// Line 204, Address: 0x1001de0, Func Offset: 0xa0
	// Line 205, Address: 0x1001de8, Func Offset: 0xa8
	// Line 206, Address: 0x1001e08, Func Offset: 0xc8
	// Line 207, Address: 0x1001e0c, Func Offset: 0xcc
	// Line 209, Address: 0x1001e14, Func Offset: 0xd4
	// Line 210, Address: 0x1001e1c, Func Offset: 0xdc
	// Line 211, Address: 0x1001e3c, Func Offset: 0xfc
	// Line 214, Address: 0x1001e40, Func Offset: 0x100
	// Line 215, Address: 0x1001e44, Func Offset: 0x104
	// Line 216, Address: 0x1001e48, Func Offset: 0x108
	// Line 219, Address: 0x1001e68, Func Offset: 0x128
	// Func End, Address: 0x1001e84, Func Offset: 0x144
}

// 
// Start address: 0x1001e90
int FadeProc()
{
	// Line 232, Address: 0x1001e90, Func Offset: 0
	// Line 233, Address: 0x1001e98, Func Offset: 0x8
	// Line 236, Address: 0x1001ec4, Func Offset: 0x34
	// Line 237, Address: 0x1001ecc, Func Offset: 0x3c
	// Line 239, Address: 0x1001ed4, Func Offset: 0x44
	// Line 242, Address: 0x1001edc, Func Offset: 0x4c
	// Line 243, Address: 0x1001ee0, Func Offset: 0x50
	// Func End, Address: 0x1001ef0, Func Offset: 0x60
}

