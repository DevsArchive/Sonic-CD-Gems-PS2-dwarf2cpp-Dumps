typedef struct hmx_renderer_context;
typedef struct hmx_background;
typedef struct hmx_sprite;
typedef struct hmx_environment;
typedef struct hmx_surface;
typedef struct hmx_grid;
typedef struct hmx_bitmap;
typedef struct hmx_renderer_base;
typedef struct draw_context;
typedef struct hmx_ddagrid;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct dlink_export;
typedef struct _anon6;
typedef struct tagPALETTEENTRY;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_0)(int);
typedef void(*type_1)(hmx_environment*, hmx_grid*);
typedef void(*type_5)(char*, char*);
typedef hmx_renderer_base*(*type_11)(hmx_grid*);
typedef void(*type_12)(char*);
typedef draw_context*(*type_14)();
typedef void(*type_15)(hmx_grid*, int, int);
typedef void(*type_17)(char***, void**);
typedef void(*type_19)();
typedef void(*type_20)();
typedef void(*type_22)();
typedef void(*type_23)(hmx_grid*, int, int, int, int);
typedef void*(*type_24)(hmx_environment*, char*);
typedef void(*type_25)(short);
typedef int(*type_26)();
typedef void(*type_28)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void(*type_29)(unsigned short, unsigned char, char*);
typedef void(*type_30)(short);
typedef void(*type_31)(void*, void*, int, int, int, int, int);
typedef int(*type_32)();
typedef int(*type_33)(unsigned int);
typedef void(*type_34)(short, short);
typedef void(*type_35)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef void(*type_36)(unsigned int);
typedef void(*type_37)(hmx_background*, int);
typedef unsigned int(*type_38)(int, char*, unsigned int);
typedef void(*type_39)(unsigned short*, unsigned short*, unsigned short*, unsigned short*);
typedef void(*type_40)(hmx_renderer_context*);
typedef hmx_bitmap*(*type_41)(hmx_environment*, int, int);
typedef void(*type_42)(_anon6*);
typedef void(*type_43)(hmx_renderer_context*, hmx_surface*);
typedef void*(*type_44)(int);
typedef void(*type_45)(hmx_environment*, hmx_bitmap*);
typedef hmx_renderer_base*(*type_46)(hmx_sprite*);
typedef void(*type_47)(void*);
typedef void*(*type_48)(hmx_bitmap*);
typedef void(*type_49)(hmx_sprite*, int, int);
typedef char*(*type_50)(char*, char*, int);
typedef void(*type_51)(hmx_bitmap*, int);
typedef int(*type_52)(char*, char*, int);
typedef void(*type_53)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_54)(hmx_environment*, void*);
typedef int(*type_56)(char*);
typedef int(*type_57)(int, void*, int);
typedef hmx_grid*(*type_58)(hmx_environment*, int, int, int, int);

typedef _anon9 type_2[3];
typedef _anon9 type_3[3][3];
typedef _anon9 type_4[3][3][7];
typedef hmx_bitmap* type_6[1000];
typedef _anon9 type_7[3];
typedef _anon9 type_8[3][7];
typedef int type_9[1000];
typedef hmx_grid* type_10[3];
typedef hmx_bitmap* type_13[2048];
typedef hmx_bitmap* type_16[2048];
typedef hmx_grid* type_18[8];
typedef hmx_bitmap* type_21[512];
typedef unsigned char type_27[766];
typedef char type_55[4];
typedef char type_59[12];

struct hmx_renderer_context
{
};

struct hmx_background
{
};

struct hmx_sprite
{
};

struct hmx_environment
{
};

struct hmx_surface
{
};

struct hmx_grid
{
};

struct hmx_bitmap
{
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

struct hmx_ddagrid
{
};

union _anon0
{
	int l;
	_anon1 w;
	_anon2 b;
};

struct _anon1
{
	short l;
	short h;
};

struct _anon2
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon3
{
	short w;
	_anon4 b;
};

struct _anon4
{
	char l;
	char h;
};

struct _anon5
{
	short plring;
	int plscore;
	_anon3 stageno;
	unsigned int TimeWarp;
	void* pSprBmp;
	unsigned int GamePass;
	unsigned char play_start;
	unsigned char pl_suu;
	unsigned char generate_flag;
	unsigned char time_flag;
	unsigned char special_flag;
	int pltime_sb;
	short plxposi_sb;
	short plyposi_sb;
	short scralim_down_sb;
	short scra_h_posit_sb;
	short scra_v_posit_sb;
	short scrb_h_posit_sb;
	short scrb_v_posit_sb;
	short scrc_h_posit_sb;
	short scrc_v_posit_sb;
	short scrz_h_posit_sb;
	short scrz_v_posit_sb;
	short waterposi_m_sb;
	short plmspd_sb;
	short plxspd_sb;
	short plyspd_sb;
	unsigned char plflag_sb;
	unsigned char cddat_sb;
	unsigned char water_flag_sb;
	unsigned char waterflag_sb;
	unsigned char chibi_sb;
	unsigned char prio_sb;
	short plring_s;
	unsigned char plring_f2_s;
	unsigned char plflag;
	_anon3 demoflag;
	_anon3 hintposi;
	unsigned char waterflag;
	unsigned short* ptv_adr;
	unsigned short* sm_adr0;
	int SPEMode;
	unsigned char stagenm;
	unsigned char clrspflg_save;
	unsigned char ta_flag;
	unsigned char gf_flag;
	unsigned char projector_flag;
	unsigned char flagworkcnt;
	unsigned char flagworkcnt2;
	unsigned char flagwork[766];
	unsigned int ta_time;
	unsigned char ta_Menu1;
	unsigned char ta_Round;
	unsigned char ta_Zone;
	unsigned char EndingMesType;
	int extrascore;
	unsigned char emie3end;
	unsigned char SpecialTime;
	unsigned char bRestart;
	unsigned char User;
	unsigned short wReserved1;
	unsigned short wReserved2;
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

struct _anon6
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
	_anon9 timeattack[3][3][7];
	_anon9 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	unsigned int time;
	char name[4];
};

int gMove;
int gRankY;
int gRankX;
int bExit;
hmx_environment* g_env_module;
hmx_environment* g_loader_module;
_anon7 swdata2;
_anon7 swdata1;
_anon6* lpScoreData;
unsigned short KeyRepTimer;
int gNewMenu2;
int gMenu2;
int gMenu1;
_anon5* lpKeepWork;
int gMenuZone;
int gMenuRound;
int gRet;
int gNewMenuZone;
int gNewRankX;
unsigned int(*WriteScoreData2)(int, char*, unsigned int);
void(*SetScoreDate2)(_anon6*);
int(*ReadScoreIndx2)(unsigned int);
int gNewMenuRound;
int gNewMenu1;
unsigned int gTimer;
void(*CDPause)(short);
void(*CDPlay)(short);
char*(*sStrncpy)(char*, char*, int);
int(*sStrncmp)(char*, char*, int);
draw_context* s_ctx;
draw_context*(*get_draw_context_module)();
int* lpFadeFlag;
_anon0* lphscrollbuff;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk;
unsigned short* pmapwk;
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
hmx_renderer_base*(*hmx_sprite_base_module)(hmx_sprite*);
void(*hmx_renderer_context_draw_module)(hmx_renderer_context*, hmx_surface*);
void(*hmx_renderer_context_clear_module)(hmx_renderer_context*);
void(*hmx_renderer_context_add_module)(hmx_renderer_context*, int, hmx_renderer_base*);
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
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
int(*sOpenFile)(char*);
void(*sOutputDebugString)(char*);
void(*sPrintf)(char*, char*);
void(*sMemFree)(void*);
void*(*sMemAlloc)(int);
dlink_export ExportedFunctions;
unsigned int ghWnd;
unsigned int hSurf;

void SWdataSet(_anon7 sw1, _anon7 sw2);
unsigned int SpecialPlayChk();
int GetPlayRound();
int game();
void game_init();
void DLL_meminit(char*** pBufTbl, void** pFuncTbl);
void DLL_memfree();

// 
// Start address: 0x1000000
void SWdataSet(_anon7 sw1, _anon7 sw2)
{
	// Line 146, Address: 0x1000000, Func Offset: 0
	// Line 147, Address: 0x100000c, Func Offset: 0xc
	// Line 148, Address: 0x1000018, Func Offset: 0x18
	// Line 150, Address: 0x1000024, Func Offset: 0x24
	// Func End, Address: 0x1000030, Func Offset: 0x30
}

// 
// Start address: 0x1000030
unsigned int SpecialPlayChk()
{
	// Line 158, Address: 0x1000030, Func Offset: 0
	// Line 160, Address: 0x1000068, Func Offset: 0x38
	// Line 162, Address: 0x1000074, Func Offset: 0x44
	// Line 164, Address: 0x1000078, Func Offset: 0x48
	// Func End, Address: 0x1000080, Func Offset: 0x50
}

// 
// Start address: 0x1000080
int GetPlayRound()
{
	int ret;
	// Line 167, Address: 0x1000080, Func Offset: 0
	// Line 170, Address: 0x1000088, Func Offset: 0x8
	// Line 172, Address: 0x100008c, Func Offset: 0xc
	// Line 173, Address: 0x10000a0, Func Offset: 0x20
	// Line 174, Address: 0x10000b0, Func Offset: 0x30
	// Line 179, Address: 0x10000c0, Func Offset: 0x40
	// Line 180, Address: 0x10000c4, Func Offset: 0x44
	// Func End, Address: 0x10000d4, Func Offset: 0x54
}

// 
// Start address: 0x10000e0
int game()
{
	char c;
	int index;
	// Line 196, Address: 0x10000e0, Func Offset: 0
	// Line 200, Address: 0x10000f4, Func Offset: 0x14
	// Line 201, Address: 0x1000108, Func Offset: 0x28
	// Line 202, Address: 0x100011c, Func Offset: 0x3c
	// Line 203, Address: 0x1000128, Func Offset: 0x48
	// Line 204, Address: 0x1000134, Func Offset: 0x54
	// Line 206, Address: 0x1000140, Func Offset: 0x60
	// Line 208, Address: 0x1000150, Func Offset: 0x70
	// Line 212, Address: 0x1000158, Func Offset: 0x78
	// Line 213, Address: 0x100016c, Func Offset: 0x8c
	// Line 215, Address: 0x100017c, Func Offset: 0x9c
	// Line 216, Address: 0x10001b4, Func Offset: 0xd4
	// Line 217, Address: 0x10001cc, Func Offset: 0xec
	// Line 223, Address: 0x10001d4, Func Offset: 0xf4
	// Line 225, Address: 0x10001e4, Func Offset: 0x104
	// Line 227, Address: 0x10001f4, Func Offset: 0x114
	// Line 228, Address: 0x100020c, Func Offset: 0x12c
	// Line 230, Address: 0x100021c, Func Offset: 0x13c
	// Line 231, Address: 0x1000228, Func Offset: 0x148
	// Line 232, Address: 0x1000234, Func Offset: 0x154
	// Line 233, Address: 0x100023c, Func Offset: 0x15c
	// Line 237, Address: 0x1000248, Func Offset: 0x168
	// Line 238, Address: 0x1000258, Func Offset: 0x178
	// Line 239, Address: 0x1000264, Func Offset: 0x184
	// Line 240, Address: 0x1000270, Func Offset: 0x190
	// Line 242, Address: 0x1000278, Func Offset: 0x198
	// Line 243, Address: 0x1000284, Func Offset: 0x1a4
	// Line 245, Address: 0x1000290, Func Offset: 0x1b0
	// Line 247, Address: 0x10002a0, Func Offset: 0x1c0
	// Line 248, Address: 0x10002a8, Func Offset: 0x1c8
	// Line 249, Address: 0x10002c0, Func Offset: 0x1e0
	// Line 251, Address: 0x10002e4, Func Offset: 0x204
	// Line 252, Address: 0x10002f0, Func Offset: 0x210
	// Line 254, Address: 0x10002fc, Func Offset: 0x21c
	// Line 255, Address: 0x1000304, Func Offset: 0x224
	// Line 256, Address: 0x100031c, Func Offset: 0x23c
	// Line 258, Address: 0x1000330, Func Offset: 0x250
	// Line 259, Address: 0x100033c, Func Offset: 0x25c
	// Line 261, Address: 0x1000344, Func Offset: 0x264
	// Line 262, Address: 0x100034c, Func Offset: 0x26c
	// Line 264, Address: 0x1000364, Func Offset: 0x284
	// Line 265, Address: 0x1000370, Func Offset: 0x290
	// Line 266, Address: 0x1000384, Func Offset: 0x2a4
	// Line 267, Address: 0x10003a4, Func Offset: 0x2c4
	// Line 268, Address: 0x10003ac, Func Offset: 0x2cc
	// Line 270, Address: 0x10003c4, Func Offset: 0x2e4
	// Line 271, Address: 0x10003d0, Func Offset: 0x2f0
	// Line 272, Address: 0x10003e4, Func Offset: 0x304
	// Line 274, Address: 0x1000408, Func Offset: 0x328
	// Line 276, Address: 0x1000410, Func Offset: 0x330
	// Line 278, Address: 0x1000424, Func Offset: 0x344
	// Line 279, Address: 0x1000434, Func Offset: 0x354
	// Line 280, Address: 0x1000440, Func Offset: 0x360
	// Line 282, Address: 0x100044c, Func Offset: 0x36c
	// Line 284, Address: 0x1000454, Func Offset: 0x374
	// Line 286, Address: 0x1000468, Func Offset: 0x388
	// Line 287, Address: 0x1000480, Func Offset: 0x3a0
	// Line 288, Address: 0x1000494, Func Offset: 0x3b4
	// Line 289, Address: 0x10004a0, Func Offset: 0x3c0
	// Line 291, Address: 0x10004ac, Func Offset: 0x3cc
	// Line 292, Address: 0x10004c4, Func Offset: 0x3e4
	// Line 293, Address: 0x10004d0, Func Offset: 0x3f0
	// Line 294, Address: 0x10004e4, Func Offset: 0x404
	// Line 296, Address: 0x1000500, Func Offset: 0x420
	// Line 299, Address: 0x1000508, Func Offset: 0x428
	// Line 302, Address: 0x100051c, Func Offset: 0x43c
	// Line 303, Address: 0x1000544, Func Offset: 0x464
	// Line 304, Address: 0x1000554, Func Offset: 0x474
	// Line 305, Address: 0x1000568, Func Offset: 0x488
	// Line 307, Address: 0x1000574, Func Offset: 0x494
	// Line 308, Address: 0x100057c, Func Offset: 0x49c
	// Line 309, Address: 0x10005a4, Func Offset: 0x4c4
	// Line 310, Address: 0x10005b8, Func Offset: 0x4d8
	// Line 311, Address: 0x10005cc, Func Offset: 0x4ec
	// Line 313, Address: 0x10005d8, Func Offset: 0x4f8
	// Line 314, Address: 0x10005e0, Func Offset: 0x500
	// Line 315, Address: 0x10005f0, Func Offset: 0x510
	// Line 316, Address: 0x1000608, Func Offset: 0x528
	// Line 317, Address: 0x100061c, Func Offset: 0x53c
	// Line 318, Address: 0x1000624, Func Offset: 0x544
	// Line 319, Address: 0x100063c, Func Offset: 0x55c
	// Line 322, Address: 0x1000648, Func Offset: 0x568
	// Line 323, Address: 0x1000660, Func Offset: 0x580
	// Line 324, Address: 0x1000668, Func Offset: 0x588
	// Line 325, Address: 0x1000678, Func Offset: 0x598
	// Line 326, Address: 0x10006dc, Func Offset: 0x5fc
	// Line 328, Address: 0x10006e4, Func Offset: 0x604
	// Line 330, Address: 0x1000730, Func Offset: 0x650
	// Line 331, Address: 0x100075c, Func Offset: 0x67c
	// Line 334, Address: 0x1000768, Func Offset: 0x688
	// Line 335, Address: 0x1000790, Func Offset: 0x6b0
	// Line 336, Address: 0x10007b8, Func Offset: 0x6d8
	// Line 337, Address: 0x10007e0, Func Offset: 0x700
	// Line 339, Address: 0x1000800, Func Offset: 0x720
	// Line 340, Address: 0x1000810, Func Offset: 0x730
	// Line 341, Address: 0x100086c, Func Offset: 0x78c
	// Line 343, Address: 0x1000874, Func Offset: 0x794
	// Line 345, Address: 0x10008b8, Func Offset: 0x7d8
	// Line 348, Address: 0x10008c4, Func Offset: 0x7e4
	// Line 352, Address: 0x10008cc, Func Offset: 0x7ec
	// Line 353, Address: 0x10008e0, Func Offset: 0x800
	// Line 354, Address: 0x10008f8, Func Offset: 0x818
	// Line 356, Address: 0x1000908, Func Offset: 0x828
	// Line 357, Address: 0x1000914, Func Offset: 0x834
	// Line 358, Address: 0x1000930, Func Offset: 0x850
	// Line 361, Address: 0x100093c, Func Offset: 0x85c
	// Line 362, Address: 0x1000944, Func Offset: 0x864
	// Line 364, Address: 0x1000974, Func Offset: 0x894
	// Line 366, Address: 0x1000984, Func Offset: 0x8a4
	// Line 367, Address: 0x1000990, Func Offset: 0x8b0
	// Line 368, Address: 0x10009b0, Func Offset: 0x8d0
	// Line 372, Address: 0x10009b8, Func Offset: 0x8d8
	// Line 373, Address: 0x10009c0, Func Offset: 0x8e0
	// Line 374, Address: 0x10009d8, Func Offset: 0x8f8
	// Line 376, Address: 0x10009ec, Func Offset: 0x90c
	// Line 377, Address: 0x1000a10, Func Offset: 0x930
	// Line 378, Address: 0x1000a1c, Func Offset: 0x93c
	// Line 379, Address: 0x1000a2c, Func Offset: 0x94c
	// Line 380, Address: 0x1000a34, Func Offset: 0x954
	// Line 382, Address: 0x1000a48, Func Offset: 0x968
	// Line 384, Address: 0x1000a58, Func Offset: 0x978
	// Line 385, Address: 0x1000a8c, Func Offset: 0x9ac
	// Line 386, Address: 0x1000aa0, Func Offset: 0x9c0
	// Line 388, Address: 0x1000ab4, Func Offset: 0x9d4
	// Line 390, Address: 0x1000abc, Func Offset: 0x9dc
	// Line 392, Address: 0x1000ad0, Func Offset: 0x9f0
	// Line 393, Address: 0x1000adc, Func Offset: 0x9fc
	// Line 394, Address: 0x1000af4, Func Offset: 0xa14
	// Line 395, Address: 0x1000b0c, Func Offset: 0xa2c
	// Line 396, Address: 0x1000b24, Func Offset: 0xa44
	// Line 397, Address: 0x1000b2c, Func Offset: 0xa4c
	// Line 400, Address: 0x1000b38, Func Offset: 0xa58
	// Line 401, Address: 0x1000b48, Func Offset: 0xa68
	// Line 402, Address: 0x1000b60, Func Offset: 0xa80
	// Line 403, Address: 0x1000b70, Func Offset: 0xa90
	// Line 404, Address: 0x1000b98, Func Offset: 0xab8
	// Line 405, Address: 0x1000bb8, Func Offset: 0xad8
	// Line 407, Address: 0x1000bc0, Func Offset: 0xae0
	// Line 409, Address: 0x1000be0, Func Offset: 0xb00
	// Line 410, Address: 0x1000bec, Func Offset: 0xb0c
	// Line 411, Address: 0x1000bf4, Func Offset: 0xb14
	// Line 412, Address: 0x1000c0c, Func Offset: 0xb2c
	// Line 413, Address: 0x1000c1c, Func Offset: 0xb3c
	// Line 414, Address: 0x1000c44, Func Offset: 0xb64
	// Line 415, Address: 0x1000c64, Func Offset: 0xb84
	// Line 417, Address: 0x1000c6c, Func Offset: 0xb8c
	// Line 419, Address: 0x1000c8c, Func Offset: 0xbac
	// Line 425, Address: 0x1000c98, Func Offset: 0xbb8
	// Line 426, Address: 0x1000ca8, Func Offset: 0xbc8
	// Line 427, Address: 0x1000cb4, Func Offset: 0xbd4
	// Line 429, Address: 0x1000cbc, Func Offset: 0xbdc
	// Line 432, Address: 0x1000cc4, Func Offset: 0xbe4
	// Line 433, Address: 0x1000ccc, Func Offset: 0xbec
	// Line 434, Address: 0x1000cd0, Func Offset: 0xbf0
	// Func End, Address: 0x1000cec, Func Offset: 0xc0c
}

// 
// Start address: 0x1000cf0
void game_init()
{
	int i;
	int j;
	int k;
	int l;
	int round;
	int zone;
	unsigned int Time;
	// Line 442, Address: 0x1000cf0, Func Offset: 0
	// Line 448, Address: 0x1000d14, Func Offset: 0x24
	// Line 468, Address: 0x1000d2c, Func Offset: 0x3c
	// Line 470, Address: 0x1000d44, Func Offset: 0x54
	// Line 471, Address: 0x1000d54, Func Offset: 0x64
	// Line 472, Address: 0x1000d64, Func Offset: 0x74
	// Line 473, Address: 0x1000d78, Func Offset: 0x88
	// Line 474, Address: 0x1000d88, Func Offset: 0x98
	// Line 477, Address: 0x1000d90, Func Offset: 0xa0
	// Line 478, Address: 0x1000db4, Func Offset: 0xc4
	// Line 479, Address: 0x1000dc8, Func Offset: 0xd8
	// Line 480, Address: 0x1000dec, Func Offset: 0xfc
	// Line 482, Address: 0x1000e10, Func Offset: 0x120
	// Line 487, Address: 0x1000e28, Func Offset: 0x138
	// Line 488, Address: 0x1000e34, Func Offset: 0x144
	// Line 489, Address: 0x1000e3c, Func Offset: 0x14c
	// Line 490, Address: 0x1000e48, Func Offset: 0x158
	// Line 491, Address: 0x1000e58, Func Offset: 0x168
	// Line 494, Address: 0x1000ea4, Func Offset: 0x1b4
	// Line 496, Address: 0x1000eac, Func Offset: 0x1bc
	// Line 500, Address: 0x1000ee8, Func Offset: 0x1f8
	// Line 501, Address: 0x1000ef8, Func Offset: 0x208
	// Line 503, Address: 0x1000f04, Func Offset: 0x214
	// Line 504, Address: 0x1000f0c, Func Offset: 0x21c
	// Line 505, Address: 0x1000f1c, Func Offset: 0x22c
	// Line 506, Address: 0x1000f30, Func Offset: 0x240
	// Line 508, Address: 0x1000f3c, Func Offset: 0x24c
	// Line 509, Address: 0x1000f4c, Func Offset: 0x25c
	// Line 510, Address: 0x1000fb8, Func Offset: 0x2c8
	// Line 511, Address: 0x1001038, Func Offset: 0x348
	// Line 513, Address: 0x1001040, Func Offset: 0x350
	// Line 514, Address: 0x100108c, Func Offset: 0x39c
	// Line 516, Address: 0x10010ec, Func Offset: 0x3fc
	// Line 518, Address: 0x10010fc, Func Offset: 0x40c
	// Line 519, Address: 0x100110c, Func Offset: 0x41c
	// Line 520, Address: 0x100114c, Func Offset: 0x45c
	// Line 521, Address: 0x10011a4, Func Offset: 0x4b4
	// Line 524, Address: 0x10011f4, Func Offset: 0x504
	// Line 525, Address: 0x10011f8, Func Offset: 0x508
	// Line 526, Address: 0x1001204, Func Offset: 0x514
	// Line 527, Address: 0x1001210, Func Offset: 0x520
	// Line 528, Address: 0x1001250, Func Offset: 0x560
	// Line 529, Address: 0x1001260, Func Offset: 0x570
	// Line 530, Address: 0x100126c, Func Offset: 0x57c
	// Line 534, Address: 0x1001278, Func Offset: 0x588
	// Line 536, Address: 0x1001280, Func Offset: 0x590
	// Line 537, Address: 0x10012b0, Func Offset: 0x5c0
	// Line 538, Address: 0x10012f8, Func Offset: 0x608
	// Line 545, Address: 0x1001338, Func Offset: 0x648
	// Line 546, Address: 0x1001344, Func Offset: 0x654
	// Line 547, Address: 0x100134c, Func Offset: 0x65c
	// Line 548, Address: 0x1001354, Func Offset: 0x664
	// Line 549, Address: 0x100135c, Func Offset: 0x66c
	// Line 550, Address: 0x1001370, Func Offset: 0x680
	// Func End, Address: 0x100139c, Func Offset: 0x6ac
}

// 
// Start address: 0x10013a0
void DLL_meminit(char*** pBufTbl, void** pFuncTbl)
{
	// Line 559, Address: 0x10013a0, Func Offset: 0
	// Line 562, Address: 0x10013ac, Func Offset: 0xc
	// Line 563, Address: 0x10013b8, Func Offset: 0x18
	// Line 564, Address: 0x10013c4, Func Offset: 0x24
	// Line 565, Address: 0x10013d0, Func Offset: 0x30
	// Line 566, Address: 0x10013dc, Func Offset: 0x3c
	// Line 567, Address: 0x10013f4, Func Offset: 0x54
	// Line 568, Address: 0x100140c, Func Offset: 0x6c
	// Line 569, Address: 0x1001418, Func Offset: 0x78
	// Line 570, Address: 0x1001430, Func Offset: 0x90
	// Line 571, Address: 0x1001448, Func Offset: 0xa8
	// Line 572, Address: 0x1001460, Func Offset: 0xc0
	// Line 574, Address: 0x100146c, Func Offset: 0xcc
	// Line 575, Address: 0x1001484, Func Offset: 0xe4
	// Line 576, Address: 0x100149c, Func Offset: 0xfc
	// Line 577, Address: 0x10014a8, Func Offset: 0x108
	// Line 578, Address: 0x10014b4, Func Offset: 0x114
	// Line 579, Address: 0x10014c0, Func Offset: 0x120
	// Line 580, Address: 0x10014cc, Func Offset: 0x12c
	// Line 581, Address: 0x10014d8, Func Offset: 0x138
	// Line 582, Address: 0x10014f0, Func Offset: 0x150
	// Line 583, Address: 0x1001508, Func Offset: 0x168
	// Line 584, Address: 0x1001520, Func Offset: 0x180
	// Line 585, Address: 0x1001538, Func Offset: 0x198
	// Line 586, Address: 0x1001550, Func Offset: 0x1b0
	// Line 587, Address: 0x1001568, Func Offset: 0x1c8
	// Line 588, Address: 0x1001580, Func Offset: 0x1e0
	// Line 590, Address: 0x100158c, Func Offset: 0x1ec
	// Line 591, Address: 0x10015a4, Func Offset: 0x204
	// Line 592, Address: 0x10015bc, Func Offset: 0x21c
	// Line 593, Address: 0x10015d4, Func Offset: 0x234
	// Line 594, Address: 0x10015ec, Func Offset: 0x24c
	// Line 595, Address: 0x1001604, Func Offset: 0x264
	// Line 596, Address: 0x100161c, Func Offset: 0x27c
	// Line 597, Address: 0x1001634, Func Offset: 0x294
	// Line 598, Address: 0x100164c, Func Offset: 0x2ac
	// Line 599, Address: 0x1001664, Func Offset: 0x2c4
	// Line 600, Address: 0x100167c, Func Offset: 0x2dc
	// Line 601, Address: 0x1001694, Func Offset: 0x2f4
	// Line 602, Address: 0x10016ac, Func Offset: 0x30c
	// Line 603, Address: 0x10016c4, Func Offset: 0x324
	// Line 604, Address: 0x10016dc, Func Offset: 0x33c
	// Line 605, Address: 0x10016f4, Func Offset: 0x354
	// Line 606, Address: 0x100170c, Func Offset: 0x36c
	// Line 607, Address: 0x1001718, Func Offset: 0x378
	// Line 608, Address: 0x1001730, Func Offset: 0x390
	// Line 609, Address: 0x1001748, Func Offset: 0x3a8
	// Line 610, Address: 0x1001760, Func Offset: 0x3c0
	// Line 611, Address: 0x1001778, Func Offset: 0x3d8
	// Line 612, Address: 0x1001790, Func Offset: 0x3f0
	// Line 615, Address: 0x10017a8, Func Offset: 0x408
	// Line 616, Address: 0x10017c4, Func Offset: 0x424
	// Line 617, Address: 0x10017e0, Func Offset: 0x440
	// Line 618, Address: 0x10017fc, Func Offset: 0x45c
	// Line 619, Address: 0x1001818, Func Offset: 0x478
	// Line 620, Address: 0x1001834, Func Offset: 0x494
	// Line 621, Address: 0x1001850, Func Offset: 0x4b0
	// Line 622, Address: 0x1001868, Func Offset: 0x4c8
	// Line 627, Address: 0x1001880, Func Offset: 0x4e0
	// Line 628, Address: 0x100188c, Func Offset: 0x4ec
	// Line 630, Address: 0x1001898, Func Offset: 0x4f8
	// Line 632, Address: 0x10018b0, Func Offset: 0x510
	// Line 633, Address: 0x10018cc, Func Offset: 0x52c
	// Line 638, Address: 0x10018e8, Func Offset: 0x548
	// Func End, Address: 0x10018f4, Func Offset: 0x554
}

// 
// Start address: 0x1001900
void DLL_memfree()
{
	// Line 646, Address: 0x1001900, Func Offset: 0
	// Func End, Address: 0x1001908, Func Offset: 0x8
}

