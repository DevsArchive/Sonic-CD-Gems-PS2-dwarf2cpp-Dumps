typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_0)(_anon0*);
typedef void(*type_3)(_anon0*);
typedef void(*type_7)(_anon0*);
typedef void(*type_9)(_anon0*);
typedef void(*type_11)(_anon0*);
typedef void(*type_13)(_anon0*);
typedef void(*type_16)(_anon0*);
typedef void(*type_18)(_anon0*);
typedef void(*type_21)(_anon0*);
typedef void(*type_23)(_anon0*);
typedef void(*type_25)(_anon0*);

typedef void(*type_1)(_anon0*)[2];
typedef _anon1 type_2[2];
typedef void(*type_4)(_anon0*)[16];
typedef _anon3 type_5[10];
typedef _anon0 type_6[66];
typedef void(*type_8)(_anon0*)[2];
typedef void(*type_10)(_anon0*)[2];
typedef void(*type_12)(_anon0*)[2];
typedef void(*type_14)(_anon0*)[2];
typedef short type_15[8];
typedef void(*type_17)(_anon0*)[14];
typedef void(*type_19)(_anon0*)[2];
typedef unsigned char type_20[8];
typedef void(*type_22)(_anon0*)[2];
typedef void(*type_24)(_anon0*)[16];
typedef void(*type_26)(_anon0*)[2];

struct _anon0
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon5 XPOSI;
	_anon5 YPOSI;
	_anon5 X_SPEED;
	_anon5 Y_SPEED;
	_anon5 X_ACCEL;
	_anon5 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon4* PAT_ADR;
	unsigned char SPR_FLG;
	unsigned char ACT_FLG;
	short END_XPOSI;
	short END_YPOSI;
	short X_WIDE;
	short Y_WIDE;
	unsigned char free[8];
};

struct _anon1
{
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon2
{
	short mapnum;
	_anon1 aMapDat[2];
};

struct _anon3
{
	short timer;
	_anon2* paMapTbl;
};

struct _anon4
{
	short patnum;
	_anon3 aPatDat[10];
};

union _anon5
{
	int l;
	_anon6 w;
	_anon7 b;
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

unsigned char animal_flg;
_anon4 s_run_map;
_anon0 actwk[66];
_anon4 s_stop_map;
_anon4 s_stand1_map;
_anon4 s_stand2_map;
_anon4 s_wait_map;
_anon4 s_ball_map;
short actset_tm[8];
_anon4 erun_map;
short heart_tm;
_anon4 ekiss_map;
unsigned char poseno;
_anon4 ejump_map;
_anon4 ecatch_map;
_anon4 estand2_map;
_anon4 estand_map;
_anon4 m_fly1_map;
_anon4 m_brake_map;
_anon4 m_stop_map;
_anon4 m_stand_map;
_anon4 m_furi_map;
_anon4 m_kamae_map;
_anon4 m_era_map;
_anon4 m_era2_map;
_anon4 eheart_map;
_anon4 pocky_map;
_anon4 pecky_map;
_anon4 ricky_map;
_anon4 sheep_map;
_anon4 flick_map;
_anon4 inco_map;
_anon4 hato_map;

void sonic_ctrl(_anon0* pActwk);
void sonicinit(_anon0* pActwk);
void s_runset(_anon0* pActwk);
void sonicrun(_anon0* pActwk);
short s_metalchk(_anon0* pActwk);
void s_turnset(_anon0* pActwk);
void sonicturn(_anon0* pActwk);
void s_standset(_anon0* pActwk);
void sonicstand(_anon0* pActwk);
void s_waitset(_anon0* pActwk);
void sonicwait(_anon0* pActwk);
void s_ballset(_anon0* pActwk);
void sonicball(_anon0* pActwk);
void sonicexit(_anon0* pActwk);
void sonicpit(_anon0* pActwk);
void sonicesc(_anon0* pActwk);
void emie_ctrl(_anon0* pActwk);
void emmy_exeset(_anon0* pActwk, _anon0* pSonic);
void emmyinit(_anon0* pActwk);
void e_runinit(_anon0* pActwk);
void emmymove(_anon0* pActwk);
void e_kissset(_anon0* pActwk);
void emmykiss(_anon0* pActwk);
void e_jumpset(_anon0* pActwk);
void emmyjump(_anon0* pActwk);
void e_catchset(_anon0* pActwk);
void emmy_catch(_anon0* pActwk);
void e_turnset(_anon0* pActwk);
void emmyturn(_anon0* pActwk);
void e_standset(_anon0* pActwk);
void emmymoji(_anon0* pActwk);
void emmyexit(_anon0* pActwk);
void emmypose(_anon0* pActwk);
void emmyesc(_anon0* pActwk);
void metals_ctrl(_anon0* pActwk);
void metalsinit(_anon0* pActwk);
void m_flyset(_anon0* pActwk);
void metalsfly(_anon0* pActwk);
void m_brakeset(_anon0* pActwk);
void metalsbrake(_anon0* pActwk);
void m_stopset(_anon0* pActwk);
void metalsstop(_anon0* pActwk);
void m_standset(_anon0* pActwk);
void metalstand(_anon0* pActwk);
void m_startset(_anon0* pActwk);
void metalstartcttbl(_anon0* pActwk);
void m_eraset(_anon0* pActwk);
void metalsera(_anon0* pActwk);
void metalsexit(_anon0* pActwk);
void metalspit(_anon0* pActwk);
void metalsesc(_anon0* pActwk);
void heart_ctrl(_anon0* pActwk);
void heartinit(_anon0* pActwk);
void heartmove(_anon0* pActwk);
void pocky_ctrl(_anon0* pActwk);
void pockyinit(_anon0* pActwk);
void pecky_ctrl(_anon0* pActwk);
void peckyinit(_anon0* pActwk);
void ricky_ctrl(_anon0* pActwk);
void rickyinit(_anon0* pActwk);
void sheep_ctrl(_anon0* pActwk);
void sheepinit(_anon0* pActwk);
void animalmove(_anon0* pActwk);
void flick_ctrl(_anon0* pActwk);
void flickyinit(_anon0* pActwk);
void inco_ctrl(_anon0* pActwk);
void incoinit(_anon0* pActwk);
void hato_ctrl(_anon0* pActwk);
void hatoinit(_anon0* pActwk);
void birdmove(_anon0* pActwk);
short killchk(_anon0* pActwk);
void sinhmove(_anon0* pActwk);
void sinvmove(_anon0* pActwk);
void hbt_move(_anon0* pActwk);
short chk_sonicposi(_anon0* pActwk, _anon0* pA6, short* d5, short* d6);
short myposichk(_anon0* pActwk);
short centerchk(_anon0* pActwk);
short dsplaychk(_anon0* pActwk);
void waitmode(_anon0* pActwk);
void escape_chk(_anon0* pActwk);
void pit_in(_anon0* pActwk);
void m_sndchk(_anon0* pActwk);

// 
// Start address: 0x1003120
void sonic_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[14];
	// Line 160, Address: 0x1003120, Func Offset: 0
	// Line 161, Address: 0x100312c, Func Offset: 0xc
	// Line 179, Address: 0x1003160, Func Offset: 0x40
	// Line 181, Address: 0x1003170, Func Offset: 0x50
	// Line 183, Address: 0x1003180, Func Offset: 0x60
	// Line 184, Address: 0x10031a4, Func Offset: 0x84
	// Line 185, Address: 0x10031b4, Func Offset: 0x94
	// Func End, Address: 0x10031c4, Func Offset: 0xa4
}

// 
// Start address: 0x10031d0
void sonicinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 190, Address: 0x10031d0, Func Offset: 0
	// Line 193, Address: 0x10031dc, Func Offset: 0xc
	// Line 194, Address: 0x10031e8, Func Offset: 0x18
	// Line 195, Address: 0x10031f4, Func Offset: 0x24
	// Line 196, Address: 0x10031fc, Func Offset: 0x2c
	// Line 198, Address: 0x1003208, Func Offset: 0x38
	// Line 199, Address: 0x1003214, Func Offset: 0x44
	// Line 200, Address: 0x1003220, Func Offset: 0x50
	// Line 201, Address: 0x1003230, Func Offset: 0x60
	// Line 204, Address: 0x1003238, Func Offset: 0x68
	// Line 205, Address: 0x1003244, Func Offset: 0x74
	// Line 206, Address: 0x1003250, Func Offset: 0x80
	// Line 208, Address: 0x1003260, Func Offset: 0x90
	// Line 209, Address: 0x100326c, Func Offset: 0x9c
	// Line 211, Address: 0x1003274, Func Offset: 0xa4
	// Line 212, Address: 0x100327c, Func Offset: 0xac
	// Line 213, Address: 0x1003284, Func Offset: 0xb4
	// Line 214, Address: 0x100328c, Func Offset: 0xbc
	// Line 216, Address: 0x1003294, Func Offset: 0xc4
	// Line 217, Address: 0x10032a0, Func Offset: 0xd0
	// Line 218, Address: 0x10032ac, Func Offset: 0xdc
	// Line 219, Address: 0x10032bc, Func Offset: 0xec
	// Line 220, Address: 0x10032cc, Func Offset: 0xfc
	// Line 222, Address: 0x10032d4, Func Offset: 0x104
	// Line 223, Address: 0x10032e0, Func Offset: 0x110
	// Line 224, Address: 0x10032ec, Func Offset: 0x11c
	// Line 225, Address: 0x1003324, Func Offset: 0x154
	// Line 226, Address: 0x1003334, Func Offset: 0x164
	// Line 227, Address: 0x1003340, Func Offset: 0x170
	// Func End, Address: 0x1003350, Func Offset: 0x180
}

// 
// Start address: 0x1003350
void s_runset(_anon0* pActwk)
{
	_anon0* pMetal;
	_anon5 ld0;
	// Line 232, Address: 0x1003350, Func Offset: 0
	// Line 236, Address: 0x1003360, Func Offset: 0x10
	// Line 237, Address: 0x1003374, Func Offset: 0x24
	// Line 238, Address: 0x1003380, Func Offset: 0x30
	// Line 240, Address: 0x1003398, Func Offset: 0x48
	// Line 242, Address: 0x10033a8, Func Offset: 0x58
	// Line 244, Address: 0x10033b0, Func Offset: 0x60
	// Line 245, Address: 0x10033b8, Func Offset: 0x68
	// Line 246, Address: 0x10033c0, Func Offset: 0x70
	// Line 247, Address: 0x10033c8, Func Offset: 0x78
	// Line 249, Address: 0x10033d0, Func Offset: 0x80
	// Line 250, Address: 0x10033e0, Func Offset: 0x90
	// Line 251, Address: 0x10033f0, Func Offset: 0xa0
	// Line 253, Address: 0x10033f8, Func Offset: 0xa8
	// Line 254, Address: 0x1003404, Func Offset: 0xb4
	// Line 255, Address: 0x1003410, Func Offset: 0xc0
	// Line 256, Address: 0x1003448, Func Offset: 0xf8
	// Line 258, Address: 0x1003458, Func Offset: 0x108
	// Line 259, Address: 0x1003460, Func Offset: 0x110
	// Line 261, Address: 0x1003468, Func Offset: 0x118
	// Line 262, Address: 0x1003474, Func Offset: 0x124
	// Func End, Address: 0x1003488, Func Offset: 0x138
}

// 
// Start address: 0x1003490
void sonicrun(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 267, Address: 0x1003490, Func Offset: 0
	// Line 270, Address: 0x100349c, Func Offset: 0xc
	// Line 271, Address: 0x10034b4, Func Offset: 0x24
	// Line 273, Address: 0x10034cc, Func Offset: 0x3c
	// Line 275, Address: 0x10034e4, Func Offset: 0x54
	// Line 276, Address: 0x10034f0, Func Offset: 0x60
	// Line 278, Address: 0x10034f8, Func Offset: 0x68
	// Line 280, Address: 0x1003514, Func Offset: 0x84
	// Line 282, Address: 0x1003530, Func Offset: 0xa0
	// Line 283, Address: 0x100353c, Func Offset: 0xac
	// Line 284, Address: 0x1003548, Func Offset: 0xb8
	// Line 288, Address: 0x1003550, Func Offset: 0xc0
	// Line 289, Address: 0x100355c, Func Offset: 0xcc
	// Line 290, Address: 0x1003568, Func Offset: 0xd8
	// Line 300, Address: 0x100358c, Func Offset: 0xfc
	// Line 301, Address: 0x1003598, Func Offset: 0x108
	// Line 302, Address: 0x10035a4, Func Offset: 0x114
	// Line 303, Address: 0x10035d8, Func Offset: 0x148
	// Line 305, Address: 0x10035ec, Func Offset: 0x15c
	// Line 306, Address: 0x10035f8, Func Offset: 0x168
	// Line 309, Address: 0x1003600, Func Offset: 0x170
	// Line 311, Address: 0x1003614, Func Offset: 0x184
	// Line 313, Address: 0x1003620, Func Offset: 0x190
	// Line 314, Address: 0x1003630, Func Offset: 0x1a0
	// Line 316, Address: 0x1003648, Func Offset: 0x1b8
	// Line 318, Address: 0x100365c, Func Offset: 0x1cc
	// Line 321, Address: 0x1003668, Func Offset: 0x1d8
	// Func End, Address: 0x1003678, Func Offset: 0x1e8
}

// 
// Start address: 0x1003680
short s_metalchk(_anon0* pActwk)
{
	_anon0* pMetal;
	short d5;
	// Line 327, Address: 0x1003680, Func Offset: 0
	// Line 331, Address: 0x1003690, Func Offset: 0x10
	// Line 332, Address: 0x1003698, Func Offset: 0x18
	// Line 333, Address: 0x10036b8, Func Offset: 0x38
	// Line 335, Address: 0x10036d8, Func Offset: 0x58
	// Line 336, Address: 0x10036e8, Func Offset: 0x68
	// Line 337, Address: 0x10036f4, Func Offset: 0x74
	// Line 339, Address: 0x1003704, Func Offset: 0x84
	// Line 343, Address: 0x100371c, Func Offset: 0x9c
	// Line 345, Address: 0x1003734, Func Offset: 0xb4
	// Line 346, Address: 0x1003740, Func Offset: 0xc0
	// Line 347, Address: 0x1003754, Func Offset: 0xd4
	// Line 349, Address: 0x1003764, Func Offset: 0xe4
	// Line 351, Address: 0x1003770, Func Offset: 0xf0
	// Line 352, Address: 0x1003790, Func Offset: 0x110
	// Line 353, Address: 0x1003794, Func Offset: 0x114
	// Func End, Address: 0x10037a8, Func Offset: 0x128
}

// 
// Start address: 0x10037b0
void s_turnset(_anon0* pActwk)
{
	// Line 358, Address: 0x10037b0, Func Offset: 0
	// Line 359, Address: 0x10037bc, Func Offset: 0xc
	// Line 360, Address: 0x10037d0, Func Offset: 0x20
	// Line 362, Address: 0x10037e0, Func Offset: 0x30
	// Line 363, Address: 0x10037ec, Func Offset: 0x3c
	// Line 364, Address: 0x10037fc, Func Offset: 0x4c
	// Line 367, Address: 0x1003804, Func Offset: 0x54
	// Line 368, Address: 0x1003810, Func Offset: 0x60
	// Line 370, Address: 0x1003820, Func Offset: 0x70
	// Line 371, Address: 0x1003830, Func Offset: 0x80
	// Line 372, Address: 0x1003840, Func Offset: 0x90
	// Line 374, Address: 0x1003848, Func Offset: 0x98
	// Line 376, Address: 0x1003864, Func Offset: 0xb4
	// Line 378, Address: 0x1003870, Func Offset: 0xc0
	// Line 379, Address: 0x100387c, Func Offset: 0xcc
	// Func End, Address: 0x100388c, Func Offset: 0xdc
}

// 
// Start address: 0x1003890
void sonicturn(_anon0* pActwk)
{
	_anon0* pMetal;
	short d5;
	short d6;
	// Line 384, Address: 0x1003890, Func Offset: 0
	// Line 388, Address: 0x10038a0, Func Offset: 0x10
	// Line 389, Address: 0x10038ac, Func Offset: 0x1c
	// Line 390, Address: 0x10038c8, Func Offset: 0x38
	// Line 391, Address: 0x10038d0, Func Offset: 0x40
	// Line 393, Address: 0x10038e4, Func Offset: 0x54
	// Line 394, Address: 0x10038f0, Func Offset: 0x60
	// Line 396, Address: 0x10038f8, Func Offset: 0x68
	// Line 398, Address: 0x100390c, Func Offset: 0x7c
	// Line 399, Address: 0x1003918, Func Offset: 0x88
	// Line 402, Address: 0x1003920, Func Offset: 0x90
	// Line 403, Address: 0x1003938, Func Offset: 0xa8
	// Line 405, Address: 0x1003950, Func Offset: 0xc0
	// Line 406, Address: 0x100395c, Func Offset: 0xcc
	// Line 409, Address: 0x1003964, Func Offset: 0xd4
	// Line 412, Address: 0x1003970, Func Offset: 0xe0
	// Func End, Address: 0x1003984, Func Offset: 0xf4
}

// 
// Start address: 0x1003990
void s_standset(_anon0* pActwk)
{
	_anon0* pEmmy;
	// Line 417, Address: 0x1003990, Func Offset: 0
	// Line 420, Address: 0x100399c, Func Offset: 0xc
	// Line 422, Address: 0x10039a4, Func Offset: 0x14
	// Line 423, Address: 0x10039b4, Func Offset: 0x24
	// Line 424, Address: 0x10039c4, Func Offset: 0x34
	// Line 426, Address: 0x10039cc, Func Offset: 0x3c
	// Line 427, Address: 0x10039d8, Func Offset: 0x48
	// Line 429, Address: 0x10039e0, Func Offset: 0x50
	// Line 430, Address: 0x10039e8, Func Offset: 0x58
	// Line 432, Address: 0x10039f0, Func Offset: 0x60
	// Line 433, Address: 0x10039fc, Func Offset: 0x6c
	// Func End, Address: 0x1003a0c, Func Offset: 0x7c
}

// 
// Start address: 0x1003a10
void sonicstand(_anon0* pActwk)
{
	_anon0* pMetal;
	_anon0* pEmmy;
	short d5;
	short d6;
	// Line 438, Address: 0x1003a10, Func Offset: 0
	// Line 443, Address: 0x1003a24, Func Offset: 0x14
	// Line 444, Address: 0x1003a2c, Func Offset: 0x1c
	// Line 445, Address: 0x1003a44, Func Offset: 0x34
	// Line 446, Address: 0x1003a54, Func Offset: 0x44
	// Line 447, Address: 0x1003a6c, Func Offset: 0x5c
	// Line 449, Address: 0x1003a7c, Func Offset: 0x6c
	// Line 450, Address: 0x1003a84, Func Offset: 0x74
	// Line 451, Address: 0x1003a90, Func Offset: 0x80
	// Line 453, Address: 0x1003a9c, Func Offset: 0x8c
	// Line 454, Address: 0x1003aac, Func Offset: 0x9c
	// Line 455, Address: 0x1003abc, Func Offset: 0xac
	// Line 456, Address: 0x1003ac8, Func Offset: 0xb8
	// Line 457, Address: 0x1003ad4, Func Offset: 0xc4
	// Func End, Address: 0x1003aec, Func Offset: 0xdc
}

// 
// Start address: 0x1003af0
void s_waitset(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 462, Address: 0x1003af0, Func Offset: 0
	// Line 465, Address: 0x1003afc, Func Offset: 0xc
	// Line 466, Address: 0x1003b10, Func Offset: 0x20
	// Line 467, Address: 0x1003b18, Func Offset: 0x28
	// Line 468, Address: 0x1003b28, Func Offset: 0x38
	// Line 469, Address: 0x1003b38, Func Offset: 0x48
	// Line 471, Address: 0x1003b40, Func Offset: 0x50
	// Line 472, Address: 0x1003b4c, Func Offset: 0x5c
	// Line 473, Address: 0x1003b58, Func Offset: 0x68
	// Line 474, Address: 0x1003b80, Func Offset: 0x90
	// Line 476, Address: 0x1003b90, Func Offset: 0xa0
	// Line 477, Address: 0x1003b9c, Func Offset: 0xac
	// Func End, Address: 0x1003bac, Func Offset: 0xbc
}

// 
// Start address: 0x1003bb0
void sonicwait(_anon0* pActwk)
{
	_anon0* pEmmy;
	_anon0* pMetal;
	short d5;
	short d6;
	// Line 482, Address: 0x1003bb0, Func Offset: 0
	// Line 487, Address: 0x1003bc4, Func Offset: 0x14
	// Line 488, Address: 0x1003bcc, Func Offset: 0x1c
	// Line 489, Address: 0x1003bd4, Func Offset: 0x24
	// Line 490, Address: 0x1003be0, Func Offset: 0x30
	// Line 491, Address: 0x1003c18, Func Offset: 0x68
	// Line 492, Address: 0x1003c28, Func Offset: 0x78
	// Line 493, Address: 0x1003c34, Func Offset: 0x84
	// Line 495, Address: 0x1003c4c, Func Offset: 0x9c
	// Line 496, Address: 0x1003c5c, Func Offset: 0xac
	// Line 498, Address: 0x1003c74, Func Offset: 0xc4
	// Line 500, Address: 0x1003c80, Func Offset: 0xd0
	// Line 503, Address: 0x1003c88, Func Offset: 0xd8
	// Line 505, Address: 0x1003c94, Func Offset: 0xe4
	// Func End, Address: 0x1003cac, Func Offset: 0xfc
}

// 
// Start address: 0x1003cb0
void s_ballset(_anon0* pActwk)
{
	// Line 510, Address: 0x1003cb0, Func Offset: 0
	// Line 511, Address: 0x1003cbc, Func Offset: 0xc
	// Line 512, Address: 0x1003cd0, Func Offset: 0x20
	// Line 513, Address: 0x1003cdc, Func Offset: 0x2c
	// Line 515, Address: 0x1003cf4, Func Offset: 0x44
	// Line 517, Address: 0x1003d04, Func Offset: 0x54
	// Line 519, Address: 0x1003d10, Func Offset: 0x60
	// Line 520, Address: 0x1003d18, Func Offset: 0x68
	// Line 521, Address: 0x1003d20, Func Offset: 0x70
	// Line 522, Address: 0x1003d2c, Func Offset: 0x7c
	// Line 524, Address: 0x1003d34, Func Offset: 0x84
	// Line 525, Address: 0x1003d44, Func Offset: 0x94
	// Line 526, Address: 0x1003d54, Func Offset: 0xa4
	// Line 528, Address: 0x1003d5c, Func Offset: 0xac
	// Line 530, Address: 0x1003d78, Func Offset: 0xc8
	// Line 532, Address: 0x1003d84, Func Offset: 0xd4
	// Line 533, Address: 0x1003d90, Func Offset: 0xe0
	// Func End, Address: 0x1003da0, Func Offset: 0xf0
}

// 
// Start address: 0x1003da0
void sonicball(_anon0* pActwk)
{
	// Line 538, Address: 0x1003da0, Func Offset: 0
	// Line 539, Address: 0x1003dac, Func Offset: 0xc
	// Line 540, Address: 0x1003db8, Func Offset: 0x18
	// Line 542, Address: 0x1003dd4, Func Offset: 0x34
	// Line 543, Address: 0x1003ddc, Func Offset: 0x3c
	// Line 545, Address: 0x1003de8, Func Offset: 0x48
	// Func End, Address: 0x1003df8, Func Offset: 0x58
}

// 
// Start address: 0x1003e00
void sonicexit(_anon0* pActwk)
{
	_anon0* pEmmy;
	_anon0* pMetal;
	// Line 550, Address: 0x1003e00, Func Offset: 0
	// Line 554, Address: 0x1003e14, Func Offset: 0x14
	// Line 555, Address: 0x1003e20, Func Offset: 0x20
	// Line 556, Address: 0x1003e34, Func Offset: 0x34
	// Line 557, Address: 0x1003e3c, Func Offset: 0x3c
	// Line 559, Address: 0x1003e44, Func Offset: 0x44
	// Line 561, Address: 0x1003e54, Func Offset: 0x54
	// Line 563, Address: 0x1003e60, Func Offset: 0x60
	// Line 564, Address: 0x1003e74, Func Offset: 0x74
	// Line 566, Address: 0x1003e80, Func Offset: 0x80
	// Line 568, Address: 0x1003e8c, Func Offset: 0x8c
	// Line 569, Address: 0x1003ea0, Func Offset: 0xa0
	// Line 571, Address: 0x1003eac, Func Offset: 0xac
	// Line 573, Address: 0x1003ebc, Func Offset: 0xbc
	// Line 574, Address: 0x1003ecc, Func Offset: 0xcc
	// Line 575, Address: 0x1003edc, Func Offset: 0xdc
	// Line 577, Address: 0x1003ee4, Func Offset: 0xe4
	// Line 578, Address: 0x1003eec, Func Offset: 0xec
	// Line 580, Address: 0x1003ef8, Func Offset: 0xf8
	// Line 581, Address: 0x1003f04, Func Offset: 0x104
	// Func End, Address: 0x1003f1c, Func Offset: 0x11c
}

// 
// Start address: 0x1003f20
void sonicpit(_anon0* pActwk)
{
	// Line 586, Address: 0x1003f20, Func Offset: 0
	// Line 587, Address: 0x1003f2c, Func Offset: 0xc
	// Line 588, Address: 0x1003f38, Func Offset: 0x18
	// Func End, Address: 0x1003f48, Func Offset: 0x28
}

// 
// Start address: 0x1003f50
void sonicesc(_anon0* pActwk)
{
	_anon0* pEmmy;
	_anon0* pMetal;
	// Line 593, Address: 0x1003f50, Func Offset: 0
	// Line 597, Address: 0x1003f64, Func Offset: 0x14
	// Line 598, Address: 0x1003f6c, Func Offset: 0x1c
	// Line 599, Address: 0x1003f74, Func Offset: 0x24
	// Line 601, Address: 0x1003f88, Func Offset: 0x38
	// Line 602, Address: 0x1003f98, Func Offset: 0x48
	// Line 603, Address: 0x1003fb0, Func Offset: 0x60
	// Line 605, Address: 0x1003fbc, Func Offset: 0x6c
	// Line 606, Address: 0x1003fc8, Func Offset: 0x78
	// Line 609, Address: 0x1003fd0, Func Offset: 0x80
	// Line 610, Address: 0x1003fdc, Func Offset: 0x8c
	// Line 611, Address: 0x1003fe8, Func Offset: 0x98
	// Line 612, Address: 0x1003ff0, Func Offset: 0xa0
	// Line 613, Address: 0x1003ff8, Func Offset: 0xa8
	// Line 614, Address: 0x1004000, Func Offset: 0xb0
	// Line 615, Address: 0x1004008, Func Offset: 0xb8
	// Line 616, Address: 0x1004010, Func Offset: 0xc0
	// Line 617, Address: 0x1004018, Func Offset: 0xc8
	// Line 619, Address: 0x1004024, Func Offset: 0xd4
	// Line 620, Address: 0x1004034, Func Offset: 0xe4
	// Line 621, Address: 0x1004040, Func Offset: 0xf0
	// Line 623, Address: 0x100404c, Func Offset: 0xfc
	// Line 624, Address: 0x1004058, Func Offset: 0x108
	// Line 627, Address: 0x1004060, Func Offset: 0x110
	// Line 629, Address: 0x100406c, Func Offset: 0x11c
	// Func End, Address: 0x1004084, Func Offset: 0x134
}

// 
// Start address: 0x1004090
void emie_ctrl(_anon0* pActwk)
{
	_anon0* pSonic;
	void(*acttbl)(_anon0*)[16];
	// Line 634, Address: 0x1004090, Func Offset: 0
	// Line 636, Address: 0x10040a0, Func Offset: 0x10
	// Line 656, Address: 0x10040d4, Func Offset: 0x44
	// Line 657, Address: 0x10040dc, Func Offset: 0x4c
	// Line 659, Address: 0x10040ec, Func Offset: 0x5c
	// Line 661, Address: 0x10040fc, Func Offset: 0x6c
	// Line 662, Address: 0x100410c, Func Offset: 0x7c
	// Line 663, Address: 0x1004130, Func Offset: 0xa0
	// Line 664, Address: 0x1004140, Func Offset: 0xb0
	// Func End, Address: 0x1004154, Func Offset: 0xc4
}

// 
// Start address: 0x1004160
void emmy_exeset(_anon0* pActwk, _anon0* pSonic)
{
	_anon5 ld0;
	short d5;
	short d6;
	// Line 669, Address: 0x1004160, Func Offset: 0
	// Line 673, Address: 0x1004170, Func Offset: 0x10
	// Line 675, Address: 0x1004188, Func Offset: 0x28
	// Line 677, Address: 0x100419c, Func Offset: 0x3c
	// Line 678, Address: 0x10041a8, Func Offset: 0x48
	// Line 680, Address: 0x10041b0, Func Offset: 0x50
	// Line 681, Address: 0x10041c8, Func Offset: 0x68
	// Line 683, Address: 0x10041e0, Func Offset: 0x80
	// Line 685, Address: 0x10041f8, Func Offset: 0x98
	// Line 687, Address: 0x1004210, Func Offset: 0xb0
	// Line 688, Address: 0x100421c, Func Offset: 0xbc
	// Line 692, Address: 0x1004224, Func Offset: 0xc4
	// Line 693, Address: 0x1004230, Func Offset: 0xd0
	// Line 694, Address: 0x100423c, Func Offset: 0xdc
	// Line 695, Address: 0x1004270, Func Offset: 0x110
	// Line 697, Address: 0x1004284, Func Offset: 0x124
	// Line 699, Address: 0x10042a0, Func Offset: 0x140
	// Line 701, Address: 0x10042ac, Func Offset: 0x14c
	// Line 702, Address: 0x10042c4, Func Offset: 0x164
	// Line 704, Address: 0x10042dc, Func Offset: 0x17c
	// Line 706, Address: 0x10042f8, Func Offset: 0x198
	// Line 707, Address: 0x1004304, Func Offset: 0x1a4
	// Line 708, Address: 0x1004310, Func Offset: 0x1b0
	// Line 712, Address: 0x1004318, Func Offset: 0x1b8
	// Line 713, Address: 0x100431c, Func Offset: 0x1bc
	// Line 715, Address: 0x100432c, Func Offset: 0x1cc
	// Line 717, Address: 0x1004334, Func Offset: 0x1d4
	// Line 719, Address: 0x1004354, Func Offset: 0x1f4
	// Line 721, Address: 0x1004360, Func Offset: 0x200
	// Func End, Address: 0x1004370, Func Offset: 0x210
}

// 
// Start address: 0x1004370
void emmyinit(_anon0* pActwk)
{
	// Line 726, Address: 0x1004370, Func Offset: 0
	// Line 727, Address: 0x1004378, Func Offset: 0x8
	// Line 728, Address: 0x1004384, Func Offset: 0x14
	// Line 730, Address: 0x1004390, Func Offset: 0x20
	// Line 731, Address: 0x10043a0, Func Offset: 0x30
	// Line 733, Address: 0x10043a8, Func Offset: 0x38
	// Line 734, Address: 0x10043b4, Func Offset: 0x44
	// Line 736, Address: 0x10043c0, Func Offset: 0x50
	// Line 738, Address: 0x10043c8, Func Offset: 0x58
	// Line 739, Address: 0x10043d8, Func Offset: 0x68
	// Line 740, Address: 0x10043e8, Func Offset: 0x78
	// Line 742, Address: 0x10043f0, Func Offset: 0x80
	// Line 743, Address: 0x10043fc, Func Offset: 0x8c
	// Func End, Address: 0x1004408, Func Offset: 0x98
}

// 
// Start address: 0x1004410
void e_runinit(_anon0* pActwk)
{
	short d5;
	short d6;
	// Line 748, Address: 0x1004410, Func Offset: 0
	// Line 751, Address: 0x100441c, Func Offset: 0xc
	// Line 752, Address: 0x1004430, Func Offset: 0x20
	// Line 753, Address: 0x1004440, Func Offset: 0x30
	// Line 755, Address: 0x1004448, Func Offset: 0x38
	// Line 757, Address: 0x100446c, Func Offset: 0x5c
	// Line 758, Address: 0x100447c, Func Offset: 0x6c
	// Line 759, Address: 0x100448c, Func Offset: 0x7c
	// Line 762, Address: 0x1004494, Func Offset: 0x84
	// Line 764, Address: 0x10044a4, Func Offset: 0x94
	// Line 765, Address: 0x10044b0, Func Offset: 0xa0
	// Line 766, Address: 0x10044b8, Func Offset: 0xa8
	// Line 767, Address: 0x10044c0, Func Offset: 0xb0
	// Line 768, Address: 0x10044c8, Func Offset: 0xb8
	// Line 770, Address: 0x10044d0, Func Offset: 0xc0
	// Line 771, Address: 0x10044e0, Func Offset: 0xd0
	// Line 772, Address: 0x10044f0, Func Offset: 0xe0
	// Line 774, Address: 0x10044f8, Func Offset: 0xe8
	// Line 775, Address: 0x1004504, Func Offset: 0xf4
	// Func End, Address: 0x1004514, Func Offset: 0x104
}

// 
// Start address: 0x1004520
void emmymove(_anon0* pActwk)
{
	// Line 780, Address: 0x1004520, Func Offset: 0
	// Line 781, Address: 0x100452c, Func Offset: 0xc
	// Line 782, Address: 0x1004538, Func Offset: 0x18
	// Line 784, Address: 0x1004540, Func Offset: 0x20
	// Line 785, Address: 0x100454c, Func Offset: 0x2c
	// Line 786, Address: 0x1004568, Func Offset: 0x48
	// Line 788, Address: 0x1004580, Func Offset: 0x60
	// Line 790, Address: 0x100458c, Func Offset: 0x6c
	// Func End, Address: 0x100459c, Func Offset: 0x7c
}

// 
// Start address: 0x10045a0
void e_kissset(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short d5;
	short d6;
	// Line 795, Address: 0x10045a0, Func Offset: 0
	// Line 799, Address: 0x10045ac, Func Offset: 0xc
	// Line 800, Address: 0x10045c0, Func Offset: 0x20
	// Line 802, Address: 0x10045cc, Func Offset: 0x2c
	// Line 803, Address: 0x10045d4, Func Offset: 0x34
	// Line 805, Address: 0x10045e0, Func Offset: 0x40
	// Line 806, Address: 0x10045e8, Func Offset: 0x48
	// Line 807, Address: 0x10045f0, Func Offset: 0x50
	// Line 808, Address: 0x10045fc, Func Offset: 0x5c
	// Line 810, Address: 0x1004604, Func Offset: 0x64
	// Line 811, Address: 0x1004614, Func Offset: 0x74
	// Line 812, Address: 0x100461c, Func Offset: 0x7c
	// Line 814, Address: 0x100462c, Func Offset: 0x8c
	// Line 815, Address: 0x1004668, Func Offset: 0xc8
	// Line 816, Address: 0x1004678, Func Offset: 0xd8
	// Line 817, Address: 0x1004684, Func Offset: 0xe4
	// Line 819, Address: 0x10046a0, Func Offset: 0x100
	// Line 820, Address: 0x10046ac, Func Offset: 0x10c
	// Line 822, Address: 0x10046b8, Func Offset: 0x118
	// Line 823, Address: 0x10046c4, Func Offset: 0x124
	// Func End, Address: 0x10046d4, Func Offset: 0x134
}

// 
// Start address: 0x10046e0
void emmykiss(_anon0* pActwk)
{
	_anon0* pSonic;
	_anon0* pMetal;
	_anon0* pNewActwk;
	// Line 828, Address: 0x10046e0, Func Offset: 0
	// Line 833, Address: 0x10046f4, Func Offset: 0x14
	// Line 834, Address: 0x10046fc, Func Offset: 0x1c
	// Line 836, Address: 0x1004704, Func Offset: 0x24
	// Line 837, Address: 0x1004710, Func Offset: 0x30
	// Line 839, Address: 0x100472c, Func Offset: 0x4c
	// Line 841, Address: 0x1004734, Func Offset: 0x54
	// Line 842, Address: 0x1004744, Func Offset: 0x64
	// Line 844, Address: 0x100475c, Func Offset: 0x7c
	// Line 846, Address: 0x100476c, Func Offset: 0x8c
	// Line 847, Address: 0x1004778, Func Offset: 0x98
	// Line 849, Address: 0x1004784, Func Offset: 0xa4
	// Line 851, Address: 0x100479c, Func Offset: 0xbc
	// Line 852, Address: 0x10047a8, Func Offset: 0xc8
	// Line 853, Address: 0x10047b4, Func Offset: 0xd4
	// Line 857, Address: 0x10047bc, Func Offset: 0xdc
	// Line 858, Address: 0x10047cc, Func Offset: 0xec
	// Line 860, Address: 0x10047e4, Func Offset: 0x104
	// Line 862, Address: 0x1004800, Func Offset: 0x120
	// Line 863, Address: 0x100480c, Func Offset: 0x12c
	// Line 866, Address: 0x1004818, Func Offset: 0x138
	// Func End, Address: 0x1004830, Func Offset: 0x150
}

// 
// Start address: 0x1004830
void e_jumpset(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short d5;
	short d6;
	// Line 871, Address: 0x1004830, Func Offset: 0
	// Line 875, Address: 0x100483c, Func Offset: 0xc
	// Line 876, Address: 0x1004850, Func Offset: 0x20
	// Line 878, Address: 0x100485c, Func Offset: 0x2c
	// Line 879, Address: 0x100486c, Func Offset: 0x3c
	// Line 881, Address: 0x1004878, Func Offset: 0x48
	// Line 882, Address: 0x1004880, Func Offset: 0x50
	// Line 883, Address: 0x1004888, Func Offset: 0x58
	// Line 884, Address: 0x1004894, Func Offset: 0x64
	// Line 886, Address: 0x100489c, Func Offset: 0x6c
	// Line 887, Address: 0x10048ac, Func Offset: 0x7c
	// Line 888, Address: 0x10048b4, Func Offset: 0x84
	// Line 890, Address: 0x10048c4, Func Offset: 0x94
	// Line 892, Address: 0x10048e8, Func Offset: 0xb8
	// Line 893, Address: 0x10048f8, Func Offset: 0xc8
	// Line 894, Address: 0x1004908, Func Offset: 0xd8
	// Line 897, Address: 0x1004910, Func Offset: 0xe0
	// Line 901, Address: 0x1004920, Func Offset: 0xf0
	// Line 903, Address: 0x1004938, Func Offset: 0x108
	// Line 905, Address: 0x1004950, Func Offset: 0x120
	// Line 907, Address: 0x100495c, Func Offset: 0x12c
	// Line 910, Address: 0x1004964, Func Offset: 0x134
	// Line 912, Address: 0x100497c, Func Offset: 0x14c
	// Line 915, Address: 0x1004988, Func Offset: 0x158
	// Line 916, Address: 0x1004994, Func Offset: 0x164
	// Line 917, Address: 0x10049a0, Func Offset: 0x170
	// Line 919, Address: 0x10049bc, Func Offset: 0x18c
	// Line 920, Address: 0x10049c8, Func Offset: 0x198
	// Line 922, Address: 0x10049d4, Func Offset: 0x1a4
	// Line 923, Address: 0x10049e0, Func Offset: 0x1b0
	// Func End, Address: 0x10049f0, Func Offset: 0x1c0
}

// 
// Start address: 0x10049f0
void emmyjump(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 928, Address: 0x10049f0, Func Offset: 0
	// Line 931, Address: 0x10049fc, Func Offset: 0xc
	// Line 932, Address: 0x1004a08, Func Offset: 0x18
	// Line 934, Address: 0x1004a24, Func Offset: 0x34
	// Line 936, Address: 0x1004a2c, Func Offset: 0x3c
	// Line 937, Address: 0x1004a3c, Func Offset: 0x4c
	// Line 939, Address: 0x1004a54, Func Offset: 0x64
	// Line 941, Address: 0x1004a64, Func Offset: 0x74
	// Line 942, Address: 0x1004a70, Func Offset: 0x80
	// Line 945, Address: 0x1004a7c, Func Offset: 0x8c
	// Line 946, Address: 0x1004a8c, Func Offset: 0x9c
	// Line 948, Address: 0x1004aa4, Func Offset: 0xb4
	// Line 950, Address: 0x1004ac0, Func Offset: 0xd0
	// Line 951, Address: 0x1004acc, Func Offset: 0xdc
	// Line 954, Address: 0x1004ad8, Func Offset: 0xe8
	// Func End, Address: 0x1004ae8, Func Offset: 0xf8
}

// 
// Start address: 0x1004af0
void e_catchset(_anon0* pActwk)
{
	_anon0* pSonic;
	_anon0* pNewActwk;
	// Line 959, Address: 0x1004af0, Func Offset: 0
	// Line 963, Address: 0x1004b00, Func Offset: 0x10
	// Line 965, Address: 0x1004b08, Func Offset: 0x18
	// Line 966, Address: 0x1004b1c, Func Offset: 0x2c
	// Line 968, Address: 0x1004b28, Func Offset: 0x38
	// Line 970, Address: 0x1004b40, Func Offset: 0x50
	// Line 971, Address: 0x1004b50, Func Offset: 0x60
	// Line 972, Address: 0x1004b5c, Func Offset: 0x6c
	// Line 973, Address: 0x1004b6c, Func Offset: 0x7c
	// Line 974, Address: 0x1004b7c, Func Offset: 0x8c
	// Line 977, Address: 0x1004b84, Func Offset: 0x94
	// Line 978, Address: 0x1004b94, Func Offset: 0xa4
	// Line 979, Address: 0x1004ba0, Func Offset: 0xb0
	// Line 981, Address: 0x1004bb0, Func Offset: 0xc0
	// Line 982, Address: 0x1004bb8, Func Offset: 0xc8
	// Line 984, Address: 0x1004bc0, Func Offset: 0xd0
	// Line 985, Address: 0x1004bc8, Func Offset: 0xd8
	// Line 986, Address: 0x1004bd0, Func Offset: 0xe0
	// Line 987, Address: 0x1004bd8, Func Offset: 0xe8
	// Line 989, Address: 0x1004be0, Func Offset: 0xf0
	// Line 990, Address: 0x1004bf0, Func Offset: 0x100
	// Line 991, Address: 0x1004bf8, Func Offset: 0x108
	// Line 993, Address: 0x1004c08, Func Offset: 0x118
	// Line 995, Address: 0x1004c10, Func Offset: 0x120
	// Line 996, Address: 0x1004c1c, Func Offset: 0x12c
	// Line 998, Address: 0x1004c38, Func Offset: 0x148
	// Line 999, Address: 0x1004c44, Func Offset: 0x154
	// Line 1001, Address: 0x1004c50, Func Offset: 0x160
	// Line 1002, Address: 0x1004c5c, Func Offset: 0x16c
	// Func End, Address: 0x1004c70, Func Offset: 0x180
}

// 
// Start address: 0x1004c70
void emmy_catch(_anon0* pActwk)
{
	_anon0* pSonic;
	_anon0* pNewActwk;
	// Line 1007, Address: 0x1004c70, Func Offset: 0
	// Line 1011, Address: 0x1004c80, Func Offset: 0x10
	// Line 1013, Address: 0x1004c88, Func Offset: 0x18
	// Line 1015, Address: 0x1004c9c, Func Offset: 0x2c
	// Line 1016, Address: 0x1004cac, Func Offset: 0x3c
	// Line 1017, Address: 0x1004cb8, Func Offset: 0x48
	// Line 1018, Address: 0x1004cc8, Func Offset: 0x58
	// Line 1019, Address: 0x1004cd8, Func Offset: 0x68
	// Line 1022, Address: 0x1004ce0, Func Offset: 0x70
	// Line 1023, Address: 0x1004cf0, Func Offset: 0x80
	// Line 1024, Address: 0x1004cfc, Func Offset: 0x8c
	// Line 1027, Address: 0x1004d0c, Func Offset: 0x9c
	// Line 1029, Address: 0x1004d20, Func Offset: 0xb0
	// Line 1031, Address: 0x1004d34, Func Offset: 0xc4
	// Line 1032, Address: 0x1004d44, Func Offset: 0xd4
	// Line 1036, Address: 0x1004d5c, Func Offset: 0xec
	// Line 1038, Address: 0x1004d78, Func Offset: 0x108
	// Line 1039, Address: 0x1004d84, Func Offset: 0x114
	// Line 1040, Address: 0x1004d90, Func Offset: 0x120
	// Line 1044, Address: 0x1004d98, Func Offset: 0x128
	// Line 1045, Address: 0x1004da4, Func Offset: 0x134
	// Line 1046, Address: 0x1004db0, Func Offset: 0x140
	// Line 1047, Address: 0x1004dbc, Func Offset: 0x14c
	// Func End, Address: 0x1004dd0, Func Offset: 0x160
}

// 
// Start address: 0x1004dd0
void e_turnset(_anon0* pActwk)
{
	short d5;
	short d6;
	// Line 1052, Address: 0x1004dd0, Func Offset: 0
	// Line 1055, Address: 0x1004ddc, Func Offset: 0xc
	// Line 1057, Address: 0x1004de8, Func Offset: 0x18
	// Line 1058, Address: 0x1004df8, Func Offset: 0x28
	// Line 1060, Address: 0x1004e00, Func Offset: 0x30
	// Line 1061, Address: 0x1004e0c, Func Offset: 0x3c
	// Line 1062, Address: 0x1004e14, Func Offset: 0x44
	// Line 1063, Address: 0x1004e1c, Func Offset: 0x4c
	// Line 1065, Address: 0x1004e24, Func Offset: 0x54
	// Line 1066, Address: 0x1004e34, Func Offset: 0x64
	// Line 1067, Address: 0x1004e3c, Func Offset: 0x6c
	// Line 1069, Address: 0x1004e4c, Func Offset: 0x7c
	// Line 1070, Address: 0x1004e5c, Func Offset: 0x8c
	// Line 1072, Address: 0x1004e88, Func Offset: 0xb8
	// Line 1073, Address: 0x1004e98, Func Offset: 0xc8
	// Line 1074, Address: 0x1004ea8, Func Offset: 0xd8
	// Line 1076, Address: 0x1004eb8, Func Offset: 0xe8
	// Line 1077, Address: 0x1004ec4, Func Offset: 0xf4
	// Func End, Address: 0x1004ed4, Func Offset: 0x104
}

// 
// Start address: 0x1004ee0
void emmyturn(_anon0* pActwk)
{
	short d0;
	// Line 1082, Address: 0x1004ee0, Func Offset: 0
	// Line 1085, Address: 0x1004ef0, Func Offset: 0x10
	// Line 1086, Address: 0x1004efc, Func Offset: 0x1c
	// Line 1087, Address: 0x1004f0c, Func Offset: 0x2c
	// Line 1088, Address: 0x1004f20, Func Offset: 0x40
	// Line 1090, Address: 0x1004f30, Func Offset: 0x50
	// Line 1091, Address: 0x1004f5c, Func Offset: 0x7c
	// Line 1092, Address: 0x1004f68, Func Offset: 0x88
	// Line 1094, Address: 0x1004f74, Func Offset: 0x94
	// Func End, Address: 0x1004f88, Func Offset: 0xa8
}

// 
// Start address: 0x1004f90
void e_standset(_anon0* pActwk)
{
	_anon0* pNewActwk;
	_anon5 ld0;
	short d5;
	short d6;
	// Line 1099, Address: 0x1004f90, Func Offset: 0
	// Line 1104, Address: 0x1004f9c, Func Offset: 0xc
	// Line 1105, Address: 0x1004fb0, Func Offset: 0x20
	// Line 1106, Address: 0x1004fbc, Func Offset: 0x2c
	// Line 1107, Address: 0x1004fc4, Func Offset: 0x34
	// Line 1109, Address: 0x1004fcc, Func Offset: 0x3c
	// Line 1110, Address: 0x1004fd4, Func Offset: 0x44
	// Line 1111, Address: 0x1004fdc, Func Offset: 0x4c
	// Line 1112, Address: 0x1004fe4, Func Offset: 0x54
	// Line 1114, Address: 0x1004fec, Func Offset: 0x5c
	// Line 1115, Address: 0x1004ff8, Func Offset: 0x68
	// Line 1116, Address: 0x1005004, Func Offset: 0x74
	// Line 1117, Address: 0x1005038, Func Offset: 0xa8
	// Line 1119, Address: 0x100504c, Func Offset: 0xbc
	// Line 1120, Address: 0x100505c, Func Offset: 0xcc
	// Line 1121, Address: 0x1005064, Func Offset: 0xd4
	// Line 1122, Address: 0x1005074, Func Offset: 0xe4
	// Line 1125, Address: 0x100507c, Func Offset: 0xec
	// Line 1126, Address: 0x100508c, Func Offset: 0xfc
	// Line 1127, Address: 0x1005094, Func Offset: 0x104
	// Line 1130, Address: 0x10050a4, Func Offset: 0x114
	// Line 1131, Address: 0x10050e0, Func Offset: 0x150
	// Line 1132, Address: 0x10050f0, Func Offset: 0x160
	// Line 1133, Address: 0x10050fc, Func Offset: 0x16c
	// Line 1135, Address: 0x1005118, Func Offset: 0x188
	// Line 1136, Address: 0x1005124, Func Offset: 0x194
	// Line 1138, Address: 0x1005130, Func Offset: 0x1a0
	// Line 1139, Address: 0x100513c, Func Offset: 0x1ac
	// Func End, Address: 0x100514c, Func Offset: 0x1bc
}

// 
// Start address: 0x1005150
void emmymoji(_anon0* pActwk)
{
	_anon0* pSonic;
	short d5;
	short d6;
	// Line 1144, Address: 0x1005150, Func Offset: 0
	// Line 1148, Address: 0x1005160, Func Offset: 0x10
	// Line 1150, Address: 0x1005168, Func Offset: 0x18
	// Line 1151, Address: 0x1005178, Func Offset: 0x28
	// Line 1152, Address: 0x1005184, Func Offset: 0x34
	// Line 1153, Address: 0x10051c0, Func Offset: 0x70
	// Line 1154, Address: 0x10051d0, Func Offset: 0x80
	// Line 1155, Address: 0x10051e0, Func Offset: 0x90
	// Line 1157, Address: 0x10051f8, Func Offset: 0xa8
	// Line 1159, Address: 0x1005204, Func Offset: 0xb4
	// Func End, Address: 0x1005218, Func Offset: 0xc8
}

// 
// Start address: 0x1005220
void emmyexit(_anon0* pActwk)
{
	// Line 1164, Address: 0x1005220, Func Offset: 0
	// Line 1165, Address: 0x100522c, Func Offset: 0xc
	// Line 1166, Address: 0x1005238, Func Offset: 0x18
	// Line 1168, Address: 0x1005250, Func Offset: 0x30
	// Line 1169, Address: 0x100525c, Func Offset: 0x3c
	// Line 1170, Address: 0x100526c, Func Offset: 0x4c
	// Line 1171, Address: 0x1005274, Func Offset: 0x54
	// Line 1173, Address: 0x1005284, Func Offset: 0x64
	// Line 1174, Address: 0x1005294, Func Offset: 0x74
	// Line 1175, Address: 0x10052a4, Func Offset: 0x84
	// Line 1177, Address: 0x10052ac, Func Offset: 0x8c
	// Line 1179, Address: 0x10052b8, Func Offset: 0x98
	// Func End, Address: 0x10052c8, Func Offset: 0xa8
}

// 
// Start address: 0x10052d0
void emmypose(_anon0* pActwk)
{
	_anon0* pSonic;
	_anon0* pMetal;
	// Line 1184, Address: 0x10052d0, Func Offset: 0
	// Line 1188, Address: 0x10052e4, Func Offset: 0x14
	// Line 1190, Address: 0x10052ec, Func Offset: 0x1c
	// Line 1191, Address: 0x1005304, Func Offset: 0x34
	// Line 1193, Address: 0x100531c, Func Offset: 0x4c
	// Line 1195, Address: 0x1005328, Func Offset: 0x58
	// Line 1196, Address: 0x1005330, Func Offset: 0x60
	// Line 1198, Address: 0x100533c, Func Offset: 0x6c
	// Line 1200, Address: 0x1005350, Func Offset: 0x80
	// Line 1204, Address: 0x100535c, Func Offset: 0x8c
	// Func End, Address: 0x1005374, Func Offset: 0xa4
}

// 
// Start address: 0x1005380
void emmyesc(_anon0* pActwk)
{
	// Line 1209, Address: 0x1005380, Func Offset: 0
	// Line 1210, Address: 0x100538c, Func Offset: 0xc
	// Line 1211, Address: 0x1005398, Func Offset: 0x18
	// Func End, Address: 0x10053a8, Func Offset: 0x28
}

// 
// Start address: 0x10053b0
void metals_ctrl(_anon0* pActwk)
{
	_anon0* pSonic;
	void(*acttbl)(_anon0*)[16];
	// Line 1216, Address: 0x10053b0, Func Offset: 0
	// Line 1218, Address: 0x10053c0, Func Offset: 0x10
	// Line 1238, Address: 0x10053f4, Func Offset: 0x44
	// Line 1239, Address: 0x10053fc, Func Offset: 0x4c
	// Line 1241, Address: 0x100540c, Func Offset: 0x5c
	// Line 1243, Address: 0x100541c, Func Offset: 0x6c
	// Line 1244, Address: 0x1005440, Func Offset: 0x90
	// Line 1245, Address: 0x1005450, Func Offset: 0xa0
	// Func End, Address: 0x1005464, Func Offset: 0xb4
}

// 
// Start address: 0x1005470
void metalsinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1250, Address: 0x1005470, Func Offset: 0
	// Line 1253, Address: 0x100547c, Func Offset: 0xc
	// Line 1254, Address: 0x1005488, Func Offset: 0x18
	// Line 1256, Address: 0x1005494, Func Offset: 0x24
	// Line 1257, Address: 0x10054a4, Func Offset: 0x34
	// Line 1259, Address: 0x10054ac, Func Offset: 0x3c
	// Line 1260, Address: 0x10054b4, Func Offset: 0x44
	// Line 1261, Address: 0x10054bc, Func Offset: 0x4c
	// Line 1262, Address: 0x10054c4, Func Offset: 0x54
	// Line 1264, Address: 0x10054cc, Func Offset: 0x5c
	// Line 1265, Address: 0x10054d8, Func Offset: 0x68
	// Line 1266, Address: 0x10054e4, Func Offset: 0x74
	// Line 1268, Address: 0x10054f4, Func Offset: 0x84
	// Line 1269, Address: 0x1005504, Func Offset: 0x94
	// Line 1270, Address: 0x1005514, Func Offset: 0xa4
	// Line 1272, Address: 0x100551c, Func Offset: 0xac
	// Line 1273, Address: 0x1005528, Func Offset: 0xb8
	// Line 1274, Address: 0x1005534, Func Offset: 0xc4
	// Line 1275, Address: 0x1005568, Func Offset: 0xf8
	// Line 1276, Address: 0x1005574, Func Offset: 0x104
	// Line 1278, Address: 0x1005584, Func Offset: 0x114
	// Line 1279, Address: 0x1005590, Func Offset: 0x120
	// Func End, Address: 0x10055a0, Func Offset: 0x130
}

// 
// Start address: 0x10055a0
void m_flyset(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1284, Address: 0x10055a0, Func Offset: 0
	// Line 1287, Address: 0x10055ac, Func Offset: 0xc
	// Line 1288, Address: 0x10055b8, Func Offset: 0x18
	// Line 1289, Address: 0x10055c8, Func Offset: 0x28
	// Line 1291, Address: 0x10055d0, Func Offset: 0x30
	// Line 1293, Address: 0x10055e8, Func Offset: 0x48
	// Line 1296, Address: 0x10055f8, Func Offset: 0x58
	// Line 1297, Address: 0x1005600, Func Offset: 0x60
	// Line 1298, Address: 0x1005608, Func Offset: 0x68
	// Line 1299, Address: 0x1005610, Func Offset: 0x70
	// Line 1301, Address: 0x1005618, Func Offset: 0x78
	// Line 1302, Address: 0x1005624, Func Offset: 0x84
	// Line 1304, Address: 0x1005630, Func Offset: 0x90
	// Line 1305, Address: 0x1005640, Func Offset: 0xa0
	// Line 1306, Address: 0x1005650, Func Offset: 0xb0
	// Line 1308, Address: 0x1005658, Func Offset: 0xb8
	// Line 1309, Address: 0x1005664, Func Offset: 0xc4
	// Line 1310, Address: 0x1005670, Func Offset: 0xd0
	// Line 1311, Address: 0x1005694, Func Offset: 0xf4
	// Line 1312, Address: 0x10056a0, Func Offset: 0x100
	// Line 1314, Address: 0x10056b0, Func Offset: 0x110
	// Line 1316, Address: 0x10056cc, Func Offset: 0x12c
	// Line 1318, Address: 0x10056d8, Func Offset: 0x138
	// Line 1319, Address: 0x10056e4, Func Offset: 0x144
	// Func End, Address: 0x10056f4, Func Offset: 0x154
}

// 
// Start address: 0x1005700
void metalsfly(_anon0* pActwk)
{
	_anon0* pSonic;
	short d5;
	short d6;
	// Line 1324, Address: 0x1005700, Func Offset: 0
	// Line 1328, Address: 0x1005710, Func Offset: 0x10
	// Line 1330, Address: 0x1005718, Func Offset: 0x18
	// Line 1331, Address: 0x1005730, Func Offset: 0x30
	// Line 1333, Address: 0x1005748, Func Offset: 0x48
	// Line 1335, Address: 0x1005754, Func Offset: 0x54
	// Line 1337, Address: 0x100576c, Func Offset: 0x6c
	// Line 1338, Address: 0x1005774, Func Offset: 0x74
	// Line 1339, Address: 0x1005780, Func Offset: 0x80
	// Line 1341, Address: 0x1005788, Func Offset: 0x88
	// Line 1343, Address: 0x1005798, Func Offset: 0x98
	// Line 1344, Address: 0x10057a0, Func Offset: 0xa0
	// Line 1345, Address: 0x10057ac, Func Offset: 0xac
	// Line 1347, Address: 0x10057b4, Func Offset: 0xb4
	// Line 1349, Address: 0x10057d0, Func Offset: 0xd0
	// Line 1351, Address: 0x10057ec, Func Offset: 0xec
	// Line 1352, Address: 0x10057f4, Func Offset: 0xf4
	// Line 1353, Address: 0x1005800, Func Offset: 0x100
	// Line 1354, Address: 0x100580c, Func Offset: 0x10c
	// Line 1357, Address: 0x1005814, Func Offset: 0x114
	// Line 1358, Address: 0x1005824, Func Offset: 0x124
	// Line 1360, Address: 0x100583c, Func Offset: 0x13c
	// Line 1361, Address: 0x1005850, Func Offset: 0x150
	// Line 1363, Address: 0x1005858, Func Offset: 0x158
	// Line 1364, Address: 0x1005874, Func Offset: 0x174
	// Line 1366, Address: 0x100588c, Func Offset: 0x18c
	// Line 1367, Address: 0x10058a8, Func Offset: 0x1a8
	// Line 1369, Address: 0x10058c0, Func Offset: 0x1c0
	// Line 1370, Address: 0x10058d4, Func Offset: 0x1d4
	// Line 1371, Address: 0x10058dc, Func Offset: 0x1dc
	// Line 1373, Address: 0x10058e8, Func Offset: 0x1e8
	// Func End, Address: 0x10058fc, Func Offset: 0x1fc
}

// 
// Start address: 0x1005900
void m_brakeset(_anon0* pActwk)
{
	// Line 1378, Address: 0x1005900, Func Offset: 0
	// Line 1379, Address: 0x1005908, Func Offset: 0x8
	// Line 1381, Address: 0x1005914, Func Offset: 0x14
	// Line 1382, Address: 0x1005920, Func Offset: 0x20
	// Line 1384, Address: 0x1005938, Func Offset: 0x38
	// Line 1387, Address: 0x1005948, Func Offset: 0x48
	// Line 1388, Address: 0x1005950, Func Offset: 0x50
	// Line 1389, Address: 0x1005958, Func Offset: 0x58
	// Line 1391, Address: 0x1005960, Func Offset: 0x60
	// Line 1392, Address: 0x1005970, Func Offset: 0x70
	// Line 1393, Address: 0x1005980, Func Offset: 0x80
	// Line 1394, Address: 0x1005988, Func Offset: 0x88
	// Line 1395, Address: 0x1005994, Func Offset: 0x94
	// Func End, Address: 0x10059a0, Func Offset: 0xa0
}

// 
// Start address: 0x10059a0
void metalsbrake(_anon0* pActwk)
{
	short d0;
	// Line 1400, Address: 0x10059a0, Func Offset: 0
	// Line 1403, Address: 0x10059b0, Func Offset: 0x10
	// Line 1404, Address: 0x10059bc, Func Offset: 0x1c
	// Line 1405, Address: 0x10059cc, Func Offset: 0x2c
	// Line 1406, Address: 0x10059e0, Func Offset: 0x40
	// Line 1408, Address: 0x10059f0, Func Offset: 0x50
	// Line 1410, Address: 0x10059fc, Func Offset: 0x5c
	// Func End, Address: 0x1005a10, Func Offset: 0x70
}

// 
// Start address: 0x1005a10
void m_stopset(_anon0* pActwk)
{
	// Line 1415, Address: 0x1005a10, Func Offset: 0
	// Line 1416, Address: 0x1005a18, Func Offset: 0x8
	// Line 1418, Address: 0x1005a2c, Func Offset: 0x1c
	// Line 1420, Address: 0x1005a48, Func Offset: 0x38
	// Line 1423, Address: 0x1005a54, Func Offset: 0x44
	// Line 1424, Address: 0x1005a60, Func Offset: 0x50
	// Line 1425, Address: 0x1005a68, Func Offset: 0x58
	// Line 1427, Address: 0x1005a70, Func Offset: 0x60
	// Line 1428, Address: 0x1005a78, Func Offset: 0x68
	// Line 1429, Address: 0x1005a80, Func Offset: 0x70
	// Line 1430, Address: 0x1005a88, Func Offset: 0x78
	// Line 1432, Address: 0x1005a90, Func Offset: 0x80
	// Line 1433, Address: 0x1005aa0, Func Offset: 0x90
	// Line 1434, Address: 0x1005ab0, Func Offset: 0xa0
	// Line 1436, Address: 0x1005ab8, Func Offset: 0xa8
	// Line 1438, Address: 0x1005ac4, Func Offset: 0xb4
	// Line 1439, Address: 0x1005ad0, Func Offset: 0xc0
	// Func End, Address: 0x1005adc, Func Offset: 0xcc
}

// 
// Start address: 0x1005ae0
void metalsstop(_anon0* pActwk)
{
	_anon0* pSonic;
	// Line 1444, Address: 0x1005ae0, Func Offset: 0
	// Line 1447, Address: 0x1005aec, Func Offset: 0xc
	// Line 1449, Address: 0x1005af4, Func Offset: 0x14
	// Line 1450, Address: 0x1005b04, Func Offset: 0x24
	// Line 1452, Address: 0x1005b1c, Func Offset: 0x3c
	// Line 1453, Address: 0x1005b30, Func Offset: 0x50
	// Line 1454, Address: 0x1005b44, Func Offset: 0x64
	// Line 1456, Address: 0x1005b58, Func Offset: 0x78
	// Line 1457, Address: 0x1005b64, Func Offset: 0x84
	// Line 1459, Address: 0x1005b6c, Func Offset: 0x8c
	// Line 1462, Address: 0x1005b78, Func Offset: 0x98
	// Func End, Address: 0x1005b88, Func Offset: 0xa8
}

// 
// Start address: 0x1005b90
void m_standset(_anon0* pActwk)
{
	// Line 1467, Address: 0x1005b90, Func Offset: 0
	// Line 1468, Address: 0x1005b98, Func Offset: 0x8
	// Line 1469, Address: 0x1005bac, Func Offset: 0x1c
	// Line 1470, Address: 0x1005bb4, Func Offset: 0x24
	// Line 1472, Address: 0x1005bbc, Func Offset: 0x2c
	// Line 1473, Address: 0x1005bc4, Func Offset: 0x34
	// Line 1474, Address: 0x1005bcc, Func Offset: 0x3c
	// Line 1475, Address: 0x1005bd4, Func Offset: 0x44
	// Line 1477, Address: 0x1005bdc, Func Offset: 0x4c
	// Line 1478, Address: 0x1005bec, Func Offset: 0x5c
	// Line 1479, Address: 0x1005bfc, Func Offset: 0x6c
	// Line 1481, Address: 0x1005c04, Func Offset: 0x74
	// Line 1482, Address: 0x1005c10, Func Offset: 0x80
	// Line 1483, Address: 0x1005c1c, Func Offset: 0x8c
	// Func End, Address: 0x1005c28, Func Offset: 0x98
}

// 
// Start address: 0x1005c30
void metalstand(_anon0* pActwk)
{
	short d5;
	short d6;
	// Line 1488, Address: 0x1005c30, Func Offset: 0
	// Line 1491, Address: 0x1005c3c, Func Offset: 0xc
	// Line 1492, Address: 0x1005c4c, Func Offset: 0x1c
	// Line 1494, Address: 0x1005c64, Func Offset: 0x34
	// Line 1496, Address: 0x1005c70, Func Offset: 0x40
	// Line 1497, Address: 0x1005cac, Func Offset: 0x7c
	// Line 1498, Address: 0x1005cbc, Func Offset: 0x8c
	// Func End, Address: 0x1005ccc, Func Offset: 0x9c
}

// 
// Start address: 0x1005cd0
void m_startset(_anon0* pActwk)
{
	short d5;
	short d6;
	// Line 1503, Address: 0x1005cd0, Func Offset: 0
	// Line 1506, Address: 0x1005cdc, Func Offset: 0xc
	// Line 1507, Address: 0x1005cf0, Func Offset: 0x20
	// Line 1508, Address: 0x1005cf8, Func Offset: 0x28
	// Line 1510, Address: 0x1005d00, Func Offset: 0x30
	// Line 1511, Address: 0x1005d08, Func Offset: 0x38
	// Line 1512, Address: 0x1005d10, Func Offset: 0x40
	// Line 1513, Address: 0x1005d18, Func Offset: 0x48
	// Line 1515, Address: 0x1005d20, Func Offset: 0x50
	// Line 1516, Address: 0x1005d5c, Func Offset: 0x8c
	// Line 1518, Address: 0x1005d6c, Func Offset: 0x9c
	// Line 1519, Address: 0x1005d7c, Func Offset: 0xac
	// Line 1520, Address: 0x1005d8c, Func Offset: 0xbc
	// Line 1522, Address: 0x1005d94, Func Offset: 0xc4
	// Line 1524, Address: 0x1005da0, Func Offset: 0xd0
	// Line 1526, Address: 0x1005da8, Func Offset: 0xd8
	// Line 1527, Address: 0x1005db4, Func Offset: 0xe4
	// Func End, Address: 0x1005dc4, Func Offset: 0xf4
}

// 
// Start address: 0x1005dd0
void metalstartcttbl(_anon0* pActwk)
{
	short d5;
	short d6;
	// Line 1532, Address: 0x1005dd0, Func Offset: 0
	// Line 1535, Address: 0x1005ddc, Func Offset: 0xc
	// Line 1536, Address: 0x1005dec, Func Offset: 0x1c
	// Line 1538, Address: 0x1005e04, Func Offset: 0x34
	// Line 1540, Address: 0x1005e18, Func Offset: 0x48
	// Line 1541, Address: 0x1005e24, Func Offset: 0x54
	// Line 1542, Address: 0x1005e34, Func Offset: 0x64
	// Line 1543, Address: 0x1005e44, Func Offset: 0x74
	// Line 1545, Address: 0x1005e4c, Func Offset: 0x7c
	// Line 1546, Address: 0x1005e58, Func Offset: 0x88
	// Line 1547, Address: 0x1005e64, Func Offset: 0x94
	// Line 1550, Address: 0x1005e6c, Func Offset: 0x9c
	// Line 1553, Address: 0x1005e78, Func Offset: 0xa8
	// Line 1554, Address: 0x1005eb4, Func Offset: 0xe4
	// Line 1555, Address: 0x1005ec4, Func Offset: 0xf4
	// Func End, Address: 0x1005ed4, Func Offset: 0x104
}

// 
// Start address: 0x1005ee0
void m_eraset(_anon0* pActwk)
{
	// Line 1560, Address: 0x1005ee0, Func Offset: 0
	// Line 1561, Address: 0x1005ee8, Func Offset: 0x8
	// Line 1562, Address: 0x1005efc, Func Offset: 0x1c
	// Line 1563, Address: 0x1005f04, Func Offset: 0x24
	// Line 1565, Address: 0x1005f0c, Func Offset: 0x2c
	// Line 1566, Address: 0x1005f14, Func Offset: 0x34
	// Line 1567, Address: 0x1005f1c, Func Offset: 0x3c
	// Line 1568, Address: 0x1005f24, Func Offset: 0x44
	// Line 1570, Address: 0x1005f2c, Func Offset: 0x4c
	// Line 1571, Address: 0x1005f3c, Func Offset: 0x5c
	// Line 1572, Address: 0x1005f4c, Func Offset: 0x6c
	// Line 1574, Address: 0x1005f54, Func Offset: 0x74
	// Line 1576, Address: 0x1005f60, Func Offset: 0x80
	// Line 1577, Address: 0x1005f68, Func Offset: 0x88
	// Line 1578, Address: 0x1005f74, Func Offset: 0x94
	// Func End, Address: 0x1005f80, Func Offset: 0xa0
}

// 
// Start address: 0x1005f80
void metalsera(_anon0* pActwk)
{
	// Line 1583, Address: 0x1005f80, Func Offset: 0
	// Line 1584, Address: 0x1005f88, Func Offset: 0x8
	// Line 1585, Address: 0x1005f98, Func Offset: 0x18
	// Line 1587, Address: 0x1005fb0, Func Offset: 0x30
	// Line 1589, Address: 0x1005fc4, Func Offset: 0x44
	// Line 1590, Address: 0x1005fd4, Func Offset: 0x54
	// Line 1591, Address: 0x1005fe4, Func Offset: 0x64
	// Line 1593, Address: 0x1005fec, Func Offset: 0x6c
	// Line 1594, Address: 0x1005ff8, Func Offset: 0x78
	// Line 1595, Address: 0x1006004, Func Offset: 0x84
	// Line 1598, Address: 0x100600c, Func Offset: 0x8c
	// Line 1601, Address: 0x1006018, Func Offset: 0x98
	// Func End, Address: 0x1006024, Func Offset: 0xa4
}

// 
// Start address: 0x1006030
void metalsexit(_anon0* pActwk)
{
	// Line 1606, Address: 0x1006030, Func Offset: 0
	// Line 1607, Address: 0x100603c, Func Offset: 0xc
	// Line 1609, Address: 0x1006048, Func Offset: 0x18
	// Line 1611, Address: 0x1006060, Func Offset: 0x30
	// Line 1612, Address: 0x100606c, Func Offset: 0x3c
	// Line 1613, Address: 0x100607c, Func Offset: 0x4c
	// Line 1614, Address: 0x1006084, Func Offset: 0x54
	// Line 1615, Address: 0x1006094, Func Offset: 0x64
	// Line 1616, Address: 0x10060a4, Func Offset: 0x74
	// Line 1617, Address: 0x10060b4, Func Offset: 0x84
	// Line 1618, Address: 0x10060bc, Func Offset: 0x8c
	// Line 1620, Address: 0x10060c8, Func Offset: 0x98
	// Func End, Address: 0x10060d8, Func Offset: 0xa8
}

// 
// Start address: 0x10060e0
void metalspit(_anon0* pActwk)
{
	// Line 1625, Address: 0x10060e0, Func Offset: 0
	// Line 1626, Address: 0x10060ec, Func Offset: 0xc
	// Line 1627, Address: 0x10060f8, Func Offset: 0x18
	// Func End, Address: 0x1006108, Func Offset: 0x28
}

// 
// Start address: 0x1006110
void metalsesc(_anon0* pActwk)
{
	// Line 1632, Address: 0x1006110, Func Offset: 0
	// Line 1633, Address: 0x100611c, Func Offset: 0xc
	// Line 1634, Address: 0x1006128, Func Offset: 0x18
	// Func End, Address: 0x1006138, Func Offset: 0x28
}

// 
// Start address: 0x1006140
void heart_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1643, Address: 0x1006140, Func Offset: 0
	// Line 1644, Address: 0x100614c, Func Offset: 0xc
	// Line 1650, Address: 0x1006168, Func Offset: 0x28
	// Line 1651, Address: 0x100618c, Func Offset: 0x4c
	// Func End, Address: 0x100619c, Func Offset: 0x5c
}

// 
// Start address: 0x10061a0
void heartinit(_anon0* pActwk)
{
	_anon0* pEmmy;
	// Line 1656, Address: 0x10061a0, Func Offset: 0
	// Line 1659, Address: 0x10061ac, Func Offset: 0xc
	// Line 1661, Address: 0x10061b4, Func Offset: 0x14
	// Line 1662, Address: 0x10061c0, Func Offset: 0x20
	// Line 1664, Address: 0x10061cc, Func Offset: 0x2c
	// Line 1665, Address: 0x10061d4, Func Offset: 0x34
	// Line 1667, Address: 0x10061e0, Func Offset: 0x40
	// Line 1668, Address: 0x10061ec, Func Offset: 0x4c
	// Line 1669, Address: 0x10061f8, Func Offset: 0x58
	// Line 1670, Address: 0x1006200, Func Offset: 0x60
	// Line 1672, Address: 0x1006208, Func Offset: 0x68
	// Line 1673, Address: 0x1006214, Func Offset: 0x74
	// Line 1675, Address: 0x1006220, Func Offset: 0x80
	// Line 1676, Address: 0x1006230, Func Offset: 0x90
	// Line 1678, Address: 0x1006238, Func Offset: 0x98
	// Line 1680, Address: 0x1006244, Func Offset: 0xa4
	// Line 1681, Address: 0x1006250, Func Offset: 0xb0
	// Func End, Address: 0x1006260, Func Offset: 0xc0
}

// 
// Start address: 0x1006260
void heartmove(_anon0* pActwk)
{
	// Line 1686, Address: 0x1006260, Func Offset: 0
	// Line 1687, Address: 0x100626c, Func Offset: 0xc
	// Line 1688, Address: 0x1006278, Func Offset: 0x18
	// Line 1690, Address: 0x1006294, Func Offset: 0x34
	// Line 1692, Address: 0x10062a4, Func Offset: 0x44
	// Func End, Address: 0x10062b4, Func Offset: 0x54
}

// 
// Start address: 0x10062c0
void pocky_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1697, Address: 0x10062c0, Func Offset: 0
	// Line 1698, Address: 0x10062cc, Func Offset: 0xc
	// Line 1704, Address: 0x10062e8, Func Offset: 0x28
	// Line 1705, Address: 0x100630c, Func Offset: 0x4c
	// Func End, Address: 0x100631c, Func Offset: 0x5c
}

// 
// Start address: 0x1006320
void pockyinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1710, Address: 0x1006320, Func Offset: 0
	// Line 1713, Address: 0x100632c, Func Offset: 0xc
	// Line 1714, Address: 0x1006338, Func Offset: 0x18
	// Line 1716, Address: 0x1006344, Func Offset: 0x24
	// Line 1717, Address: 0x1006350, Func Offset: 0x30
	// Line 1718, Address: 0x100635c, Func Offset: 0x3c
	// Line 1719, Address: 0x1006368, Func Offset: 0x48
	// Line 1720, Address: 0x100639c, Func Offset: 0x7c
	// Line 1721, Address: 0x10063a0, Func Offset: 0x80
	// Line 1722, Address: 0x10063ac, Func Offset: 0x8c
	// Line 1724, Address: 0x10063c0, Func Offset: 0xa0
	// Line 1725, Address: 0x10063d0, Func Offset: 0xb0
	// Line 1726, Address: 0x10063dc, Func Offset: 0xbc
	// Line 1727, Address: 0x10063e8, Func Offset: 0xc8
	// Line 1728, Address: 0x100641c, Func Offset: 0xfc
	// Line 1729, Address: 0x1006420, Func Offset: 0x100
	// Line 1730, Address: 0x100642c, Func Offset: 0x10c
	// Line 1733, Address: 0x1006440, Func Offset: 0x120
	// Line 1734, Address: 0x100644c, Func Offset: 0x12c
	// Line 1735, Address: 0x1006454, Func Offset: 0x134
	// Line 1737, Address: 0x1006460, Func Offset: 0x140
	// Line 1738, Address: 0x100646c, Func Offset: 0x14c
	// Line 1739, Address: 0x100647c, Func Offset: 0x15c
	// Line 1740, Address: 0x100648c, Func Offset: 0x16c
	// Line 1741, Address: 0x1006494, Func Offset: 0x174
	// Line 1742, Address: 0x10064a0, Func Offset: 0x180
	// Func End, Address: 0x10064b0, Func Offset: 0x190
}

// 
// Start address: 0x10064b0
void pecky_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1747, Address: 0x10064b0, Func Offset: 0
	// Line 1748, Address: 0x10064bc, Func Offset: 0xc
	// Line 1754, Address: 0x10064d8, Func Offset: 0x28
	// Line 1755, Address: 0x10064fc, Func Offset: 0x4c
	// Func End, Address: 0x100650c, Func Offset: 0x5c
}

// 
// Start address: 0x1006510
void peckyinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1760, Address: 0x1006510, Func Offset: 0
	// Line 1763, Address: 0x100651c, Func Offset: 0xc
	// Line 1764, Address: 0x1006528, Func Offset: 0x18
	// Line 1766, Address: 0x1006534, Func Offset: 0x24
	// Line 1767, Address: 0x1006540, Func Offset: 0x30
	// Line 1768, Address: 0x100654c, Func Offset: 0x3c
	// Line 1769, Address: 0x1006558, Func Offset: 0x48
	// Line 1770, Address: 0x100658c, Func Offset: 0x7c
	// Line 1771, Address: 0x1006590, Func Offset: 0x80
	// Line 1772, Address: 0x100659c, Func Offset: 0x8c
	// Line 1774, Address: 0x10065b0, Func Offset: 0xa0
	// Line 1775, Address: 0x10065c0, Func Offset: 0xb0
	// Line 1776, Address: 0x10065cc, Func Offset: 0xbc
	// Line 1777, Address: 0x10065d8, Func Offset: 0xc8
	// Line 1778, Address: 0x100660c, Func Offset: 0xfc
	// Line 1779, Address: 0x1006610, Func Offset: 0x100
	// Line 1780, Address: 0x100661c, Func Offset: 0x10c
	// Line 1782, Address: 0x1006630, Func Offset: 0x120
	// Line 1783, Address: 0x100663c, Func Offset: 0x12c
	// Line 1784, Address: 0x1006644, Func Offset: 0x134
	// Line 1786, Address: 0x1006650, Func Offset: 0x140
	// Line 1787, Address: 0x100665c, Func Offset: 0x14c
	// Line 1788, Address: 0x100666c, Func Offset: 0x15c
	// Line 1789, Address: 0x100667c, Func Offset: 0x16c
	// Line 1790, Address: 0x1006684, Func Offset: 0x174
	// Line 1791, Address: 0x1006690, Func Offset: 0x180
	// Func End, Address: 0x10066a0, Func Offset: 0x190
}

// 
// Start address: 0x10066a0
void ricky_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1796, Address: 0x10066a0, Func Offset: 0
	// Line 1797, Address: 0x10066ac, Func Offset: 0xc
	// Line 1803, Address: 0x10066c8, Func Offset: 0x28
	// Line 1804, Address: 0x10066ec, Func Offset: 0x4c
	// Func End, Address: 0x10066fc, Func Offset: 0x5c
}

// 
// Start address: 0x1006700
void rickyinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1809, Address: 0x1006700, Func Offset: 0
	// Line 1812, Address: 0x100670c, Func Offset: 0xc
	// Line 1813, Address: 0x1006718, Func Offset: 0x18
	// Line 1815, Address: 0x1006724, Func Offset: 0x24
	// Line 1816, Address: 0x1006730, Func Offset: 0x30
	// Line 1817, Address: 0x100673c, Func Offset: 0x3c
	// Line 1818, Address: 0x1006748, Func Offset: 0x48
	// Line 1819, Address: 0x100677c, Func Offset: 0x7c
	// Line 1820, Address: 0x1006780, Func Offset: 0x80
	// Line 1821, Address: 0x100678c, Func Offset: 0x8c
	// Line 1823, Address: 0x10067a0, Func Offset: 0xa0
	// Line 1824, Address: 0x10067b0, Func Offset: 0xb0
	// Line 1825, Address: 0x10067bc, Func Offset: 0xbc
	// Line 1826, Address: 0x10067c8, Func Offset: 0xc8
	// Line 1827, Address: 0x10067fc, Func Offset: 0xfc
	// Line 1828, Address: 0x1006800, Func Offset: 0x100
	// Line 1829, Address: 0x100680c, Func Offset: 0x10c
	// Line 1831, Address: 0x1006820, Func Offset: 0x120
	// Line 1832, Address: 0x100682c, Func Offset: 0x12c
	// Line 1834, Address: 0x1006834, Func Offset: 0x134
	// Line 1835, Address: 0x1006840, Func Offset: 0x140
	// Line 1836, Address: 0x100684c, Func Offset: 0x14c
	// Line 1837, Address: 0x100685c, Func Offset: 0x15c
	// Line 1838, Address: 0x100686c, Func Offset: 0x16c
	// Line 1839, Address: 0x1006874, Func Offset: 0x174
	// Line 1840, Address: 0x1006880, Func Offset: 0x180
	// Func End, Address: 0x1006890, Func Offset: 0x190
}

// 
// Start address: 0x1006890
void sheep_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1845, Address: 0x1006890, Func Offset: 0
	// Line 1846, Address: 0x100689c, Func Offset: 0xc
	// Line 1852, Address: 0x10068b8, Func Offset: 0x28
	// Line 1853, Address: 0x10068dc, Func Offset: 0x4c
	// Func End, Address: 0x10068ec, Func Offset: 0x5c
}

// 
// Start address: 0x10068f0
void sheepinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1858, Address: 0x10068f0, Func Offset: 0
	// Line 1861, Address: 0x10068fc, Func Offset: 0xc
	// Line 1862, Address: 0x1006908, Func Offset: 0x18
	// Line 1864, Address: 0x1006914, Func Offset: 0x24
	// Line 1865, Address: 0x1006920, Func Offset: 0x30
	// Line 1866, Address: 0x100692c, Func Offset: 0x3c
	// Line 1867, Address: 0x1006938, Func Offset: 0x48
	// Line 1868, Address: 0x100696c, Func Offset: 0x7c
	// Line 1869, Address: 0x1006970, Func Offset: 0x80
	// Line 1870, Address: 0x100697c, Func Offset: 0x8c
	// Line 1872, Address: 0x1006990, Func Offset: 0xa0
	// Line 1873, Address: 0x10069a0, Func Offset: 0xb0
	// Line 1874, Address: 0x10069ac, Func Offset: 0xbc
	// Line 1875, Address: 0x10069b8, Func Offset: 0xc8
	// Line 1876, Address: 0x10069ec, Func Offset: 0xfc
	// Line 1877, Address: 0x10069f0, Func Offset: 0x100
	// Line 1878, Address: 0x10069fc, Func Offset: 0x10c
	// Line 1880, Address: 0x1006a10, Func Offset: 0x120
	// Line 1881, Address: 0x1006a1c, Func Offset: 0x12c
	// Line 1883, Address: 0x1006a24, Func Offset: 0x134
	// Line 1884, Address: 0x1006a30, Func Offset: 0x140
	// Line 1885, Address: 0x1006a3c, Func Offset: 0x14c
	// Line 1886, Address: 0x1006a4c, Func Offset: 0x15c
	// Line 1887, Address: 0x1006a5c, Func Offset: 0x16c
	// Line 1888, Address: 0x1006a64, Func Offset: 0x174
	// Line 1889, Address: 0x1006a70, Func Offset: 0x180
	// Func End, Address: 0x1006a80, Func Offset: 0x190
}

// 
// Start address: 0x1006a80
void animalmove(_anon0* pActwk)
{
	// Line 1894, Address: 0x1006a80, Func Offset: 0
	// Line 1895, Address: 0x1006a8c, Func Offset: 0xc
	// Line 1897, Address: 0x1006aa0, Func Offset: 0x20
	// Line 1898, Address: 0x1006ab0, Func Offset: 0x30
	// Line 1901, Address: 0x1006ab8, Func Offset: 0x38
	// Line 1902, Address: 0x1006ac4, Func Offset: 0x44
	// Line 1904, Address: 0x1006ae0, Func Offset: 0x60
	// Line 1907, Address: 0x1006ae8, Func Offset: 0x68
	// Func End, Address: 0x1006af8, Func Offset: 0x78
}

// 
// Start address: 0x1006b00
void flick_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1912, Address: 0x1006b00, Func Offset: 0
	// Line 1913, Address: 0x1006b0c, Func Offset: 0xc
	// Line 1919, Address: 0x1006b28, Func Offset: 0x28
	// Line 1920, Address: 0x1006b4c, Func Offset: 0x4c
	// Func End, Address: 0x1006b5c, Func Offset: 0x5c
}

// 
// Start address: 0x1006b60
void flickyinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1925, Address: 0x1006b60, Func Offset: 0
	// Line 1928, Address: 0x1006b6c, Func Offset: 0xc
	// Line 1929, Address: 0x1006b78, Func Offset: 0x18
	// Line 1930, Address: 0x1006b84, Func Offset: 0x24
	// Line 1931, Address: 0x1006b90, Func Offset: 0x30
	// Line 1932, Address: 0x1006bb4, Func Offset: 0x54
	// Line 1934, Address: 0x1006bc0, Func Offset: 0x60
	// Line 1935, Address: 0x1006bcc, Func Offset: 0x6c
	// Line 1937, Address: 0x1006bd4, Func Offset: 0x74
	// Line 1938, Address: 0x1006be0, Func Offset: 0x80
	// Line 1939, Address: 0x1006bec, Func Offset: 0x8c
	// Line 1940, Address: 0x1006bf4, Func Offset: 0x94
	// Line 1942, Address: 0x1006bfc, Func Offset: 0x9c
	// Line 1943, Address: 0x1006c08, Func Offset: 0xa8
	// Line 1945, Address: 0x1006c14, Func Offset: 0xb4
	// Line 1946, Address: 0x1006c24, Func Offset: 0xc4
	// Line 1947, Address: 0x1006c34, Func Offset: 0xd4
	// Line 1949, Address: 0x1006c3c, Func Offset: 0xdc
	// Line 1950, Address: 0x1006c48, Func Offset: 0xe8
	// Func End, Address: 0x1006c58, Func Offset: 0xf8
}

// 
// Start address: 0x1006c60
void inco_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 1955, Address: 0x1006c60, Func Offset: 0
	// Line 1956, Address: 0x1006c6c, Func Offset: 0xc
	// Line 1962, Address: 0x1006c88, Func Offset: 0x28
	// Line 1963, Address: 0x1006cac, Func Offset: 0x4c
	// Func End, Address: 0x1006cbc, Func Offset: 0x5c
}

// 
// Start address: 0x1006cc0
void incoinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 1968, Address: 0x1006cc0, Func Offset: 0
	// Line 1971, Address: 0x1006ccc, Func Offset: 0xc
	// Line 1972, Address: 0x1006cd8, Func Offset: 0x18
	// Line 1973, Address: 0x1006ce4, Func Offset: 0x24
	// Line 1974, Address: 0x1006cf0, Func Offset: 0x30
	// Line 1975, Address: 0x1006d14, Func Offset: 0x54
	// Line 1977, Address: 0x1006d20, Func Offset: 0x60
	// Line 1978, Address: 0x1006d2c, Func Offset: 0x6c
	// Line 1979, Address: 0x1006d38, Func Offset: 0x78
	// Line 1980, Address: 0x1006d44, Func Offset: 0x84
	// Line 1981, Address: 0x1006d70, Func Offset: 0xb0
	// Line 1982, Address: 0x1006d74, Func Offset: 0xb4
	// Line 1983, Address: 0x1006d80, Func Offset: 0xc0
	// Line 1984, Address: 0x1006d94, Func Offset: 0xd4
	// Line 1986, Address: 0x1006d9c, Func Offset: 0xdc
	// Line 1987, Address: 0x1006da8, Func Offset: 0xe8
	// Line 1988, Address: 0x1006db4, Func Offset: 0xf4
	// Line 1989, Address: 0x1006dbc, Func Offset: 0xfc
	// Line 1991, Address: 0x1006dc4, Func Offset: 0x104
	// Line 1992, Address: 0x1006dd0, Func Offset: 0x110
	// Line 1994, Address: 0x1006ddc, Func Offset: 0x11c
	// Line 1995, Address: 0x1006dec, Func Offset: 0x12c
	// Line 1996, Address: 0x1006dfc, Func Offset: 0x13c
	// Line 1998, Address: 0x1006e04, Func Offset: 0x144
	// Line 1999, Address: 0x1006e10, Func Offset: 0x150
	// Func End, Address: 0x1006e20, Func Offset: 0x160
}

// 
// Start address: 0x1006e20
void hato_ctrl(_anon0* pActwk)
{
	void(*acttbl)(_anon0*)[2];
	// Line 2004, Address: 0x1006e20, Func Offset: 0
	// Line 2005, Address: 0x1006e2c, Func Offset: 0xc
	// Line 2011, Address: 0x1006e48, Func Offset: 0x28
	// Line 2012, Address: 0x1006e6c, Func Offset: 0x4c
	// Func End, Address: 0x1006e7c, Func Offset: 0x5c
}

// 
// Start address: 0x1006e80
void hatoinit(_anon0* pActwk)
{
	_anon5 ld0;
	// Line 2017, Address: 0x1006e80, Func Offset: 0
	// Line 2020, Address: 0x1006e8c, Func Offset: 0xc
	// Line 2021, Address: 0x1006e98, Func Offset: 0x18
	// Line 2022, Address: 0x1006ea4, Func Offset: 0x24
	// Line 2023, Address: 0x1006eb0, Func Offset: 0x30
	// Line 2024, Address: 0x1006ed4, Func Offset: 0x54
	// Line 2026, Address: 0x1006ee0, Func Offset: 0x60
	// Line 2027, Address: 0x1006eec, Func Offset: 0x6c
	// Line 2028, Address: 0x1006ef8, Func Offset: 0x78
	// Line 2029, Address: 0x1006f04, Func Offset: 0x84
	// Line 2030, Address: 0x1006f38, Func Offset: 0xb8
	// Line 2031, Address: 0x1006f3c, Func Offset: 0xbc
	// Line 2032, Address: 0x1006f48, Func Offset: 0xc8
	// Line 2033, Address: 0x1006f5c, Func Offset: 0xdc
	// Line 2035, Address: 0x1006f64, Func Offset: 0xe4
	// Line 2036, Address: 0x1006f70, Func Offset: 0xf0
	// Line 2037, Address: 0x1006f7c, Func Offset: 0xfc
	// Line 2038, Address: 0x1006f84, Func Offset: 0x104
	// Line 2040, Address: 0x1006f8c, Func Offset: 0x10c
	// Line 2041, Address: 0x1006f98, Func Offset: 0x118
	// Line 2043, Address: 0x1006fa4, Func Offset: 0x124
	// Line 2044, Address: 0x1006fb4, Func Offset: 0x134
	// Line 2045, Address: 0x1006fc4, Func Offset: 0x144
	// Line 2047, Address: 0x1006fcc, Func Offset: 0x14c
	// Line 2048, Address: 0x1006fd8, Func Offset: 0x158
	// Func End, Address: 0x1006fe8, Func Offset: 0x168
}

// 
// Start address: 0x1006ff0
void birdmove(_anon0* pActwk)
{
	// Line 2053, Address: 0x1006ff0, Func Offset: 0
	// Line 2054, Address: 0x1006ffc, Func Offset: 0xc
	// Line 2056, Address: 0x1007010, Func Offset: 0x20
	// Line 2057, Address: 0x1007020, Func Offset: 0x30
	// Line 2060, Address: 0x1007028, Func Offset: 0x38
	// Line 2062, Address: 0x1007034, Func Offset: 0x44
	// Func End, Address: 0x1007044, Func Offset: 0x54
}

// 
// Start address: 0x1007050
short killchk(_anon0* pActwk)
{
	// Line 2073, Address: 0x1007050, Func Offset: 0
	// Line 2074, Address: 0x1007058, Func Offset: 0x8
	// Line 2075, Address: 0x1007080, Func Offset: 0x30
	// Line 2076, Address: 0x10070a8, Func Offset: 0x58
	// Line 2077, Address: 0x10070d0, Func Offset: 0x80
	// Line 2078, Address: 0x10070f8, Func Offset: 0xa8
	// Line 2079, Address: 0x10070fc, Func Offset: 0xac
	// Func End, Address: 0x1007108, Func Offset: 0xb8
}

// 
// Start address: 0x1007110
void sinhmove(_anon0* pActwk)
{
	_anon5 ld0;
	_anon5 ld3;
	int tmp;
	// Line 2084, Address: 0x1007110, Func Offset: 0
	// Line 2088, Address: 0x1007120, Func Offset: 0x10
	// Line 2090, Address: 0x1007138, Func Offset: 0x28
	// Line 2091, Address: 0x100713c, Func Offset: 0x2c
	// Line 2092, Address: 0x1007150, Func Offset: 0x40
	// Line 2093, Address: 0x1007154, Func Offset: 0x44
	// Line 2094, Address: 0x1007160, Func Offset: 0x50
	// Line 2095, Address: 0x1007164, Func Offset: 0x54
	// Line 2096, Address: 0x1007180, Func Offset: 0x70
	// Line 2097, Address: 0x1007184, Func Offset: 0x74
	// Line 2098, Address: 0x1007190, Func Offset: 0x80
	// Line 2099, Address: 0x100719c, Func Offset: 0x8c
	// Line 2101, Address: 0x10071b0, Func Offset: 0xa0
	// Line 2102, Address: 0x10071bc, Func Offset: 0xac
	// Line 2103, Address: 0x10071c8, Func Offset: 0xb8
	// Line 2104, Address: 0x1007204, Func Offset: 0xf4
	// Line 2105, Address: 0x1007218, Func Offset: 0x108
	// Line 2107, Address: 0x1007234, Func Offset: 0x124
	// Line 2109, Address: 0x1007244, Func Offset: 0x134
	// Line 2111, Address: 0x100725c, Func Offset: 0x14c
	// Line 2112, Address: 0x1007274, Func Offset: 0x164
	// Func End, Address: 0x1007288, Func Offset: 0x178
}

// 
// Start address: 0x1007290
void sinvmove(_anon0* pActwk)
{
	_anon5 ld0;
	_anon5 ld3;
	// Line 2117, Address: 0x1007290, Func Offset: 0
	// Line 2120, Address: 0x100729c, Func Offset: 0xc
	// Line 2122, Address: 0x10072b4, Func Offset: 0x24
	// Line 2123, Address: 0x10072d0, Func Offset: 0x40
	// Line 2124, Address: 0x10072e4, Func Offset: 0x54
	// Line 2125, Address: 0x10072f4, Func Offset: 0x64
	// Line 2126, Address: 0x1007300, Func Offset: 0x70
	// Line 2127, Address: 0x100730c, Func Offset: 0x7c
	// Line 2129, Address: 0x1007320, Func Offset: 0x90
	// Line 2130, Address: 0x100732c, Func Offset: 0x9c
	// Line 2131, Address: 0x1007338, Func Offset: 0xa8
	// Line 2132, Address: 0x1007374, Func Offset: 0xe4
	// Line 2133, Address: 0x1007388, Func Offset: 0xf8
	// Line 2135, Address: 0x10073a4, Func Offset: 0x114
	// Line 2137, Address: 0x10073b4, Func Offset: 0x124
	// Line 2139, Address: 0x10073cc, Func Offset: 0x13c
	// Line 2140, Address: 0x10073e4, Func Offset: 0x154
	// Func End, Address: 0x10073f4, Func Offset: 0x164
}

// 
// Start address: 0x1007400
void hbt_move(_anon0* pActwk)
{
	// Line 2145, Address: 0x1007400, Func Offset: 0
	// Line 2146, Address: 0x1007408, Func Offset: 0x8
	// Line 2147, Address: 0x100742c, Func Offset: 0x2c
	// Line 2148, Address: 0x1007450, Func Offset: 0x50
	// Line 2149, Address: 0x1007470, Func Offset: 0x70
	// Line 2150, Address: 0x1007490, Func Offset: 0x90
	// Func End, Address: 0x100749c, Func Offset: 0x9c
}

// 
// Start address: 0x10074a0
short chk_sonicposi(_anon0* pActwk, _anon0* pA6, short* d5, short* d6)
{
	// Line 2157, Address: 0x10074a0, Func Offset: 0
	// Line 2158, Address: 0x10074b4, Func Offset: 0x14
	// Line 2159, Address: 0x10074c4, Func Offset: 0x24
	// Line 2160, Address: 0x10074e0, Func Offset: 0x40
	// Line 2162, Address: 0x10074f8, Func Offset: 0x58
	// Line 2163, Address: 0x100750c, Func Offset: 0x6c
	// Line 2164, Address: 0x1007518, Func Offset: 0x78
	// Line 2168, Address: 0x1007524, Func Offset: 0x84
	// Line 2169, Address: 0x100752c, Func Offset: 0x8c
	// Line 2171, Address: 0x1007530, Func Offset: 0x90
	// Func End, Address: 0x100753c, Func Offset: 0x9c
}

// 
// Start address: 0x1007540
short myposichk(_anon0* pActwk)
{
	// Line 2176, Address: 0x1007540, Func Offset: 0
	// Line 2177, Address: 0x1007548, Func Offset: 0x8
	// Line 2178, Address: 0x1007570, Func Offset: 0x30
	// Line 2180, Address: 0x1007588, Func Offset: 0x48
	// Line 2181, Address: 0x10075b0, Func Offset: 0x70
	// Line 2182, Address: 0x10075d8, Func Offset: 0x98
	// Line 2183, Address: 0x1007600, Func Offset: 0xc0
	// Line 2184, Address: 0x1007628, Func Offset: 0xe8
	// Line 2188, Address: 0x1007634, Func Offset: 0xf4
	// Line 2189, Address: 0x100765c, Func Offset: 0x11c
	// Line 2190, Address: 0x1007684, Func Offset: 0x144
	// Line 2191, Address: 0x10076ac, Func Offset: 0x16c
	// Line 2192, Address: 0x10076d4, Func Offset: 0x194
	// Line 2194, Address: 0x10076d8, Func Offset: 0x198
	// Func End, Address: 0x10076e4, Func Offset: 0x1a4
}

// 
// Start address: 0x10076f0
short centerchk(_anon0* pActwk)
{
	// Line 2199, Address: 0x10076f0, Func Offset: 0
	// Line 2200, Address: 0x10076f8, Func Offset: 0x8
	// Line 2202, Address: 0x100770c, Func Offset: 0x1c
	// Line 2204, Address: 0x1007724, Func Offset: 0x34
	// Line 2205, Address: 0x100774c, Func Offset: 0x5c
	// Line 2206, Address: 0x1007774, Func Offset: 0x84
	// Line 2210, Address: 0x1007780, Func Offset: 0x90
	// Line 2211, Address: 0x10077a8, Func Offset: 0xb8
	// Line 2212, Address: 0x10077d0, Func Offset: 0xe0
	// Line 2214, Address: 0x10077d4, Func Offset: 0xe4
	// Func End, Address: 0x10077e0, Func Offset: 0xf0
}

// 
// Start address: 0x10077e0
short dsplaychk(_anon0* pActwk)
{
	// Line 2219, Address: 0x10077e0, Func Offset: 0
	// Line 2220, Address: 0x10077e8, Func Offset: 0x8
	// Line 2221, Address: 0x10077fc, Func Offset: 0x1c
	// Line 2222, Address: 0x1007824, Func Offset: 0x44
	// Line 2223, Address: 0x1007828, Func Offset: 0x48
	// Func End, Address: 0x1007834, Func Offset: 0x54
}

// 
// Start address: 0x1007840
void waitmode(_anon0* pActwk)
{
	// Line 2228, Address: 0x1007840, Func Offset: 0
	// Line 2229, Address: 0x100784c, Func Offset: 0xc
	// Line 2230, Address: 0x1007858, Func Offset: 0x18
	// Line 2231, Address: 0x1007868, Func Offset: 0x28
	// Line 2233, Address: 0x1007884, Func Offset: 0x44
	// Line 2235, Address: 0x10078a0, Func Offset: 0x60
	// Line 2236, Address: 0x10078a8, Func Offset: 0x68
	// Line 2237, Address: 0x10078b0, Func Offset: 0x70
	// Line 2238, Address: 0x10078b8, Func Offset: 0x78
	// Line 2239, Address: 0x10078c0, Func Offset: 0x80
	// Line 2240, Address: 0x10078c8, Func Offset: 0x88
	// Line 2243, Address: 0x10078d0, Func Offset: 0x90
	// Line 2245, Address: 0x10078e8, Func Offset: 0xa8
	// Line 2246, Address: 0x10078f8, Func Offset: 0xb8
	// Line 2248, Address: 0x1007904, Func Offset: 0xc4
	// Func End, Address: 0x1007914, Func Offset: 0xd4
}

// 
// Start address: 0x1007920
void escape_chk(_anon0* pActwk)
{
	// Line 2253, Address: 0x1007920, Func Offset: 0
	// Line 2254, Address: 0x1007928, Func Offset: 0x8
	// Line 2255, Address: 0x1007938, Func Offset: 0x18
	// Line 2257, Address: 0x1007948, Func Offset: 0x28
	// Line 2259, Address: 0x1007964, Func Offset: 0x44
	// Line 2261, Address: 0x1007980, Func Offset: 0x60
	// Line 2262, Address: 0x1007990, Func Offset: 0x70
	// Line 2268, Address: 0x1007998, Func Offset: 0x78
	// Line 2270, Address: 0x10079b4, Func Offset: 0x94
	// Line 2272, Address: 0x10079d0, Func Offset: 0xb0
	// Line 2273, Address: 0x10079e0, Func Offset: 0xc0
	// Line 2277, Address: 0x10079e8, Func Offset: 0xc8
	// Line 2278, Address: 0x1007a00, Func Offset: 0xe0
	// Line 2279, Address: 0x1007a18, Func Offset: 0xf8
	// Func End, Address: 0x1007a24, Func Offset: 0x104
}

// 
// Start address: 0x1007a30
void pit_in(_anon0* pActwk)
{
	// Line 2284, Address: 0x1007a30, Func Offset: 0
	// Line 2285, Address: 0x1007a38, Func Offset: 0x8
	// Line 2286, Address: 0x1007a44, Func Offset: 0x14
	// Line 2288, Address: 0x1007a60, Func Offset: 0x30
	// Line 2289, Address: 0x1007a70, Func Offset: 0x40
	// Line 2291, Address: 0x1007a80, Func Offset: 0x50
	// Line 2292, Address: 0x1007a8c, Func Offset: 0x5c
	// Line 2295, Address: 0x1007a94, Func Offset: 0x64
	// Line 2297, Address: 0x1007aa0, Func Offset: 0x70
	// Line 2298, Address: 0x1007aac, Func Offset: 0x7c
	// Line 2301, Address: 0x1007ab4, Func Offset: 0x84
	// Line 2303, Address: 0x1007ac4, Func Offset: 0x94
	// Func End, Address: 0x1007ad0, Func Offset: 0xa0
}

// 
// Start address: 0x1007ad0
void m_sndchk(_anon0* pActwk)
{
	// Line 2308, Address: 0x1007ad0, Func Offset: 0
	// Line 2309, Address: 0x1007ad8, Func Offset: 0x8
	// Line 2310, Address: 0x1007ae8, Func Offset: 0x18
	// Line 2312, Address: 0x1007af8, Func Offset: 0x28
	// Line 2313, Address: 0x1007b14, Func Offset: 0x44
	// Line 2314, Address: 0x1007b20, Func Offset: 0x50
	// Line 2317, Address: 0x1007b28, Func Offset: 0x58
	// Line 2318, Address: 0x1007b44, Func Offset: 0x74
	// Line 2319, Address: 0x1007b60, Func Offset: 0x90
	// Line 2321, Address: 0x1007b6c, Func Offset: 0x9c
	// Func End, Address: 0x1007b78, Func Offset: 0xa8
}

