typedef struct hmx_sprite;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct hmx_bitmap;
typedef struct draw_context;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct hmx_surface;
typedef struct hmx_background;
typedef struct hmx_grid;
typedef struct tagPOINT;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _RECTL;

typedef void(*type_0)(hmx_sprite*, int, int);
typedef void(*type_2)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_6)(hmx_sprite*, int);

typedef _anon3 type_1[0];
typedef unsigned int type_3[56];
typedef unsigned int type_4[56][6];
typedef unsigned int type_5[0];
typedef int type_7[0];
typedef tagPOINT type_8[0];
typedef _anon4 type_9[0];
typedef unsigned int type_10[120];
typedef unsigned int type_11[4];
typedef hmx_bitmap* type_12[1000];
typedef int type_13[1000];
typedef hmx_grid* type_14[3];
typedef hmx_bitmap* type_15[2048];
typedef hmx_bitmap* type_16[2048];
typedef hmx_grid* type_17[8];
typedef hmx_bitmap* type_18[512];

struct hmx_sprite
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

struct hmx_bitmap
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

struct hmx_renderer_context
{
};

struct hmx_surface
{
};

struct hmx_background
{
};

struct hmx_grid
{
};

struct tagPOINT
{
	int x;
	int y;
};

struct _anon3
{
	char code;
	int yello816;
	int white88;
	int yello88;
	int whitex16;
};

struct _anon4
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

int SONICMOVEM_MAG;
_anon3 markTable[0];
draw_context* s_ctx;
unsigned int hSprFile[56][6];
int PRIO_MAX;
_anon4 infoSprtBmp[0];
void(*hmx_sprite_set_flags_module)(hmx_sprite*, int);
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
tagPOINT nPosiXSprFile[0];
unsigned int hSprMes[0];
int nPosiXSprMes[0];
int cursolPosiIndxX;
int nFileNumber;
int PLAYERCHAR_W;
int nSonicKind;
unsigned int bMenuChosed;
int nStandStartTimerCunt;
int nTimerCunt;
int nSonicMode;
tagPOINT posiSonicCursol;
int fSonicIncX;
_anon0 posiStartYOld;
_anon0 posiStartXOld;
int fSonicIncY;
tagPOINT posiTarget;
unsigned int hFxh[120];

int GetMarkfontIndx(char c, int kind);
unsigned int CreateCharSprt(char c, int kind, int nBlockNo, int nSprNum);
unsigned int CreateStringSprt(char* str, int kind, int nBlockNo, int nStartSprNum);
void DeleteCharSprt(int nBlockNo, int nSprNum);
void DeleteStringSprt(int strLength, int nBlockNo, int nStartSprNum);
void DeleteAllCharSprt();
int GetCursolPositon();
void MovCursol(int x);
void DispCursol();
void HideCursol();
void HideSonicCursol();
void DispSonicCursol(tagPOINT point);
void MovSonicCursol(tagPOINT point);
void RunSonicCursol(tagPOINT point);
int isqrt(int xx);
void UpdateSonicCursol();

// 
// Start address: 0x1003400
int GetMarkfontIndx(char c, int kind)
{
	int n;
	// Line 74, Address: 0x1003400, Func Offset: 0
	// Line 75, Address: 0x1003410, Func Offset: 0x10
	// Line 77, Address: 0x1003414, Func Offset: 0x14
	// Line 79, Address: 0x100341c, Func Offset: 0x1c
	// Line 81, Address: 0x1003454, Func Offset: 0x54
	// Line 84, Address: 0x100348c, Func Offset: 0x8c
	// Line 86, Address: 0x10034b0, Func Offset: 0xb0
	// Line 88, Address: 0x10034d4, Func Offset: 0xd4
	// Line 90, Address: 0x10034f8, Func Offset: 0xf8
	// Line 92, Address: 0x100351c, Func Offset: 0x11c
	// Line 95, Address: 0x1003528, Func Offset: 0x128
	// Line 96, Address: 0x100352c, Func Offset: 0x12c
	// Line 97, Address: 0x1003550, Func Offset: 0x150
	// Line 98, Address: 0x1003554, Func Offset: 0x154
	// Func End, Address: 0x1003564, Func Offset: 0x164
}

// 
// Start address: 0x1003570
unsigned int CreateCharSprt(char c, int kind, int nBlockNo, int nSprNum)
{
	_RECTL SprRect;
	unsigned int mask[4];
	tagPOINT point;
	int indx;
	// Line 107, Address: 0x1003570, Func Offset: 0
	// Line 108, Address: 0x100358c, Func Offset: 0x1c
	// Line 109, Address: 0x10035bc, Func Offset: 0x4c
	// Line 114, Address: 0x10035ec, Func Offset: 0x7c
	// Line 117, Address: 0x1003624, Func Offset: 0xb4
	// Line 118, Address: 0x1003670, Func Offset: 0x100
	// Line 121, Address: 0x10036b8, Func Offset: 0x148
	// Line 122, Address: 0x10036cc, Func Offset: 0x15c
	// Line 126, Address: 0x10036e4, Func Offset: 0x174
	// Line 127, Address: 0x100372c, Func Offset: 0x1bc
	// Line 130, Address: 0x1003774, Func Offset: 0x204
	// Line 131, Address: 0x1003788, Func Offset: 0x218
	// Line 135, Address: 0x10037a0, Func Offset: 0x230
	// Line 136, Address: 0x10037e8, Func Offset: 0x278
	// Line 139, Address: 0x1003830, Func Offset: 0x2c0
	// Line 140, Address: 0x1003844, Func Offset: 0x2d4
	// Line 145, Address: 0x100385c, Func Offset: 0x2ec
	// Line 146, Address: 0x10038a4, Func Offset: 0x334
	// Line 149, Address: 0x10038ec, Func Offset: 0x37c
	// Line 150, Address: 0x1003900, Func Offset: 0x390
	// Line 154, Address: 0x1003918, Func Offset: 0x3a8
	// Line 156, Address: 0x1003924, Func Offset: 0x3b4
	// Line 158, Address: 0x1003934, Func Offset: 0x3c4
	// Line 159, Address: 0x1003954, Func Offset: 0x3e4
	// Line 161, Address: 0x1003960, Func Offset: 0x3f0
	// Line 164, Address: 0x100397c, Func Offset: 0x40c
	// Line 165, Address: 0x1003998, Func Offset: 0x428
	// Line 169, Address: 0x10039a0, Func Offset: 0x430
	// Line 170, Address: 0x10039e8, Func Offset: 0x478
	// Line 171, Address: 0x1003a3c, Func Offset: 0x4cc
	// Line 172, Address: 0x1003a80, Func Offset: 0x510
	// Line 173, Address: 0x1003acc, Func Offset: 0x55c
	// Line 175, Address: 0x1003ad8, Func Offset: 0x568
	// Line 178, Address: 0x1003af8, Func Offset: 0x588
	// Line 179, Address: 0x1003b30, Func Offset: 0x5c0
	// Line 182, Address: 0x1003b3c, Func Offset: 0x5cc
	// Line 185, Address: 0x1003b70, Func Offset: 0x600
	// Line 186, Address: 0x1003b8c, Func Offset: 0x61c
	// Line 189, Address: 0x1003bbc, Func Offset: 0x64c
	// Line 190, Address: 0x1003c1c, Func Offset: 0x6ac
	// Line 191, Address: 0x1003c88, Func Offset: 0x718
	// Line 192, Address: 0x1003ce4, Func Offset: 0x774
	// Line 193, Address: 0x1003d48, Func Offset: 0x7d8
	// Line 195, Address: 0x1003d54, Func Offset: 0x7e4
	// Line 196, Address: 0x1003d58, Func Offset: 0x7e8
	// Func End, Address: 0x1003d6c, Func Offset: 0x7fc
}

// 
// Start address: 0x1003d70
unsigned int CreateStringSprt(char* str, int kind, int nBlockNo, int nStartSprNum)
{
	int n;
	// Line 201, Address: 0x1003d70, Func Offset: 0
	// Line 202, Address: 0x1003d8c, Func Offset: 0x1c
	// Line 204, Address: 0x1003d90, Func Offset: 0x20
	// Line 206, Address: 0x1003d98, Func Offset: 0x28
	// Line 207, Address: 0x1003db4, Func Offset: 0x44
	// Line 208, Address: 0x1003dd0, Func Offset: 0x60
	// Line 209, Address: 0x1003ddc, Func Offset: 0x6c
	// Line 210, Address: 0x1003de0, Func Offset: 0x70
	// Line 211, Address: 0x1003df0, Func Offset: 0x80
	// Line 212, Address: 0x1003df4, Func Offset: 0x84
	// Func End, Address: 0x1003e08, Func Offset: 0x98
}

// 
// Start address: 0x1003e10
void DeleteCharSprt(int nBlockNo, int nSprNum)
{
	// Line 217, Address: 0x1003e10, Func Offset: 0
	// Line 218, Address: 0x1003e20, Func Offset: 0x10
	// Line 220, Address: 0x1003e30, Func Offset: 0x20
	// Line 223, Address: 0x1003e50, Func Offset: 0x40
	// Line 224, Address: 0x1003e94, Func Offset: 0x84
	// Line 225, Address: 0x1003ec0, Func Offset: 0xb0
	// Line 226, Address: 0x1003ee0, Func Offset: 0xd0
	// Line 228, Address: 0x1003ef8, Func Offset: 0xe8
	// Line 229, Address: 0x1003f00, Func Offset: 0xf0
	// Line 232, Address: 0x1003f20, Func Offset: 0x110
	// Line 235, Address: 0x1003f58, Func Offset: 0x148
	// Line 236, Address: 0x1003fb4, Func Offset: 0x1a4
	// Line 237, Address: 0x1003ff8, Func Offset: 0x1e8
	// Line 238, Address: 0x1004030, Func Offset: 0x220
	// Line 241, Address: 0x1004060, Func Offset: 0x250
	// Func End, Address: 0x1004070, Func Offset: 0x260
}

// 
// Start address: 0x1004070
void DeleteStringSprt(int strLength, int nBlockNo, int nStartSprNum)
{
	int i;
	int n;
	// Line 246, Address: 0x1004070, Func Offset: 0
	// Line 248, Address: 0x100408c, Func Offset: 0x1c
	// Line 250, Address: 0x1004090, Func Offset: 0x20
	// Line 252, Address: 0x100409c, Func Offset: 0x2c
	// Line 253, Address: 0x10040b0, Func Offset: 0x40
	// Line 254, Address: 0x10040c4, Func Offset: 0x54
	// Func End, Address: 0x10040dc, Func Offset: 0x6c
}

// 
// Start address: 0x10040e0
void DeleteAllCharSprt()
{
	int n;
	// Line 259, Address: 0x10040e0, Func Offset: 0
	// Line 262, Address: 0x10040ec, Func Offset: 0xc
	// Line 263, Address: 0x1004100, Func Offset: 0x20
	// Line 264, Address: 0x100410c, Func Offset: 0x2c
	// Line 265, Address: 0x1004130, Func Offset: 0x50
	// Func End, Address: 0x1004144, Func Offset: 0x64
}

// 
// Start address: 0x1004150
int GetCursolPositon()
{
	// Line 271, Address: 0x1004150, Func Offset: 0
	// Line 272, Address: 0x1004158, Func Offset: 0x8
	// Func End, Address: 0x1004160, Func Offset: 0x10
}

// 
// Start address: 0x1004160
void MovCursol(int x)
{
	tagPOINT point;
	// Line 277, Address: 0x1004160, Func Offset: 0
	// Line 280, Address: 0x100416c, Func Offset: 0xc
	// Line 281, Address: 0x1004178, Func Offset: 0x18
	// Line 282, Address: 0x1004198, Func Offset: 0x38
	// Line 284, Address: 0x10041ac, Func Offset: 0x4c
	// Line 285, Address: 0x10041e8, Func Offset: 0x88
	// Func End, Address: 0x10041f8, Func Offset: 0x98
}

// 
// Start address: 0x1004200
void DispCursol()
{
	// Line 290, Address: 0x1004200, Func Offset: 0
	// Line 291, Address: 0x1004208, Func Offset: 0x8
	// Line 292, Address: 0x1004214, Func Offset: 0x14
	// Line 293, Address: 0x1004224, Func Offset: 0x24
	// Func End, Address: 0x1004234, Func Offset: 0x34
}

// 
// Start address: 0x1004240
void HideCursol()
{
	// Line 298, Address: 0x1004240, Func Offset: 0
	// Line 299, Address: 0x1004248, Func Offset: 0x8
	// Line 300, Address: 0x1004254, Func Offset: 0x14
	// Func End, Address: 0x1004264, Func Offset: 0x24
}

// 
// Start address: 0x1004270
void HideSonicCursol()
{
	// Line 313, Address: 0x1004270, Func Offset: 0
	// Line 314, Address: 0x1004278, Func Offset: 0x8
	// Line 315, Address: 0x1004288, Func Offset: 0x18
	// Func End, Address: 0x1004298, Func Offset: 0x28
}

// 
// Start address: 0x10042a0
void DispSonicCursol(tagPOINT point)
{
	// Line 320, Address: 0x10042a0, Func Offset: 0
	// Line 321, Address: 0x10042ac, Func Offset: 0xc
	// Line 322, Address: 0x10042b8, Func Offset: 0x18
	// Line 323, Address: 0x10042c8, Func Offset: 0x28
	// Line 325, Address: 0x10042dc, Func Offset: 0x3c
	// Line 327, Address: 0x1004334, Func Offset: 0x94
	// Line 328, Address: 0x1004340, Func Offset: 0xa0
	// Line 330, Address: 0x1004350, Func Offset: 0xb0
	// Line 332, Address: 0x1004360, Func Offset: 0xc0
	// Line 334, Address: 0x10043ac, Func Offset: 0x10c
	// Line 337, Address: 0x10043b4, Func Offset: 0x114
	// Line 340, Address: 0x1004400, Func Offset: 0x160
	// Func End, Address: 0x1004410, Func Offset: 0x170
}

// 
// Start address: 0x1004410
void MovSonicCursol(tagPOINT point)
{
	// Line 345, Address: 0x1004410, Func Offset: 0
	// Line 346, Address: 0x100441c, Func Offset: 0xc
	// Line 347, Address: 0x1004424, Func Offset: 0x14
	// Line 350, Address: 0x1004460, Func Offset: 0x50
	// Line 351, Address: 0x1004474, Func Offset: 0x64
	// Line 352, Address: 0x100449c, Func Offset: 0x8c
	// Line 353, Address: 0x10044b0, Func Offset: 0xa0
	// Line 354, Address: 0x10044c0, Func Offset: 0xb0
	// Line 356, Address: 0x10044d4, Func Offset: 0xc4
	// Line 358, Address: 0x100452c, Func Offset: 0x11c
	// Line 360, Address: 0x100454c, Func Offset: 0x13c
	// Line 362, Address: 0x1004598, Func Offset: 0x188
	// Line 365, Address: 0x10045a0, Func Offset: 0x190
	// Line 368, Address: 0x10045ec, Func Offset: 0x1dc
	// Func End, Address: 0x10045fc, Func Offset: 0x1ec
}

// 
// Start address: 0x1004600
void RunSonicCursol(tagPOINT point)
{
	_anon0 sx;
	_anon0 sy;
	// Line 390, Address: 0x1004600, Func Offset: 0
	// Line 393, Address: 0x100460c, Func Offset: 0xc
	// Line 394, Address: 0x1004620, Func Offset: 0x20
	// Line 395, Address: 0x1004644, Func Offset: 0x44
	// Line 396, Address: 0x1004668, Func Offset: 0x68
	// Line 397, Address: 0x100468c, Func Offset: 0x8c
	// Line 398, Address: 0x1004700, Func Offset: 0x100
	// Line 399, Address: 0x1004724, Func Offset: 0x124
	// Line 400, Address: 0x1004798, Func Offset: 0x198
	// Line 401, Address: 0x10047b0, Func Offset: 0x1b0
	// Line 402, Address: 0x10047c8, Func Offset: 0x1c8
	// Line 403, Address: 0x10047d4, Func Offset: 0x1d4
	// Func End, Address: 0x10047e4, Func Offset: 0x1e4
}

// 
// Start address: 0x10047f0
int isqrt(int xx)
{
	int s;
	int t;
	// Line 405, Address: 0x10047f0, Func Offset: 0
	// Line 408, Address: 0x1004800, Func Offset: 0x10
	// Line 409, Address: 0x1004818, Func Offset: 0x28
	// Line 410, Address: 0x1004820, Func Offset: 0x30
	// Line 412, Address: 0x1004844, Func Offset: 0x54
	// Line 413, Address: 0x1004848, Func Offset: 0x58
	// Line 414, Address: 0x1004868, Func Offset: 0x78
	// Line 415, Address: 0x1004874, Func Offset: 0x84
	// Line 416, Address: 0x1004878, Func Offset: 0x88
	// Func End, Address: 0x100488c, Func Offset: 0x9c
}

// 
// Start address: 0x1004890
void UpdateSonicCursol()
{
	// Line 420, Address: 0x1004890, Func Offset: 0
	// Line 421, Address: 0x1004898, Func Offset: 0x8
	// Line 423, Address: 0x10048ac, Func Offset: 0x1c
	// Line 425, Address: 0x10048c8, Func Offset: 0x38
	// Line 427, Address: 0x10048e8, Func Offset: 0x58
	// Line 428, Address: 0x10048f0, Func Offset: 0x60
	// Line 429, Address: 0x1004918, Func Offset: 0x88
	// Line 430, Address: 0x1004940, Func Offset: 0xb0
	// Line 431, Address: 0x1004968, Func Offset: 0xd8
	// Line 432, Address: 0x1004974, Func Offset: 0xe4
	// Line 434, Address: 0x1004984, Func Offset: 0xf4
	// Line 436, Address: 0x1004994, Func Offset: 0x104
	// Line 438, Address: 0x10049e0, Func Offset: 0x150
	// Line 441, Address: 0x10049e8, Func Offset: 0x158
	// Line 445, Address: 0x1004a34, Func Offset: 0x1a4
	// Line 447, Address: 0x1004a8c, Func Offset: 0x1fc
	// Line 448, Address: 0x1004a94, Func Offset: 0x204
	// Line 454, Address: 0x1004aa8, Func Offset: 0x218
	// Line 455, Address: 0x1004ac8, Func Offset: 0x238
	// Line 458, Address: 0x1004ae8, Func Offset: 0x258
	// Line 459, Address: 0x1004b00, Func Offset: 0x270
	// Line 461, Address: 0x1004b18, Func Offset: 0x288
	// Line 463, Address: 0x1004b70, Func Offset: 0x2e0
	// Line 464, Address: 0x1004b80, Func Offset: 0x2f0
	// Line 466, Address: 0x1004bd8, Func Offset: 0x348
	// Line 467, Address: 0x1004be8, Func Offset: 0x358
	// Line 469, Address: 0x1004c18, Func Offset: 0x388
	// Line 470, Address: 0x1004c20, Func Offset: 0x390
	// Line 471, Address: 0x1004c38, Func Offset: 0x3a8
	// Line 473, Address: 0x1004c40, Func Offset: 0x3b0
	// Line 475, Address: 0x1004c58, Func Offset: 0x3c8
	// Func End, Address: 0x1004c68, Func Offset: 0x3d8
}

