typedef struct tagPALETTEENTRY;


typedef unsigned short type_0[3];
typedef tagPALETTEENTRY type_1[64];

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
unsigned char clfflg;
tagPALETTEENTRY* lpcolorwk;
tagPALETTEENTRY colorsave[64];
unsigned char byMskwk;
unsigned char intflg;

void clwout();
void clwout_new();
void woutcolor(unsigned short wD1);
void clwin_init();
void clwin();
void clwin_new();
void wincolor(unsigned char byD0, unsigned short wD1);
int FadeProc();

// 
// Start address: 0x1004b60
void clwout()
{
	// Line 41, Address: 0x1004b60, Func Offset: 0
	// Line 42, Address: 0x1004b6c, Func Offset: 0xc
	// Line 43, Address: 0x1004b7c, Func Offset: 0x1c
	// Line 44, Address: 0x1004b88, Func Offset: 0x28
	// Line 45, Address: 0x1004b90, Func Offset: 0x30
	// Func End, Address: 0x1004b98, Func Offset: 0x38
}

// 
// Start address: 0x1004ba0
void clwout_new()
{
	// Line 48, Address: 0x1004ba0, Func Offset: 0
	// Line 49, Address: 0x1004ba8, Func Offset: 0x8
	// Line 51, Address: 0x1004bc0, Func Offset: 0x20
	// Line 52, Address: 0x1004bcc, Func Offset: 0x2c
	// Line 54, Address: 0x1004bd4, Func Offset: 0x34
	// Line 56, Address: 0x1004bf0, Func Offset: 0x50
	// Line 57, Address: 0x1004c18, Func Offset: 0x78
	// Line 60, Address: 0x1004c20, Func Offset: 0x80
	// Line 61, Address: 0x1004c2c, Func Offset: 0x8c
	// Line 63, Address: 0x1004c40, Func Offset: 0xa0
	// Func End, Address: 0x1004c50, Func Offset: 0xb0
}

// 
// Start address: 0x1004c50
void woutcolor(unsigned short wD1)
{
	short i;
	tagPALETTEENTRY* lpColwk;
	// Line 75, Address: 0x1004c50, Func Offset: 0
	// Line 80, Address: 0x1004c60, Func Offset: 0x10
	// Line 81, Address: 0x1004c68, Func Offset: 0x18
	// Line 83, Address: 0x1004c74, Func Offset: 0x24
	// Line 86, Address: 0x1004ca8, Func Offset: 0x58
	// Line 87, Address: 0x1004cbc, Func Offset: 0x6c
	// Line 89, Address: 0x1004cc8, Func Offset: 0x78
	// Line 91, Address: 0x1004cd0, Func Offset: 0x80
	// Line 92, Address: 0x1004ce4, Func Offset: 0x94
	// Line 94, Address: 0x1004cf0, Func Offset: 0xa0
	// Line 96, Address: 0x1004cf8, Func Offset: 0xa8
	// Line 97, Address: 0x1004d0c, Func Offset: 0xbc
	// Line 101, Address: 0x1004d18, Func Offset: 0xc8
	// Line 103, Address: 0x1004d3c, Func Offset: 0xec
	// Func End, Address: 0x1004d50, Func Offset: 0x100
}

// 
// Start address: 0x1004d50
void clwin_init()
{
	short i;
	tagPALETTEENTRY* lpColwk;
	tagPALETTEENTRY* lpSavewk;
	tagPALETTEENTRY tmp;
	// Line 115, Address: 0x1004d50, Func Offset: 0
	// Line 119, Address: 0x1004d60, Func Offset: 0x10
	// Line 121, Address: 0x1004d74, Func Offset: 0x24
	// Line 122, Address: 0x1004d7c, Func Offset: 0x2c
	// Line 123, Address: 0x1004d84, Func Offset: 0x34
	// Line 125, Address: 0x1004d90, Func Offset: 0x40
	// Line 126, Address: 0x1004db8, Func Offset: 0x68
	// Line 127, Address: 0x1004de4, Func Offset: 0x94
	// Line 128, Address: 0x1004e04, Func Offset: 0xb4
	// Func End, Address: 0x1004e1c, Func Offset: 0xcc
}

// 
// Start address: 0x1004e20
void clwin()
{
	// Line 141, Address: 0x1004e20, Func Offset: 0
	// Line 142, Address: 0x1004e30, Func Offset: 0x10
	// Line 143, Address: 0x1004e3c, Func Offset: 0x1c
	// Line 144, Address: 0x1004e44, Func Offset: 0x24
	// Line 145, Address: 0x1004e50, Func Offset: 0x30
	// Func End, Address: 0x1004e58, Func Offset: 0x38
}

// 
// Start address: 0x1004e60
void clwin_new()
{
	// Line 148, Address: 0x1004e60, Func Offset: 0
	// Line 149, Address: 0x1004e68, Func Offset: 0x8
	// Line 151, Address: 0x1004e80, Func Offset: 0x20
	// Line 152, Address: 0x1004e8c, Func Offset: 0x2c
	// Line 154, Address: 0x1004e94, Func Offset: 0x34
	// Line 156, Address: 0x1004eb0, Func Offset: 0x50
	// Line 157, Address: 0x1004ee0, Func Offset: 0x80
	// Line 158, Address: 0x1004ef4, Func Offset: 0x94
	// Line 161, Address: 0x1004efc, Func Offset: 0x9c
	// Line 162, Address: 0x1004f08, Func Offset: 0xa8
	// Line 163, Address: 0x1004f14, Func Offset: 0xb4
	// Line 165, Address: 0x1004f28, Func Offset: 0xc8
	// Func End, Address: 0x1004f38, Func Offset: 0xd8
}

// 
// Start address: 0x1004f40
void wincolor(unsigned char byD0, unsigned short wD1)
{
	short i;
	unsigned char byColwk;
	tagPALETTEENTRY* lpColwk;
	tagPALETTEENTRY* lpSavewk;
	// Line 177, Address: 0x1004f40, Func Offset: 0
	// Line 182, Address: 0x1004f5c, Func Offset: 0x1c
	// Line 183, Address: 0x1004f64, Func Offset: 0x24
	// Line 184, Address: 0x1004f6c, Func Offset: 0x2c
	// Line 186, Address: 0x1004f78, Func Offset: 0x38
	// Line 189, Address: 0x1004fac, Func Offset: 0x6c
	// Line 190, Address: 0x1004fb4, Func Offset: 0x74
	// Line 191, Address: 0x1004fd4, Func Offset: 0x94
	// Line 192, Address: 0x1004fd8, Func Offset: 0x98
	// Line 194, Address: 0x1004fe0, Func Offset: 0xa0
	// Line 195, Address: 0x1004fe8, Func Offset: 0xa8
	// Line 196, Address: 0x1005008, Func Offset: 0xc8
	// Line 197, Address: 0x100500c, Func Offset: 0xcc
	// Line 199, Address: 0x1005014, Func Offset: 0xd4
	// Line 200, Address: 0x100501c, Func Offset: 0xdc
	// Line 201, Address: 0x100503c, Func Offset: 0xfc
	// Line 204, Address: 0x1005040, Func Offset: 0x100
	// Line 205, Address: 0x1005044, Func Offset: 0x104
	// Line 206, Address: 0x1005048, Func Offset: 0x108
	// Line 207, Address: 0x1005068, Func Offset: 0x128
	// Line 209, Address: 0x100507c, Func Offset: 0x13c
	// Func End, Address: 0x1005098, Func Offset: 0x158
}

// 
// Start address: 0x10050a0
int FadeProc()
{
	// Line 222, Address: 0x10050a0, Func Offset: 0
	// Line 223, Address: 0x10050a8, Func Offset: 0x8
	// Line 226, Address: 0x10050d4, Func Offset: 0x34
	// Line 227, Address: 0x10050dc, Func Offset: 0x3c
	// Line 229, Address: 0x10050e4, Func Offset: 0x44
	// Line 232, Address: 0x10050ec, Func Offset: 0x4c
	// Line 233, Address: 0x10050f0, Func Offset: 0x50
	// Func End, Address: 0x1005100, Func Offset: 0x60
}

