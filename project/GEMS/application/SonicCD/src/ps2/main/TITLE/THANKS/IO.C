typedef struct tagPALETTEENTRY;


typedef tagPALETTEENTRY type[64];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

tagPALETTEENTRY colortbl[64];
tagPALETTEENTRY* lpcolorwk0;

void vdpinit();

// 
// Start address: 0x1002de0
void vdpinit()
{
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	short i;
	// Line 50, Address: 0x1002de0, Func Offset: 0
	// Line 54, Address: 0x1002df0, Func Offset: 0x10
	// Line 55, Address: 0x1002df8, Func Offset: 0x18
	// Line 56, Address: 0x1002e00, Func Offset: 0x20
	// Line 58, Address: 0x1002e0c, Func Offset: 0x2c
	// Line 59, Address: 0x1002e3c, Func Offset: 0x5c
	// Line 60, Address: 0x1002e5c, Func Offset: 0x7c
	// Func End, Address: 0x1002e74, Func Offset: 0x94
}

