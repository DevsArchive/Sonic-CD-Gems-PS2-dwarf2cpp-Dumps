typedef struct _anon0;
typedef struct hmx_environment;
typedef struct dlink_export;
typedef struct hmx_sprite;
typedef struct hmx_grid;
typedef struct hmx_bitmap;
typedef struct _anon1;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_base;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct tagPALETTEENTRY;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;

typedef void(*type_0)(int);
typedef void(*type_1)(hmx_environment*, void*);
typedef void(*type_2)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_3)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_4)();
typedef void(*type_5)(char*, char*);
typedef hmx_grid*(*type_6)(hmx_environment*, int, int, int, int);
typedef void(*type_7)(char***, void**);
typedef void(*type_9)();
typedef void(*type_10)(short, short);
typedef void(*type_11)(hmx_sprite*, int);
typedef int(*type_12)();
typedef void(*type_13)(char*);
typedef void(*type_14)(hmx_environment*, hmx_grid*);
typedef int(*type_16)();
typedef void(*type_19)(unsigned int);
typedef hmx_ddagrid*(*type_20)(hmx_environment*, int, int, int, int, int, int);
typedef void(*type_23)(unsigned short, unsigned char, char*);
typedef hmx_renderer_base*(*type_24)(hmx_grid*);
typedef draw_context*(*type_25)();
typedef void(*type_26)(hmx_environment*, hmx_ddagrid*);
typedef void(*type_27)(hmx_grid*, int, int);
typedef void(*type_28)();
typedef void(*type_29)(hmx_ddagrid*, int, int, int, int, int);
typedef void(*type_30)(hmx_grid*, int, int, int, int);
typedef void*(*type_31)(hmx_environment*, char*);
typedef void(*type_32)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void(*type_33)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
typedef void(*type_34)(void*, void*, int, int, int, int, int);
typedef void*(*type_36)(int);
typedef void(*type_37)(hmx_grid*, int*);
typedef void(*type_39)(hmx_background*, int);
typedef void(*type_41)(void*);
typedef void(*type_42)(short);
typedef void(*type_44)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef hmx_bitmap*(*type_46)(hmx_environment*, int, int);
typedef void(*type_47)();
typedef void(*type_49)(void*, void*, int);
typedef void(*type_50)(hmx_renderer_context*);
typedef void(*type_53)(hmx_environment*, hmx_bitmap*);
typedef int(*type_54)(int);
typedef void(*type_56)(hmx_renderer_context*, hmx_surface*);
typedef void*(*type_57)(hmx_bitmap*);
typedef int(*type_59)(char*);
typedef hmx_renderer_base*(*type_61)(hmx_sprite*);
typedef void(*type_62)(hmx_bitmap*, int);
typedef int(*type_63)(int, void*, int);
typedef void(*type_64)(hmx_sprite*, int, int);

typedef char type_8[12];
typedef _anon4 type_15[3];
typedef _anon4 type_17[3][3];
typedef _anon4 type_18[3][3][7];
typedef _anon4 type_21[3];
typedef _anon4 type_22[3][7];
typedef hmx_bitmap* type_35[1000];
typedef int type_38[1000];
typedef hmx_grid* type_40[3];
typedef hmx_bitmap* type_43[2048];
typedef hmx_bitmap* type_45[2048];
typedef hmx_grid* type_48[8];
typedef tagPALETTEENTRY type_51[0];
typedef hmx_bitmap* type_52[512];
typedef tagPALETTEENTRY type_55[0];
typedef tagPALETTEENTRY type_58[0];
typedef tagPALETTEENTRY type_60[0];
typedef char type_65[4];

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

struct hmx_environment
{
};

struct dlink_export
{
	void(*game_init)();
	void(*game)();
	void(*dll_meminit)(char***, void**);
	void(*dll_memfree)();
	void(*SWdataSet)(short, short);
	int(*Get_vscroll)();
	int(*Get_scra_h_posiw)();
	int(*Get_scrb_h_posiw)();
	int(*FadeProc)();
	void(*SetDebugFlag)(unsigned int);
	void(*GetRoundStr)(unsigned short, unsigned char, char*);
	void(*Special_block_chg)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
};

struct hmx_sprite
{
};

struct hmx_grid
{
};

struct hmx_bitmap
{
};

struct _anon1
{
	unsigned int hWnd;
	unsigned int hSurf;
	tagPALETTEENTRY* lpColorwk;
	unsigned int* lpbFullScreen;
	unsigned int bFirstTitle;
	unsigned int* lpbVisualmode;
	_anon0* lpCrntScorData;
	unsigned int selectIndx;
	unsigned short* lpSelectedStage;
	void* ReadScoreData;
	void* WriteScoreData;
	void* OpenScoreData;
	void* CloseScoreData;
	void* CreateScoreData;
	void* ReadScoreIndx;
	void* WriteScoreIndx;
	void* CDPlay;
	void* CDPause;
	void* WaveRequest;
	void* EASetBitmapBits;
	void* EASetBitmapTransparency;
	void* EACreateBitmap;
	void* EADeleteBitmap;
	void* EACreateSequencedSprite;
	void* EASetDestination;
	void* EASetDrawOrder;
	void* EASetPosition;
	void* EADeleteSprite;
	void* EASetSequencedSpriteData;
	void* EACreateFixedGrid;
	void* EACreateTile;
	void* EASetTileData;
	void* EASetFixedGridData;
	void* EASetView;
	void* EASetEffect;
	void* EADeleteFixedGrid;
	void* EADraw;
	void* EAClearEffect;
	void* EADeleteTile;
	void* EASetDestRect;
	unsigned short* lpUserKey;
};

struct hmx_ddagrid
{
};

struct hmx_renderer_base
{
};

struct hmx_renderer_context
{
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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct hmx_surface
{
};

struct hmx_background
{
};

union _anon2
{
	unsigned short w;
	_anon3 b;
};

struct _anon3
{
	unsigned char l;
	unsigned char h;
};

struct _anon4
{
	unsigned int time;
	char name[4];
};

hmx_environment* g_env_module;
hmx_environment* g_loader_module;
int nTimerCunt;
unsigned short nSequenceNum;
int nWaitTime;
unsigned short nSaveSequenceNum;
unsigned int bWaitKeyOff;
unsigned short swData1;
tagPALETTEENTRY tblPal4[0];
tagPALETTEENTRY tblPal3[0];
tagPALETTEENTRY tblPal2[0];
tagPALETTEENTRY tblPal1[0];
void(*CDPause)();
void(*CDPlay)(short);
unsigned short* lpSelectedStage;
tagPALETTEENTRY* lpColorwk;
unsigned int hSurf;
unsigned int hWnd;
draw_context* s_ctx;
draw_context*(*get_draw_context_module)();
void(*hmx_ddagrid_set_tile_module)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
void(*hmx_ddagrid_set_scan_module)(hmx_ddagrid*, int, int, int, int, int);
void(*hmx_ddagrid_release_module)(hmx_environment*, hmx_ddagrid*);
hmx_ddagrid*(*hmx_ddagrid_create_module)(hmx_environment*, int, int, int, int, int, int);
void(*hmx_sprite_set_flags_module)(hmx_sprite*, int);
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
hmx_renderer_base*(*hmx_sprite_base_module)(hmx_sprite*);
void(*hmx_renderer_context_draw_module)(hmx_renderer_context*, hmx_surface*);
void(*hmx_renderer_context_clear_module)(hmx_renderer_context*);
void(*hmx_renderer_context_add_module)(hmx_renderer_context*, int, hmx_renderer_base*);
void(*hmx_grid_set_horz_offsets_module)(hmx_grid*, int*);
void(*hmx_grid_set_tile_module)(hmx_grid*, int, int, hmx_bitmap*, int);
void(*hmx_grid_set_view_module)(hmx_grid*, int, int, int, int);
void(*hmx_grid_set_position_module)(hmx_grid*, int, int);
hmx_renderer_base*(*hmx_grid_base_module)(hmx_grid*);
void(*hmx_grid_release_module)(hmx_environment*, hmx_grid*);
hmx_grid*(*hmx_grid_create_module)(hmx_environment*, int, int, int, int);
void(*hmx_free_module)(hmx_environment*, void*);
void(*hmx_bitmap_set_transparency_module)(hmx_bitmap*, int);
void*(*hmx_bitmap_get_scan0_module)(hmx_bitmap*);
void(*hmx_bitmap_release_module)(hmx_environment*, hmx_bitmap*);
hmx_bitmap*(*hmx_bitmap_create_module)(hmx_environment*, int, int);
void(*hmx_background_set_background_module)(hmx_background*, int);
void*(*ld_load_cmpfile_module)(hmx_environment*, char*);
void(*ld_bitmap_4to8_module)(void*, void*, int, int, int, int, int);
void(*FlipToScreen_module)();
int(*sGetFileSize)(int);
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
int(*sOpenFile)(char*);
void(*sOutputDebugString)(char*);
void(*sPrintf)(char*, char*);
void(*sMemCpy)(void*, void*, int);
void(*sMemFree)(void*);
void*(*sMemAlloc)(int);
unsigned short swData2;
dlink_export ExportedFunctions;

void OESetSequenceNum(unsigned short num);
void KeyWait();
void WaitKeyOff();
void Wait(int time);
void STGWait();
void DLLInit(_anon1* lpDllIn, char*** pBufTbl, void** pFuncTbl);
void DLLEnd();
void SWdataSet(_anon2 sw1, _anon2 sw2);
int DLLMain();

// 
// Start address: 0x1000000
void OESetSequenceNum(unsigned short num)
{
	// Line 110, Address: 0x1000000, Func Offset: 0
	// Line 111, Address: 0x1000008, Func Offset: 0x8
	// Line 112, Address: 0x1000014, Func Offset: 0x14
	// Line 113, Address: 0x1000020, Func Offset: 0x20
	// Func End, Address: 0x100002c, Func Offset: 0x2c
}

// 
// Start address: 0x1000030
void KeyWait()
{
	// Line 118, Address: 0x1000030, Func Offset: 0
	// Line 119, Address: 0x1000038, Func Offset: 0x8
	// Line 120, Address: 0x1000048, Func Offset: 0x18
	// Line 121, Address: 0x1000050, Func Offset: 0x20
	// Line 122, Address: 0x100005c, Func Offset: 0x2c
	// Func End, Address: 0x100006c, Func Offset: 0x3c
}

// 
// Start address: 0x1000070
void WaitKeyOff()
{
	// Line 127, Address: 0x1000070, Func Offset: 0
	// Line 128, Address: 0x1000078, Func Offset: 0x8
	// Line 129, Address: 0x1000088, Func Offset: 0x18
	// Line 130, Address: 0x1000094, Func Offset: 0x24
	// Line 131, Address: 0x100009c, Func Offset: 0x2c
	// Line 132, Address: 0x10000a8, Func Offset: 0x38
	// Func End, Address: 0x10000b8, Func Offset: 0x48
}

// 
// Start address: 0x10000c0
void Wait(int time)
{
	// Line 137, Address: 0x10000c0, Func Offset: 0
	// Line 138, Address: 0x10000cc, Func Offset: 0xc
	// Line 139, Address: 0x10000dc, Func Offset: 0x1c
	// Line 140, Address: 0x10000e4, Func Offset: 0x24
	// Line 141, Address: 0x10000f0, Func Offset: 0x30
	// Line 142, Address: 0x10000fc, Func Offset: 0x3c
	// Func End, Address: 0x100010c, Func Offset: 0x4c
}

// 
// Start address: 0x1000110
void STGWait()
{
	// Line 147, Address: 0x1000110, Func Offset: 0
	// Line 148, Address: 0x1000118, Func Offset: 0x8
	// Line 150, Address: 0x1000144, Func Offset: 0x34
	// Line 152, Address: 0x1000154, Func Offset: 0x44
	// Line 154, Address: 0x1000164, Func Offset: 0x54
	// Line 156, Address: 0x1000180, Func Offset: 0x70
	// Func End, Address: 0x1000190, Func Offset: 0x80
}

// 
// Start address: 0x1000190
void DLLInit(_anon1* lpDllIn, char*** pBufTbl, void** pFuncTbl)
{
	// Line 161, Address: 0x1000190, Func Offset: 0
	// Line 163, Address: 0x10001a4, Func Offset: 0x14
	// Line 164, Address: 0x10001b0, Func Offset: 0x20
	// Line 165, Address: 0x10001bc, Func Offset: 0x2c
	// Line 166, Address: 0x10001c8, Func Offset: 0x38
	// Line 167, Address: 0x10001d4, Func Offset: 0x44
	// Line 168, Address: 0x10001e0, Func Offset: 0x50
	// Line 169, Address: 0x10001ec, Func Offset: 0x5c
	// Line 170, Address: 0x10001f8, Func Offset: 0x68
	// Line 171, Address: 0x1000204, Func Offset: 0x74
	// Line 172, Address: 0x1000210, Func Offset: 0x80
	// Line 173, Address: 0x100021c, Func Offset: 0x8c
	// Line 175, Address: 0x1000228, Func Offset: 0x98
	// Line 176, Address: 0x1000240, Func Offset: 0xb0
	// Line 177, Address: 0x1000258, Func Offset: 0xc8
	// Line 178, Address: 0x1000264, Func Offset: 0xd4
	// Line 179, Address: 0x100027c, Func Offset: 0xec
	// Line 180, Address: 0x1000288, Func Offset: 0xf8
	// Line 181, Address: 0x1000294, Func Offset: 0x104
	// Line 182, Address: 0x10002a0, Func Offset: 0x110
	// Line 183, Address: 0x10002ac, Func Offset: 0x11c
	// Line 184, Address: 0x10002b8, Func Offset: 0x128
	// Line 185, Address: 0x10002d0, Func Offset: 0x140
	// Line 186, Address: 0x10002e8, Func Offset: 0x158
	// Line 187, Address: 0x1000300, Func Offset: 0x170
	// Line 188, Address: 0x1000318, Func Offset: 0x188
	// Line 189, Address: 0x1000330, Func Offset: 0x1a0
	// Line 192, Address: 0x1000348, Func Offset: 0x1b8
	// Line 193, Address: 0x1000360, Func Offset: 0x1d0
	// Line 194, Address: 0x1000378, Func Offset: 0x1e8
	// Line 195, Address: 0x1000390, Func Offset: 0x200
	// Line 196, Address: 0x10003a8, Func Offset: 0x218
	// Line 197, Address: 0x10003c0, Func Offset: 0x230
	// Line 198, Address: 0x10003d8, Func Offset: 0x248
	// Line 199, Address: 0x10003f0, Func Offset: 0x260
	// Line 200, Address: 0x1000408, Func Offset: 0x278
	// Line 201, Address: 0x1000420, Func Offset: 0x290
	// Line 202, Address: 0x1000438, Func Offset: 0x2a8
	// Line 203, Address: 0x1000450, Func Offset: 0x2c0
	// Line 204, Address: 0x1000468, Func Offset: 0x2d8
	// Line 205, Address: 0x1000480, Func Offset: 0x2f0
	// Line 206, Address: 0x1000498, Func Offset: 0x308
	// Line 207, Address: 0x10004b0, Func Offset: 0x320
	// Line 208, Address: 0x10004c8, Func Offset: 0x338
	// Line 209, Address: 0x10004e0, Func Offset: 0x350
	// Line 210, Address: 0x10004f8, Func Offset: 0x368
	// Line 211, Address: 0x1000510, Func Offset: 0x380
	// Line 212, Address: 0x1000528, Func Offset: 0x398
	// Line 213, Address: 0x1000540, Func Offset: 0x3b0
	// Line 214, Address: 0x1000558, Func Offset: 0x3c8
	// Line 215, Address: 0x1000570, Func Offset: 0x3e0
	// Line 217, Address: 0x1000588, Func Offset: 0x3f8
	// Line 218, Address: 0x10005a0, Func Offset: 0x410
	// Line 219, Address: 0x10005b8, Func Offset: 0x428
	// Line 220, Address: 0x10005d0, Func Offset: 0x440
	// Line 222, Address: 0x10005e8, Func Offset: 0x458
	// Line 223, Address: 0x10005f4, Func Offset: 0x464
	// Line 224, Address: 0x1000600, Func Offset: 0x470
	// Line 225, Address: 0x100060c, Func Offset: 0x47c
	// Line 226, Address: 0x1000618, Func Offset: 0x488
	// Line 227, Address: 0x1000624, Func Offset: 0x494
	// Line 228, Address: 0x1000630, Func Offset: 0x4a0
	// Line 229, Address: 0x100063c, Func Offset: 0x4ac
	// Line 230, Address: 0x1000648, Func Offset: 0x4b8
	// Line 231, Address: 0x1000654, Func Offset: 0x4c4
	// Line 232, Address: 0x1000660, Func Offset: 0x4d0
	// Line 234, Address: 0x100066c, Func Offset: 0x4dc
	// Line 235, Address: 0x1000688, Func Offset: 0x4f8
	// Line 237, Address: 0x10006a4, Func Offset: 0x514
	// Line 239, Address: 0x10006bc, Func Offset: 0x52c
	// Line 240, Address: 0x10006cc, Func Offset: 0x53c
	// Line 241, Address: 0x10006dc, Func Offset: 0x54c
	// Line 242, Address: 0x10006ec, Func Offset: 0x55c
	// Line 243, Address: 0x10006fc, Func Offset: 0x56c
	// Line 244, Address: 0x100070c, Func Offset: 0x57c
	// Line 246, Address: 0x100071c, Func Offset: 0x58c
	// Line 247, Address: 0x1000730, Func Offset: 0x5a0
	// Line 248, Address: 0x1000744, Func Offset: 0x5b4
	// Line 249, Address: 0x1000758, Func Offset: 0x5c8
	// Line 253, Address: 0x100076c, Func Offset: 0x5dc
	// Line 254, Address: 0x1000774, Func Offset: 0x5e4
	// Line 255, Address: 0x1000780, Func Offset: 0x5f0
	// Line 256, Address: 0x1000788, Func Offset: 0x5f8
	// Func End, Address: 0x1000798, Func Offset: 0x608
}

// 
// Start address: 0x10007a0
void DLLEnd()
{
	// Line 261, Address: 0x10007a0, Func Offset: 0
	// Line 262, Address: 0x10007a8, Func Offset: 0x8
	// Line 263, Address: 0x10007b0, Func Offset: 0x10
	// Line 265, Address: 0x10007b8, Func Offset: 0x18
	// Func End, Address: 0x10007c8, Func Offset: 0x28
}

// 
// Start address: 0x10007d0
void SWdataSet(_anon2 sw1, _anon2 sw2)
{
	// Line 270, Address: 0x10007d0, Func Offset: 0
	// Line 271, Address: 0x10007dc, Func Offset: 0xc
	// Line 272, Address: 0x10007e8, Func Offset: 0x18
	// Line 274, Address: 0x10007f4, Func Offset: 0x24
	// Func End, Address: 0x1000800, Func Offset: 0x30
}

// 
// Start address: 0x1000800
int DLLMain()
{
	int ret;
	// Line 279, Address: 0x1000800, Func Offset: 0
	// Line 280, Address: 0x100080c, Func Offset: 0xc
	// Line 282, Address: 0x1000810, Func Offset: 0x10
	// Line 285, Address: 0x1000854, Func Offset: 0x54
	// Line 286, Address: 0x100085c, Func Offset: 0x5c
	// Line 289, Address: 0x1000864, Func Offset: 0x64
	// Line 290, Address: 0x100086c, Func Offset: 0x6c
	// Line 293, Address: 0x1000874, Func Offset: 0x74
	// Line 294, Address: 0x100087c, Func Offset: 0x7c
	// Line 301, Address: 0x1000884, Func Offset: 0x84
	// Line 305, Address: 0x1000890, Func Offset: 0x90
	// Line 306, Address: 0x10008a8, Func Offset: 0xa8
	// Line 308, Address: 0x10008c0, Func Offset: 0xc0
	// Line 310, Address: 0x10008d4, Func Offset: 0xd4
	// Line 311, Address: 0x10008dc, Func Offset: 0xdc
	// Line 312, Address: 0x10008e0, Func Offset: 0xe0
	// Func End, Address: 0x10008f4, Func Offset: 0xf4
}

