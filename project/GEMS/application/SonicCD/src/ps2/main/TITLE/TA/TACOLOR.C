typedef struct tagPALETTEENTRY;


typedef tagPALETTEENTRY type_0[26];
typedef tagPALETTEENTRY type_1[16];
typedef tagPALETTEENTRY type_2[16][8];
typedef tagPALETTEENTRY type_3[16][8][2];
typedef tagPALETTEENTRY type_4[64];
typedef short type_5[4];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

tagPALETTEENTRY tacolor[64];
tagPALETTEENTRY ta_stage_col[16][8][2];
tagPALETTEENTRY* lpcolorwk;
short clchgcnt[4];

void TAColorSet();
void TAPicColorSet(int mode, int round);
unsigned short cntplus(unsigned short* work, unsigned short plus_data, unsigned short under_limit, unsigned short upper_limit);
void TAColorChgSP6();

// 
// Start address: 0x1001ef0
void TAColorSet()
{
	int i;
	// Line 120, Address: 0x1001ef0, Func Offset: 0
	// Line 123, Address: 0x1001ef8, Func Offset: 0x8
	// Line 124, Address: 0x1001f04, Func Offset: 0x14
	// Line 125, Address: 0x1001f44, Func Offset: 0x54
	// Line 127, Address: 0x1001f54, Func Offset: 0x64
	// Func End, Address: 0x1001f64, Func Offset: 0x74
}

// 
// Start address: 0x1001f70
void TAPicColorSet(int mode, int round)
{
	int i;
	// Line 130, Address: 0x1001f70, Func Offset: 0
	// Line 133, Address: 0x1001f80, Func Offset: 0x10
	// Line 134, Address: 0x1001f8c, Func Offset: 0x1c
	// Line 135, Address: 0x1001fe8, Func Offset: 0x78
	// Line 137, Address: 0x1001ff8, Func Offset: 0x88
	// Func End, Address: 0x1002008, Func Offset: 0x98
}

// 
// Start address: 0x1002010
unsigned short cntplus(unsigned short* work, unsigned short plus_data, unsigned short under_limit, unsigned short upper_limit)
{
	// Line 140, Address: 0x1002010, Func Offset: 0
	// Line 141, Address: 0x1002024, Func Offset: 0x14
	// Line 142, Address: 0x1002064, Func Offset: 0x54
	// Line 143, Address: 0x100206c, Func Offset: 0x5c
	// Func End, Address: 0x1002078, Func Offset: 0x68
}

// 
// Start address: 0x1002080
void TAColorChgSP6()
{
	unsigned short d0;
	unsigned short d5;
	unsigned short d6;
	unsigned short d7;
	tagPALETTEENTRY* lpPeDest;
	short i;
	tagPALETTEENTRY tbl0[26];
	// Line 148, Address: 0x1002080, Func Offset: 0
	// Line 167, Address: 0x10020a0, Func Offset: 0x20
	// Line 168, Address: 0x10020a8, Func Offset: 0x28
	// Line 169, Address: 0x10020ac, Func Offset: 0x2c
	// Line 170, Address: 0x10020b4, Func Offset: 0x34
	// Line 172, Address: 0x10020e8, Func Offset: 0x68
	// Line 173, Address: 0x10020f0, Func Offset: 0x70
	// Line 174, Address: 0x10020fc, Func Offset: 0x7c
	// Line 175, Address: 0x1002108, Func Offset: 0x88
	// Line 176, Address: 0x1002150, Func Offset: 0xd0
	// Line 177, Address: 0x1002170, Func Offset: 0xf0
	// Func End, Address: 0x1002198, Func Offset: 0x118
}

