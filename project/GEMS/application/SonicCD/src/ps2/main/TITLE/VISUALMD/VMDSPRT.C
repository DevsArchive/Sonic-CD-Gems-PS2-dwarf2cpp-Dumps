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

typedef void(*type_5)(hmx_sprite*, int, int);
typedef void(*type_6)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_7)(hmx_sprite*, int);

typedef hmx_grid* type_0[8];
typedef unsigned int type_1[11];
typedef unsigned int type_2[11][5];
typedef hmx_bitmap* type_3[512];
typedef int type_4[5];
typedef _anon0 type_8[0];
typedef hmx_bitmap* type_9[1000];
typedef int type_10[1000];
typedef hmx_grid* type_11[3];
typedef hmx_bitmap* type_12[2048];
typedef hmx_bitmap* type_13[2048];

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

int nMenuPosiY[5];
draw_context* s_ctx;
unsigned int hSprMenu[11][5];
_anon0 infoSprtBmp[0];
void(*hmx_sprite_set_flags_module)(hmx_sprite*, int);
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);

unsigned int CreateCharSprt(int nMenuNum, int colom, int code);
void DeleteCharSprt(int nMenuNum, int colom);
void DeleteAllCharSprt();
void StrEXIT(int kind);
void StrOPENING(int kind);
void StrGOODENDING(int kind);
void StrBADENDING(int kind);
void StrPENCILTEST(int kind);

// 
// Start address: 0x1003500
unsigned int CreateCharSprt(int nMenuNum, int colom, int code)
{
	tagPOINT point;
	// Line 56, Address: 0x1003500, Func Offset: 0
	// Line 63, Address: 0x1003514, Func Offset: 0x14
	// Line 64, Address: 0x1003550, Func Offset: 0x50
	// Line 66, Address: 0x100355c, Func Offset: 0x5c
	// Line 69, Address: 0x1003594, Func Offset: 0x94
	// Line 70, Address: 0x10035a4, Func Offset: 0xa4
	// Line 75, Address: 0x10035c0, Func Offset: 0xc0
	// Line 76, Address: 0x1003624, Func Offset: 0x124
	// Line 77, Address: 0x1003698, Func Offset: 0x198
	// Line 78, Address: 0x10036f8, Func Offset: 0x1f8
	// Line 79, Address: 0x1003760, Func Offset: 0x260
	// Line 80, Address: 0x1003764, Func Offset: 0x264
	// Func End, Address: 0x1003774, Func Offset: 0x274
}

// 
// Start address: 0x1003780
void DeleteCharSprt(int nMenuNum, int colom)
{
	// Line 85, Address: 0x1003780, Func Offset: 0
	// Line 87, Address: 0x1003790, Func Offset: 0x10
	// Line 90, Address: 0x10037cc, Func Offset: 0x4c
	// Line 91, Address: 0x100382c, Func Offset: 0xac
	// Line 92, Address: 0x100388c, Func Offset: 0x10c
	// Line 93, Address: 0x10038d4, Func Offset: 0x154
	// Line 94, Address: 0x1003910, Func Offset: 0x190
	// Line 96, Address: 0x1003944, Func Offset: 0x1c4
	// Func End, Address: 0x1003954, Func Offset: 0x1d4
}

// 
// Start address: 0x1003960
void DeleteAllCharSprt()
{
	int n;
	int m;
	// Line 101, Address: 0x1003960, Func Offset: 0
	// Line 104, Address: 0x1003970, Func Offset: 0x10
	// Line 106, Address: 0x100397c, Func Offset: 0x1c
	// Line 108, Address: 0x1003988, Func Offset: 0x28
	// Line 109, Address: 0x1003998, Func Offset: 0x38
	// Line 110, Address: 0x10039a8, Func Offset: 0x48
	// Line 111, Address: 0x10039b8, Func Offset: 0x58
	// Func End, Address: 0x10039d0, Func Offset: 0x70
}

// 
// Start address: 0x10039d0
void StrEXIT(int kind)
{
	// Line 117, Address: 0x10039d0, Func Offset: 0
	// Line 118, Address: 0x10039dc, Func Offset: 0xc
	// Line 120, Address: 0x10039e8, Func Offset: 0x18
	// Line 121, Address: 0x1003a78, Func Offset: 0xa8
	// Line 124, Address: 0x1003a80, Func Offset: 0xb0
	// Line 126, Address: 0x1003b10, Func Offset: 0x140
	// Func End, Address: 0x1003b20, Func Offset: 0x150
}

// 
// Start address: 0x1003b20
void StrOPENING(int kind)
{
	// Line 132, Address: 0x1003b20, Func Offset: 0
	// Line 133, Address: 0x1003b2c, Func Offset: 0xc
	// Line 135, Address: 0x1003b38, Func Offset: 0x18
	// Line 136, Address: 0x1003bc8, Func Offset: 0xa8
	// Line 137, Address: 0x1003c34, Func Offset: 0x114
	// Line 140, Address: 0x1003c3c, Func Offset: 0x11c
	// Line 141, Address: 0x1003ccc, Func Offset: 0x1ac
	// Line 143, Address: 0x1003d38, Func Offset: 0x218
	// Func End, Address: 0x1003d48, Func Offset: 0x228
}

// 
// Start address: 0x1003d50
void StrGOODENDING(int kind)
{
	// Line 149, Address: 0x1003d50, Func Offset: 0
	// Line 150, Address: 0x1003d5c, Func Offset: 0xc
	// Line 152, Address: 0x1003d68, Func Offset: 0x18
	// Line 153, Address: 0x1003df8, Func Offset: 0xa8
	// Line 154, Address: 0x1003e64, Func Offset: 0x114
	// Line 155, Address: 0x1003ed0, Func Offset: 0x180
	// Line 158, Address: 0x1003ed8, Func Offset: 0x188
	// Line 159, Address: 0x1003f68, Func Offset: 0x218
	// Line 160, Address: 0x1003fd4, Func Offset: 0x284
	// Line 162, Address: 0x1004040, Func Offset: 0x2f0
	// Func End, Address: 0x1004050, Func Offset: 0x300
}

// 
// Start address: 0x1004050
void StrBADENDING(int kind)
{
	// Line 168, Address: 0x1004050, Func Offset: 0
	// Line 169, Address: 0x100405c, Func Offset: 0xc
	// Line 171, Address: 0x1004068, Func Offset: 0x18
	// Line 172, Address: 0x10040d4, Func Offset: 0x84
	// Line 173, Address: 0x1004164, Func Offset: 0x114
	// Line 174, Address: 0x10041ac, Func Offset: 0x15c
	// Line 177, Address: 0x10041b4, Func Offset: 0x164
	// Line 178, Address: 0x1004220, Func Offset: 0x1d0
	// Line 179, Address: 0x10042b0, Func Offset: 0x260
	// Line 181, Address: 0x10042f8, Func Offset: 0x2a8
	// Func End, Address: 0x1004308, Func Offset: 0x2b8
}

// 
// Start address: 0x1004310
void StrPENCILTEST(int kind)
{
	// Line 187, Address: 0x1004310, Func Offset: 0
	// Line 188, Address: 0x100431c, Func Offset: 0xc
	// Line 190, Address: 0x1004328, Func Offset: 0x18
	// Line 191, Address: 0x10043b8, Func Offset: 0xa8
	// Line 192, Address: 0x1004424, Func Offset: 0x114
	// Line 193, Address: 0x1004490, Func Offset: 0x180
	// Line 196, Address: 0x1004498, Func Offset: 0x188
	// Line 197, Address: 0x1004528, Func Offset: 0x218
	// Line 198, Address: 0x1004594, Func Offset: 0x284
	// Line 200, Address: 0x1004600, Func Offset: 0x2f0
	// Func End, Address: 0x1004610, Func Offset: 0x300
}

