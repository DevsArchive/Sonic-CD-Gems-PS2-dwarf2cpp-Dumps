typedef struct hmx_grid;
typedef struct hmx_bitmap;
typedef struct hmx_renderer_base;
typedef struct hmx_environment;
typedef struct hmx_sprite;
typedef struct draw_context;
typedef struct _anon0;
typedef struct ld_pack_header;
typedef struct ld_sprite_inf;
typedef struct _anon1;
typedef struct ld_scroll_header;
typedef struct ld_sprite_header;
typedef struct ld_bitmap_inf;
typedef struct hmx_renderer_context;
typedef struct hmx_ddagrid;
typedef struct hmx_surface;
typedef struct tagPOINT;
typedef struct hmx_background;

typedef void(*type_0)(hmx_environment*, hmx_grid*);
typedef hmx_renderer_base*(*type_2)(hmx_grid*);
typedef void(*type_3)(void*, void*, int, int, int, int, int);
typedef int(*type_4)(char*);
typedef int(*type_5)(int, void*, int);
typedef void*(*type_6)(hmx_environment*, char*);
typedef void(*type_7)();
typedef int(*type_8)(int);
typedef void(*type_10)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef void(*type_11)(int);
typedef hmx_bitmap*(*type_13)(hmx_environment*, int, int);
typedef void(*type_16)(hmx_renderer_context*);
typedef void(*type_18)(hmx_environment*, hmx_bitmap*);
typedef void(*type_19)(hmx_renderer_context*, hmx_surface*);
typedef void*(*type_20)(hmx_bitmap*);
typedef hmx_renderer_base*(*type_21)(hmx_sprite*);
typedef void*(*type_23)(int);
typedef void(*type_24)(hmx_bitmap*, int);
typedef void(*type_25)(hmx_sprite*, int, int);
typedef void(*type_26)(void*);
typedef void(*type_27)(hmx_environment*, void*);
typedef void(*type_29)(hmx_sprite*, hmx_bitmap*);
typedef hmx_grid*(*type_32)(hmx_environment*, int, int, int, int);
typedef void(*type_34)(hmx_sprite*, int);

typedef hmx_bitmap* type_1[512];
typedef ld_sprite_inf type_9[1];
typedef _anon0 type_12[0];
typedef short type_14[4];
typedef ld_bitmap_inf type_15[1];
typedef _anon1 type_17[0];
typedef int type_22[512];
typedef hmx_bitmap* type_28[1000];
typedef int type_30[1000];
typedef hmx_grid* type_31[3];
typedef hmx_bitmap* type_33[2048];
typedef char type_35[250];
typedef hmx_bitmap* type_36[2048];
typedef hmx_grid* type_37[8];

struct hmx_grid
{
};

struct hmx_bitmap
{
};

struct hmx_renderer_base
{
};

struct hmx_environment
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

struct _anon0
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

struct ld_pack_header
{
	int type;
	int size;
	int count;
	int offset;
};

struct ld_sprite_inf
{
	short xoff;
	short yoff;
	short wx;
	short wy;
	short palette;
	short reserved;
};

struct _anon1
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

struct ld_scroll_header
{
	ld_pack_header header;
	short plt[4];
	ld_bitmap_inf bmp[1];
};

struct ld_sprite_header
{
	ld_pack_header header;
	ld_sprite_inf spr[1];
};

struct ld_bitmap_inf
{
	short wx;
	short wy;
};

struct hmx_renderer_context
{
};

struct hmx_ddagrid
{
};

struct hmx_surface
{
};

struct tagPOINT
{
	int x;
	int y;
};

struct hmx_background
{
};

void(*FlipToScreen_module)();
void(*hmx_renderer_context_draw_module)(hmx_renderer_context*, hmx_surface*);
draw_context* s_ctx;
void(*hmx_renderer_context_add_module)(hmx_renderer_context*, int, hmx_renderer_base*);
hmx_renderer_base*(*hmx_sprite_base_module)(hmx_sprite*);
hmx_renderer_base*(*hmx_grid_base_module)(hmx_grid*);
void(*hmx_renderer_context_clear_module)(hmx_renderer_context*);
void(*sMemFree)(void*);
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
void*(*sMemAlloc)(int);
int(*sGetFileSize)(int);
int(*sOpenFile)(char*);
void(*hmx_free_module)(hmx_environment*, void*);
void(*hmx_bitmap_set_transparency_module)(hmx_bitmap*, int);
void*(*hmx_bitmap_get_scan0_module)(hmx_bitmap*);
_anon0 infoSprtBmp[0];
hmx_bitmap*(*hmx_bitmap_create_module)(hmx_environment*, int, int);
void*(*ld_load_cmpfile_module)(hmx_environment*, char*);
unsigned short NUM_GRIDBMP;
_anon1 infoGridBmp[0];
void(*ld_bitmap_4to8_module)(void*, void*, int, int, int, int, int);
hmx_environment* g_env_module;
char* TileCmpFileName;
hmx_environment* g_loader_module;
void(*hmx_bitmap_release_module)(hmx_environment*, hmx_bitmap*);
unsigned short NUM_BMP;
char* SprCmpFileName;
void(*hmx_sprite_set_flags_module)(hmx_sprite*, int);
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
void(*hmx_grid_release_module)(hmx_environment*, hmx_grid*);
int sprIdx[512];
hmx_grid*(*hmx_grid_create_module)(hmx_environment*, int, int, int, int);
char ErrBuf[250];
int ErrRet;

void EAError();
void srfDraw();
void ld_bitmap_file(char* fname, void* dst, int wx, int wy, int palet);
void ld_bitmap_file2(char* fname, void* dst, int sx, int wx, int wy, int dx);
void ld_bitmap_4to8_1(void* dst, void* src, int wx, int wy, int palet, int zero_chg, int flag4);
void ld_bitmap_4to8_2(void* dst, void* src, int wx, int wy, int palet, int zero_chg, int flag4);
int ld_load_sprite2(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size);
int ld_load_sprite1(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size);
int ld_load_grid2(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size);
int OEGridBmpCreate();
void OEGridBmpDelete();
int OESprBmpCreate();
void OESprBmpDelete();
int OESprCreate(unsigned short timing);
int OESprCreateIndx(int indx);
void OESprDelete(unsigned short timing);
void OESprDeleteIndx(int indx);
void OEAllSprDelete();
int OEGridDeleteAll();
int OECreateEA();
void OEDeleteEA();
void sprCreate(int* handle);
void sprDelete(int handle);

// 
// Start address: 0x10010e0
void EAError()
{
	// Line 70, Address: 0x10010e0, Func Offset: 0
	// Line 90, Address: 0x10010e4, Func Offset: 0x4
	// Func End, Address: 0x10010f0, Func Offset: 0x10
}

// 
// Start address: 0x10010f0
void srfDraw()
{
	int i;
	// Line 93, Address: 0x10010f0, Func Offset: 0
	// Line 95, Address: 0x10010fc, Func Offset: 0xc
	// Line 97, Address: 0x1001110, Func Offset: 0x20
	// Line 113, Address: 0x100112c, Func Offset: 0x3c
	// Line 114, Address: 0x1001140, Func Offset: 0x50
	// Line 118, Address: 0x1001180, Func Offset: 0x90
	// Line 119, Address: 0x100118c, Func Offset: 0x9c
	// Line 120, Address: 0x10011a8, Func Offset: 0xb8
	// Line 131, Address: 0x1001204, Func Offset: 0x114
	// Line 134, Address: 0x1001210, Func Offset: 0x120
	// Line 136, Address: 0x1001238, Func Offset: 0x148
	// Line 137, Address: 0x1001248, Func Offset: 0x158
	// Func End, Address: 0x100125c, Func Offset: 0x16c
}

// 
// Start address: 0x1001260
void ld_bitmap_file(char* fname, void* dst, int wx, int wy, int palet)
{
	unsigned char* pDst;
	int fp;
	void* fbuf;
	unsigned char* src;
	int fsize;
	int x;
	int y;
	int iWidth;
	int iHeight;
	int iLength;
	unsigned int offset;
	// Line 146, Address: 0x1001260, Func Offset: 0
	// Line 149, Address: 0x10012a0, Func Offset: 0x40
	// Line 152, Address: 0x10012a4, Func Offset: 0x44
	// Line 154, Address: 0x10012a8, Func Offset: 0x48
	// Line 155, Address: 0x10012c0, Func Offset: 0x60
	// Line 156, Address: 0x10012cc, Func Offset: 0x6c
	// Line 157, Address: 0x10012e4, Func Offset: 0x84
	// Line 158, Address: 0x10012f4, Func Offset: 0x94
	// Line 159, Address: 0x100130c, Func Offset: 0xac
	// Line 163, Address: 0x1001334, Func Offset: 0xd4
	// Line 164, Address: 0x1001338, Func Offset: 0xd8
	// Line 165, Address: 0x1001370, Func Offset: 0x110
	// Line 166, Address: 0x10013a8, Func Offset: 0x148
	// Line 167, Address: 0x10013e4, Func Offset: 0x184
	// Line 168, Address: 0x1001408, Func Offset: 0x1a8
	// Line 170, Address: 0x1001414, Func Offset: 0x1b4
	// Line 171, Address: 0x100143c, Func Offset: 0x1dc
	// Line 172, Address: 0x1001448, Func Offset: 0x1e8
	// Line 173, Address: 0x1001454, Func Offset: 0x1f4
	// Line 174, Address: 0x1001468, Func Offset: 0x208
	// Line 175, Address: 0x1001474, Func Offset: 0x214
	// Line 176, Address: 0x1001498, Func Offset: 0x238
	// Line 178, Address: 0x10014cc, Func Offset: 0x26c
	// Line 179, Address: 0x10014d0, Func Offset: 0x270
	// Line 180, Address: 0x10014d8, Func Offset: 0x278
	// Line 182, Address: 0x10014f4, Func Offset: 0x294
	// Line 183, Address: 0x1001504, Func Offset: 0x2a4
	// Line 184, Address: 0x100150c, Func Offset: 0x2ac
	// Line 185, Address: 0x1001514, Func Offset: 0x2b4
	// Line 186, Address: 0x100151c, Func Offset: 0x2bc
	// Line 187, Address: 0x1001520, Func Offset: 0x2c0
	// Line 188, Address: 0x1001534, Func Offset: 0x2d4
	// Line 191, Address: 0x1001540, Func Offset: 0x2e0
	// Line 193, Address: 0x1001554, Func Offset: 0x2f4
	// Line 194, Address: 0x100155c, Func Offset: 0x2fc
	// Line 196, Address: 0x1001570, Func Offset: 0x310
	// Func End, Address: 0x10015a4, Func Offset: 0x344
}

// 
// Start address: 0x10015b0
void ld_bitmap_file2(char* fname, void* dst, int sx, int wx, int wy, int dx)
{
	unsigned char* pDst;
	int fp;
	void* fbuf;
	unsigned char* src;
	int i;
	int fsize;
	int x;
	int y;
	int iWidth;
	int iHeight;
	int iLength;
	unsigned int offset;
	// Line 209, Address: 0x10015b0, Func Offset: 0
	// Line 212, Address: 0x10015f4, Func Offset: 0x44
	// Line 216, Address: 0x10015f8, Func Offset: 0x48
	// Line 218, Address: 0x10015fc, Func Offset: 0x4c
	// Line 219, Address: 0x1001608, Func Offset: 0x58
	// Line 220, Address: 0x1001614, Func Offset: 0x64
	// Line 223, Address: 0x1001630, Func Offset: 0x80
	// Line 224, Address: 0x1001648, Func Offset: 0x98
	// Line 225, Address: 0x1001654, Func Offset: 0xa4
	// Line 226, Address: 0x100166c, Func Offset: 0xbc
	// Line 227, Address: 0x1001678, Func Offset: 0xc8
	// Line 228, Address: 0x1001690, Func Offset: 0xe0
	// Line 232, Address: 0x10016b8, Func Offset: 0x108
	// Line 233, Address: 0x10016bc, Func Offset: 0x10c
	// Line 234, Address: 0x10016f8, Func Offset: 0x148
	// Line 235, Address: 0x1001730, Func Offset: 0x180
	// Line 236, Address: 0x100176c, Func Offset: 0x1bc
	// Line 237, Address: 0x1001790, Func Offset: 0x1e0
	// Line 239, Address: 0x100179c, Func Offset: 0x1ec
	// Line 240, Address: 0x10017c8, Func Offset: 0x218
	// Line 241, Address: 0x10017d4, Func Offset: 0x224
	// Line 242, Address: 0x10017e0, Func Offset: 0x230
	// Line 243, Address: 0x1001804, Func Offset: 0x254
	// Line 244, Address: 0x1001814, Func Offset: 0x264
	// Line 245, Address: 0x100181c, Func Offset: 0x26c
	// Line 246, Address: 0x1001820, Func Offset: 0x270
	// Line 247, Address: 0x1001834, Func Offset: 0x284
	// Line 248, Address: 0x1001840, Func Offset: 0x290
	// Line 249, Address: 0x100184c, Func Offset: 0x29c
	// Line 250, Address: 0x1001868, Func Offset: 0x2b8
	// Line 251, Address: 0x100187c, Func Offset: 0x2cc
	// Line 252, Address: 0x1001888, Func Offset: 0x2d8
	// Line 254, Address: 0x10018a4, Func Offset: 0x2f4
	// Line 257, Address: 0x10018b0, Func Offset: 0x300
	// Line 259, Address: 0x10018c4, Func Offset: 0x314
	// Line 260, Address: 0x10018cc, Func Offset: 0x31c
	// Line 262, Address: 0x10018e0, Func Offset: 0x330
	// Func End, Address: 0x1001914, Func Offset: 0x364
}

// 
// Start address: 0x1001920
void ld_bitmap_4to8_1(void* dst, void* src, int wx, int wy, int palet, int zero_chg, int flag4)
{
	unsigned char* pDst;
	unsigned char* pSrc;
	int x;
	int y;
	// Line 272, Address: 0x1001920, Func Offset: 0
	// Line 276, Address: 0x1001950, Func Offset: 0x30
	// Line 277, Address: 0x1001954, Func Offset: 0x34
	// Line 279, Address: 0x1001958, Func Offset: 0x38
	// Line 280, Address: 0x1001964, Func Offset: 0x44
	// Line 281, Address: 0x1001970, Func Offset: 0x50
	// Line 282, Address: 0x1001990, Func Offset: 0x70
	// Line 283, Address: 0x10019c0, Func Offset: 0xa0
	// Line 284, Address: 0x10019e0, Func Offset: 0xc0
	// Line 285, Address: 0x10019f4, Func Offset: 0xd4
	// Line 286, Address: 0x1001a00, Func Offset: 0xe0
	// Line 287, Address: 0x1001a08, Func Offset: 0xe8
	// Line 288, Address: 0x1001a10, Func Offset: 0xf0
	// Line 291, Address: 0x1001a14, Func Offset: 0xf4
	// Line 293, Address: 0x1001a18, Func Offset: 0xf8
	// Line 294, Address: 0x1001a28, Func Offset: 0x108
	// Line 295, Address: 0x1001a3c, Func Offset: 0x11c
	// Line 296, Address: 0x1001a50, Func Offset: 0x130
	// Func End, Address: 0x1001a6c, Func Offset: 0x14c
}

// 
// Start address: 0x1001a70
void ld_bitmap_4to8_2(void* dst, void* src, int wx, int wy, int palet, int zero_chg, int flag4)
{
	unsigned char* pDst;
	unsigned char* pSrc;
	int x;
	int y;
	// Line 306, Address: 0x1001a70, Func Offset: 0
	// Line 310, Address: 0x1001aa0, Func Offset: 0x30
	// Line 311, Address: 0x1001aa4, Func Offset: 0x34
	// Line 313, Address: 0x1001aa8, Func Offset: 0x38
	// Line 314, Address: 0x1001ab4, Func Offset: 0x44
	// Line 315, Address: 0x1001ac0, Func Offset: 0x50
	// Line 316, Address: 0x1001ae0, Func Offset: 0x70
	// Line 317, Address: 0x1001af4, Func Offset: 0x84
	// Line 318, Address: 0x1001b24, Func Offset: 0xb4
	// Line 319, Address: 0x1001b44, Func Offset: 0xd4
	// Line 320, Address: 0x1001b4c, Func Offset: 0xdc
	// Line 322, Address: 0x1001b58, Func Offset: 0xe8
	// Line 323, Address: 0x1001b6c, Func Offset: 0xfc
	// Line 324, Address: 0x1001b78, Func Offset: 0x108
	// Line 325, Address: 0x1001b80, Func Offset: 0x110
	// Line 326, Address: 0x1001b88, Func Offset: 0x118
	// Line 329, Address: 0x1001b8c, Func Offset: 0x11c
	// Line 331, Address: 0x1001b90, Func Offset: 0x120
	// Line 332, Address: 0x1001ba0, Func Offset: 0x130
	// Line 333, Address: 0x1001bb4, Func Offset: 0x144
	// Line 334, Address: 0x1001bc8, Func Offset: 0x158
	// Func End, Address: 0x1001be4, Func Offset: 0x174
}

// 
// Start address: 0x1001bf0
int ld_load_sprite2(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size)
{
	int count;
	void* expbuf;
	ld_sprite_header* header;
	int read_count;
	unsigned char* pixbuf;
	int i;
	hmx_bitmap* bmp;
	ld_sprite_inf* s;
	int wx;
	int wy;
	int flag4;
	// Line 342, Address: 0x1001bf0, Func Offset: 0
	// Line 343, Address: 0x1001c30, Func Offset: 0x40
	// Line 345, Address: 0x1001c38, Func Offset: 0x48
	// Line 353, Address: 0x1001c3c, Func Offset: 0x4c
	// Line 354, Address: 0x1001c48, Func Offset: 0x58
	// Line 355, Address: 0x1001c58, Func Offset: 0x68
	// Line 357, Address: 0x1001c6c, Func Offset: 0x7c
	// Line 358, Address: 0x1001c88, Func Offset: 0x98
	// Line 362, Address: 0x1001c90, Func Offset: 0xa0
	// Line 363, Address: 0x1001c94, Func Offset: 0xa4
	// Line 364, Address: 0x1001c98, Func Offset: 0xa8
	// Line 365, Address: 0x1001ca8, Func Offset: 0xb8
	// Line 368, Address: 0x1001cac, Func Offset: 0xbc
	// Line 371, Address: 0x1001cb8, Func Offset: 0xc8
	// Line 372, Address: 0x1001cbc, Func Offset: 0xcc
	// Line 377, Address: 0x1001cc8, Func Offset: 0xd8
	// Line 379, Address: 0x1001ccc, Func Offset: 0xdc
	// Line 380, Address: 0x1001cd8, Func Offset: 0xe8
	// Line 382, Address: 0x1001cf8, Func Offset: 0x108
	// Line 384, Address: 0x1001d0c, Func Offset: 0x11c
	// Line 385, Address: 0x1001d18, Func Offset: 0x128
	// Line 394, Address: 0x1001d24, Func Offset: 0x134
	// Line 395, Address: 0x1001d30, Func Offset: 0x140
	// Line 396, Address: 0x1001d58, Func Offset: 0x168
	// Line 397, Address: 0x1001d64, Func Offset: 0x174
	// Line 398, Address: 0x1001d84, Func Offset: 0x194
	// Line 399, Address: 0x1001d8c, Func Offset: 0x19c
	// Line 400, Address: 0x1001d94, Func Offset: 0x1a4
	// Line 401, Address: 0x1001dcc, Func Offset: 0x1dc
	// Line 402, Address: 0x1001de4, Func Offset: 0x1f4
	// Line 405, Address: 0x1001e04, Func Offset: 0x214
	// Line 406, Address: 0x1001e10, Func Offset: 0x220
	// Line 407, Address: 0x1001e14, Func Offset: 0x224
	// Line 410, Address: 0x1001e18, Func Offset: 0x228
	// Line 411, Address: 0x1001e3c, Func Offset: 0x24c
	// Line 412, Address: 0x1001e90, Func Offset: 0x2a0
	// Line 413, Address: 0x1001e9c, Func Offset: 0x2ac
	// Line 414, Address: 0x1001ef0, Func Offset: 0x300
	// Line 415, Address: 0x1001efc, Func Offset: 0x30c
	// Line 420, Address: 0x1001f50, Func Offset: 0x360
	// Line 425, Address: 0x1001f88, Func Offset: 0x398
	// Line 427, Address: 0x1001fb0, Func Offset: 0x3c0
	// Line 428, Address: 0x1001fb8, Func Offset: 0x3c8
	// Line 431, Address: 0x1001fbc, Func Offset: 0x3cc
	// Line 433, Address: 0x1001fd4, Func Offset: 0x3e4
	// Line 434, Address: 0x1001fe4, Func Offset: 0x3f4
	// Line 481, Address: 0x1001ff4, Func Offset: 0x404
	// Line 485, Address: 0x1001ff8, Func Offset: 0x408
	// Line 486, Address: 0x1002000, Func Offset: 0x410
	// Line 489, Address: 0x1002018, Func Offset: 0x428
	// Line 490, Address: 0x100201c, Func Offset: 0x42c
	// Func End, Address: 0x1002050, Func Offset: 0x460
}

// 
// Start address: 0x1002050
int ld_load_sprite1(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size)
{
	int count;
	void* expbuf;
	ld_sprite_header* header;
	int read_count;
	unsigned char* pixbuf;
	int i;
	ld_sprite_inf* s;
	int flag4;
	int wx;
	int wy;
	hmx_bitmap* bmp;
	// Line 498, Address: 0x1002050, Func Offset: 0
	// Line 499, Address: 0x1002090, Func Offset: 0x40
	// Line 501, Address: 0x1002098, Func Offset: 0x48
	// Line 509, Address: 0x100209c, Func Offset: 0x4c
	// Line 510, Address: 0x10020a8, Func Offset: 0x58
	// Line 511, Address: 0x10020b8, Func Offset: 0x68
	// Line 513, Address: 0x10020cc, Func Offset: 0x7c
	// Line 514, Address: 0x10020e8, Func Offset: 0x98
	// Line 518, Address: 0x10020f0, Func Offset: 0xa0
	// Line 519, Address: 0x10020f4, Func Offset: 0xa4
	// Line 520, Address: 0x10020f8, Func Offset: 0xa8
	// Line 521, Address: 0x1002108, Func Offset: 0xb8
	// Line 524, Address: 0x100210c, Func Offset: 0xbc
	// Line 526, Address: 0x1002118, Func Offset: 0xc8
	// Line 527, Address: 0x1002124, Func Offset: 0xd4
	// Line 529, Address: 0x1002138, Func Offset: 0xe8
	// Line 530, Address: 0x100213c, Func Offset: 0xec
	// Line 531, Address: 0x1002148, Func Offset: 0xf8
	// Line 535, Address: 0x1002154, Func Offset: 0x104
	// Line 536, Address: 0x1002180, Func Offset: 0x130
	// Line 538, Address: 0x10021a0, Func Offset: 0x150
	// Line 539, Address: 0x10021ac, Func Offset: 0x15c
	// Line 540, Address: 0x10021b0, Func Offset: 0x160
	// Line 543, Address: 0x10021b4, Func Offset: 0x164
	// Line 545, Address: 0x1002200, Func Offset: 0x1b0
	// Line 547, Address: 0x1002228, Func Offset: 0x1d8
	// Line 548, Address: 0x1002230, Func Offset: 0x1e0
	// Line 551, Address: 0x1002234, Func Offset: 0x1e4
	// Line 553, Address: 0x100224c, Func Offset: 0x1fc
	// Line 554, Address: 0x100225c, Func Offset: 0x20c
	// Line 556, Address: 0x100226c, Func Offset: 0x21c
	// Line 560, Address: 0x1002270, Func Offset: 0x220
	// Line 561, Address: 0x1002278, Func Offset: 0x228
	// Line 564, Address: 0x1002290, Func Offset: 0x240
	// Line 565, Address: 0x1002294, Func Offset: 0x244
	// Func End, Address: 0x10022c8, Func Offset: 0x278
}

// 
// Start address: 0x10022d0
int ld_load_grid2(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size)
{
	int count;
	void* expbuf;
	ld_scroll_header* header;
	int read_count;
	unsigned char* pixbuf;
	int i;
	int n;
	int palet;
	int paletcnt;
	int palet_offs;
	int wx;
	int wy;
	hmx_bitmap* bmp;
	// Line 674, Address: 0x10022d0, Func Offset: 0
	// Line 675, Address: 0x1002310, Func Offset: 0x40
	// Line 677, Address: 0x1002318, Func Offset: 0x48
	// Line 685, Address: 0x100231c, Func Offset: 0x4c
	// Line 686, Address: 0x1002320, Func Offset: 0x50
	// Line 687, Address: 0x1002324, Func Offset: 0x54
	// Line 689, Address: 0x1002328, Func Offset: 0x58
	// Line 690, Address: 0x1002334, Func Offset: 0x64
	// Line 691, Address: 0x1002344, Func Offset: 0x74
	// Line 693, Address: 0x1002358, Func Offset: 0x88
	// Line 694, Address: 0x1002374, Func Offset: 0xa4
	// Line 698, Address: 0x100237c, Func Offset: 0xac
	// Line 699, Address: 0x1002380, Func Offset: 0xb0
	// Line 700, Address: 0x1002384, Func Offset: 0xb4
	// Line 701, Address: 0x1002394, Func Offset: 0xc4
	// Line 704, Address: 0x1002398, Func Offset: 0xc8
	// Line 706, Address: 0x10023a0, Func Offset: 0xd0
	// Line 708, Address: 0x10023ac, Func Offset: 0xdc
	// Line 709, Address: 0x10023d0, Func Offset: 0x100
	// Line 711, Address: 0x10023dc, Func Offset: 0x10c
	// Line 712, Address: 0x100241c, Func Offset: 0x14c
	// Line 713, Address: 0x100243c, Func Offset: 0x16c
	// Line 715, Address: 0x100245c, Func Offset: 0x18c
	// Line 724, Address: 0x100249c, Func Offset: 0x1cc
	// Line 726, Address: 0x10024bc, Func Offset: 0x1ec
	// Line 728, Address: 0x10024d4, Func Offset: 0x204
	// Line 730, Address: 0x10024e4, Func Offset: 0x214
	// Line 731, Address: 0x100251c, Func Offset: 0x24c
	// Line 732, Address: 0x100254c, Func Offset: 0x27c
	// Line 734, Address: 0x1002568, Func Offset: 0x298
	// Line 738, Address: 0x100256c, Func Offset: 0x29c
	// Line 739, Address: 0x1002574, Func Offset: 0x2a4
	// Line 742, Address: 0x100258c, Func Offset: 0x2bc
	// Line 743, Address: 0x1002590, Func Offset: 0x2c0
	// Func End, Address: 0x10025c4, Func Offset: 0x2f4
}

// 
// Start address: 0x10025d0
int OEGridBmpCreate()
{
	int i;
	int count;
	// Line 748, Address: 0x10025d0, Func Offset: 0
	// Line 751, Address: 0x10025e0, Func Offset: 0x10
	// Line 752, Address: 0x10025ec, Func Offset: 0x1c
	// Line 753, Address: 0x10025f8, Func Offset: 0x28
	// Line 754, Address: 0x100260c, Func Offset: 0x3c
	// Line 756, Address: 0x100261c, Func Offset: 0x4c
	// Line 762, Address: 0x1002650, Func Offset: 0x80
	// Line 763, Address: 0x1002658, Func Offset: 0x88
	// Line 766, Address: 0x1002664, Func Offset: 0x94
	// Line 768, Address: 0x1002670, Func Offset: 0xa0
	// Line 769, Address: 0x1002674, Func Offset: 0xa4
	// Func End, Address: 0x100268c, Func Offset: 0xbc
}

// 
// Start address: 0x1002690
void OEGridBmpDelete()
{
	int i;
	int n;
	// Line 774, Address: 0x1002690, Func Offset: 0
	// Line 777, Address: 0x10026a0, Func Offset: 0x10
	// Line 779, Address: 0x10026ac, Func Offset: 0x1c
	// Line 781, Address: 0x10026b8, Func Offset: 0x28
	// Line 783, Address: 0x10026e8, Func Offset: 0x58
	// Line 784, Address: 0x1002728, Func Offset: 0x98
	// Line 786, Address: 0x1002750, Func Offset: 0xc0
	// Line 787, Address: 0x1002780, Func Offset: 0xf0
	// Line 788, Address: 0x100279c, Func Offset: 0x10c
	// Line 789, Address: 0x10027a8, Func Offset: 0x118
	// Line 790, Address: 0x10027b4, Func Offset: 0x124
	// Line 806, Address: 0x10027d8, Func Offset: 0x148
	// Func End, Address: 0x10027f0, Func Offset: 0x160
}

// 
// Start address: 0x10027f0
int OESprBmpCreate()
{
	int i;
	int count;
	// Line 811, Address: 0x10027f0, Func Offset: 0
	// Line 815, Address: 0x1002800, Func Offset: 0x10
	// Line 816, Address: 0x100280c, Func Offset: 0x1c
	// Line 817, Address: 0x1002818, Func Offset: 0x28
	// Line 818, Address: 0x100282c, Func Offset: 0x3c
	// Line 819, Address: 0x1002840, Func Offset: 0x50
	// Line 829, Address: 0x1002850, Func Offset: 0x60
	// Line 836, Address: 0x1002884, Func Offset: 0x94
	// Line 837, Address: 0x100288c, Func Offset: 0x9c
	// Line 840, Address: 0x1002898, Func Offset: 0xa8
	// Line 841, Address: 0x10028a4, Func Offset: 0xb4
	// Line 842, Address: 0x10028b0, Func Offset: 0xc0
	// Line 843, Address: 0x10028d8, Func Offset: 0xe8
	// Line 845, Address: 0x10028f4, Func Offset: 0x104
	// Line 846, Address: 0x10028f8, Func Offset: 0x108
	// Func End, Address: 0x1002910, Func Offset: 0x120
}

// 
// Start address: 0x1002910
void OESprBmpDelete()
{
	int i;
	// Line 851, Address: 0x1002910, Func Offset: 0
	// Line 854, Address: 0x100291c, Func Offset: 0xc
	// Line 855, Address: 0x1002928, Func Offset: 0x18
	// Line 856, Address: 0x1002934, Func Offset: 0x24
	// Line 857, Address: 0x1002960, Func Offset: 0x50
	// Line 858, Address: 0x1002974, Func Offset: 0x64
	// Line 859, Address: 0x1002988, Func Offset: 0x78
	// Line 860, Address: 0x1002998, Func Offset: 0x88
	// Func End, Address: 0x10029ac, Func Offset: 0x9c
}

// 
// Start address: 0x10029b0
int OESprCreate(unsigned short timing)
{
	int i;
	// Line 865, Address: 0x10029b0, Func Offset: 0
	// Line 868, Address: 0x10029c0, Func Offset: 0x10
	// Line 870, Address: 0x10029cc, Func Offset: 0x1c
	// Line 872, Address: 0x10029f4, Func Offset: 0x44
	// Line 874, Address: 0x1002a14, Func Offset: 0x64
	// Line 875, Address: 0x1002a30, Func Offset: 0x80
	// Line 876, Address: 0x1002a98, Func Offset: 0xe8
	// Line 877, Address: 0x1002aec, Func Offset: 0x13c
	// Line 878, Address: 0x1002b30, Func Offset: 0x180
	// Line 879, Address: 0x1002b78, Func Offset: 0x1c8
	// Line 881, Address: 0x1002b94, Func Offset: 0x1e4
	// Line 900, Address: 0x1002b98, Func Offset: 0x1e8
	// Func End, Address: 0x1002bac, Func Offset: 0x1fc
}

// 
// Start address: 0x1002bb0
int OESprCreateIndx(int indx)
{
	// Line 905, Address: 0x1002bb0, Func Offset: 0
	// Line 907, Address: 0x1002bbc, Func Offset: 0xc
	// Line 908, Address: 0x1002be0, Func Offset: 0x30
	// Line 909, Address: 0x1002bec, Func Offset: 0x3c
	// Line 910, Address: 0x1002c0c, Func Offset: 0x5c
	// Line 911, Address: 0x1002c80, Func Offset: 0xd0
	// Line 912, Address: 0x1002cdc, Func Offset: 0x12c
	// Line 913, Address: 0x1002d24, Func Offset: 0x174
	// Line 914, Address: 0x1002d74, Func Offset: 0x1c4
	// Line 927, Address: 0x1002d78, Func Offset: 0x1c8
	// Func End, Address: 0x1002d88, Func Offset: 0x1d8
}

// 
// Start address: 0x1002d90
void OESprDelete(unsigned short timing)
{
	int i;
	// Line 932, Address: 0x1002d90, Func Offset: 0
	// Line 935, Address: 0x1002da0, Func Offset: 0x10
	// Line 937, Address: 0x1002dac, Func Offset: 0x1c
	// Line 939, Address: 0x1002dd4, Func Offset: 0x44
	// Line 941, Address: 0x1002df4, Func Offset: 0x64
	// Line 942, Address: 0x1002e38, Func Offset: 0xa8
	// Line 943, Address: 0x1002e7c, Func Offset: 0xec
	// Line 944, Address: 0x1002ea8, Func Offset: 0x118
	// Line 945, Address: 0x1002ec8, Func Offset: 0x138
	// Line 947, Address: 0x1002ee0, Func Offset: 0x150
	// Line 962, Address: 0x1002efc, Func Offset: 0x16c
	// Func End, Address: 0x1002f10, Func Offset: 0x180
}

// 
// Start address: 0x1002f10
void OESprDeleteIndx(int indx)
{
	// Line 967, Address: 0x1002f10, Func Offset: 0
	// Line 971, Address: 0x1002f1c, Func Offset: 0xc
	// Line 973, Address: 0x1002f40, Func Offset: 0x30
	// Line 974, Address: 0x1002f88, Func Offset: 0x78
	// Line 975, Address: 0x1002fd0, Func Offset: 0xc0
	// Line 976, Address: 0x1003000, Func Offset: 0xf0
	// Line 977, Address: 0x1003024, Func Offset: 0x114
	// Line 990, Address: 0x1003040, Func Offset: 0x130
	// Func End, Address: 0x1003050, Func Offset: 0x140
}

// 
// Start address: 0x1003050
void OEAllSprDelete()
{
	int i;
	// Line 995, Address: 0x1003050, Func Offset: 0
	// Line 998, Address: 0x100305c, Func Offset: 0xc
	// Line 1000, Address: 0x1003068, Func Offset: 0x18
	// Line 1002, Address: 0x1003088, Func Offset: 0x38
	// Line 1003, Address: 0x10030cc, Func Offset: 0x7c
	// Line 1004, Address: 0x1003110, Func Offset: 0xc0
	// Line 1005, Address: 0x100313c, Func Offset: 0xec
	// Line 1006, Address: 0x100315c, Func Offset: 0x10c
	// Line 1008, Address: 0x1003174, Func Offset: 0x124
	// Line 1009, Address: 0x1003190, Func Offset: 0x140
	// Func End, Address: 0x10031a4, Func Offset: 0x154
}

// 
// Start address: 0x10031b0
int OEGridDeleteAll()
{
	int i;
	// Line 1012, Address: 0x10031b0, Func Offset: 0
	// Line 1014, Address: 0x10031bc, Func Offset: 0xc
	// Line 1015, Address: 0x10031c8, Func Offset: 0x18
	// Line 1016, Address: 0x10031f4, Func Offset: 0x44
	// Line 1017, Address: 0x1003208, Func Offset: 0x58
	// Line 1019, Address: 0x1003218, Func Offset: 0x68
	// Line 1020, Address: 0x100321c, Func Offset: 0x6c
	// Func End, Address: 0x1003230, Func Offset: 0x80
}

// 
// Start address: 0x1003230
int OECreateEA()
{
	int i;
	// Line 1025, Address: 0x1003230, Func Offset: 0
	// Line 1027, Address: 0x100323c, Func Offset: 0xc
	// Line 1028, Address: 0x1003248, Func Offset: 0x18
	// Line 1029, Address: 0x100326c, Func Offset: 0x3c
	// Line 1030, Address: 0x1003274, Func Offset: 0x44
	// Line 1031, Address: 0x1003290, Func Offset: 0x60
	// Line 1034, Address: 0x10032ac, Func Offset: 0x7c
	// Line 1035, Address: 0x10032b0, Func Offset: 0x80
	// Func End, Address: 0x10032c4, Func Offset: 0x94
}

// 
// Start address: 0x10032d0
void OEDeleteEA()
{
	int i;
	// Line 1040, Address: 0x10032d0, Func Offset: 0
	// Line 1042, Address: 0x10032dc, Func Offset: 0xc
	// Line 1043, Address: 0x10032e4, Func Offset: 0x14
	// Line 1044, Address: 0x10032ec, Func Offset: 0x1c
	// Line 1045, Address: 0x10032f4, Func Offset: 0x24
	// Line 1046, Address: 0x10032fc, Func Offset: 0x2c
	// Line 1047, Address: 0x1003308, Func Offset: 0x38
	// Line 1051, Address: 0x1003344, Func Offset: 0x74
	// Line 1053, Address: 0x1003354, Func Offset: 0x84
	// Line 1055, Address: 0x1003360, Func Offset: 0x90
	// Func End, Address: 0x1003374, Func Offset: 0xa4
}

// 
// Start address: 0x1003380
void sprCreate(int* handle)
{
	int i;
	// Line 1058, Address: 0x1003380, Func Offset: 0
	// Line 1060, Address: 0x100338c, Func Offset: 0xc
	// Line 1061, Address: 0x1003398, Func Offset: 0x18
	// Line 1062, Address: 0x10033b4, Func Offset: 0x34
	// Line 1063, Address: 0x10033cc, Func Offset: 0x4c
	// Line 1071, Address: 0x10033d4, Func Offset: 0x54
	// Line 1073, Address: 0x10033dc, Func Offset: 0x5c
	// Line 1074, Address: 0x10033ec, Func Offset: 0x6c
	// Func End, Address: 0x10033fc, Func Offset: 0x7c
}

// 
// Start address: 0x1003400
void sprDelete(int handle)
{
	// Line 1077, Address: 0x1003400, Func Offset: 0
	// Line 1085, Address: 0x1003408, Func Offset: 0x8
	// Line 1086, Address: 0x100342c, Func Offset: 0x2c
	// Line 1087, Address: 0x1003444, Func Offset: 0x44
	// Func End, Address: 0x1003450, Func Offset: 0x50
}

