typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef _anon0 type_0[5];
typedef tagPALETTEENTRY type_1[3];
typedef tagPALETTEENTRY type_2[16];
typedef unsigned char type_3[8];
typedef tagPALETTEENTRY type_4[64];
typedef unsigned char type_5[7];
typedef unsigned char type_6[7];
typedef tagPALETTEENTRY type_7[48];
typedef unsigned char type_8[8];
typedef tagPALETTEENTRY type_9[64];
typedef unsigned char type_10[8];

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

tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone4colora[48];
_anon0 colortbl[5];
unsigned char col4b0cnt[8];
unsigned char col4b1cnt[8];
unsigned char col4b2cnt[8];
tagPALETTEENTRY col4b0col[3];
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
_anon1 stageno;
tagPALETTEENTRY* lpcolorwk;
int* lpFadeFlag;
int FadeCount;
unsigned char colorcnt;
unsigned char startcolor;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
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
// Start address: 0x1001b10
void clchgctr()
{
	// Line 121, Address: 0x1001b10, Func Offset: 0
	// Line 122, Address: 0x1001b18, Func Offset: 0x8
	// Line 124, Address: 0x1001b28, Func Offset: 0x18
	// Line 125, Address: 0x1001b50, Func Offset: 0x40
	// Line 126, Address: 0x1001b78, Func Offset: 0x68
	// Line 128, Address: 0x1001ba0, Func Offset: 0x90
	// Func End, Address: 0x1001bb0, Func Offset: 0xa0
}

// 
// Start address: 0x1001bb0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 136, Address: 0x1001bb0, Func Offset: 0
	// Line 139, Address: 0x1001bc8, Func Offset: 0x18
	// Line 140, Address: 0x1001bdc, Func Offset: 0x2c
	// Line 141, Address: 0x1001bfc, Func Offset: 0x4c
	// Line 142, Address: 0x1001c20, Func Offset: 0x70
	// Line 143, Address: 0x1001c34, Func Offset: 0x84
	// Line 144, Address: 0x1001c60, Func Offset: 0xb0
	// Line 147, Address: 0x1001c68, Func Offset: 0xb8
	// Line 148, Address: 0x1001c84, Func Offset: 0xd4
	// Line 149, Address: 0x1001c94, Func Offset: 0xe4
	// Line 156, Address: 0x1001ccc, Func Offset: 0x11c
	// Func End, Address: 0x1001cdc, Func Offset: 0x12c
}

// 
// Start address: 0x1001ce0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 159, Address: 0x1001ce0, Func Offset: 0
	// Line 163, Address: 0x1001cec, Func Offset: 0xc
	// Line 165, Address: 0x1001d20, Func Offset: 0x40
	// Line 166, Address: 0x1001d2c, Func Offset: 0x4c
	// Line 167, Address: 0x1001d30, Func Offset: 0x50
	// Line 168, Address: 0x1001d34, Func Offset: 0x54
	// Line 169, Address: 0x1001d38, Func Offset: 0x58
	// Line 170, Address: 0x1001d40, Func Offset: 0x60
	// Line 171, Address: 0x1001d44, Func Offset: 0x64
	// Line 172, Address: 0x1001d60, Func Offset: 0x80
	// Line 173, Address: 0x1001d68, Func Offset: 0x88
	// Line 175, Address: 0x1001d78, Func Offset: 0x98
	// Func End, Address: 0x1001d8c, Func Offset: 0xac
}

// 
// Start address: 0x1001d90
int fadein0_new()
{
	// Line 179, Address: 0x1001d90, Func Offset: 0
	// Line 181, Address: 0x1001d98, Func Offset: 0x8
	// Line 183, Address: 0x1001da4, Func Offset: 0x14
	// Line 186, Address: 0x1001dac, Func Offset: 0x1c
	// Line 187, Address: 0x1001dcc, Func Offset: 0x3c
	// Line 188, Address: 0x1001dd4, Func Offset: 0x44
	// Line 190, Address: 0x1001de0, Func Offset: 0x50
	// Line 191, Address: 0x1001de4, Func Offset: 0x54
	// Func End, Address: 0x1001df4, Func Offset: 0x64
}

// 
// Start address: 0x1001e00
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 194, Address: 0x1001e00, Func Offset: 0
	// Line 198, Address: 0x1001e14, Func Offset: 0x14
	// Line 199, Address: 0x1001e48, Func Offset: 0x48
	// Line 201, Address: 0x1001e7c, Func Offset: 0x7c
	// Line 202, Address: 0x1001e88, Func Offset: 0x88
	// Line 203, Address: 0x1001e98, Func Offset: 0x98
	// Line 204, Address: 0x1001e9c, Func Offset: 0x9c
	// Line 205, Address: 0x1001ea0, Func Offset: 0xa0
	// Line 206, Address: 0x1001ebc, Func Offset: 0xbc
	// Line 208, Address: 0x1001ed8, Func Offset: 0xd8
	// Line 209, Address: 0x1001f0c, Func Offset: 0x10c
	// Line 211, Address: 0x1001f40, Func Offset: 0x140
	// Line 212, Address: 0x1001f4c, Func Offset: 0x14c
	// Line 213, Address: 0x1001f5c, Func Offset: 0x15c
	// Line 214, Address: 0x1001f60, Func Offset: 0x160
	// Line 215, Address: 0x1001f64, Func Offset: 0x164
	// Line 219, Address: 0x1001f80, Func Offset: 0x180
	// Func End, Address: 0x1001f9c, Func Offset: 0x19c
}

// 
// Start address: 0x1001fa0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 224, Address: 0x1001fa0, Func Offset: 0
	// Line 225, Address: 0x1001fac, Func Offset: 0xc
	// Line 228, Address: 0x100200c, Func Offset: 0x6c
	// Line 229, Address: 0x1002030, Func Offset: 0x90
	// Line 230, Address: 0x1002040, Func Offset: 0xa0
	// Line 231, Address: 0x1002048, Func Offset: 0xa8
	// Line 232, Address: 0x100206c, Func Offset: 0xcc
	// Line 233, Address: 0x100207c, Func Offset: 0xdc
	// Line 234, Address: 0x1002084, Func Offset: 0xe4
	// Line 235, Address: 0x10020a8, Func Offset: 0x108
	// Line 239, Address: 0x10020bc, Func Offset: 0x11c
	// Func End, Address: 0x10020c8, Func Offset: 0x128
}

// 
// Start address: 0x10020d0
void fadeout()
{
	// Line 243, Address: 0x10020d0, Func Offset: 0
	// Line 244, Address: 0x10020d8, Func Offset: 0x8
	// Line 246, Address: 0x10020e4, Func Offset: 0x14
	// Line 247, Address: 0x10020ec, Func Offset: 0x1c
	// Line 249, Address: 0x10020fc, Func Offset: 0x2c
	// Func End, Address: 0x1002104, Func Offset: 0x34
}

// 
// Start address: 0x1002110
int fadeout_new()
{
	// Line 253, Address: 0x1002110, Func Offset: 0
	// Line 255, Address: 0x1002118, Func Offset: 0x8
	// Line 257, Address: 0x1002124, Func Offset: 0x14
	// Line 260, Address: 0x100212c, Func Offset: 0x1c
	// Line 261, Address: 0x100214c, Func Offset: 0x3c
	// Line 262, Address: 0x1002154, Func Offset: 0x44
	// Line 264, Address: 0x1002160, Func Offset: 0x50
	// Line 265, Address: 0x1002164, Func Offset: 0x54
	// Func End, Address: 0x1002174, Func Offset: 0x64
}

// 
// Start address: 0x1002180
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 268, Address: 0x1002180, Func Offset: 0
	// Line 272, Address: 0x1002190, Func Offset: 0x10
	// Line 274, Address: 0x10021c4, Func Offset: 0x44
	// Line 275, Address: 0x10021d0, Func Offset: 0x50
	// Line 276, Address: 0x10021dc, Func Offset: 0x5c
	// Line 277, Address: 0x10021e0, Func Offset: 0x60
	// Line 278, Address: 0x10021fc, Func Offset: 0x7c
	// Line 280, Address: 0x1002230, Func Offset: 0xb0
	// Line 281, Address: 0x100223c, Func Offset: 0xbc
	// Line 282, Address: 0x1002248, Func Offset: 0xc8
	// Line 283, Address: 0x100224c, Func Offset: 0xcc
	// Line 286, Address: 0x1002268, Func Offset: 0xe8
	// Func End, Address: 0x1002280, Func Offset: 0x100
}

// 
// Start address: 0x1002280
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 290, Address: 0x1002280, Func Offset: 0
	// Line 291, Address: 0x1002288, Func Offset: 0x8
	// Line 292, Address: 0x1002298, Func Offset: 0x18
	// Line 293, Address: 0x10022ac, Func Offset: 0x2c
	// Line 294, Address: 0x10022b4, Func Offset: 0x34
	// Line 295, Address: 0x10022c4, Func Offset: 0x44
	// Line 296, Address: 0x10022d4, Func Offset: 0x54
	// Line 297, Address: 0x10022dc, Func Offset: 0x5c
	// Line 298, Address: 0x10022ec, Func Offset: 0x6c
	// Line 301, Address: 0x10022fc, Func Offset: 0x7c
	// Func End, Address: 0x1002308, Func Offset: 0x88
}

// 
// Start address: 0x1002310
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 304, Address: 0x1002310, Func Offset: 0
	// Line 308, Address: 0x100231c, Func Offset: 0xc
	// Line 309, Address: 0x1002324, Func Offset: 0x14
	// Line 311, Address: 0x1002330, Func Offset: 0x20
	// Line 313, Address: 0x1002364, Func Offset: 0x54
	// Line 314, Address: 0x1002370, Func Offset: 0x60
	// Line 315, Address: 0x1002378, Func Offset: 0x68
	// Line 316, Address: 0x1002380, Func Offset: 0x70
	// Line 317, Address: 0x1002388, Func Offset: 0x78
	// Line 318, Address: 0x1002390, Func Offset: 0x80
	// Line 319, Address: 0x1002394, Func Offset: 0x84
	// Line 320, Address: 0x10023b0, Func Offset: 0xa0
	// Line 321, Address: 0x10023b8, Func Offset: 0xa8
	// Line 323, Address: 0x10023c8, Func Offset: 0xb8
	// Func End, Address: 0x10023dc, Func Offset: 0xcc
}

// 
// Start address: 0x10023e0
int flashin_new()
{
	// Line 326, Address: 0x10023e0, Func Offset: 0
	// Line 328, Address: 0x10023e8, Func Offset: 0x8
	// Line 330, Address: 0x10023f4, Func Offset: 0x14
	// Line 333, Address: 0x10023fc, Func Offset: 0x1c
	// Line 334, Address: 0x100241c, Func Offset: 0x3c
	// Line 335, Address: 0x1002424, Func Offset: 0x44
	// Line 337, Address: 0x1002430, Func Offset: 0x50
	// Line 338, Address: 0x1002434, Func Offset: 0x54
	// Func End, Address: 0x1002444, Func Offset: 0x64
}

// 
// Start address: 0x1002450
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 341, Address: 0x1002450, Func Offset: 0
	// Line 345, Address: 0x1002464, Func Offset: 0x14
	// Line 346, Address: 0x1002498, Func Offset: 0x48
	// Line 348, Address: 0x10024cc, Func Offset: 0x7c
	// Line 349, Address: 0x10024d8, Func Offset: 0x88
	// Line 350, Address: 0x10024e8, Func Offset: 0x98
	// Line 351, Address: 0x10024ec, Func Offset: 0x9c
	// Line 352, Address: 0x10024f0, Func Offset: 0xa0
	// Line 353, Address: 0x100250c, Func Offset: 0xbc
	// Line 355, Address: 0x1002528, Func Offset: 0xd8
	// Line 356, Address: 0x100255c, Func Offset: 0x10c
	// Line 358, Address: 0x1002590, Func Offset: 0x140
	// Line 359, Address: 0x100259c, Func Offset: 0x14c
	// Line 360, Address: 0x10025ac, Func Offset: 0x15c
	// Line 361, Address: 0x10025b0, Func Offset: 0x160
	// Line 362, Address: 0x10025b4, Func Offset: 0x164
	// Line 366, Address: 0x10025d0, Func Offset: 0x180
	// Func End, Address: 0x10025ec, Func Offset: 0x19c
}

// 
// Start address: 0x10025f0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 370, Address: 0x10025f0, Func Offset: 0
	// Line 371, Address: 0x10025fc, Func Offset: 0xc
	// Line 374, Address: 0x100265c, Func Offset: 0x6c
	// Line 375, Address: 0x1002680, Func Offset: 0x90
	// Line 376, Address: 0x1002690, Func Offset: 0xa0
	// Line 377, Address: 0x1002698, Func Offset: 0xa8
	// Line 378, Address: 0x10026bc, Func Offset: 0xcc
	// Line 379, Address: 0x10026cc, Func Offset: 0xdc
	// Line 380, Address: 0x10026d4, Func Offset: 0xe4
	// Line 381, Address: 0x10026f8, Func Offset: 0x108
	// Line 385, Address: 0x100270c, Func Offset: 0x11c
	// Func End, Address: 0x1002718, Func Offset: 0x128
}

// 
// Start address: 0x1002720
void flashout()
{
	// Line 389, Address: 0x1002720, Func Offset: 0
	// Line 390, Address: 0x1002728, Func Offset: 0x8
	// Line 392, Address: 0x1002734, Func Offset: 0x14
	// Line 393, Address: 0x100273c, Func Offset: 0x1c
	// Line 395, Address: 0x100274c, Func Offset: 0x2c
	// Func End, Address: 0x1002754, Func Offset: 0x34
}

// 
// Start address: 0x1002760
int flashout_new()
{
	// Line 398, Address: 0x1002760, Func Offset: 0
	// Line 400, Address: 0x1002768, Func Offset: 0x8
	// Line 402, Address: 0x1002774, Func Offset: 0x14
	// Line 405, Address: 0x100277c, Func Offset: 0x1c
	// Line 406, Address: 0x100279c, Func Offset: 0x3c
	// Line 407, Address: 0x10027a4, Func Offset: 0x44
	// Line 409, Address: 0x10027b0, Func Offset: 0x50
	// Line 410, Address: 0x10027b4, Func Offset: 0x54
	// Func End, Address: 0x10027c4, Func Offset: 0x64
}

// 
// Start address: 0x10027d0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 413, Address: 0x10027d0, Func Offset: 0
	// Line 417, Address: 0x10027e0, Func Offset: 0x10
	// Line 419, Address: 0x1002814, Func Offset: 0x44
	// Line 420, Address: 0x1002820, Func Offset: 0x50
	// Line 421, Address: 0x100282c, Func Offset: 0x5c
	// Line 422, Address: 0x1002830, Func Offset: 0x60
	// Line 423, Address: 0x100284c, Func Offset: 0x7c
	// Line 425, Address: 0x1002880, Func Offset: 0xb0
	// Line 426, Address: 0x100288c, Func Offset: 0xbc
	// Line 427, Address: 0x1002898, Func Offset: 0xc8
	// Line 428, Address: 0x100289c, Func Offset: 0xcc
	// Line 431, Address: 0x10028b8, Func Offset: 0xe8
	// Func End, Address: 0x10028d0, Func Offset: 0x100
}

// 
// Start address: 0x10028d0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 435, Address: 0x10028d0, Func Offset: 0
	// Line 436, Address: 0x10028d8, Func Offset: 0x8
	// Line 437, Address: 0x10028f0, Func Offset: 0x20
	// Line 438, Address: 0x1002904, Func Offset: 0x34
	// Line 439, Address: 0x100290c, Func Offset: 0x3c
	// Line 440, Address: 0x1002924, Func Offset: 0x54
	// Line 441, Address: 0x1002934, Func Offset: 0x64
	// Line 442, Address: 0x100293c, Func Offset: 0x6c
	// Line 443, Address: 0x1002954, Func Offset: 0x84
	// Line 447, Address: 0x1002964, Func Offset: 0x94
	// Func End, Address: 0x1002970, Func Offset: 0xa0
}

// 
// Start address: 0x1002970
void colorset(int ColorNo)
{
	// Line 450, Address: 0x1002970, Func Offset: 0
	// Line 451, Address: 0x100297c, Func Offset: 0xc
	// Line 452, Address: 0x100298c, Func Offset: 0x1c
	// Func End, Address: 0x100299c, Func Offset: 0x2c
}

// 
// Start address: 0x10029a0
void colorset2(int ColorNo)
{
	// Line 454, Address: 0x10029a0, Func Offset: 0
	// Line 455, Address: 0x10029ac, Func Offset: 0xc
	// Line 456, Address: 0x10029bc, Func Offset: 0x1c
	// Func End, Address: 0x10029cc, Func Offset: 0x2c
}

// 
// Start address: 0x10029d0
void colorset3(int ColorNo)
{
	// Line 458, Address: 0x10029d0, Func Offset: 0
	// Line 459, Address: 0x10029dc, Func Offset: 0xc
	// Line 460, Address: 0x10029ec, Func Offset: 0x1c
	// Func End, Address: 0x10029fc, Func Offset: 0x2c
}

// 
// Start address: 0x1002a00
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 465, Address: 0x1002a00, Func Offset: 0
	// Line 470, Address: 0x1002a20, Func Offset: 0x20
	// Line 472, Address: 0x1002a88, Func Offset: 0x88
	// Line 474, Address: 0x1002a98, Func Offset: 0x98
	// Line 476, Address: 0x1002aa8, Func Offset: 0xa8
	// Line 478, Address: 0x1002ab8, Func Offset: 0xb8
	// Line 481, Address: 0x1002ac0, Func Offset: 0xc0
	// Line 482, Address: 0x1002ad8, Func Offset: 0xd8
	// Line 483, Address: 0x1002b00, Func Offset: 0x100
	// Line 484, Address: 0x1002b20, Func Offset: 0x120
	// Line 485, Address: 0x1002b2c, Func Offset: 0x12c
	// Line 486, Address: 0x1002b5c, Func Offset: 0x15c
	// Line 488, Address: 0x1002b6c, Func Offset: 0x16c
	// Func End, Address: 0x1002b8c, Func Offset: 0x18c
}

// 
// Start address: 0x1002b90
int FadeProc()
{
	// Line 491, Address: 0x1002b90, Func Offset: 0
	// Line 492, Address: 0x1002b98, Func Offset: 0x8
	// Line 494, Address: 0x1002bdc, Func Offset: 0x4c
	// Line 496, Address: 0x1002bec, Func Offset: 0x5c
	// Line 498, Address: 0x1002bfc, Func Offset: 0x6c
	// Line 500, Address: 0x1002c0c, Func Offset: 0x7c
	// Line 502, Address: 0x1002c1c, Func Offset: 0x8c
	// Line 504, Address: 0x1002c20, Func Offset: 0x90
	// Func End, Address: 0x1002c30, Func Offset: 0xa0
}

