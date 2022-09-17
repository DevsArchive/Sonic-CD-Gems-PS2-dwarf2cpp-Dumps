typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;


typedef _anon0 type_0[5];
typedef tagPALETTEENTRY type_1[5];
typedef tagPALETTEENTRY type_2[16];
typedef tagPALETTEENTRY type_3[4];
typedef tagPALETTEENTRY type_4[64];
typedef tagPALETTEENTRY type_5[4];
typedef unsigned char type_6[7];
typedef unsigned char type_7[10];
typedef unsigned char type_8[7];
typedef unsigned char type_9[10];
typedef unsigned char type_10[18];
typedef unsigned char type_11[18];
typedef unsigned char type_12[18];
typedef unsigned char type_13[18];
typedef tagPALETTEENTRY type_14[48];
typedef unsigned char type_15[18];
typedef tagPALETTEENTRY type_16[64];
typedef unsigned char type_17[18];
typedef unsigned char type_18[10];
typedef unsigned char type_19[10];
typedef tagPALETTEENTRY type_20[2];
typedef tagPALETTEENTRY type_21[2];
typedef tagPALETTEENTRY type_22[5];
typedef tagPALETTEENTRY type_23[4];

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
	int l;
	_anon2 w;
	_anon3 b;
};

struct _anon2
{
	short l;
	short h;
};

struct _anon3
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon4
{
	short w;
	_anon5 b;
};

struct _anon5
{
	char l;
	char h;
};

tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone4colora[48];
_anon0 colortbl[5];
unsigned char col4a0cnt[18];
tagPALETTEENTRY col4a0col[4];
unsigned char col4a1cnt[18];
tagPALETTEENTRY col4a1col[5];
unsigned char col4a2cnt[18];
tagPALETTEENTRY col4a2col[4];
unsigned char col4a3cnt[18];
tagPALETTEENTRY col4a3col[5];
unsigned char col4a4cnt[18];
tagPALETTEENTRY col4a4col[2];
unsigned char col4a5cnt[18];
tagPALETTEENTRY col4a5col[2];
unsigned char col4a6cnt[10];
unsigned char col4a7cnt[10];
unsigned char col4a8cnt[10];
unsigned char col4a9cnt[10];
tagPALETTEENTRY col4a6col[4];
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
_anon1 scra_v_posit;
_anon1 scra_h_posit;
_anon4 stageno;
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
// Start address: 0x1015640
void clchgctr()
{
	// Line 181, Address: 0x1015640, Func Offset: 0
	// Line 182, Address: 0x1015648, Func Offset: 0x8
	// Line 183, Address: 0x1015658, Func Offset: 0x18
	// Line 184, Address: 0x1015674, Func Offset: 0x34
	// Line 185, Address: 0x1015690, Func Offset: 0x50
	// Line 187, Address: 0x10156a8, Func Offset: 0x68
	// Line 188, Address: 0x10156bc, Func Offset: 0x7c
	// Line 190, Address: 0x10156c4, Func Offset: 0x84
	// Line 191, Address: 0x10156d8, Func Offset: 0x98
	// Line 193, Address: 0x10156e4, Func Offset: 0xa4
	// Line 194, Address: 0x101570c, Func Offset: 0xcc
	// Line 195, Address: 0x1015734, Func Offset: 0xf4
	// Line 196, Address: 0x101575c, Func Offset: 0x11c
	// Line 197, Address: 0x1015784, Func Offset: 0x144
	// Line 199, Address: 0x101578c, Func Offset: 0x14c
	// Line 200, Address: 0x10157b4, Func Offset: 0x174
	// Line 201, Address: 0x10157dc, Func Offset: 0x19c
	// Line 202, Address: 0x1015804, Func Offset: 0x1c4
	// Line 203, Address: 0x101582c, Func Offset: 0x1ec
	// Line 204, Address: 0x1015854, Func Offset: 0x214
	// Line 206, Address: 0x101587c, Func Offset: 0x23c
	// Func End, Address: 0x101588c, Func Offset: 0x24c
}

// 
// Start address: 0x1015890
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 214, Address: 0x1015890, Func Offset: 0
	// Line 217, Address: 0x10158a8, Func Offset: 0x18
	// Line 218, Address: 0x10158bc, Func Offset: 0x2c
	// Line 219, Address: 0x10158dc, Func Offset: 0x4c
	// Line 220, Address: 0x1015900, Func Offset: 0x70
	// Line 221, Address: 0x1015914, Func Offset: 0x84
	// Line 222, Address: 0x1015940, Func Offset: 0xb0
	// Line 225, Address: 0x1015948, Func Offset: 0xb8
	// Line 226, Address: 0x1015964, Func Offset: 0xd4
	// Line 227, Address: 0x1015974, Func Offset: 0xe4
	// Line 234, Address: 0x10159ac, Func Offset: 0x11c
	// Func End, Address: 0x10159bc, Func Offset: 0x12c
}

// 
// Start address: 0x10159c0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 237, Address: 0x10159c0, Func Offset: 0
	// Line 241, Address: 0x10159cc, Func Offset: 0xc
	// Line 243, Address: 0x1015a00, Func Offset: 0x40
	// Line 244, Address: 0x1015a0c, Func Offset: 0x4c
	// Line 245, Address: 0x1015a10, Func Offset: 0x50
	// Line 246, Address: 0x1015a14, Func Offset: 0x54
	// Line 247, Address: 0x1015a18, Func Offset: 0x58
	// Line 248, Address: 0x1015a20, Func Offset: 0x60
	// Line 249, Address: 0x1015a24, Func Offset: 0x64
	// Line 250, Address: 0x1015a40, Func Offset: 0x80
	// Line 251, Address: 0x1015a48, Func Offset: 0x88
	// Line 253, Address: 0x1015a58, Func Offset: 0x98
	// Func End, Address: 0x1015a6c, Func Offset: 0xac
}

// 
// Start address: 0x1015a70
int fadein0_new()
{
	// Line 257, Address: 0x1015a70, Func Offset: 0
	// Line 259, Address: 0x1015a78, Func Offset: 0x8
	// Line 261, Address: 0x1015a84, Func Offset: 0x14
	// Line 264, Address: 0x1015a8c, Func Offset: 0x1c
	// Line 265, Address: 0x1015aac, Func Offset: 0x3c
	// Line 266, Address: 0x1015ab4, Func Offset: 0x44
	// Line 268, Address: 0x1015ac0, Func Offset: 0x50
	// Line 269, Address: 0x1015ac4, Func Offset: 0x54
	// Func End, Address: 0x1015ad4, Func Offset: 0x64
}

// 
// Start address: 0x1015ae0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 272, Address: 0x1015ae0, Func Offset: 0
	// Line 276, Address: 0x1015af4, Func Offset: 0x14
	// Line 277, Address: 0x1015b28, Func Offset: 0x48
	// Line 279, Address: 0x1015b5c, Func Offset: 0x7c
	// Line 280, Address: 0x1015b68, Func Offset: 0x88
	// Line 281, Address: 0x1015b78, Func Offset: 0x98
	// Line 282, Address: 0x1015b7c, Func Offset: 0x9c
	// Line 283, Address: 0x1015b80, Func Offset: 0xa0
	// Line 284, Address: 0x1015b9c, Func Offset: 0xbc
	// Line 286, Address: 0x1015bb8, Func Offset: 0xd8
	// Line 287, Address: 0x1015bec, Func Offset: 0x10c
	// Line 289, Address: 0x1015c20, Func Offset: 0x140
	// Line 290, Address: 0x1015c2c, Func Offset: 0x14c
	// Line 291, Address: 0x1015c3c, Func Offset: 0x15c
	// Line 292, Address: 0x1015c40, Func Offset: 0x160
	// Line 293, Address: 0x1015c44, Func Offset: 0x164
	// Line 297, Address: 0x1015c60, Func Offset: 0x180
	// Func End, Address: 0x1015c7c, Func Offset: 0x19c
}

// 
// Start address: 0x1015c80
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 302, Address: 0x1015c80, Func Offset: 0
	// Line 303, Address: 0x1015c8c, Func Offset: 0xc
	// Line 306, Address: 0x1015cec, Func Offset: 0x6c
	// Line 307, Address: 0x1015d10, Func Offset: 0x90
	// Line 308, Address: 0x1015d20, Func Offset: 0xa0
	// Line 309, Address: 0x1015d28, Func Offset: 0xa8
	// Line 310, Address: 0x1015d4c, Func Offset: 0xcc
	// Line 311, Address: 0x1015d5c, Func Offset: 0xdc
	// Line 312, Address: 0x1015d64, Func Offset: 0xe4
	// Line 313, Address: 0x1015d88, Func Offset: 0x108
	// Line 317, Address: 0x1015d9c, Func Offset: 0x11c
	// Func End, Address: 0x1015da8, Func Offset: 0x128
}

// 
// Start address: 0x1015db0
void fadeout()
{
	// Line 321, Address: 0x1015db0, Func Offset: 0
	// Line 322, Address: 0x1015db8, Func Offset: 0x8
	// Line 324, Address: 0x1015dc4, Func Offset: 0x14
	// Line 325, Address: 0x1015dcc, Func Offset: 0x1c
	// Line 327, Address: 0x1015ddc, Func Offset: 0x2c
	// Func End, Address: 0x1015de4, Func Offset: 0x34
}

// 
// Start address: 0x1015df0
int fadeout_new()
{
	// Line 331, Address: 0x1015df0, Func Offset: 0
	// Line 333, Address: 0x1015df8, Func Offset: 0x8
	// Line 335, Address: 0x1015e04, Func Offset: 0x14
	// Line 338, Address: 0x1015e0c, Func Offset: 0x1c
	// Line 339, Address: 0x1015e2c, Func Offset: 0x3c
	// Line 340, Address: 0x1015e34, Func Offset: 0x44
	// Line 342, Address: 0x1015e40, Func Offset: 0x50
	// Line 343, Address: 0x1015e44, Func Offset: 0x54
	// Func End, Address: 0x1015e54, Func Offset: 0x64
}

// 
// Start address: 0x1015e60
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 346, Address: 0x1015e60, Func Offset: 0
	// Line 350, Address: 0x1015e70, Func Offset: 0x10
	// Line 352, Address: 0x1015ea4, Func Offset: 0x44
	// Line 353, Address: 0x1015eb0, Func Offset: 0x50
	// Line 354, Address: 0x1015ebc, Func Offset: 0x5c
	// Line 355, Address: 0x1015ec0, Func Offset: 0x60
	// Line 356, Address: 0x1015edc, Func Offset: 0x7c
	// Line 358, Address: 0x1015f10, Func Offset: 0xb0
	// Line 359, Address: 0x1015f1c, Func Offset: 0xbc
	// Line 360, Address: 0x1015f28, Func Offset: 0xc8
	// Line 361, Address: 0x1015f2c, Func Offset: 0xcc
	// Line 364, Address: 0x1015f48, Func Offset: 0xe8
	// Func End, Address: 0x1015f60, Func Offset: 0x100
}

// 
// Start address: 0x1015f60
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 368, Address: 0x1015f60, Func Offset: 0
	// Line 369, Address: 0x1015f68, Func Offset: 0x8
	// Line 370, Address: 0x1015f78, Func Offset: 0x18
	// Line 371, Address: 0x1015f8c, Func Offset: 0x2c
	// Line 372, Address: 0x1015f94, Func Offset: 0x34
	// Line 373, Address: 0x1015fa4, Func Offset: 0x44
	// Line 374, Address: 0x1015fb4, Func Offset: 0x54
	// Line 375, Address: 0x1015fbc, Func Offset: 0x5c
	// Line 376, Address: 0x1015fcc, Func Offset: 0x6c
	// Line 379, Address: 0x1015fdc, Func Offset: 0x7c
	// Func End, Address: 0x1015fe8, Func Offset: 0x88
}

// 
// Start address: 0x1015ff0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 382, Address: 0x1015ff0, Func Offset: 0
	// Line 386, Address: 0x1015ffc, Func Offset: 0xc
	// Line 387, Address: 0x1016004, Func Offset: 0x14
	// Line 389, Address: 0x1016010, Func Offset: 0x20
	// Line 391, Address: 0x1016044, Func Offset: 0x54
	// Line 392, Address: 0x1016050, Func Offset: 0x60
	// Line 393, Address: 0x1016058, Func Offset: 0x68
	// Line 394, Address: 0x1016060, Func Offset: 0x70
	// Line 395, Address: 0x1016068, Func Offset: 0x78
	// Line 396, Address: 0x1016070, Func Offset: 0x80
	// Line 397, Address: 0x1016074, Func Offset: 0x84
	// Line 398, Address: 0x1016090, Func Offset: 0xa0
	// Line 399, Address: 0x1016098, Func Offset: 0xa8
	// Line 401, Address: 0x10160a8, Func Offset: 0xb8
	// Func End, Address: 0x10160bc, Func Offset: 0xcc
}

// 
// Start address: 0x10160c0
int flashin_new()
{
	// Line 404, Address: 0x10160c0, Func Offset: 0
	// Line 406, Address: 0x10160c8, Func Offset: 0x8
	// Line 408, Address: 0x10160d4, Func Offset: 0x14
	// Line 411, Address: 0x10160dc, Func Offset: 0x1c
	// Line 412, Address: 0x10160fc, Func Offset: 0x3c
	// Line 413, Address: 0x1016104, Func Offset: 0x44
	// Line 415, Address: 0x1016110, Func Offset: 0x50
	// Line 416, Address: 0x1016114, Func Offset: 0x54
	// Func End, Address: 0x1016124, Func Offset: 0x64
}

// 
// Start address: 0x1016130
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 419, Address: 0x1016130, Func Offset: 0
	// Line 423, Address: 0x1016144, Func Offset: 0x14
	// Line 424, Address: 0x1016178, Func Offset: 0x48
	// Line 426, Address: 0x10161ac, Func Offset: 0x7c
	// Line 427, Address: 0x10161b8, Func Offset: 0x88
	// Line 428, Address: 0x10161c8, Func Offset: 0x98
	// Line 429, Address: 0x10161cc, Func Offset: 0x9c
	// Line 430, Address: 0x10161d0, Func Offset: 0xa0
	// Line 431, Address: 0x10161ec, Func Offset: 0xbc
	// Line 433, Address: 0x1016208, Func Offset: 0xd8
	// Line 434, Address: 0x101623c, Func Offset: 0x10c
	// Line 436, Address: 0x1016270, Func Offset: 0x140
	// Line 437, Address: 0x101627c, Func Offset: 0x14c
	// Line 438, Address: 0x101628c, Func Offset: 0x15c
	// Line 439, Address: 0x1016290, Func Offset: 0x160
	// Line 440, Address: 0x1016294, Func Offset: 0x164
	// Line 444, Address: 0x10162b0, Func Offset: 0x180
	// Func End, Address: 0x10162cc, Func Offset: 0x19c
}

// 
// Start address: 0x10162d0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 448, Address: 0x10162d0, Func Offset: 0
	// Line 449, Address: 0x10162dc, Func Offset: 0xc
	// Line 452, Address: 0x101633c, Func Offset: 0x6c
	// Line 453, Address: 0x1016360, Func Offset: 0x90
	// Line 454, Address: 0x1016370, Func Offset: 0xa0
	// Line 455, Address: 0x1016378, Func Offset: 0xa8
	// Line 456, Address: 0x101639c, Func Offset: 0xcc
	// Line 457, Address: 0x10163ac, Func Offset: 0xdc
	// Line 458, Address: 0x10163b4, Func Offset: 0xe4
	// Line 459, Address: 0x10163d8, Func Offset: 0x108
	// Line 463, Address: 0x10163ec, Func Offset: 0x11c
	// Func End, Address: 0x10163f8, Func Offset: 0x128
}

// 
// Start address: 0x1016400
void flashout()
{
	// Line 467, Address: 0x1016400, Func Offset: 0
	// Line 468, Address: 0x1016408, Func Offset: 0x8
	// Line 470, Address: 0x1016414, Func Offset: 0x14
	// Line 471, Address: 0x101641c, Func Offset: 0x1c
	// Line 473, Address: 0x101642c, Func Offset: 0x2c
	// Func End, Address: 0x1016434, Func Offset: 0x34
}

// 
// Start address: 0x1016440
int flashout_new()
{
	// Line 476, Address: 0x1016440, Func Offset: 0
	// Line 478, Address: 0x1016448, Func Offset: 0x8
	// Line 480, Address: 0x1016454, Func Offset: 0x14
	// Line 483, Address: 0x101645c, Func Offset: 0x1c
	// Line 484, Address: 0x101647c, Func Offset: 0x3c
	// Line 485, Address: 0x1016484, Func Offset: 0x44
	// Line 487, Address: 0x1016490, Func Offset: 0x50
	// Line 488, Address: 0x1016494, Func Offset: 0x54
	// Func End, Address: 0x10164a4, Func Offset: 0x64
}

// 
// Start address: 0x10164b0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 491, Address: 0x10164b0, Func Offset: 0
	// Line 495, Address: 0x10164c0, Func Offset: 0x10
	// Line 497, Address: 0x10164f4, Func Offset: 0x44
	// Line 498, Address: 0x1016500, Func Offset: 0x50
	// Line 499, Address: 0x101650c, Func Offset: 0x5c
	// Line 500, Address: 0x1016510, Func Offset: 0x60
	// Line 501, Address: 0x101652c, Func Offset: 0x7c
	// Line 503, Address: 0x1016560, Func Offset: 0xb0
	// Line 504, Address: 0x101656c, Func Offset: 0xbc
	// Line 505, Address: 0x1016578, Func Offset: 0xc8
	// Line 506, Address: 0x101657c, Func Offset: 0xcc
	// Line 509, Address: 0x1016598, Func Offset: 0xe8
	// Func End, Address: 0x10165b0, Func Offset: 0x100
}

// 
// Start address: 0x10165b0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 513, Address: 0x10165b0, Func Offset: 0
	// Line 514, Address: 0x10165b8, Func Offset: 0x8
	// Line 515, Address: 0x10165d0, Func Offset: 0x20
	// Line 516, Address: 0x10165e4, Func Offset: 0x34
	// Line 517, Address: 0x10165ec, Func Offset: 0x3c
	// Line 518, Address: 0x1016604, Func Offset: 0x54
	// Line 519, Address: 0x1016614, Func Offset: 0x64
	// Line 520, Address: 0x101661c, Func Offset: 0x6c
	// Line 521, Address: 0x1016634, Func Offset: 0x84
	// Line 525, Address: 0x1016644, Func Offset: 0x94
	// Func End, Address: 0x1016650, Func Offset: 0xa0
}

// 
// Start address: 0x1016650
void colorset(int ColorNo)
{
	// Line 528, Address: 0x1016650, Func Offset: 0
	// Line 529, Address: 0x101665c, Func Offset: 0xc
	// Line 530, Address: 0x101666c, Func Offset: 0x1c
	// Func End, Address: 0x101667c, Func Offset: 0x2c
}

// 
// Start address: 0x1016680
void colorset2(int ColorNo)
{
	// Line 532, Address: 0x1016680, Func Offset: 0
	// Line 533, Address: 0x101668c, Func Offset: 0xc
	// Line 534, Address: 0x101669c, Func Offset: 0x1c
	// Func End, Address: 0x10166ac, Func Offset: 0x2c
}

// 
// Start address: 0x10166b0
void colorset3(int ColorNo)
{
	// Line 536, Address: 0x10166b0, Func Offset: 0
	// Line 537, Address: 0x10166bc, Func Offset: 0xc
	// Line 538, Address: 0x10166cc, Func Offset: 0x1c
	// Func End, Address: 0x10166dc, Func Offset: 0x2c
}

// 
// Start address: 0x10166e0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 543, Address: 0x10166e0, Func Offset: 0
	// Line 548, Address: 0x1016700, Func Offset: 0x20
	// Line 550, Address: 0x1016768, Func Offset: 0x88
	// Line 552, Address: 0x1016778, Func Offset: 0x98
	// Line 554, Address: 0x1016788, Func Offset: 0xa8
	// Line 556, Address: 0x1016798, Func Offset: 0xb8
	// Line 558, Address: 0x10167a0, Func Offset: 0xc0
	// Line 559, Address: 0x10167b8, Func Offset: 0xd8
	// Line 560, Address: 0x10167e0, Func Offset: 0x100
	// Line 561, Address: 0x1016800, Func Offset: 0x120
	// Line 562, Address: 0x101680c, Func Offset: 0x12c
	// Line 563, Address: 0x101683c, Func Offset: 0x15c
	// Line 565, Address: 0x101684c, Func Offset: 0x16c
	// Func End, Address: 0x101686c, Func Offset: 0x18c
}

// 
// Start address: 0x1016870
int FadeProc()
{
	// Line 568, Address: 0x1016870, Func Offset: 0
	// Line 569, Address: 0x1016878, Func Offset: 0x8
	// Line 571, Address: 0x10168bc, Func Offset: 0x4c
	// Line 573, Address: 0x10168cc, Func Offset: 0x5c
	// Line 575, Address: 0x10168dc, Func Offset: 0x6c
	// Line 577, Address: 0x10168ec, Func Offset: 0x7c
	// Line 579, Address: 0x10168fc, Func Offset: 0x8c
	// Line 581, Address: 0x1016900, Func Offset: 0x90
	// Func End, Address: 0x1016910, Func Offset: 0xa0
}

