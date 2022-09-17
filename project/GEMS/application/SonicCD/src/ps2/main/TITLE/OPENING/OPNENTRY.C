typedef struct hmx_sprite;
typedef struct hmx_environment;
typedef struct _anon0;
typedef struct dlink_export;
typedef struct tagPALETTEENTRY;
typedef struct hmx_grid;
typedef struct hmx_bitmap;
typedef struct _anon1;
typedef struct _anon2;
typedef struct hmx_renderer_base;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef union _anon3;
typedef struct _anon4;

typedef void(*type_0)(hmx_sprite*, int, int);
typedef void(*type_1)(char*, char*);
typedef void(*type_2)(hmx_environment*, void*);
typedef unsigned int(*type_3)(int);
typedef void(*type_4)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_5)();
typedef void(*type_6)(hmx_sprite*, hmx_bitmap*);
typedef unsigned int(*type_7)(unsigned int);
typedef void(*type_8)(char*);
typedef hmx_grid*(*type_9)(hmx_environment*, int, int, int, int);
typedef void(*type_10)(char***, void**);
typedef void(*type_11)();
typedef void(*type_13)(short, short);
typedef unsigned int(*type_14)();
typedef int(*type_16)();
typedef void(*type_17)(hmx_sprite*, int);
typedef void(*type_18)(hmx_environment*, hmx_grid*);
typedef int(*type_19)(unsigned int);
typedef int(*type_21)();
typedef void(*type_22)(unsigned int);
typedef void(*type_24)(unsigned short, unsigned char, char*);
typedef hmx_ddagrid*(*type_25)(hmx_environment*, int, int, int, int, int, int);
typedef unsigned int(*type_27)(int, unsigned int);
typedef hmx_renderer_base*(*type_28)(hmx_grid*);
typedef draw_context*(*type_33)();
typedef void(*type_34)(hmx_environment*, hmx_ddagrid*);
typedef void(*type_35)(hmx_grid*, int, int);
typedef void(*type_38)();
typedef void(*type_39)(hmx_ddagrid*, int, int, int, int, int);
typedef void(*type_40)(hmx_grid*, int, int, int, int);
typedef void*(*type_41)(hmx_environment*, char*);
typedef void(*type_42)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void(*type_43)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
typedef void(*type_44)(void*, void*, int, int, int, int, int);
typedef void*(*type_46)(int);
typedef void(*type_47)(hmx_grid*, int*);
typedef void(*type_50)(hmx_background*, int);
typedef void(*type_51)(void*);
typedef void(*type_53)(void*, void*, int);
typedef void(*type_54)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef void(*type_55)(short);
typedef hmx_bitmap*(*type_57)(hmx_environment*, int, int);
typedef int(*type_59)(int);
typedef void(*type_60)();
typedef void(*type_61)(hmx_renderer_context*);
typedef int(*type_63)(char*);
typedef void(*type_64)(hmx_environment*, hmx_bitmap*);
typedef void(*type_65)(short);
typedef void(*type_66)(hmx_renderer_context*, hmx_surface*);
typedef int(*type_67)(int, void*, int);
typedef unsigned int(*type_68)(int, char*, unsigned int);
typedef void*(*type_69)(hmx_bitmap*);
typedef hmx_renderer_base*(*type_70)(hmx_sprite*);
typedef void(*type_71)(int);
typedef unsigned int(*type_72)(int, char*, unsigned int);
typedef void(*type_73)(hmx_bitmap*, int);

typedef char type_12[4];
typedef tagPALETTEENTRY type_15[0];
typedef tagPALETTEENTRY type_20[0];
typedef char type_23[12];
typedef tagPALETTEENTRY type_26[0];
typedef tagPALETTEENTRY type_29[0];
typedef _anon1 type_30[3];
typedef _anon1 type_31[3][3];
typedef _anon1 type_32[3][3][7];
typedef _anon1 type_36[3];
typedef _anon1 type_37[3][7];
typedef hmx_bitmap* type_45[1000];
typedef int type_48[1000];
typedef hmx_grid* type_49[3];
typedef hmx_bitmap* type_52[2048];
typedef hmx_bitmap* type_56[2048];
typedef hmx_grid* type_58[8];
typedef hmx_bitmap* type_62[512];

struct hmx_sprite
{
};

struct hmx_environment
{
};

struct _anon0
{
	unsigned int hWnd;
	unsigned int hSurf;
	tagPALETTEENTRY* lpColorwk;
	unsigned int* lpbFullScreen;
	unsigned int bFirstTitle;
	unsigned int* lpbVisualmode;
	_anon2* lpCrntScorData;
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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct hmx_grid
{
};

struct hmx_bitmap
{
};

struct _anon1
{
	unsigned int time;
	char name[4];
};

struct _anon2
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
	_anon1 timeattack[3][3][7];
	_anon1 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

struct hmx_renderer_base
{
};

struct hmx_ddagrid
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

struct hmx_surface
{
};

struct hmx_background
{
};

union _anon3
{
	unsigned short w;
	_anon4 b;
};

struct _anon4
{
	unsigned char l;
	unsigned char h;
};

hmx_environment* g_env_module;
hmx_environment* g_loader_module;
int nTimerCunt;
unsigned short nSequenceNum;
tagPALETTEENTRY tblPal4[0];
tagPALETTEENTRY tblPal3[0];
tagPALETTEENTRY tblPal2[0];
tagPALETTEENTRY tblPal1[0];
draw_context* s_ctx;
draw_context*(*get_draw_context_module)();
unsigned short* lpUserKey;
unsigned int bFirstTitle;
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
unsigned int selectIndx;
void(*sMemCpy)(void*, void*, int);
_anon2 crntScorData;
unsigned int* lpbFullScreen;
tagPALETTEENTRY* lpColorwk;
unsigned int hSurf;
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
void(*sMemFree)(void*);
void*(*sMemAlloc)(int);
unsigned short swData2;
unsigned short swData1;
dlink_export ExportedFunctions;
unsigned int hWnd;

void OESetSequenceNum(unsigned short num);
void DLLInit(_anon0* lpDllIn, char*** pBufTbl, void** pFuncTbl);
void DLLEnd();
void SWdataSet(_anon3 sw1, _anon3 sw2);
int DLLMain();

// 
// Start address: 0x1002aa0
void OESetSequenceNum(unsigned short num)
{
	// Line 146, Address: 0x1002aa0, Func Offset: 0
	// Line 147, Address: 0x1002aa8, Func Offset: 0x8
	// Line 148, Address: 0x1002ab4, Func Offset: 0x14
	// Line 149, Address: 0x1002ac0, Func Offset: 0x20
	// Func End, Address: 0x1002acc, Func Offset: 0x2c
}

// 
// Start address: 0x1002ad0
void DLLInit(_anon0* lpDllIn, char*** pBufTbl, void** pFuncTbl)
{
	// Line 154, Address: 0x1002ad0, Func Offset: 0
	// Line 161, Address: 0x1002ae4, Func Offset: 0x14
	// Line 162, Address: 0x1002af0, Func Offset: 0x20
	// Line 163, Address: 0x1002afc, Func Offset: 0x2c
	// Line 164, Address: 0x1002b08, Func Offset: 0x38
	// Line 165, Address: 0x1002b14, Func Offset: 0x44
	// Line 166, Address: 0x1002b20, Func Offset: 0x50
	// Line 167, Address: 0x1002b2c, Func Offset: 0x5c
	// Line 168, Address: 0x1002b38, Func Offset: 0x68
	// Line 169, Address: 0x1002b44, Func Offset: 0x74
	// Line 170, Address: 0x1002b50, Func Offset: 0x80
	// Line 171, Address: 0x1002b5c, Func Offset: 0x8c
	// Line 173, Address: 0x1002b68, Func Offset: 0x98
	// Line 174, Address: 0x1002b80, Func Offset: 0xb0
	// Line 175, Address: 0x1002b98, Func Offset: 0xc8
	// Line 176, Address: 0x1002ba4, Func Offset: 0xd4
	// Line 177, Address: 0x1002bbc, Func Offset: 0xec
	// Line 178, Address: 0x1002bc8, Func Offset: 0xf8
	// Line 179, Address: 0x1002bd4, Func Offset: 0x104
	// Line 180, Address: 0x1002be0, Func Offset: 0x110
	// Line 181, Address: 0x1002bec, Func Offset: 0x11c
	// Line 182, Address: 0x1002bf8, Func Offset: 0x128
	// Line 183, Address: 0x1002c10, Func Offset: 0x140
	// Line 184, Address: 0x1002c28, Func Offset: 0x158
	// Line 185, Address: 0x1002c40, Func Offset: 0x170
	// Line 186, Address: 0x1002c58, Func Offset: 0x188
	// Line 187, Address: 0x1002c70, Func Offset: 0x1a0
	// Line 190, Address: 0x1002c88, Func Offset: 0x1b8
	// Line 191, Address: 0x1002ca0, Func Offset: 0x1d0
	// Line 192, Address: 0x1002cb8, Func Offset: 0x1e8
	// Line 193, Address: 0x1002cd0, Func Offset: 0x200
	// Line 194, Address: 0x1002ce8, Func Offset: 0x218
	// Line 195, Address: 0x1002d00, Func Offset: 0x230
	// Line 196, Address: 0x1002d18, Func Offset: 0x248
	// Line 197, Address: 0x1002d30, Func Offset: 0x260
	// Line 198, Address: 0x1002d48, Func Offset: 0x278
	// Line 199, Address: 0x1002d60, Func Offset: 0x290
	// Line 200, Address: 0x1002d78, Func Offset: 0x2a8
	// Line 201, Address: 0x1002d90, Func Offset: 0x2c0
	// Line 202, Address: 0x1002da8, Func Offset: 0x2d8
	// Line 203, Address: 0x1002dc0, Func Offset: 0x2f0
	// Line 204, Address: 0x1002dd8, Func Offset: 0x308
	// Line 205, Address: 0x1002df0, Func Offset: 0x320
	// Line 206, Address: 0x1002e08, Func Offset: 0x338
	// Line 207, Address: 0x1002e20, Func Offset: 0x350
	// Line 208, Address: 0x1002e38, Func Offset: 0x368
	// Line 209, Address: 0x1002e50, Func Offset: 0x380
	// Line 210, Address: 0x1002e68, Func Offset: 0x398
	// Line 211, Address: 0x1002e80, Func Offset: 0x3b0
	// Line 212, Address: 0x1002e98, Func Offset: 0x3c8
	// Line 213, Address: 0x1002eb0, Func Offset: 0x3e0
	// Line 215, Address: 0x1002ec8, Func Offset: 0x3f8
	// Line 216, Address: 0x1002ee0, Func Offset: 0x410
	// Line 217, Address: 0x1002ef8, Func Offset: 0x428
	// Line 218, Address: 0x1002f10, Func Offset: 0x440
	// Line 220, Address: 0x1002f28, Func Offset: 0x458
	// Line 221, Address: 0x1002f34, Func Offset: 0x464
	// Line 222, Address: 0x1002f40, Func Offset: 0x470
	// Line 223, Address: 0x1002f4c, Func Offset: 0x47c
	// Line 224, Address: 0x1002f58, Func Offset: 0x488
	// Line 225, Address: 0x1002f64, Func Offset: 0x494
	// Line 226, Address: 0x1002f70, Func Offset: 0x4a0
	// Line 227, Address: 0x1002f7c, Func Offset: 0x4ac
	// Line 228, Address: 0x1002f88, Func Offset: 0x4b8
	// Line 229, Address: 0x1002f94, Func Offset: 0x4c4
	// Line 230, Address: 0x1002fa0, Func Offset: 0x4d0
	// Line 232, Address: 0x1002fac, Func Offset: 0x4dc
	// Line 233, Address: 0x1002fc8, Func Offset: 0x4f8
	// Line 237, Address: 0x1002fe4, Func Offset: 0x514
	// Line 238, Address: 0x1002ff4, Func Offset: 0x524
	// Line 239, Address: 0x1003004, Func Offset: 0x534
	// Line 241, Address: 0x1003014, Func Offset: 0x544
	// Line 242, Address: 0x1003038, Func Offset: 0x568
	// Line 244, Address: 0x1003048, Func Offset: 0x578
	// Line 245, Address: 0x1003058, Func Offset: 0x588
	// Line 246, Address: 0x1003068, Func Offset: 0x598
	// Line 248, Address: 0x1003078, Func Offset: 0x5a8
	// Line 249, Address: 0x1003088, Func Offset: 0x5b8
	// Line 250, Address: 0x1003098, Func Offset: 0x5c8
	// Line 251, Address: 0x10030a8, Func Offset: 0x5d8
	// Line 252, Address: 0x10030b8, Func Offset: 0x5e8
	// Line 253, Address: 0x10030c8, Func Offset: 0x5f8
	// Line 254, Address: 0x10030d8, Func Offset: 0x608
	// Line 255, Address: 0x10030e8, Func Offset: 0x618
	// Line 256, Address: 0x10030f8, Func Offset: 0x628
	// Line 258, Address: 0x1003108, Func Offset: 0x638
	// Line 260, Address: 0x1003120, Func Offset: 0x650
	// Line 261, Address: 0x1003134, Func Offset: 0x664
	// Line 262, Address: 0x1003148, Func Offset: 0x678
	// Line 263, Address: 0x100315c, Func Offset: 0x68c
	// Line 265, Address: 0x1003170, Func Offset: 0x6a0
	// Line 266, Address: 0x1003178, Func Offset: 0x6a8
	// Line 267, Address: 0x1003184, Func Offset: 0x6b4
	// Line 268, Address: 0x100318c, Func Offset: 0x6bc
	// Func End, Address: 0x100319c, Func Offset: 0x6cc
}

// 
// Start address: 0x10031a0
void DLLEnd()
{
	// Line 273, Address: 0x10031a0, Func Offset: 0
	// Line 274, Address: 0x10031a8, Func Offset: 0x8
	// Line 277, Address: 0x10031b0, Func Offset: 0x10
	// Func End, Address: 0x10031c0, Func Offset: 0x20
}

// 
// Start address: 0x10031c0
void SWdataSet(_anon3 sw1, _anon3 sw2)
{
	// Line 284, Address: 0x10031c0, Func Offset: 0
	// Line 285, Address: 0x10031cc, Func Offset: 0xc
	// Line 286, Address: 0x10031d8, Func Offset: 0x18
	// Line 296, Address: 0x10031e4, Func Offset: 0x24
	// Func End, Address: 0x10031f0, Func Offset: 0x30
}

// 
// Start address: 0x10031f0
int DLLMain()
{
	int ret;
	// Line 306, Address: 0x10031f0, Func Offset: 0
	// Line 307, Address: 0x10031fc, Func Offset: 0xc
	// Line 309, Address: 0x1003200, Func Offset: 0x10
	// Line 312, Address: 0x1003280, Func Offset: 0x90
	// Line 313, Address: 0x1003288, Func Offset: 0x98
	// Line 316, Address: 0x1003290, Func Offset: 0xa0
	// Line 317, Address: 0x1003298, Func Offset: 0xa8
	// Line 320, Address: 0x10032a0, Func Offset: 0xb0
	// Line 321, Address: 0x10032a8, Func Offset: 0xb8
	// Line 324, Address: 0x10032b0, Func Offset: 0xc0
	// Line 325, Address: 0x10032b8, Func Offset: 0xc8
	// Line 328, Address: 0x10032c0, Func Offset: 0xd0
	// Line 329, Address: 0x10032c8, Func Offset: 0xd8
	// Line 332, Address: 0x10032d0, Func Offset: 0xe0
	// Line 333, Address: 0x10032d8, Func Offset: 0xe8
	// Line 336, Address: 0x10032e0, Func Offset: 0xf0
	// Line 337, Address: 0x10032e8, Func Offset: 0xf8
	// Line 340, Address: 0x10032f0, Func Offset: 0x100
	// Line 341, Address: 0x10032f8, Func Offset: 0x108
	// Line 344, Address: 0x1003300, Func Offset: 0x110
	// Line 347, Address: 0x100330c, Func Offset: 0x11c
	// Line 348, Address: 0x1003324, Func Offset: 0x134
	// Line 350, Address: 0x100333c, Func Offset: 0x14c
	// Line 352, Address: 0x1003350, Func Offset: 0x160
	// Line 354, Address: 0x1003358, Func Offset: 0x168
	// Line 355, Address: 0x100335c, Func Offset: 0x16c
	// Func End, Address: 0x1003370, Func Offset: 0x180
}

