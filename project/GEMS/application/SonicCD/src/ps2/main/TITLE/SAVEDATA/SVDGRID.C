typedef struct hmx_grid;
typedef struct hmx_environment;
typedef struct hmx_sprite;
typedef struct _anon0;
typedef struct draw_context;
typedef struct hmx_bitmap;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct _anon1;
typedef struct _anon2;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct tagPOINT;

typedef hmx_grid*(*type_0)(hmx_environment*, int, int, int, int);
typedef void(*type_1)(hmx_environment*, hmx_grid*);
typedef void(*type_2)(hmx_grid*, int, int);
typedef void(*type_3)(hmx_grid*, int, int, int, int);
typedef void(*type_4)(hmx_grid*, int, int, hmx_bitmap*, int);

typedef hmx_bitmap* type_5[1000];
typedef int type_6[1000];
typedef hmx_grid* type_7[3];
typedef hmx_bitmap* type_8[2048];
typedef hmx_bitmap* type_9[2048];
typedef hmx_grid* type_10[8];
typedef hmx_bitmap* type_11[512];
typedef _anon0 type_12[0];

struct hmx_grid
{
};

struct hmx_environment
{
};

struct hmx_sprite
{
};

struct _anon0
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

struct hmx_ddagrid
{
};

struct hmx_renderer_context
{
};

struct _anon1
{
	int x;
	int y;
	int dx;
	int dy;
};

struct _anon2
{
	unsigned short mTile;
	unsigned short nTile;
};

struct hmx_surface
{
};

struct hmx_background
{
};

struct tagPOINT
{
	int x;
	int y;
};

void(*hmx_grid_set_view_module)(hmx_grid*, int, int, int, int);
draw_context* s_ctx;
_anon0 infoGridBmp[0];
void(*hmx_grid_set_position_module)(hmx_grid*, int, int);
void(*hmx_grid_set_tile_module)(hmx_grid*, int, int, hmx_bitmap*, int);
hmx_grid*(*hmx_grid_create_module)(hmx_environment*, int, int, int, int);
hmx_environment* g_env_module;
unsigned short IDX_GDBMP_BACK;
void(*hmx_grid_release_module)(hmx_environment*, hmx_grid*);

int OEGridCreate(unsigned short indx);
void OEGridDelete(unsigned short indx);
void OEAllGridDelete();

// 
// Start address: 0x10020d0
int OEGridCreate(unsigned short indx)
{
	_anon2 loc;
	_anon1 rectwh;
	unsigned short x;
	unsigned short y;
	// Line 29, Address: 0x10020d0, Func Offset: 0
	// Line 37, Address: 0x10020e4, Func Offset: 0x14
	// Line 41, Address: 0x1002100, Func Offset: 0x30
	// Line 42, Address: 0x1002144, Func Offset: 0x74
	// Line 47, Address: 0x1002188, Func Offset: 0xb8
	// Line 49, Address: 0x1002194, Func Offset: 0xc4
	// Line 50, Address: 0x1002198, Func Offset: 0xc8
	// Line 52, Address: 0x10021a4, Func Offset: 0xd4
	// Line 54, Address: 0x10021a8, Func Offset: 0xd8
	// Line 55, Address: 0x1002208, Func Offset: 0x138
	// Line 56, Address: 0x1002220, Func Offset: 0x150
	// Line 59, Address: 0x1002238, Func Offset: 0x168
	// Line 61, Address: 0x10022ac, Func Offset: 0x1dc
	// Line 62, Address: 0x10022b0, Func Offset: 0x1e0
	// Line 63, Address: 0x10022b4, Func Offset: 0x1e4
	// Line 64, Address: 0x10022ec, Func Offset: 0x21c
	// Line 66, Address: 0x1002324, Func Offset: 0x254
	// Line 68, Address: 0x1002360, Func Offset: 0x290
	// Line 69, Address: 0x1002364, Func Offset: 0x294
	// Func End, Address: 0x100237c, Func Offset: 0x2ac
}

// 
// Start address: 0x1002380
void OEGridDelete(unsigned short indx)
{
	// Line 73, Address: 0x1002380, Func Offset: 0
	// Line 74, Address: 0x100238c, Func Offset: 0xc
	// Line 77, Address: 0x10023bc, Func Offset: 0x3c
	// Line 78, Address: 0x10023f0, Func Offset: 0x70
	// Line 79, Address: 0x100240c, Func Offset: 0x8c
	// Line 83, Address: 0x1002434, Func Offset: 0xb4
	// Line 85, Address: 0x1002450, Func Offset: 0xd0
	// Line 88, Address: 0x1002480, Func Offset: 0x100
	// Line 91, Address: 0x10024a8, Func Offset: 0x128
	// Func End, Address: 0x10024b8, Func Offset: 0x138
}

// 
// Start address: 0x10024c0
void OEAllGridDelete()
{
	// Line 95, Address: 0x10024c0, Func Offset: 0
	// Line 96, Address: 0x10024c8, Func Offset: 0x8
	// Line 107, Address: 0x10024d8, Func Offset: 0x18
	// Func End, Address: 0x10024e8, Func Offset: 0x28
}

