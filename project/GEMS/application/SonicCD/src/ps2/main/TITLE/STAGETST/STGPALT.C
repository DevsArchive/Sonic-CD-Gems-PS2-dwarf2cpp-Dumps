typedef struct tagPALETTEENTRY;


typedef tagPALETTEENTRY type_0[16];
typedef tagPALETTEENTRY type_1[16];
typedef tagPALETTEENTRY type_2[16];
typedef tagPALETTEENTRY type_3[16];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

tagPALETTEENTRY tblPal1[16];
tagPALETTEENTRY tblPal2[16];
tagPALETTEENTRY tblPal3[16];
tagPALETTEENTRY tblPal4[16];
tagPALETTEENTRY* lpColorwk;

void OEClrset(tagPALETTEENTRY* pPalet, unsigned short nNumber);

// 
// Start address: 0x1000c40
void OEClrset(tagPALETTEENTRY* pPalet, unsigned short nNumber)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 53, Address: 0x1000c40, Func Offset: 0
	// Line 58, Address: 0x1000c54, Func Offset: 0x14
	// Line 60, Address: 0x1000c70, Func Offset: 0x30
	// Line 61, Address: 0x1000c7c, Func Offset: 0x3c
	// Line 62, Address: 0x1000ca0, Func Offset: 0x60
	// Line 63, Address: 0x1000ca4, Func Offset: 0x64
	// Line 64, Address: 0x1000cb0, Func Offset: 0x70
	// Line 65, Address: 0x1000cd0, Func Offset: 0x90
	// Func End, Address: 0x1000ce4, Func Offset: 0xa4
}

