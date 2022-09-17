typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;

typedef void(*type_0)(_anon1*);
typedef void(*type_8)(_anon1*);

typedef void(*type_1)(_anon1*)[5];
typedef _anon0 type_2[20];
typedef _anon0 type_3[0];
typedef unsigned char type_4[6];
typedef unsigned char type_5[6];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef void(*type_9)(_anon1*)[5];
typedef char type_10[32];
typedef unsigned char type_11[766];
typedef _anon1 type_12[128];
typedef unsigned char type_13[766];
typedef _anon2* type_14[9];
typedef unsigned char* type_15[3];
typedef unsigned char type_16[6];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon2** patbase;
	_anon4 xposi;
	_anon4 yposi;
	_anon7 xspeed;
	_anon7 yspeed;
	_anon7 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon7 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon7 direc;
	_anon7 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon2
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon3
{
	short plring;
	int plscore;
	_anon7 stageno;
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
	_anon7 demoflag;
	_anon7 hintposi;
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

union _anon4
{
	int l;
	_anon5 w;
	_anon6 b;
};

struct _anon5
{
	short l;
	short h;
};

struct _anon6
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon7
{
	short w;
	_anon8 b;
};

struct _anon8
{
	char l;
	char h;
};

_anon2 ringsp0;
_anon2 ringsp1;
_anon2 ringsp2;
_anon2 ringsp3;
_anon2 ringsp4;
_anon2 ringsp5;
_anon2 ringsp6;
_anon2 ringsp7;
_anon2 ringsp8;
_anon2* ringpat[9];
unsigned char ringchg0[6];
unsigned char ringchg1[6];
unsigned char ringchg2[6];
unsigned char* ringchg[3];
unsigned char flagwork[766];
char time_item;
unsigned char time_flag;
_anon7 stageno;
_anon4 systemtimer;
_anon4 scra_h_posit;
unsigned char pl_suu_f;
unsigned char pl_suu;
unsigned char plring_f2;
short plring;
unsigned char plring_f;
_anon3* lpKeepWork;
unsigned char sys_pattim4;
short scralim_down;
_anon1 actwk[128];

void ring(_anon1* pActwk);
void ringinit(_anon1* pActwk);
void ringmove(_anon1* pActwk);
void ringget(_anon1* pActwk);
void ringgetsub();
void ringdie(_anon1* pActwk);
void ringerase(_anon1* pActwk);
void flyring(_anon1* pActwk);
void flyringinit(_anon1* pActwk);
void flyringmove(_anon1* pActwk);
void flyringget(_anon1* pActwk);
void flyringdie(_anon1* pActwk);
void flyringerase(_anon1* pActwk);

// 
// Start address: 0x10062a0
void ring(_anon1* pActwk)
{
	void(*ring_move_tbl)(_anon1*)[5];
	// Line 132, Address: 0x10062a0, Func Offset: 0
	// Line 133, Address: 0x10062ac, Func Offset: 0xc
	// Line 141, Address: 0x10062d8, Func Offset: 0x38
	// Line 142, Address: 0x1006314, Func Offset: 0x74
	// Func End, Address: 0x1006324, Func Offset: 0x84
}

// 
// Start address: 0x1006330
void ringinit(_anon1* pActwk)
{
	char ringtbl[32];
	int fw_index;
	int i;
	char ring_counter;
	short d0;
	short d1;
	short d2;
	short d3;
	short d5;
	short d6;
	char d4;
	_anon1* new_actwk;
	// Line 148, Address: 0x1006330, Func Offset: 0
	// Line 149, Address: 0x1006360, Func Offset: 0x30
	// Line 174, Address: 0x1006394, Func Offset: 0x64
	// Line 175, Address: 0x10063b4, Func Offset: 0x84
	// Line 176, Address: 0x10063cc, Func Offset: 0x9c
	// Line 177, Address: 0x10063f4, Func Offset: 0xc4
	// Line 178, Address: 0x1006410, Func Offset: 0xe0
	// Line 180, Address: 0x1006430, Func Offset: 0x100
	// Line 182, Address: 0x1006450, Func Offset: 0x120
	// Line 183, Address: 0x1006464, Func Offset: 0x134
	// Line 184, Address: 0x1006488, Func Offset: 0x158
	// Line 185, Address: 0x10064a8, Func Offset: 0x178
	// Line 186, Address: 0x10064b4, Func Offset: 0x184
	// Line 187, Address: 0x10064dc, Func Offset: 0x1ac
	// Line 188, Address: 0x10064fc, Func Offset: 0x1cc
	// Line 189, Address: 0x1006520, Func Offset: 0x1f0
	// Line 190, Address: 0x1006528, Func Offset: 0x1f8
	// Line 191, Address: 0x1006538, Func Offset: 0x208
	// Line 193, Address: 0x1006548, Func Offset: 0x218
	// Line 194, Address: 0x1006568, Func Offset: 0x238
	// Line 195, Address: 0x1006580, Func Offset: 0x250
	// Line 196, Address: 0x10065a8, Func Offset: 0x278
	// Line 197, Address: 0x10065c4, Func Offset: 0x294
	// Line 199, Address: 0x10065e4, Func Offset: 0x2b4
	// Line 201, Address: 0x10065e8, Func Offset: 0x2b8
	// Line 202, Address: 0x1006620, Func Offset: 0x2f0
	// Line 204, Address: 0x1006648, Func Offset: 0x318
	// Line 205, Address: 0x1006660, Func Offset: 0x330
	// Line 208, Address: 0x1006668, Func Offset: 0x338
	// Line 209, Address: 0x1006688, Func Offset: 0x358
	// Line 210, Address: 0x10066a0, Func Offset: 0x370
	// Line 211, Address: 0x10066c8, Func Offset: 0x398
	// Line 212, Address: 0x10066e4, Func Offset: 0x3b4
	// Line 214, Address: 0x1006704, Func Offset: 0x3d4
	// Line 216, Address: 0x1006708, Func Offset: 0x3d8
	// Line 217, Address: 0x1006740, Func Offset: 0x410
	// Line 219, Address: 0x1006768, Func Offset: 0x438
	// Line 220, Address: 0x1006780, Func Offset: 0x450
	// Line 222, Address: 0x1006798, Func Offset: 0x468
	// Line 223, Address: 0x10067a4, Func Offset: 0x474
	// Line 224, Address: 0x10067b0, Func Offset: 0x480
	// Line 225, Address: 0x10067b8, Func Offset: 0x488
	// Line 226, Address: 0x10067c8, Func Offset: 0x498
	// Line 227, Address: 0x10067d0, Func Offset: 0x4a0
	// Line 228, Address: 0x10067e0, Func Offset: 0x4b0
	// Line 229, Address: 0x10067ec, Func Offset: 0x4bc
	// Line 230, Address: 0x10067f8, Func Offset: 0x4c8
	// Line 231, Address: 0x1006814, Func Offset: 0x4e4
	// Line 232, Address: 0x100681c, Func Offset: 0x4ec
	// Line 233, Address: 0x100682c, Func Offset: 0x4fc
	// Line 234, Address: 0x100683c, Func Offset: 0x50c
	// Line 235, Address: 0x100684c, Func Offset: 0x51c
	// Line 238, Address: 0x1006858, Func Offset: 0x528
	// Line 239, Address: 0x1006864, Func Offset: 0x534
	// Line 240, Address: 0x1006870, Func Offset: 0x540
	// Line 241, Address: 0x100687c, Func Offset: 0x54c
	// Line 242, Address: 0x1006888, Func Offset: 0x558
	// Line 243, Address: 0x1006898, Func Offset: 0x568
	// Line 244, Address: 0x10068a0, Func Offset: 0x570
	// Line 246, Address: 0x10068ac, Func Offset: 0x57c
	// Line 247, Address: 0x10068b8, Func Offset: 0x588
	// Line 248, Address: 0x10068c4, Func Offset: 0x594
	// Line 249, Address: 0x10068d0, Func Offset: 0x5a0
	// Line 251, Address: 0x10068f8, Func Offset: 0x5c8
	// Line 252, Address: 0x1006918, Func Offset: 0x5e8
	// Line 253, Address: 0x1006930, Func Offset: 0x600
	// Line 254, Address: 0x1006958, Func Offset: 0x628
	// Line 255, Address: 0x1006974, Func Offset: 0x644
	// Line 257, Address: 0x1006994, Func Offset: 0x664
	// Line 259, Address: 0x1006998, Func Offset: 0x668
	// Line 260, Address: 0x10069c0, Func Offset: 0x690
	// Line 261, Address: 0x10069d0, Func Offset: 0x6a0
	// Line 263, Address: 0x10069d8, Func Offset: 0x6a8
	// Line 265, Address: 0x1006a00, Func Offset: 0x6d0
	// Line 266, Address: 0x1006a0c, Func Offset: 0x6dc
	// Func End, Address: 0x1006a40, Func Offset: 0x710
}

// 
// Start address: 0x1006a40
void ringmove(_anon1* pActwk)
{
	unsigned short d0;
	// Line 272, Address: 0x1006a40, Func Offset: 0
	// Line 275, Address: 0x1006a50, Func Offset: 0x10
	// Line 276, Address: 0x1006a64, Func Offset: 0x24
	// Line 277, Address: 0x1006a94, Func Offset: 0x54
	// Line 278, Address: 0x1006aa4, Func Offset: 0x64
	// Line 279, Address: 0x1006ab0, Func Offset: 0x70
	// Line 283, Address: 0x1006ab8, Func Offset: 0x78
	// Line 284, Address: 0x1006ae8, Func Offset: 0xa8
	// Line 285, Address: 0x1006b08, Func Offset: 0xc8
	// Line 286, Address: 0x1006b1c, Func Offset: 0xdc
	// Line 287, Address: 0x1006b28, Func Offset: 0xe8
	// Func End, Address: 0x1006b3c, Func Offset: 0xfc
}

// 
// Start address: 0x1006b40
void ringget(_anon1* pActwk)
{
	short d0;
	short d1;
	// Line 293, Address: 0x1006b40, Func Offset: 0
	// Line 296, Address: 0x1006b54, Func Offset: 0x14
	// Line 297, Address: 0x1006b64, Func Offset: 0x24
	// Line 298, Address: 0x1006b6c, Func Offset: 0x2c
	// Line 299, Address: 0x1006b78, Func Offset: 0x38
	// Line 300, Address: 0x1006b80, Func Offset: 0x40
	// Line 302, Address: 0x1006b88, Func Offset: 0x48
	// Line 303, Address: 0x1006bac, Func Offset: 0x6c
	// Line 304, Address: 0x1006bcc, Func Offset: 0x8c
	// Line 305, Address: 0x1006be4, Func Offset: 0xa4
	// Line 306, Address: 0x1006c0c, Func Offset: 0xcc
	// Line 307, Address: 0x1006c28, Func Offset: 0xe8
	// Line 310, Address: 0x1006c48, Func Offset: 0x108
	// Line 311, Address: 0x1006c90, Func Offset: 0x150
	// Line 312, Address: 0x1006c9c, Func Offset: 0x15c
	// Func End, Address: 0x1006cb4, Func Offset: 0x174
}

// 
// Start address: 0x1006cc0
void ringgetsub()
{
	// Line 318, Address: 0x1006cc0, Func Offset: 0
	// Line 319, Address: 0x1006cc8, Func Offset: 0x8
	// Line 320, Address: 0x1006cdc, Func Offset: 0x1c
	// Line 321, Address: 0x1006cf0, Func Offset: 0x30
	// Line 322, Address: 0x1006d0c, Func Offset: 0x4c
	// Line 323, Address: 0x1006d24, Func Offset: 0x64
	// Line 324, Address: 0x1006d40, Func Offset: 0x80
	// Line 325, Address: 0x1006d4c, Func Offset: 0x8c
	// Line 327, Address: 0x1006d54, Func Offset: 0x94
	// Line 328, Address: 0x1006d6c, Func Offset: 0xac
	// Line 329, Address: 0x1006d78, Func Offset: 0xb8
	// Line 331, Address: 0x1006d80, Func Offset: 0xc0
	// Line 333, Address: 0x1006d94, Func Offset: 0xd4
	// Line 334, Address: 0x1006da8, Func Offset: 0xe8
	// Line 335, Address: 0x1006dbc, Func Offset: 0xfc
	// Line 336, Address: 0x1006dd0, Func Offset: 0x110
	// Line 337, Address: 0x1006ddc, Func Offset: 0x11c
	// Line 339, Address: 0x1006de4, Func Offset: 0x124
	// Line 342, Address: 0x1006df0, Func Offset: 0x130
	// Func End, Address: 0x1006e00, Func Offset: 0x140
}

// 
// Start address: 0x1006e00
void ringdie(_anon1* pActwk)
{
	// Line 348, Address: 0x1006e00, Func Offset: 0
	// Line 349, Address: 0x1006e0c, Func Offset: 0xc
	// Line 350, Address: 0x1006e20, Func Offset: 0x20
	// Line 351, Address: 0x1006e2c, Func Offset: 0x2c
	// Func End, Address: 0x1006e3c, Func Offset: 0x3c
}

// 
// Start address: 0x1006e40
void ringerase(_anon1* pActwk)
{
	// Line 357, Address: 0x1006e40, Func Offset: 0
	// Line 358, Address: 0x1006e4c, Func Offset: 0xc
	// Line 359, Address: 0x1006e58, Func Offset: 0x18
	// Func End, Address: 0x1006e68, Func Offset: 0x28
}

// 
// Start address: 0x1006e70
void flyring(_anon1* pActwk)
{
	void(*flyring_move_tbl)(_anon1*)[5];
	// Line 368, Address: 0x1006e70, Func Offset: 0
	// Line 369, Address: 0x1006e7c, Func Offset: 0xc
	// Line 377, Address: 0x1006ea8, Func Offset: 0x38
	// Line 378, Address: 0x1006ee4, Func Offset: 0x74
	// Func End, Address: 0x1006ef4, Func Offset: 0x84
}

// 
// Start address: 0x1006f00
void flyringinit(_anon1* pActwk)
{
	short d2;
	short d3;
	short d5;
	_anon1* new_actwk;
	unsigned short d0;
	unsigned short d1;
	_anon7 d4;
	// Line 384, Address: 0x1006f00, Func Offset: 0
	// Line 390, Address: 0x1006f18, Func Offset: 0x18
	// Line 391, Address: 0x1006f20, Func Offset: 0x20
	// Line 392, Address: 0x1006f50, Func Offset: 0x50
	// Line 393, Address: 0x1006f5c, Func Offset: 0x5c
	// Line 394, Address: 0x1006f64, Func Offset: 0x64
	// Line 397, Address: 0x1006f6c, Func Offset: 0x6c
	// Line 399, Address: 0x1006f80, Func Offset: 0x80
	// Line 400, Address: 0x1006f8c, Func Offset: 0x8c
	// Line 401, Address: 0x1006f9c, Func Offset: 0x9c
	// Line 402, Address: 0x1006fa8, Func Offset: 0xa8
	// Line 403, Address: 0x1006fb4, Func Offset: 0xb4
	// Line 404, Address: 0x1006fc4, Func Offset: 0xc4
	// Line 405, Address: 0x1006fd4, Func Offset: 0xd4
	// Line 406, Address: 0x1006fe4, Func Offset: 0xe4
	// Line 407, Address: 0x1006ff4, Func Offset: 0xf4
	// Line 408, Address: 0x1007000, Func Offset: 0x100
	// Line 409, Address: 0x100700c, Func Offset: 0x10c
	// Line 410, Address: 0x1007028, Func Offset: 0x128
	// Line 411, Address: 0x1007030, Func Offset: 0x130
	// Line 412, Address: 0x1007040, Func Offset: 0x140
	// Line 413, Address: 0x100704c, Func Offset: 0x14c
	// Line 416, Address: 0x100705c, Func Offset: 0x15c
	// Line 417, Address: 0x1007068, Func Offset: 0x168
	// Line 418, Address: 0x1007074, Func Offset: 0x174
	// Line 419, Address: 0x1007080, Func Offset: 0x180
	// Line 420, Address: 0x100708c, Func Offset: 0x18c
	// Line 421, Address: 0x1007098, Func Offset: 0x198
	// Line 423, Address: 0x10070a4, Func Offset: 0x1a4
	// Line 424, Address: 0x10070b8, Func Offset: 0x1b8
	// Line 425, Address: 0x10070d0, Func Offset: 0x1d0
	// Line 426, Address: 0x10070fc, Func Offset: 0x1fc
	// Line 427, Address: 0x1007128, Func Offset: 0x228
	// Line 428, Address: 0x100714c, Func Offset: 0x24c
	// Line 430, Address: 0x1007178, Func Offset: 0x278
	// Line 431, Address: 0x1007180, Func Offset: 0x280
	// Line 432, Address: 0x1007188, Func Offset: 0x288
	// Line 433, Address: 0x1007194, Func Offset: 0x294
	// Line 434, Address: 0x10071a0, Func Offset: 0x2a0
	// Line 436, Address: 0x10071c8, Func Offset: 0x2c8
	// Line 439, Address: 0x10071e4, Func Offset: 0x2e4
	// Line 440, Address: 0x100720c, Func Offset: 0x30c
	// Line 442, Address: 0x1007214, Func Offset: 0x314
	// Line 444, Address: 0x100721c, Func Offset: 0x31c
	// Line 445, Address: 0x1007228, Func Offset: 0x328
	// Line 446, Address: 0x1007230, Func Offset: 0x330
	// Line 447, Address: 0x100723c, Func Offset: 0x33c
	// Line 448, Address: 0x1007248, Func Offset: 0x348
	// Func End, Address: 0x1007264, Func Offset: 0x364
}

// 
// Start address: 0x1007270
void flyringmove(_anon1* pActwk)
{
	short d1;
	// Line 454, Address: 0x1007270, Func Offset: 0
	// Line 459, Address: 0x1007280, Func Offset: 0x10
	// Line 460, Address: 0x100728c, Func Offset: 0x1c
	// Line 461, Address: 0x10072b4, Func Offset: 0x44
	// Line 462, Address: 0x1007314, Func Offset: 0xa4
	// Line 463, Address: 0x1007340, Func Offset: 0xd0
	// Line 464, Address: 0x1007350, Func Offset: 0xe0
	// Line 465, Address: 0x1007390, Func Offset: 0x120
	// Line 469, Address: 0x10073a0, Func Offset: 0x130
	// Line 470, Address: 0x10073b0, Func Offset: 0x140
	// Line 471, Address: 0x10073e0, Func Offset: 0x170
	// Line 472, Address: 0x10073f4, Func Offset: 0x184
	// Line 473, Address: 0x1007400, Func Offset: 0x190
	// Line 476, Address: 0x1007408, Func Offset: 0x198
	// Line 477, Address: 0x1007414, Func Offset: 0x1a4
	// Func End, Address: 0x1007428, Func Offset: 0x1b8
}

// 
// Start address: 0x1007430
void flyringget(_anon1* pActwk)
{
	// Line 483, Address: 0x1007430, Func Offset: 0
	// Line 484, Address: 0x100743c, Func Offset: 0xc
	// Line 485, Address: 0x100744c, Func Offset: 0x1c
	// Line 486, Address: 0x1007454, Func Offset: 0x24
	// Line 487, Address: 0x1007460, Func Offset: 0x30
	// Line 488, Address: 0x1007468, Func Offset: 0x38
	// Line 489, Address: 0x1007470, Func Offset: 0x40
	// Line 490, Address: 0x100747c, Func Offset: 0x4c
	// Func End, Address: 0x100748c, Func Offset: 0x5c
}

// 
// Start address: 0x1007490
void flyringdie(_anon1* pActwk)
{
	// Line 496, Address: 0x1007490, Func Offset: 0
	// Line 497, Address: 0x100749c, Func Offset: 0xc
	// Line 498, Address: 0x10074b0, Func Offset: 0x20
	// Line 499, Address: 0x10074bc, Func Offset: 0x2c
	// Func End, Address: 0x10074cc, Func Offset: 0x3c
}

// 
// Start address: 0x10074d0
void flyringerase(_anon1* pActwk)
{
	// Line 505, Address: 0x10074d0, Func Offset: 0
	// Line 506, Address: 0x10074dc, Func Offset: 0xc
	// Line 507, Address: 0x10074e8, Func Offset: 0x18
	// Func End, Address: 0x10074f8, Func Offset: 0x28
}

