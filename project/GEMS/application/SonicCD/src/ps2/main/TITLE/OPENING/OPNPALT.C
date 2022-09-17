typedef struct tagPALETTEENTRY;


typedef tagPALETTEENTRY type_0[16];
typedef tagPALETTEENTRY type_1[16];
typedef tagPALETTEENTRY type_2[16];
typedef tagPALETTEENTRY type_3[16];
typedef tagPALETTEENTRY type_4[16];
typedef tagPALETTEENTRY type_5[16];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

tagPALETTEENTRY tblPal1a[16];
tagPALETTEENTRY tblPal1[16];
tagPALETTEENTRY tblPal2[16];
tagPALETTEENTRY tblPal3[16];
tagPALETTEENTRY tblPal4[16];
tagPALETTEENTRY tblPal2a[16];
tagPALETTEENTRY* lpColorwk;

void OEClrset(tagPALETTEENTRY* pPalet, unsigned short nNumber);

// 
// Start address: 0x10061e0
void OEClrset(tagPALETTEENTRY* pPalet, unsigned short nNumber)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 81, Address: 0x10061e0, Func Offset: 0
	// Line 86, Address: 0x10061f4, Func Offset: 0x14
	// Line 88, Address: 0x1006210, Func Offset: 0x30
	// Line 89, Address: 0x100621c, Func Offset: 0x3c
	// Line 90, Address: 0x1006240, Func Offset: 0x60
	// Line 91, Address: 0x1006244, Func Offset: 0x64
	// Line 92, Address: 0x1006250, Func Offset: 0x70
	// Line 93, Address: 0x1006270, Func Offset: 0x90
	// Func End, Address: 0x1006284, Func Offset: 0xa4
}

