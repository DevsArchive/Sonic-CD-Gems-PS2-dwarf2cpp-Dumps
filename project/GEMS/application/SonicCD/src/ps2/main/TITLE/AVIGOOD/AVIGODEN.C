typedef struct _anon0;
typedef struct hmx_environment;
typedef struct hmx_renderer_context;
typedef struct hmx_surface;
typedef struct dlink_export;
typedef struct hmx_bitmap;
typedef struct hmx_renderer_base;
typedef struct hmx_sprite;
typedef struct draw_context;
typedef struct hmx_ddagrid;
typedef struct hmx_grid;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef struct hmx_background;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;

typedef int(*type_0)(int);
typedef void(*type_1)(hmx_renderer_context*, hmx_surface*);
typedef void(*type_2)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef unsigned int(*type_3)(int, char*, unsigned int);
typedef void*(*type_4)(hmx_bitmap*);
typedef void(*type_5)();
typedef int(*type_6)(char*);
typedef void(*type_7)(char***, void**);
typedef void(*type_9)();
typedef hmx_renderer_base*(*type_10)(hmx_sprite*);
typedef unsigned int(*type_11)(int, char*, unsigned int);
typedef void(*type_12)(short, short);
typedef void(*type_13)(hmx_bitmap*, int);
typedef int(*type_14)(int, void*, int);
typedef int(*type_15)();
typedef void(*type_16)(hmx_sprite*, int, int);
typedef int(*type_18)();
typedef unsigned int(*type_20)(int);
typedef void(*type_21)(hmx_environment*, void*);
typedef void(*type_23)(unsigned int);
typedef void(*type_24)(int);
typedef void(*type_26)(unsigned short, unsigned char, char*);
typedef unsigned int(*type_28)(unsigned int);
typedef void(*type_29)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_30)(char*, char*);
typedef hmx_grid*(*type_31)(hmx_environment*, int, int, int, int);
typedef unsigned int(*type_32)();
typedef void(*type_33)(hmx_sprite*, int);
typedef void(*type_34)(char*);
typedef void(*type_35)(hmx_environment*, hmx_grid*);
typedef int(*type_36)(unsigned int);
typedef hmx_ddagrid*(*type_37)(hmx_environment*, int, int, int, int, int, int);
typedef int(*type_38)(int);
typedef unsigned int(*type_39)(int, unsigned int);
typedef hmx_renderer_base*(*type_40)(hmx_grid*);
typedef int(*type_41)();
typedef draw_context*(*type_42)();
typedef void(*type_43)(hmx_environment*, hmx_ddagrid*);
typedef void(*type_44)(hmx_grid*, int, int);
typedef int(*type_45)();
typedef void(*type_46)();
typedef void(*type_48)(hmx_ddagrid*, int, int, int, int, int);
typedef void(*type_49)(hmx_grid*, int, int, int, int);
typedef void*(*type_52)(hmx_environment*, char*);
typedef void(*type_54)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void(*type_55)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
typedef void(*type_57)(void*, void*, int, int, int, int, int);
typedef void*(*type_60)(int);
typedef void(*type_61)(hmx_grid*, int*);
typedef void(*type_62)(hmx_background*, int);
typedef void(*type_63)(void*);
typedef void(*type_64)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef void(*type_65)(short);
typedef hmx_bitmap*(*type_66)(hmx_environment*, int, int);
typedef void(*type_67)(void*, void*, int);
typedef void(*type_68)();
typedef void(*type_69)(hmx_renderer_context*);
typedef void(*type_70)(hmx_environment*, hmx_bitmap*);
typedef void(*type_71)(short);

typedef char type_8[12];
typedef _anon4 type_17[3];
typedef _anon4 type_19[3][3];
typedef _anon4 type_22[3][3][7];
typedef _anon4 type_25[3];
typedef _anon4 type_27[3][7];
typedef hmx_bitmap* type_47[1000];
typedef int type_50[1000];
typedef hmx_grid* type_51[3];
typedef hmx_bitmap* type_53[2048];
typedef hmx_bitmap* type_56[2048];
typedef hmx_grid* type_58[8];
typedef hmx_bitmap* type_59[512];
typedef char type_72[4];

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

struct hmx_renderer_context
{
};

struct hmx_surface
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

struct hmx_bitmap
{
};

struct hmx_renderer_base
{
};

struct hmx_sprite
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

struct hmx_ddagrid
{
};

struct hmx_grid
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
unsigned int* lpbFullScreen;
unsigned int hWnd;
tagPALETTEENTRY* lpColorwk;
draw_context* s_ctx;
draw_context*(*get_draw_context_module)();
int(*sMovieStat)();
int(*sMovieStop)();
int(*sMoviePlay)(int);
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
unsigned short swData1;
dlink_export ExportedFunctions;
unsigned int(*WriteIndx)(int, unsigned int);
int(*ReadIndx)(unsigned int);
unsigned int(*CreateScore)();
unsigned int(*CloseScore)(unsigned int);
unsigned int(*OpenScore)(int);
unsigned int(*WriteScore)(int, char*, unsigned int);
unsigned int(*ReadScore)(int, char*, unsigned int);
void(*WaveRequest)(short);
void(*CDPause)();
void(*CDPlay)(short);

void OESetSequenceNum(unsigned short num);
void DLLInit(_anon1* lpDllIn, char*** pBufTbl, void** pFuncTbl);
void DLLEnd();
void SWdataSet(_anon2 sw1, _anon2 sw2);
int DLLMain();

// 
// Start address: 0x1000220
void OESetSequenceNum(unsigned short num)
{
	// Line 113, Address: 0x1000220, Func Offset: 0
	// Line 114, Address: 0x1000228, Func Offset: 0x8
	// Line 115, Address: 0x1000234, Func Offset: 0x14
	// Line 116, Address: 0x1000240, Func Offset: 0x20
	// Func End, Address: 0x100024c, Func Offset: 0x2c
}

// 
// Start address: 0x1000250
void DLLInit(_anon1* lpDllIn, char*** pBufTbl, void** pFuncTbl)
{
	// Line 121, Address: 0x1000250, Func Offset: 0
	// Line 125, Address: 0x1000264, Func Offset: 0x14
	// Line 126, Address: 0x1000270, Func Offset: 0x20
	// Line 127, Address: 0x100027c, Func Offset: 0x2c
	// Line 128, Address: 0x1000288, Func Offset: 0x38
	// Line 129, Address: 0x1000294, Func Offset: 0x44
	// Line 130, Address: 0x10002a0, Func Offset: 0x50
	// Line 131, Address: 0x10002ac, Func Offset: 0x5c
	// Line 132, Address: 0x10002b8, Func Offset: 0x68
	// Line 133, Address: 0x10002c4, Func Offset: 0x74
	// Line 134, Address: 0x10002d0, Func Offset: 0x80
	// Line 135, Address: 0x10002dc, Func Offset: 0x8c
	// Line 137, Address: 0x10002e8, Func Offset: 0x98
	// Line 138, Address: 0x1000300, Func Offset: 0xb0
	// Line 139, Address: 0x1000318, Func Offset: 0xc8
	// Line 140, Address: 0x1000324, Func Offset: 0xd4
	// Line 141, Address: 0x100033c, Func Offset: 0xec
	// Line 142, Address: 0x1000348, Func Offset: 0xf8
	// Line 143, Address: 0x1000354, Func Offset: 0x104
	// Line 144, Address: 0x1000360, Func Offset: 0x110
	// Line 145, Address: 0x100036c, Func Offset: 0x11c
	// Line 146, Address: 0x1000378, Func Offset: 0x128
	// Line 147, Address: 0x1000390, Func Offset: 0x140
	// Line 148, Address: 0x10003a8, Func Offset: 0x158
	// Line 149, Address: 0x10003c0, Func Offset: 0x170
	// Line 150, Address: 0x10003d8, Func Offset: 0x188
	// Line 151, Address: 0x10003f0, Func Offset: 0x1a0
	// Line 154, Address: 0x1000408, Func Offset: 0x1b8
	// Line 155, Address: 0x1000420, Func Offset: 0x1d0
	// Line 156, Address: 0x1000438, Func Offset: 0x1e8
	// Line 157, Address: 0x1000450, Func Offset: 0x200
	// Line 158, Address: 0x1000468, Func Offset: 0x218
	// Line 159, Address: 0x1000480, Func Offset: 0x230
	// Line 160, Address: 0x1000498, Func Offset: 0x248
	// Line 161, Address: 0x10004b0, Func Offset: 0x260
	// Line 162, Address: 0x10004c8, Func Offset: 0x278
	// Line 163, Address: 0x10004e0, Func Offset: 0x290
	// Line 164, Address: 0x10004f8, Func Offset: 0x2a8
	// Line 165, Address: 0x1000510, Func Offset: 0x2c0
	// Line 166, Address: 0x1000528, Func Offset: 0x2d8
	// Line 167, Address: 0x1000540, Func Offset: 0x2f0
	// Line 168, Address: 0x1000558, Func Offset: 0x308
	// Line 169, Address: 0x1000570, Func Offset: 0x320
	// Line 170, Address: 0x1000588, Func Offset: 0x338
	// Line 171, Address: 0x10005a0, Func Offset: 0x350
	// Line 172, Address: 0x10005b8, Func Offset: 0x368
	// Line 173, Address: 0x10005d0, Func Offset: 0x380
	// Line 174, Address: 0x10005e8, Func Offset: 0x398
	// Line 175, Address: 0x1000600, Func Offset: 0x3b0
	// Line 176, Address: 0x1000618, Func Offset: 0x3c8
	// Line 177, Address: 0x1000630, Func Offset: 0x3e0
	// Line 179, Address: 0x1000648, Func Offset: 0x3f8
	// Line 180, Address: 0x1000660, Func Offset: 0x410
	// Line 181, Address: 0x1000678, Func Offset: 0x428
	// Line 182, Address: 0x1000690, Func Offset: 0x440
	// Line 184, Address: 0x10006a8, Func Offset: 0x458
	// Line 185, Address: 0x10006b4, Func Offset: 0x464
	// Line 186, Address: 0x10006cc, Func Offset: 0x47c
	// Line 187, Address: 0x10006e4, Func Offset: 0x494
	// Line 189, Address: 0x10006fc, Func Offset: 0x4ac
	// Line 190, Address: 0x1000708, Func Offset: 0x4b8
	// Line 191, Address: 0x1000714, Func Offset: 0x4c4
	// Line 192, Address: 0x1000720, Func Offset: 0x4d0
	// Line 193, Address: 0x100072c, Func Offset: 0x4dc
	// Line 194, Address: 0x1000738, Func Offset: 0x4e8
	// Line 195, Address: 0x1000744, Func Offset: 0x4f4
	// Line 196, Address: 0x1000750, Func Offset: 0x500
	// Line 197, Address: 0x100075c, Func Offset: 0x50c
	// Line 198, Address: 0x1000768, Func Offset: 0x518
	// Line 199, Address: 0x1000774, Func Offset: 0x524
	// Line 201, Address: 0x1000780, Func Offset: 0x530
	// Line 202, Address: 0x100079c, Func Offset: 0x54c
	// Line 204, Address: 0x10007b8, Func Offset: 0x568
	// Line 206, Address: 0x10007d0, Func Offset: 0x580
	// Line 208, Address: 0x10007e0, Func Offset: 0x590
	// Line 209, Address: 0x10007f0, Func Offset: 0x5a0
	// Line 210, Address: 0x1000800, Func Offset: 0x5b0
	// Line 211, Address: 0x1000808, Func Offset: 0x5b8
	// Line 212, Address: 0x1000814, Func Offset: 0x5c4
	// Line 213, Address: 0x100081c, Func Offset: 0x5cc
	// Func End, Address: 0x100082c, Func Offset: 0x5dc
}

// 
// Start address: 0x1000830
void DLLEnd()
{
	// Line 218, Address: 0x1000830, Func Offset: 0
	// Line 219, Address: 0x1000838, Func Offset: 0x8
	// Line 220, Address: 0x1000840, Func Offset: 0x10
	// Line 222, Address: 0x1000848, Func Offset: 0x18
	// Func End, Address: 0x1000858, Func Offset: 0x28
}

// 
// Start address: 0x1000860
void SWdataSet(_anon2 sw1, _anon2 sw2)
{
	// Line 229, Address: 0x1000860, Func Offset: 0
	// Line 230, Address: 0x100086c, Func Offset: 0xc
	// Line 231, Address: 0x1000878, Func Offset: 0x18
	// Line 233, Address: 0x1000884, Func Offset: 0x24
	// Func End, Address: 0x1000890, Func Offset: 0x30
}

// 
// Start address: 0x1000890
int DLLMain()
{
	int ret;
	// Line 242, Address: 0x1000890, Func Offset: 0
	// Line 243, Address: 0x100089c, Func Offset: 0xc
	// Line 245, Address: 0x10008a0, Func Offset: 0x10
	// Line 248, Address: 0x10008d8, Func Offset: 0x48
	// Line 249, Address: 0x10008e0, Func Offset: 0x50
	// Line 251, Address: 0x10008e8, Func Offset: 0x58
	// Line 252, Address: 0x10008f0, Func Offset: 0x60
	// Line 254, Address: 0x10008f8, Func Offset: 0x68
	// Line 258, Address: 0x1000904, Func Offset: 0x74
	// Line 259, Address: 0x100091c, Func Offset: 0x8c
	// Line 261, Address: 0x1000934, Func Offset: 0xa4
	// Line 263, Address: 0x1000948, Func Offset: 0xb8
	// Line 264, Address: 0x100094c, Func Offset: 0xbc
	// Func End, Address: 0x1000960, Func Offset: 0xd0
}

