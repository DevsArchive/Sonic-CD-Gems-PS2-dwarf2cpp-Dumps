typedef struct hmx_bitmap;
typedef struct hmx_grid;
typedef struct hmx_ddagrid;
typedef struct hmx_sprite;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct tagPOINT;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct _anon0;
typedef struct _RECTL;

typedef void(*type_4)(hmx_sprite*, int, int);
typedef void(*type_5)(char*, char*);
typedef void(*type_6)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_7)(hmx_sprite*, int);

typedef hmx_bitmap* type_0[2048];
typedef hmx_bitmap* type_1[2048];
typedef hmx_grid* type_2[8];
typedef hmx_bitmap* type_3[512];
typedef _anon0 type_8[0];
typedef unsigned int type_9[4];
typedef char type_10[12];
typedef unsigned int type_11[10];
typedef unsigned int type_12[10][3];
typedef int type_13[2];
typedef hmx_bitmap* type_14[1000];
typedef char type_15[12];
typedef int type_16[1000];
typedef hmx_grid* type_17[3];

struct hmx_bitmap
{
};

struct hmx_grid
{
};

struct hmx_ddagrid
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

int nMenuPosiX[2];
unsigned int hSprMenu[10][3];
void(*hmx_sprite_set_flags_module)(hmx_sprite*, int);
draw_context* s_ctx;
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
_anon0 infoSprtBmp[0];
void(*sPrintf)(char*, char*);
unsigned int hMesMenu;

void DeleteCharSprt(int nMenuNum, int colom);
unsigned int CreateCharSprt(int nMenuNum, int colom, char code, int color);
void DeleteAllCharSprt();
void StrPCM(int color);
void StrDA(int color);
void StrPCMNO(int number);
void StrDANO(int number);
void StrWelcome();
void DeleteCharMes();

// 
// Start address: 0x1001ac0
void DeleteCharSprt(int nMenuNum, int colom)
{
	// Line 46, Address: 0x1001ac0, Func Offset: 0
	// Line 47, Address: 0x1001ad0, Func Offset: 0x10
	// Line 49, Address: 0x1001b04, Func Offset: 0x44
	// Line 50, Address: 0x1001b38, Func Offset: 0x78
	// Line 51, Address: 0x1001b78, Func Offset: 0xb8
	// Line 52, Address: 0x1001bd0, Func Offset: 0x110
	// Line 53, Address: 0x1001c28, Func Offset: 0x168
	// Line 55, Address: 0x1001c54, Func Offset: 0x194
	// Func End, Address: 0x1001c64, Func Offset: 0x1a4
}

// 
// Start address: 0x1001c70
unsigned int CreateCharSprt(int nMenuNum, int colom, char code, int color)
{
	_RECTL SprRect;
	unsigned int mask[4];
	int indx;
	tagPOINT point;
	// Line 60, Address: 0x1001c70, Func Offset: 0
	// Line 61, Address: 0x1001c8c, Func Offset: 0x1c
	// Line 62, Address: 0x1001cbc, Func Offset: 0x4c
	// Line 67, Address: 0x1001cec, Func Offset: 0x7c
	// Line 69, Address: 0x1001d20, Func Offset: 0xb0
	// Line 71, Address: 0x1001d30, Func Offset: 0xc0
	// Line 73, Address: 0x1001d40, Func Offset: 0xd0
	// Line 74, Address: 0x1001d64, Func Offset: 0xf4
	// Line 75, Address: 0x1001d94, Func Offset: 0x124
	// Line 76, Address: 0x1001da4, Func Offset: 0x134
	// Line 79, Address: 0x1001dac, Func Offset: 0x13c
	// Line 80, Address: 0x1001dd0, Func Offset: 0x160
	// Line 81, Address: 0x1001e00, Func Offset: 0x190
	// Line 84, Address: 0x1001e10, Func Offset: 0x1a0
	// Line 87, Address: 0x1001e40, Func Offset: 0x1d0
	// Line 88, Address: 0x1001e94, Func Offset: 0x224
	// Line 89, Address: 0x1001ebc, Func Offset: 0x24c
	// Line 90, Address: 0x1001ec4, Func Offset: 0x254
	// Line 93, Address: 0x1001f20, Func Offset: 0x2b0
	// Line 94, Address: 0x1001f88, Func Offset: 0x318
	// Line 95, Address: 0x1001fe0, Func Offset: 0x370
	// Line 96, Address: 0x1001fe4, Func Offset: 0x374
	// Func End, Address: 0x1001ff8, Func Offset: 0x388
}

// 
// Start address: 0x1002000
void DeleteAllCharSprt()
{
	int n;
	int m;
	// Line 101, Address: 0x1002000, Func Offset: 0
	// Line 104, Address: 0x1002010, Func Offset: 0x10
	// Line 106, Address: 0x100201c, Func Offset: 0x1c
	// Line 108, Address: 0x1002028, Func Offset: 0x28
	// Line 109, Address: 0x1002038, Func Offset: 0x38
	// Line 110, Address: 0x1002048, Func Offset: 0x48
	// Line 111, Address: 0x1002058, Func Offset: 0x58
	// Func End, Address: 0x1002070, Func Offset: 0x70
}

// 
// Start address: 0x1002070
void StrPCM(int color)
{
	// Line 116, Address: 0x1002070, Func Offset: 0
	// Line 117, Address: 0x100207c, Func Offset: 0xc
	// Line 118, Address: 0x1002094, Func Offset: 0x24
	// Line 119, Address: 0x10020ac, Func Offset: 0x3c
	// Line 120, Address: 0x10020c4, Func Offset: 0x54
	// Line 121, Address: 0x10020dc, Func Offset: 0x6c
	// Line 122, Address: 0x10020f4, Func Offset: 0x84
	// Line 123, Address: 0x100210c, Func Offset: 0x9c
	// Func End, Address: 0x100211c, Func Offset: 0xac
}

// 
// Start address: 0x1002120
void StrDA(int color)
{
	// Line 128, Address: 0x1002120, Func Offset: 0
	// Line 129, Address: 0x100212c, Func Offset: 0xc
	// Line 130, Address: 0x1002144, Func Offset: 0x24
	// Line 131, Address: 0x100215c, Func Offset: 0x3c
	// Line 132, Address: 0x1002174, Func Offset: 0x54
	// Line 133, Address: 0x100218c, Func Offset: 0x6c
	// Line 134, Address: 0x10021a4, Func Offset: 0x84
	// Func End, Address: 0x10021b4, Func Offset: 0x94
}

// 
// Start address: 0x10021c0
void StrPCMNO(int number)
{
	char buf[12];
	// Line 139, Address: 0x10021c0, Func Offset: 0
	// Line 142, Address: 0x10021cc, Func Offset: 0xc
	// Line 143, Address: 0x10021ec, Func Offset: 0x2c
	// Line 144, Address: 0x1002204, Func Offset: 0x44
	// Line 145, Address: 0x100221c, Func Offset: 0x5c
	// Func End, Address: 0x100222c, Func Offset: 0x6c
}

// 
// Start address: 0x1002230
void StrDANO(int number)
{
	char buf[12];
	// Line 150, Address: 0x1002230, Func Offset: 0
	// Line 153, Address: 0x100223c, Func Offset: 0xc
	// Line 154, Address: 0x100225c, Func Offset: 0x2c
	// Line 155, Address: 0x1002274, Func Offset: 0x44
	// Line 156, Address: 0x100228c, Func Offset: 0x5c
	// Func End, Address: 0x100229c, Func Offset: 0x6c
}

// 
// Start address: 0x10022a0
void StrWelcome()
{
	int indx;
	tagPOINT point;
	// Line 161, Address: 0x10022a0, Func Offset: 0
	// Line 166, Address: 0x10022ac, Func Offset: 0xc
	// Line 168, Address: 0x10022b0, Func Offset: 0x10
	// Line 172, Address: 0x10022c0, Func Offset: 0x20
	// Line 173, Address: 0x10022f0, Func Offset: 0x50
	// Line 174, Address: 0x1002300, Func Offset: 0x60
	// Line 176, Address: 0x1002308, Func Offset: 0x68
	// Line 178, Address: 0x1002340, Func Offset: 0xa0
	// Line 179, Address: 0x1002384, Func Offset: 0xe4
	// Line 180, Address: 0x10023b8, Func Offset: 0x118
	// Func End, Address: 0x10023cc, Func Offset: 0x12c
}

// 
// Start address: 0x10023d0
void DeleteCharMes()
{
	// Line 184, Address: 0x10023d0, Func Offset: 0
	// Line 185, Address: 0x10023d8, Func Offset: 0x8
	// Line 187, Address: 0x10023e8, Func Offset: 0x18
	// Line 188, Address: 0x10023f8, Func Offset: 0x28
	// Line 189, Address: 0x100242c, Func Offset: 0x5c
	// Line 190, Address: 0x1002460, Func Offset: 0x90
	// Line 191, Address: 0x100247c, Func Offset: 0xac
	// Line 193, Address: 0x1002484, Func Offset: 0xb4
	// Func End, Address: 0x1002494, Func Offset: 0xc4
}

