typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[16];
typedef tagPALETTEENTRY type_1[64];
typedef unsigned char type_2[34];
typedef unsigned char type_3[8];
typedef unsigned char type_4[7];
typedef unsigned char type_5[7];
typedef _anon0 type_6[8];
typedef tagPALETTEENTRY type_7[16];
typedef tagPALETTEENTRY type_8[48];
typedef tagPALETTEENTRY type_9[64];
typedef tagPALETTEENTRY type_10[2];
typedef tagPALETTEENTRY type_11[3];
typedef tagPALETTEENTRY type_12[16];
typedef tagPALETTEENTRY type_13[48];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon0
{
	tagPALETTEENTRY* PeSrc;
	short offset;
	short cnt;
};

union _anon1
{
	short w;
	_anon2 b;
};

struct _anon2
{
	char l;
	char h;
};

unsigned char col3c0cnt[8];
tagPALETTEENTRY col3c0col[3];
unsigned char col3c1cnt[34];
tagPALETTEENTRY col3c1col[2];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone3colorc12[48];
tagPALETTEENTRY zone3colorc[48];
tagPALETTEENTRY zone3colboss0[16];
tagPALETTEENTRY zone3colboss1[16];
_anon0 colortbl[8];
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
tagPALETTEENTRY* lpcolorwk;
int* lpFadeFlag;
int FadeCount;
unsigned char colorcnt;
unsigned char startcolor;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
_anon1 stageno;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
void colchg3c();
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl);
void fadein0();
int fadein0_new();
void fadein1();
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc);
void fadeout();
int fadeout_new();
void fadeout1();
void fadeout2(tagPALETTEENTRY* lpPeDest);
void flashin();
int flashin_new();
void flashin1();
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc);
void flashout();
int flashout_new();
void flashout1();
void flashout2(tagPALETTEENTRY* lpPeDest);
void colorset(int ColorNo);
void colorset2(int ColorNo);
void colorset3(int ColorNo);
void colorset00(int ColorNo, int WorkOffs);
int FadeProc();

// 
// Start address: 0x1025bb0
void clchgctr()
{
	// Line 115, Address: 0x1025bb0, Func Offset: 0
	// Line 116, Address: 0x1025bb8, Func Offset: 0x8
	// Line 117, Address: 0x1025bc0, Func Offset: 0x10
	// Func End, Address: 0x1025bd0, Func Offset: 0x20
}

// 
// Start address: 0x1025bd0
void colchg3c()
{
	// Line 119, Address: 0x1025bd0, Func Offset: 0
	// Line 120, Address: 0x1025bd8, Func Offset: 0x8
	// Line 121, Address: 0x1025c00, Func Offset: 0x30
	// Line 122, Address: 0x1025c28, Func Offset: 0x58
	// Func End, Address: 0x1025c38, Func Offset: 0x68
}

// 
// Start address: 0x1025c40
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 132, Address: 0x1025c40, Func Offset: 0
	// Line 135, Address: 0x1025c58, Func Offset: 0x18
	// Line 136, Address: 0x1025c6c, Func Offset: 0x2c
	// Line 138, Address: 0x1025c8c, Func Offset: 0x4c
	// Line 139, Address: 0x1025cb0, Func Offset: 0x70
	// Line 140, Address: 0x1025cc4, Func Offset: 0x84
	// Line 142, Address: 0x1025cf0, Func Offset: 0xb0
	// Line 145, Address: 0x1025cf8, Func Offset: 0xb8
	// Line 146, Address: 0x1025d14, Func Offset: 0xd4
	// Line 147, Address: 0x1025d24, Func Offset: 0xe4
	// Line 154, Address: 0x1025d5c, Func Offset: 0x11c
	// Func End, Address: 0x1025d6c, Func Offset: 0x12c
}

// 
// Start address: 0x1025d70
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 157, Address: 0x1025d70, Func Offset: 0
	// Line 161, Address: 0x1025d7c, Func Offset: 0xc
	// Line 163, Address: 0x1025db0, Func Offset: 0x40
	// Line 164, Address: 0x1025dbc, Func Offset: 0x4c
	// Line 165, Address: 0x1025dc0, Func Offset: 0x50
	// Line 166, Address: 0x1025dc4, Func Offset: 0x54
	// Line 167, Address: 0x1025dc8, Func Offset: 0x58
	// Line 168, Address: 0x1025dd0, Func Offset: 0x60
	// Line 169, Address: 0x1025dd4, Func Offset: 0x64
	// Line 170, Address: 0x1025df0, Func Offset: 0x80
	// Line 171, Address: 0x1025df8, Func Offset: 0x88
	// Line 173, Address: 0x1025e08, Func Offset: 0x98
	// Func End, Address: 0x1025e1c, Func Offset: 0xac
}

// 
// Start address: 0x1025e20
int fadein0_new()
{
	// Line 177, Address: 0x1025e20, Func Offset: 0
	// Line 179, Address: 0x1025e28, Func Offset: 0x8
	// Line 181, Address: 0x1025e34, Func Offset: 0x14
	// Line 184, Address: 0x1025e3c, Func Offset: 0x1c
	// Line 185, Address: 0x1025e5c, Func Offset: 0x3c
	// Line 186, Address: 0x1025e64, Func Offset: 0x44
	// Line 188, Address: 0x1025e70, Func Offset: 0x50
	// Line 189, Address: 0x1025e74, Func Offset: 0x54
	// Func End, Address: 0x1025e84, Func Offset: 0x64
}

// 
// Start address: 0x1025e90
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 193, Address: 0x1025e90, Func Offset: 0
	// Line 197, Address: 0x1025ea4, Func Offset: 0x14
	// Line 198, Address: 0x1025ed8, Func Offset: 0x48
	// Line 200, Address: 0x1025f0c, Func Offset: 0x7c
	// Line 201, Address: 0x1025f18, Func Offset: 0x88
	// Line 202, Address: 0x1025f28, Func Offset: 0x98
	// Line 203, Address: 0x1025f2c, Func Offset: 0x9c
	// Line 204, Address: 0x1025f30, Func Offset: 0xa0
	// Line 205, Address: 0x1025f4c, Func Offset: 0xbc
	// Line 207, Address: 0x1025f68, Func Offset: 0xd8
	// Line 208, Address: 0x1025f9c, Func Offset: 0x10c
	// Line 210, Address: 0x1025fd0, Func Offset: 0x140
	// Line 211, Address: 0x1025fdc, Func Offset: 0x14c
	// Line 212, Address: 0x1025fec, Func Offset: 0x15c
	// Line 213, Address: 0x1025ff0, Func Offset: 0x160
	// Line 214, Address: 0x1025ff4, Func Offset: 0x164
	// Line 218, Address: 0x1026010, Func Offset: 0x180
	// Func End, Address: 0x102602c, Func Offset: 0x19c
}

// 
// Start address: 0x1026030
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 222, Address: 0x1026030, Func Offset: 0
	// Line 223, Address: 0x102603c, Func Offset: 0xc
	// Line 226, Address: 0x102609c, Func Offset: 0x6c
	// Line 227, Address: 0x10260c0, Func Offset: 0x90
	// Line 228, Address: 0x10260d0, Func Offset: 0xa0
	// Line 229, Address: 0x10260d8, Func Offset: 0xa8
	// Line 230, Address: 0x10260fc, Func Offset: 0xcc
	// Line 231, Address: 0x102610c, Func Offset: 0xdc
	// Line 232, Address: 0x1026114, Func Offset: 0xe4
	// Line 233, Address: 0x1026138, Func Offset: 0x108
	// Line 237, Address: 0x102614c, Func Offset: 0x11c
	// Func End, Address: 0x1026158, Func Offset: 0x128
}

// 
// Start address: 0x1026160
void fadeout()
{
	// Line 241, Address: 0x1026160, Func Offset: 0
	// Line 242, Address: 0x1026168, Func Offset: 0x8
	// Line 244, Address: 0x1026174, Func Offset: 0x14
	// Line 245, Address: 0x102617c, Func Offset: 0x1c
	// Line 247, Address: 0x102618c, Func Offset: 0x2c
	// Func End, Address: 0x1026194, Func Offset: 0x34
}

// 
// Start address: 0x10261a0
int fadeout_new()
{
	// Line 251, Address: 0x10261a0, Func Offset: 0
	// Line 253, Address: 0x10261a8, Func Offset: 0x8
	// Line 255, Address: 0x10261b4, Func Offset: 0x14
	// Line 258, Address: 0x10261bc, Func Offset: 0x1c
	// Line 259, Address: 0x10261dc, Func Offset: 0x3c
	// Line 260, Address: 0x10261e4, Func Offset: 0x44
	// Line 262, Address: 0x10261f0, Func Offset: 0x50
	// Line 263, Address: 0x10261f4, Func Offset: 0x54
	// Func End, Address: 0x1026204, Func Offset: 0x64
}

// 
// Start address: 0x1026210
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 266, Address: 0x1026210, Func Offset: 0
	// Line 270, Address: 0x1026220, Func Offset: 0x10
	// Line 272, Address: 0x1026254, Func Offset: 0x44
	// Line 273, Address: 0x1026260, Func Offset: 0x50
	// Line 274, Address: 0x102626c, Func Offset: 0x5c
	// Line 275, Address: 0x1026270, Func Offset: 0x60
	// Line 276, Address: 0x102628c, Func Offset: 0x7c
	// Line 278, Address: 0x10262c0, Func Offset: 0xb0
	// Line 279, Address: 0x10262cc, Func Offset: 0xbc
	// Line 280, Address: 0x10262d8, Func Offset: 0xc8
	// Line 281, Address: 0x10262dc, Func Offset: 0xcc
	// Line 284, Address: 0x10262f8, Func Offset: 0xe8
	// Func End, Address: 0x1026310, Func Offset: 0x100
}

// 
// Start address: 0x1026310
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 287, Address: 0x1026310, Func Offset: 0
	// Line 288, Address: 0x1026318, Func Offset: 0x8
	// Line 289, Address: 0x1026328, Func Offset: 0x18
	// Line 290, Address: 0x102633c, Func Offset: 0x2c
	// Line 291, Address: 0x1026344, Func Offset: 0x34
	// Line 292, Address: 0x1026354, Func Offset: 0x44
	// Line 293, Address: 0x1026364, Func Offset: 0x54
	// Line 294, Address: 0x102636c, Func Offset: 0x5c
	// Line 295, Address: 0x102637c, Func Offset: 0x6c
	// Line 298, Address: 0x102638c, Func Offset: 0x7c
	// Func End, Address: 0x1026398, Func Offset: 0x88
}

// 
// Start address: 0x10263a0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 303, Address: 0x10263a0, Func Offset: 0
	// Line 307, Address: 0x10263ac, Func Offset: 0xc
	// Line 308, Address: 0x10263b4, Func Offset: 0x14
	// Line 310, Address: 0x10263c0, Func Offset: 0x20
	// Line 312, Address: 0x10263f4, Func Offset: 0x54
	// Line 313, Address: 0x1026400, Func Offset: 0x60
	// Line 314, Address: 0x1026408, Func Offset: 0x68
	// Line 315, Address: 0x1026410, Func Offset: 0x70
	// Line 316, Address: 0x1026418, Func Offset: 0x78
	// Line 317, Address: 0x1026420, Func Offset: 0x80
	// Line 318, Address: 0x1026424, Func Offset: 0x84
	// Line 319, Address: 0x1026440, Func Offset: 0xa0
	// Line 320, Address: 0x1026448, Func Offset: 0xa8
	// Line 322, Address: 0x1026458, Func Offset: 0xb8
	// Func End, Address: 0x102646c, Func Offset: 0xcc
}

// 
// Start address: 0x1026470
int flashin_new()
{
	// Line 324, Address: 0x1026470, Func Offset: 0
	// Line 326, Address: 0x1026478, Func Offset: 0x8
	// Line 328, Address: 0x1026484, Func Offset: 0x14
	// Line 331, Address: 0x102648c, Func Offset: 0x1c
	// Line 332, Address: 0x10264ac, Func Offset: 0x3c
	// Line 333, Address: 0x10264b4, Func Offset: 0x44
	// Line 335, Address: 0x10264c0, Func Offset: 0x50
	// Line 336, Address: 0x10264c4, Func Offset: 0x54
	// Func End, Address: 0x10264d4, Func Offset: 0x64
}

// 
// Start address: 0x10264e0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 338, Address: 0x10264e0, Func Offset: 0
	// Line 342, Address: 0x10264f4, Func Offset: 0x14
	// Line 343, Address: 0x1026528, Func Offset: 0x48
	// Line 345, Address: 0x102655c, Func Offset: 0x7c
	// Line 346, Address: 0x1026568, Func Offset: 0x88
	// Line 347, Address: 0x1026578, Func Offset: 0x98
	// Line 348, Address: 0x102657c, Func Offset: 0x9c
	// Line 349, Address: 0x1026580, Func Offset: 0xa0
	// Line 350, Address: 0x102659c, Func Offset: 0xbc
	// Line 352, Address: 0x10265b8, Func Offset: 0xd8
	// Line 353, Address: 0x10265ec, Func Offset: 0x10c
	// Line 355, Address: 0x1026620, Func Offset: 0x140
	// Line 356, Address: 0x102662c, Func Offset: 0x14c
	// Line 357, Address: 0x102663c, Func Offset: 0x15c
	// Line 358, Address: 0x1026640, Func Offset: 0x160
	// Line 359, Address: 0x1026644, Func Offset: 0x164
	// Line 363, Address: 0x1026660, Func Offset: 0x180
	// Func End, Address: 0x102667c, Func Offset: 0x19c
}

// 
// Start address: 0x1026680
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 367, Address: 0x1026680, Func Offset: 0
	// Line 368, Address: 0x102668c, Func Offset: 0xc
	// Line 371, Address: 0x10266ec, Func Offset: 0x6c
	// Line 372, Address: 0x1026710, Func Offset: 0x90
	// Line 373, Address: 0x1026720, Func Offset: 0xa0
	// Line 374, Address: 0x1026728, Func Offset: 0xa8
	// Line 375, Address: 0x102674c, Func Offset: 0xcc
	// Line 376, Address: 0x102675c, Func Offset: 0xdc
	// Line 377, Address: 0x1026764, Func Offset: 0xe4
	// Line 378, Address: 0x1026788, Func Offset: 0x108
	// Line 382, Address: 0x102679c, Func Offset: 0x11c
	// Func End, Address: 0x10267a8, Func Offset: 0x128
}

// 
// Start address: 0x10267b0
void flashout()
{
	// Line 386, Address: 0x10267b0, Func Offset: 0
	// Line 387, Address: 0x10267b8, Func Offset: 0x8
	// Line 389, Address: 0x10267c4, Func Offset: 0x14
	// Line 390, Address: 0x10267cc, Func Offset: 0x1c
	// Line 392, Address: 0x10267dc, Func Offset: 0x2c
	// Func End, Address: 0x10267e4, Func Offset: 0x34
}

// 
// Start address: 0x10267f0
int flashout_new()
{
	// Line 394, Address: 0x10267f0, Func Offset: 0
	// Line 396, Address: 0x10267f8, Func Offset: 0x8
	// Line 398, Address: 0x1026804, Func Offset: 0x14
	// Line 401, Address: 0x102680c, Func Offset: 0x1c
	// Line 402, Address: 0x102682c, Func Offset: 0x3c
	// Line 403, Address: 0x1026834, Func Offset: 0x44
	// Line 405, Address: 0x1026840, Func Offset: 0x50
	// Line 406, Address: 0x1026844, Func Offset: 0x54
	// Func End, Address: 0x1026854, Func Offset: 0x64
}

// 
// Start address: 0x1026860
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 409, Address: 0x1026860, Func Offset: 0
	// Line 413, Address: 0x1026870, Func Offset: 0x10
	// Line 415, Address: 0x10268a4, Func Offset: 0x44
	// Line 416, Address: 0x10268b0, Func Offset: 0x50
	// Line 417, Address: 0x10268bc, Func Offset: 0x5c
	// Line 418, Address: 0x10268c0, Func Offset: 0x60
	// Line 419, Address: 0x10268dc, Func Offset: 0x7c
	// Line 421, Address: 0x1026910, Func Offset: 0xb0
	// Line 422, Address: 0x102691c, Func Offset: 0xbc
	// Line 423, Address: 0x1026928, Func Offset: 0xc8
	// Line 424, Address: 0x102692c, Func Offset: 0xcc
	// Line 427, Address: 0x1026948, Func Offset: 0xe8
	// Func End, Address: 0x1026960, Func Offset: 0x100
}

// 
// Start address: 0x1026960
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 430, Address: 0x1026960, Func Offset: 0
	// Line 431, Address: 0x1026968, Func Offset: 0x8
	// Line 432, Address: 0x1026980, Func Offset: 0x20
	// Line 433, Address: 0x1026994, Func Offset: 0x34
	// Line 434, Address: 0x102699c, Func Offset: 0x3c
	// Line 435, Address: 0x10269b4, Func Offset: 0x54
	// Line 436, Address: 0x10269c4, Func Offset: 0x64
	// Line 437, Address: 0x10269cc, Func Offset: 0x6c
	// Line 438, Address: 0x10269e4, Func Offset: 0x84
	// Line 442, Address: 0x10269f4, Func Offset: 0x94
	// Func End, Address: 0x1026a00, Func Offset: 0xa0
}

// 
// Start address: 0x1026a00
void colorset(int ColorNo)
{
	// Line 445, Address: 0x1026a00, Func Offset: 0
	// Line 446, Address: 0x1026a0c, Func Offset: 0xc
	// Line 447, Address: 0x1026a1c, Func Offset: 0x1c
	// Func End, Address: 0x1026a2c, Func Offset: 0x2c
}

// 
// Start address: 0x1026a30
void colorset2(int ColorNo)
{
	// Line 449, Address: 0x1026a30, Func Offset: 0
	// Line 450, Address: 0x1026a3c, Func Offset: 0xc
	// Line 451, Address: 0x1026a4c, Func Offset: 0x1c
	// Func End, Address: 0x1026a5c, Func Offset: 0x2c
}

// 
// Start address: 0x1026a60
void colorset3(int ColorNo)
{
	// Line 453, Address: 0x1026a60, Func Offset: 0
	// Line 454, Address: 0x1026a6c, Func Offset: 0xc
	// Line 455, Address: 0x1026a7c, Func Offset: 0x1c
	// Func End, Address: 0x1026a8c, Func Offset: 0x2c
}

// 
// Start address: 0x1026a90
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 461, Address: 0x1026a90, Func Offset: 0
	// Line 466, Address: 0x1026ab0, Func Offset: 0x20
	// Line 468, Address: 0x1026b18, Func Offset: 0x88
	// Line 470, Address: 0x1026b28, Func Offset: 0x98
	// Line 472, Address: 0x1026b38, Func Offset: 0xa8
	// Line 474, Address: 0x1026b48, Func Offset: 0xb8
	// Line 477, Address: 0x1026b50, Func Offset: 0xc0
	// Line 478, Address: 0x1026b68, Func Offset: 0xd8
	// Line 479, Address: 0x1026b90, Func Offset: 0x100
	// Line 480, Address: 0x1026bb0, Func Offset: 0x120
	// Line 481, Address: 0x1026bbc, Func Offset: 0x12c
	// Line 482, Address: 0x1026bec, Func Offset: 0x15c
	// Line 484, Address: 0x1026bfc, Func Offset: 0x16c
	// Func End, Address: 0x1026c1c, Func Offset: 0x18c
}

// 
// Start address: 0x1026c20
int FadeProc()
{
	// Line 489, Address: 0x1026c20, Func Offset: 0
	// Line 490, Address: 0x1026c28, Func Offset: 0x8
	// Line 492, Address: 0x1026c6c, Func Offset: 0x4c
	// Line 494, Address: 0x1026c7c, Func Offset: 0x5c
	// Line 496, Address: 0x1026c8c, Func Offset: 0x6c
	// Line 498, Address: 0x1026c9c, Func Offset: 0x7c
	// Line 500, Address: 0x1026cac, Func Offset: 0x8c
	// Line 502, Address: 0x1026cb0, Func Offset: 0x90
	// Func End, Address: 0x1026cc0, Func Offset: 0xa0
}

