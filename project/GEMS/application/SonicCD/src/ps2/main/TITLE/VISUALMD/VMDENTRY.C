typedef struct _anon0;
typedef struct hmx_sprite;
typedef struct hmx_environment;
typedef struct hmx_grid;
typedef struct hmx_ddagrid;
typedef struct dlink_export;
typedef struct hmx_renderer_base;
typedef struct draw_context;
typedef struct hmx_bitmap;
typedef struct hmx_renderer_context;
typedef struct tagPALETTEENTRY;
typedef struct hmx_background;
typedef struct hmx_surface;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;

typedef void(*type_0)(hmx_sprite*, int);
typedef void(*type_1)(char*);
typedef void(*type_2)(hmx_environment*, hmx_grid*);
typedef int(*type_3)(unsigned int);
typedef void(*type_4)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_5)();
typedef hmx_ddagrid*(*type_6)(hmx_environment*, int, int, int, int, int, int);
typedef unsigned int(*type_8)(int, unsigned int);
typedef void(*type_9)(char***, void**);
typedef hmx_renderer_base*(*type_10)(hmx_grid*);
typedef void(*type_11)();
typedef void(*type_12)(short, short);
typedef int(*type_13)();
typedef draw_context*(*type_14)();
typedef void(*type_17)(hmx_environment*, hmx_ddagrid*);
typedef void(*type_18)(hmx_grid*, int, int);
typedef int(*type_20)();
typedef void(*type_23)(unsigned int);
typedef void(*type_25)();
typedef void(*type_26)(unsigned short, unsigned char, char*);
typedef void(*type_27)(hmx_ddagrid*, int, int, int, int, int);
typedef void(*type_28)(hmx_grid*, int, int, int, int);
typedef void*(*type_30)(hmx_environment*, char*);
typedef void(*type_32)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void(*type_33)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
typedef void(*type_35)(void*, void*, int, int, int, int, int);
typedef void*(*type_36)(int);
typedef void(*type_37)(hmx_grid*, int*);
typedef void(*type_38)(hmx_background*, int);
typedef void(*type_39)(void*);
typedef void(*type_40)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef void(*type_41)(short);
typedef hmx_bitmap*(*type_42)(hmx_environment*, int, int);
typedef void(*type_43)(void*, void*, int);
typedef void(*type_44)(short);
typedef void(*type_47)(hmx_renderer_context*);
typedef void(*type_48)(hmx_environment*, hmx_bitmap*);
typedef void(*type_50)(short);
typedef int(*type_51)(int);
typedef void(*type_53)(hmx_renderer_context*, hmx_surface*);
typedef unsigned int(*type_54)(int, char*, unsigned int);
typedef void*(*type_56)(hmx_bitmap*);
typedef int(*type_57)(char*);
typedef hmx_renderer_base*(*type_59)(hmx_sprite*);
typedef unsigned int(*type_61)(int, char*, unsigned int);
typedef void(*type_62)(hmx_bitmap*, int);
typedef int(*type_63)(int, void*, int);
typedef void(*type_64)(hmx_sprite*, int, int);
typedef unsigned int(*type_65)(int);
typedef void(*type_66)(hmx_environment*, void*);
typedef void(*type_67)(int);
typedef unsigned int(*type_68)(unsigned int);
typedef void(*type_69)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_70)(char*, char*);
typedef hmx_grid*(*type_71)(hmx_environment*, int, int, int, int);
typedef unsigned int(*type_72)();

typedef char type_7[12];
typedef _anon4 type_15[3];
typedef _anon4 type_16[3][3];
typedef _anon4 type_19[3][3][7];
typedef _anon4 type_21[3];
typedef _anon4 type_22[3][7];
typedef tagPALETTEENTRY type_24[0];
typedef tagPALETTEENTRY type_29[0];
typedef tagPALETTEENTRY type_31[0];
typedef tagPALETTEENTRY type_34[0];
typedef hmx_bitmap* type_45[1000];
typedef int type_46[1000];
typedef hmx_grid* type_49[3];
typedef hmx_bitmap* type_52[2048];
typedef hmx_bitmap* type_55[2048];
typedef hmx_grid* type_58[8];
typedef hmx_bitmap* type_60[512];
typedef char type_73[4];

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

struct hmx_sprite
{
};

struct hmx_environment
{
};

struct hmx_grid
{
};

struct hmx_ddagrid
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

struct hmx_renderer_base
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

struct hmx_bitmap
{
};

struct hmx_renderer_context
{
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct hmx_background
{
};

struct hmx_surface
{
};

union _anon1
{
	unsigned short w;
	_anon2 b;
};

struct _anon2
{
	unsigned char l;
	unsigned char h;
};

struct _anon3
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
draw_context* s_ctx;
draw_context*(*get_draw_context_module)();
tagPALETTEENTRY tblPal4[0];
tagPALETTEENTRY tblPal3[0];
tagPALETTEENTRY tblPal2[0];
tagPALETTEENTRY tblPal1[0];
void(*CDPause)(short);
void(*CDPlay)(short);
unsigned int* lpbVisualmode;
tagPALETTEENTRY* lpColorwk;
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
unsigned int(*WriteIndx)(int, unsigned int);
int(*ReadIndx)(unsigned int);
unsigned int(*CreateScore)();
unsigned int(*CloseScore)(unsigned int);
unsigned int(*OpenScore)(int);
unsigned int(*WriteScore)(int, char*, unsigned int);
unsigned int(*ReadScore)(int, char*, unsigned int);
void(*WaveRequest)(short);
unsigned int hWnd;
unsigned int hSurf;

void OESetSequenceNum(unsigned short num);
void KeyWait();
void WaitKeyOff();
void Wait(int time);
void VMDWait();
void DLLInit(_anon3* lpDllIn, char*** pBufTbl, void** pFuncTbl);
void DLLEnd();
void SWdataSet(_anon1 sw1, _anon1 sw2);
int DLLMain();

// 
// Start address: 0x1000450
void OESetSequenceNum(unsigned short num)
{
	// Line 128, Address: 0x1000450, Func Offset: 0
	// Line 129, Address: 0x1000458, Func Offset: 0x8
	// Line 130, Address: 0x1000464, Func Offset: 0x14
	// Line 131, Address: 0x1000470, Func Offset: 0x20
	// Func End, Address: 0x100047c, Func Offset: 0x2c
}

// 
// Start address: 0x1000480
void KeyWait()
{
	// Line 136, Address: 0x1000480, Func Offset: 0
	// Line 137, Address: 0x1000488, Func Offset: 0x8
	// Line 138, Address: 0x1000498, Func Offset: 0x18
	// Line 139, Address: 0x10004a4, Func Offset: 0x24
	// Line 140, Address: 0x10004b0, Func Offset: 0x30
	// Func End, Address: 0x10004c0, Func Offset: 0x40
}

// 
// Start address: 0x10004c0
void WaitKeyOff()
{
	// Line 145, Address: 0x10004c0, Func Offset: 0
	// Line 146, Address: 0x10004c8, Func Offset: 0x8
	// Line 147, Address: 0x10004d8, Func Offset: 0x18
	// Line 148, Address: 0x10004e4, Func Offset: 0x24
	// Line 149, Address: 0x10004ec, Func Offset: 0x2c
	// Line 150, Address: 0x10004f8, Func Offset: 0x38
	// Func End, Address: 0x1000508, Func Offset: 0x48
}

// 
// Start address: 0x1000510
void Wait(int time)
{
	// Line 155, Address: 0x1000510, Func Offset: 0
	// Line 156, Address: 0x100051c, Func Offset: 0xc
	// Line 157, Address: 0x100052c, Func Offset: 0x1c
	// Line 158, Address: 0x1000534, Func Offset: 0x24
	// Line 159, Address: 0x1000540, Func Offset: 0x30
	// Line 160, Address: 0x100054c, Func Offset: 0x3c
	// Func End, Address: 0x100055c, Func Offset: 0x4c
}

// 
// Start address: 0x1000560
void VMDWait()
{
	// Line 166, Address: 0x1000560, Func Offset: 0
	// Line 167, Address: 0x1000568, Func Offset: 0x8
	// Line 169, Address: 0x1000594, Func Offset: 0x34
	// Line 171, Address: 0x10005a4, Func Offset: 0x44
	// Line 173, Address: 0x10005b4, Func Offset: 0x54
	// Line 175, Address: 0x10005d0, Func Offset: 0x70
	// Func End, Address: 0x10005e0, Func Offset: 0x80
}

// 
// Start address: 0x10005e0
void DLLInit(_anon3* lpDllIn, char*** pBufTbl, void** pFuncTbl)
{
	// Line 180, Address: 0x10005e0, Func Offset: 0
	// Line 182, Address: 0x10005f4, Func Offset: 0x14
	// Line 183, Address: 0x1000600, Func Offset: 0x20
	// Line 184, Address: 0x100060c, Func Offset: 0x2c
	// Line 185, Address: 0x1000618, Func Offset: 0x38
	// Line 186, Address: 0x1000624, Func Offset: 0x44
	// Line 187, Address: 0x1000630, Func Offset: 0x50
	// Line 188, Address: 0x100063c, Func Offset: 0x5c
	// Line 189, Address: 0x1000648, Func Offset: 0x68
	// Line 190, Address: 0x1000654, Func Offset: 0x74
	// Line 191, Address: 0x1000660, Func Offset: 0x80
	// Line 192, Address: 0x100066c, Func Offset: 0x8c
	// Line 194, Address: 0x1000678, Func Offset: 0x98
	// Line 195, Address: 0x1000690, Func Offset: 0xb0
	// Line 196, Address: 0x10006a8, Func Offset: 0xc8
	// Line 197, Address: 0x10006b4, Func Offset: 0xd4
	// Line 198, Address: 0x10006cc, Func Offset: 0xec
	// Line 199, Address: 0x10006d8, Func Offset: 0xf8
	// Line 200, Address: 0x10006e4, Func Offset: 0x104
	// Line 201, Address: 0x10006f0, Func Offset: 0x110
	// Line 202, Address: 0x10006fc, Func Offset: 0x11c
	// Line 203, Address: 0x1000708, Func Offset: 0x128
	// Line 204, Address: 0x1000720, Func Offset: 0x140
	// Line 205, Address: 0x1000738, Func Offset: 0x158
	// Line 206, Address: 0x1000750, Func Offset: 0x170
	// Line 207, Address: 0x1000768, Func Offset: 0x188
	// Line 208, Address: 0x1000780, Func Offset: 0x1a0
	// Line 211, Address: 0x1000798, Func Offset: 0x1b8
	// Line 212, Address: 0x10007b0, Func Offset: 0x1d0
	// Line 213, Address: 0x10007c8, Func Offset: 0x1e8
	// Line 214, Address: 0x10007e0, Func Offset: 0x200
	// Line 215, Address: 0x10007f8, Func Offset: 0x218
	// Line 216, Address: 0x1000810, Func Offset: 0x230
	// Line 217, Address: 0x1000828, Func Offset: 0x248
	// Line 218, Address: 0x1000840, Func Offset: 0x260
	// Line 219, Address: 0x1000858, Func Offset: 0x278
	// Line 220, Address: 0x1000870, Func Offset: 0x290
	// Line 221, Address: 0x1000888, Func Offset: 0x2a8
	// Line 222, Address: 0x10008a0, Func Offset: 0x2c0
	// Line 223, Address: 0x10008b8, Func Offset: 0x2d8
	// Line 224, Address: 0x10008d0, Func Offset: 0x2f0
	// Line 225, Address: 0x10008e8, Func Offset: 0x308
	// Line 226, Address: 0x1000900, Func Offset: 0x320
	// Line 227, Address: 0x1000918, Func Offset: 0x338
	// Line 228, Address: 0x1000930, Func Offset: 0x350
	// Line 229, Address: 0x1000948, Func Offset: 0x368
	// Line 230, Address: 0x1000960, Func Offset: 0x380
	// Line 231, Address: 0x1000978, Func Offset: 0x398
	// Line 232, Address: 0x1000990, Func Offset: 0x3b0
	// Line 233, Address: 0x10009a8, Func Offset: 0x3c8
	// Line 234, Address: 0x10009c0, Func Offset: 0x3e0
	// Line 236, Address: 0x10009d8, Func Offset: 0x3f8
	// Line 237, Address: 0x10009f0, Func Offset: 0x410
	// Line 238, Address: 0x1000a08, Func Offset: 0x428
	// Line 239, Address: 0x1000a20, Func Offset: 0x440
	// Line 241, Address: 0x1000a38, Func Offset: 0x458
	// Line 242, Address: 0x1000a44, Func Offset: 0x464
	// Line 243, Address: 0x1000a50, Func Offset: 0x470
	// Line 244, Address: 0x1000a5c, Func Offset: 0x47c
	// Line 245, Address: 0x1000a68, Func Offset: 0x488
	// Line 246, Address: 0x1000a74, Func Offset: 0x494
	// Line 247, Address: 0x1000a80, Func Offset: 0x4a0
	// Line 248, Address: 0x1000a8c, Func Offset: 0x4ac
	// Line 249, Address: 0x1000a98, Func Offset: 0x4b8
	// Line 250, Address: 0x1000aa4, Func Offset: 0x4c4
	// Line 251, Address: 0x1000ab0, Func Offset: 0x4d0
	// Line 253, Address: 0x1000abc, Func Offset: 0x4dc
	// Line 254, Address: 0x1000ad8, Func Offset: 0x4f8
	// Line 261, Address: 0x1000af4, Func Offset: 0x514
	// Line 262, Address: 0x1000b04, Func Offset: 0x524
	// Line 264, Address: 0x1000b14, Func Offset: 0x534
	// Line 265, Address: 0x1000b24, Func Offset: 0x544
	// Line 268, Address: 0x1000b34, Func Offset: 0x554
	// Line 269, Address: 0x1000b48, Func Offset: 0x568
	// Line 270, Address: 0x1000b5c, Func Offset: 0x57c
	// Line 271, Address: 0x1000b70, Func Offset: 0x590
	// Line 273, Address: 0x1000b84, Func Offset: 0x5a4
	// Line 275, Address: 0x1000b9c, Func Offset: 0x5bc
	// Line 276, Address: 0x1000ba4, Func Offset: 0x5c4
	// Line 277, Address: 0x1000bb0, Func Offset: 0x5d0
	// Line 278, Address: 0x1000bb8, Func Offset: 0x5d8
	// Func End, Address: 0x1000bc8, Func Offset: 0x5e8
}

// 
// Start address: 0x1000bd0
void DLLEnd()
{
	// Line 283, Address: 0x1000bd0, Func Offset: 0
	// Line 284, Address: 0x1000bd8, Func Offset: 0x8
	// Line 285, Address: 0x1000be0, Func Offset: 0x10
	// Line 288, Address: 0x1000be8, Func Offset: 0x18
	// Func End, Address: 0x1000bf8, Func Offset: 0x28
}

// 
// Start address: 0x1000c00
void SWdataSet(_anon1 sw1, _anon1 sw2)
{
	// Line 293, Address: 0x1000c00, Func Offset: 0
	// Line 294, Address: 0x1000c0c, Func Offset: 0xc
	// Line 295, Address: 0x1000c18, Func Offset: 0x18
	// Line 301, Address: 0x1000c24, Func Offset: 0x24
	// Func End, Address: 0x1000c30, Func Offset: 0x30
}

// 
// Start address: 0x1000c30
int DLLMain()
{
	int ret;
	// Line 310, Address: 0x1000c30, Func Offset: 0
	// Line 311, Address: 0x1000c3c, Func Offset: 0xc
	// Line 313, Address: 0x1000c40, Func Offset: 0x10
	// Line 316, Address: 0x1000c84, Func Offset: 0x54
	// Line 317, Address: 0x1000c8c, Func Offset: 0x5c
	// Line 318, Address: 0x1000ca0, Func Offset: 0x70
	// Line 321, Address: 0x1000ca8, Func Offset: 0x78
	// Line 322, Address: 0x1000cb0, Func Offset: 0x80
	// Line 325, Address: 0x1000cb8, Func Offset: 0x88
	// Line 326, Address: 0x1000cc0, Func Offset: 0x90
	// Line 329, Address: 0x1000cc8, Func Offset: 0x98
	// Line 330, Address: 0x1000cdc, Func Offset: 0xac
	// Line 334, Address: 0x1000ce8, Func Offset: 0xb8
	// Line 335, Address: 0x1000d00, Func Offset: 0xd0
	// Line 337, Address: 0x1000d18, Func Offset: 0xe8
	// Line 339, Address: 0x1000d2c, Func Offset: 0xfc
	// Line 342, Address: 0x1000d34, Func Offset: 0x104
	// Line 343, Address: 0x1000d38, Func Offset: 0x108
	// Func End, Address: 0x1000d4c, Func Offset: 0x11c
}

