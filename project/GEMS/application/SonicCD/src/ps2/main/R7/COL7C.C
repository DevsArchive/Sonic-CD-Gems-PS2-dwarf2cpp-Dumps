typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef _anon0 type_0[7];
typedef tagPALETTEENTRY type_1[48];
typedef tagPALETTEENTRY type_2[64];
typedef tagPALETTEENTRY type_3[6];
typedef tagPALETTEENTRY type_4[64];

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
tagPALETTEENTRY gamecolor[64];
tagPALETTEENTRY zone82colora[48];
tagPALETTEENTRY bosscolor[6];
_anon0 colortbl[7];
int* lpFadeFlag;
int FadeCount;
unsigned char colorcnt;
tagPALETTEENTRY* lpcolorwk;
unsigned char startcolor;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
_anon1 stageno;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
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
void colorset4(int ColorNo);
void colorset00(int ColorNo, int WorkOffs);
int FadeProc();

// 
// Start address: 0x1027470
void clchgctr()
{
	// Line 162, Address: 0x1027470, Func Offset: 0
	// Func End, Address: 0x1027478, Func Offset: 0x8
}

// 
// Start address: 0x1027480
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 170, Address: 0x1027480, Func Offset: 0
	// Line 174, Address: 0x102748c, Func Offset: 0xc
	// Line 176, Address: 0x10274c0, Func Offset: 0x40
	// Line 177, Address: 0x10274cc, Func Offset: 0x4c
	// Line 178, Address: 0x10274d0, Func Offset: 0x50
	// Line 179, Address: 0x10274d4, Func Offset: 0x54
	// Line 180, Address: 0x10274d8, Func Offset: 0x58
	// Line 181, Address: 0x10274e0, Func Offset: 0x60
	// Line 182, Address: 0x10274e4, Func Offset: 0x64
	// Line 183, Address: 0x1027500, Func Offset: 0x80
	// Line 184, Address: 0x1027508, Func Offset: 0x88
	// Line 186, Address: 0x1027518, Func Offset: 0x98
	// Func End, Address: 0x102752c, Func Offset: 0xac
}

// 
// Start address: 0x1027530
int fadein0_new()
{
	// Line 190, Address: 0x1027530, Func Offset: 0
	// Line 192, Address: 0x1027538, Func Offset: 0x8
	// Line 194, Address: 0x1027544, Func Offset: 0x14
	// Line 197, Address: 0x102754c, Func Offset: 0x1c
	// Line 198, Address: 0x102756c, Func Offset: 0x3c
	// Line 199, Address: 0x1027574, Func Offset: 0x44
	// Line 201, Address: 0x1027580, Func Offset: 0x50
	// Line 202, Address: 0x1027584, Func Offset: 0x54
	// Func End, Address: 0x1027594, Func Offset: 0x64
}

// 
// Start address: 0x10275a0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 206, Address: 0x10275a0, Func Offset: 0
	// Line 210, Address: 0x10275b4, Func Offset: 0x14
	// Line 211, Address: 0x10275e8, Func Offset: 0x48
	// Line 213, Address: 0x102761c, Func Offset: 0x7c
	// Line 214, Address: 0x1027628, Func Offset: 0x88
	// Line 215, Address: 0x1027638, Func Offset: 0x98
	// Line 216, Address: 0x102763c, Func Offset: 0x9c
	// Line 217, Address: 0x1027640, Func Offset: 0xa0
	// Line 218, Address: 0x102765c, Func Offset: 0xbc
	// Line 220, Address: 0x1027678, Func Offset: 0xd8
	// Line 221, Address: 0x10276ac, Func Offset: 0x10c
	// Line 223, Address: 0x10276e0, Func Offset: 0x140
	// Line 224, Address: 0x10276ec, Func Offset: 0x14c
	// Line 225, Address: 0x10276fc, Func Offset: 0x15c
	// Line 226, Address: 0x1027700, Func Offset: 0x160
	// Line 227, Address: 0x1027704, Func Offset: 0x164
	// Line 231, Address: 0x1027720, Func Offset: 0x180
	// Func End, Address: 0x102773c, Func Offset: 0x19c
}

// 
// Start address: 0x1027740
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 235, Address: 0x1027740, Func Offset: 0
	// Line 236, Address: 0x102774c, Func Offset: 0xc
	// Line 239, Address: 0x10277ac, Func Offset: 0x6c
	// Line 240, Address: 0x10277d0, Func Offset: 0x90
	// Line 241, Address: 0x10277e0, Func Offset: 0xa0
	// Line 242, Address: 0x10277e8, Func Offset: 0xa8
	// Line 243, Address: 0x102780c, Func Offset: 0xcc
	// Line 244, Address: 0x102781c, Func Offset: 0xdc
	// Line 245, Address: 0x1027824, Func Offset: 0xe4
	// Line 246, Address: 0x1027848, Func Offset: 0x108
	// Line 250, Address: 0x102785c, Func Offset: 0x11c
	// Func End, Address: 0x1027868, Func Offset: 0x128
}

// 
// Start address: 0x1027870
void fadeout()
{
	// Line 254, Address: 0x1027870, Func Offset: 0
	// Line 255, Address: 0x1027878, Func Offset: 0x8
	// Line 257, Address: 0x1027884, Func Offset: 0x14
	// Line 258, Address: 0x102788c, Func Offset: 0x1c
	// Line 260, Address: 0x102789c, Func Offset: 0x2c
	// Func End, Address: 0x10278a4, Func Offset: 0x34
}

// 
// Start address: 0x10278b0
int fadeout_new()
{
	// Line 264, Address: 0x10278b0, Func Offset: 0
	// Line 266, Address: 0x10278b8, Func Offset: 0x8
	// Line 268, Address: 0x10278c4, Func Offset: 0x14
	// Line 271, Address: 0x10278cc, Func Offset: 0x1c
	// Line 272, Address: 0x10278ec, Func Offset: 0x3c
	// Line 273, Address: 0x10278f4, Func Offset: 0x44
	// Line 275, Address: 0x1027900, Func Offset: 0x50
	// Line 276, Address: 0x1027904, Func Offset: 0x54
	// Func End, Address: 0x1027914, Func Offset: 0x64
}

// 
// Start address: 0x1027920
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 279, Address: 0x1027920, Func Offset: 0
	// Line 283, Address: 0x1027930, Func Offset: 0x10
	// Line 285, Address: 0x1027964, Func Offset: 0x44
	// Line 286, Address: 0x1027970, Func Offset: 0x50
	// Line 287, Address: 0x102797c, Func Offset: 0x5c
	// Line 288, Address: 0x1027980, Func Offset: 0x60
	// Line 289, Address: 0x102799c, Func Offset: 0x7c
	// Line 291, Address: 0x10279d0, Func Offset: 0xb0
	// Line 292, Address: 0x10279dc, Func Offset: 0xbc
	// Line 293, Address: 0x10279e8, Func Offset: 0xc8
	// Line 294, Address: 0x10279ec, Func Offset: 0xcc
	// Line 297, Address: 0x1027a08, Func Offset: 0xe8
	// Func End, Address: 0x1027a20, Func Offset: 0x100
}

// 
// Start address: 0x1027a20
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 300, Address: 0x1027a20, Func Offset: 0
	// Line 301, Address: 0x1027a28, Func Offset: 0x8
	// Line 302, Address: 0x1027a38, Func Offset: 0x18
	// Line 303, Address: 0x1027a4c, Func Offset: 0x2c
	// Line 304, Address: 0x1027a54, Func Offset: 0x34
	// Line 305, Address: 0x1027a64, Func Offset: 0x44
	// Line 306, Address: 0x1027a74, Func Offset: 0x54
	// Line 307, Address: 0x1027a7c, Func Offset: 0x5c
	// Line 308, Address: 0x1027a8c, Func Offset: 0x6c
	// Line 311, Address: 0x1027a9c, Func Offset: 0x7c
	// Func End, Address: 0x1027aa8, Func Offset: 0x88
}

// 
// Start address: 0x1027ab0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 316, Address: 0x1027ab0, Func Offset: 0
	// Line 320, Address: 0x1027abc, Func Offset: 0xc
	// Line 321, Address: 0x1027ac4, Func Offset: 0x14
	// Line 323, Address: 0x1027ad0, Func Offset: 0x20
	// Line 325, Address: 0x1027b04, Func Offset: 0x54
	// Line 326, Address: 0x1027b10, Func Offset: 0x60
	// Line 327, Address: 0x1027b18, Func Offset: 0x68
	// Line 328, Address: 0x1027b20, Func Offset: 0x70
	// Line 329, Address: 0x1027b28, Func Offset: 0x78
	// Line 330, Address: 0x1027b30, Func Offset: 0x80
	// Line 331, Address: 0x1027b34, Func Offset: 0x84
	// Line 332, Address: 0x1027b50, Func Offset: 0xa0
	// Line 333, Address: 0x1027b58, Func Offset: 0xa8
	// Line 335, Address: 0x1027b68, Func Offset: 0xb8
	// Func End, Address: 0x1027b7c, Func Offset: 0xcc
}

// 
// Start address: 0x1027b80
int flashin_new()
{
	// Line 337, Address: 0x1027b80, Func Offset: 0
	// Line 339, Address: 0x1027b88, Func Offset: 0x8
	// Line 341, Address: 0x1027b94, Func Offset: 0x14
	// Line 344, Address: 0x1027b9c, Func Offset: 0x1c
	// Line 345, Address: 0x1027bbc, Func Offset: 0x3c
	// Line 346, Address: 0x1027bc4, Func Offset: 0x44
	// Line 348, Address: 0x1027bd0, Func Offset: 0x50
	// Line 349, Address: 0x1027bd4, Func Offset: 0x54
	// Func End, Address: 0x1027be4, Func Offset: 0x64
}

// 
// Start address: 0x1027bf0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 351, Address: 0x1027bf0, Func Offset: 0
	// Line 355, Address: 0x1027c04, Func Offset: 0x14
	// Line 356, Address: 0x1027c38, Func Offset: 0x48
	// Line 358, Address: 0x1027c6c, Func Offset: 0x7c
	// Line 359, Address: 0x1027c78, Func Offset: 0x88
	// Line 360, Address: 0x1027c88, Func Offset: 0x98
	// Line 361, Address: 0x1027c8c, Func Offset: 0x9c
	// Line 362, Address: 0x1027c90, Func Offset: 0xa0
	// Line 363, Address: 0x1027cac, Func Offset: 0xbc
	// Line 365, Address: 0x1027cc8, Func Offset: 0xd8
	// Line 366, Address: 0x1027cfc, Func Offset: 0x10c
	// Line 368, Address: 0x1027d30, Func Offset: 0x140
	// Line 369, Address: 0x1027d3c, Func Offset: 0x14c
	// Line 370, Address: 0x1027d4c, Func Offset: 0x15c
	// Line 371, Address: 0x1027d50, Func Offset: 0x160
	// Line 372, Address: 0x1027d54, Func Offset: 0x164
	// Line 376, Address: 0x1027d70, Func Offset: 0x180
	// Func End, Address: 0x1027d8c, Func Offset: 0x19c
}

// 
// Start address: 0x1027d90
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 380, Address: 0x1027d90, Func Offset: 0
	// Line 381, Address: 0x1027d9c, Func Offset: 0xc
	// Line 384, Address: 0x1027dfc, Func Offset: 0x6c
	// Line 385, Address: 0x1027e20, Func Offset: 0x90
	// Line 386, Address: 0x1027e30, Func Offset: 0xa0
	// Line 387, Address: 0x1027e38, Func Offset: 0xa8
	// Line 388, Address: 0x1027e5c, Func Offset: 0xcc
	// Line 389, Address: 0x1027e6c, Func Offset: 0xdc
	// Line 390, Address: 0x1027e74, Func Offset: 0xe4
	// Line 391, Address: 0x1027e98, Func Offset: 0x108
	// Line 395, Address: 0x1027eac, Func Offset: 0x11c
	// Func End, Address: 0x1027eb8, Func Offset: 0x128
}

// 
// Start address: 0x1027ec0
void flashout()
{
	// Line 399, Address: 0x1027ec0, Func Offset: 0
	// Line 400, Address: 0x1027ec8, Func Offset: 0x8
	// Line 402, Address: 0x1027ed4, Func Offset: 0x14
	// Line 403, Address: 0x1027edc, Func Offset: 0x1c
	// Line 405, Address: 0x1027eec, Func Offset: 0x2c
	// Func End, Address: 0x1027ef4, Func Offset: 0x34
}

// 
// Start address: 0x1027f00
int flashout_new()
{
	// Line 407, Address: 0x1027f00, Func Offset: 0
	// Line 409, Address: 0x1027f08, Func Offset: 0x8
	// Line 411, Address: 0x1027f14, Func Offset: 0x14
	// Line 414, Address: 0x1027f1c, Func Offset: 0x1c
	// Line 415, Address: 0x1027f3c, Func Offset: 0x3c
	// Line 416, Address: 0x1027f44, Func Offset: 0x44
	// Line 418, Address: 0x1027f50, Func Offset: 0x50
	// Line 419, Address: 0x1027f54, Func Offset: 0x54
	// Func End, Address: 0x1027f64, Func Offset: 0x64
}

// 
// Start address: 0x1027f70
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 422, Address: 0x1027f70, Func Offset: 0
	// Line 426, Address: 0x1027f80, Func Offset: 0x10
	// Line 428, Address: 0x1027fb4, Func Offset: 0x44
	// Line 429, Address: 0x1027fc0, Func Offset: 0x50
	// Line 430, Address: 0x1027fcc, Func Offset: 0x5c
	// Line 431, Address: 0x1027fd0, Func Offset: 0x60
	// Line 432, Address: 0x1027fec, Func Offset: 0x7c
	// Line 434, Address: 0x1028020, Func Offset: 0xb0
	// Line 435, Address: 0x102802c, Func Offset: 0xbc
	// Line 436, Address: 0x1028038, Func Offset: 0xc8
	// Line 437, Address: 0x102803c, Func Offset: 0xcc
	// Line 440, Address: 0x1028058, Func Offset: 0xe8
	// Func End, Address: 0x1028070, Func Offset: 0x100
}

// 
// Start address: 0x1028070
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 443, Address: 0x1028070, Func Offset: 0
	// Line 444, Address: 0x1028078, Func Offset: 0x8
	// Line 445, Address: 0x1028090, Func Offset: 0x20
	// Line 446, Address: 0x10280a4, Func Offset: 0x34
	// Line 447, Address: 0x10280ac, Func Offset: 0x3c
	// Line 448, Address: 0x10280c4, Func Offset: 0x54
	// Line 449, Address: 0x10280d4, Func Offset: 0x64
	// Line 450, Address: 0x10280dc, Func Offset: 0x6c
	// Line 451, Address: 0x10280f4, Func Offset: 0x84
	// Line 455, Address: 0x1028104, Func Offset: 0x94
	// Func End, Address: 0x1028110, Func Offset: 0xa0
}

// 
// Start address: 0x1028110
void colorset(int ColorNo)
{
	// Line 458, Address: 0x1028110, Func Offset: 0
	// Line 459, Address: 0x102811c, Func Offset: 0xc
	// Line 460, Address: 0x102812c, Func Offset: 0x1c
	// Func End, Address: 0x102813c, Func Offset: 0x2c
}

// 
// Start address: 0x1028140
void colorset2(int ColorNo)
{
	// Line 462, Address: 0x1028140, Func Offset: 0
	// Line 463, Address: 0x102814c, Func Offset: 0xc
	// Line 464, Address: 0x102815c, Func Offset: 0x1c
	// Func End, Address: 0x102816c, Func Offset: 0x2c
}

// 
// Start address: 0x1028170
void colorset3(int ColorNo)
{
	// Line 466, Address: 0x1028170, Func Offset: 0
	// Line 467, Address: 0x102817c, Func Offset: 0xc
	// Line 468, Address: 0x102818c, Func Offset: 0x1c
	// Func End, Address: 0x102819c, Func Offset: 0x2c
}

// 
// Start address: 0x10281a0
void colorset4(int ColorNo)
{
	// Line 470, Address: 0x10281a0, Func Offset: 0
	// Line 471, Address: 0x10281ac, Func Offset: 0xc
	// Line 472, Address: 0x10281bc, Func Offset: 0x1c
	// Func End, Address: 0x10281cc, Func Offset: 0x2c
}

// 
// Start address: 0x10281d0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 478, Address: 0x10281d0, Func Offset: 0
	// Line 483, Address: 0x10281f0, Func Offset: 0x20
	// Line 485, Address: 0x1028258, Func Offset: 0x88
	// Line 487, Address: 0x1028268, Func Offset: 0x98
	// Line 489, Address: 0x1028278, Func Offset: 0xa8
	// Line 491, Address: 0x1028288, Func Offset: 0xb8
	// Line 494, Address: 0x1028290, Func Offset: 0xc0
	// Line 495, Address: 0x10282a8, Func Offset: 0xd8
	// Line 496, Address: 0x10282d0, Func Offset: 0x100
	// Line 497, Address: 0x10282f0, Func Offset: 0x120
	// Line 498, Address: 0x10282fc, Func Offset: 0x12c
	// Line 499, Address: 0x102832c, Func Offset: 0x15c
	// Line 501, Address: 0x102833c, Func Offset: 0x16c
	// Func End, Address: 0x102835c, Func Offset: 0x18c
}

// 
// Start address: 0x1028360
int FadeProc()
{
	// Line 506, Address: 0x1028360, Func Offset: 0
	// Line 507, Address: 0x1028368, Func Offset: 0x8
	// Line 509, Address: 0x10283ac, Func Offset: 0x4c
	// Line 511, Address: 0x10283bc, Func Offset: 0x5c
	// Line 513, Address: 0x10283cc, Func Offset: 0x6c
	// Line 515, Address: 0x10283dc, Func Offset: 0x7c
	// Line 517, Address: 0x10283ec, Func Offset: 0x8c
	// Line 519, Address: 0x10283f0, Func Offset: 0x90
	// Func End, Address: 0x1028400, Func Offset: 0xa0
}

