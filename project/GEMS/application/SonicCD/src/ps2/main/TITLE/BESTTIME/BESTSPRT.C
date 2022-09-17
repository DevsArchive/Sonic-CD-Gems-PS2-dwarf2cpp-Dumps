typedef struct hmx_sprite;
typedef struct hmx_bitmap;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct hmx_grid;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct tagPOINT;
typedef struct _anon0;

typedef void(*type_0)(hmx_sprite*, int);
typedef void(*type_12)(hmx_sprite*, int, int);
typedef void(*type_13)(hmx_sprite*, hmx_bitmap*);

typedef _anon0 type_1[0];
typedef hmx_bitmap* type_2[1000];
typedef int type_3[1000];
typedef hmx_grid* type_4[3];
typedef hmx_bitmap* type_5[2048];
typedef hmx_bitmap* type_6[2048];
typedef hmx_grid* type_7[8];
typedef unsigned int type_8[28];
typedef unsigned int type_9[28][11];
typedef hmx_bitmap* type_10[512];
typedef int type_11[11];

struct hmx_sprite
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

struct hmx_grid
{
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

int menu_y[11];
unsigned int hSprMenu[28][11];
draw_context* s_ctx;
void(*hmx_sprite_set_flags_module)(hmx_sprite*, int);
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
int ScrollCount;
_anon0 infoSprtBmp[0];

void DeleteCharSprt(int y, int colom);
unsigned int CreateCharSprt(int colom, int y, char code);
unsigned int CreateCharSprt2(int colom, int y, char code);
void DeleteAllCharSprt();
void StrMenu(int y, char* lpStr);
void StrMenu2(int y, char* lpStr);

// 
// Start address: 0x1000e40
void DeleteCharSprt(int y, int colom)
{
	// Line 55, Address: 0x1000e40, Func Offset: 0
	// Line 56, Address: 0x1000e50, Func Offset: 0x10
	// Line 58, Address: 0x1000e84, Func Offset: 0x44
	// Line 59, Address: 0x1000edc, Func Offset: 0x9c
	// Line 60, Address: 0x1000f34, Func Offset: 0xf4
	// Line 61, Address: 0x1000f74, Func Offset: 0x134
	// Line 62, Address: 0x1000fa8, Func Offset: 0x168
	// Line 64, Address: 0x1000fd4, Func Offset: 0x194
	// Func End, Address: 0x1000fe4, Func Offset: 0x1a4
}

// 
// Start address: 0x1000ff0
unsigned int CreateCharSprt(int colom, int y, char code)
{
	int indx;
	tagPOINT point;
	// Line 69, Address: 0x1000ff0, Func Offset: 0
	// Line 74, Address: 0x1001008, Func Offset: 0x18
	// Line 76, Address: 0x100103c, Func Offset: 0x4c
	// Line 78, Address: 0x100104c, Func Offset: 0x5c
	// Line 79, Address: 0x1001070, Func Offset: 0x80
	// Line 80, Address: 0x1001094, Func Offset: 0xa4
	// Line 81, Address: 0x10010b8, Func Offset: 0xc8
	// Line 82, Address: 0x10010dc, Func Offset: 0xec
	// Line 83, Address: 0x100110c, Func Offset: 0x11c
	// Line 85, Address: 0x100111c, Func Offset: 0x12c
	// Line 88, Address: 0x100114c, Func Offset: 0x15c
	// Line 89, Address: 0x10011a8, Func Offset: 0x1b8
	// Line 91, Address: 0x10011b8, Func Offset: 0x1c8
	// Line 93, Address: 0x10011e4, Func Offset: 0x1f4
	// Line 95, Address: 0x1001240, Func Offset: 0x250
	// Line 96, Address: 0x10012a8, Func Offset: 0x2b8
	// Line 98, Address: 0x1001300, Func Offset: 0x310
	// Line 99, Address: 0x1001304, Func Offset: 0x314
	// Func End, Address: 0x1001318, Func Offset: 0x328
}

// 
// Start address: 0x1001320
unsigned int CreateCharSprt2(int colom, int y, char code)
{
	int indx;
	tagPOINT point;
	// Line 103, Address: 0x1001320, Func Offset: 0
	// Line 108, Address: 0x1001338, Func Offset: 0x18
	// Line 110, Address: 0x100136c, Func Offset: 0x4c
	// Line 112, Address: 0x100137c, Func Offset: 0x5c
	// Line 113, Address: 0x10013a0, Func Offset: 0x80
	// Line 114, Address: 0x10013c4, Func Offset: 0xa4
	// Line 115, Address: 0x10013e8, Func Offset: 0xc8
	// Line 116, Address: 0x100140c, Func Offset: 0xec
	// Line 117, Address: 0x100143c, Func Offset: 0x11c
	// Line 119, Address: 0x100144c, Func Offset: 0x12c
	// Line 122, Address: 0x100147c, Func Offset: 0x15c
	// Line 123, Address: 0x10014d8, Func Offset: 0x1b8
	// Line 125, Address: 0x10014e8, Func Offset: 0x1c8
	// Line 127, Address: 0x1001514, Func Offset: 0x1f4
	// Line 129, Address: 0x1001570, Func Offset: 0x250
	// Line 130, Address: 0x10015d8, Func Offset: 0x2b8
	// Line 131, Address: 0x1001630, Func Offset: 0x310
	// Line 132, Address: 0x1001634, Func Offset: 0x314
	// Func End, Address: 0x1001648, Func Offset: 0x328
}

// 
// Start address: 0x1001650
void DeleteAllCharSprt()
{
	int m;
	int n;
	// Line 137, Address: 0x1001650, Func Offset: 0
	// Line 140, Address: 0x1001660, Func Offset: 0x10
	// Line 141, Address: 0x100166c, Func Offset: 0x1c
	// Line 143, Address: 0x1001678, Func Offset: 0x28
	// Line 144, Address: 0x1001688, Func Offset: 0x38
	// Line 145, Address: 0x10016a8, Func Offset: 0x58
	// Func End, Address: 0x10016c0, Func Offset: 0x70
}

// 
// Start address: 0x10016c0
void StrMenu(int y, char* lpStr)
{
	int n;
	// Line 150, Address: 0x10016c0, Func Offset: 0
	// Line 151, Address: 0x10016d4, Func Offset: 0x14
	// Line 153, Address: 0x10016d8, Func Offset: 0x18
	// Line 155, Address: 0x10016e0, Func Offset: 0x20
	// Line 156, Address: 0x10016f8, Func Offset: 0x38
	// Line 157, Address: 0x10016fc, Func Offset: 0x3c
	// Line 158, Address: 0x1001708, Func Offset: 0x48
	// Line 159, Address: 0x1001718, Func Offset: 0x58
	// Func End, Address: 0x100172c, Func Offset: 0x6c
}

// 
// Start address: 0x1001730
void StrMenu2(int y, char* lpStr)
{
	int n;
	// Line 161, Address: 0x1001730, Func Offset: 0
	// Line 162, Address: 0x1001744, Func Offset: 0x14
	// Line 164, Address: 0x1001748, Func Offset: 0x18
	// Line 166, Address: 0x1001750, Func Offset: 0x20
	// Line 167, Address: 0x1001768, Func Offset: 0x38
	// Line 168, Address: 0x100176c, Func Offset: 0x3c
	// Line 169, Address: 0x1001778, Func Offset: 0x48
	// Line 170, Address: 0x1001788, Func Offset: 0x58
	// Func End, Address: 0x100179c, Func Offset: 0x6c
}

