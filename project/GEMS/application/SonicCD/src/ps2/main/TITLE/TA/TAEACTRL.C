typedef struct hmx_environment;
typedef struct hmx_sprite;
typedef struct _anon0;
typedef struct _anon1;
typedef struct hmx_grid;
typedef struct _anon2;
typedef struct ld_pack_header;
typedef struct hmx_renderer_base;
typedef struct ld_scroll_header;
typedef struct tagPALETTEENTRY;
typedef struct _anon3;
typedef struct draw_context;
typedef union _anon4;
typedef struct ld_bitmap_inf;
typedef struct hmx_bitmap;
typedef struct hmx_ddagrid;
typedef struct _anon5;
typedef struct hmx_renderer_context;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct hmx_background;
typedef struct hmx_surface;
typedef struct tagPOINT;
typedef struct _anon11;
typedef struct _POINTL;
typedef struct _anon12;
typedef struct _RECTL;

typedef void(*type_2)(hmx_environment*, hmx_grid*);
typedef void(*type_6)(char*);
typedef int(*type_8)(char*);
typedef hmx_renderer_base*(*type_14)(hmx_grid*);
typedef void(*type_15)(char*, char*);
typedef int(*type_16)(int, void*, int);
typedef void(*type_17)(hmx_grid*, int, int);
typedef void(*type_20)(hmx_grid*, int, int, int, int);
typedef void(*type_23)(int);
typedef void(*type_24)(void*, void*, int, int, int, int, int);
typedef void(*type_28)(hmx_grid*, int, int, hmx_bitmap*, int);
typedef void*(*type_32)(hmx_environment*, char*);
typedef void(*type_37)(hmx_renderer_context*, int, hmx_renderer_base*);
typedef void(*type_45)(hmx_background*, int);
typedef void(*type_46)(hmx_renderer_context*);
typedef void*(*type_48)(int);
typedef hmx_bitmap*(*type_49)(hmx_environment*, int, int);
typedef void(*type_53)(hmx_renderer_context*, hmx_surface*);
typedef void(*type_54)(void*);
typedef void(*type_59)(hmx_environment*, hmx_bitmap*);
typedef hmx_renderer_base*(*type_64)(hmx_sprite*);
typedef void*(*type_70)(hmx_bitmap*);
typedef void(*type_71)(hmx_sprite*, int, int);
typedef void(*type_74)(hmx_bitmap*, int);
typedef void(*type_75)(hmx_sprite*, hmx_bitmap*);
typedef void(*type_77)(hmx_environment*, void*);
typedef void(*type_78)();
typedef hmx_grid*(*type_81)(hmx_environment*, int, int, int, int);

typedef unsigned short type_0[13];
typedef unsigned short type_1[13];
typedef char type_3[12];
typedef unsigned char type_4[8];
typedef unsigned short type_5[12];
typedef unsigned short type_7[12][2];
typedef unsigned char type_9[8];
typedef unsigned short type_10[18];
typedef unsigned short type_11[18][2];
typedef char* type_12[8];
typedef char* type_13[8][2];
typedef _anon1 type_18[3];
typedef char type_19[8];
typedef char type_21[20];
typedef unsigned int type_22[768];
typedef unsigned char type_25[766];
typedef unsigned int type_26[2];
typedef short type_27[4];
typedef ld_bitmap_inf type_29[1];
typedef unsigned char type_30[3];
typedef unsigned char type_31[3][8];
typedef unsigned int type_33[8];
typedef unsigned int type_34[4];
typedef unsigned short type_35[18];
typedef unsigned short type_36[18][4];
typedef unsigned short type_38[18][4][7];
typedef unsigned short type_39[18];
typedef unsigned short type_40[1];
typedef unsigned short type_41[18][32];
typedef unsigned short type_42[1][2];
typedef unsigned int* type_43[768];
typedef char type_44[4];
typedef unsigned short type_47[13];
typedef char type_50[9];
typedef char type_51[12];
typedef unsigned int* type_52[2];
typedef tagPOINT type_55[2];
typedef _anon11 type_56[8];
typedef char type_57[80];
typedef hmx_bitmap* type_58[1000];
typedef int type_60[1000];
typedef _anon8 type_61[3];
typedef char type_62[80];
typedef _anon8 type_63[3][3];
typedef _anon8 type_65[3][3][7];
typedef hmx_grid* type_66[3];
typedef _anon8 type_67[3];
typedef _anon8 type_68[3][7];
typedef hmx_bitmap* type_69[2048];
typedef hmx_bitmap* type_72[2048];
typedef hmx_grid* type_73[8];
typedef hmx_bitmap* type_76[512];
typedef char type_79[250];
typedef unsigned short type_80[18];
typedef unsigned short type_82[18];
typedef unsigned short type_83[18][32];
typedef unsigned short type_84[18][2];
typedef unsigned short type_85[18][2][8];
typedef unsigned short type_86[18][2][8][2];
typedef unsigned short type_87[1];
typedef unsigned short type_88[1][2];
typedef _anon0 type_89[1];

struct hmx_environment
{
};

struct hmx_sprite
{
};

struct _anon0
{
	_anon1* info;
	int cnt;
};

struct _anon1
{
	unsigned char grid;
	unsigned char x;
	unsigned char y;
	unsigned char xs;
	unsigned char ys;
	unsigned short ofs;
	unsigned char transp;
	char* fn;
};

struct hmx_grid
{
};

struct _anon2
{
	unsigned int dwTyp;
	unsigned int dwSiz;
	unsigned int dwCnt;
	unsigned int dwOff;
};

struct ld_pack_header
{
	int type;
	int size;
	int count;
	int offset;
};

struct hmx_renderer_base
{
};

struct ld_scroll_header
{
	ld_pack_header header;
	short plt[4];
	ld_bitmap_inf bmp[1];
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon3
{
	unsigned int saved;
	char player[12];
	unsigned int roundNo;
	unsigned short year;
	unsigned short month;
	unsigned short date;
	unsigned short hour;
	unsigned short min;
	unsigned short sec;
	_anon8 timeattack[3][3][7];
	_anon8 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
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

union _anon4
{
	int l;
	_anon6 w;
	_anon7 b;
};

struct ld_bitmap_inf
{
	short wx;
	short wy;
};

struct hmx_bitmap
{
};

struct hmx_ddagrid
{
};

struct _anon5
{
	short plring;
	int plscore;
	_anon9 stageno;
	unsigned int TimeWarp;
	void* pSprBmp;
	unsigned int GamePass;
	unsigned char play_start;
	unsigned char pl_suu;
	unsigned char generate_flag;
	unsigned char time_flag;
	unsigned char special_flag;
	int pltime_sb;
	short plxposi_sb;
	short plyposi_sb;
	short scralim_down_sb;
	short scra_h_posit_sb;
	short scra_v_posit_sb;
	short scrb_h_posit_sb;
	short scrb_v_posit_sb;
	short scrc_h_posit_sb;
	short scrc_v_posit_sb;
	short scrz_h_posit_sb;
	short scrz_v_posit_sb;
	short waterposi_m_sb;
	short plmspd_sb;
	short plxspd_sb;
	short plyspd_sb;
	unsigned char plflag_sb;
	unsigned char cddat_sb;
	unsigned char water_flag_sb;
	unsigned char waterflag_sb;
	unsigned char chibi_sb;
	unsigned char prio_sb;
	short plring_s;
	unsigned char plring_f2_s;
	unsigned char plflag;
	_anon9 demoflag;
	_anon9 hintposi;
	unsigned char waterflag;
	unsigned short* ptv_adr;
	unsigned short* sm_adr0;
	int SPEMode;
	unsigned char stagenm;
	unsigned char clrspflg_save;
	unsigned char ta_flag;
	unsigned char gf_flag;
	unsigned char projector_flag;
	unsigned char flagworkcnt;
	unsigned char flagworkcnt2;
	unsigned char flagwork[766];
	unsigned int ta_time;
	unsigned char ta_Menu1;
	unsigned char ta_Round;
	unsigned char ta_Zone;
	unsigned char EndingMesType;
	int extrascore;
	unsigned char emie3end;
	unsigned char SpecialTime;
	unsigned char bRestart;
	unsigned char User;
	unsigned short wReserved1;
	unsigned short wReserved2;
};

struct hmx_renderer_context
{
};

struct _anon6
{
	short l;
	short h;
};

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

struct _anon8
{
	unsigned int time;
	char name[4];
};

union _anon9
{
	short w;
	_anon10 b;
};

struct _anon10
{
	char l;
	char h;
};

struct hmx_background
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

struct _anon11
{
	int x;
	int y;
	int dx;
	int dy;
};

struct _POINTL
{
	int x;
	int y;
};

struct _anon12
{
	unsigned short mTile;
	unsigned short nTile;
};

struct _RECTL
{
	int left;
	int top;
	int right;
	int bottom;
};

int TileCnt;
int SprBmpCnt;
_anon11 BkgRect;
_anon11 GridRectPic;
tagPOINT ptSprLocPic[2];
unsigned char TAGridSize[3][8];
_anon1 MapInfo1[3];
_anon0 MapInfoTbl[1];
unsigned short MapZoneMenuNormal[13];
unsigned short MapZoneMenuSP[13];
unsigned short MapZoneMenuSpace;
unsigned short MapRoundSpace[1][2];
unsigned short MapExitSpace[1][2];
unsigned short MapRound[18][2][8][2];
unsigned short MapRec[18][32];
unsigned short MapRecSP[18][32];
unsigned short MapRecRound[18][4][7];
void(*sOutputDebugString)(char*);
char ErrBuf[250];
void(*sPrintf)(char*, char*);
void(*FlipToScreen_module)();
void(*hmx_renderer_context_draw_module)(hmx_renderer_context*, hmx_surface*);
draw_context* s_ctx;
void(*hmx_renderer_context_add_module)(hmx_renderer_context*, int, hmx_renderer_base*);
hmx_renderer_base*(*hmx_sprite_base_module)(hmx_sprite*);
hmx_renderer_base*(*hmx_grid_base_module)(hmx_grid*);
unsigned int hGrid[8];
void(*hmx_renderer_context_clear_module)(hmx_renderer_context*);
void(*hmx_free_module)(hmx_environment*, void*);
void(*hmx_bitmap_set_transparency_module)(hmx_bitmap*, int);
void(*ld_bitmap_4to8_module)(void*, void*, int, int, int, int, int);
void*(*hmx_bitmap_get_scan0_module)(hmx_bitmap*);
hmx_bitmap*(*hmx_bitmap_create_module)(hmx_environment*, int, int);
void*(*ld_load_cmpfile_module)(hmx_environment*, char*);
hmx_environment* g_env_module;
hmx_environment* g_loader_module;
void(*hmx_grid_set_view_module)(hmx_grid*, int, int, int, int);
_anon11 GridRect[8];
void(*hmx_grid_set_position_module)(hmx_grid*, int, int);
hmx_grid*(*hmx_grid_create_module)(hmx_environment*, int, int, int, int);
void(*hmx_grid_release_module)(hmx_environment*, hmx_grid*);
void(*sMemFree)(void*);
void(*hmx_grid_set_tile_module)(hmx_grid*, int, int, hmx_bitmap*, int);
void(*sCloseFile)(int);
int(*sReadFile)(int, void*, int);
int(*sOpenFile)(char*);
void*(*sMemAlloc)(int);
void(*hmx_background_set_background_module)(hmx_background*, int);
char* lpPicBits4[8][2];
void(*hmx_sprite_set_bitmap_module)(hmx_sprite*, hmx_bitmap*);
void(*hmx_sprite_set_position_module)(hmx_sprite*, int, int);
char* lpPicBits8;
int gMenuRound;
int gMenu1;
int gNewMenu2;
int gMenuZone;
int gMenu2;
unsigned int* hBmpPic[2];
unsigned int* hBmpBkg;
unsigned int* hGridBmp[768];
unsigned int hBkg;
unsigned int hSprPic[2];
unsigned int hTile[768];
void(*hmx_bitmap_release_module)(hmx_environment*, hmx_bitmap*);
_anon3* lpScoreData;
int gRankY;
int gRankX;
unsigned int gTimer;
int gMove;
int gNewRankX;
int gNewMenuZone;
int gZure;
int gNewMenuRound;
int gNewMenu1;
int ErrRet;
_anon5* lpKeepWork;
int* lpFadeFlag;
_anon4* lphscrollbuff;
unsigned short* pmapwk;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;
tagPALETTEENTRY* lpcolorwk;

void EAError(int ret, int line, char* str);
void srfDraw();
int ld_load_grid_module(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size);
int TAGridBmpCreate();
int TAGridCreate();
int GridInitSub(char* path, _anon1* pInfo);
int TAGridInit();
int BkgBmpCreate_TA();
int BkgBmpDelete_TA();
int BkgCreate_TA();
int BkgDelete_TA();
int LoadPicBmp();
unsigned int CreatePic();
void SetPic(int mode, int round, int zurasi);
unsigned int TA_EACreate();
void DeleteEA();
void DrawTA();
unsigned short GetLFont(char c);
unsigned short GetSFont(char c);
void TimeToAsc8(unsigned int Time, char* p);
void TimeToAsc9(unsigned int Time, char* p);
void PrintTotalTime(int mode, unsigned int b);
void PrintRoundName(int mode, int round, unsigned int b, int grid);
void PrintZoneNo(int mode, int zone);
void PrintZoneSelect(int mode, int round, int zone);
void PrintZoneRecord(int mode, int round, int zone, int rank);
void PrintZoneRecordAll(int mode, int round, int zone);
void PrintMenu2(int mode, int cur, unsigned int b);
void PrintRank(int mode, int rank, unsigned int b);
void PrintRankName(int mode, int ranky, int rankx, char c, unsigned int b);
void Tenmetu();
int TAMove();

// 
// Start address: 0x10021a0
void EAError(int ret, int line, char* str)
{
	char tmpstr[20];
	// Line 503, Address: 0x10021a0, Func Offset: 0
	// Line 506, Address: 0x10021b4, Func Offset: 0x14
	// Line 507, Address: 0x10021c4, Func Offset: 0x24
	// Line 508, Address: 0x10021e8, Func Offset: 0x48
	// Line 509, Address: 0x10021f8, Func Offset: 0x58
	// Line 510, Address: 0x100221c, Func Offset: 0x7c
	// Line 511, Address: 0x100222c, Func Offset: 0x8c
	// Line 512, Address: 0x1002250, Func Offset: 0xb0
	// Line 513, Address: 0x1002260, Func Offset: 0xc0
	// Line 514, Address: 0x1002284, Func Offset: 0xe4
	// Line 515, Address: 0x1002294, Func Offset: 0xf4
	// Line 516, Address: 0x10022b8, Func Offset: 0x118
	// Line 517, Address: 0x10022c8, Func Offset: 0x128
	// Line 519, Address: 0x10022e4, Func Offset: 0x144
	// Line 521, Address: 0x1002314, Func Offset: 0x174
	// Line 522, Address: 0x100232c, Func Offset: 0x18c
	// Func End, Address: 0x100233c, Func Offset: 0x19c
}

// 
// Start address: 0x1002340
void srfDraw()
{
	int i;
	// Line 525, Address: 0x1002340, Func Offset: 0
	// Line 526, Address: 0x100234c, Func Offset: 0xc
	// Line 529, Address: 0x1002360, Func Offset: 0x20
	// Line 532, Address: 0x100237c, Func Offset: 0x3c
	// Line 533, Address: 0x1002388, Func Offset: 0x48
	// Line 534, Address: 0x10023a4, Func Offset: 0x64
	// Line 535, Address: 0x10023f0, Func Offset: 0xb0
	// Line 537, Address: 0x1002400, Func Offset: 0xc0
	// Line 538, Address: 0x100240c, Func Offset: 0xcc
	// Line 539, Address: 0x1002428, Func Offset: 0xe8
	// Line 550, Address: 0x1002484, Func Offset: 0x144
	// Line 552, Address: 0x1002490, Func Offset: 0x150
	// Line 554, Address: 0x10024b8, Func Offset: 0x178
	// Line 555, Address: 0x10024c8, Func Offset: 0x188
	// Func End, Address: 0x10024dc, Func Offset: 0x19c
}

// 
// Start address: 0x10024e0
int ld_load_grid_module(hmx_environment* buffer, char* file, hmx_environment* env, hmx_bitmap** bitmaps, int size)
{
	int count;
	void* expbuf;
	ld_scroll_header* header;
	int read_count;
	unsigned char* pixbuf;
	int i;
	int palet;
	int paletcnt;
	int palet_offs;
	ld_bitmap_inf* s;
	int wx;
	int wy;
	hmx_bitmap* bmp;
	// Line 563, Address: 0x10024e0, Func Offset: 0
	// Line 564, Address: 0x1002520, Func Offset: 0x40
	// Line 566, Address: 0x1002528, Func Offset: 0x48
	// Line 574, Address: 0x100252c, Func Offset: 0x4c
	// Line 575, Address: 0x1002530, Func Offset: 0x50
	// Line 576, Address: 0x1002534, Func Offset: 0x54
	// Line 578, Address: 0x1002538, Func Offset: 0x58
	// Line 579, Address: 0x1002544, Func Offset: 0x64
	// Line 580, Address: 0x1002554, Func Offset: 0x74
	// Line 582, Address: 0x1002568, Func Offset: 0x88
	// Line 583, Address: 0x1002584, Func Offset: 0xa4
	// Line 587, Address: 0x100258c, Func Offset: 0xac
	// Line 588, Address: 0x1002590, Func Offset: 0xb0
	// Line 589, Address: 0x1002594, Func Offset: 0xb4
	// Line 590, Address: 0x10025a4, Func Offset: 0xc4
	// Line 593, Address: 0x10025a8, Func Offset: 0xc8
	// Line 595, Address: 0x10025b4, Func Offset: 0xd4
	// Line 596, Address: 0x10025c0, Func Offset: 0xe0
	// Line 597, Address: 0x10025d0, Func Offset: 0xf0
	// Line 598, Address: 0x10025e0, Func Offset: 0x100
	// Line 600, Address: 0x10025f0, Func Offset: 0x110
	// Line 602, Address: 0x1002610, Func Offset: 0x130
	// Line 604, Address: 0x100261c, Func Offset: 0x13c
	// Line 605, Address: 0x100263c, Func Offset: 0x15c
	// Line 606, Address: 0x1002644, Func Offset: 0x164
	// Line 607, Address: 0x1002680, Func Offset: 0x1a0
	// Line 608, Address: 0x100268c, Func Offset: 0x1ac
	// Line 609, Address: 0x1002698, Func Offset: 0x1b8
	// Line 610, Address: 0x10026a4, Func Offset: 0x1c4
	// Line 614, Address: 0x10026a8, Func Offset: 0x1c8
	// Line 630, Address: 0x10026e8, Func Offset: 0x208
	// Line 632, Address: 0x1002710, Func Offset: 0x230
	// Line 634, Address: 0x1002728, Func Offset: 0x248
	// Line 635, Address: 0x1002738, Func Offset: 0x258
	// Line 637, Address: 0x1002748, Func Offset: 0x268
	// Line 641, Address: 0x100274c, Func Offset: 0x26c
	// Line 642, Address: 0x1002754, Func Offset: 0x274
	// Line 645, Address: 0x100276c, Func Offset: 0x28c
	// Line 646, Address: 0x1002770, Func Offset: 0x290
	// Func End, Address: 0x10027a4, Func Offset: 0x2c4
}

// 
// Start address: 0x10027b0
int TAGridBmpCreate()
{
	int i;
	int count;
	// Line 649, Address: 0x10027b0, Func Offset: 0
	// Line 652, Address: 0x10027c0, Func Offset: 0x10
	// Line 653, Address: 0x10027cc, Func Offset: 0x1c
	// Line 654, Address: 0x10027d8, Func Offset: 0x28
	// Line 655, Address: 0x10027ec, Func Offset: 0x3c
	// Line 657, Address: 0x10027fc, Func Offset: 0x4c
	// Line 663, Address: 0x1002830, Func Offset: 0x80
	// Line 664, Address: 0x1002838, Func Offset: 0x88
	// Line 667, Address: 0x1002844, Func Offset: 0x94
	// Line 668, Address: 0x1002850, Func Offset: 0xa0
	// Line 675, Address: 0x1002858, Func Offset: 0xa8
	// Line 676, Address: 0x100285c, Func Offset: 0xac
	// Func End, Address: 0x1002874, Func Offset: 0xc4
}

// 
// Start address: 0x1002880
int TAGridCreate()
{
	tagPOINT pt;
	int i;
	// Line 679, Address: 0x1002880, Func Offset: 0
	// Line 684, Address: 0x100288c, Func Offset: 0xc
	// Line 685, Address: 0x1002898, Func Offset: 0x18
	// Line 686, Address: 0x10028c4, Func Offset: 0x44
	// Line 687, Address: 0x10028d8, Func Offset: 0x58
	// Line 688, Address: 0x10028e8, Func Offset: 0x68
	// Line 689, Address: 0x10028f4, Func Offset: 0x74
	// Line 690, Address: 0x1002910, Func Offset: 0x90
	// Line 691, Address: 0x10029ac, Func Offset: 0x12c
	// Line 693, Address: 0x10029d4, Func Offset: 0x154
	// Line 694, Address: 0x10029d8, Func Offset: 0x158
	// Line 695, Address: 0x10029fc, Func Offset: 0x17c
	// Line 696, Address: 0x1002a28, Func Offset: 0x1a8
	// Line 699, Address: 0x1002a9c, Func Offset: 0x21c
	// Line 700, Address: 0x1002aac, Func Offset: 0x22c
	// Line 701, Address: 0x1002ab0, Func Offset: 0x230
	// Func End, Address: 0x1002ac4, Func Offset: 0x244
}

// 
// Start address: 0x1002ad0
int GridInitSub(char* path, _anon1* pInfo)
{
	unsigned short* lpReadWk;
	unsigned int hf;
	char fn[80];
	char buf[80];
	unsigned short* wp1;
	unsigned short tileno;
	int x;
	int y;
	_anon12 loc;
	int grid;
	// Line 706, Address: 0x1002ad0, Func Offset: 0
	// Line 717, Address: 0x1002afc, Func Offset: 0x2c
	// Line 719, Address: 0x1002b14, Func Offset: 0x44
	// Line 721, Address: 0x1002b3c, Func Offset: 0x6c
	// Line 722, Address: 0x1002b60, Func Offset: 0x90
	// Line 723, Address: 0x1002b80, Func Offset: 0xb0
	// Line 724, Address: 0x1002b94, Func Offset: 0xc4
	// Line 725, Address: 0x1002ba8, Func Offset: 0xd8
	// Line 727, Address: 0x1002bb4, Func Offset: 0xe4
	// Line 728, Address: 0x1002bec, Func Offset: 0x11c
	// Line 731, Address: 0x1002c00, Func Offset: 0x130
	// Line 732, Address: 0x1002c04, Func Offset: 0x134
	// Line 733, Address: 0x1002c08, Func Offset: 0x138
	// Line 734, Address: 0x1002c14, Func Offset: 0x144
	// Line 735, Address: 0x1002c2c, Func Offset: 0x15c
	// Line 736, Address: 0x1002c50, Func Offset: 0x180
	// Line 738, Address: 0x1002c54, Func Offset: 0x184
	// Line 739, Address: 0x1002c6c, Func Offset: 0x19c
	// Line 740, Address: 0x1002c78, Func Offset: 0x1a8
	// Line 741, Address: 0x1002c90, Func Offset: 0x1c0
	// Line 742, Address: 0x1002ca4, Func Offset: 0x1d4
	// Line 743, Address: 0x1002cac, Func Offset: 0x1dc
	// Line 744, Address: 0x1002cbc, Func Offset: 0x1ec
	// Line 745, Address: 0x1002cdc, Func Offset: 0x20c
	// Line 746, Address: 0x1002d0c, Func Offset: 0x23c
	// Line 747, Address: 0x1002d20, Func Offset: 0x250
	// Line 749, Address: 0x1002d28, Func Offset: 0x258
	// Line 751, Address: 0x1002d78, Func Offset: 0x2a8
	// Line 753, Address: 0x1002d80, Func Offset: 0x2b0
	// Line 754, Address: 0x1002d90, Func Offset: 0x2c0
	// Line 755, Address: 0x1002dcc, Func Offset: 0x2fc
	// Line 757, Address: 0x1002dd4, Func Offset: 0x304
	// Line 760, Address: 0x1002e2c, Func Offset: 0x35c
	// Line 761, Address: 0x1002e30, Func Offset: 0x360
	// Line 762, Address: 0x1002e4c, Func Offset: 0x37c
	// Line 763, Address: 0x1002e68, Func Offset: 0x398
	// Line 764, Address: 0x1002e7c, Func Offset: 0x3ac
	// Line 766, Address: 0x1002e80, Func Offset: 0x3b0
	// Func End, Address: 0x1002eac, Func Offset: 0x3dc
}

// 
// Start address: 0x1002eb0
int TAGridInit()
{
	int i;
	int cntInfo;
	_anon1* pInfo;
	char* Path;
	// Line 770, Address: 0x1002eb0, Func Offset: 0
	// Line 773, Address: 0x1002ec8, Func Offset: 0x18
	// Line 775, Address: 0x1002ed0, Func Offset: 0x20
	// Line 776, Address: 0x1002ed8, Func Offset: 0x28
	// Line 778, Address: 0x1002ee0, Func Offset: 0x30
	// Line 779, Address: 0x1002eec, Func Offset: 0x3c
	// Line 782, Address: 0x1002f04, Func Offset: 0x54
	// Line 783, Address: 0x1002f08, Func Offset: 0x58
	// Line 784, Address: 0x1002f18, Func Offset: 0x68
	// Line 785, Address: 0x1002f1c, Func Offset: 0x6c
	// Func End, Address: 0x1002f3c, Func Offset: 0x8c
}

// 
// Start address: 0x1002f40
int BkgBmpCreate_TA()
{
	// Line 792, Address: 0x1002f40, Func Offset: 0
	// Line 793, Address: 0x1002f44, Func Offset: 0x4
	// Func End, Address: 0x1002f4c, Func Offset: 0xc
}

// 
// Start address: 0x1002f50
int BkgBmpDelete_TA()
{
	// Line 797, Address: 0x1002f50, Func Offset: 0
	// Line 798, Address: 0x1002f54, Func Offset: 0x4
	// Func End, Address: 0x1002f5c, Func Offset: 0xc
}

// 
// Start address: 0x1002f60
int BkgCreate_TA()
{
	// Line 801, Address: 0x1002f60, Func Offset: 0
	// Line 802, Address: 0x1002f68, Func Offset: 0x8
	// Line 803, Address: 0x1002f88, Func Offset: 0x28
	// Line 804, Address: 0x1002f8c, Func Offset: 0x2c
	// Func End, Address: 0x1002f9c, Func Offset: 0x3c
}

// 
// Start address: 0x1002fa0
int BkgDelete_TA()
{
	// Line 808, Address: 0x1002fa0, Func Offset: 0
	// Line 809, Address: 0x1002fa4, Func Offset: 0x4
	// Func End, Address: 0x1002fac, Func Offset: 0xc
}

// 
// Start address: 0x1002fb0
int LoadPicBmp()
{
	int i;
	int mode;
	int round;
	_anon2* hdr;
	unsigned char* p;
	char* lp1;
	void* expbuf;
	// Line 812, Address: 0x1002fb0, Func Offset: 0
	// Line 820, Address: 0x1002fd4, Func Offset: 0x24
	// Line 824, Address: 0x1002fd8, Func Offset: 0x28
	// Line 825, Address: 0x1002ffc, Func Offset: 0x4c
	// Line 826, Address: 0x1003004, Func Offset: 0x54
	// Line 827, Address: 0x1003008, Func Offset: 0x58
	// Line 829, Address: 0x1003010, Func Offset: 0x60
	// Line 830, Address: 0x100301c, Func Offset: 0x6c
	// Line 831, Address: 0x1003028, Func Offset: 0x78
	// Line 832, Address: 0x100303c, Func Offset: 0x8c
	// Line 833, Address: 0x1003058, Func Offset: 0xa8
	// Line 834, Address: 0x1003064, Func Offset: 0xb4
	// Line 835, Address: 0x100306c, Func Offset: 0xbc
	// Line 836, Address: 0x1003070, Func Offset: 0xc0
	// Line 837, Address: 0x1003074, Func Offset: 0xc4
	// Line 839, Address: 0x1003084, Func Offset: 0xd4
	// Line 840, Address: 0x1003094, Func Offset: 0xe4
	// Line 842, Address: 0x10030a4, Func Offset: 0xf4
	// Line 844, Address: 0x10030c0, Func Offset: 0x110
	// Line 845, Address: 0x10030c4, Func Offset: 0x114
	// Func End, Address: 0x10030f0, Func Offset: 0x140
}

// 
// Start address: 0x10030f0
unsigned int CreatePic()
{
	unsigned int mask[4];
	_POINTL pt;
	int i;
	int j;
	// Line 851, Address: 0x10030f0, Func Offset: 0
	// Line 852, Address: 0x1003100, Func Offset: 0x10
	// Line 853, Address: 0x1003130, Func Offset: 0x40
	// Line 857, Address: 0x1003160, Func Offset: 0x70
	// Line 858, Address: 0x100316c, Func Offset: 0x7c
	// Line 859, Address: 0x1003178, Func Offset: 0x88
	// Line 860, Address: 0x100318c, Func Offset: 0x9c
	// Line 861, Address: 0x10031b0, Func Offset: 0xc0
	// Line 863, Address: 0x10031b8, Func Offset: 0xc8
	// Line 864, Address: 0x10031e8, Func Offset: 0xf8
	// Line 865, Address: 0x100320c, Func Offset: 0x11c
	// Line 868, Address: 0x1003218, Func Offset: 0x128
	// Line 869, Address: 0x1003228, Func Offset: 0x138
	// Line 870, Address: 0x1003238, Func Offset: 0x148
	// Line 871, Address: 0x1003254, Func Offset: 0x164
	// Line 872, Address: 0x1003264, Func Offset: 0x174
	// Line 875, Address: 0x1003270, Func Offset: 0x180
	// Line 877, Address: 0x100328c, Func Offset: 0x19c
	// Line 878, Address: 0x1003298, Func Offset: 0x1a8
	// Line 879, Address: 0x10032a4, Func Offset: 0x1b4
	// Line 904, Address: 0x10032b8, Func Offset: 0x1c8
	// Line 905, Address: 0x10032c8, Func Offset: 0x1d8
	// Line 907, Address: 0x10032d8, Func Offset: 0x1e8
	// Line 908, Address: 0x10032e4, Func Offset: 0x1f4
	// Line 909, Address: 0x1003318, Func Offset: 0x228
	// Line 910, Address: 0x1003368, Func Offset: 0x278
	// Line 911, Address: 0x10033a4, Func Offset: 0x2b4
	// Line 912, Address: 0x10033bc, Func Offset: 0x2cc
	// Line 913, Address: 0x10033cc, Func Offset: 0x2dc
	// Line 914, Address: 0x10033d0, Func Offset: 0x2e0
	// Func End, Address: 0x10033e8, Func Offset: 0x2f8
}

// 
// Start address: 0x10033f0
void SetPic(int mode, int round, int zurasi)
{
	int x;
	int y;
	char* lp4;
	char* lp8;
	_RECTL rect;
	_POINTL pt;
	unsigned char buf[8];
	unsigned char buf2[8];
	int i;
	int j;
	unsigned char* cg;
	// Line 918, Address: 0x10033f0, Func Offset: 0
	// Line 922, Address: 0x1003420, Func Offset: 0x30
	// Line 923, Address: 0x1003434, Func Offset: 0x44
	// Line 932, Address: 0x1003464, Func Offset: 0x74
	// Line 933, Address: 0x1003488, Func Offset: 0x98
	// Line 935, Address: 0x1003490, Func Offset: 0xa0
	// Line 936, Address: 0x100349c, Func Offset: 0xac
	// Line 937, Address: 0x10034a8, Func Offset: 0xb8
	// Line 939, Address: 0x10034b4, Func Offset: 0xc4
	// Line 940, Address: 0x10034e4, Func Offset: 0xf4
	// Line 941, Address: 0x100350c, Func Offset: 0x11c
	// Line 942, Address: 0x1003510, Func Offset: 0x120
	// Line 943, Address: 0x1003520, Func Offset: 0x130
	// Line 944, Address: 0x100352c, Func Offset: 0x13c
	// Line 945, Address: 0x1003534, Func Offset: 0x144
	// Line 946, Address: 0x1003540, Func Offset: 0x150
	// Line 947, Address: 0x1003550, Func Offset: 0x160
	// Line 948, Address: 0x1003560, Func Offset: 0x170
	// Line 949, Address: 0x100356c, Func Offset: 0x17c
	// Line 950, Address: 0x1003574, Func Offset: 0x184
	// Line 951, Address: 0x1003584, Func Offset: 0x194
	// Line 952, Address: 0x1003594, Func Offset: 0x1a4
	// Line 953, Address: 0x10035a4, Func Offset: 0x1b4
	// Line 954, Address: 0x10035b0, Func Offset: 0x1c0
	// Line 955, Address: 0x10035bc, Func Offset: 0x1cc
	// Line 956, Address: 0x10035c0, Func Offset: 0x1d0
	// Line 957, Address: 0x10035d0, Func Offset: 0x1e0
	// Line 958, Address: 0x10035e0, Func Offset: 0x1f0
	// Line 959, Address: 0x10035f0, Func Offset: 0x200
	// Line 960, Address: 0x1003610, Func Offset: 0x220
	// Line 961, Address: 0x100361c, Func Offset: 0x22c
	// Line 962, Address: 0x1003644, Func Offset: 0x254
	// Line 963, Address: 0x1003664, Func Offset: 0x274
	// Line 964, Address: 0x1003670, Func Offset: 0x280
	// Line 966, Address: 0x1003698, Func Offset: 0x2a8
	// Func End, Address: 0x10036c4, Func Offset: 0x2d4
}

// 
// Start address: 0x10036d0
unsigned int TA_EACreate()
{
	int i;
	int j;
	// Line 970, Address: 0x10036d0, Func Offset: 0
	// Line 974, Address: 0x10036e0, Func Offset: 0x10
	// Line 975, Address: 0x1003710, Func Offset: 0x40
	// Line 976, Address: 0x1003740, Func Offset: 0x70
	// Line 977, Address: 0x1003748, Func Offset: 0x78
	// Line 978, Address: 0x1003778, Func Offset: 0xa8
	// Line 979, Address: 0x10037a8, Func Offset: 0xd8
	// Line 980, Address: 0x10037b0, Func Offset: 0xe0
	// Line 981, Address: 0x10037e0, Func Offset: 0x110
	// Line 982, Address: 0x10037ec, Func Offset: 0x11c
	// Line 983, Address: 0x1003834, Func Offset: 0x164
	// Line 985, Address: 0x100383c, Func Offset: 0x16c
	// Line 986, Address: 0x1003848, Func Offset: 0x178
	// Line 987, Address: 0x100385c, Func Offset: 0x18c
	// Line 988, Address: 0x1003870, Func Offset: 0x1a0
	// Line 989, Address: 0x10038a4, Func Offset: 0x1d4
	// Line 990, Address: 0x10038d8, Func Offset: 0x208
	// Line 993, Address: 0x10038e8, Func Offset: 0x218
	// Line 994, Address: 0x10038f0, Func Offset: 0x220
	// Line 995, Address: 0x10038f8, Func Offset: 0x228
	// Line 996, Address: 0x1003900, Func Offset: 0x230
	// Line 997, Address: 0x1003908, Func Offset: 0x238
	// Line 999, Address: 0x1003910, Func Offset: 0x240
	// Line 1001, Address: 0x1003920, Func Offset: 0x250
	// Line 1004, Address: 0x1003944, Func Offset: 0x274
	// Line 1005, Address: 0x1003950, Func Offset: 0x280
	// Line 1006, Address: 0x100395c, Func Offset: 0x28c
	// Line 1007, Address: 0x1003974, Func Offset: 0x2a4
	// Line 1008, Address: 0x1003984, Func Offset: 0x2b4
	// Line 1009, Address: 0x1003994, Func Offset: 0x2c4
	// Line 1010, Address: 0x10039a4, Func Offset: 0x2d4
	// Line 1012, Address: 0x10039b4, Func Offset: 0x2e4
	// Line 1013, Address: 0x10039d4, Func Offset: 0x304
	// Line 1014, Address: 0x10039f0, Func Offset: 0x320
	// Line 1015, Address: 0x1003a00, Func Offset: 0x330
	// Line 1016, Address: 0x1003a08, Func Offset: 0x338
	// Line 1018, Address: 0x1003a10, Func Offset: 0x340
	// Line 1022, Address: 0x1003a1c, Func Offset: 0x34c
	// Line 1023, Address: 0x1003a24, Func Offset: 0x354
	// Line 1024, Address: 0x1003a40, Func Offset: 0x370
	// Line 1025, Address: 0x1003a58, Func Offset: 0x388
	// Line 1026, Address: 0x1003a5c, Func Offset: 0x38c
	// Func End, Address: 0x1003a74, Func Offset: 0x3a4
}

// 
// Start address: 0x1003a80
void DeleteEA()
{
	int i;
	int j;
	// Line 1035, Address: 0x1003a80, Func Offset: 0
	// Line 1038, Address: 0x1003a90, Func Offset: 0x10
	// Line 1039, Address: 0x1003a98, Func Offset: 0x18
	// Line 1041, Address: 0x1003aa0, Func Offset: 0x20
	// Line 1042, Address: 0x1003aa8, Func Offset: 0x28
	// Line 1043, Address: 0x1003ab4, Func Offset: 0x34
	// Line 1044, Address: 0x1003ac0, Func Offset: 0x40
	// Line 1045, Address: 0x1003ae4, Func Offset: 0x64
	// Line 1047, Address: 0x1003b10, Func Offset: 0x90
	// Line 1048, Address: 0x1003b20, Func Offset: 0xa0
	// Line 1049, Address: 0x1003b30, Func Offset: 0xb0
	// Line 1051, Address: 0x1003b58, Func Offset: 0xd8
	// Line 1052, Address: 0x1003b64, Func Offset: 0xe4
	// Line 1055, Address: 0x1003b74, Func Offset: 0xf4
	// Line 1057, Address: 0x1003b84, Func Offset: 0x104
	// Line 1059, Address: 0x1003b90, Func Offset: 0x110
	// Line 1060, Address: 0x1003bbc, Func Offset: 0x13c
	// Line 1061, Address: 0x1003be8, Func Offset: 0x168
	// Line 1062, Address: 0x1003bfc, Func Offset: 0x17c
	// Line 1065, Address: 0x1003c10, Func Offset: 0x190
	// Line 1066, Address: 0x1003c20, Func Offset: 0x1a0
	// Line 1067, Address: 0x1003c2c, Func Offset: 0x1ac
	// Line 1070, Address: 0x1003c3c, Func Offset: 0x1bc
	// Line 1073, Address: 0x1003c4c, Func Offset: 0x1cc
	// Line 1074, Address: 0x1003c64, Func Offset: 0x1e4
	// Line 1075, Address: 0x1003c70, Func Offset: 0x1f0
	// Line 1076, Address: 0x1003c8c, Func Offset: 0x20c
	// Line 1077, Address: 0x1003cb8, Func Offset: 0x238
	// Line 1080, Address: 0x1003ccc, Func Offset: 0x24c
	// Line 1082, Address: 0x1003cdc, Func Offset: 0x25c
	// Line 1083, Address: 0x1003ce8, Func Offset: 0x268
	// Line 1084, Address: 0x1003d14, Func Offset: 0x294
	// Line 1085, Address: 0x1003d28, Func Offset: 0x2a8
	// Line 1086, Address: 0x1003d38, Func Offset: 0x2b8
	// Line 1087, Address: 0x1003d44, Func Offset: 0x2c4
	// Line 1091, Address: 0x1003d80, Func Offset: 0x300
	// Line 1093, Address: 0x1003d90, Func Offset: 0x310
	// Line 1095, Address: 0x1003d9c, Func Offset: 0x31c
	// Func End, Address: 0x1003db4, Func Offset: 0x334
}

// 
// Start address: 0x1003dc0
void DrawTA()
{
	int i;
	// Line 1098, Address: 0x1003dc0, Func Offset: 0
	// Line 1101, Address: 0x1003dcc, Func Offset: 0xc
	// Line 1102, Address: 0x1003ddc, Func Offset: 0x1c
	// Line 1103, Address: 0x1003dec, Func Offset: 0x2c
	// Line 1105, Address: 0x1003dfc, Func Offset: 0x3c
	// Line 1106, Address: 0x1003e08, Func Offset: 0x48
	// Line 1107, Address: 0x1003e2c, Func Offset: 0x6c
	// Line 1108, Address: 0x1003e4c, Func Offset: 0x8c
	// Line 1109, Address: 0x1003e70, Func Offset: 0xb0
	// Line 1110, Address: 0x1003ec0, Func Offset: 0x100
	// Line 1113, Address: 0x1003ed0, Func Offset: 0x110
	// Line 1114, Address: 0x1003edc, Func Offset: 0x11c
	// Line 1116, Address: 0x1003ef8, Func Offset: 0x138
	// Line 1117, Address: 0x1003f04, Func Offset: 0x144
	// Line 1119, Address: 0x1003f8c, Func Offset: 0x1cc
	// Line 1121, Address: 0x1004008, Func Offset: 0x248
	// Line 1122, Address: 0x1004018, Func Offset: 0x258
	// Line 1124, Address: 0x1004020, Func Offset: 0x260
	// Func End, Address: 0x1004034, Func Offset: 0x274
}

// 
// Start address: 0x1004040
unsigned short GetLFont(char c)
{
	// Line 1129, Address: 0x1004040, Func Offset: 0
	// Line 1130, Address: 0x1004048, Func Offset: 0x8
	// Line 1131, Address: 0x1004060, Func Offset: 0x20
	// Line 1133, Address: 0x100406c, Func Offset: 0x2c
	// Line 1134, Address: 0x1004084, Func Offset: 0x44
	// Line 1136, Address: 0x1004090, Func Offset: 0x50
	// Line 1137, Address: 0x10040a8, Func Offset: 0x68
	// Line 1139, Address: 0x10040b4, Func Offset: 0x74
	// Line 1140, Address: 0x10040e4, Func Offset: 0xa4
	// Line 1142, Address: 0x1004110, Func Offset: 0xd0
	// Line 1143, Address: 0x1004140, Func Offset: 0x100
	// Line 1145, Address: 0x1004170, Func Offset: 0x130
	// Line 1146, Address: 0x1004174, Func Offset: 0x134
	// Func End, Address: 0x1004180, Func Offset: 0x140
}

// 
// Start address: 0x1004180
unsigned short GetSFont(char c)
{
	// Line 1148, Address: 0x1004180, Func Offset: 0
	// Line 1149, Address: 0x1004188, Func Offset: 0x8
	// Line 1150, Address: 0x10041a0, Func Offset: 0x20
	// Line 1152, Address: 0x10041ac, Func Offset: 0x2c
	// Line 1153, Address: 0x10041c4, Func Offset: 0x44
	// Line 1155, Address: 0x10041d0, Func Offset: 0x50
	// Line 1156, Address: 0x10041e8, Func Offset: 0x68
	// Line 1158, Address: 0x10041f4, Func Offset: 0x74
	// Line 1159, Address: 0x1004224, Func Offset: 0xa4
	// Line 1161, Address: 0x1004250, Func Offset: 0xd0
	// Line 1162, Address: 0x1004254, Func Offset: 0xd4
	// Func End, Address: 0x1004260, Func Offset: 0xe0
}

// 
// Start address: 0x1004260
void TimeToAsc8(unsigned int Time, char* p)
{
	unsigned short min;
	unsigned short sec;
	unsigned short msec;
	// Line 1164, Address: 0x1004260, Func Offset: 0
	// Line 1167, Address: 0x1004278, Func Offset: 0x18
	// Line 1168, Address: 0x100429c, Func Offset: 0x3c
	// Line 1169, Address: 0x10042ac, Func Offset: 0x4c
	// Line 1170, Address: 0x10042b4, Func Offset: 0x54
	// Line 1171, Address: 0x10042bc, Func Offset: 0x5c
	// Line 1172, Address: 0x10042c4, Func Offset: 0x64
	// Line 1174, Address: 0x10042cc, Func Offset: 0x6c
	// Line 1175, Address: 0x10042fc, Func Offset: 0x9c
	// Line 1177, Address: 0x1004340, Func Offset: 0xe0
	// Line 1178, Address: 0x1004370, Func Offset: 0x110
	// Line 1179, Address: 0x1004394, Func Offset: 0x134
	// Line 1180, Address: 0x10043a0, Func Offset: 0x140
	// Line 1181, Address: 0x10043d0, Func Offset: 0x170
	// Line 1182, Address: 0x10043f4, Func Offset: 0x194
	// Line 1183, Address: 0x1004400, Func Offset: 0x1a0
	// Line 1184, Address: 0x1004430, Func Offset: 0x1d0
	// Line 1187, Address: 0x1004454, Func Offset: 0x1f4
	// Func End, Address: 0x100446c, Func Offset: 0x20c
}

// 
// Start address: 0x1004470
void TimeToAsc9(unsigned int Time, char* p)
{
	unsigned short min;
	unsigned short sec;
	unsigned short msec;
	// Line 1189, Address: 0x1004470, Func Offset: 0
	// Line 1192, Address: 0x1004488, Func Offset: 0x18
	// Line 1193, Address: 0x10044ac, Func Offset: 0x3c
	// Line 1194, Address: 0x10044bc, Func Offset: 0x4c
	// Line 1195, Address: 0x10044c4, Func Offset: 0x54
	// Line 1196, Address: 0x10044cc, Func Offset: 0x5c
	// Line 1197, Address: 0x10044d4, Func Offset: 0x64
	// Line 1199, Address: 0x10044dc, Func Offset: 0x6c
	// Line 1200, Address: 0x100450c, Func Offset: 0x9c
	// Line 1202, Address: 0x1004550, Func Offset: 0xe0
	// Line 1203, Address: 0x1004580, Func Offset: 0x110
	// Line 1204, Address: 0x10045bc, Func Offset: 0x14c
	// Line 1205, Address: 0x10045e0, Func Offset: 0x170
	// Line 1206, Address: 0x10045ec, Func Offset: 0x17c
	// Line 1207, Address: 0x100461c, Func Offset: 0x1ac
	// Line 1208, Address: 0x1004640, Func Offset: 0x1d0
	// Line 1209, Address: 0x100464c, Func Offset: 0x1dc
	// Line 1210, Address: 0x100467c, Func Offset: 0x20c
	// Line 1213, Address: 0x10046a0, Func Offset: 0x230
	// Func End, Address: 0x10046b8, Func Offset: 0x248
}

// 
// Start address: 0x10046c0
void PrintTotalTime(int mode, unsigned int b)
{
	int i;
	int j;
	char buf[9];
	unsigned int Time;
	_anon12 loc;
	unsigned short fontno;
	// Line 1216, Address: 0x10046c0, Func Offset: 0
	// Line 1219, Address: 0x10046e0, Func Offset: 0x20
	// Line 1223, Address: 0x10046e4, Func Offset: 0x24
	// Line 1224, Address: 0x10046f0, Func Offset: 0x30
	// Line 1225, Address: 0x10046fc, Func Offset: 0x3c
	// Line 1226, Address: 0x1004708, Func Offset: 0x48
	// Line 1227, Address: 0x1004738, Func Offset: 0x78
	// Line 1228, Address: 0x1004748, Func Offset: 0x88
	// Line 1229, Address: 0x1004758, Func Offset: 0x98
	// Line 1231, Address: 0x1004760, Func Offset: 0xa0
	// Line 1232, Address: 0x100476c, Func Offset: 0xac
	// Line 1233, Address: 0x100478c, Func Offset: 0xcc
	// Line 1237, Address: 0x100479c, Func Offset: 0xdc
	// Line 1239, Address: 0x10047ac, Func Offset: 0xec
	// Line 1240, Address: 0x10047b8, Func Offset: 0xf8
	// Line 1241, Address: 0x10047c0, Func Offset: 0x100
	// Line 1243, Address: 0x10047c8, Func Offset: 0x108
	// Line 1245, Address: 0x10047d0, Func Offset: 0x110
	// Line 1246, Address: 0x10047dc, Func Offset: 0x11c
	// Line 1247, Address: 0x10047e8, Func Offset: 0x128
	// Line 1248, Address: 0x10047fc, Func Offset: 0x13c
	// Line 1250, Address: 0x1004804, Func Offset: 0x144
	// Line 1252, Address: 0x1004814, Func Offset: 0x154
	// Line 1253, Address: 0x100481c, Func Offset: 0x15c
	// Line 1254, Address: 0x1004870, Func Offset: 0x1b0
	// Line 1255, Address: 0x1004878, Func Offset: 0x1b8
	// Line 1256, Address: 0x10048c0, Func Offset: 0x200
	// Line 1257, Address: 0x10048cc, Func Offset: 0x20c
	// Line 1259, Address: 0x10048dc, Func Offset: 0x21c
	// Func End, Address: 0x10048fc, Func Offset: 0x23c
}

// 
// Start address: 0x1004900
void PrintRoundName(int mode, int round, unsigned int b, int grid)
{
	unsigned short MapBuf[18][2];
	int x;
	int y;
	int i;
	_anon12 loc;
	unsigned int Time;
	char buf[8];
	unsigned short fontno;
	// Line 1263, Address: 0x1004900, Func Offset: 0
	// Line 1268, Address: 0x100492c, Func Offset: 0x2c
	// Line 1272, Address: 0x1004930, Func Offset: 0x30
	// Line 1273, Address: 0x100493c, Func Offset: 0x3c
	// Line 1274, Address: 0x1004948, Func Offset: 0x48
	// Line 1275, Address: 0x1004980, Func Offset: 0x80
	// Line 1276, Address: 0x1004990, Func Offset: 0x90
	// Line 1278, Address: 0x1004998, Func Offset: 0x98
	// Line 1280, Address: 0x10049bc, Func Offset: 0xbc
	// Line 1281, Address: 0x10049c8, Func Offset: 0xc8
	// Line 1282, Address: 0x10049d4, Func Offset: 0xd4
	// Line 1283, Address: 0x10049e0, Func Offset: 0xe0
	// Line 1284, Address: 0x1004a54, Func Offset: 0x154
	// Line 1285, Address: 0x1004a64, Func Offset: 0x164
	// Line 1286, Address: 0x1004a74, Func Offset: 0x174
	// Line 1287, Address: 0x1004a80, Func Offset: 0x180
	// Line 1288, Address: 0x1004a98, Func Offset: 0x198
	// Line 1291, Address: 0x1004a9c, Func Offset: 0x19c
	// Line 1295, Address: 0x1004aac, Func Offset: 0x1ac
	// Line 1296, Address: 0x1004ab8, Func Offset: 0x1b8
	// Line 1297, Address: 0x1004acc, Func Offset: 0x1cc
	// Line 1298, Address: 0x1004ae4, Func Offset: 0x1e4
	// Line 1299, Address: 0x1004af8, Func Offset: 0x1f8
	// Line 1301, Address: 0x1004b08, Func Offset: 0x208
	// Line 1303, Address: 0x1004b10, Func Offset: 0x210
	// Line 1304, Address: 0x1004b1c, Func Offset: 0x21c
	// Line 1305, Address: 0x1004b28, Func Offset: 0x228
	// Line 1306, Address: 0x1004b34, Func Offset: 0x234
	// Line 1308, Address: 0x1004b78, Func Offset: 0x278
	// Line 1309, Address: 0x1004bb4, Func Offset: 0x2b4
	// Line 1310, Address: 0x1004bc4, Func Offset: 0x2c4
	// Line 1313, Address: 0x1004bd4, Func Offset: 0x2d4
	// Line 1314, Address: 0x1004be0, Func Offset: 0x2e0
	// Line 1315, Address: 0x1004bf8, Func Offset: 0x2f8
	// Line 1316, Address: 0x1004c04, Func Offset: 0x304
	// Line 1317, Address: 0x1004c0c, Func Offset: 0x30c
	// Line 1318, Address: 0x1004c18, Func Offset: 0x318
	// Line 1320, Address: 0x1004c24, Func Offset: 0x324
	// Line 1321, Address: 0x1004c40, Func Offset: 0x340
	// Line 1322, Address: 0x1004c80, Func Offset: 0x380
	// Line 1324, Address: 0x1004c88, Func Offset: 0x388
	// Line 1326, Address: 0x1004cf8, Func Offset: 0x3f8
	// Line 1327, Address: 0x1004d08, Func Offset: 0x408
	// Line 1329, Address: 0x1004d18, Func Offset: 0x418
	// Func End, Address: 0x1004d3c, Func Offset: 0x43c
}

// 
// Start address: 0x1004d40
void PrintZoneNo(int mode, int zone)
{
	_anon12 loc;
	unsigned short tileno;
	// Line 1332, Address: 0x1004d40, Func Offset: 0
	// Line 1336, Address: 0x1004d54, Func Offset: 0x14
	// Line 1337, Address: 0x1004d5c, Func Offset: 0x1c
	// Line 1338, Address: 0x1004d78, Func Offset: 0x38
	// Line 1339, Address: 0x1004d80, Func Offset: 0x40
	// Line 1340, Address: 0x1004d9c, Func Offset: 0x5c
	// Line 1341, Address: 0x1004db0, Func Offset: 0x70
	// Line 1342, Address: 0x1004e04, Func Offset: 0xc4
	// Line 1343, Address: 0x1004e10, Func Offset: 0xd0
	// Line 1345, Address: 0x1004e58, Func Offset: 0x118
	// Func End, Address: 0x1004e6c, Func Offset: 0x12c
}

// 
// Start address: 0x1004e70
void PrintZoneSelect(int mode, int round, int zone)
{
	int x;
	int y;
	_anon12 loc;
	unsigned short tileno;
	// Line 1348, Address: 0x1004e70, Func Offset: 0
	// Line 1353, Address: 0x1004e90, Func Offset: 0x20
	// Line 1354, Address: 0x1004e9c, Func Offset: 0x2c
	// Line 1355, Address: 0x1004ea4, Func Offset: 0x34
	// Line 1356, Address: 0x1004eb0, Func Offset: 0x40
	// Line 1357, Address: 0x1004ebc, Func Offset: 0x4c
	// Line 1358, Address: 0x1004ec8, Func Offset: 0x58
	// Line 1359, Address: 0x1004ee0, Func Offset: 0x70
	// Line 1360, Address: 0x1004f30, Func Offset: 0xc0
	// Line 1362, Address: 0x1004f38, Func Offset: 0xc8
	// Line 1364, Address: 0x1004f6c, Func Offset: 0xfc
	// Line 1366, Address: 0x1004f74, Func Offset: 0x104
	// Line 1367, Address: 0x1004f80, Func Offset: 0x110
	// Line 1369, Address: 0x1004fb4, Func Offset: 0x144
	// Line 1370, Address: 0x1004ffc, Func Offset: 0x18c
	// Line 1371, Address: 0x100500c, Func Offset: 0x19c
	// Line 1372, Address: 0x100501c, Func Offset: 0x1ac
	// Line 1374, Address: 0x1005038, Func Offset: 0x1c8
	// Line 1376, Address: 0x100504c, Func Offset: 0x1dc
	// Func End, Address: 0x1005068, Func Offset: 0x1f8
}

// 
// Start address: 0x1005070
void PrintZoneRecord(int mode, int round, int zone, int rank)
{
	int x;
	int y;
	int i;
	_anon12 loc;
	unsigned int Time;
	char buf[12];
	unsigned short fontno;
	unsigned short MapBuf[12][2];
	// Line 1379, Address: 0x1005070, Func Offset: 0
	// Line 1388, Address: 0x100509c, Func Offset: 0x2c
	// Line 1391, Address: 0x10050a8, Func Offset: 0x38
	// Line 1392, Address: 0x10050b4, Func Offset: 0x44
	// Line 1393, Address: 0x10050f4, Func Offset: 0x84
	// Line 1394, Address: 0x10050fc, Func Offset: 0x8c
	// Line 1395, Address: 0x1005140, Func Offset: 0xd0
	// Line 1396, Address: 0x1005184, Func Offset: 0x114
	// Line 1397, Address: 0x10051c8, Func Offset: 0x158
	// Line 1399, Address: 0x10051d0, Func Offset: 0x160
	// Line 1400, Address: 0x10051fc, Func Offset: 0x18c
	// Line 1401, Address: 0x1005204, Func Offset: 0x194
	// Line 1402, Address: 0x1005234, Func Offset: 0x1c4
	// Line 1403, Address: 0x1005264, Func Offset: 0x1f4
	// Line 1406, Address: 0x1005294, Func Offset: 0x224
	// Line 1411, Address: 0x10052a4, Func Offset: 0x234
	// Line 1412, Address: 0x10052b0, Func Offset: 0x240
	// Line 1413, Address: 0x10052c4, Func Offset: 0x254
	// Line 1414, Address: 0x10052dc, Func Offset: 0x26c
	// Line 1415, Address: 0x10052e8, Func Offset: 0x278
	// Line 1417, Address: 0x10052f8, Func Offset: 0x288
	// Line 1418, Address: 0x1005304, Func Offset: 0x294
	// Line 1419, Address: 0x1005320, Func Offset: 0x2b0
	// Line 1420, Address: 0x100532c, Func Offset: 0x2bc
	// Line 1421, Address: 0x1005334, Func Offset: 0x2c4
	// Line 1422, Address: 0x1005354, Func Offset: 0x2e4
	// Line 1423, Address: 0x1005360, Func Offset: 0x2f0
	// Line 1424, Address: 0x10053c4, Func Offset: 0x354
	// Line 1425, Address: 0x10053d4, Func Offset: 0x364
	// Line 1427, Address: 0x10053e4, Func Offset: 0x374
	// Func End, Address: 0x1005408, Func Offset: 0x398
}

// 
// Start address: 0x1005410
void PrintZoneRecordAll(int mode, int round, int zone)
{
	int i;
	// Line 1430, Address: 0x1005410, Func Offset: 0
	// Line 1433, Address: 0x1005428, Func Offset: 0x18
	// Line 1434, Address: 0x1005434, Func Offset: 0x24
	// Line 1435, Address: 0x100544c, Func Offset: 0x3c
	// Line 1437, Address: 0x100545c, Func Offset: 0x4c
	// Func End, Address: 0x1005470, Func Offset: 0x60
}

// 
// Start address: 0x1005470
void PrintMenu2(int mode, int cur, unsigned int b)
{
	int x;
	int i;
	int j;
	int k;
	_anon12 loc;
	unsigned short MapBuf[13];
	unsigned short* pw;
	// Line 1441, Address: 0x1005470, Func Offset: 0
	// Line 1452, Address: 0x1005498, Func Offset: 0x28
	// Line 1453, Address: 0x10054b4, Func Offset: 0x44
	// Line 1454, Address: 0x10054bc, Func Offset: 0x4c
	// Line 1456, Address: 0x10054fc, Func Offset: 0x8c
	// Line 1457, Address: 0x1005508, Func Offset: 0x98
	// Line 1458, Address: 0x1005514, Func Offset: 0xa4
	// Line 1460, Address: 0x1005544, Func Offset: 0xd4
	// Line 1462, Address: 0x1005554, Func Offset: 0xe4
	// Line 1465, Address: 0x1005564, Func Offset: 0xf4
	// Line 1467, Address: 0x100556c, Func Offset: 0xfc
	// Line 1469, Address: 0x1005574, Func Offset: 0x104
	// Line 1471, Address: 0x1005598, Func Offset: 0x128
	// Line 1474, Address: 0x10055a8, Func Offset: 0x138
	// Line 1477, Address: 0x10055b0, Func Offset: 0x140
	// Line 1480, Address: 0x10055ec, Func Offset: 0x17c
	// Line 1481, Address: 0x10055f4, Func Offset: 0x184
	// Line 1482, Address: 0x1005600, Func Offset: 0x190
	// Line 1483, Address: 0x1005608, Func Offset: 0x198
	// Line 1484, Address: 0x1005628, Func Offset: 0x1b8
	// Line 1485, Address: 0x1005634, Func Offset: 0x1c4
	// Line 1486, Address: 0x1005688, Func Offset: 0x218
	// Line 1488, Address: 0x1005698, Func Offset: 0x228
	// Func End, Address: 0x10056bc, Func Offset: 0x24c
}

// 
// Start address: 0x10056c0
void PrintRank(int mode, int rank, unsigned int b)
{
	int x;
	int y;
	_anon12 loc;
	// Line 1492, Address: 0x10056c0, Func Offset: 0
	// Line 1496, Address: 0x10056dc, Func Offset: 0x1c
	// Line 1497, Address: 0x10056e8, Func Offset: 0x28
	// Line 1498, Address: 0x1005704, Func Offset: 0x44
	// Line 1499, Address: 0x1005710, Func Offset: 0x50
	// Line 1500, Address: 0x1005730, Func Offset: 0x70
	// Line 1501, Address: 0x100573c, Func Offset: 0x7c
	// Line 1502, Address: 0x1005748, Func Offset: 0x88
	// Line 1503, Address: 0x1005784, Func Offset: 0xc4
	// Line 1505, Address: 0x100578c, Func Offset: 0xcc
	// Line 1507, Address: 0x10057c0, Func Offset: 0x100
	// Line 1508, Address: 0x10057d0, Func Offset: 0x110
	// Line 1510, Address: 0x10057e0, Func Offset: 0x120
	// Func End, Address: 0x10057f8, Func Offset: 0x138
}

// 
// Start address: 0x1005800
void PrintRankName(int mode, int ranky, int rankx, char c, unsigned int b)
{
	_anon12 loc;
	unsigned short fontno;
	// Line 1514, Address: 0x1005800, Func Offset: 0
	// Line 1518, Address: 0x1005820, Func Offset: 0x20
	// Line 1520, Address: 0x1005830, Func Offset: 0x30
	// Line 1521, Address: 0x1005848, Func Offset: 0x48
	// Line 1522, Address: 0x100586c, Func Offset: 0x6c
	// Line 1523, Address: 0x100587c, Func Offset: 0x7c
	// Line 1524, Address: 0x1005888, Func Offset: 0x88
	// Line 1525, Address: 0x10058dc, Func Offset: 0xdc
	// Line 1526, Address: 0x10058e8, Func Offset: 0xe8
	// Line 1527, Address: 0x1005930, Func Offset: 0x130
	// Line 1529, Address: 0x1005938, Func Offset: 0x138
	// Line 1530, Address: 0x1005974, Func Offset: 0x174
	// Line 1531, Address: 0x1005980, Func Offset: 0x180
	// Line 1534, Address: 0x10059bc, Func Offset: 0x1bc
	// Func End, Address: 0x10059d0, Func Offset: 0x1d0
}

// 
// Start address: 0x10059d0
void Tenmetu()
{
	char c;
	// Line 1539, Address: 0x10059d0, Func Offset: 0
	// Line 1542, Address: 0x10059dc, Func Offset: 0xc
	// Line 1543, Address: 0x10059f8, Func Offset: 0x28
	// Line 1545, Address: 0x1005a0c, Func Offset: 0x3c
	// Line 1546, Address: 0x1005a1c, Func Offset: 0x4c
	// Line 1547, Address: 0x1005a80, Func Offset: 0xb0
	// Line 1549, Address: 0x1005a88, Func Offset: 0xb8
	// Line 1551, Address: 0x1005ad4, Func Offset: 0x104
	// Line 1552, Address: 0x1005afc, Func Offset: 0x12c
	// Line 1553, Address: 0x1005b04, Func Offset: 0x134
	// Line 1555, Address: 0x1005b18, Func Offset: 0x148
	// Line 1556, Address: 0x1005b34, Func Offset: 0x164
	// Line 1557, Address: 0x1005b3c, Func Offset: 0x16c
	// Line 1559, Address: 0x1005b4c, Func Offset: 0x17c
	// Line 1560, Address: 0x1005b6c, Func Offset: 0x19c
	// Line 1562, Address: 0x1005b74, Func Offset: 0x1a4
	// Line 1564, Address: 0x1005b90, Func Offset: 0x1c0
	// Line 1565, Address: 0x1005b98, Func Offset: 0x1c8
	// Line 1566, Address: 0x1005bb8, Func Offset: 0x1e8
	// Line 1568, Address: 0x1005bcc, Func Offset: 0x1fc
	// Line 1569, Address: 0x1005bdc, Func Offset: 0x20c
	// Line 1570, Address: 0x1005c40, Func Offset: 0x270
	// Line 1572, Address: 0x1005c48, Func Offset: 0x278
	// Line 1574, Address: 0x1005c94, Func Offset: 0x2c4
	// Line 1575, Address: 0x1005cbc, Func Offset: 0x2ec
	// Line 1576, Address: 0x1005cc4, Func Offset: 0x2f4
	// Line 1578, Address: 0x1005cd8, Func Offset: 0x308
	// Line 1579, Address: 0x1005cf4, Func Offset: 0x324
	// Line 1580, Address: 0x1005cfc, Func Offset: 0x32c
	// Line 1582, Address: 0x1005d0c, Func Offset: 0x33c
	// Line 1583, Address: 0x1005d2c, Func Offset: 0x35c
	// Line 1585, Address: 0x1005d34, Func Offset: 0x364
	// Line 1589, Address: 0x1005d50, Func Offset: 0x380
	// Func End, Address: 0x1005d64, Func Offset: 0x394
}

// 
// Start address: 0x1005d70
int TAMove()
{
	char c;
	// Line 1598, Address: 0x1005d70, Func Offset: 0
	// Line 1601, Address: 0x1005d7c, Func Offset: 0xc
	// Line 1604, Address: 0x1005db8, Func Offset: 0x48
	// Line 1605, Address: 0x1005dcc, Func Offset: 0x5c
	// Line 1606, Address: 0x1005de0, Func Offset: 0x70
	// Line 1608, Address: 0x1005e00, Func Offset: 0x90
	// Line 1609, Address: 0x1005e18, Func Offset: 0xa8
	// Line 1610, Address: 0x1005e24, Func Offset: 0xb4
	// Line 1611, Address: 0x1005e5c, Func Offset: 0xec
	// Line 1613, Address: 0x1005e64, Func Offset: 0xf4
	// Line 1614, Address: 0x1005e74, Func Offset: 0x104
	// Line 1615, Address: 0x1005e88, Func Offset: 0x118
	// Line 1618, Address: 0x1005ec4, Func Offset: 0x154
	// Line 1619, Address: 0x1005ed8, Func Offset: 0x168
	// Line 1620, Address: 0x1005ee8, Func Offset: 0x178
	// Line 1621, Address: 0x1005efc, Func Offset: 0x18c
	// Line 1622, Address: 0x1005f0c, Func Offset: 0x19c
	// Line 1624, Address: 0x1005f14, Func Offset: 0x1a4
	// Line 1627, Address: 0x1005f1c, Func Offset: 0x1ac
	// Line 1628, Address: 0x1005f30, Func Offset: 0x1c0
	// Line 1629, Address: 0x1005f44, Func Offset: 0x1d4
	// Line 1631, Address: 0x1005f64, Func Offset: 0x1f4
	// Line 1632, Address: 0x1005f7c, Func Offset: 0x20c
	// Line 1633, Address: 0x1005f88, Func Offset: 0x218
	// Line 1634, Address: 0x1005fc8, Func Offset: 0x258
	// Line 1636, Address: 0x1005fd0, Func Offset: 0x260
	// Line 1637, Address: 0x1005fe0, Func Offset: 0x270
	// Line 1638, Address: 0x1005ff4, Func Offset: 0x284
	// Line 1641, Address: 0x1006038, Func Offset: 0x2c8
	// Line 1642, Address: 0x100604c, Func Offset: 0x2dc
	// Line 1643, Address: 0x100605c, Func Offset: 0x2ec
	// Line 1644, Address: 0x100606c, Func Offset: 0x2fc
	// Line 1645, Address: 0x100607c, Func Offset: 0x30c
	// Line 1647, Address: 0x1006084, Func Offset: 0x314
	// Line 1650, Address: 0x100608c, Func Offset: 0x31c
	// Line 1651, Address: 0x10060a0, Func Offset: 0x330
	// Line 1652, Address: 0x10060b4, Func Offset: 0x344
	// Line 1653, Address: 0x10060c0, Func Offset: 0x350
	// Line 1654, Address: 0x10060d8, Func Offset: 0x368
	// Line 1655, Address: 0x10060f8, Func Offset: 0x388
	// Line 1656, Address: 0x1006108, Func Offset: 0x398
	// Line 1658, Address: 0x1006110, Func Offset: 0x3a0
	// Line 1660, Address: 0x1006124, Func Offset: 0x3b4
	// Line 1661, Address: 0x100615c, Func Offset: 0x3ec
	// Line 1662, Address: 0x100616c, Func Offset: 0x3fc
	// Line 1664, Address: 0x1006174, Func Offset: 0x404
	// Line 1667, Address: 0x100617c, Func Offset: 0x40c
	// Line 1668, Address: 0x1006190, Func Offset: 0x420
	// Line 1670, Address: 0x10061a4, Func Offset: 0x434
	// Line 1671, Address: 0x10061c4, Func Offset: 0x454
	// Line 1672, Address: 0x10061e4, Func Offset: 0x474
	// Line 1674, Address: 0x1006200, Func Offset: 0x490
	// Line 1675, Address: 0x1006214, Func Offset: 0x4a4
	// Line 1676, Address: 0x1006238, Func Offset: 0x4c8
	// Line 1677, Address: 0x1006248, Func Offset: 0x4d8
	// Line 1678, Address: 0x1006258, Func Offset: 0x4e8
	// Line 1680, Address: 0x1006260, Func Offset: 0x4f0
	// Line 1683, Address: 0x1006268, Func Offset: 0x4f8
	// Line 1684, Address: 0x100627c, Func Offset: 0x50c
	// Line 1686, Address: 0x1006290, Func Offset: 0x520
	// Line 1687, Address: 0x10062b0, Func Offset: 0x540
	// Line 1688, Address: 0x10062d0, Func Offset: 0x560
	// Line 1690, Address: 0x10062ec, Func Offset: 0x57c
	// Line 1691, Address: 0x1006300, Func Offset: 0x590
	// Line 1692, Address: 0x1006314, Func Offset: 0x5a4
	// Line 1693, Address: 0x1006324, Func Offset: 0x5b4
	// Line 1695, Address: 0x100632c, Func Offset: 0x5bc
	// Line 1698, Address: 0x1006334, Func Offset: 0x5c4
	// Line 1699, Address: 0x1006348, Func Offset: 0x5d8
	// Line 1701, Address: 0x100635c, Func Offset: 0x5ec
	// Line 1702, Address: 0x100637c, Func Offset: 0x60c
	// Line 1703, Address: 0x100638c, Func Offset: 0x61c
	// Line 1705, Address: 0x1006394, Func Offset: 0x624
	// Line 1708, Address: 0x100639c, Func Offset: 0x62c
	// Line 1709, Address: 0x10063b0, Func Offset: 0x640
	// Line 1711, Address: 0x10063c0, Func Offset: 0x650
	// Line 1712, Address: 0x10063e0, Func Offset: 0x670
	// Line 1713, Address: 0x10063f0, Func Offset: 0x680
	// Line 1715, Address: 0x10063f8, Func Offset: 0x688
	// Line 1718, Address: 0x1006400, Func Offset: 0x690
	// Line 1719, Address: 0x1006414, Func Offset: 0x6a4
	// Line 1720, Address: 0x1006438, Func Offset: 0x6c8
	// Line 1721, Address: 0x100644c, Func Offset: 0x6dc
	// Line 1722, Address: 0x1006464, Func Offset: 0x6f4
	// Line 1723, Address: 0x100646c, Func Offset: 0x6fc
	// Line 1724, Address: 0x1006480, Func Offset: 0x710
	// Line 1725, Address: 0x10064a4, Func Offset: 0x734
	// Line 1726, Address: 0x10064ac, Func Offset: 0x73c
	// Line 1727, Address: 0x10064c0, Func Offset: 0x750
	// Line 1728, Address: 0x10064e4, Func Offset: 0x774
	// Line 1729, Address: 0x10064ec, Func Offset: 0x77c
	// Line 1730, Address: 0x1006500, Func Offset: 0x790
	// Line 1731, Address: 0x1006524, Func Offset: 0x7b4
	// Line 1732, Address: 0x100652c, Func Offset: 0x7bc
	// Line 1733, Address: 0x100653c, Func Offset: 0x7cc
	// Line 1734, Address: 0x100654c, Func Offset: 0x7dc
	// Line 1736, Address: 0x1006554, Func Offset: 0x7e4
	// Line 1739, Address: 0x100655c, Func Offset: 0x7ec
	// Line 1740, Address: 0x1006570, Func Offset: 0x800
	// Line 1741, Address: 0x1006598, Func Offset: 0x828
	// Line 1742, Address: 0x10065ac, Func Offset: 0x83c
	// Line 1743, Address: 0x10065c4, Func Offset: 0x854
	// Line 1744, Address: 0x10065cc, Func Offset: 0x85c
	// Line 1745, Address: 0x10065e0, Func Offset: 0x870
	// Line 1746, Address: 0x1006604, Func Offset: 0x894
	// Line 1747, Address: 0x100660c, Func Offset: 0x89c
	// Line 1748, Address: 0x1006620, Func Offset: 0x8b0
	// Line 1749, Address: 0x1006644, Func Offset: 0x8d4
	// Line 1750, Address: 0x100664c, Func Offset: 0x8dc
	// Line 1751, Address: 0x1006660, Func Offset: 0x8f0
	// Line 1752, Address: 0x1006698, Func Offset: 0x928
	// Line 1753, Address: 0x10066a0, Func Offset: 0x930
	// Line 1754, Address: 0x10066b0, Func Offset: 0x940
	// Line 1755, Address: 0x10066c0, Func Offset: 0x950
	// Line 1757, Address: 0x10066c8, Func Offset: 0x958
	// Line 1759, Address: 0x10066d0, Func Offset: 0x960
	// Line 1760, Address: 0x10066f0, Func Offset: 0x980
	// Line 1761, Address: 0x1006714, Func Offset: 0x9a4
	// Line 1762, Address: 0x1006724, Func Offset: 0x9b4
	// Line 1763, Address: 0x100672c, Func Offset: 0x9bc
	// Line 1765, Address: 0x1006734, Func Offset: 0x9c4
	// Line 1766, Address: 0x1006750, Func Offset: 0x9e0
	// Line 1767, Address: 0x1006760, Func Offset: 0x9f0
	// Line 1768, Address: 0x1006768, Func Offset: 0x9f8
	// Line 1770, Address: 0x1006770, Func Offset: 0xa00
	// Line 1771, Address: 0x1006780, Func Offset: 0xa10
	// Line 1772, Address: 0x10067e4, Func Offset: 0xa74
	// Line 1774, Address: 0x10067ec, Func Offset: 0xa7c
	// Line 1776, Address: 0x100683c, Func Offset: 0xacc
	// Line 1778, Address: 0x1006850, Func Offset: 0xae0
	// Line 1779, Address: 0x1006860, Func Offset: 0xaf0
	// Line 1780, Address: 0x1006894, Func Offset: 0xb24
	// Line 1782, Address: 0x100689c, Func Offset: 0xb2c
	// Line 1784, Address: 0x10068b4, Func Offset: 0xb44
	// Line 1785, Address: 0x10068e0, Func Offset: 0xb70
	// Line 1788, Address: 0x10068e8, Func Offset: 0xb78
	// Line 1789, Address: 0x100691c, Func Offset: 0xbac
	// Line 1792, Address: 0x100692c, Func Offset: 0xbbc
	// Line 1793, Address: 0x1006934, Func Offset: 0xbc4
	// Line 1795, Address: 0x100693c, Func Offset: 0xbcc
	// Line 1798, Address: 0x1006944, Func Offset: 0xbd4
	// Line 1799, Address: 0x1006948, Func Offset: 0xbd8
	// Func End, Address: 0x100695c, Func Offset: 0xbec
}

