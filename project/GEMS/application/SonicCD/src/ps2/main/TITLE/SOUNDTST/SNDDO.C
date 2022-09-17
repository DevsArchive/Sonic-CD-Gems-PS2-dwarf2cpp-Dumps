typedef struct hmx_bitmap;
typedef struct hmx_ddagrid;
typedef struct hmx_renderer_context;
typedef struct draw_context;
typedef struct hmx_grid;
typedef struct hmx_surface;
typedef struct hmx_environment;
typedef struct hmx_background;
typedef struct hmx_sprite;
typedef struct _anon0;
typedef struct tagPALETTEENTRY;
typedef struct tagPOINT;
typedef struct _RECT;

typedef hmx_bitmap*(*type_6)(hmx_environment*, int, int);
typedef void(*type_12)(hmx_environment*, hmx_bitmap*);
typedef void(*type_14)(short);
typedef void*(*type_17)(hmx_bitmap*);
typedef void(*type_18)(short);
typedef void(*type_19)(short);
typedef void(*type_20)(hmx_sprite*, int, int);
typedef void(*type_22)(hmx_sprite*, hmx_bitmap*);

typedef tagPALETTEENTRY type_0[16];
typedef unsigned char type_1[34];
typedef char type_2[250];
typedef hmx_bitmap* type_3[1000];
typedef int type_4[1000];
typedef tagPALETTEENTRY type_5[16];
typedef hmx_grid* type_7[3];
typedef tagPALETTEENTRY type_8[16];
typedef hmx_bitmap* type_9[2048];
typedef tagPALETTEENTRY type_10[16];
typedef hmx_bitmap* type_11[2048];
typedef hmx_grid* type_13[8];
typedef unsigned int type_15[4];
typedef hmx_bitmap* type_16[512];
typedef unsigned char type_21[80];
typedef tagPALETTEENTRY type_23[16];
typedef tagPALETTEENTRY type_24[16];

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

struct hmx_environment
{
};

struct hmx_background
{
};

struct hmx_sprite
{
};

struct _anon0
{
	int x;
	int y;
	int dx;
	int dy;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct tagPOINT
{
	int x;
	int y;
};

struct _RECT
{
	int left;
	int top;
	int right;
	int bottom;
};

unsigned char tblPCM[80];
unsigned char tblDA[34];
int bKakusi;
unsigned short nSequenceNum;
unsigned short nMenuKind;
unsigned short nPCMNumberIndx;
unsigned short nDANumberIndx;
void(*CDPause)(short);
unsigned short swData1;
void(*CDPlay)(short);
void(*WaveRequest)(short);
int nTimerCunt;
unsigned int HorizInit;
tagPALETTEENTRY MIYAKEcolor[16];
tagPALETTEENTRY NISIMURAcolor[16];
tagPALETTEENTRY SANPEIcolor[16];
tagPALETTEENTRY YAMAGU1color[16];
tagPALETTEENTRY YAMAGU2color[16];
tagPALETTEENTRY HOSHINOcolor[16];
_anon0 CG_Rect;
draw_context* s_ctx;
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
void*(*hmx_bitmap_get_scan0_module)(hmx_bitmap*);
hmx_bitmap*(*hmx_bitmap_create_module)(hmx_environment*, int, int);
hmx_environment* g_env_module;
void(*hmx_bitmap_release_module)(hmx_environment*, hmx_bitmap*);
unsigned int* hBmpBkg;
unsigned int hBkg;
unsigned int hmapwk;
int ErrRet;
char ErrBuf[250];

void SNDDraw();
void UpdateMenu();
void SNDStart();
void SNDMenu();
int SNDEnd();
int SNDEnd2();
int SNDEnd3();
int MC_SONICCreate(short cgno);
int MC_SONICDelete();
void SNDKakusi();
void SNDSpecialMes();

// 
// Start address: 0x10009b0
void SNDDraw()
{
	// Line 92, Address: 0x10009b0, Func Offset: 0
	// Line 93, Address: 0x10009b8, Func Offset: 0x8
	// Line 95, Address: 0x10009d0, Func Offset: 0x20
	// Line 97, Address: 0x10009d8, Func Offset: 0x28
	// Func End, Address: 0x10009e8, Func Offset: 0x38
}

// 
// Start address: 0x10009f0
void UpdateMenu()
{
	// Line 102, Address: 0x10009f0, Func Offset: 0
	// Line 103, Address: 0x10009f8, Func Offset: 0x8
	// Line 104, Address: 0x1000a24, Func Offset: 0x34
	// Line 105, Address: 0x1000a30, Func Offset: 0x40
	// Line 106, Address: 0x1000a5c, Func Offset: 0x6c
	// Line 107, Address: 0x1000a68, Func Offset: 0x78
	// Func End, Address: 0x1000a78, Func Offset: 0x88
}

// 
// Start address: 0x1000a80
void SNDStart()
{
	int n;
	// Line 112, Address: 0x1000a80, Func Offset: 0
	// Line 115, Address: 0x1000a8c, Func Offset: 0xc
	// Line 116, Address: 0x1000a98, Func Offset: 0x18
	// Line 118, Address: 0x1000aa4, Func Offset: 0x24
	// Line 119, Address: 0x1000ab0, Func Offset: 0x30
	// Line 120, Address: 0x1000ac4, Func Offset: 0x44
	// Line 122, Address: 0x1000ad0, Func Offset: 0x50
	// Line 123, Address: 0x1000adc, Func Offset: 0x5c
	// Line 124, Address: 0x1000af0, Func Offset: 0x70
	// Line 125, Address: 0x1000afc, Func Offset: 0x7c
	// Line 126, Address: 0x1000b04, Func Offset: 0x84
	// Line 127, Address: 0x1000b18, Func Offset: 0x98
	// Line 128, Address: 0x1000b2c, Func Offset: 0xac
	// Line 129, Address: 0x1000b40, Func Offset: 0xc0
	// Line 130, Address: 0x1000b4c, Func Offset: 0xcc
	// Func End, Address: 0x1000b60, Func Offset: 0xe0
}

// 
// Start address: 0x1000b60
void SNDMenu()
{
	unsigned short nMenuKindOld;
	// Line 135, Address: 0x1000b60, Func Offset: 0
	// Line 138, Address: 0x1000b74, Func Offset: 0x14
	// Line 140, Address: 0x1000b8c, Func Offset: 0x2c
	// Line 141, Address: 0x1000b98, Func Offset: 0x38
	// Line 142, Address: 0x1000bdc, Func Offset: 0x7c
	// Line 144, Address: 0x1000bf4, Func Offset: 0x94
	// Line 145, Address: 0x1000bfc, Func Offset: 0x9c
	// Line 147, Address: 0x1000c04, Func Offset: 0xa4
	// Line 148, Address: 0x1000c0c, Func Offset: 0xac
	// Line 150, Address: 0x1000c24, Func Offset: 0xc4
	// Line 151, Address: 0x1000c30, Func Offset: 0xd0
	// Line 152, Address: 0x1000c74, Func Offset: 0x114
	// Line 154, Address: 0x1000c8c, Func Offset: 0x12c
	// Line 155, Address: 0x1000c94, Func Offset: 0x134
	// Line 157, Address: 0x1000c9c, Func Offset: 0x13c
	// Line 158, Address: 0x1000ca4, Func Offset: 0x144
	// Line 160, Address: 0x1000cbc, Func Offset: 0x15c
	// Line 162, Address: 0x1000cd4, Func Offset: 0x174
	// Line 163, Address: 0x1000cfc, Func Offset: 0x19c
	// Line 165, Address: 0x1000d10, Func Offset: 0x1b0
	// Line 166, Address: 0x1000d24, Func Offset: 0x1c4
	// Line 169, Address: 0x1000d2c, Func Offset: 0x1cc
	// Line 170, Address: 0x1000d54, Func Offset: 0x1f4
	// Line 171, Address: 0x1000d68, Func Offset: 0x208
	// Line 173, Address: 0x1000d90, Func Offset: 0x230
	// Line 174, Address: 0x1000d98, Func Offset: 0x238
	// Line 175, Address: 0x1000da0, Func Offset: 0x240
	// Line 177, Address: 0x1000db8, Func Offset: 0x258
	// Line 179, Address: 0x1000dd0, Func Offset: 0x270
	// Line 180, Address: 0x1000df8, Func Offset: 0x298
	// Line 182, Address: 0x1000e0c, Func Offset: 0x2ac
	// Line 183, Address: 0x1000e20, Func Offset: 0x2c0
	// Line 186, Address: 0x1000e28, Func Offset: 0x2c8
	// Line 187, Address: 0x1000e50, Func Offset: 0x2f0
	// Line 188, Address: 0x1000e64, Func Offset: 0x304
	// Line 190, Address: 0x1000e8c, Func Offset: 0x32c
	// Line 191, Address: 0x1000e94, Func Offset: 0x334
	// Line 193, Address: 0x1000e9c, Func Offset: 0x33c
	// Line 196, Address: 0x1000eb4, Func Offset: 0x354
	// Line 197, Address: 0x1000ee4, Func Offset: 0x384
	// Line 198, Address: 0x1000eec, Func Offset: 0x38c
	// Line 199, Address: 0x1000ef4, Func Offset: 0x394
	// Line 200, Address: 0x1000f00, Func Offset: 0x3a0
	// Line 201, Address: 0x1000f0c, Func Offset: 0x3ac
	// Line 202, Address: 0x1000f20, Func Offset: 0x3c0
	// Line 203, Address: 0x1000f34, Func Offset: 0x3d4
	// Line 204, Address: 0x1000f40, Func Offset: 0x3e0
	// Line 206, Address: 0x1000f48, Func Offset: 0x3e8
	// Line 207, Address: 0x1000f78, Func Offset: 0x418
	// Line 208, Address: 0x1000f80, Func Offset: 0x420
	// Line 209, Address: 0x1000f88, Func Offset: 0x428
	// Line 210, Address: 0x1000f94, Func Offset: 0x434
	// Line 211, Address: 0x1000fa0, Func Offset: 0x440
	// Line 212, Address: 0x1000fb4, Func Offset: 0x454
	// Line 213, Address: 0x1000fc8, Func Offset: 0x468
	// Line 214, Address: 0x1000fd4, Func Offset: 0x474
	// Line 216, Address: 0x1000fdc, Func Offset: 0x47c
	// Line 217, Address: 0x100100c, Func Offset: 0x4ac
	// Line 218, Address: 0x1001014, Func Offset: 0x4b4
	// Line 219, Address: 0x100101c, Func Offset: 0x4bc
	// Line 220, Address: 0x1001028, Func Offset: 0x4c8
	// Line 221, Address: 0x1001034, Func Offset: 0x4d4
	// Line 222, Address: 0x1001048, Func Offset: 0x4e8
	// Line 223, Address: 0x100105c, Func Offset: 0x4fc
	// Line 224, Address: 0x1001068, Func Offset: 0x508
	// Line 226, Address: 0x1001070, Func Offset: 0x510
	// Line 227, Address: 0x10010a0, Func Offset: 0x540
	// Line 228, Address: 0x10010a8, Func Offset: 0x548
	// Line 229, Address: 0x10010b0, Func Offset: 0x550
	// Line 230, Address: 0x10010bc, Func Offset: 0x55c
	// Line 231, Address: 0x10010c8, Func Offset: 0x568
	// Line 232, Address: 0x10010dc, Func Offset: 0x57c
	// Line 233, Address: 0x10010f0, Func Offset: 0x590
	// Line 234, Address: 0x10010fc, Func Offset: 0x59c
	// Line 237, Address: 0x1001104, Func Offset: 0x5a4
	// Line 238, Address: 0x1001134, Func Offset: 0x5d4
	// Line 239, Address: 0x1001148, Func Offset: 0x5e8
	// Line 240, Address: 0x1001150, Func Offset: 0x5f0
	// Line 241, Address: 0x100115c, Func Offset: 0x5fc
	// Line 244, Address: 0x1001164, Func Offset: 0x604
	// Line 245, Address: 0x1001194, Func Offset: 0x634
	// Line 246, Address: 0x10011a8, Func Offset: 0x648
	// Line 247, Address: 0x10011bc, Func Offset: 0x65c
	// Line 248, Address: 0x10011c4, Func Offset: 0x664
	// Line 249, Address: 0x10011cc, Func Offset: 0x66c
	// Line 250, Address: 0x10011d8, Func Offset: 0x678
	// Line 251, Address: 0x10011e4, Func Offset: 0x684
	// Line 252, Address: 0x10011f0, Func Offset: 0x690
	// Line 255, Address: 0x10011f8, Func Offset: 0x698
	// Line 258, Address: 0x1001210, Func Offset: 0x6b0
	// Line 259, Address: 0x1001240, Func Offset: 0x6e0
	// Line 262, Address: 0x1001248, Func Offset: 0x6e8
	// Line 263, Address: 0x100125c, Func Offset: 0x6fc
	// Line 265, Address: 0x100128c, Func Offset: 0x72c
	// Line 266, Address: 0x1001294, Func Offset: 0x734
	// Line 268, Address: 0x100129c, Func Offset: 0x73c
	// Line 270, Address: 0x10012b4, Func Offset: 0x754
	// Line 271, Address: 0x10012cc, Func Offset: 0x76c
	// Line 273, Address: 0x10012dc, Func Offset: 0x77c
	// Func End, Address: 0x10012f8, Func Offset: 0x798
}

// 
// Start address: 0x1001300
int SNDEnd()
{
	int ret;
	// Line 278, Address: 0x1001300, Func Offset: 0
	// Line 279, Address: 0x1001308, Func Offset: 0x8
	// Line 281, Address: 0x100130c, Func Offset: 0xc
	// Line 283, Address: 0x100131c, Func Offset: 0x1c
	// Line 285, Address: 0x1001320, Func Offset: 0x20
	// Line 286, Address: 0x1001324, Func Offset: 0x24
	// Func End, Address: 0x1001334, Func Offset: 0x34
}

// 
// Start address: 0x1001340
int SNDEnd2()
{
	int ret;
	// Line 288, Address: 0x1001340, Func Offset: 0
	// Line 289, Address: 0x1001348, Func Offset: 0x8
	// Line 291, Address: 0x100134c, Func Offset: 0xc
	// Line 293, Address: 0x100135c, Func Offset: 0x1c
	// Line 295, Address: 0x1001360, Func Offset: 0x20
	// Line 296, Address: 0x1001364, Func Offset: 0x24
	// Func End, Address: 0x1001374, Func Offset: 0x34
}

// 
// Start address: 0x1001380
int SNDEnd3()
{
	int ret;
	// Line 298, Address: 0x1001380, Func Offset: 0
	// Line 299, Address: 0x1001388, Func Offset: 0x8
	// Line 301, Address: 0x100138c, Func Offset: 0xc
	// Line 303, Address: 0x100139c, Func Offset: 0x1c
	// Line 305, Address: 0x10013a0, Func Offset: 0x20
	// Line 306, Address: 0x10013a4, Func Offset: 0x24
	// Func End, Address: 0x10013b4, Func Offset: 0x34
}

// 
// Start address: 0x10013c0
int MC_SONICCreate(short cgno)
{
	unsigned int mask[4];
	_RECT rect;
	_RECT rect2;
	_RECT rect3;
	tagPOINT pt;
	tagPOINT pt2;
	hmx_bitmap* bmp;
	// Line 360, Address: 0x10013c0, Func Offset: 0
	// Line 361, Address: 0x10013d0, Func Offset: 0x10
	// Line 362, Address: 0x1001400, Func Offset: 0x40
	// Line 363, Address: 0x1001414, Func Offset: 0x54
	// Line 364, Address: 0x1001428, Func Offset: 0x68
	// Line 366, Address: 0x100143c, Func Offset: 0x7c
	// Line 367, Address: 0x100146c, Func Offset: 0xac
	// Line 392, Address: 0x1001480, Func Offset: 0xc0
	// Line 395, Address: 0x10014cc, Func Offset: 0x10c
	// Line 396, Address: 0x10014e0, Func Offset: 0x120
	// Line 398, Address: 0x10014e8, Func Offset: 0x128
	// Line 399, Address: 0x10014fc, Func Offset: 0x13c
	// Line 401, Address: 0x1001504, Func Offset: 0x144
	// Line 402, Address: 0x1001518, Func Offset: 0x158
	// Line 404, Address: 0x1001520, Func Offset: 0x160
	// Line 405, Address: 0x1001534, Func Offset: 0x174
	// Line 407, Address: 0x100153c, Func Offset: 0x17c
	// Line 408, Address: 0x1001550, Func Offset: 0x190
	// Line 412, Address: 0x1001564, Func Offset: 0x1a4
	// Line 414, Address: 0x1001588, Func Offset: 0x1c8
	// Line 418, Address: 0x10015d4, Func Offset: 0x214
	// Line 419, Address: 0x100160c, Func Offset: 0x24c
	// Line 422, Address: 0x1001614, Func Offset: 0x254
	// Line 423, Address: 0x100164c, Func Offset: 0x28c
	// Line 426, Address: 0x1001654, Func Offset: 0x294
	// Line 427, Address: 0x100168c, Func Offset: 0x2cc
	// Line 430, Address: 0x1001694, Func Offset: 0x2d4
	// Line 431, Address: 0x10016cc, Func Offset: 0x30c
	// Line 436, Address: 0x10016d4, Func Offset: 0x314
	// Line 437, Address: 0x100171c, Func Offset: 0x35c
	// Line 447, Address: 0x1001764, Func Offset: 0x3a4
	// Line 448, Address: 0x1001770, Func Offset: 0x3b0
	// Line 449, Address: 0x1001798, Func Offset: 0x3d8
	// Line 450, Address: 0x10017c4, Func Offset: 0x404
	// Line 452, Address: 0x10017d4, Func Offset: 0x414
	// Line 453, Address: 0x10017d8, Func Offset: 0x418
	// Func End, Address: 0x10017ec, Func Offset: 0x42c
}

// 
// Start address: 0x10017f0
int MC_SONICDelete()
{
	// Line 457, Address: 0x10017f0, Func Offset: 0
	// Line 458, Address: 0x10017f8, Func Offset: 0x8
	// Line 459, Address: 0x100181c, Func Offset: 0x2c
	// Line 460, Address: 0x1001828, Func Offset: 0x38
	// Line 463, Address: 0x1001834, Func Offset: 0x44
	// Line 464, Address: 0x1001838, Func Offset: 0x48
	// Func End, Address: 0x1001848, Func Offset: 0x58
}

// 
// Start address: 0x1001850
void SNDKakusi()
{
	// Line 466, Address: 0x1001850, Func Offset: 0
	// Line 467, Address: 0x1001858, Func Offset: 0x8
	// Line 468, Address: 0x1001884, Func Offset: 0x34
	// Line 469, Address: 0x10018c8, Func Offset: 0x78
	// Line 470, Address: 0x10018ec, Func Offset: 0x9c
	// Line 473, Address: 0x1001910, Func Offset: 0xc0
	// Func End, Address: 0x1001920, Func Offset: 0xd0
}

// 
// Start address: 0x1001920
void SNDSpecialMes()
{
	// Line 475, Address: 0x1001920, Func Offset: 0
	// Line 476, Address: 0x1001928, Func Offset: 0x8
	// Line 477, Address: 0x1001954, Func Offset: 0x34
	// Line 478, Address: 0x1001998, Func Offset: 0x78
	// Line 479, Address: 0x10019a0, Func Offset: 0x80
	// Line 480, Address: 0x10019a8, Func Offset: 0x88
	// Line 483, Address: 0x10019b4, Func Offset: 0x94
	// Func End, Address: 0x10019c4, Func Offset: 0xa4
}

