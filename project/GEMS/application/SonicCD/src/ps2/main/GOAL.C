typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef struct _anon10;

typedef void(*type_1)(_anon1*, _anon1*);
typedef void(*type_8)(_anon1*);
typedef void(*type_19)(_anon1*);
typedef void(*type_24)(_anon1*);
typedef void(*type_27)(_anon1*);

typedef _anon10 type_0[20];
typedef void(*type_2)(_anon1*, _anon1*)[3];
typedef _anon10 type_3[0];
typedef unsigned short type_4[21];
typedef unsigned int type_5[24];
typedef char type_6[16];
typedef short type_7[11];
typedef void(*type_9)(_anon1*)[5];
typedef unsigned char* type_10[0];
typedef unsigned char* type_11[0];
typedef unsigned char* type_12[0];
typedef tagPALETTEENTRY type_13[16];
typedef unsigned char* type_14[0];
typedef unsigned char type_15[2];
typedef _anon0* type_16[0];
typedef unsigned char type_17[22];
typedef _anon0* type_18[0];
typedef void(*type_20)(_anon1*)[3];
typedef _anon0* type_21[0];
typedef _anon0* type_22[0];
typedef short type_23[56];
typedef void(*type_25)(_anon1*)[3];
typedef _anon1 type_26[128];
typedef void(*type_28)(_anon1*)[6];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon10 spra[20];
		_anon10 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon2
{
	unsigned char* CGdata;
	unsigned char* Blkdata;
	unsigned char* Mapdata;
	unsigned char iniCGno1;
	unsigned char stCGno1;
	unsigned char iniCGno2;
	unsigned char stCGno2;
	unsigned char colorno1;
	unsigned char colorno2;
	unsigned char soundNo;
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

union _anon8
{
	unsigned short w;
	_anon9 b;
};

struct _anon9
{
	unsigned char l;
	unsigned char h;
};

struct _anon10
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

void(*gene_tbl)(_anon1*)[6];
_anon0* genepat[0];
_anon1 actwk[128];
unsigned char pltime_f;
unsigned char* genechg[0];
_anon2 mapinittbl;
void(*bring2_tbl)(_anon1*)[3];
_anon0* bring2pat[0];
unsigned char* bring2chg[0];
void(*bigring_tbl)(_anon1*)[3];
short plring;
_anon0* bringpat[0];
unsigned char ta_flag;
unsigned char clrspflg_save;
_anon6 scroll_start;
_anon8 swdata;
unsigned char plautoflag;
_anon3 scra_h_posit;
unsigned char special_flag;
unsigned char* bringchg[0];
void(*mosugu_tbl)(_anon1*, _anon1*)[3];
_anon6 stageno;
_anon0* goalpat[0];
unsigned int divdevwk[24];
unsigned char time_flag;
unsigned char plpower_a;
char time_item;
short backto_cnt;
short scralim_n_left;
short scralim_left;
unsigned char plflag;
unsigned char generate_flag;
void(*goal_tbl)(_anon1*)[5];
unsigned char plpower_m;
unsigned char plpower_s;
unsigned char* goalchg[0];
short ringbonus;
short timebonus;
_anon3 pltime;
unsigned char bonus_f;
tagPALETTEENTRY* lpcolorwk;

void gene(_anon1* pActwk);
void gene_init(_anon1* pActwk);
void gene_move0(_anon1* pActwk);
void gene_move1(_anon1* pActwk);
void kira_set(_anon1* pActwk);
void kira_move(_anon1* pActwk);
short gene_coli(_anon1* pActwk, _anon1* pPlaywk);
void bring2(_anon1* pActwk);
void bring2init(_anon1* pActwk);
void bring2move0(_anon1* pActwk);
void bring2move1(_anon1* pActwk);
void bigring(_anon1* pActwk);
void bring_init(_anon1* pActwk);
void bring_move0(_anon1* pActwk);
void bring_move1(_anon1* pActwk);
short bring_coli(_anon1* pActwk, _anon1* pPlaywk);
void mosugu(_anon1* pActwk);
void mosug_init(_anon1* pActwk, _anon1* pPlaywk);
void mosug_move0(_anon1* pActwk, _anon1* pPlaywk);
void mosug_move1(_anon1* pActwk, _anon1* pPlaywk);
void offset_set(_anon1* pActwk);
void goal(_anon1* pActwk);
void goal_init(_anon1* pActwk);
void goal_move0(_anon1* pActwk);
void goal_move1(_anon1* pActwk);
void goal_move2(_anon1* pActwk);
void goal_move3(_anon1* pActwk);
void genecolor();

// 
// Start address: 0x100f280
void gene(_anon1* pActwk)
{
	// Line 95, Address: 0x100f280, Func Offset: 0
	// Line 96, Address: 0x100f28c, Func Offset: 0xc
	// Line 97, Address: 0x100f2d0, Func Offset: 0x50
	// Line 99, Address: 0x100f2e4, Func Offset: 0x64
	// Line 101, Address: 0x100f2fc, Func Offset: 0x7c
	// Line 104, Address: 0x100f314, Func Offset: 0x94
	// Line 105, Address: 0x100f320, Func Offset: 0xa0
	// Func End, Address: 0x100f330, Func Offset: 0xb0
}

// 
// Start address: 0x100f330
void gene_init(_anon1* pActwk)
{
	// Line 117, Address: 0x100f330, Func Offset: 0
	// Line 118, Address: 0x100f33c, Func Offset: 0xc
	// Line 119, Address: 0x100f34c, Func Offset: 0x1c
	// Line 120, Address: 0x100f35c, Func Offset: 0x2c
	// Line 121, Address: 0x100f368, Func Offset: 0x38
	// Line 122, Address: 0x100f378, Func Offset: 0x48
	// Line 123, Address: 0x100f384, Func Offset: 0x54
	// Line 124, Address: 0x100f390, Func Offset: 0x60
	// Line 125, Address: 0x100f39c, Func Offset: 0x6c
	// Line 126, Address: 0x100f3a8, Func Offset: 0x78
	// Line 127, Address: 0x100f3b4, Func Offset: 0x84
	// Func End, Address: 0x100f3c4, Func Offset: 0x94
}

// 
// Start address: 0x100f3d0
void gene_move0(_anon1* pActwk)
{
	short coli;
	short iD0;
	short iD1;
	// Line 139, Address: 0x100f3d0, Func Offset: 0
	// Line 143, Address: 0x100f3e8, Func Offset: 0x18
	// Line 144, Address: 0x100f3fc, Func Offset: 0x2c
	// Line 145, Address: 0x100f418, Func Offset: 0x48
	// Line 147, Address: 0x100f428, Func Offset: 0x58
	// Line 148, Address: 0x100f430, Func Offset: 0x60
	// Line 149, Address: 0x100f43c, Func Offset: 0x6c
	// Line 150, Address: 0x100f448, Func Offset: 0x78
	// Line 152, Address: 0x100f458, Func Offset: 0x88
	// Line 153, Address: 0x100f468, Func Offset: 0x98
	// Line 154, Address: 0x100f47c, Func Offset: 0xac
	// Line 155, Address: 0x100f488, Func Offset: 0xb8
	// Line 156, Address: 0x100f49c, Func Offset: 0xcc
	// Line 157, Address: 0x100f4a8, Func Offset: 0xd8
	// Line 158, Address: 0x100f4b8, Func Offset: 0xe8
	// Line 159, Address: 0x100f4c4, Func Offset: 0xf4
	// Line 161, Address: 0x100f4e0, Func Offset: 0x110
	// Line 162, Address: 0x100f4f0, Func Offset: 0x120
	// Line 163, Address: 0x100f4fc, Func Offset: 0x12c
	// Line 164, Address: 0x100f508, Func Offset: 0x138
	// Line 165, Address: 0x100f510, Func Offset: 0x140
	// Line 167, Address: 0x100f518, Func Offset: 0x148
	// Line 168, Address: 0x100f528, Func Offset: 0x158
	// Line 169, Address: 0x100f534, Func Offset: 0x164
	// Line 170, Address: 0x100f540, Func Offset: 0x170
	// Line 171, Address: 0x100f548, Func Offset: 0x178
	// Func End, Address: 0x100f564, Func Offset: 0x194
}

// 
// Start address: 0x100f570
void gene_move1(_anon1* pActwk)
{
	_anon1* pActfree;
	short iD0;
	short iD1;
	short ret;
	unsigned short wOff;
	unsigned char bywk;
	char tbl[16];
	// Line 183, Address: 0x100f570, Func Offset: 0
	// Line 188, Address: 0x100f590, Func Offset: 0x20
	// Line 199, Address: 0x100f5c4, Func Offset: 0x54
	// Line 200, Address: 0x100f5d0, Func Offset: 0x60
	// Line 201, Address: 0x100f5dc, Func Offset: 0x6c
	// Line 202, Address: 0x100f5e8, Func Offset: 0x78
	// Line 203, Address: 0x100f5f4, Func Offset: 0x84
	// Line 204, Address: 0x100f604, Func Offset: 0x94
	// Line 205, Address: 0x100f60c, Func Offset: 0x9c
	// Line 206, Address: 0x100f618, Func Offset: 0xa8
	// Line 207, Address: 0x100f628, Func Offset: 0xb8
	// Line 208, Address: 0x100f634, Func Offset: 0xc4
	// Line 209, Address: 0x100f640, Func Offset: 0xd0
	// Line 210, Address: 0x100f64c, Func Offset: 0xdc
	// Line 211, Address: 0x100f650, Func Offset: 0xe0
	// Line 212, Address: 0x100f66c, Func Offset: 0xfc
	// Line 213, Address: 0x100f67c, Func Offset: 0x10c
	// Line 214, Address: 0x100f688, Func Offset: 0x118
	// Line 215, Address: 0x100f694, Func Offset: 0x124
	// Line 216, Address: 0x100f6a0, Func Offset: 0x130
	// Line 217, Address: 0x100f6b0, Func Offset: 0x140
	// Line 218, Address: 0x100f6c0, Func Offset: 0x150
	// Line 219, Address: 0x100f6dc, Func Offset: 0x16c
	// Line 220, Address: 0x100f6ec, Func Offset: 0x17c
	// Line 221, Address: 0x100f70c, Func Offset: 0x19c
	// Line 222, Address: 0x100f71c, Func Offset: 0x1ac
	// Line 224, Address: 0x100f724, Func Offset: 0x1b4
	// Line 225, Address: 0x100f730, Func Offset: 0x1c0
	// Line 226, Address: 0x100f740, Func Offset: 0x1d0
	// Line 227, Address: 0x100f74c, Func Offset: 0x1dc
	// Func End, Address: 0x100f770, Func Offset: 0x200
}

// 
// Start address: 0x100f770
void kira_set(_anon1* pActwk)
{
	int i;
	int ret;
	int iColor;
	short iD1;
	_anon1* pActfree;
	short tbl[11];
	// Line 239, Address: 0x100f770, Func Offset: 0
	// Line 243, Address: 0x100f78c, Func Offset: 0x1c
	// Line 246, Address: 0x100f7b8, Func Offset: 0x48
	// Line 247, Address: 0x100f7c4, Func Offset: 0x54
	// Line 249, Address: 0x100f7d0, Func Offset: 0x60
	// Line 251, Address: 0x100f7e0, Func Offset: 0x70
	// Line 252, Address: 0x100f7fc, Func Offset: 0x8c
	// Line 253, Address: 0x100f804, Func Offset: 0x94
	// Line 254, Address: 0x100f810, Func Offset: 0xa0
	// Line 255, Address: 0x100f820, Func Offset: 0xb0
	// Line 256, Address: 0x100f830, Func Offset: 0xc0
	// Line 257, Address: 0x100f840, Func Offset: 0xd0
	// Line 258, Address: 0x100f84c, Func Offset: 0xdc
	// Line 259, Address: 0x100f85c, Func Offset: 0xec
	// Line 260, Address: 0x100f864, Func Offset: 0xf4
	// Line 261, Address: 0x100f870, Func Offset: 0x100
	// Line 262, Address: 0x100f87c, Func Offset: 0x10c
	// Line 263, Address: 0x100f898, Func Offset: 0x128
	// Line 264, Address: 0x100f8b4, Func Offset: 0x144
	// Func End, Address: 0x100f8d4, Func Offset: 0x164
}

// 
// Start address: 0x100f8e0
void kira_move(_anon1* pActwk)
{
	short ret;
	// Line 276, Address: 0x100f8e0, Func Offset: 0
	// Line 279, Address: 0x100f8f0, Func Offset: 0x10
	// Line 280, Address: 0x100f904, Func Offset: 0x24
	// Line 281, Address: 0x100f910, Func Offset: 0x30
	// Line 282, Address: 0x100f924, Func Offset: 0x44
	// Line 284, Address: 0x100f934, Func Offset: 0x54
	// Line 285, Address: 0x100f940, Func Offset: 0x60
	// Line 286, Address: 0x100f94c, Func Offset: 0x6c
	// Line 288, Address: 0x100f954, Func Offset: 0x74
	// Func End, Address: 0x100f968, Func Offset: 0x88
}

// 
// Start address: 0x100f970
short gene_coli(_anon1* pActwk, _anon1* pPlaywk)
{
	short iD0;
	short iD1;
	// Line 302, Address: 0x100f970, Func Offset: 0
	// Line 305, Address: 0x100f984, Func Offset: 0x14
	// Line 306, Address: 0x100f9a8, Func Offset: 0x38
	// Line 307, Address: 0x100f9bc, Func Offset: 0x4c
	// Line 308, Address: 0x100f9c8, Func Offset: 0x58
	// Line 309, Address: 0x100f9fc, Func Offset: 0x8c
	// Line 310, Address: 0x100fa08, Func Offset: 0x98
	// Line 311, Address: 0x100fa24, Func Offset: 0xb4
	// Line 312, Address: 0x100fa30, Func Offset: 0xc0
	// Line 314, Address: 0x100fa58, Func Offset: 0xe8
	// Line 315, Address: 0x100fa6c, Func Offset: 0xfc
	// Line 316, Address: 0x100fa78, Func Offset: 0x108
	// Line 317, Address: 0x100faac, Func Offset: 0x13c
	// Line 318, Address: 0x100fab8, Func Offset: 0x148
	// Line 319, Address: 0x100fad4, Func Offset: 0x164
	// Line 320, Address: 0x100fae0, Func Offset: 0x170
	// Line 321, Address: 0x100fb08, Func Offset: 0x198
	// Line 322, Address: 0x100fb0c, Func Offset: 0x19c
	// Func End, Address: 0x100fb20, Func Offset: 0x1b0
}

// 
// Start address: 0x100fb20
void bring2(_anon1* pActwk)
{
	// Line 341, Address: 0x100fb20, Func Offset: 0
	// Line 342, Address: 0x100fb2c, Func Offset: 0xc
	// Line 343, Address: 0x100fb70, Func Offset: 0x50
	// Line 344, Address: 0x100fb7c, Func Offset: 0x5c
	// Func End, Address: 0x100fb8c, Func Offset: 0x6c
}

// 
// Start address: 0x100fb90
void bring2init(_anon1* pActwk)
{
	// Line 356, Address: 0x100fb90, Func Offset: 0
	// Line 357, Address: 0x100fb9c, Func Offset: 0xc
	// Line 358, Address: 0x100fbac, Func Offset: 0x1c
	// Line 359, Address: 0x100fbbc, Func Offset: 0x2c
	// Line 360, Address: 0x100fbc8, Func Offset: 0x38
	// Line 361, Address: 0x100fbd8, Func Offset: 0x48
	// Line 362, Address: 0x100fbe4, Func Offset: 0x54
	// Func End, Address: 0x100fbf4, Func Offset: 0x64
}

// 
// Start address: 0x100fc00
void bring2move0(_anon1* pActwk)
{
	// Line 374, Address: 0x100fc00, Func Offset: 0
	// Line 375, Address: 0x100fc0c, Func Offset: 0xc
	// Line 376, Address: 0x100fc20, Func Offset: 0x20
	// Func End, Address: 0x100fc30, Func Offset: 0x30
}

// 
// Start address: 0x100fc30
void bring2move1(_anon1* pActwk)
{
	// Line 388, Address: 0x100fc30, Func Offset: 0
	// Line 389, Address: 0x100fc3c, Func Offset: 0xc
	// Line 390, Address: 0x100fc48, Func Offset: 0x18
	// Func End, Address: 0x100fc58, Func Offset: 0x28
}

// 
// Start address: 0x100fc60
void bigring(_anon1* pActwk)
{
	// Line 409, Address: 0x100fc60, Func Offset: 0
	// Line 410, Address: 0x100fc6c, Func Offset: 0xc
	// Line 412, Address: 0x100fc84, Func Offset: 0x24
	// Line 413, Address: 0x100fc90, Func Offset: 0x30
	// Line 415, Address: 0x100fc98, Func Offset: 0x38
	// Line 417, Address: 0x100fcb4, Func Offset: 0x54
	// Line 418, Address: 0x100fcc0, Func Offset: 0x60
	// Line 421, Address: 0x100fcc8, Func Offset: 0x68
	// Line 422, Address: 0x100fd0c, Func Offset: 0xac
	// Line 423, Address: 0x100fd24, Func Offset: 0xc4
	// Line 424, Address: 0x100fd30, Func Offset: 0xd0
	// Func End, Address: 0x100fd40, Func Offset: 0xe0
}

// 
// Start address: 0x100fd40
void bring_init(_anon1* pActwk)
{
	// Line 436, Address: 0x100fd40, Func Offset: 0
	// Line 437, Address: 0x100fd4c, Func Offset: 0xc
	// Line 439, Address: 0x100fd78, Func Offset: 0x38
	// Line 440, Address: 0x100fd84, Func Offset: 0x44
	// Line 443, Address: 0x100fd8c, Func Offset: 0x4c
	// Line 444, Address: 0x100fd9c, Func Offset: 0x5c
	// Line 445, Address: 0x100fdac, Func Offset: 0x6c
	// Line 446, Address: 0x100fdb8, Func Offset: 0x78
	// Line 447, Address: 0x100fdc8, Func Offset: 0x88
	// Line 448, Address: 0x100fdd4, Func Offset: 0x94
	// Line 449, Address: 0x100fde0, Func Offset: 0xa0
	// Line 450, Address: 0x100fdec, Func Offset: 0xac
	// Line 451, Address: 0x100fdf8, Func Offset: 0xb8
	// Func End, Address: 0x100fe08, Func Offset: 0xc8
}

// 
// Start address: 0x100fe10
void bring_move0(_anon1* pActwk)
{
	_anon1* pActfree;
	_anon1* pPlaywk;
	short iD0;
	short ret;
	// Line 463, Address: 0x100fe10, Func Offset: 0
	// Line 467, Address: 0x100fe28, Func Offset: 0x18
	// Line 468, Address: 0x100fe30, Func Offset: 0x20
	// Line 469, Address: 0x100fe48, Func Offset: 0x38
	// Line 470, Address: 0x100fe58, Func Offset: 0x48
	// Line 474, Address: 0x100fe6c, Func Offset: 0x5c
	// Line 475, Address: 0x100fe78, Func Offset: 0x68
	// Line 476, Address: 0x100fe88, Func Offset: 0x78
	// Line 477, Address: 0x100fe98, Func Offset: 0x88
	// Line 478, Address: 0x100fea4, Func Offset: 0x94
	// Line 479, Address: 0x100fea8, Func Offset: 0x98
	// Line 480, Address: 0x100febc, Func Offset: 0xac
	// Line 481, Address: 0x100fec8, Func Offset: 0xb8
	// Line 482, Address: 0x100fecc, Func Offset: 0xbc
	// Line 483, Address: 0x100fed0, Func Offset: 0xc0
	// Line 484, Address: 0x100fedc, Func Offset: 0xcc
	// Line 485, Address: 0x100fee8, Func Offset: 0xd8
	// Line 486, Address: 0x100ff04, Func Offset: 0xf4
	// Line 487, Address: 0x100ff14, Func Offset: 0x104
	// Line 488, Address: 0x100ff20, Func Offset: 0x110
	// Line 489, Address: 0x100ff30, Func Offset: 0x120
	// Line 490, Address: 0x100ff40, Func Offset: 0x130
	// Line 492, Address: 0x100ff4c, Func Offset: 0x13c
	// Func End, Address: 0x100ff68, Func Offset: 0x158
}

// 
// Start address: 0x100ff70
void bring_move1(_anon1* pActwk)
{
	// Line 504, Address: 0x100ff70, Func Offset: 0
	// Line 505, Address: 0x100ff7c, Func Offset: 0xc
	// Line 506, Address: 0x100ff90, Func Offset: 0x20
	// Func End, Address: 0x100ffa0, Func Offset: 0x30
}

// 
// Start address: 0x100ffa0
short bring_coli(_anon1* pActwk, _anon1* pPlaywk)
{
	short iD0;
	short iD1;
	// Line 520, Address: 0x100ffa0, Func Offset: 0
	// Line 523, Address: 0x100ffb4, Func Offset: 0x14
	// Line 524, Address: 0x100ffc8, Func Offset: 0x28
	// Line 525, Address: 0x100ffd4, Func Offset: 0x34
	// Line 526, Address: 0x1010008, Func Offset: 0x68
	// Line 527, Address: 0x1010014, Func Offset: 0x74
	// Line 528, Address: 0x1010030, Func Offset: 0x90
	// Line 529, Address: 0x101003c, Func Offset: 0x9c
	// Line 530, Address: 0x1010064, Func Offset: 0xc4
	// Line 531, Address: 0x1010078, Func Offset: 0xd8
	// Line 532, Address: 0x1010084, Func Offset: 0xe4
	// Line 533, Address: 0x10100b8, Func Offset: 0x118
	// Line 534, Address: 0x10100c4, Func Offset: 0x124
	// Line 535, Address: 0x10100e0, Func Offset: 0x140
	// Line 536, Address: 0x10100ec, Func Offset: 0x14c
	// Line 537, Address: 0x1010114, Func Offset: 0x174
	// Line 538, Address: 0x1010118, Func Offset: 0x178
	// Func End, Address: 0x101012c, Func Offset: 0x18c
}

// 
// Start address: 0x1010130
void mosugu(_anon1* pActwk)
{
	// Line 557, Address: 0x1010130, Func Offset: 0
	// Line 558, Address: 0x101013c, Func Offset: 0xc
	// Line 559, Address: 0x1010188, Func Offset: 0x58
	// Line 560, Address: 0x10101a4, Func Offset: 0x74
	// Line 561, Address: 0x10101b0, Func Offset: 0x80
	// Line 562, Address: 0x10101bc, Func Offset: 0x8c
	// Func End, Address: 0x10101cc, Func Offset: 0x9c
}

// 
// Start address: 0x10101d0
void mosug_init(_anon1* pActwk, _anon1* pPlaywk)
{
	// Line 574, Address: 0x10101d0, Func Offset: 0
	// Line 575, Address: 0x10101e0, Func Offset: 0x10
	// Line 577, Address: 0x1010214, Func Offset: 0x44
	// Line 579, Address: 0x101022c, Func Offset: 0x5c
	// Line 581, Address: 0x1010238, Func Offset: 0x68
	// Line 584, Address: 0x1010240, Func Offset: 0x70
	// Line 588, Address: 0x1010258, Func Offset: 0x88
	// Line 589, Address: 0x1010268, Func Offset: 0x98
	// Line 590, Address: 0x1010278, Func Offset: 0xa8
	// Line 591, Address: 0x1010284, Func Offset: 0xb4
	// Line 592, Address: 0x1010294, Func Offset: 0xc4
	// Line 593, Address: 0x10102a0, Func Offset: 0xd0
	// Line 594, Address: 0x10102ac, Func Offset: 0xdc
	// Line 595, Address: 0x10102b8, Func Offset: 0xe8
	// Line 596, Address: 0x10102c4, Func Offset: 0xf4
	// Line 600, Address: 0x10102d0, Func Offset: 0x100
	// Line 602, Address: 0x10102e0, Func Offset: 0x110
	// Line 603, Address: 0x10102f0, Func Offset: 0x120
	// Func End, Address: 0x1010300, Func Offset: 0x130
}

// 
// Start address: 0x1010300
void mosug_move0(_anon1* pActwk, _anon1* pPlaywk)
{
	short iD0;
	short iD1;
	// Line 616, Address: 0x1010300, Func Offset: 0
	// Line 620, Address: 0x1010314, Func Offset: 0x14
	// Line 621, Address: 0x1010344, Func Offset: 0x44
	// Line 622, Address: 0x1010374, Func Offset: 0x74
	// Line 624, Address: 0x1010390, Func Offset: 0x90
	// Line 625, Address: 0x10103a8, Func Offset: 0xa8
	// Line 628, Address: 0x10103b8, Func Offset: 0xb8
	// Line 630, Address: 0x10103d0, Func Offset: 0xd0
	// Line 633, Address: 0x10103e0, Func Offset: 0xe0
	// Line 635, Address: 0x1010450, Func Offset: 0x150
	// Line 640, Address: 0x1010460, Func Offset: 0x160
	// Line 641, Address: 0x1010494, Func Offset: 0x194
	// Line 642, Address: 0x10104a0, Func Offset: 0x1a0
	// Line 644, Address: 0x10104b0, Func Offset: 0x1b0
	// Line 646, Address: 0x10104c4, Func Offset: 0x1c4
	// Line 648, Address: 0x10104f0, Func Offset: 0x1f0
	// Line 653, Address: 0x1010508, Func Offset: 0x208
	// Line 654, Address: 0x1010518, Func Offset: 0x218
	// Line 655, Address: 0x1010528, Func Offset: 0x228
	// Line 656, Address: 0x1010538, Func Offset: 0x238
	// Line 657, Address: 0x1010540, Func Offset: 0x240
	// Line 658, Address: 0x1010548, Func Offset: 0x248
	// Line 660, Address: 0x1010550, Func Offset: 0x250
	// Func End, Address: 0x1010564, Func Offset: 0x264
}

// 
// Start address: 0x1010570
void mosug_move1(_anon1* pActwk, _anon1* pPlaywk)
{
	short iD0;
	short iD1;
	// Line 673, Address: 0x1010570, Func Offset: 0
	// Line 677, Address: 0x1010584, Func Offset: 0x14
	// Line 678, Address: 0x10105b4, Func Offset: 0x44
	// Line 679, Address: 0x10105e4, Func Offset: 0x74
	// Line 681, Address: 0x1010600, Func Offset: 0x90
	// Line 682, Address: 0x1010618, Func Offset: 0xa8
	// Line 685, Address: 0x1010628, Func Offset: 0xb8
	// Func End, Address: 0x101063c, Func Offset: 0xcc
}

// 
// Start address: 0x1010640
void offset_set(_anon1* pActwk)
{
	short tbl[56];
	short iD0;
	short iD1;
	_anon6 stagewk;
	// Line 697, Address: 0x1010640, Func Offset: 0
	// Line 698, Address: 0x1010650, Func Offset: 0x10
	// Line 718, Address: 0x1010684, Func Offset: 0x44
	// Line 719, Address: 0x1010690, Func Offset: 0x50
	// Line 720, Address: 0x101069c, Func Offset: 0x5c
	// Line 721, Address: 0x10106a8, Func Offset: 0x68
	// Line 722, Address: 0x10106bc, Func Offset: 0x7c
	// Line 723, Address: 0x10106d0, Func Offset: 0x90
	// Line 724, Address: 0x10106e4, Func Offset: 0xa4
	// Line 725, Address: 0x10106fc, Func Offset: 0xbc
	// Line 726, Address: 0x1010708, Func Offset: 0xc8
	// Line 727, Address: 0x1010714, Func Offset: 0xd4
	// Line 728, Address: 0x1010748, Func Offset: 0x108
	// Line 729, Address: 0x1010764, Func Offset: 0x124
	// Line 730, Address: 0x1010774, Func Offset: 0x134
	// Func End, Address: 0x1010788, Func Offset: 0x148
}

// 
// Start address: 0x1010790
void goal(_anon1* pActwk)
{
	// Line 752, Address: 0x1010790, Func Offset: 0
	// Line 753, Address: 0x101079c, Func Offset: 0xc
	// Line 754, Address: 0x10107e0, Func Offset: 0x50
	// Line 755, Address: 0x10107ec, Func Offset: 0x5c
	// Func End, Address: 0x10107fc, Func Offset: 0x6c
}

// 
// Start address: 0x1010800
void goal_init(_anon1* pActwk)
{
	// Line 767, Address: 0x1010800, Func Offset: 0
	// Line 768, Address: 0x101080c, Func Offset: 0xc
	// Line 769, Address: 0x101081c, Func Offset: 0x1c
	// Line 770, Address: 0x101082c, Func Offset: 0x2c
	// Line 771, Address: 0x1010838, Func Offset: 0x38
	// Line 772, Address: 0x1010844, Func Offset: 0x44
	// Line 773, Address: 0x1010850, Func Offset: 0x50
	// Line 774, Address: 0x101085c, Func Offset: 0x5c
	// Line 775, Address: 0x1010868, Func Offset: 0x68
	// Line 776, Address: 0x1010880, Func Offset: 0x80
	// Line 777, Address: 0x1010890, Func Offset: 0x90
	// Line 778, Address: 0x10108a0, Func Offset: 0xa0
	// Line 779, Address: 0x10108ac, Func Offset: 0xac
	// Func End, Address: 0x10108bc, Func Offset: 0xbc
}

// 
// Start address: 0x10108c0
void goal_move0(_anon1* pActwk)
{
	_anon1* pPlaywk;
	short iD0;
	// Line 791, Address: 0x10108c0, Func Offset: 0
	// Line 795, Address: 0x10108d4, Func Offset: 0x14
	// Line 796, Address: 0x10108dc, Func Offset: 0x1c
	// Line 797, Address: 0x101090c, Func Offset: 0x4c
	// Line 798, Address: 0x1010918, Func Offset: 0x58
	// Line 799, Address: 0x1010928, Func Offset: 0x68
	// Line 800, Address: 0x101093c, Func Offset: 0x7c
	// Line 801, Address: 0x1010964, Func Offset: 0xa4
	// Line 802, Address: 0x1010974, Func Offset: 0xb4
	// Line 803, Address: 0x1010984, Func Offset: 0xc4
	// Line 804, Address: 0x101098c, Func Offset: 0xcc
	// Line 805, Address: 0x1010998, Func Offset: 0xd8
	// Line 806, Address: 0x10109a0, Func Offset: 0xe0
	// Line 807, Address: 0x10109b0, Func Offset: 0xf0
	// Line 808, Address: 0x10109b8, Func Offset: 0xf8
	// Line 809, Address: 0x10109c0, Func Offset: 0x100
	// Line 810, Address: 0x10109cc, Func Offset: 0x10c
	// Func End, Address: 0x10109e4, Func Offset: 0x124
}

// 
// Start address: 0x10109f0
void goal_move1(_anon1* pActwk)
{
	// Line 822, Address: 0x10109f0, Func Offset: 0
	// Line 823, Address: 0x10109fc, Func Offset: 0xc
	// Line 824, Address: 0x1010a10, Func Offset: 0x20
	// Line 825, Address: 0x1010a20, Func Offset: 0x30
	// Line 826, Address: 0x1010a34, Func Offset: 0x44
	// Line 827, Address: 0x1010a44, Func Offset: 0x54
	// Line 828, Address: 0x1010a50, Func Offset: 0x60
	// Line 829, Address: 0x1010a5c, Func Offset: 0x6c
	// Func End, Address: 0x1010a6c, Func Offset: 0x7c
}

// 
// Start address: 0x1010a70
void goal_move2(_anon1* pActwk)
{
	_anon1* pActfree;
	short iD0;
	char cTime;
	unsigned short timebonustbl[21];
	// Line 841, Address: 0x1010a70, Func Offset: 0
	// Line 845, Address: 0x1010a84, Func Offset: 0x14
	// Line 850, Address: 0x1010ab0, Func Offset: 0x40
	// Line 851, Address: 0x1010ad4, Func Offset: 0x64
	// Line 852, Address: 0x1010adc, Func Offset: 0x6c
	// Line 853, Address: 0x1010aec, Func Offset: 0x7c
	// Line 854, Address: 0x1010b00, Func Offset: 0x90
	// Line 856, Address: 0x1010b0c, Func Offset: 0x9c
	// Line 858, Address: 0x1010b18, Func Offset: 0xa8
	// Line 859, Address: 0x1010b2c, Func Offset: 0xbc
	// Line 860, Address: 0x1010b38, Func Offset: 0xc8
	// Line 861, Address: 0x1010b54, Func Offset: 0xe4
	// Line 863, Address: 0x1010b5c, Func Offset: 0xec
	// Line 864, Address: 0x1010b68, Func Offset: 0xf8
	// Line 868, Address: 0x1010b78, Func Offset: 0x108
	// Line 870, Address: 0x1010b8c, Func Offset: 0x11c
	// Line 871, Address: 0x1010b98, Func Offset: 0x128
	// Line 874, Address: 0x1010ba4, Func Offset: 0x134
	// Line 875, Address: 0x1010bb0, Func Offset: 0x140
	// Line 877, Address: 0x1010bbc, Func Offset: 0x14c
	// Line 878, Address: 0x1010bc8, Func Offset: 0x158
	// Line 879, Address: 0x1010c08, Func Offset: 0x198
	// Line 880, Address: 0x1010c28, Func Offset: 0x1b8
	// Line 881, Address: 0x1010c3c, Func Offset: 0x1cc
	// Line 884, Address: 0x1010c48, Func Offset: 0x1d8
	// Line 885, Address: 0x1010c54, Func Offset: 0x1e4
	// Line 886, Address: 0x1010c88, Func Offset: 0x218
	// Line 887, Address: 0x1010c98, Func Offset: 0x228
	// Line 888, Address: 0x1010cc4, Func Offset: 0x254
	// Func End, Address: 0x1010cdc, Func Offset: 0x26c
}

// 
// Start address: 0x1010ce0
void goal_move3(_anon1* pActwk)
{
	// Line 900, Address: 0x1010ce0, Func Offset: 0
	// Line 902, Address: 0x1010ce8, Func Offset: 0x8
	// Line 903, Address: 0x1010cf8, Func Offset: 0x18
	// Func End, Address: 0x1010d04, Func Offset: 0x24
}

// 
// Start address: 0x1010d10
void genecolor()
{
	tagPALETTEENTRY colortbl[16];
	short i;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	// Line 915, Address: 0x1010d10, Func Offset: 0
	// Line 916, Address: 0x1010d20, Func Offset: 0x10
	// Line 924, Address: 0x1010d54, Func Offset: 0x44
	// Line 925, Address: 0x1010d58, Func Offset: 0x48
	// Line 926, Address: 0x1010d64, Func Offset: 0x54
	// Line 927, Address: 0x1010d70, Func Offset: 0x60
	// Line 928, Address: 0x1010da0, Func Offset: 0x90
	// Line 929, Address: 0x1010dc0, Func Offset: 0xb0
	// Func End, Address: 0x1010dd8, Func Offset: 0xc8
}

