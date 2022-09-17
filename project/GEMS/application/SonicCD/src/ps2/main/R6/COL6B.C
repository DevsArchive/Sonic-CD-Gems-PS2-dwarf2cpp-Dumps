typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[3];
typedef tagPALETTEENTRY type_1[3];
typedef tagPALETTEENTRY type_2[48];
typedef tagPALETTEENTRY type_3[3];
typedef unsigned char type_4[7];
typedef unsigned char type_5[7];
typedef tagPALETTEENTRY type_6[48];
typedef tagPALETTEENTRY type_7[16];
typedef tagPALETTEENTRY type_8[64];
typedef unsigned char type_9[124];
typedef unsigned char type_10[8];
typedef unsigned char type_11[8];
typedef unsigned char type_12[8];
typedef _anon0 type_13[6];
typedef tagPALETTEENTRY type_14[48];
typedef tagPALETTEENTRY type_15[64];
typedef tagPALETTEENTRY type_16[4];

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

tagPALETTEENTRY zone3colora[48];
unsigned char col6a0cnt[8];
tagPALETTEENTRY col6a0col[3];
unsigned char col6a1cnt[8];
tagPALETTEENTRY col6a1col[3];
unsigned char col6a2cnt[8];
tagPALETTEENTRY col6a2col[3];
unsigned char col6a3cnt[124];
tagPALETTEENTRY col6a3col[4];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY zone82colora[48];
_anon0 colortbl[6];
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
void colchg6b();
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
// Start address: 0x1029f40
void clchgctr()
{
	// Line 132, Address: 0x1029f40, Func Offset: 0
	// Line 133, Address: 0x1029f48, Func Offset: 0x8
	// Line 134, Address: 0x1029f50, Func Offset: 0x10
	// Func End, Address: 0x1029f60, Func Offset: 0x20
}

// 
// Start address: 0x1029f60
void colchg6b()
{
	// Line 136, Address: 0x1029f60, Func Offset: 0
	// Line 137, Address: 0x1029f68, Func Offset: 0x8
	// Line 138, Address: 0x1029f90, Func Offset: 0x30
	// Line 139, Address: 0x1029fb8, Func Offset: 0x58
	// Line 140, Address: 0x1029fe0, Func Offset: 0x80
	// Line 142, Address: 0x102a008, Func Offset: 0xa8
	// Func End, Address: 0x102a018, Func Offset: 0xb8
}

// 
// Start address: 0x102a020
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 152, Address: 0x102a020, Func Offset: 0
	// Line 155, Address: 0x102a038, Func Offset: 0x18
	// Line 156, Address: 0x102a04c, Func Offset: 0x2c
	// Line 158, Address: 0x102a06c, Func Offset: 0x4c
	// Line 159, Address: 0x102a090, Func Offset: 0x70
	// Line 160, Address: 0x102a0a4, Func Offset: 0x84
	// Line 162, Address: 0x102a0d0, Func Offset: 0xb0
	// Line 165, Address: 0x102a0d8, Func Offset: 0xb8
	// Line 166, Address: 0x102a0f4, Func Offset: 0xd4
	// Line 167, Address: 0x102a104, Func Offset: 0xe4
	// Line 174, Address: 0x102a13c, Func Offset: 0x11c
	// Func End, Address: 0x102a14c, Func Offset: 0x12c
}

// 
// Start address: 0x102a150
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 177, Address: 0x102a150, Func Offset: 0
	// Line 181, Address: 0x102a15c, Func Offset: 0xc
	// Line 183, Address: 0x102a190, Func Offset: 0x40
	// Line 184, Address: 0x102a19c, Func Offset: 0x4c
	// Line 185, Address: 0x102a1a0, Func Offset: 0x50
	// Line 186, Address: 0x102a1a4, Func Offset: 0x54
	// Line 187, Address: 0x102a1a8, Func Offset: 0x58
	// Line 188, Address: 0x102a1b0, Func Offset: 0x60
	// Line 189, Address: 0x102a1b4, Func Offset: 0x64
	// Line 190, Address: 0x102a1d0, Func Offset: 0x80
	// Line 191, Address: 0x102a1d8, Func Offset: 0x88
	// Line 193, Address: 0x102a1e8, Func Offset: 0x98
	// Func End, Address: 0x102a1fc, Func Offset: 0xac
}

// 
// Start address: 0x102a200
int fadein0_new()
{
	// Line 197, Address: 0x102a200, Func Offset: 0
	// Line 199, Address: 0x102a208, Func Offset: 0x8
	// Line 201, Address: 0x102a214, Func Offset: 0x14
	// Line 204, Address: 0x102a21c, Func Offset: 0x1c
	// Line 205, Address: 0x102a23c, Func Offset: 0x3c
	// Line 206, Address: 0x102a244, Func Offset: 0x44
	// Line 208, Address: 0x102a250, Func Offset: 0x50
	// Line 209, Address: 0x102a254, Func Offset: 0x54
	// Func End, Address: 0x102a264, Func Offset: 0x64
}

// 
// Start address: 0x102a270
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 213, Address: 0x102a270, Func Offset: 0
	// Line 217, Address: 0x102a284, Func Offset: 0x14
	// Line 218, Address: 0x102a2b8, Func Offset: 0x48
	// Line 220, Address: 0x102a2ec, Func Offset: 0x7c
	// Line 221, Address: 0x102a2f8, Func Offset: 0x88
	// Line 222, Address: 0x102a308, Func Offset: 0x98
	// Line 223, Address: 0x102a30c, Func Offset: 0x9c
	// Line 224, Address: 0x102a310, Func Offset: 0xa0
	// Line 225, Address: 0x102a32c, Func Offset: 0xbc
	// Line 227, Address: 0x102a348, Func Offset: 0xd8
	// Line 228, Address: 0x102a37c, Func Offset: 0x10c
	// Line 230, Address: 0x102a3b0, Func Offset: 0x140
	// Line 231, Address: 0x102a3bc, Func Offset: 0x14c
	// Line 232, Address: 0x102a3cc, Func Offset: 0x15c
	// Line 233, Address: 0x102a3d0, Func Offset: 0x160
	// Line 234, Address: 0x102a3d4, Func Offset: 0x164
	// Line 238, Address: 0x102a3f0, Func Offset: 0x180
	// Func End, Address: 0x102a40c, Func Offset: 0x19c
}

// 
// Start address: 0x102a410
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 242, Address: 0x102a410, Func Offset: 0
	// Line 243, Address: 0x102a41c, Func Offset: 0xc
	// Line 246, Address: 0x102a47c, Func Offset: 0x6c
	// Line 247, Address: 0x102a4a0, Func Offset: 0x90
	// Line 248, Address: 0x102a4b0, Func Offset: 0xa0
	// Line 249, Address: 0x102a4b8, Func Offset: 0xa8
	// Line 250, Address: 0x102a4dc, Func Offset: 0xcc
	// Line 251, Address: 0x102a4ec, Func Offset: 0xdc
	// Line 252, Address: 0x102a4f4, Func Offset: 0xe4
	// Line 253, Address: 0x102a518, Func Offset: 0x108
	// Line 257, Address: 0x102a52c, Func Offset: 0x11c
	// Func End, Address: 0x102a538, Func Offset: 0x128
}

// 
// Start address: 0x102a540
void fadeout()
{
	// Line 261, Address: 0x102a540, Func Offset: 0
	// Line 262, Address: 0x102a548, Func Offset: 0x8
	// Line 264, Address: 0x102a554, Func Offset: 0x14
	// Line 265, Address: 0x102a55c, Func Offset: 0x1c
	// Line 267, Address: 0x102a56c, Func Offset: 0x2c
	// Func End, Address: 0x102a574, Func Offset: 0x34
}

// 
// Start address: 0x102a580
int fadeout_new()
{
	// Line 271, Address: 0x102a580, Func Offset: 0
	// Line 273, Address: 0x102a588, Func Offset: 0x8
	// Line 275, Address: 0x102a594, Func Offset: 0x14
	// Line 278, Address: 0x102a59c, Func Offset: 0x1c
	// Line 279, Address: 0x102a5bc, Func Offset: 0x3c
	// Line 280, Address: 0x102a5c4, Func Offset: 0x44
	// Line 282, Address: 0x102a5d0, Func Offset: 0x50
	// Line 283, Address: 0x102a5d4, Func Offset: 0x54
	// Func End, Address: 0x102a5e4, Func Offset: 0x64
}

// 
// Start address: 0x102a5f0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 286, Address: 0x102a5f0, Func Offset: 0
	// Line 290, Address: 0x102a600, Func Offset: 0x10
	// Line 292, Address: 0x102a634, Func Offset: 0x44
	// Line 293, Address: 0x102a640, Func Offset: 0x50
	// Line 294, Address: 0x102a64c, Func Offset: 0x5c
	// Line 295, Address: 0x102a650, Func Offset: 0x60
	// Line 296, Address: 0x102a66c, Func Offset: 0x7c
	// Line 298, Address: 0x102a6a0, Func Offset: 0xb0
	// Line 299, Address: 0x102a6ac, Func Offset: 0xbc
	// Line 300, Address: 0x102a6b8, Func Offset: 0xc8
	// Line 301, Address: 0x102a6bc, Func Offset: 0xcc
	// Line 304, Address: 0x102a6d8, Func Offset: 0xe8
	// Func End, Address: 0x102a6f0, Func Offset: 0x100
}

// 
// Start address: 0x102a6f0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 307, Address: 0x102a6f0, Func Offset: 0
	// Line 308, Address: 0x102a6f8, Func Offset: 0x8
	// Line 309, Address: 0x102a708, Func Offset: 0x18
	// Line 310, Address: 0x102a71c, Func Offset: 0x2c
	// Line 311, Address: 0x102a724, Func Offset: 0x34
	// Line 312, Address: 0x102a734, Func Offset: 0x44
	// Line 313, Address: 0x102a744, Func Offset: 0x54
	// Line 314, Address: 0x102a74c, Func Offset: 0x5c
	// Line 315, Address: 0x102a75c, Func Offset: 0x6c
	// Line 318, Address: 0x102a76c, Func Offset: 0x7c
	// Func End, Address: 0x102a778, Func Offset: 0x88
}

// 
// Start address: 0x102a780
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 323, Address: 0x102a780, Func Offset: 0
	// Line 327, Address: 0x102a78c, Func Offset: 0xc
	// Line 328, Address: 0x102a794, Func Offset: 0x14
	// Line 330, Address: 0x102a7a0, Func Offset: 0x20
	// Line 332, Address: 0x102a7d4, Func Offset: 0x54
	// Line 333, Address: 0x102a7e0, Func Offset: 0x60
	// Line 334, Address: 0x102a7e8, Func Offset: 0x68
	// Line 335, Address: 0x102a7f0, Func Offset: 0x70
	// Line 336, Address: 0x102a7f8, Func Offset: 0x78
	// Line 337, Address: 0x102a800, Func Offset: 0x80
	// Line 338, Address: 0x102a804, Func Offset: 0x84
	// Line 339, Address: 0x102a820, Func Offset: 0xa0
	// Line 340, Address: 0x102a828, Func Offset: 0xa8
	// Line 342, Address: 0x102a838, Func Offset: 0xb8
	// Func End, Address: 0x102a84c, Func Offset: 0xcc
}

// 
// Start address: 0x102a850
int flashin_new()
{
	// Line 344, Address: 0x102a850, Func Offset: 0
	// Line 346, Address: 0x102a858, Func Offset: 0x8
	// Line 348, Address: 0x102a864, Func Offset: 0x14
	// Line 351, Address: 0x102a86c, Func Offset: 0x1c
	// Line 352, Address: 0x102a88c, Func Offset: 0x3c
	// Line 353, Address: 0x102a894, Func Offset: 0x44
	// Line 355, Address: 0x102a8a0, Func Offset: 0x50
	// Line 356, Address: 0x102a8a4, Func Offset: 0x54
	// Func End, Address: 0x102a8b4, Func Offset: 0x64
}

// 
// Start address: 0x102a8c0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 358, Address: 0x102a8c0, Func Offset: 0
	// Line 362, Address: 0x102a8d4, Func Offset: 0x14
	// Line 363, Address: 0x102a908, Func Offset: 0x48
	// Line 365, Address: 0x102a93c, Func Offset: 0x7c
	// Line 366, Address: 0x102a948, Func Offset: 0x88
	// Line 367, Address: 0x102a958, Func Offset: 0x98
	// Line 368, Address: 0x102a95c, Func Offset: 0x9c
	// Line 369, Address: 0x102a960, Func Offset: 0xa0
	// Line 370, Address: 0x102a97c, Func Offset: 0xbc
	// Line 372, Address: 0x102a998, Func Offset: 0xd8
	// Line 373, Address: 0x102a9cc, Func Offset: 0x10c
	// Line 375, Address: 0x102aa00, Func Offset: 0x140
	// Line 376, Address: 0x102aa0c, Func Offset: 0x14c
	// Line 377, Address: 0x102aa1c, Func Offset: 0x15c
	// Line 378, Address: 0x102aa20, Func Offset: 0x160
	// Line 379, Address: 0x102aa24, Func Offset: 0x164
	// Line 383, Address: 0x102aa40, Func Offset: 0x180
	// Func End, Address: 0x102aa5c, Func Offset: 0x19c
}

// 
// Start address: 0x102aa60
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 387, Address: 0x102aa60, Func Offset: 0
	// Line 388, Address: 0x102aa6c, Func Offset: 0xc
	// Line 391, Address: 0x102aacc, Func Offset: 0x6c
	// Line 392, Address: 0x102aaf0, Func Offset: 0x90
	// Line 393, Address: 0x102ab00, Func Offset: 0xa0
	// Line 394, Address: 0x102ab08, Func Offset: 0xa8
	// Line 395, Address: 0x102ab2c, Func Offset: 0xcc
	// Line 396, Address: 0x102ab3c, Func Offset: 0xdc
	// Line 397, Address: 0x102ab44, Func Offset: 0xe4
	// Line 398, Address: 0x102ab68, Func Offset: 0x108
	// Line 402, Address: 0x102ab7c, Func Offset: 0x11c
	// Func End, Address: 0x102ab88, Func Offset: 0x128
}

// 
// Start address: 0x102ab90
void flashout()
{
	// Line 406, Address: 0x102ab90, Func Offset: 0
	// Line 407, Address: 0x102ab98, Func Offset: 0x8
	// Line 409, Address: 0x102aba4, Func Offset: 0x14
	// Line 410, Address: 0x102abac, Func Offset: 0x1c
	// Line 412, Address: 0x102abbc, Func Offset: 0x2c
	// Func End, Address: 0x102abc4, Func Offset: 0x34
}

// 
// Start address: 0x102abd0
int flashout_new()
{
	// Line 414, Address: 0x102abd0, Func Offset: 0
	// Line 416, Address: 0x102abd8, Func Offset: 0x8
	// Line 418, Address: 0x102abe4, Func Offset: 0x14
	// Line 421, Address: 0x102abec, Func Offset: 0x1c
	// Line 422, Address: 0x102ac0c, Func Offset: 0x3c
	// Line 423, Address: 0x102ac14, Func Offset: 0x44
	// Line 425, Address: 0x102ac20, Func Offset: 0x50
	// Line 426, Address: 0x102ac24, Func Offset: 0x54
	// Func End, Address: 0x102ac34, Func Offset: 0x64
}

// 
// Start address: 0x102ac40
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 429, Address: 0x102ac40, Func Offset: 0
	// Line 433, Address: 0x102ac50, Func Offset: 0x10
	// Line 435, Address: 0x102ac84, Func Offset: 0x44
	// Line 436, Address: 0x102ac90, Func Offset: 0x50
	// Line 437, Address: 0x102ac9c, Func Offset: 0x5c
	// Line 438, Address: 0x102aca0, Func Offset: 0x60
	// Line 439, Address: 0x102acbc, Func Offset: 0x7c
	// Line 441, Address: 0x102acf0, Func Offset: 0xb0
	// Line 442, Address: 0x102acfc, Func Offset: 0xbc
	// Line 443, Address: 0x102ad08, Func Offset: 0xc8
	// Line 444, Address: 0x102ad0c, Func Offset: 0xcc
	// Line 447, Address: 0x102ad28, Func Offset: 0xe8
	// Func End, Address: 0x102ad40, Func Offset: 0x100
}

// 
// Start address: 0x102ad40
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 450, Address: 0x102ad40, Func Offset: 0
	// Line 451, Address: 0x102ad48, Func Offset: 0x8
	// Line 452, Address: 0x102ad60, Func Offset: 0x20
	// Line 453, Address: 0x102ad74, Func Offset: 0x34
	// Line 454, Address: 0x102ad7c, Func Offset: 0x3c
	// Line 455, Address: 0x102ad94, Func Offset: 0x54
	// Line 456, Address: 0x102ada4, Func Offset: 0x64
	// Line 457, Address: 0x102adac, Func Offset: 0x6c
	// Line 458, Address: 0x102adc4, Func Offset: 0x84
	// Line 462, Address: 0x102add4, Func Offset: 0x94
	// Func End, Address: 0x102ade0, Func Offset: 0xa0
}

// 
// Start address: 0x102ade0
void colorset(int ColorNo)
{
	// Line 465, Address: 0x102ade0, Func Offset: 0
	// Line 466, Address: 0x102adec, Func Offset: 0xc
	// Line 467, Address: 0x102adfc, Func Offset: 0x1c
	// Func End, Address: 0x102ae0c, Func Offset: 0x2c
}

// 
// Start address: 0x102ae10
void colorset2(int ColorNo)
{
	// Line 469, Address: 0x102ae10, Func Offset: 0
	// Line 470, Address: 0x102ae1c, Func Offset: 0xc
	// Line 471, Address: 0x102ae2c, Func Offset: 0x1c
	// Func End, Address: 0x102ae3c, Func Offset: 0x2c
}

// 
// Start address: 0x102ae40
void colorset3(int ColorNo)
{
	// Line 473, Address: 0x102ae40, Func Offset: 0
	// Line 474, Address: 0x102ae4c, Func Offset: 0xc
	// Line 475, Address: 0x102ae5c, Func Offset: 0x1c
	// Func End, Address: 0x102ae6c, Func Offset: 0x2c
}

// 
// Start address: 0x102ae70
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 481, Address: 0x102ae70, Func Offset: 0
	// Line 486, Address: 0x102ae90, Func Offset: 0x20
	// Line 488, Address: 0x102aef8, Func Offset: 0x88
	// Line 490, Address: 0x102af08, Func Offset: 0x98
	// Line 492, Address: 0x102af18, Func Offset: 0xa8
	// Line 494, Address: 0x102af28, Func Offset: 0xb8
	// Line 497, Address: 0x102af30, Func Offset: 0xc0
	// Line 498, Address: 0x102af48, Func Offset: 0xd8
	// Line 499, Address: 0x102af70, Func Offset: 0x100
	// Line 500, Address: 0x102af90, Func Offset: 0x120
	// Line 501, Address: 0x102af9c, Func Offset: 0x12c
	// Line 502, Address: 0x102afcc, Func Offset: 0x15c
	// Line 504, Address: 0x102afdc, Func Offset: 0x16c
	// Func End, Address: 0x102affc, Func Offset: 0x18c
}

// 
// Start address: 0x102b000
int FadeProc()
{
	// Line 509, Address: 0x102b000, Func Offset: 0
	// Line 510, Address: 0x102b008, Func Offset: 0x8
	// Line 512, Address: 0x102b04c, Func Offset: 0x4c
	// Line 514, Address: 0x102b05c, Func Offset: 0x5c
	// Line 516, Address: 0x102b06c, Func Offset: 0x6c
	// Line 518, Address: 0x102b07c, Func Offset: 0x7c
	// Line 520, Address: 0x102b08c, Func Offset: 0x8c
	// Line 522, Address: 0x102b090, Func Offset: 0x90
	// Func End, Address: 0x102b0a0, Func Offset: 0xa0
}

