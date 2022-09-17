typedef struct hmx_bitmap;
typedef struct dlink_export;
typedef struct hmx_grid;
typedef struct hmx_background;
typedef struct draw_context;
typedef struct hmx_renderer_context;
typedef struct hmx_renderer_base;
typedef struct hmx_ddagrid;
typedef struct hmx_environment;
typedef struct hmx_surface;
typedef struct hmx_sprite;
typedef union _anon0;
typedef struct _anon1;

typedef void(*type_0)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void(*type_1)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
typedef void(*type_2)();
typedef void(*type_3)(void*, void*, int, int, int, int, int);
typedef void(*type_4)(char***, void**);
typedef void(*type_5)();
typedef void*(*type_6)(int);
typedef void(*type_7)(hmx_grid*, int*);
typedef void(*type_8)(short, short);
typedef int(*type_9)();
typedef void(*type_10)(hmx_background*, int);
typedef void(*type_12)(void*);
typedef int(*type_13)();
typedef void(*type_14)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef void(*type_15)(short);
typedef void(*type_16)(unsigned int);
typedef hmx_bitmap*(*type_17)(hmx_environment*, int, int);
typedef void(*type_18)(unsigned short, unsigned char, char*);
typedef void(*type_19)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_20)(void*, void*, int);
typedef void(*type_21)();
typedef void(*type_22)(hmx_renderer_context*);
typedef void(*type_23)(hmx_environment*, hmx_bitmap*);
typedef void(*type_24)(short);
typedef int(*type_25)(int);
typedef void(*type_26)(hmx_renderer_context*, hmx_surface*);
typedef unsigned int(*type_27)(int, char*, unsigned int);
typedef void*(*type_28)(hmx_bitmap*);
typedef int(*type_29)(char*);
typedef hmx_renderer_base*(*type_30)(hmx_sprite*);
typedef unsigned int(*type_31)(int, char*, unsigned int);
typedef void(*type_32)(hmx_bitmap*, int);
typedef int(*type_34)(int, void*, int);
typedef void(*type_35)(hmx_sprite*, int, int);
typedef unsigned int(*type_36)(int);
typedef void(*type_37)(hmx_environment*, void*);
typedef void(*type_38)(int);
typedef unsigned int(*type_39)(unsigned int);
typedef void(*type_40)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_42)(char*, char*);
typedef hmx_grid*(*type_44)(hmx_environment*, int, int, int, int);
typedef unsigned int(*type_46)();
typedef void(*type_48)(hmx_sprite*, int);
typedef void(*type_49)(char*);
typedef void(*type_51)(hmx_environment*, hmx_grid*);
typedef int(*type_52)(unsigned int);
typedef hmx_ddagrid*(*type_54)(hmx_environment*, int, int, int, int, int, int);
typedef int(*type_55)(int);
typedef unsigned int(*type_56)(int, unsigned int);
typedef hmx_renderer_base*(*type_58)(hmx_grid*);
typedef int(*type_59)();
typedef draw_context*(*type_60)();
typedef void(*type_61)(hmx_environment*, hmx_ddagrid*);
typedef void(*type_62)(hmx_grid*, int, int);
typedef int(*type_63)();
typedef void(*type_64)();
typedef void(*type_65)(hmx_ddagrid*, int, int, int, int, int);
typedef void(*type_66)(hmx_grid*, int, int, int, int);
typedef void*(*type_67)(hmx_environment*, char*);

typedef unsigned short type_11[1];
typedef char type_33[27];
typedef hmx_bitmap* type_41[1000];
typedef int type_43[1000];
typedef hmx_grid* type_45[3];
typedef hmx_bitmap* type_47[2048];
typedef hmx_bitmap* type_50[2048];
typedef hmx_grid* type_53[8];
typedef hmx_bitmap* type_57[512];

struct hmx_bitmap
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

struct hmx_grid
{
};

struct hmx_background
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

struct hmx_renderer_context
{
};

struct hmx_renderer_base
{
};

struct hmx_ddagrid
{
};

struct hmx_environment
{
};

struct hmx_surface
{
};

struct hmx_sprite
{
};

union _anon0
{
	unsigned short w;
	_anon1 b;
};

struct _anon1
{
	unsigned char l;
	unsigned char h;
};

hmx_environment* g_env_module;
hmx_environment* g_loader_module;
char fileName[27];
int nTimerCunt;
unsigned short nSequenceNum;
unsigned short wMCIDeviceID[1];
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
unsigned int* lpbFullScreen;
unsigned int hWnd;

void OESetSequenceNum(unsigned short num);
void DLLInit(char*** pBufTbl, void** pFuncTbl);
void DLLEnd();
void DLLPaint(unsigned int hdc);
int DLLNotify();
void DLLAVISizeChange();
void DLLAVIRealize();
void AVIPause();
void AVIResume();
void SWdataSet(_anon0 sw1, _anon0 sw2);
int DLLMain();

// 
// Start address: 0x10000b0
void OESetSequenceNum(unsigned short num)
{
	// Line 115, Address: 0x10000b0, Func Offset: 0
	// Line 116, Address: 0x10000b8, Func Offset: 0x8
	// Line 117, Address: 0x10000c4, Func Offset: 0x14
	// Line 118, Address: 0x10000d0, Func Offset: 0x20
	// Func End, Address: 0x10000dc, Func Offset: 0x2c
}

// 
// Start address: 0x10000e0
void DLLInit(char*** pBufTbl, void** pFuncTbl)
{
	int n;
	// Line 123, Address: 0x10000e0, Func Offset: 0
	// Line 127, Address: 0x10000f4, Func Offset: 0x14
	// Line 128, Address: 0x1000100, Func Offset: 0x20
	// Line 129, Address: 0x100010c, Func Offset: 0x2c
	// Line 130, Address: 0x1000118, Func Offset: 0x38
	// Line 131, Address: 0x1000124, Func Offset: 0x44
	// Line 132, Address: 0x1000130, Func Offset: 0x50
	// Line 133, Address: 0x100013c, Func Offset: 0x5c
	// Line 134, Address: 0x1000148, Func Offset: 0x68
	// Line 135, Address: 0x1000154, Func Offset: 0x74
	// Line 136, Address: 0x1000160, Func Offset: 0x80
	// Line 137, Address: 0x100016c, Func Offset: 0x8c
	// Line 139, Address: 0x1000178, Func Offset: 0x98
	// Line 140, Address: 0x1000190, Func Offset: 0xb0
	// Line 141, Address: 0x10001a8, Func Offset: 0xc8
	// Line 142, Address: 0x10001b4, Func Offset: 0xd4
	// Line 143, Address: 0x10001cc, Func Offset: 0xec
	// Line 144, Address: 0x10001d8, Func Offset: 0xf8
	// Line 145, Address: 0x10001e4, Func Offset: 0x104
	// Line 146, Address: 0x10001f0, Func Offset: 0x110
	// Line 147, Address: 0x10001fc, Func Offset: 0x11c
	// Line 148, Address: 0x1000208, Func Offset: 0x128
	// Line 149, Address: 0x1000220, Func Offset: 0x140
	// Line 150, Address: 0x1000238, Func Offset: 0x158
	// Line 151, Address: 0x1000250, Func Offset: 0x170
	// Line 152, Address: 0x1000268, Func Offset: 0x188
	// Line 153, Address: 0x1000280, Func Offset: 0x1a0
	// Line 156, Address: 0x1000298, Func Offset: 0x1b8
	// Line 157, Address: 0x10002b0, Func Offset: 0x1d0
	// Line 158, Address: 0x10002c8, Func Offset: 0x1e8
	// Line 159, Address: 0x10002e0, Func Offset: 0x200
	// Line 160, Address: 0x10002f8, Func Offset: 0x218
	// Line 161, Address: 0x1000310, Func Offset: 0x230
	// Line 162, Address: 0x1000328, Func Offset: 0x248
	// Line 163, Address: 0x1000340, Func Offset: 0x260
	// Line 164, Address: 0x1000358, Func Offset: 0x278
	// Line 165, Address: 0x1000370, Func Offset: 0x290
	// Line 166, Address: 0x1000388, Func Offset: 0x2a8
	// Line 167, Address: 0x10003a0, Func Offset: 0x2c0
	// Line 168, Address: 0x10003b8, Func Offset: 0x2d8
	// Line 169, Address: 0x10003d0, Func Offset: 0x2f0
	// Line 170, Address: 0x10003e8, Func Offset: 0x308
	// Line 171, Address: 0x1000400, Func Offset: 0x320
	// Line 172, Address: 0x1000418, Func Offset: 0x338
	// Line 173, Address: 0x1000430, Func Offset: 0x350
	// Line 174, Address: 0x1000448, Func Offset: 0x368
	// Line 175, Address: 0x1000460, Func Offset: 0x380
	// Line 176, Address: 0x1000478, Func Offset: 0x398
	// Line 177, Address: 0x1000490, Func Offset: 0x3b0
	// Line 178, Address: 0x10004a8, Func Offset: 0x3c8
	// Line 179, Address: 0x10004c0, Func Offset: 0x3e0
	// Line 181, Address: 0x10004d8, Func Offset: 0x3f8
	// Line 182, Address: 0x10004f0, Func Offset: 0x410
	// Line 183, Address: 0x1000508, Func Offset: 0x428
	// Line 184, Address: 0x1000520, Func Offset: 0x440
	// Line 186, Address: 0x1000538, Func Offset: 0x458
	// Line 187, Address: 0x1000544, Func Offset: 0x464
	// Line 188, Address: 0x100055c, Func Offset: 0x47c
	// Line 189, Address: 0x1000574, Func Offset: 0x494
	// Line 191, Address: 0x100058c, Func Offset: 0x4ac
	// Line 192, Address: 0x1000598, Func Offset: 0x4b8
	// Line 193, Address: 0x10005a4, Func Offset: 0x4c4
	// Line 194, Address: 0x10005b0, Func Offset: 0x4d0
	// Line 195, Address: 0x10005bc, Func Offset: 0x4dc
	// Line 196, Address: 0x10005c8, Func Offset: 0x4e8
	// Line 197, Address: 0x10005d4, Func Offset: 0x4f4
	// Line 198, Address: 0x10005e0, Func Offset: 0x500
	// Line 199, Address: 0x10005ec, Func Offset: 0x50c
	// Line 200, Address: 0x10005f8, Func Offset: 0x518
	// Line 201, Address: 0x1000604, Func Offset: 0x524
	// Line 203, Address: 0x1000610, Func Offset: 0x530
	// Line 204, Address: 0x100062c, Func Offset: 0x54c
	// Line 206, Address: 0x1000648, Func Offset: 0x568
	// Line 211, Address: 0x1000660, Func Offset: 0x580
	// Line 212, Address: 0x1000670, Func Offset: 0x590
	// Line 213, Address: 0x100067c, Func Offset: 0x59c
	// Line 215, Address: 0x1000684, Func Offset: 0x5a4
	// Line 216, Address: 0x1000690, Func Offset: 0x5b0
	// Line 217, Address: 0x10006a8, Func Offset: 0x5c8
	// Line 218, Address: 0x10006b4, Func Offset: 0x5d4
	// Func End, Address: 0x10006c8, Func Offset: 0x5e8
}

// 
// Start address: 0x10006d0
void DLLEnd()
{
	// Line 223, Address: 0x10006d0, Func Offset: 0
	// Line 224, Address: 0x10006d8, Func Offset: 0x8
	// Line 225, Address: 0x10006e0, Func Offset: 0x10
	// Line 227, Address: 0x10006e8, Func Offset: 0x18
	// Func End, Address: 0x10006f8, Func Offset: 0x28
}

// 
// Start address: 0x1000700
void DLLPaint(unsigned int hdc)
{
	// Line 232, Address: 0x1000700, Func Offset: 0
	// Line 233, Address: 0x100070c, Func Offset: 0xc
	// Line 234, Address: 0x1000718, Func Offset: 0x18
	// Func End, Address: 0x1000728, Func Offset: 0x28
}

// 
// Start address: 0x1000730
int DLLNotify()
{
	// Line 238, Address: 0x1000730, Func Offset: 0
	// Line 243, Address: 0x1000734, Func Offset: 0x4
	// Line 244, Address: 0x1000738, Func Offset: 0x8
	// Func End, Address: 0x1000744, Func Offset: 0x14
}

// 
// Start address: 0x1000750
void DLLAVISizeChange()
{
	// Line 249, Address: 0x1000750, Func Offset: 0
	// Func End, Address: 0x1000758, Func Offset: 0x8
}

// 
// Start address: 0x1000760
void DLLAVIRealize()
{
	// Line 255, Address: 0x1000760, Func Offset: 0
	// Func End, Address: 0x1000768, Func Offset: 0x8
}

// 
// Start address: 0x1000770
void AVIPause()
{
	// Line 285, Address: 0x1000770, Func Offset: 0
	// Func End, Address: 0x1000778, Func Offset: 0x8
}

// 
// Start address: 0x1000780
void AVIResume()
{
	// Line 299, Address: 0x1000780, Func Offset: 0
	// Func End, Address: 0x1000788, Func Offset: 0x8
}

// 
// Start address: 0x1000790
void SWdataSet(_anon0 sw1, _anon0 sw2)
{
	// Line 304, Address: 0x1000790, Func Offset: 0
	// Line 305, Address: 0x100079c, Func Offset: 0xc
	// Line 306, Address: 0x10007a8, Func Offset: 0x18
	// Line 308, Address: 0x10007b4, Func Offset: 0x24
	// Func End, Address: 0x10007c0, Func Offset: 0x30
}

// 
// Start address: 0x10007c0
int DLLMain()
{
	int ret;
	// Line 316, Address: 0x10007c0, Func Offset: 0
	// Line 317, Address: 0x10007cc, Func Offset: 0xc
	// Line 319, Address: 0x10007d0, Func Offset: 0x10
	// Line 322, Address: 0x10007f0, Func Offset: 0x30
	// Line 325, Address: 0x10007f8, Func Offset: 0x38
	// Line 326, Address: 0x1000810, Func Offset: 0x50
	// Line 328, Address: 0x1000828, Func Offset: 0x68
	// Line 336, Address: 0x100083c, Func Offset: 0x7c
	// Line 337, Address: 0x1000840, Func Offset: 0x80
	// Func End, Address: 0x1000854, Func Offset: 0x94
}

