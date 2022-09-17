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
// Start address: 0x1003350
void OEClrset(tagPALETTEENTRY* pPalet, unsigned short nNumber)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 62, Address: 0x1003350, Func Offset: 0
	// Line 67, Address: 0x1003364, Func Offset: 0x14
	// Line 69, Address: 0x1003380, Func Offset: 0x30
	// Line 70, Address: 0x100338c, Func Offset: 0x3c
	// Line 71, Address: 0x10033b0, Func Offset: 0x60
	// Line 72, Address: 0x10033b4, Func Offset: 0x64
	// Line 73, Address: 0x10033c0, Func Offset: 0x70
	// Line 74, Address: 0x10033e0, Func Offset: 0x90
	// Func End, Address: 0x10033f4, Func Offset: 0xa4
}

