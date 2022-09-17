typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;

typedef void(*type_3)(_anon0*);
typedef void(*type_5)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_9)(void*, unsigned char, int);

typedef _anon1 type_0[20];
typedef _anon2 type_1[700];
typedef _anon1 type_2[0];
typedef void(*type_4)(_anon0*)[1];
typedef _anon5* type_6[8];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon6 type_10[8];
typedef _anon0* type_11[63];
typedef unsigned char type_12[766];
typedef _anon0 type_13[128];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon3** patbase;
	_anon5 xposi;
	_anon5 yposi;
	_anon9 xspeed;
	_anon9 yspeed;
	_anon9 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon9 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon9 direc;
	_anon9 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon2
{
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
};

struct _anon3
{
	unsigned char cnt;
	union
	{
		_anon1 spra[20];
		_anon1 spr[0];
	};
};

struct _anon4
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

union _anon5
{
	int l;
	_anon7 w;
	_anon8 b;
};

struct _anon6
{
	int cnt;
	_anon0* pActwk[63];
};

struct _anon7
{
	short l;
	short h;
};

struct _anon8
{
	char b4;
	char b3;
	char b2;
	char b1;
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

void(*act_tbl)(_anon0*)[1];
_anon0 actwk[128];
_anon6 pbuffer[8];
_anon5 scra_v_posit;
_anon5 scra_h_posit;
_anon4* lpKeepWork;
void(*sMemSet)(void*, unsigned char, int);
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
unsigned char linkdata;
_anon2 SprBmp[700];

void action();
void speedset(_anon0* pActwk);
void speedset2(_anon0* pActwk);
void actionsub(_anon0* pActwk);
void frameout(_anon0* pActwk);
void patset();
void spatset(short xposi, short yposi, _anon0* pActwk, _anon1* sprdat, short cnt);
int scronchk(_anon0* pActwk);
int scronchk2(_anon0* pActwk);

// 
// Start address: 0x1001260
void action()
{
	_anon0* pActwk;
	int i;
	// Line 40, Address: 0x1001260, Func Offset: 0
	// Line 44, Address: 0x1001270, Func Offset: 0x10
	// Line 45, Address: 0x1001278, Func Offset: 0x18
	// Line 46, Address: 0x1001284, Func Offset: 0x24
	// Line 53, Address: 0x1001290, Func Offset: 0x30
	// Line 56, Address: 0x10012bc, Func Offset: 0x5c
	// Line 57, Address: 0x10012d0, Func Offset: 0x70
	// Func End, Address: 0x10012e8, Func Offset: 0x88
}

// 
// Start address: 0x10012f0
void speedset(_anon0* pActwk)
{
	_anon5 xpos;
	_anon5 ypos;
	_anon9 spd;
	// Line 65, Address: 0x10012f0, Func Offset: 0
	// Line 69, Address: 0x10012f8, Func Offset: 0x8
	// Line 70, Address: 0x1001304, Func Offset: 0x14
	// Line 71, Address: 0x1001310, Func Offset: 0x20
	// Line 72, Address: 0x100131c, Func Offset: 0x2c
	// Line 73, Address: 0x1001338, Func Offset: 0x48
	// Line 74, Address: 0x1001344, Func Offset: 0x54
	// Line 75, Address: 0x100135c, Func Offset: 0x6c
	// Line 76, Address: 0x1001370, Func Offset: 0x80
	// Line 77, Address: 0x1001388, Func Offset: 0x98
	// Line 79, Address: 0x10013a4, Func Offset: 0xb4
	// Line 80, Address: 0x10013bc, Func Offset: 0xcc
	// Line 82, Address: 0x10013cc, Func Offset: 0xdc
	// Line 83, Address: 0x10013e4, Func Offset: 0xf4
	// Line 84, Address: 0x1001400, Func Offset: 0x110
	// Line 86, Address: 0x100140c, Func Offset: 0x11c
	// Line 87, Address: 0x1001428, Func Offset: 0x138
	// Line 88, Address: 0x1001434, Func Offset: 0x144
	// Line 89, Address: 0x1001440, Func Offset: 0x150
	// Func End, Address: 0x100144c, Func Offset: 0x15c
}

// 
// Start address: 0x1001450
void speedset2(_anon0* pActwk)
{
	_anon5 xpos;
	_anon5 ypos;
	int spd;
	int actwkno;
	short d1;
	// Line 97, Address: 0x1001450, Func Offset: 0
	// Line 103, Address: 0x1001464, Func Offset: 0x14
	// Line 104, Address: 0x1001470, Func Offset: 0x20
	// Line 105, Address: 0x100147c, Func Offset: 0x2c
	// Line 106, Address: 0x100148c, Func Offset: 0x3c
	// Line 108, Address: 0x10014a4, Func Offset: 0x54
	// Line 109, Address: 0x10014a8, Func Offset: 0x58
	// Line 110, Address: 0x10014b4, Func Offset: 0x64
	// Line 112, Address: 0x10014e0, Func Offset: 0x90
	// Line 115, Address: 0x10014ec, Func Offset: 0x9c
	// Line 117, Address: 0x1001534, Func Offset: 0xe4
	// Line 120, Address: 0x1001540, Func Offset: 0xf0
	// Line 121, Address: 0x1001544, Func Offset: 0xf4
	// Line 122, Address: 0x1001550, Func Offset: 0x100
	// Line 123, Address: 0x1001560, Func Offset: 0x110
	// Line 124, Address: 0x1001564, Func Offset: 0x114
	// Line 125, Address: 0x1001570, Func Offset: 0x120
	// Line 126, Address: 0x100157c, Func Offset: 0x12c
	// Line 127, Address: 0x1001588, Func Offset: 0x138
	// Func End, Address: 0x10015a0, Func Offset: 0x150
}

// 
// Start address: 0x10015a0
void actionsub(_anon0* pActwk)
{
	int i;
	unsigned short flag;
	short hsiz;
	short vsiz;
	short xpos;
	short ypos;
	unsigned char pri;
	// Line 135, Address: 0x10015a0, Func Offset: 0
	// Line 142, Address: 0x10015c4, Func Offset: 0x24
	// Line 144, Address: 0x10015d8, Func Offset: 0x38
	// Line 145, Address: 0x10015e8, Func Offset: 0x48
	// Line 146, Address: 0x10015f8, Func Offset: 0x58
	// Line 147, Address: 0x1001600, Func Offset: 0x60
	// Line 149, Address: 0x1001608, Func Offset: 0x68
	// Line 150, Address: 0x1001624, Func Offset: 0x84
	// Line 151, Address: 0x1001634, Func Offset: 0x94
	// Line 152, Address: 0x1001648, Func Offset: 0xa8
	// Line 153, Address: 0x1001664, Func Offset: 0xc4
	// Line 155, Address: 0x1001684, Func Offset: 0xe4
	// Line 156, Address: 0x10016a0, Func Offset: 0x100
	// Line 157, Address: 0x10016b0, Func Offset: 0x110
	// Line 159, Address: 0x10016cc, Func Offset: 0x12c
	// Line 160, Address: 0x10016ec, Func Offset: 0x14c
	// Line 161, Address: 0x10016f4, Func Offset: 0x154
	// Line 163, Address: 0x1001710, Func Offset: 0x170
	// Line 165, Address: 0x1001730, Func Offset: 0x190
	// Line 166, Address: 0x1001744, Func Offset: 0x1a4
	// Line 167, Address: 0x1001760, Func Offset: 0x1c0
	// Line 170, Address: 0x1001780, Func Offset: 0x1e0
	// Line 171, Address: 0x100178c, Func Offset: 0x1ec
	// Line 172, Address: 0x10017a4, Func Offset: 0x204
	// Line 174, Address: 0x10017b0, Func Offset: 0x210
	// Line 175, Address: 0x10017d4, Func Offset: 0x234
	// Line 177, Address: 0x10017f4, Func Offset: 0x254
	// Func End, Address: 0x100181c, Func Offset: 0x27c
}

// 
// Start address: 0x1001820
void frameout(_anon0* pActwk)
{
	// Line 185, Address: 0x1001820, Func Offset: 0
	// Line 187, Address: 0x100182c, Func Offset: 0xc
	// Line 188, Address: 0x1001848, Func Offset: 0x28
	// Func End, Address: 0x1001858, Func Offset: 0x38
}

// 
// Start address: 0x1001860
void patset()
{
	_anon0* pActwk;
	unsigned char flag;
	short i;
	short act;
	short xposi;
	short yposi;
	short patno;
	short cnt;
	_anon3* patadr;
	_anon3** patbase;
	_anon1* sprdat;
	_anon5* pScrHposi;
	_anon5* pScrVposi;
	_anon5* patsettbl[8];
	// Line 198, Address: 0x1001860, Func Offset: 0
	// Line 210, Address: 0x100188c, Func Offset: 0x2c
	// Line 222, Address: 0x10018c0, Func Offset: 0x60
	// Line 224, Address: 0x10018d4, Func Offset: 0x74
	// Line 225, Address: 0x10018dc, Func Offset: 0x7c
	// Line 227, Address: 0x10018e8, Func Offset: 0x88
	// Line 228, Address: 0x100190c, Func Offset: 0xac
	// Line 231, Address: 0x1001910, Func Offset: 0xb0
	// Line 232, Address: 0x100193c, Func Offset: 0xdc
	// Line 233, Address: 0x1001954, Func Offset: 0xf4
	// Line 234, Address: 0x1001968, Func Offset: 0x108
	// Line 235, Address: 0x1001970, Func Offset: 0x110
	// Line 237, Address: 0x1001978, Func Offset: 0x118
	// Line 238, Address: 0x100198c, Func Offset: 0x12c
	// Line 239, Address: 0x10019a0, Func Offset: 0x140
	// Line 240, Address: 0x10019ac, Func Offset: 0x14c
	// Line 241, Address: 0x10019c0, Func Offset: 0x160
	// Line 242, Address: 0x10019cc, Func Offset: 0x16c
	// Line 243, Address: 0x10019d8, Func Offset: 0x178
	// Line 245, Address: 0x10019f0, Func Offset: 0x190
	// Line 246, Address: 0x1001a10, Func Offset: 0x1b0
	// Line 247, Address: 0x1001a18, Func Offset: 0x1b8
	// Line 249, Address: 0x1001a30, Func Offset: 0x1d0
	// Line 251, Address: 0x1001a50, Func Offset: 0x1f0
	// Line 252, Address: 0x1001a60, Func Offset: 0x200
	// Line 253, Address: 0x1001a6c, Func Offset: 0x20c
	// Line 256, Address: 0x1001a74, Func Offset: 0x214
	// Line 257, Address: 0x1001a80, Func Offset: 0x220
	// Line 260, Address: 0x1001a8c, Func Offset: 0x22c
	// Line 261, Address: 0x1001a94, Func Offset: 0x234
	// Line 262, Address: 0x1001aa0, Func Offset: 0x240
	// Line 263, Address: 0x1001abc, Func Offset: 0x25c
	// Line 264, Address: 0x1001acc, Func Offset: 0x26c
	// Line 265, Address: 0x1001ad4, Func Offset: 0x274
	// Line 266, Address: 0x1001ae8, Func Offset: 0x288
	// Line 268, Address: 0x1001af4, Func Offset: 0x294
	// Line 269, Address: 0x1001b04, Func Offset: 0x2a4
	// Line 271, Address: 0x1001b20, Func Offset: 0x2c0
	// Line 273, Address: 0x1001b2c, Func Offset: 0x2cc
	// Line 274, Address: 0x1001b38, Func Offset: 0x2d8
	// Line 276, Address: 0x1001b64, Func Offset: 0x304
	// Line 278, Address: 0x1001b84, Func Offset: 0x324
	// Line 279, Address: 0x1001ba8, Func Offset: 0x348
	// Line 280, Address: 0x1001bcc, Func Offset: 0x36c
	// Line 281, Address: 0x1001bec, Func Offset: 0x38c
	// Func End, Address: 0x1001c20, Func Offset: 0x3c0
}

// 
// Start address: 0x1001c20
void spatset(short xposi, short yposi, _anon0* pActwk, _anon1* sprdat, short cnt)
{
	unsigned char flag;
	short x;
	short y;
	unsigned short reverse;
	// Line 292, Address: 0x1001c20, Func Offset: 0
	// Line 297, Address: 0x1001c4c, Func Offset: 0x2c
	// Line 298, Address: 0x1001c58, Func Offset: 0x38
	// Line 299, Address: 0x1001c60, Func Offset: 0x40
	// Line 300, Address: 0x1001c68, Func Offset: 0x48
	// Line 301, Address: 0x1001c78, Func Offset: 0x58
	// Line 303, Address: 0x1001c90, Func Offset: 0x70
	// Line 305, Address: 0x1001cc8, Func Offset: 0xa8
	// Line 306, Address: 0x1001d00, Func Offset: 0xe0
	// Line 307, Address: 0x1001d38, Func Offset: 0x118
	// Line 309, Address: 0x1001d40, Func Offset: 0x120
	// Line 310, Address: 0x1001db8, Func Offset: 0x198
	// Line 311, Address: 0x1001df0, Func Offset: 0x1d0
	// Line 313, Address: 0x1001df8, Func Offset: 0x1d8
	// Line 314, Address: 0x1001e30, Func Offset: 0x210
	// Line 315, Address: 0x1001ea8, Func Offset: 0x288
	// Line 317, Address: 0x1001eb0, Func Offset: 0x290
	// Line 318, Address: 0x1001f28, Func Offset: 0x308
	// Line 321, Address: 0x1001fa0, Func Offset: 0x380
	// Line 322, Address: 0x1001fa4, Func Offset: 0x384
	// Line 323, Address: 0x1001fd4, Func Offset: 0x3b4
	// Line 325, Address: 0x1001fdc, Func Offset: 0x3bc
	// Line 326, Address: 0x1002008, Func Offset: 0x3e8
	// Line 328, Address: 0x1002010, Func Offset: 0x3f0
	// Line 329, Address: 0x100203c, Func Offset: 0x41c
	// Line 332, Address: 0x1002044, Func Offset: 0x424
	// Line 333, Address: 0x1002074, Func Offset: 0x454
	// Line 335, Address: 0x1002088, Func Offset: 0x468
	// Line 336, Address: 0x1002094, Func Offset: 0x474
	// Line 338, Address: 0x10020b4, Func Offset: 0x494
	// Func End, Address: 0x10020d4, Func Offset: 0x4b4
}

// 
// Start address: 0x10020e0
int scronchk(_anon0* pActwk)
{
	short xposi;
	short yposi;
	// Line 348, Address: 0x10020e0, Func Offset: 0
	// Line 351, Address: 0x10020f0, Func Offset: 0x10
	// Line 352, Address: 0x1002100, Func Offset: 0x20
	// Line 353, Address: 0x1002114, Func Offset: 0x34
	// Line 354, Address: 0x1002144, Func Offset: 0x64
	// Line 355, Address: 0x1002154, Func Offset: 0x74
	// Line 356, Address: 0x1002168, Func Offset: 0x88
	// Line 357, Address: 0x1002198, Func Offset: 0xb8
	// Line 358, Address: 0x100219c, Func Offset: 0xbc
	// Func End, Address: 0x10021b0, Func Offset: 0xd0
}

// 
// Start address: 0x10021b0
int scronchk2(_anon0* pActwk)
{
	short xposi;
	short yposi;
	short hsize;
	// Line 366, Address: 0x10021b0, Func Offset: 0
	// Line 370, Address: 0x10021c4, Func Offset: 0x14
	// Line 371, Address: 0x10021d8, Func Offset: 0x28
	// Line 372, Address: 0x10021e8, Func Offset: 0x38
	// Line 373, Address: 0x10021fc, Func Offset: 0x4c
	// Line 374, Address: 0x1002208, Func Offset: 0x58
	// Line 375, Address: 0x1002224, Func Offset: 0x74
	// Line 376, Address: 0x1002230, Func Offset: 0x80
	// Line 377, Address: 0x100223c, Func Offset: 0x8c
	// Line 378, Address: 0x100225c, Func Offset: 0xac
	// Line 379, Address: 0x100226c, Func Offset: 0xbc
	// Line 380, Address: 0x1002280, Func Offset: 0xd0
	// Line 381, Address: 0x10022b0, Func Offset: 0x100
	// Line 382, Address: 0x10022b4, Func Offset: 0x104
	// Func End, Address: 0x10022cc, Func Offset: 0x11c
}

