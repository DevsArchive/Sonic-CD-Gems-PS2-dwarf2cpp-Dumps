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
// Start address: 0x1001a10
void OEClrset(tagPALETTEENTRY* pPalet, unsigned short nNumber)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 57, Address: 0x1001a10, Func Offset: 0
	// Line 62, Address: 0x1001a24, Func Offset: 0x14
	// Line 64, Address: 0x1001a40, Func Offset: 0x30
	// Line 65, Address: 0x1001a4c, Func Offset: 0x3c
	// Line 66, Address: 0x1001a70, Func Offset: 0x60
	// Line 67, Address: 0x1001a74, Func Offset: 0x64
	// Line 68, Address: 0x1001a80, Func Offset: 0x70
	// Line 69, Address: 0x1001aa0, Func Offset: 0x90
	// Func End, Address: 0x1001ab4, Func Offset: 0xa4
}

