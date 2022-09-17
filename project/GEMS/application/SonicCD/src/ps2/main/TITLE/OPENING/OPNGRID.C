typedef struct hmx_environment;
typedef struct hmx_bitmap;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct hmx_grid;
typedef struct _anon0;
typedef struct draw_context;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct hmx_sprite;
typedef struct tagPOINT;
typedef struct _anon1;
typedef struct _anon2;

typedef hmx_grid*(*type_2)(hmx_environment*, int, int, int, int);
typedef void(*type_3)(hmx_environment*, hmx_grid*);
typedef hmx_ddagrid*(*type_4)(hmx_environment*, int, int, int, int, int, int);
typedef void(*type_7)(hmx_grid*, int, int);
typedef void(*type_11)(hmx_grid*, int, int, int, int);
typedef void(*type_14)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
typedef void(*type_16)(hmx_grid*, int, int, hmx_bitmap*, int);

typedef int type_0[512];
typedef _anon0 type_1[0];
typedef hmx_bitmap* type_5[1000];
typedef int type_6[1000];
typedef hmx_grid* type_8[3];
typedef hmx_bitmap* type_9[2048];
typedef int type_10[320];
typedef hmx_bitmap* type_12[2048];
typedef hmx_grid* type_13[8];
typedef hmx_bitmap* type_15[512];

struct hmx_environment
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

struct hmx_grid
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

void(*hmx_ddagrid_set_tile_module)(hmx_ddagrid*, int, int, hmx_bitmap*, int);
_anon0 infoGridBmp[0];
draw_context* s_ctx;
hmx_ddagrid*(*hmx_ddagrid_create_module)(hmx_environment*, int, int, int, int, int, int);
hmx_environment* g_env_module;
void(*hmx_grid_set_view_module)(hmx_grid*, int, int, int, int);
void(*hmx_grid_set_tile_module)(hmx_grid*, int, int, hmx_bitmap*, int);
hmx_grid*(*hmx_grid_create_module)(hmx_environment*, int, int, int, int);
void(*hmx_grid_set_position_module)(hmx_grid*, int, int);
void(*hmx_grid_release_module)(hmx_environment*, hmx_grid*);

int OEGridCreate(unsigned short indx);
void OEGridDelete(unsigned short indx);
void OEAllGridDelete();

// 
// Start address: 0x1003370
int OEGridCreate(unsigned short indx)
{
	_anon2 loc;
	_anon1 rectwh;
	unsigned short x;
	unsigned short y;
	int tileh[320];
	int i;
	int tileh[512];
	int i;
	// Line 36, Address: 0x1003370, Func Offset: 0
	// Line 42, Address: 0x100338c, Func Offset: 0x1c
	// Line 46, Address: 0x100339c, Func Offset: 0x2c
	// Line 47, Address: 0x10033e0, Func Offset: 0x70
	// Line 53, Address: 0x1003424, Func Offset: 0xb4
	// Line 55, Address: 0x1003430, Func Offset: 0xc0
	// Line 56, Address: 0x1003434, Func Offset: 0xc4
	// Line 58, Address: 0x1003440, Func Offset: 0xd0
	// Line 60, Address: 0x1003444, Func Offset: 0xd4
	// Line 61, Address: 0x10034a4, Func Offset: 0x134
	// Line 62, Address: 0x10034bc, Func Offset: 0x14c
	// Line 65, Address: 0x10034d8, Func Offset: 0x168
	// Line 67, Address: 0x100354c, Func Offset: 0x1dc
	// Line 68, Address: 0x1003550, Func Offset: 0x1e0
	// Line 69, Address: 0x1003554, Func Offset: 0x1e4
	// Line 70, Address: 0x100358c, Func Offset: 0x21c
	// Line 72, Address: 0x10035c4, Func Offset: 0x254
	// Line 73, Address: 0x1003600, Func Offset: 0x290
	// Line 74, Address: 0x1003608, Func Offset: 0x298
	// Line 78, Address: 0x100361c, Func Offset: 0x2ac
	// Line 79, Address: 0x1003660, Func Offset: 0x2f0
	// Line 81, Address: 0x10036a4, Func Offset: 0x334
	// Line 83, Address: 0x10036b4, Func Offset: 0x344
	// Line 88, Address: 0x10036c0, Func Offset: 0x350
	// Line 89, Address: 0x10036ec, Func Offset: 0x37c
	// Line 90, Address: 0x1003704, Func Offset: 0x394
	// Line 91, Address: 0x100371c, Func Offset: 0x3ac
	// Line 93, Address: 0x1003728, Func Offset: 0x3b8
	// Line 94, Address: 0x100372c, Func Offset: 0x3bc
	// Line 96, Address: 0x1003738, Func Offset: 0x3c8
	// Line 97, Address: 0x100373c, Func Offset: 0x3cc
	// Line 99, Address: 0x10037dc, Func Offset: 0x46c
	// Line 100, Address: 0x10037f4, Func Offset: 0x484
	// Line 104, Address: 0x100380c, Func Offset: 0x49c
	// Line 105, Address: 0x1003810, Func Offset: 0x4a0
	// Line 106, Address: 0x1003814, Func Offset: 0x4a4
	// Line 107, Address: 0x1003850, Func Offset: 0x4e0
	// Line 109, Address: 0x1003880, Func Offset: 0x510
	// Line 110, Address: 0x10038dc, Func Offset: 0x56c
	// Line 111, Address: 0x10038e4, Func Offset: 0x574
	// Line 116, Address: 0x10038f8, Func Offset: 0x588
	// Line 117, Address: 0x1003944, Func Offset: 0x5d4
	// Line 118, Address: 0x1003988, Func Offset: 0x618
	// Line 120, Address: 0x1003998, Func Offset: 0x628
	// Line 124, Address: 0x10039a4, Func Offset: 0x634
	// Line 125, Address: 0x10039c8, Func Offset: 0x658
	// Line 126, Address: 0x10039e0, Func Offset: 0x670
	// Line 127, Address: 0x10039f8, Func Offset: 0x688
	// Line 129, Address: 0x1003a04, Func Offset: 0x694
	// Line 132, Address: 0x1003a10, Func Offset: 0x6a0
	// Line 133, Address: 0x1003aa4, Func Offset: 0x734
	// Line 134, Address: 0x1003abc, Func Offset: 0x74c
	// Line 137, Address: 0x1003ac4, Func Offset: 0x754
	// Line 138, Address: 0x1003b5c, Func Offset: 0x7ec
	// Line 139, Address: 0x1003b74, Func Offset: 0x804
	// Line 148, Address: 0x1003b8c, Func Offset: 0x81c
	// Line 149, Address: 0x1003b90, Func Offset: 0x820
	// Func End, Address: 0x1003bb0, Func Offset: 0x840
}

// 
// Start address: 0x1003bb0
void OEGridDelete(unsigned short indx)
{
	unsigned short x;
	unsigned short y;
	// Line 153, Address: 0x1003bb0, Func Offset: 0
	// Line 156, Address: 0x1003bc4, Func Offset: 0x14
	// Line 158, Address: 0x1003bf4, Func Offset: 0x44
	// Line 164, Address: 0x1003c08, Func Offset: 0x58
	// Line 169, Address: 0x1003c18, Func Offset: 0x68
	// Line 170, Address: 0x1003c4c, Func Offset: 0x9c
	// Line 171, Address: 0x1003c74, Func Offset: 0xc4
	// Line 175, Address: 0x1003c90, Func Offset: 0xe0
	// Line 177, Address: 0x1003ca0, Func Offset: 0xf0
	// Line 180, Address: 0x1003cd0, Func Offset: 0x120
	// Line 182, Address: 0x1003cf8, Func Offset: 0x148
	// Line 183, Address: 0x1003d00, Func Offset: 0x150
	// Line 185, Address: 0x1003d14, Func Offset: 0x164
	// Line 187, Address: 0x1003d20, Func Offset: 0x170
	// Line 189, Address: 0x1003d2c, Func Offset: 0x17c
	// Line 192, Address: 0x1003d7c, Func Offset: 0x1cc
	// Line 194, Address: 0x1003dc4, Func Offset: 0x214
	// Line 195, Address: 0x1003ddc, Func Offset: 0x22c
	// Line 196, Address: 0x1003df4, Func Offset: 0x244
	// Line 197, Address: 0x1003dfc, Func Offset: 0x24c
	// Line 199, Address: 0x1003e10, Func Offset: 0x260
	// Line 201, Address: 0x1003e1c, Func Offset: 0x26c
	// Line 203, Address: 0x1003e28, Func Offset: 0x278
	// Line 206, Address: 0x1003e70, Func Offset: 0x2c0
	// Line 208, Address: 0x1003eb0, Func Offset: 0x300
	// Line 209, Address: 0x1003ec8, Func Offset: 0x318
	// Line 211, Address: 0x1003ee0, Func Offset: 0x330
	// Func End, Address: 0x1003ef8, Func Offset: 0x348
}

// 
// Start address: 0x1003f00
void OEAllGridDelete()
{
	// Line 215, Address: 0x1003f00, Func Offset: 0
	// Line 217, Address: 0x1003f08, Func Offset: 0x8
	// Line 218, Address: 0x1003f14, Func Offset: 0x14
	// Line 219, Address: 0x1003f20, Func Offset: 0x20
	// Line 220, Address: 0x1003f2c, Func Offset: 0x2c
	// Func End, Address: 0x1003f3c, Func Offset: 0x3c
}

