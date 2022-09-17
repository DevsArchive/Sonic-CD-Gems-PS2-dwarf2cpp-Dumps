typedef struct _anon0;
typedef struct hmx_grid;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct draw_context;
typedef struct _anon5;
typedef struct hmx_surface;
typedef struct hmx_renderer_context;
typedef struct hmx_background;
typedef struct hmx_sprite;
typedef struct hmx_bitmap;
typedef struct _anon6;
typedef struct hmx_ddagrid;
typedef struct _anon7;
typedef struct tagPALETTEENTRY;
typedef struct tagPOINT;

typedef void(*type_1)(hmx_grid*, int*);
typedef void(*type_7)(short);
typedef void(*type_9)(short);
typedef int(*type_23)(unsigned int);
typedef void(*type_24)(hmx_sprite*, int, int);
typedef unsigned int(*type_28)(int, char*, unsigned int);
typedef void(*type_32)(short);
typedef void(*type_37)(void*, void*, int);
typedef void(*type_41)(hmx_ddagrid*, int, int, int, int, int);

typedef _anon6 type_0[0];
typedef _anon7 type_2[0];
typedef int type_3[3];
typedef int type_4[2];
typedef _anon2 type_5[8];
typedef char type_6[4];
typedef unsigned char type_8[92];
typedef char type_10[12];
typedef tagPALETTEENTRY type_11[0];
typedef hmx_bitmap* type_12[1000];
typedef tagPALETTEENTRY type_13[0];
typedef _anon4 type_14[3];
typedef _anon4 type_15[3][3];
typedef int type_16[1000];
typedef _anon4 type_17[3][3][7];
typedef _anon4 type_18[3];
typedef hmx_grid* type_19[3];
typedef _anon4 type_20[3][7];
typedef tagPALETTEENTRY type_21[0];
typedef hmx_bitmap* type_22[2048];
typedef tagPALETTEENTRY type_25[0];
typedef hmx_bitmap* type_26[2048];
typedef hmx_grid* type_27[8];
typedef tagPALETTEENTRY type_29[0];
typedef hmx_bitmap* type_30[512];
typedef tagPALETTEENTRY type_31[0];
typedef int type_33[3];
typedef int type_34[64];
typedef _anon3 type_35[16];
typedef unsigned int type_36[4];
typedef int type_38[64];
typedef tagPALETTEENTRY type_39[16];
typedef tagPALETTEENTRY type_40[16][4];
typedef _anon1 type_42[128];
typedef char type_43[256];
typedef unsigned int type_44[7];

struct _anon0
{
	unsigned short wrap;
	void* pSmorphArray;
};

struct hmx_grid
{
};

struct _anon1
{
	int StartX;
	int StartY;
	int DeltaX;
	int DeltaY;
};

struct _anon2
{
	int time;
	tagPOINT point;
};

struct _anon3
{
	int time;
	unsigned short timingPatNo;
};

struct _anon4
{
	unsigned int time;
	char name[4];
};

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

struct _anon5
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
	_anon4 timeattack[3][3][7];
	_anon4 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

struct hmx_surface
{
};

struct hmx_renderer_context
{
};

struct hmx_background
{
};

struct hmx_sprite
{
};

struct hmx_bitmap
{
};

struct _anon6
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

struct hmx_ddagrid
{
};

struct _anon7
{
	unsigned short totalNum;
	unsigned short w;
	unsigned short h;
	tagPOINT point;
	int order;
	unsigned char palOff;
	unsigned int** lphBmp;
	unsigned int* lphTile;
	unsigned int* lphGrid;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct tagPOINT
{
	int x;
	int y;
};

_anon2 ptPlnt[8];
_anon3 timeHand[16];
int timeMayu[2];
int posiLeftArrow[3];
int posiRightArrow[3];
unsigned int bDrawDisable;
unsigned short nSequenceNum;
int nTimerCunt;
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
draw_context* s_ctx;
_anon6 infoSprtBmp[0];
void(*hmx_grid_set_horz_offsets_module)(hmx_grid*, int*);
_anon7 infoGridBmp[0];
void(*hmx_ddagrid_set_scan_module)(hmx_ddagrid*, int, int, int, int, int);
_anon5 crntScorData;
unsigned int(*ReadScore)(int, char*, unsigned int);
unsigned int selectIndx;
int(*ReadIndx)(unsigned int);
unsigned short swData1;
unsigned short nMenuKind;
int nFadoSeqNum;
int nFadoValu;
int nFadoTime;
void(*WaveRequest)(short);
tagPALETTEENTRY tblPal2[0];
tagPALETTEENTRY tblPal2a[0];
unsigned int bFadePaletDisable[4];
tagPALETTEENTRY workPalet[16][4];
void(*sMemCpy)(void*, void*, int);
tagPALETTEENTRY tblPal4[0];
tagPALETTEENTRY tblPal3[0];
tagPALETTEENTRY tblPal1[0];
unsigned int bFirstTitle;
tagPALETTEENTRY tblPal1a[0];
void(*CDPlay)(short);
void(*CDPause)(short);
unsigned int testSpr;
unsigned int* testBmp;
unsigned int hFx1;
unsigned int hFx0;
char KeyState[256];

void OEDraw();
void OEUpdateHand();
void OEUpdateMayu();
void OEUpdatePlanet();
void OEUpdateMizu();
void OEUpdateKumo();
void GetEnabeMenu(unsigned int* menuTable);
int GetNextMenu(unsigned int* menuTable, int kind, unsigned int bNext);
unsigned int ChkNewSlot();
void OEUpdateMsg();
void OETitleSta();
void OETitle();
void OEFadeOut();
void OEFadeIn();
void OEOpenSta();
void OESegaLogo();
void OEDark();
void OESonic();
int OEEnd();

// 
// Start address: 0x1000000
void OEDraw()
{
	// Line 180, Address: 0x1000000, Func Offset: 0
	// Line 181, Address: 0x1000008, Func Offset: 0x8
	// Line 183, Address: 0x1000030, Func Offset: 0x30
	// Line 185, Address: 0x1000038, Func Offset: 0x38
	// Func End, Address: 0x1000048, Func Offset: 0x48
}

// 
// Start address: 0x1000050
void OEUpdateHand()
{
	int num;
	// Line 190, Address: 0x1000050, Func Offset: 0
	// Line 193, Address: 0x1000058, Func Offset: 0x8
	// Line 195, Address: 0x1000068, Func Offset: 0x18
	// Line 197, Address: 0x1000070, Func Offset: 0x20
	// Line 199, Address: 0x10000b0, Func Offset: 0x60
	// Line 200, Address: 0x10000c0, Func Offset: 0x70
	// Line 201, Address: 0x10000e4, Func Offset: 0x94
	// Line 202, Address: 0x10000f8, Func Offset: 0xa8
	// Line 203, Address: 0x1000100, Func Offset: 0xb0
	// Line 204, Address: 0x1000110, Func Offset: 0xc0
	// Line 206, Address: 0x1000140, Func Offset: 0xf0
	// Line 208, Address: 0x1000164, Func Offset: 0x114
	// Func End, Address: 0x1000174, Func Offset: 0x124
}

// 
// Start address: 0x1000180
void OEUpdateMayu()
{
	int num;
	// Line 213, Address: 0x1000180, Func Offset: 0
	// Line 216, Address: 0x1000188, Func Offset: 0x8
	// Line 218, Address: 0x1000198, Func Offset: 0x18
	// Line 220, Address: 0x10001a0, Func Offset: 0x20
	// Line 222, Address: 0x10001e0, Func Offset: 0x60
	// Line 223, Address: 0x100020c, Func Offset: 0x8c
	// Line 224, Address: 0x1000218, Func Offset: 0x98
	// Line 225, Address: 0x100022c, Func Offset: 0xac
	// Line 226, Address: 0x1000234, Func Offset: 0xb4
	// Line 227, Address: 0x1000274, Func Offset: 0xf4
	// Line 229, Address: 0x1000280, Func Offset: 0x100
	// Func End, Address: 0x1000290, Func Offset: 0x110
}

// 
// Start address: 0x1000290
void OEUpdatePlanet()
{
	int num;
	int staTime;
	// Line 234, Address: 0x1000290, Func Offset: 0
	// Line 238, Address: 0x1000298, Func Offset: 0x8
	// Line 240, Address: 0x10002ac, Func Offset: 0x1c
	// Line 242, Address: 0x10002bc, Func Offset: 0x2c
	// Line 243, Address: 0x10002c4, Func Offset: 0x34
	// Line 246, Address: 0x10002cc, Func Offset: 0x3c
	// Line 247, Address: 0x1000334, Func Offset: 0xa4
	// Line 249, Address: 0x1000374, Func Offset: 0xe4
	// Line 251, Address: 0x1000394, Func Offset: 0x104
	// Line 253, Address: 0x100039c, Func Offset: 0x10c
	// Line 254, Address: 0x10003a4, Func Offset: 0x114
	// Line 256, Address: 0x10003d4, Func Offset: 0x144
	// Line 257, Address: 0x10003dc, Func Offset: 0x14c
	// Line 259, Address: 0x10003ec, Func Offset: 0x15c
	// Line 262, Address: 0x1000454, Func Offset: 0x1c4
	// Func End, Address: 0x1000464, Func Offset: 0x1d4
}

// 
// Start address: 0x1000470
void OEUpdateMizu()
{
	int inc;
	int i;
	int nHorizShearArray[64];
	int fHorizShearArray[64];
	// Line 266, Address: 0x1000470, Func Offset: 0
	// Line 271, Address: 0x1000480, Func Offset: 0x10
	// Line 273, Address: 0x1000490, Func Offset: 0x20
	// Line 275, Address: 0x100049c, Func Offset: 0x2c
	// Line 276, Address: 0x10004b0, Func Offset: 0x40
	// Line 277, Address: 0x10004c4, Func Offset: 0x54
	// Line 279, Address: 0x10004d4, Func Offset: 0x64
	// Line 282, Address: 0x10004f8, Func Offset: 0x88
	// Line 284, Address: 0x100050c, Func Offset: 0x9c
	// Line 286, Address: 0x1000538, Func Offset: 0xc8
	// Line 288, Address: 0x1000544, Func Offset: 0xd4
	// Line 289, Address: 0x1000554, Func Offset: 0xe4
	// Line 290, Address: 0x1000570, Func Offset: 0x100
	// Line 291, Address: 0x1000590, Func Offset: 0x120
	// Line 292, Address: 0x10005ac, Func Offset: 0x13c
	// Line 293, Address: 0x10005f0, Func Offset: 0x180
	// Line 294, Address: 0x1000600, Func Offset: 0x190
	// Line 297, Address: 0x1000624, Func Offset: 0x1b4
	// Func End, Address: 0x100063c, Func Offset: 0x1cc
}

// 
// Start address: 0x1000640
void OEUpdateKumo()
{
	int i;
	unsigned short incY;
	_anon1 RotateMorphValues[128];
	unsigned char offsetY[92];
	_anon0 RotateMorph;
	// Line 306, Address: 0x1000640, Func Offset: 0
	// Line 321, Address: 0x100064c, Func Offset: 0xc
	// Line 323, Address: 0x100065c, Func Offset: 0x1c
	// Line 325, Address: 0x1000668, Func Offset: 0x28
	// Line 326, Address: 0x10006b8, Func Offset: 0x78
	// Line 327, Address: 0x10006d0, Func Offset: 0x90
	// Line 328, Address: 0x100071c, Func Offset: 0xdc
	// Line 329, Address: 0x1000730, Func Offset: 0xf0
	// Line 330, Address: 0x1000740, Func Offset: 0x100
	// Line 332, Address: 0x100074c, Func Offset: 0x10c
	// Line 333, Address: 0x1000764, Func Offset: 0x124
	// Line 334, Address: 0x100077c, Func Offset: 0x13c
	// Line 335, Address: 0x1000790, Func Offset: 0x150
	// Line 336, Address: 0x10007a4, Func Offset: 0x164
	// Line 337, Address: 0x10007b4, Func Offset: 0x174
	// Line 338, Address: 0x10007bc, Func Offset: 0x17c
	// Line 340, Address: 0x10007cc, Func Offset: 0x18c
	// Line 342, Address: 0x10007d4, Func Offset: 0x194
	// Line 344, Address: 0x10007e0, Func Offset: 0x1a0
	// Line 345, Address: 0x1000838, Func Offset: 0x1f8
	// Line 346, Address: 0x10008a8, Func Offset: 0x268
	// Line 347, Address: 0x10008b8, Func Offset: 0x278
	// Line 348, Address: 0x10008e8, Func Offset: 0x2a8
	// Func End, Address: 0x10008fc, Func Offset: 0x2bc
}

// 
// Start address: 0x1000900
void GetEnabeMenu(unsigned int* menuTable)
{
	_anon5 dummyData;
	unsigned int bDataExist;
	// Line 353, Address: 0x1000900, Func Offset: 0
	// Line 357, Address: 0x1000910, Func Offset: 0x10
	// Line 359, Address: 0x1000938, Func Offset: 0x38
	// Line 360, Address: 0x100093c, Func Offset: 0x3c
	// Line 362, Address: 0x1000944, Func Offset: 0x44
	// Line 363, Address: 0x1000948, Func Offset: 0x48
	// Line 364, Address: 0x1000964, Func Offset: 0x64
	// Line 373, Address: 0x1000988, Func Offset: 0x88
	// Line 375, Address: 0x1000994, Func Offset: 0x94
	// Line 377, Address: 0x10009a0, Func Offset: 0xa0
	// Line 378, Address: 0x10009a8, Func Offset: 0xa8
	// Line 379, Address: 0x10009b8, Func Offset: 0xb8
	// Line 384, Address: 0x10009c0, Func Offset: 0xc0
	// Line 385, Address: 0x10009d4, Func Offset: 0xd4
	// Line 387, Address: 0x10009e8, Func Offset: 0xe8
	// Line 392, Address: 0x10009f0, Func Offset: 0xf0
	// Line 393, Address: 0x10009f8, Func Offset: 0xf8
	// Line 395, Address: 0x1000a0c, Func Offset: 0x10c
	// Line 398, Address: 0x1000a14, Func Offset: 0x114
	// Line 399, Address: 0x1000a24, Func Offset: 0x124
	// Line 401, Address: 0x1000a38, Func Offset: 0x138
	// Line 403, Address: 0x1000a40, Func Offset: 0x140
	// Line 404, Address: 0x1000a70, Func Offset: 0x170
	// Line 406, Address: 0x1000a84, Func Offset: 0x184
	// Line 408, Address: 0x1000a8c, Func Offset: 0x18c
	// Line 409, Address: 0x1000abc, Func Offset: 0x1bc
	// Line 411, Address: 0x1000ad0, Func Offset: 0x1d0
	// Line 412, Address: 0x1000ad8, Func Offset: 0x1d8
	// Func End, Address: 0x1000aec, Func Offset: 0x1ec
}

// 
// Start address: 0x1000af0
int GetNextMenu(unsigned int* menuTable, int kind, unsigned int bNext)
{
	int indx;
	int n;
	// Line 417, Address: 0x1000af0, Func Offset: 0
	// Line 421, Address: 0x1000b08, Func Offset: 0x18
	// Line 423, Address: 0x1000b18, Func Offset: 0x28
	// Line 424, Address: 0x1000b28, Func Offset: 0x38
	// Line 426, Address: 0x1000b34, Func Offset: 0x44
	// Line 430, Address: 0x1000b40, Func Offset: 0x50
	// Line 432, Address: 0x1000b44, Func Offset: 0x54
	// Line 434, Address: 0x1000b50, Func Offset: 0x60
	// Line 436, Address: 0x1000b5c, Func Offset: 0x6c
	// Line 437, Address: 0x1000b60, Func Offset: 0x70
	// Line 438, Address: 0x1000b70, Func Offset: 0x80
	// Line 439, Address: 0x1000b94, Func Offset: 0xa4
	// Line 440, Address: 0x1000ba4, Func Offset: 0xb4
	// Line 443, Address: 0x1000bac, Func Offset: 0xbc
	// Line 445, Address: 0x1000bb8, Func Offset: 0xc8
	// Line 446, Address: 0x1000bbc, Func Offset: 0xcc
	// Line 447, Address: 0x1000bc8, Func Offset: 0xd8
	// Line 448, Address: 0x1000bec, Func Offset: 0xfc
	// Line 471, Address: 0x1000bfc, Func Offset: 0x10c
	// Func End, Address: 0x1000c10, Func Offset: 0x120
}

// 
// Start address: 0x1000c10
unsigned int ChkNewSlot()
{
	int i;
	_anon5 dummyData;
	// Line 474, Address: 0x1000c10, Func Offset: 0
	// Line 478, Address: 0x1000c1c, Func Offset: 0xc
	// Line 479, Address: 0x1000c28, Func Offset: 0x18
	// Line 481, Address: 0x1000c4c, Func Offset: 0x3c
	// Line 483, Address: 0x1000c58, Func Offset: 0x48
	// Line 484, Address: 0x1000c68, Func Offset: 0x58
	// Line 486, Address: 0x1000c74, Func Offset: 0x64
	// Line 488, Address: 0x1000c80, Func Offset: 0x70
	// Line 489, Address: 0x1000c84, Func Offset: 0x74
	// Func End, Address: 0x1000c98, Func Offset: 0x88
}

// 
// Start address: 0x1000ca0
void OEUpdateMsg()
{
	tagPOINT arrowPoint;
	unsigned int kPosi;
	unsigned int lPosi;
	unsigned int rPosi;
	tagPOINT point;
	int kind;
	int nSeqNo;
	unsigned int RArrow;
	unsigned int LArrow;
	int nSeqNoNext;
	int timeOld;
	unsigned int menuEnable[7];
	int arrowKind;
	unsigned int bDelete;
	int testCheckMode;
	// Line 504, Address: 0x1000ca0, Func Offset: 0
	// Line 520, Address: 0x1000cb8, Func Offset: 0x18
	// Line 522, Address: 0x1000cc4, Func Offset: 0x24
	// Line 524, Address: 0x1000cd4, Func Offset: 0x34
	// Line 525, Address: 0x1000ce0, Func Offset: 0x40
	// Line 526, Address: 0x1000ce8, Func Offset: 0x48
	// Line 527, Address: 0x1000cf0, Func Offset: 0x50
	// Line 528, Address: 0x1000cf8, Func Offset: 0x58
	// Line 529, Address: 0x1000d04, Func Offset: 0x64
	// Line 530, Address: 0x1000d18, Func Offset: 0x78
	// Line 532, Address: 0x1000d24, Func Offset: 0x84
	// Line 535, Address: 0x1000d44, Func Offset: 0xa4
	// Line 536, Address: 0x1000d50, Func Offset: 0xb0
	// Line 537, Address: 0x1000d5c, Func Offset: 0xbc
	// Line 538, Address: 0x1000d68, Func Offset: 0xc8
	// Line 539, Address: 0x1000d74, Func Offset: 0xd4
	// Line 543, Address: 0x1000d80, Func Offset: 0xe0
	// Line 545, Address: 0x1000d94, Func Offset: 0xf4
	// Line 555, Address: 0x1000da4, Func Offset: 0x104
	// Line 557, Address: 0x1000dbc, Func Offset: 0x11c
	// Line 559, Address: 0x1000e8c, Func Offset: 0x1ec
	// Line 560, Address: 0x1000ec0, Func Offset: 0x220
	// Line 561, Address: 0x1000eec, Func Offset: 0x24c
	// Line 562, Address: 0x1000f18, Func Offset: 0x278
	// Line 563, Address: 0x1000f20, Func Offset: 0x280
	// Line 564, Address: 0x1000f28, Func Offset: 0x288
	// Line 565, Address: 0x1000f5c, Func Offset: 0x2bc
	// Line 566, Address: 0x1000f64, Func Offset: 0x2c4
	// Line 567, Address: 0x1000f6c, Func Offset: 0x2cc
	// Line 568, Address: 0x1000fa0, Func Offset: 0x300
	// Line 569, Address: 0x1000fa8, Func Offset: 0x308
	// Line 570, Address: 0x1000fb0, Func Offset: 0x310
	// Line 571, Address: 0x1000fe4, Func Offset: 0x344
	// Line 572, Address: 0x1000fec, Func Offset: 0x34c
	// Line 573, Address: 0x1000ff4, Func Offset: 0x354
	// Line 574, Address: 0x1001028, Func Offset: 0x388
	// Line 575, Address: 0x1001030, Func Offset: 0x390
	// Line 576, Address: 0x1001038, Func Offset: 0x398
	// Line 578, Address: 0x1001050, Func Offset: 0x3b0
	// Line 579, Address: 0x100105c, Func Offset: 0x3bc
	// Line 580, Address: 0x1001068, Func Offset: 0x3c8
	// Line 581, Address: 0x1001074, Func Offset: 0x3d4
	// Line 582, Address: 0x1001080, Func Offset: 0x3e0
	// Line 583, Address: 0x100108c, Func Offset: 0x3ec
	// Line 584, Address: 0x1001094, Func Offset: 0x3f4
	// Line 585, Address: 0x100109c, Func Offset: 0x3fc
	// Line 586, Address: 0x10010a4, Func Offset: 0x404
	// Line 587, Address: 0x10010d8, Func Offset: 0x438
	// Line 588, Address: 0x10010e0, Func Offset: 0x440
	// Line 589, Address: 0x10010e8, Func Offset: 0x448
	// Line 590, Address: 0x100111c, Func Offset: 0x47c
	// Line 591, Address: 0x1001124, Func Offset: 0x484
	// Line 592, Address: 0x100112c, Func Offset: 0x48c
	// Line 593, Address: 0x1001160, Func Offset: 0x4c0
	// Line 594, Address: 0x1001168, Func Offset: 0x4c8
	// Line 595, Address: 0x1001170, Func Offset: 0x4d0
	// Line 596, Address: 0x10011a4, Func Offset: 0x504
	// Line 597, Address: 0x10011ac, Func Offset: 0x50c
	// Line 598, Address: 0x10011b4, Func Offset: 0x514
	// Line 600, Address: 0x10011cc, Func Offset: 0x52c
	// Line 601, Address: 0x10011d8, Func Offset: 0x538
	// Line 602, Address: 0x10011e4, Func Offset: 0x544
	// Line 603, Address: 0x10011f0, Func Offset: 0x550
	// Line 604, Address: 0x10011fc, Func Offset: 0x55c
	// Line 605, Address: 0x100120c, Func Offset: 0x56c
	// Line 606, Address: 0x1001214, Func Offset: 0x574
	// Line 607, Address: 0x100121c, Func Offset: 0x57c
	// Line 610, Address: 0x1001224, Func Offset: 0x584
	// Line 611, Address: 0x1001258, Func Offset: 0x5b8
	// Line 612, Address: 0x1001260, Func Offset: 0x5c0
	// Line 613, Address: 0x1001268, Func Offset: 0x5c8
	// Line 614, Address: 0x100129c, Func Offset: 0x5fc
	// Line 615, Address: 0x10012a4, Func Offset: 0x604
	// Line 616, Address: 0x10012ac, Func Offset: 0x60c
	// Line 617, Address: 0x10012e0, Func Offset: 0x640
	// Line 618, Address: 0x10012e8, Func Offset: 0x648
	// Line 619, Address: 0x10012f0, Func Offset: 0x650
	// Line 620, Address: 0x1001324, Func Offset: 0x684
	// Line 621, Address: 0x100132c, Func Offset: 0x68c
	// Line 622, Address: 0x1001334, Func Offset: 0x694
	// Line 624, Address: 0x100134c, Func Offset: 0x6ac
	// Line 625, Address: 0x1001358, Func Offset: 0x6b8
	// Line 626, Address: 0x1001364, Func Offset: 0x6c4
	// Line 627, Address: 0x1001370, Func Offset: 0x6d0
	// Line 628, Address: 0x100137c, Func Offset: 0x6dc
	// Line 629, Address: 0x100138c, Func Offset: 0x6ec
	// Line 630, Address: 0x1001394, Func Offset: 0x6f4
	// Line 635, Address: 0x100139c, Func Offset: 0x6fc
	// Line 636, Address: 0x10013ac, Func Offset: 0x70c
	// Line 637, Address: 0x10013b8, Func Offset: 0x718
	// Line 640, Address: 0x10013c4, Func Offset: 0x724
	// Line 642, Address: 0x10013e0, Func Offset: 0x740
	// Line 646, Address: 0x1001408, Func Offset: 0x768
	// Line 649, Address: 0x100142c, Func Offset: 0x78c
	// Line 651, Address: 0x1001444, Func Offset: 0x7a4
	// Line 652, Address: 0x1001478, Func Offset: 0x7d8
	// Line 653, Address: 0x1001488, Func Offset: 0x7e8
	// Line 654, Address: 0x100149c, Func Offset: 0x7fc
	// Line 655, Address: 0x10014b4, Func Offset: 0x814
	// Line 657, Address: 0x10014c0, Func Offset: 0x820
	// Line 658, Address: 0x10014c8, Func Offset: 0x828
	// Line 660, Address: 0x10014dc, Func Offset: 0x83c
	// Line 661, Address: 0x10014ec, Func Offset: 0x84c
	// Line 662, Address: 0x1001504, Func Offset: 0x864
	// Line 663, Address: 0x1001518, Func Offset: 0x878
	// Line 665, Address: 0x100152c, Func Offset: 0x88c
	// Line 667, Address: 0x1001540, Func Offset: 0x8a0
	// Line 668, Address: 0x1001564, Func Offset: 0x8c4
	// Line 670, Address: 0x100156c, Func Offset: 0x8cc
	// Line 671, Address: 0x1001598, Func Offset: 0x8f8
	// Line 672, Address: 0x10015cc, Func Offset: 0x92c
	// Line 673, Address: 0x10015f8, Func Offset: 0x958
	// Line 674, Address: 0x100160c, Func Offset: 0x96c
	// Line 676, Address: 0x1001618, Func Offset: 0x978
	// Line 677, Address: 0x100161c, Func Offset: 0x97c
	// Line 678, Address: 0x1001624, Func Offset: 0x984
	// Line 680, Address: 0x1001638, Func Offset: 0x998
	// Line 681, Address: 0x100164c, Func Offset: 0x9ac
	// Line 682, Address: 0x1001660, Func Offset: 0x9c0
	// Line 684, Address: 0x1001690, Func Offset: 0x9f0
	// Line 685, Address: 0x10016d4, Func Offset: 0xa34
	// Line 686, Address: 0x1001718, Func Offset: 0xa78
	// Line 687, Address: 0x100174c, Func Offset: 0xaac
	// Line 688, Address: 0x1001768, Func Offset: 0xac8
	// Line 689, Address: 0x1001774, Func Offset: 0xad4
	// Line 691, Address: 0x1001784, Func Offset: 0xae4
	// Line 692, Address: 0x100178c, Func Offset: 0xaec
	// Line 693, Address: 0x1001794, Func Offset: 0xaf4
	// Line 695, Address: 0x10017a8, Func Offset: 0xb08
	// Line 696, Address: 0x10017b8, Func Offset: 0xb18
	// Line 697, Address: 0x10017d0, Func Offset: 0xb30
	// Line 698, Address: 0x10017e4, Func Offset: 0xb44
	// Line 700, Address: 0x100181c, Func Offset: 0xb7c
	// Line 701, Address: 0x1001850, Func Offset: 0xbb0
	// Line 702, Address: 0x1001884, Func Offset: 0xbe4
	// Line 703, Address: 0x1001890, Func Offset: 0xbf0
	// Line 704, Address: 0x10018a8, Func Offset: 0xc08
	// Line 706, Address: 0x10018b4, Func Offset: 0xc14
	// Line 707, Address: 0x10018bc, Func Offset: 0xc1c
	// Line 708, Address: 0x10018c4, Func Offset: 0xc24
	// Line 710, Address: 0x10018d8, Func Offset: 0xc38
	// Line 711, Address: 0x10018f0, Func Offset: 0xc50
	// Line 712, Address: 0x1001904, Func Offset: 0xc64
	// Line 714, Address: 0x1001934, Func Offset: 0xc94
	// Line 715, Address: 0x100197c, Func Offset: 0xcdc
	// Line 716, Address: 0x10019c0, Func Offset: 0xd20
	// Line 717, Address: 0x10019f4, Func Offset: 0xd54
	// Line 718, Address: 0x1001a0c, Func Offset: 0xd6c
	// Line 719, Address: 0x1001a18, Func Offset: 0xd78
	// Line 721, Address: 0x1001a28, Func Offset: 0xd88
	// Line 722, Address: 0x1001a30, Func Offset: 0xd90
	// Line 723, Address: 0x1001a38, Func Offset: 0xd98
	// Line 725, Address: 0x1001a4c, Func Offset: 0xdac
	// Line 727, Address: 0x1001a84, Func Offset: 0xde4
	// Line 729, Address: 0x1001a98, Func Offset: 0xdf8
	// Line 730, Address: 0x1001ab8, Func Offset: 0xe18
	// Line 731, Address: 0x1001ac4, Func Offset: 0xe24
	// Line 733, Address: 0x1001acc, Func Offset: 0xe2c
	// Line 735, Address: 0x1001ae0, Func Offset: 0xe40
	// Line 736, Address: 0x1001b00, Func Offset: 0xe60
	// Line 737, Address: 0x1001b0c, Func Offset: 0xe6c
	// Line 739, Address: 0x1001b14, Func Offset: 0xe74
	// Line 742, Address: 0x1001b3c, Func Offset: 0xe9c
	// Line 744, Address: 0x1001b54, Func Offset: 0xeb4
	// Line 745, Address: 0x1001b68, Func Offset: 0xec8
	// Line 746, Address: 0x1001b7c, Func Offset: 0xedc
	// Line 747, Address: 0x1001b94, Func Offset: 0xef4
	// Line 751, Address: 0x1001b9c, Func Offset: 0xefc
	// Line 752, Address: 0x1001ba8, Func Offset: 0xf08
	// Line 753, Address: 0x1001bb4, Func Offset: 0xf14
	// Line 754, Address: 0x1001bc0, Func Offset: 0xf20
	// Line 755, Address: 0x1001bcc, Func Offset: 0xf2c
	// Line 756, Address: 0x1001be4, Func Offset: 0xf44
	// Line 757, Address: 0x1001bec, Func Offset: 0xf4c
	// Line 760, Address: 0x1001c40, Func Offset: 0xfa0
	// Line 761, Address: 0x1001c50, Func Offset: 0xfb0
	// Line 762, Address: 0x1001c5c, Func Offset: 0xfbc
	// Line 763, Address: 0x1001c68, Func Offset: 0xfc8
	// Line 764, Address: 0x1001c70, Func Offset: 0xfd0
	// Line 767, Address: 0x1001cc0, Func Offset: 0x1020
	// Line 768, Address: 0x1001cd0, Func Offset: 0x1030
	// Line 769, Address: 0x1001cdc, Func Offset: 0x103c
	// Line 771, Address: 0x1001ce8, Func Offset: 0x1048
	// Line 772, Address: 0x1001cf0, Func Offset: 0x1050
	// Line 774, Address: 0x1001d04, Func Offset: 0x1064
	// Line 776, Address: 0x1001d24, Func Offset: 0x1084
	// Line 779, Address: 0x1001d34, Func Offset: 0x1094
	// Line 780, Address: 0x1001d54, Func Offset: 0x10b4
	// Line 781, Address: 0x1001d70, Func Offset: 0x10d0
	// Line 785, Address: 0x1001d98, Func Offset: 0x10f8
	// Line 786, Address: 0x1001df8, Func Offset: 0x1158
	// Line 787, Address: 0x1001e48, Func Offset: 0x11a8
	// Line 788, Address: 0x1001e90, Func Offset: 0x11f0
	// Func End, Address: 0x1001eb0, Func Offset: 0x1210
}

// 
// Start address: 0x1001eb0
void OETitleSta()
{
	// Line 793, Address: 0x1001eb0, Func Offset: 0
	// Line 794, Address: 0x1001eb8, Func Offset: 0x8
	// Line 795, Address: 0x1001ec0, Func Offset: 0x10
	// Line 797, Address: 0x1001ed0, Func Offset: 0x20
	// Line 798, Address: 0x1001edc, Func Offset: 0x2c
	// Line 799, Address: 0x1001ee8, Func Offset: 0x38
	// Line 800, Address: 0x1001ef4, Func Offset: 0x44
	// Line 801, Address: 0x1001f00, Func Offset: 0x50
	// Line 802, Address: 0x1001f0c, Func Offset: 0x5c
	// Line 803, Address: 0x1001f18, Func Offset: 0x68
	// Line 805, Address: 0x1001f24, Func Offset: 0x74
	// Line 806, Address: 0x1001f30, Func Offset: 0x80
	// Line 807, Address: 0x1001f3c, Func Offset: 0x8c
	// Func End, Address: 0x1001f4c, Func Offset: 0x9c
}

// 
// Start address: 0x1001f50
void OETitle()
{
	// Line 812, Address: 0x1001f50, Func Offset: 0
	// Line 813, Address: 0x1001f58, Func Offset: 0x8
	// Line 814, Address: 0x1001f60, Func Offset: 0x10
	// Line 815, Address: 0x1001f6c, Func Offset: 0x1c
	// Line 817, Address: 0x1001f7c, Func Offset: 0x2c
	// Line 819, Address: 0x1001f88, Func Offset: 0x38
	// Line 820, Address: 0x1001f90, Func Offset: 0x40
	// Line 821, Address: 0x1001f98, Func Offset: 0x48
	// Line 822, Address: 0x1001fa0, Func Offset: 0x50
	// Line 823, Address: 0x1001fa8, Func Offset: 0x58
	// Line 824, Address: 0x1001fb0, Func Offset: 0x60
	// Line 825, Address: 0x1001fb8, Func Offset: 0x68
	// Func End, Address: 0x1001fc8, Func Offset: 0x78
}

// 
// Start address: 0x1001fd0
void OEFadeOut()
{
	int i;
	int j;
	int colorNum;
	// Line 831, Address: 0x1001fd0, Func Offset: 0
	// Line 835, Address: 0x1001fe0, Func Offset: 0x10
	// Line 837, Address: 0x1001ff0, Func Offset: 0x20
	// Line 838, Address: 0x1002014, Func Offset: 0x44
	// Line 839, Address: 0x1002038, Func Offset: 0x68
	// Line 840, Address: 0x100205c, Func Offset: 0x8c
	// Line 841, Address: 0x1002080, Func Offset: 0xb0
	// Line 842, Address: 0x1002088, Func Offset: 0xb8
	// Line 843, Address: 0x1002090, Func Offset: 0xc0
	// Line 845, Address: 0x10020a8, Func Offset: 0xd8
	// Line 846, Address: 0x10020c8, Func Offset: 0xf8
	// Line 847, Address: 0x10020dc, Func Offset: 0x10c
	// Line 850, Address: 0x10020e4, Func Offset: 0x114
	// Line 852, Address: 0x10020f0, Func Offset: 0x120
	// Line 854, Address: 0x10020fc, Func Offset: 0x12c
	// Line 855, Address: 0x1002168, Func Offset: 0x198
	// Line 856, Address: 0x1002184, Func Offset: 0x1b4
	// Line 858, Address: 0x10021ac, Func Offset: 0x1dc
	// Line 859, Address: 0x1002218, Func Offset: 0x248
	// Line 860, Address: 0x1002234, Func Offset: 0x264
	// Line 862, Address: 0x100225c, Func Offset: 0x28c
	// Line 863, Address: 0x10022c8, Func Offset: 0x2f8
	// Line 866, Address: 0x10022e4, Func Offset: 0x314
	// Line 867, Address: 0x10022f4, Func Offset: 0x324
	// Line 868, Address: 0x100232c, Func Offset: 0x35c
	// Line 887, Address: 0x100233c, Func Offset: 0x36c
	// Func End, Address: 0x1002354, Func Offset: 0x384
}

// 
// Start address: 0x1002360
void OEFadeIn()
{
	int n;
	int j;
	tagPALETTEENTRY* lpPal;
	// Line 893, Address: 0x1002360, Func Offset: 0
	// Line 897, Address: 0x1002380, Func Offset: 0x20
	// Line 898, Address: 0x1002388, Func Offset: 0x28
	// Line 899, Address: 0x100239c, Func Offset: 0x3c
	// Line 900, Address: 0x10023a8, Func Offset: 0x48
	// Line 903, Address: 0x10023b4, Func Offset: 0x54
	// Line 905, Address: 0x10023cc, Func Offset: 0x6c
	// Line 906, Address: 0x10023e0, Func Offset: 0x80
	// Line 907, Address: 0x10023f4, Func Offset: 0x94
	// Line 908, Address: 0x1002408, Func Offset: 0xa8
	// Line 909, Address: 0x100241c, Func Offset: 0xbc
	// Line 910, Address: 0x100243c, Func Offset: 0xdc
	// Line 911, Address: 0x1002450, Func Offset: 0xf0
	// Line 914, Address: 0x1002458, Func Offset: 0xf8
	// Line 915, Address: 0x1002460, Func Offset: 0x100
	// Line 917, Address: 0x1002480, Func Offset: 0x120
	// Line 919, Address: 0x100248c, Func Offset: 0x12c
	// Line 921, Address: 0x10024c0, Func Offset: 0x160
	// Line 922, Address: 0x10024d0, Func Offset: 0x170
	// Line 923, Address: 0x10024e0, Func Offset: 0x180
	// Line 924, Address: 0x10024f0, Func Offset: 0x190
	// Line 926, Address: 0x10024f8, Func Offset: 0x198
	// Line 928, Address: 0x1002504, Func Offset: 0x1a4
	// Line 929, Address: 0x1002590, Func Offset: 0x230
	// Line 930, Address: 0x100261c, Func Offset: 0x2bc
	// Line 931, Address: 0x10026a8, Func Offset: 0x348
	// Line 932, Address: 0x10026d0, Func Offset: 0x370
	// Line 933, Address: 0x10026e0, Func Offset: 0x380
	// Line 934, Address: 0x1002718, Func Offset: 0x3b8
	// Line 937, Address: 0x1002728, Func Offset: 0x3c8
	// Func End, Address: 0x1002750, Func Offset: 0x3f0
}

// 
// Start address: 0x1002750
void OEOpenSta()
{
	// Line 942, Address: 0x1002750, Func Offset: 0
	// Line 943, Address: 0x1002758, Func Offset: 0x8
	// Line 945, Address: 0x1002768, Func Offset: 0x18
	// Line 946, Address: 0x1002774, Func Offset: 0x24
	// Line 947, Address: 0x1002798, Func Offset: 0x48
	// Line 949, Address: 0x10027a4, Func Offset: 0x54
	// Func End, Address: 0x10027b4, Func Offset: 0x64
}

// 
// Start address: 0x10027c0
void OESegaLogo()
{
	// Line 957, Address: 0x10027c0, Func Offset: 0
	// Line 958, Address: 0x10027c8, Func Offset: 0x8
	// Line 959, Address: 0x10027d0, Func Offset: 0x10
	// Line 961, Address: 0x10027e0, Func Offset: 0x20
	// Line 962, Address: 0x10027f4, Func Offset: 0x34
	// Line 963, Address: 0x10027fc, Func Offset: 0x3c
	// Line 965, Address: 0x1002810, Func Offset: 0x50
	// Line 966, Address: 0x100281c, Func Offset: 0x5c
	// Line 967, Address: 0x1002828, Func Offset: 0x68
	// Line 968, Address: 0x100283c, Func Offset: 0x7c
	// Line 969, Address: 0x1002844, Func Offset: 0x84
	// Line 971, Address: 0x1002850, Func Offset: 0x90
	// Func End, Address: 0x1002860, Func Offset: 0xa0
}

// 
// Start address: 0x1002860
void OEDark()
{
	// Line 976, Address: 0x1002860, Func Offset: 0
	// Line 977, Address: 0x1002868, Func Offset: 0x8
	// Line 979, Address: 0x100287c, Func Offset: 0x1c
	// Line 981, Address: 0x1002888, Func Offset: 0x28
	// Func End, Address: 0x1002898, Func Offset: 0x38
}

// 
// Start address: 0x10028a0
void OESonic()
{
	// Line 987, Address: 0x10028a0, Func Offset: 0
	// Line 988, Address: 0x10028a8, Func Offset: 0x8
	// Line 989, Address: 0x10028b0, Func Offset: 0x10
	// Line 990, Address: 0x10028c0, Func Offset: 0x20
	// Line 991, Address: 0x10028d4, Func Offset: 0x34
	// Line 992, Address: 0x10028dc, Func Offset: 0x3c
	// Line 994, Address: 0x10028f0, Func Offset: 0x50
	// Line 995, Address: 0x10028fc, Func Offset: 0x5c
	// Line 996, Address: 0x1002904, Func Offset: 0x64
	// Line 998, Address: 0x1002918, Func Offset: 0x78
	// Line 999, Address: 0x1002924, Func Offset: 0x84
	// Line 1000, Address: 0x100292c, Func Offset: 0x8c
	// Line 1002, Address: 0x1002940, Func Offset: 0xa0
	// Line 1003, Address: 0x100294c, Func Offset: 0xac
	// Line 1004, Address: 0x1002954, Func Offset: 0xb4
	// Line 1006, Address: 0x1002968, Func Offset: 0xc8
	// Line 1007, Address: 0x1002974, Func Offset: 0xd4
	// Line 1010, Address: 0x100297c, Func Offset: 0xdc
	// Line 1012, Address: 0x1002988, Func Offset: 0xe8
	// Func End, Address: 0x1002998, Func Offset: 0xf8
}

// 
// Start address: 0x10029a0
int OEEnd()
{
	int ret;
	// Line 1017, Address: 0x10029a0, Func Offset: 0
	// Line 1018, Address: 0x10029ac, Func Offset: 0xc
	// Line 1020, Address: 0x10029b0, Func Offset: 0x10
	// Line 1022, Address: 0x10029c0, Func Offset: 0x20
	// Line 1023, Address: 0x10029d4, Func Offset: 0x34
	// Line 1026, Address: 0x1002a08, Func Offset: 0x68
	// Line 1027, Address: 0x1002a0c, Func Offset: 0x6c
	// Line 1029, Address: 0x1002a14, Func Offset: 0x74
	// Line 1030, Address: 0x1002a18, Func Offset: 0x78
	// Line 1032, Address: 0x1002a20, Func Offset: 0x80
	// Line 1033, Address: 0x1002a24, Func Offset: 0x84
	// Line 1035, Address: 0x1002a2c, Func Offset: 0x8c
	// Line 1036, Address: 0x1002a30, Func Offset: 0x90
	// Line 1038, Address: 0x1002a38, Func Offset: 0x98
	// Line 1039, Address: 0x1002a3c, Func Offset: 0x9c
	// Line 1041, Address: 0x1002a44, Func Offset: 0xa4
	// Line 1042, Address: 0x1002a48, Func Offset: 0xa8
	// Line 1044, Address: 0x1002a50, Func Offset: 0xb0
	// Line 1045, Address: 0x1002a54, Func Offset: 0xb4
	// Line 1047, Address: 0x1002a5c, Func Offset: 0xbc
	// Line 1048, Address: 0x1002a60, Func Offset: 0xc0
	// Line 1050, Address: 0x1002a68, Func Offset: 0xc8
	// Line 1051, Address: 0x1002a6c, Func Offset: 0xcc
	// Line 1053, Address: 0x1002a74, Func Offset: 0xd4
	// Line 1054, Address: 0x1002a78, Func Offset: 0xd8
	// Line 1057, Address: 0x1002a80, Func Offset: 0xe0
	// Line 1062, Address: 0x1002a84, Func Offset: 0xe4
	// Line 1063, Address: 0x1002a88, Func Offset: 0xe8
	// Func End, Address: 0x1002a9c, Func Offset: 0xfc
}

