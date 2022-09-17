typedef struct _anon0;
typedef struct tagPOINT;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_7)(void*, unsigned char, int);
typedef void(*type_8)(void*, void*, int);
typedef void(*type_9)(short);

typedef char type_0[0];
typedef char type_1[12];
typedef _anon2 type_2[3];
typedef _anon2 type_3[3][3];
typedef _anon2 type_4[3][3][7];
typedef _anon2 type_5[3];
typedef _anon2 type_6[3][7];
typedef _anon1 type_10[0];
typedef _anon0 type_11[6];
typedef char type_12[4];

struct _anon0
{
	unsigned int saved;
	char player[12];
	unsigned int roundNo;
	unsigned short year;
	unsigned short month;
	unsigned short date;
	unsigned short hour;
	unsigned short min;
	unsigned short sec;
	_anon2 timeattack[3][3][7];
	_anon2 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

struct tagPOINT
{
	int x;
	int y;
};

struct _anon1
{
	unsigned short w;
	unsigned short h;
	tagPOINT point;
	int order;
	unsigned char palOff;
	unsigned int* hBmp;
	unsigned short timing;
	unsigned int* lphSpr;
};

struct _anon2
{
	unsigned int time;
	char name[4];
};

_anon1 infoSprtBmp[0];
unsigned short nMenuKind;
unsigned int bMenuChosed;
void(*WaveRequest)(short);
unsigned short swData1;
unsigned int bFileChosed;
int nSelectFileNumber;
int nFileNumber;
_anon0 saveData[6];
void(*sMemCpy)(void*, void*, int);
int nSrcFileNumber;
unsigned int bDestFileChosed;
char editBuf[0];
int nTimerCunt;
void(*sMemSet)(void*, unsigned char, int);

unsigned int SDFileSelect(int* pFileNumber);
void SDMenuSelect();
void SDMenuCopy();
void SDMenuRename();
void SDMenuDelete();
void SDMenuExit();

// 
// Start address: 0x10024f0
unsigned int SDFileSelect(int* pFileNumber)
{
	int oldNumber;
	tagPOINT point;
	// Line 60, Address: 0x10024f0, Func Offset: 0
	// Line 64, Address: 0x1002508, Func Offset: 0x18
	// Line 66, Address: 0x1002520, Func Offset: 0x30
	// Line 67, Address: 0x1002528, Func Offset: 0x38
	// Line 68, Address: 0x1002560, Func Offset: 0x70
	// Line 70, Address: 0x1002570, Func Offset: 0x80
	// Line 71, Address: 0x1002584, Func Offset: 0x94
	// Line 72, Address: 0x1002598, Func Offset: 0xa8
	// Line 73, Address: 0x10025c0, Func Offset: 0xd0
	// Line 74, Address: 0x10025e4, Func Offset: 0xf4
	// Line 75, Address: 0x10025f0, Func Offset: 0x100
	// Line 77, Address: 0x10025f8, Func Offset: 0x108
	// Line 78, Address: 0x1002600, Func Offset: 0x110
	// Line 80, Address: 0x1002618, Func Offset: 0x128
	// Line 81, Address: 0x1002620, Func Offset: 0x130
	// Line 82, Address: 0x1002654, Func Offset: 0x164
	// Line 84, Address: 0x1002664, Func Offset: 0x174
	// Line 85, Address: 0x1002678, Func Offset: 0x188
	// Line 86, Address: 0x100268c, Func Offset: 0x19c
	// Line 87, Address: 0x10026b4, Func Offset: 0x1c4
	// Line 88, Address: 0x10026d8, Func Offset: 0x1e8
	// Line 89, Address: 0x10026e4, Func Offset: 0x1f4
	// Line 91, Address: 0x10026ec, Func Offset: 0x1fc
	// Line 92, Address: 0x10026f4, Func Offset: 0x204
	// Line 94, Address: 0x100270c, Func Offset: 0x21c
	// Line 96, Address: 0x1002718, Func Offset: 0x228
	// Line 98, Address: 0x1002730, Func Offset: 0x240
	// Line 99, Address: 0x1002744, Func Offset: 0x254
	// Line 100, Address: 0x100274c, Func Offset: 0x25c
	// Line 101, Address: 0x1002754, Func Offset: 0x264
	// Line 102, Address: 0x100275c, Func Offset: 0x26c
	// Line 104, Address: 0x10027b8, Func Offset: 0x2c8
	// Line 105, Address: 0x10027e8, Func Offset: 0x2f8
	// Line 107, Address: 0x10027f4, Func Offset: 0x304
	// Line 108, Address: 0x10027f8, Func Offset: 0x308
	// Func End, Address: 0x1002814, Func Offset: 0x324
}

// 
// Start address: 0x1002820
void SDMenuSelect()
{
	tagPOINT point;
	unsigned int yesNoDialogOn;
	// Line 113, Address: 0x1002820, Func Offset: 0
	// Line 117, Address: 0x1002828, Func Offset: 0x8
	// Line 119, Address: 0x1002838, Func Offset: 0x18
	// Line 120, Address: 0x1002850, Func Offset: 0x30
	// Line 121, Address: 0x1002858, Func Offset: 0x38
	// Line 125, Address: 0x1002868, Func Offset: 0x48
	// Line 126, Address: 0x100289c, Func Offset: 0x7c
	// Line 127, Address: 0x10028ac, Func Offset: 0x8c
	// Line 128, Address: 0x10028b8, Func Offset: 0x98
	// Line 129, Address: 0x10028c0, Func Offset: 0xa0
	// Line 130, Address: 0x10028d4, Func Offset: 0xb4
	// Line 132, Address: 0x10028dc, Func Offset: 0xbc
	// Line 133, Address: 0x10028e4, Func Offset: 0xc4
	// Line 134, Address: 0x10028ec, Func Offset: 0xcc
	// Line 145, Address: 0x1002900, Func Offset: 0xe0
	// Line 146, Address: 0x1002908, Func Offset: 0xe8
	// Line 148, Address: 0x1002918, Func Offset: 0xf8
	// Line 150, Address: 0x1002930, Func Offset: 0x110
	// Line 151, Address: 0x1002944, Func Offset: 0x124
	// Line 152, Address: 0x1002954, Func Offset: 0x134
	// Line 153, Address: 0x1002964, Func Offset: 0x144
	// Line 154, Address: 0x100296c, Func Offset: 0x14c
	// Line 155, Address: 0x1002980, Func Offset: 0x160
	// Line 156, Address: 0x1002988, Func Offset: 0x168
	// Line 158, Address: 0x10029a4, Func Offset: 0x184
	// Line 159, Address: 0x10029b4, Func Offset: 0x194
	// Line 160, Address: 0x10029c0, Func Offset: 0x1a0
	// Line 161, Address: 0x10029c8, Func Offset: 0x1a8
	// Line 162, Address: 0x10029d0, Func Offset: 0x1b0
	// Line 164, Address: 0x10029e8, Func Offset: 0x1c8
	// Line 165, Address: 0x10029fc, Func Offset: 0x1dc
	// Line 166, Address: 0x1002a04, Func Offset: 0x1e4
	// Line 167, Address: 0x1002a14, Func Offset: 0x1f4
	// Line 170, Address: 0x1002a1c, Func Offset: 0x1fc
	// Func End, Address: 0x1002a2c, Func Offset: 0x20c
}

// 
// Start address: 0x1002a30
void SDMenuCopy()
{
	tagPOINT point;
	unsigned int yesNoDialogOn;
	// Line 175, Address: 0x1002a30, Func Offset: 0
	// Line 179, Address: 0x1002a38, Func Offset: 0x8
	// Line 181, Address: 0x1002a48, Func Offset: 0x18
	// Line 182, Address: 0x1002a60, Func Offset: 0x30
	// Line 183, Address: 0x1002a68, Func Offset: 0x38
	// Line 184, Address: 0x1002a70, Func Offset: 0x40
	// Line 186, Address: 0x1002a80, Func Offset: 0x50
	// Line 188, Address: 0x1002ab4, Func Offset: 0x84
	// Line 189, Address: 0x1002ac8, Func Offset: 0x98
	// Line 190, Address: 0x1002ad8, Func Offset: 0xa8
	// Line 191, Address: 0x1002ae8, Func Offset: 0xb8
	// Line 193, Address: 0x1002af0, Func Offset: 0xc0
	// Line 194, Address: 0x1002b04, Func Offset: 0xd4
	// Line 196, Address: 0x1002b0c, Func Offset: 0xdc
	// Line 198, Address: 0x1002b14, Func Offset: 0xe4
	// Line 199, Address: 0x1002b1c, Func Offset: 0xec
	// Line 201, Address: 0x1002b2c, Func Offset: 0xfc
	// Line 202, Address: 0x1002b44, Func Offset: 0x114
	// Line 204, Address: 0x1002b54, Func Offset: 0x124
	// Line 206, Address: 0x1002b6c, Func Offset: 0x13c
	// Line 207, Address: 0x1002b80, Func Offset: 0x150
	// Line 208, Address: 0x1002b88, Func Offset: 0x158
	// Line 211, Address: 0x1002b90, Func Offset: 0x160
	// Line 212, Address: 0x1002ba4, Func Offset: 0x174
	// Line 213, Address: 0x1002bd8, Func Offset: 0x1a8
	// Line 215, Address: 0x1002bf0, Func Offset: 0x1c0
	// Line 216, Address: 0x1002c00, Func Offset: 0x1d0
	// Line 217, Address: 0x1002c0c, Func Offset: 0x1dc
	// Line 219, Address: 0x1002c14, Func Offset: 0x1e4
	// Line 220, Address: 0x1002c1c, Func Offset: 0x1ec
	// Line 222, Address: 0x1002c2c, Func Offset: 0x1fc
	// Line 224, Address: 0x1002c44, Func Offset: 0x214
	// Line 225, Address: 0x1002c58, Func Offset: 0x228
	// Line 227, Address: 0x1002cbc, Func Offset: 0x28c
	// Line 228, Address: 0x1002cc4, Func Offset: 0x294
	// Line 229, Address: 0x1002cd8, Func Offset: 0x2a8
	// Line 230, Address: 0x1002ce8, Func Offset: 0x2b8
	// Line 231, Address: 0x1002cf0, Func Offset: 0x2c0
	// Line 233, Address: 0x1002d0c, Func Offset: 0x2dc
	// Line 234, Address: 0x1002d1c, Func Offset: 0x2ec
	// Line 235, Address: 0x1002d28, Func Offset: 0x2f8
	// Line 236, Address: 0x1002d34, Func Offset: 0x304
	// Line 237, Address: 0x1002d3c, Func Offset: 0x30c
	// Line 239, Address: 0x1002d54, Func Offset: 0x324
	// Line 240, Address: 0x1002d68, Func Offset: 0x338
	// Line 241, Address: 0x1002d70, Func Offset: 0x340
	// Line 242, Address: 0x1002d80, Func Offset: 0x350
	// Line 245, Address: 0x1002d88, Func Offset: 0x358
	// Func End, Address: 0x1002d98, Func Offset: 0x368
}

// 
// Start address: 0x1002da0
void SDMenuRename()
{
	int ret;
	tagPOINT point;
	unsigned int editMode;
	unsigned int cursolOn;
	// Line 251, Address: 0x1002da0, Func Offset: 0
	// Line 257, Address: 0x1002dac, Func Offset: 0xc
	// Line 259, Address: 0x1002dbc, Func Offset: 0x1c
	// Line 260, Address: 0x1002dd4, Func Offset: 0x34
	// Line 261, Address: 0x1002ddc, Func Offset: 0x3c
	// Line 263, Address: 0x1002dec, Func Offset: 0x4c
	// Line 265, Address: 0x1002e20, Func Offset: 0x80
	// Line 266, Address: 0x1002e34, Func Offset: 0x94
	// Line 268, Address: 0x1002e40, Func Offset: 0xa0
	// Line 269, Address: 0x1002e88, Func Offset: 0xe8
	// Line 270, Address: 0x1002e90, Func Offset: 0xf0
	// Line 271, Address: 0x1002e9c, Func Offset: 0xfc
	// Line 273, Address: 0x1002ea4, Func Offset: 0x104
	// Line 274, Address: 0x1002eb8, Func Offset: 0x118
	// Line 276, Address: 0x1002ec0, Func Offset: 0x120
	// Line 278, Address: 0x1002ec8, Func Offset: 0x128
	// Line 279, Address: 0x1002ed0, Func Offset: 0x130
	// Line 281, Address: 0x1002ee0, Func Offset: 0x140
	// Line 283, Address: 0x1002efc, Func Offset: 0x15c
	// Line 284, Address: 0x1002f14, Func Offset: 0x174
	// Line 285, Address: 0x1002f34, Func Offset: 0x194
	// Line 287, Address: 0x1002f3c, Func Offset: 0x19c
	// Line 289, Address: 0x1002f48, Func Offset: 0x1a8
	// Line 291, Address: 0x1002f60, Func Offset: 0x1c0
	// Line 292, Address: 0x1002f74, Func Offset: 0x1d4
	// Line 293, Address: 0x1002fbc, Func Offset: 0x21c
	// Line 294, Address: 0x1002fd4, Func Offset: 0x234
	// Line 295, Address: 0x1002fdc, Func Offset: 0x23c
	// Line 296, Address: 0x1002fe4, Func Offset: 0x244
	// Line 297, Address: 0x1002fec, Func Offset: 0x24c
	// Line 299, Address: 0x1003008, Func Offset: 0x268
	// Line 300, Address: 0x1003018, Func Offset: 0x278
	// Line 323, Address: 0x1003024, Func Offset: 0x284
	// Func End, Address: 0x1003038, Func Offset: 0x298
}

// 
// Start address: 0x1003040
void SDMenuDelete()
{
	tagPOINT point;
	int i;
	unsigned int yesNoDialogOn;
	// Line 328, Address: 0x1003040, Func Offset: 0
	// Line 333, Address: 0x100304c, Func Offset: 0xc
	// Line 335, Address: 0x100305c, Func Offset: 0x1c
	// Line 336, Address: 0x1003074, Func Offset: 0x34
	// Line 337, Address: 0x100307c, Func Offset: 0x3c
	// Line 339, Address: 0x100308c, Func Offset: 0x4c
	// Line 341, Address: 0x10030c0, Func Offset: 0x80
	// Line 342, Address: 0x10030d4, Func Offset: 0x94
	// Line 343, Address: 0x10030e4, Func Offset: 0xa4
	// Line 344, Address: 0x10030f0, Func Offset: 0xb0
	// Line 346, Address: 0x10030f8, Func Offset: 0xb8
	// Line 347, Address: 0x100310c, Func Offset: 0xcc
	// Line 349, Address: 0x1003114, Func Offset: 0xd4
	// Line 351, Address: 0x100311c, Func Offset: 0xdc
	// Line 352, Address: 0x1003124, Func Offset: 0xe4
	// Line 354, Address: 0x1003134, Func Offset: 0xf4
	// Line 356, Address: 0x100314c, Func Offset: 0x10c
	// Line 357, Address: 0x1003160, Func Offset: 0x120
	// Line 358, Address: 0x10031a0, Func Offset: 0x160
	// Line 360, Address: 0x10031a8, Func Offset: 0x168
	// Line 362, Address: 0x10031c0, Func Offset: 0x180
	// Line 363, Address: 0x10031cc, Func Offset: 0x18c
	// Line 365, Address: 0x10031f8, Func Offset: 0x1b8
	// Line 366, Address: 0x1003208, Func Offset: 0x1c8
	// Line 368, Address: 0x1003214, Func Offset: 0x1d4
	// Line 369, Address: 0x100321c, Func Offset: 0x1dc
	// Line 371, Address: 0x1003224, Func Offset: 0x1e4
	// Line 373, Address: 0x100322c, Func Offset: 0x1ec
	// Line 377, Address: 0x1003240, Func Offset: 0x200
	// Line 379, Address: 0x1003254, Func Offset: 0x214
	// Line 380, Address: 0x1003264, Func Offset: 0x224
	// Line 381, Address: 0x100326c, Func Offset: 0x22c
	// Line 383, Address: 0x1003288, Func Offset: 0x248
	// Line 384, Address: 0x1003298, Func Offset: 0x258
	// Line 385, Address: 0x10032a4, Func Offset: 0x264
	// Line 386, Address: 0x10032b0, Func Offset: 0x270
	// Line 387, Address: 0x10032b8, Func Offset: 0x278
	// Line 389, Address: 0x10032d0, Func Offset: 0x290
	// Line 390, Address: 0x10032e4, Func Offset: 0x2a4
	// Line 391, Address: 0x10032ec, Func Offset: 0x2ac
	// Line 392, Address: 0x10032fc, Func Offset: 0x2bc
	// Line 395, Address: 0x1003304, Func Offset: 0x2c4
	// Func End, Address: 0x1003318, Func Offset: 0x2d8
}

// 
// Start address: 0x1003320
void SDMenuExit()
{
	// Line 400, Address: 0x1003320, Func Offset: 0
	// Line 401, Address: 0x1003328, Func Offset: 0x8
	// Line 402, Address: 0x1003334, Func Offset: 0x14
	// Func End, Address: 0x1003344, Func Offset: 0x24
}

