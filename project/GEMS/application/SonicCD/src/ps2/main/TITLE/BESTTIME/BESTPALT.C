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
// Start address: 0x1000d90
void OEClrset(tagPALETTEENTRY* pPalet, unsigned short nNumber)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 62, Address: 0x1000d90, Func Offset: 0
	// Line 67, Address: 0x1000da4, Func Offset: 0x14
	// Line 69, Address: 0x1000dc0, Func Offset: 0x30
	// Line 70, Address: 0x1000dcc, Func Offset: 0x3c
	// Line 71, Address: 0x1000df0, Func Offset: 0x60
	// Line 72, Address: 0x1000df4, Func Offset: 0x64
	// Line 73, Address: 0x1000e00, Func Offset: 0x70
	// Line 74, Address: 0x1000e20, Func Offset: 0x90
	// Func End, Address: 0x1000e34, Func Offset: 0xa4
}

