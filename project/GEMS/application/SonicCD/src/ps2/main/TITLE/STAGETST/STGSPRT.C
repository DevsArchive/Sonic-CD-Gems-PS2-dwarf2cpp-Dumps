typedef struct hmx_grid;
typedef struct hmx_ddagrid;
typedef struct hmx_bitmap;
typedef struct hmx_sprite;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct tagPOINT;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct _anon0;
typedef struct _RECTL;

typedef void(*type_3)(hmx_sprite*, int, int);
typedef void(*type_4)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_5)(hmx_sprite*, int);

typedef hmx_grid* type_0[8];
typedef unsigned int type_1[12];
typedef hmx_bitmap* type_2[512];
typedef _anon0 type_6[0];
typedef unsigned int type_7[4];
typedef hmx_bitmap* type_8[1000];
typedef int type_9[1000];
typedef hmx_grid* type_10[3];
typedef hmx_bitmap* type_11[2048];
typedef hmx_bitmap* type_12[2048];

struct hmx_grid
{
};

struct hmx_ddagrid
{
};

struct hmx_bitmap
{
};

struct hmx_sprite
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

struct tagPOINT
{
	int x;
	int y;
};

struct hmx_surface
{
};

struct hmx_background
{
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

struct _RECTL
{
	int left;
	int top;
	int right;
	int bottom;
};

unsigned int hSprMenu[12];
draw_context* s_ctx;
void(*hmx_sprite_set_flags_module)(hmx_sprite*, int);
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
_anon0 infoSprtBmp[0];

void DeleteCharSprt(int colom);
unsigned int CreateCharSprt(int colom, char code);
void DeleteAllCharSprt();
void StrMenu(char* lpStr);

// 
// Start address: 0x1000cf0
void DeleteCharSprt(int colom)
{
	// Line 39, Address: 0x1000cf0, Func Offset: 0
	// Line 40, Address: 0x1000cfc, Func Offset: 0xc
	// Line 42, Address: 0x1000d1c, Func Offset: 0x2c
	// Line 43, Address: 0x1000d3c, Func Offset: 0x4c
	// Line 44, Address: 0x1000d68, Func Offset: 0x78
	// Line 46, Address: 0x1000d80, Func Offset: 0x90
	// Func End, Address: 0x1000d90, Func Offset: 0xa0
}

// 
// Start address: 0x1000d90
unsigned int CreateCharSprt(int colom, char code)
{
	_RECTL SprRect;
	unsigned int mask[4];
	int indx;
	tagPOINT point;
	// Line 51, Address: 0x1000d90, Func Offset: 0
	// Line 52, Address: 0x1000da4, Func Offset: 0x14
	// Line 53, Address: 0x1000dd4, Func Offset: 0x44
	// Line 58, Address: 0x1000e04, Func Offset: 0x74
	// Line 60, Address: 0x1000e24, Func Offset: 0x94
	// Line 62, Address: 0x1000e30, Func Offset: 0xa0
	// Line 63, Address: 0x1000e54, Func Offset: 0xc4
	// Line 64, Address: 0x1000e84, Func Offset: 0xf4
	// Line 66, Address: 0x1000e94, Func Offset: 0x104
	// Line 70, Address: 0x1000eb0, Func Offset: 0x120
	// Line 71, Address: 0x1000ef0, Func Offset: 0x160
	// Line 72, Address: 0x1000f00, Func Offset: 0x170
	// Line 74, Address: 0x1000f08, Func Offset: 0x178
	// Line 76, Address: 0x1000f50, Func Offset: 0x1c0
	// Line 77, Address: 0x1000fa4, Func Offset: 0x214
	// Line 78, Address: 0x1000fe8, Func Offset: 0x258
	// Line 79, Address: 0x1000fec, Func Offset: 0x25c
	// Func End, Address: 0x1001000, Func Offset: 0x270
}

// 
// Start address: 0x1001000
void DeleteAllCharSprt()
{
	int m;
	// Line 84, Address: 0x1001000, Func Offset: 0
	// Line 87, Address: 0x100100c, Func Offset: 0xc
	// Line 89, Address: 0x1001018, Func Offset: 0x18
	// Line 90, Address: 0x1001024, Func Offset: 0x24
	// Line 91, Address: 0x1001038, Func Offset: 0x38
	// Func End, Address: 0x100104c, Func Offset: 0x4c
}

// 
// Start address: 0x1001050
void StrMenu(char* lpStr)
{
	int n;
	// Line 96, Address: 0x1001050, Func Offset: 0
	// Line 97, Address: 0x1001060, Func Offset: 0x10
	// Line 99, Address: 0x1001064, Func Offset: 0x14
	// Line 101, Address: 0x100106c, Func Offset: 0x1c
	// Line 102, Address: 0x1001080, Func Offset: 0x30
	// Line 103, Address: 0x1001084, Func Offset: 0x34
	// Line 104, Address: 0x1001090, Func Offset: 0x40
	// Line 105, Address: 0x10010a0, Func Offset: 0x50
	// Func End, Address: 0x10010b4, Func Offset: 0x64
}

