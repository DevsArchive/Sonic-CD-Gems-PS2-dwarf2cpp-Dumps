typedef struct hmx_environment;
typedef struct _anon0;
typedef struct hmx_grid;
typedef struct hmx_bitmap;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct _anon1;
typedef struct _anon2;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct hmx_sprite;
typedef struct tagPOINT;

typedef hmx_grid*(*type_0)(hmx_environment*, int, int, int, int);
typedef void(*type_1)(hmx_environment*, hmx_grid*);
typedef void(*type_2)(hmx_grid*, int, int, int, int);
typedef void(*type_3)(hmx_grid*, int, int, hmx_bitmap*, int);

typedef hmx_bitmap* type_4[1000];
typedef int type_5[1000];
typedef hmx_grid* type_6[3];
typedef hmx_bitmap* type_7[2048];
typedef hmx_bitmap* type_8[2048];
typedef hmx_grid* type_9[8];
typedef _anon0 type_10[0];
typedef hmx_bitmap* type_11[512];

struct hmx_environment
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

struct hmx_grid
{
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

struct hmx_sprite
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
void(*hmx_grid_set_tile_module)(hmx_grid*, int, int, hmx_bitmap*, int);
hmx_grid*(*hmx_grid_create_module)(hmx_environment*, int, int, int, int);
hmx_environment* g_env_module;
void(*hmx_grid_release_module)(hmx_environment*, hmx_grid*);

int OEGridCreate(unsigned short indx);
void OEGridDelete(unsigned short indx);
void OEAllGridDelete();

// 
// Start address: 0x1000d50
int OEGridCreate(unsigned short indx)
{
	_anon2 loc;
	_anon1 rectwh;
	unsigned short x;
	unsigned short y;
	// Line 31, Address: 0x1000d50, Func Offset: 0
	// Line 39, Address: 0x1000d64, Func Offset: 0x14
	// Line 43, Address: 0x1000d74, Func Offset: 0x24
	// Line 44, Address: 0x1000db8, Func Offset: 0x68
	// Line 49, Address: 0x1000dfc, Func Offset: 0xac
	// Line 51, Address: 0x1000e08, Func Offset: 0xb8
	// Line 52, Address: 0x1000e0c, Func Offset: 0xbc
	// Line 54, Address: 0x1000e18, Func Offset: 0xc8
	// Line 56, Address: 0x1000e1c, Func Offset: 0xcc
	// Line 57, Address: 0x1000e7c, Func Offset: 0x12c
	// Line 58, Address: 0x1000e94, Func Offset: 0x144
	// Line 63, Address: 0x1000eac, Func Offset: 0x15c
	// Line 64, Address: 0x1000eb0, Func Offset: 0x160
	// Line 65, Address: 0x1000eb4, Func Offset: 0x164
	// Line 66, Address: 0x1000eec, Func Offset: 0x19c
	// Line 68, Address: 0x1000f24, Func Offset: 0x1d4
	// Line 70, Address: 0x1000f60, Func Offset: 0x210
	// Line 71, Address: 0x1000f64, Func Offset: 0x214
	// Func End, Address: 0x1000f7c, Func Offset: 0x22c
}

// 
// Start address: 0x1000f80
void OEGridDelete(unsigned short indx)
{
	// Line 75, Address: 0x1000f80, Func Offset: 0
	// Line 76, Address: 0x1000f8c, Func Offset: 0xc
	// Line 79, Address: 0x1000fbc, Func Offset: 0x3c
	// Line 80, Address: 0x1000ff0, Func Offset: 0x70
	// Line 81, Address: 0x100100c, Func Offset: 0x8c
	// Line 85, Address: 0x1001034, Func Offset: 0xb4
	// Line 87, Address: 0x1001044, Func Offset: 0xc4
	// Line 90, Address: 0x1001074, Func Offset: 0xf4
	// Line 93, Address: 0x100109c, Func Offset: 0x11c
	// Func End, Address: 0x10010ac, Func Offset: 0x12c
}

// 
// Start address: 0x10010b0
void OEAllGridDelete()
{
	// Line 97, Address: 0x10010b0, Func Offset: 0
	// Line 98, Address: 0x10010b8, Func Offset: 0x8
	// Line 99, Address: 0x10010c4, Func Offset: 0x14
	// Func End, Address: 0x10010d4, Func Offset: 0x24
}

