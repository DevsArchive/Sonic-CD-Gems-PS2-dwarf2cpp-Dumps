typedef struct draw_context;
typedef struct hmx_bitmap;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct hmx_grid;
typedef struct hmx_sprite;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct tagPOINT;

typedef void(*type_0)(short);
typedef void(*type_17)(hmx_sprite*, int, int);

typedef _anon2 type_1[0];
typedef _anon1 type_2[6];
typedef hmx_bitmap* type_3[1000];
typedef int type_4[1000];
typedef char type_5[4];
typedef hmx_grid* type_6[3];
typedef hmx_bitmap* type_7[2048];
typedef hmx_bitmap* type_8[2048];
typedef char type_9[12];
typedef hmx_grid* type_10[8];
typedef hmx_bitmap* type_11[512];
typedef _anon0 type_12[3];
typedef _anon0 type_13[3][3];
typedef _anon0 type_14[3][3][7];
typedef _anon0 type_15[3];
typedef _anon0 type_16[3][7];

struct draw_context
{
	hmx_surface* screen;
	hmx_renderer_context* context;
	hmx_background* background;
	hmx_sprite** sprites;
	int spr_bitmap_count;
	hmx_bitmap* spr_bitmaps[1000];
	int spr_level[1000];
	hmx_grid* grids[3];
	int grd_bitmap_count;
	hmx_bitmap* grd_bitmaps[2048];
	int grd_change_count;
	hmx_bitmap* grd_changes[2048];
	hmx_grid* sp_grids[8];
	hmx_ddagrid* rot_grid;
	int rot_bitmap_count;
	hmx_bitmap* rot_bitmaps[512];
};

struct hmx_bitmap
{
};

struct hmx_ddagrid
{
};

struct hmx_renderer_context
{
};

struct hmx_surface
{
};

struct hmx_background
{
};

struct hmx_grid
{
};

struct hmx_sprite
{
};

struct _anon0
{
	unsigned int time;
	char name[4];
};

struct _anon1
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
	_anon0 timeattack[3][3][7];
	_anon0 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

struct _anon2
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

struct tagPOINT
{
	int x;
	int y;
};

unsigned short nSequenceNum;
_anon2 infoSprtBmp[0];
unsigned short nMenuKind;
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
draw_context* s_ctx;
_anon1 saveData[6];
int nFileNumber;
int nSelectFileNumber;
void(*WaveRequest)(short);
unsigned int bDestFileChosed;
unsigned int bFileChosed;
unsigned int bMenuChosed;
unsigned short swData1;
int nTimerCunt;
int keybordInputTime;
unsigned short swData2;

void SDDraw();
void SDStart();
void UpdateMenu(unsigned short nMenuKind, unsigned short nMenuKindOld);
void DeleteFileSelect();
void UpdateFileSelect(unsigned short nNewNumber);
void UpdateSelectSonicMark(unsigned short nNewNumber);
void UpdateFileView(unsigned short nFileNumber);
void UpdateMessage(char* msg);
void DefaultMessage();
unsigned int ChkSaveFile();
void SDMenu();
int SDEnd();
int CheckAutoEnd();

// 
// Start address: 0x1000000
void SDDraw()
{
	// Line 77, Address: 0x1000000, Func Offset: 0
	// Line 78, Address: 0x1000008, Func Offset: 0x8
	// Line 80, Address: 0x1000020, Func Offset: 0x20
	// Line 82, Address: 0x1000028, Func Offset: 0x28
	// Func End, Address: 0x1000038, Func Offset: 0x38
}

// 
// Start address: 0x1000040
void SDStart()
{
	int n;
	tagPOINT point;
	// Line 87, Address: 0x1000040, Func Offset: 0
	// Line 92, Address: 0x100004c, Func Offset: 0xc
	// Line 94, Address: 0x1000058, Func Offset: 0x18
	// Line 95, Address: 0x1000064, Func Offset: 0x24
	// Line 96, Address: 0x1000078, Func Offset: 0x38
	// Line 97, Address: 0x1000080, Func Offset: 0x40
	// Line 98, Address: 0x1000088, Func Offset: 0x48
	// Line 99, Address: 0x1000094, Func Offset: 0x54
	// Line 100, Address: 0x10000a0, Func Offset: 0x60
	// Line 101, Address: 0x10000bc, Func Offset: 0x7c
	// Line 102, Address: 0x10000cc, Func Offset: 0x8c
	// Line 103, Address: 0x10000d8, Func Offset: 0x98
	// Func End, Address: 0x10000ec, Func Offset: 0xac
}

// 
// Start address: 0x10000f0
void UpdateMenu(unsigned short nMenuKind, unsigned short nMenuKindOld)
{
	// Line 108, Address: 0x10000f0, Func Offset: 0
	// Line 109, Address: 0x1000100, Func Offset: 0x10
	// Line 111, Address: 0x1000118, Func Offset: 0x28
	// Line 112, Address: 0x1000134, Func Offset: 0x44
	// Line 113, Address: 0x100014c, Func Offset: 0x5c
	// Line 114, Address: 0x1000164, Func Offset: 0x74
	// Line 115, Address: 0x1000180, Func Offset: 0x90
	// Func End, Address: 0x1000190, Func Offset: 0xa0
}

// 
// Start address: 0x1000190
void DeleteFileSelect()
{
	// Line 120, Address: 0x1000190, Func Offset: 0
	// Line 122, Address: 0x1000198, Func Offset: 0x8
	// Line 123, Address: 0x10001a4, Func Offset: 0x14
	// Func End, Address: 0x10001b4, Func Offset: 0x24
}

// 
// Start address: 0x10001c0
void UpdateFileSelect(unsigned short nNewNumber)
{
	tagPOINT point;
	// Line 128, Address: 0x10001c0, Func Offset: 0
	// Line 131, Address: 0x10001cc, Func Offset: 0xc
	// Line 143, Address: 0x10001d4, Func Offset: 0x14
	// Line 144, Address: 0x10001e0, Func Offset: 0x20
	// Line 145, Address: 0x10001ec, Func Offset: 0x2c
	// Line 147, Address: 0x1000208, Func Offset: 0x48
	// Line 148, Address: 0x1000244, Func Offset: 0x84
	// Func End, Address: 0x1000254, Func Offset: 0x94
}

// 
// Start address: 0x1000260
void UpdateSelectSonicMark(unsigned short nNewNumber)
{
	tagPOINT point;
	// Line 153, Address: 0x1000260, Func Offset: 0
	// Line 156, Address: 0x100026c, Func Offset: 0xc
	// Line 157, Address: 0x10002a0, Func Offset: 0x40
	// Line 158, Address: 0x10002b4, Func Offset: 0x54
	// Line 160, Address: 0x10002c0, Func Offset: 0x60
	// Line 162, Address: 0x10002c8, Func Offset: 0x68
	// Line 163, Address: 0x10002dc, Func Offset: 0x7c
	// Line 164, Address: 0x10002e8, Func Offset: 0x88
	// Line 165, Address: 0x10002f4, Func Offset: 0x94
	// Line 167, Address: 0x1000310, Func Offset: 0xb0
	// Line 168, Address: 0x100034c, Func Offset: 0xec
	// Func End, Address: 0x100035c, Func Offset: 0xfc
}

// 
// Start address: 0x1000360
void UpdateFileView(unsigned short nFileNumber)
{
	// Line 173, Address: 0x1000360, Func Offset: 0
	// Line 174, Address: 0x100036c, Func Offset: 0xc
	// Line 175, Address: 0x1000388, Func Offset: 0x28
	// Line 176, Address: 0x1000398, Func Offset: 0x38
	// Func End, Address: 0x10003a8, Func Offset: 0x48
}

// 
// Start address: 0x10003b0
void UpdateMessage(char* msg)
{
	// Line 181, Address: 0x10003b0, Func Offset: 0
	// Line 182, Address: 0x10003bc, Func Offset: 0xc
	// Line 183, Address: 0x10003d0, Func Offset: 0x20
	// Line 184, Address: 0x10003e8, Func Offset: 0x38
	// Func End, Address: 0x10003f8, Func Offset: 0x48
}

// 
// Start address: 0x1000400
void DefaultMessage()
{
	// Line 189, Address: 0x1000400, Func Offset: 0
	// Line 190, Address: 0x1000408, Func Offset: 0x8
	// Line 191, Address: 0x1000418, Func Offset: 0x18
	// Func End, Address: 0x1000428, Func Offset: 0x28
}

// 
// Start address: 0x1000430
unsigned int ChkSaveFile()
{
	int i;
	// Line 195, Address: 0x1000430, Func Offset: 0
	// Line 197, Address: 0x1000438, Func Offset: 0x8
	// Line 198, Address: 0x1000444, Func Offset: 0x14
	// Line 199, Address: 0x1000470, Func Offset: 0x40
	// Line 200, Address: 0x100047c, Func Offset: 0x4c
	// Line 201, Address: 0x100048c, Func Offset: 0x5c
	// Line 202, Address: 0x1000490, Func Offset: 0x60
	// Func End, Address: 0x10004a0, Func Offset: 0x70
}

// 
// Start address: 0x10004a0
void SDMenu()
{
	unsigned short nMenuKindOld;
	tagPOINT point;
	// Line 206, Address: 0x10004a0, Func Offset: 0
	// Line 210, Address: 0x10004b4, Func Offset: 0x14
	// Line 212, Address: 0x10004c4, Func Offset: 0x24
	// Line 214, Address: 0x10004dc, Func Offset: 0x3c
	// Line 215, Address: 0x10004e8, Func Offset: 0x48
	// Line 216, Address: 0x100052c, Func Offset: 0x8c
	// Line 218, Address: 0x1000544, Func Offset: 0xa4
	// Line 219, Address: 0x1000558, Func Offset: 0xb8
	// Line 220, Address: 0x100056c, Func Offset: 0xcc
	// Line 222, Address: 0x10005c8, Func Offset: 0x128
	// Line 223, Address: 0x10005f8, Func Offset: 0x158
	// Line 224, Address: 0x1000604, Func Offset: 0x164
	// Line 226, Address: 0x100060c, Func Offset: 0x16c
	// Line 227, Address: 0x1000614, Func Offset: 0x174
	// Line 229, Address: 0x100062c, Func Offset: 0x18c
	// Line 230, Address: 0x1000638, Func Offset: 0x198
	// Line 231, Address: 0x100067c, Func Offset: 0x1dc
	// Line 233, Address: 0x1000694, Func Offset: 0x1f4
	// Line 234, Address: 0x10006a8, Func Offset: 0x208
	// Line 235, Address: 0x10006bc, Func Offset: 0x21c
	// Line 237, Address: 0x1000718, Func Offset: 0x278
	// Line 238, Address: 0x1000748, Func Offset: 0x2a8
	// Line 239, Address: 0x1000754, Func Offset: 0x2b4
	// Line 241, Address: 0x100075c, Func Offset: 0x2bc
	// Line 242, Address: 0x1000764, Func Offset: 0x2c4
	// Line 245, Address: 0x100077c, Func Offset: 0x2dc
	// Line 246, Address: 0x100078c, Func Offset: 0x2ec
	// Line 248, Address: 0x10007a4, Func Offset: 0x304
	// Line 249, Address: 0x10007b8, Func Offset: 0x318
	// Line 250, Address: 0x10007c0, Func Offset: 0x320
	// Line 253, Address: 0x10007c8, Func Offset: 0x328
	// Line 254, Address: 0x10007d4, Func Offset: 0x334
	// Line 255, Address: 0x10007dc, Func Offset: 0x33c
	// Line 256, Address: 0x10007e4, Func Offset: 0x344
	// Line 257, Address: 0x10007f4, Func Offset: 0x354
	// Line 260, Address: 0x1000844, Func Offset: 0x3a4
	// Line 261, Address: 0x1000858, Func Offset: 0x3b8
	// Line 262, Address: 0x1000868, Func Offset: 0x3c8
	// Line 263, Address: 0x100087c, Func Offset: 0x3dc
	// Line 264, Address: 0x10008a4, Func Offset: 0x404
	// Line 265, Address: 0x10008c8, Func Offset: 0x428
	// Line 266, Address: 0x10008d4, Func Offset: 0x434
	// Line 268, Address: 0x10008dc, Func Offset: 0x43c
	// Line 269, Address: 0x10008f0, Func Offset: 0x450
	// Line 270, Address: 0x1000900, Func Offset: 0x460
	// Line 271, Address: 0x1000914, Func Offset: 0x474
	// Line 272, Address: 0x100093c, Func Offset: 0x49c
	// Line 273, Address: 0x1000960, Func Offset: 0x4c0
	// Line 274, Address: 0x100096c, Func Offset: 0x4cc
	// Line 276, Address: 0x1000974, Func Offset: 0x4d4
	// Line 277, Address: 0x1000988, Func Offset: 0x4e8
	// Line 278, Address: 0x1000998, Func Offset: 0x4f8
	// Line 279, Address: 0x10009ac, Func Offset: 0x50c
	// Line 280, Address: 0x10009d4, Func Offset: 0x534
	// Line 281, Address: 0x10009f8, Func Offset: 0x558
	// Line 282, Address: 0x1000a04, Func Offset: 0x564
	// Line 284, Address: 0x1000a0c, Func Offset: 0x56c
	// Line 285, Address: 0x1000a20, Func Offset: 0x580
	// Line 286, Address: 0x1000a30, Func Offset: 0x590
	// Line 287, Address: 0x1000a44, Func Offset: 0x5a4
	// Line 288, Address: 0x1000a6c, Func Offset: 0x5cc
	// Line 289, Address: 0x1000a90, Func Offset: 0x5f0
	// Line 294, Address: 0x1000a9c, Func Offset: 0x5fc
	// Line 296, Address: 0x1000aa4, Func Offset: 0x604
	// Line 299, Address: 0x1000aac, Func Offset: 0x60c
	// Line 302, Address: 0x1000afc, Func Offset: 0x65c
	// Line 303, Address: 0x1000b04, Func Offset: 0x664
	// Line 305, Address: 0x1000b0c, Func Offset: 0x66c
	// Line 306, Address: 0x1000b14, Func Offset: 0x674
	// Line 308, Address: 0x1000b1c, Func Offset: 0x67c
	// Line 309, Address: 0x1000b24, Func Offset: 0x684
	// Line 311, Address: 0x1000b2c, Func Offset: 0x68c
	// Line 312, Address: 0x1000b34, Func Offset: 0x694
	// Line 314, Address: 0x1000b3c, Func Offset: 0x69c
	// Line 319, Address: 0x1000b44, Func Offset: 0x6a4
	// Func End, Address: 0x1000b60, Func Offset: 0x6c0
}

// 
// Start address: 0x1000b60
int SDEnd()
{
	int ret;
	// Line 324, Address: 0x1000b60, Func Offset: 0
	// Line 325, Address: 0x1000b6c, Func Offset: 0xc
	// Line 327, Address: 0x1000b70, Func Offset: 0x10
	// Line 329, Address: 0x1000b80, Func Offset: 0x20
	// Line 330, Address: 0x1000b88, Func Offset: 0x28
	// Line 333, Address: 0x1000b8c, Func Offset: 0x2c
	// Line 334, Address: 0x1000b90, Func Offset: 0x30
	// Func End, Address: 0x1000ba4, Func Offset: 0x44
}

// 
// Start address: 0x1000bb0
int CheckAutoEnd()
{
	int ret;
	int inputKeyTime;
	// Line 339, Address: 0x1000bb0, Func Offset: 0
	// Line 341, Address: 0x1000bb8, Func Offset: 0x8
	// Line 343, Address: 0x1000bbc, Func Offset: 0xc
	// Line 344, Address: 0x1000bdc, Func Offset: 0x2c
	// Line 345, Address: 0x1000bec, Func Offset: 0x3c
	// Line 349, Address: 0x1000c34, Func Offset: 0x84
	// Line 351, Address: 0x1000c38, Func Offset: 0x88
	// Line 352, Address: 0x1000c3c, Func Offset: 0x8c
	// Func End, Address: 0x1000c4c, Func Offset: 0x9c
}

