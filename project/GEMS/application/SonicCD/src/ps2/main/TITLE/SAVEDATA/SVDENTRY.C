typedef struct hmx_sprite;
typedef struct hmx_environment;
typedef struct hmx_grid;
typedef struct hmx_bitmap;
typedef struct dlink_export;
typedef union _anon0;
typedef struct _anon1;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_base;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct tagPALETTEENTRY;
typedef struct _anon2;
typedef struct _anon3;
typedef struct hmx_surface;
typedef struct _anon4;
typedef struct hmx_background;

typedef void(*type_0)(hmx_sprite*, int, int);
typedef void(*type_1)(unsigned int);
typedef void(*type_2)(hmx_environment*, void*);
typedef unsigned int(*type_3)(unsigned int);
typedef int(*type_4)(int, void*, int);
typedef void(*type_5)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_6)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef unsigned int(*type_7)();
typedef hmx_grid*(*type_8)(hmx_environment*, int, int, int, int);
typedef void(*type_9)(int);
typedef void(*type_10)();
typedef int(*type_11)(unsigned int);
typedef void(*type_12)(char***, void**);
typedef void(*type_13)(hmx_sprite*, int);
typedef void(*type_14)();
typedef void(*type_15)(char*, char*);
typedef void(*type_16)(short, short);
typedef void(*type_17)(hmx_environment*, hmx_grid*);
typedef int(*type_18)();
typedef unsigned int(*type_19)(int, unsigned int);
typedef hmx_ddagrid*(*type_20)(hmx_environment*, int, int, int, int, int, int);
typedef int(*type_21)();
typedef void(*type_22)(char*);
typedef void(*type_23)(short);
typedef hmx_renderer_base*(*type_24)(hmx_grid*);
typedef void(*type_25)(unsigned short, unsigned char, char*);
typedef draw_context*(*type_26)();
typedef void(*type_27)(hmx_environment*, hmx_ddagrid*);
typedef void(*type_28)(hmx_grid*, int, int);
typedef void(*type_30)();
typedef void(*type_32)(hmx_ddagrid*, int, int, int, int, int);
typedef void(*type_33)(hmx_grid*, int, int, int, int);
typedef void*(*type_34)(hmx_environment*, char*);
typedef void(*type_37)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void(*type_38)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
typedef void(*type_39)(void*, void*, int, int, int, int, int);
typedef void*(*type_41)(int);
typedef void(*type_42)(hmx_grid*, int*);
typedef void(*type_43)(hmx_background*, int);
typedef void(*type_47)(void*);
typedef void(*type_49)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef hmx_bitmap*(*type_50)(hmx_environment*, int, int);
typedef void(*type_55)(void*, void*, int);
typedef void(*type_60)(hmx_renderer_context*);
typedef void(*type_61)(hmx_environment*, hmx_bitmap*);
typedef unsigned int(*type_62)(int, char*, unsigned int);
typedef void(*type_64)(void*, unsigned char, int);
typedef void(*type_65)(hmx_renderer_context*, hmx_surface*);
typedef void*(*type_66)(hmx_bitmap*);
typedef unsigned int(*type_67)(int, char*, unsigned int);
typedef int(*type_68)(int);
typedef hmx_renderer_base*(*type_69)(hmx_sprite*);
typedef void(*type_70)(hmx_bitmap*, int);
typedef unsigned int(*type_71)(int);
typedef int(*type_72)(char*);

typedef tagPALETTEENTRY type_29[0];
typedef tagPALETTEENTRY type_31[0];
typedef tagPALETTEENTRY type_35[0];
typedef tagPALETTEENTRY type_36[0];
typedef char type_40[4];
typedef char type_44[12];
typedef hmx_bitmap* type_45[1000];
typedef int type_46[1000];
typedef hmx_grid* type_48[3];
typedef hmx_bitmap* type_51[2048];
typedef _anon3 type_52[3];
typedef _anon3 type_53[3][3];
typedef _anon3 type_54[3][3][7];
typedef hmx_bitmap* type_56[2048];
typedef _anon3 type_57[3];
typedef _anon3 type_58[3][7];
typedef hmx_grid* type_59[8];
typedef hmx_bitmap* type_63[512];

struct hmx_sprite
{
};

struct hmx_environment
{
};

struct hmx_grid
{
};

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

struct _anon2
{
	unsigned int hWnd;
	unsigned int hSurf;
	tagPALETTEENTRY* lpColorwk;
	unsigned int* lpbFullScreen;
	unsigned int bFirstTitle;
	unsigned int* lpbVisualmode;
	_anon4* lpCrntScorData;
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

struct _anon3
{
	unsigned int time;
	char name[4];
};

struct hmx_surface
{
};

struct _anon4
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
	_anon3 timeattack[3][3][7];
	_anon3 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

struct hmx_background
{
};

hmx_environment* g_env_module;
hmx_environment* g_loader_module;
int nTimerCunt;
unsigned short nSequenceNum;
int nWaitTime;
unsigned short nSaveSequenceNum;
unsigned int bWaitKeyOff;
unsigned int bDefaultMsgFlag;
unsigned short swData1;
tagPALETTEENTRY tblPal4[0];
tagPALETTEENTRY tblPal3[0];
tagPALETTEENTRY tblPal2[0];
tagPALETTEENTRY tblPal1[0];
draw_context* s_ctx;
draw_context*(*get_draw_context_module)();
void(*WaveRequest)(short);
unsigned int(*WriteIndx)(int, unsigned int);
int(*ReadIndx)(unsigned int);
unsigned int(*CreateScore)();
unsigned int(*CloseScore)(unsigned int);
unsigned int(*OpenScore)(int);
unsigned int(*WriteScore)(int, char*, unsigned int);
unsigned int(*ReadScore)(int, char*, unsigned int);
_anon4* lpCrntScorData;
tagPALETTEENTRY* lpColorwk;
unsigned int hSurf;
unsigned int hWnd;
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
void(*sMemSet)(void*, unsigned char, int);
void(*sMemFree)(void*);
void*(*sMemAlloc)(int);
unsigned short swData2;
dlink_export ExportedFunctions;
int keybordInputTime;

void OESetSequenceNum(unsigned short num);
void KeyWait();
void WaitKeyOff();
void Wait(int time);
void WaitAndDfltMsg(int time);
void SDWait();
void DLLInit(_anon2* lpDllIn, char*** pBufTbl, void** pFuncTbl);
void DLLEnd();
void SWdataSet(_anon0 sw1, _anon0 sw2);
int DLLMain();

// 
// Start address: 0x10014d0
void OESetSequenceNum(unsigned short num)
{
	// Line 132, Address: 0x10014d0, Func Offset: 0
	// Line 133, Address: 0x10014d8, Func Offset: 0x8
	// Line 134, Address: 0x10014e4, Func Offset: 0x14
	// Line 135, Address: 0x10014f0, Func Offset: 0x20
	// Func End, Address: 0x10014fc, Func Offset: 0x2c
}

// 
// Start address: 0x1001500
void KeyWait()
{
	// Line 140, Address: 0x1001500, Func Offset: 0
	// Line 141, Address: 0x1001508, Func Offset: 0x8
	// Line 142, Address: 0x1001518, Func Offset: 0x18
	// Line 143, Address: 0x1001524, Func Offset: 0x24
	// Line 144, Address: 0x1001530, Func Offset: 0x30
	// Func End, Address: 0x1001540, Func Offset: 0x40
}

// 
// Start address: 0x1001540
void WaitKeyOff()
{
	// Line 149, Address: 0x1001540, Func Offset: 0
	// Line 150, Address: 0x1001548, Func Offset: 0x8
	// Line 151, Address: 0x1001558, Func Offset: 0x18
	// Line 152, Address: 0x1001564, Func Offset: 0x24
	// Line 153, Address: 0x100156c, Func Offset: 0x2c
	// Line 154, Address: 0x1001578, Func Offset: 0x38
	// Func End, Address: 0x1001588, Func Offset: 0x48
}

// 
// Start address: 0x1001590
void Wait(int time)
{
	// Line 159, Address: 0x1001590, Func Offset: 0
	// Line 160, Address: 0x100159c, Func Offset: 0xc
	// Line 161, Address: 0x10015ac, Func Offset: 0x1c
	// Line 162, Address: 0x10015b4, Func Offset: 0x24
	// Line 163, Address: 0x10015c0, Func Offset: 0x30
	// Line 164, Address: 0x10015cc, Func Offset: 0x3c
	// Func End, Address: 0x10015dc, Func Offset: 0x4c
}

// 
// Start address: 0x10015e0
void WaitAndDfltMsg(int time)
{
	// Line 169, Address: 0x10015e0, Func Offset: 0
	// Line 170, Address: 0x10015ec, Func Offset: 0xc
	// Line 171, Address: 0x10015fc, Func Offset: 0x1c
	// Line 172, Address: 0x1001608, Func Offset: 0x28
	// Line 173, Address: 0x1001614, Func Offset: 0x34
	// Line 174, Address: 0x1001620, Func Offset: 0x40
	// Line 175, Address: 0x100162c, Func Offset: 0x4c
	// Func End, Address: 0x100163c, Func Offset: 0x5c
}

// 
// Start address: 0x1001640
void SDWait()
{
	// Line 180, Address: 0x1001640, Func Offset: 0
	// Line 181, Address: 0x1001648, Func Offset: 0x8
	// Line 183, Address: 0x1001674, Func Offset: 0x34
	// Line 184, Address: 0x1001684, Func Offset: 0x44
	// Line 186, Address: 0x1001694, Func Offset: 0x54
	// Line 187, Address: 0x100169c, Func Offset: 0x5c
	// Line 190, Address: 0x10016a4, Func Offset: 0x64
	// Line 192, Address: 0x10016b4, Func Offset: 0x74
	// Line 194, Address: 0x10016d0, Func Offset: 0x90
	// Func End, Address: 0x10016e0, Func Offset: 0xa0
}

// 
// Start address: 0x10016e0
void DLLInit(_anon2* lpDllIn, char*** pBufTbl, void** pFuncTbl)
{
	// Line 199, Address: 0x10016e0, Func Offset: 0
	// Line 201, Address: 0x10016f4, Func Offset: 0x14
	// Line 202, Address: 0x1001700, Func Offset: 0x20
	// Line 203, Address: 0x100170c, Func Offset: 0x2c
	// Line 204, Address: 0x1001718, Func Offset: 0x38
	// Line 205, Address: 0x1001724, Func Offset: 0x44
	// Line 206, Address: 0x1001730, Func Offset: 0x50
	// Line 207, Address: 0x100173c, Func Offset: 0x5c
	// Line 208, Address: 0x1001748, Func Offset: 0x68
	// Line 209, Address: 0x1001754, Func Offset: 0x74
	// Line 210, Address: 0x1001760, Func Offset: 0x80
	// Line 211, Address: 0x100176c, Func Offset: 0x8c
	// Line 213, Address: 0x1001778, Func Offset: 0x98
	// Line 214, Address: 0x1001790, Func Offset: 0xb0
	// Line 215, Address: 0x10017a8, Func Offset: 0xc8
	// Line 216, Address: 0x10017c0, Func Offset: 0xe0
	// Line 217, Address: 0x10017d8, Func Offset: 0xf8
	// Line 218, Address: 0x10017e4, Func Offset: 0x104
	// Line 219, Address: 0x10017f0, Func Offset: 0x110
	// Line 220, Address: 0x10017fc, Func Offset: 0x11c
	// Line 221, Address: 0x1001808, Func Offset: 0x128
	// Line 222, Address: 0x1001814, Func Offset: 0x134
	// Line 223, Address: 0x100182c, Func Offset: 0x14c
	// Line 224, Address: 0x1001844, Func Offset: 0x164
	// Line 225, Address: 0x100185c, Func Offset: 0x17c
	// Line 226, Address: 0x1001874, Func Offset: 0x194
	// Line 227, Address: 0x100188c, Func Offset: 0x1ac
	// Line 230, Address: 0x10018a4, Func Offset: 0x1c4
	// Line 231, Address: 0x10018bc, Func Offset: 0x1dc
	// Line 232, Address: 0x10018d4, Func Offset: 0x1f4
	// Line 233, Address: 0x10018ec, Func Offset: 0x20c
	// Line 234, Address: 0x1001904, Func Offset: 0x224
	// Line 235, Address: 0x100191c, Func Offset: 0x23c
	// Line 236, Address: 0x1001934, Func Offset: 0x254
	// Line 237, Address: 0x100194c, Func Offset: 0x26c
	// Line 238, Address: 0x1001964, Func Offset: 0x284
	// Line 239, Address: 0x100197c, Func Offset: 0x29c
	// Line 240, Address: 0x1001994, Func Offset: 0x2b4
	// Line 241, Address: 0x10019ac, Func Offset: 0x2cc
	// Line 242, Address: 0x10019c4, Func Offset: 0x2e4
	// Line 243, Address: 0x10019dc, Func Offset: 0x2fc
	// Line 244, Address: 0x10019f4, Func Offset: 0x314
	// Line 245, Address: 0x1001a0c, Func Offset: 0x32c
	// Line 246, Address: 0x1001a24, Func Offset: 0x344
	// Line 247, Address: 0x1001a3c, Func Offset: 0x35c
	// Line 248, Address: 0x1001a54, Func Offset: 0x374
	// Line 249, Address: 0x1001a6c, Func Offset: 0x38c
	// Line 250, Address: 0x1001a84, Func Offset: 0x3a4
	// Line 251, Address: 0x1001a9c, Func Offset: 0x3bc
	// Line 252, Address: 0x1001ab4, Func Offset: 0x3d4
	// Line 253, Address: 0x1001acc, Func Offset: 0x3ec
	// Line 255, Address: 0x1001ae4, Func Offset: 0x404
	// Line 256, Address: 0x1001afc, Func Offset: 0x41c
	// Line 257, Address: 0x1001b14, Func Offset: 0x434
	// Line 258, Address: 0x1001b2c, Func Offset: 0x44c
	// Line 260, Address: 0x1001b44, Func Offset: 0x464
	// Line 261, Address: 0x1001b50, Func Offset: 0x470
	// Line 262, Address: 0x1001b5c, Func Offset: 0x47c
	// Line 263, Address: 0x1001b68, Func Offset: 0x488
	// Line 264, Address: 0x1001b74, Func Offset: 0x494
	// Line 265, Address: 0x1001b80, Func Offset: 0x4a0
	// Line 266, Address: 0x1001b8c, Func Offset: 0x4ac
	// Line 267, Address: 0x1001b98, Func Offset: 0x4b8
	// Line 268, Address: 0x1001ba4, Func Offset: 0x4c4
	// Line 269, Address: 0x1001bb0, Func Offset: 0x4d0
	// Line 270, Address: 0x1001bbc, Func Offset: 0x4dc
	// Line 272, Address: 0x1001bc8, Func Offset: 0x4e8
	// Line 273, Address: 0x1001be4, Func Offset: 0x504
	// Line 277, Address: 0x1001c00, Func Offset: 0x520
	// Line 278, Address: 0x1001c10, Func Offset: 0x530
	// Line 279, Address: 0x1001c20, Func Offset: 0x540
	// Line 280, Address: 0x1001c30, Func Offset: 0x550
	// Line 281, Address: 0x1001c40, Func Offset: 0x560
	// Line 282, Address: 0x1001c50, Func Offset: 0x570
	// Line 283, Address: 0x1001c60, Func Offset: 0x580
	// Line 284, Address: 0x1001c70, Func Offset: 0x590
	// Line 285, Address: 0x1001c80, Func Offset: 0x5a0
	// Line 286, Address: 0x1001c90, Func Offset: 0x5b0
	// Line 287, Address: 0x1001ca0, Func Offset: 0x5c0
	// Line 288, Address: 0x1001cb0, Func Offset: 0x5d0
	// Line 290, Address: 0x1001cc0, Func Offset: 0x5e0
	// Line 292, Address: 0x1001cd8, Func Offset: 0x5f8
	// Line 293, Address: 0x1001cec, Func Offset: 0x60c
	// Line 294, Address: 0x1001d00, Func Offset: 0x620
	// Line 295, Address: 0x1001d14, Func Offset: 0x634
	// Line 297, Address: 0x1001d28, Func Offset: 0x648
	// Line 298, Address: 0x1001d30, Func Offset: 0x650
	// Line 299, Address: 0x1001d3c, Func Offset: 0x65c
	// Line 300, Address: 0x1001d44, Func Offset: 0x664
	// Func End, Address: 0x1001d54, Func Offset: 0x674
}

// 
// Start address: 0x1001d60
void DLLEnd()
{
	// Line 305, Address: 0x1001d60, Func Offset: 0
	// Line 306, Address: 0x1001d68, Func Offset: 0x8
	// Line 307, Address: 0x1001d70, Func Offset: 0x10
	// Line 310, Address: 0x1001d78, Func Offset: 0x18
	// Func End, Address: 0x1001d88, Func Offset: 0x28
}

// 
// Start address: 0x1001d90
void SWdataSet(_anon0 sw1, _anon0 sw2)
{
	// Line 315, Address: 0x1001d90, Func Offset: 0
	// Line 316, Address: 0x1001d9c, Func Offset: 0xc
	// Line 317, Address: 0x1001da8, Func Offset: 0x18
	// Line 325, Address: 0x1001db4, Func Offset: 0x24
	// Func End, Address: 0x1001dc0, Func Offset: 0x30
}

// 
// Start address: 0x1001dc0
int DLLMain()
{
	int ret;
	// Line 330, Address: 0x1001dc0, Func Offset: 0
	// Line 331, Address: 0x1001dcc, Func Offset: 0xc
	// Line 333, Address: 0x1001dd0, Func Offset: 0x10
	// Line 336, Address: 0x1001e14, Func Offset: 0x54
	// Line 337, Address: 0x1001e1c, Func Offset: 0x5c
	// Line 340, Address: 0x1001e24, Func Offset: 0x64
	// Line 341, Address: 0x1001e2c, Func Offset: 0x6c
	// Line 344, Address: 0x1001e34, Func Offset: 0x74
	// Line 345, Address: 0x1001e3c, Func Offset: 0x7c
	// Line 348, Address: 0x1001e44, Func Offset: 0x84
	// Line 352, Address: 0x1001e50, Func Offset: 0x90
	// Line 353, Address: 0x1001e68, Func Offset: 0xa8
	// Line 355, Address: 0x1001e80, Func Offset: 0xc0
	// Line 357, Address: 0x1001e94, Func Offset: 0xd4
	// Line 358, Address: 0x1001e9c, Func Offset: 0xdc
	// Line 359, Address: 0x1001ea4, Func Offset: 0xe4
	// Line 360, Address: 0x1001eac, Func Offset: 0xec
	// Line 361, Address: 0x1001eb8, Func Offset: 0xf8
	// Line 362, Address: 0x1001ebc, Func Offset: 0xfc
	// Func End, Address: 0x1001ed0, Func Offset: 0x110
}

