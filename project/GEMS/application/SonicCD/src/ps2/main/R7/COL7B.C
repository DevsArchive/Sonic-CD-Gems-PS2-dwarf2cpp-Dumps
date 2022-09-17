typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[64];
typedef _anon0 type_1[6];
typedef tagPALETTEENTRY type_2[48];

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
tagPALETTEENTRY zone82colora[48];
_anon0 colortbl[6];
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
// Start address: 0x1023ac0
void clchgctr()
{
	// Line 138, Address: 0x1023ac0, Func Offset: 0
	// Func End, Address: 0x1023ac8, Func Offset: 0x8
}

// 
// Start address: 0x1023ad0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 146, Address: 0x1023ad0, Func Offset: 0
	// Line 150, Address: 0x1023adc, Func Offset: 0xc
	// Line 152, Address: 0x1023b10, Func Offset: 0x40
	// Line 153, Address: 0x1023b1c, Func Offset: 0x4c
	// Line 154, Address: 0x1023b20, Func Offset: 0x50
	// Line 155, Address: 0x1023b24, Func Offset: 0x54
	// Line 156, Address: 0x1023b28, Func Offset: 0x58
	// Line 157, Address: 0x1023b30, Func Offset: 0x60
	// Line 158, Address: 0x1023b34, Func Offset: 0x64
	// Line 159, Address: 0x1023b50, Func Offset: 0x80
	// Line 160, Address: 0x1023b58, Func Offset: 0x88
	// Line 162, Address: 0x1023b68, Func Offset: 0x98
	// Func End, Address: 0x1023b7c, Func Offset: 0xac
}

// 
// Start address: 0x1023b80
int fadein0_new()
{
	// Line 166, Address: 0x1023b80, Func Offset: 0
	// Line 168, Address: 0x1023b88, Func Offset: 0x8
	// Line 170, Address: 0x1023b94, Func Offset: 0x14
	// Line 173, Address: 0x1023b9c, Func Offset: 0x1c
	// Line 174, Address: 0x1023bbc, Func Offset: 0x3c
	// Line 175, Address: 0x1023bc4, Func Offset: 0x44
	// Line 177, Address: 0x1023bd0, Func Offset: 0x50
	// Line 178, Address: 0x1023bd4, Func Offset: 0x54
	// Func End, Address: 0x1023be4, Func Offset: 0x64
}

// 
// Start address: 0x1023bf0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 182, Address: 0x1023bf0, Func Offset: 0
	// Line 186, Address: 0x1023c04, Func Offset: 0x14
	// Line 187, Address: 0x1023c38, Func Offset: 0x48
	// Line 189, Address: 0x1023c6c, Func Offset: 0x7c
	// Line 190, Address: 0x1023c78, Func Offset: 0x88
	// Line 191, Address: 0x1023c88, Func Offset: 0x98
	// Line 192, Address: 0x1023c8c, Func Offset: 0x9c
	// Line 193, Address: 0x1023c90, Func Offset: 0xa0
	// Line 194, Address: 0x1023cac, Func Offset: 0xbc
	// Line 196, Address: 0x1023cc8, Func Offset: 0xd8
	// Line 197, Address: 0x1023cfc, Func Offset: 0x10c
	// Line 199, Address: 0x1023d30, Func Offset: 0x140
	// Line 200, Address: 0x1023d3c, Func Offset: 0x14c
	// Line 201, Address: 0x1023d4c, Func Offset: 0x15c
	// Line 202, Address: 0x1023d50, Func Offset: 0x160
	// Line 203, Address: 0x1023d54, Func Offset: 0x164
	// Line 207, Address: 0x1023d70, Func Offset: 0x180
	// Func End, Address: 0x1023d8c, Func Offset: 0x19c
}

// 
// Start address: 0x1023d90
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 211, Address: 0x1023d90, Func Offset: 0
	// Line 212, Address: 0x1023d9c, Func Offset: 0xc
	// Line 215, Address: 0x1023dfc, Func Offset: 0x6c
	// Line 216, Address: 0x1023e20, Func Offset: 0x90
	// Line 217, Address: 0x1023e30, Func Offset: 0xa0
	// Line 218, Address: 0x1023e38, Func Offset: 0xa8
	// Line 219, Address: 0x1023e5c, Func Offset: 0xcc
	// Line 220, Address: 0x1023e6c, Func Offset: 0xdc
	// Line 221, Address: 0x1023e74, Func Offset: 0xe4
	// Line 222, Address: 0x1023e98, Func Offset: 0x108
	// Line 226, Address: 0x1023eac, Func Offset: 0x11c
	// Func End, Address: 0x1023eb8, Func Offset: 0x128
}

// 
// Start address: 0x1023ec0
void fadeout()
{
	// Line 230, Address: 0x1023ec0, Func Offset: 0
	// Line 231, Address: 0x1023ec8, Func Offset: 0x8
	// Line 233, Address: 0x1023ed4, Func Offset: 0x14
	// Line 234, Address: 0x1023edc, Func Offset: 0x1c
	// Line 236, Address: 0x1023eec, Func Offset: 0x2c
	// Func End, Address: 0x1023ef4, Func Offset: 0x34
}

// 
// Start address: 0x1023f00
int fadeout_new()
{
	// Line 240, Address: 0x1023f00, Func Offset: 0
	// Line 242, Address: 0x1023f08, Func Offset: 0x8
	// Line 244, Address: 0x1023f14, Func Offset: 0x14
	// Line 247, Address: 0x1023f1c, Func Offset: 0x1c
	// Line 248, Address: 0x1023f3c, Func Offset: 0x3c
	// Line 249, Address: 0x1023f44, Func Offset: 0x44
	// Line 251, Address: 0x1023f50, Func Offset: 0x50
	// Line 252, Address: 0x1023f54, Func Offset: 0x54
	// Func End, Address: 0x1023f64, Func Offset: 0x64
}

// 
// Start address: 0x1023f70
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 255, Address: 0x1023f70, Func Offset: 0
	// Line 259, Address: 0x1023f80, Func Offset: 0x10
	// Line 261, Address: 0x1023fb4, Func Offset: 0x44
	// Line 262, Address: 0x1023fc0, Func Offset: 0x50
	// Line 263, Address: 0x1023fcc, Func Offset: 0x5c
	// Line 264, Address: 0x1023fd0, Func Offset: 0x60
	// Line 265, Address: 0x1023fec, Func Offset: 0x7c
	// Line 267, Address: 0x1024020, Func Offset: 0xb0
	// Line 268, Address: 0x102402c, Func Offset: 0xbc
	// Line 269, Address: 0x1024038, Func Offset: 0xc8
	// Line 270, Address: 0x102403c, Func Offset: 0xcc
	// Line 273, Address: 0x1024058, Func Offset: 0xe8
	// Func End, Address: 0x1024070, Func Offset: 0x100
}

// 
// Start address: 0x1024070
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 276, Address: 0x1024070, Func Offset: 0
	// Line 277, Address: 0x1024078, Func Offset: 0x8
	// Line 278, Address: 0x1024088, Func Offset: 0x18
	// Line 279, Address: 0x102409c, Func Offset: 0x2c
	// Line 280, Address: 0x10240a4, Func Offset: 0x34
	// Line 281, Address: 0x10240b4, Func Offset: 0x44
	// Line 282, Address: 0x10240c4, Func Offset: 0x54
	// Line 283, Address: 0x10240cc, Func Offset: 0x5c
	// Line 284, Address: 0x10240dc, Func Offset: 0x6c
	// Line 287, Address: 0x10240ec, Func Offset: 0x7c
	// Func End, Address: 0x10240f8, Func Offset: 0x88
}

// 
// Start address: 0x1024100
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 292, Address: 0x1024100, Func Offset: 0
	// Line 296, Address: 0x102410c, Func Offset: 0xc
	// Line 297, Address: 0x1024114, Func Offset: 0x14
	// Line 299, Address: 0x1024120, Func Offset: 0x20
	// Line 301, Address: 0x1024154, Func Offset: 0x54
	// Line 302, Address: 0x1024160, Func Offset: 0x60
	// Line 303, Address: 0x1024168, Func Offset: 0x68
	// Line 304, Address: 0x1024170, Func Offset: 0x70
	// Line 305, Address: 0x1024178, Func Offset: 0x78
	// Line 306, Address: 0x1024180, Func Offset: 0x80
	// Line 307, Address: 0x1024184, Func Offset: 0x84
	// Line 308, Address: 0x10241a0, Func Offset: 0xa0
	// Line 309, Address: 0x10241a8, Func Offset: 0xa8
	// Line 311, Address: 0x10241b8, Func Offset: 0xb8
	// Func End, Address: 0x10241cc, Func Offset: 0xcc
}

// 
// Start address: 0x10241d0
int flashin_new()
{
	// Line 313, Address: 0x10241d0, Func Offset: 0
	// Line 315, Address: 0x10241d8, Func Offset: 0x8
	// Line 317, Address: 0x10241e4, Func Offset: 0x14
	// Line 320, Address: 0x10241ec, Func Offset: 0x1c
	// Line 321, Address: 0x102420c, Func Offset: 0x3c
	// Line 322, Address: 0x1024214, Func Offset: 0x44
	// Line 324, Address: 0x1024220, Func Offset: 0x50
	// Line 325, Address: 0x1024224, Func Offset: 0x54
	// Func End, Address: 0x1024234, Func Offset: 0x64
}

// 
// Start address: 0x1024240
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 327, Address: 0x1024240, Func Offset: 0
	// Line 331, Address: 0x1024254, Func Offset: 0x14
	// Line 332, Address: 0x1024288, Func Offset: 0x48
	// Line 334, Address: 0x10242bc, Func Offset: 0x7c
	// Line 335, Address: 0x10242c8, Func Offset: 0x88
	// Line 336, Address: 0x10242d8, Func Offset: 0x98
	// Line 337, Address: 0x10242dc, Func Offset: 0x9c
	// Line 338, Address: 0x10242e0, Func Offset: 0xa0
	// Line 339, Address: 0x10242fc, Func Offset: 0xbc
	// Line 341, Address: 0x1024318, Func Offset: 0xd8
	// Line 342, Address: 0x102434c, Func Offset: 0x10c
	// Line 344, Address: 0x1024380, Func Offset: 0x140
	// Line 345, Address: 0x102438c, Func Offset: 0x14c
	// Line 346, Address: 0x102439c, Func Offset: 0x15c
	// Line 347, Address: 0x10243a0, Func Offset: 0x160
	// Line 348, Address: 0x10243a4, Func Offset: 0x164
	// Line 352, Address: 0x10243c0, Func Offset: 0x180
	// Func End, Address: 0x10243dc, Func Offset: 0x19c
}

// 
// Start address: 0x10243e0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 356, Address: 0x10243e0, Func Offset: 0
	// Line 357, Address: 0x10243ec, Func Offset: 0xc
	// Line 360, Address: 0x102444c, Func Offset: 0x6c
	// Line 361, Address: 0x1024470, Func Offset: 0x90
	// Line 362, Address: 0x1024480, Func Offset: 0xa0
	// Line 363, Address: 0x1024488, Func Offset: 0xa8
	// Line 364, Address: 0x10244ac, Func Offset: 0xcc
	// Line 365, Address: 0x10244bc, Func Offset: 0xdc
	// Line 366, Address: 0x10244c4, Func Offset: 0xe4
	// Line 367, Address: 0x10244e8, Func Offset: 0x108
	// Line 371, Address: 0x10244fc, Func Offset: 0x11c
	// Func End, Address: 0x1024508, Func Offset: 0x128
}

// 
// Start address: 0x1024510
void flashout()
{
	// Line 375, Address: 0x1024510, Func Offset: 0
	// Line 376, Address: 0x1024518, Func Offset: 0x8
	// Line 378, Address: 0x1024524, Func Offset: 0x14
	// Line 379, Address: 0x102452c, Func Offset: 0x1c
	// Line 381, Address: 0x102453c, Func Offset: 0x2c
	// Func End, Address: 0x1024544, Func Offset: 0x34
}

// 
// Start address: 0x1024550
int flashout_new()
{
	// Line 383, Address: 0x1024550, Func Offset: 0
	// Line 385, Address: 0x1024558, Func Offset: 0x8
	// Line 387, Address: 0x1024564, Func Offset: 0x14
	// Line 390, Address: 0x102456c, Func Offset: 0x1c
	// Line 391, Address: 0x102458c, Func Offset: 0x3c
	// Line 392, Address: 0x1024594, Func Offset: 0x44
	// Line 394, Address: 0x10245a0, Func Offset: 0x50
	// Line 395, Address: 0x10245a4, Func Offset: 0x54
	// Func End, Address: 0x10245b4, Func Offset: 0x64
}

// 
// Start address: 0x10245c0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 398, Address: 0x10245c0, Func Offset: 0
	// Line 402, Address: 0x10245d0, Func Offset: 0x10
	// Line 404, Address: 0x1024604, Func Offset: 0x44
	// Line 405, Address: 0x1024610, Func Offset: 0x50
	// Line 406, Address: 0x102461c, Func Offset: 0x5c
	// Line 407, Address: 0x1024620, Func Offset: 0x60
	// Line 408, Address: 0x102463c, Func Offset: 0x7c
	// Line 410, Address: 0x1024670, Func Offset: 0xb0
	// Line 411, Address: 0x102467c, Func Offset: 0xbc
	// Line 412, Address: 0x1024688, Func Offset: 0xc8
	// Line 413, Address: 0x102468c, Func Offset: 0xcc
	// Line 416, Address: 0x10246a8, Func Offset: 0xe8
	// Func End, Address: 0x10246c0, Func Offset: 0x100
}

// 
// Start address: 0x10246c0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 419, Address: 0x10246c0, Func Offset: 0
	// Line 420, Address: 0x10246c8, Func Offset: 0x8
	// Line 421, Address: 0x10246e0, Func Offset: 0x20
	// Line 422, Address: 0x10246f4, Func Offset: 0x34
	// Line 423, Address: 0x10246fc, Func Offset: 0x3c
	// Line 424, Address: 0x1024714, Func Offset: 0x54
	// Line 425, Address: 0x1024724, Func Offset: 0x64
	// Line 426, Address: 0x102472c, Func Offset: 0x6c
	// Line 427, Address: 0x1024744, Func Offset: 0x84
	// Line 431, Address: 0x1024754, Func Offset: 0x94
	// Func End, Address: 0x1024760, Func Offset: 0xa0
}

// 
// Start address: 0x1024760
void colorset(int ColorNo)
{
	// Line 434, Address: 0x1024760, Func Offset: 0
	// Line 435, Address: 0x102476c, Func Offset: 0xc
	// Line 436, Address: 0x102477c, Func Offset: 0x1c
	// Func End, Address: 0x102478c, Func Offset: 0x2c
}

// 
// Start address: 0x1024790
void colorset2(int ColorNo)
{
	// Line 438, Address: 0x1024790, Func Offset: 0
	// Line 439, Address: 0x102479c, Func Offset: 0xc
	// Line 440, Address: 0x10247ac, Func Offset: 0x1c
	// Func End, Address: 0x10247bc, Func Offset: 0x2c
}

// 
// Start address: 0x10247c0
void colorset3(int ColorNo)
{
	// Line 442, Address: 0x10247c0, Func Offset: 0
	// Line 443, Address: 0x10247cc, Func Offset: 0xc
	// Line 444, Address: 0x10247dc, Func Offset: 0x1c
	// Func End, Address: 0x10247ec, Func Offset: 0x2c
}

// 
// Start address: 0x10247f0
void colorset4(int ColorNo)
{
	// Line 446, Address: 0x10247f0, Func Offset: 0
	// Line 447, Address: 0x10247fc, Func Offset: 0xc
	// Line 448, Address: 0x102480c, Func Offset: 0x1c
	// Func End, Address: 0x102481c, Func Offset: 0x2c
}

// 
// Start address: 0x1024820
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 454, Address: 0x1024820, Func Offset: 0
	// Line 459, Address: 0x1024840, Func Offset: 0x20
	// Line 461, Address: 0x10248a8, Func Offset: 0x88
	// Line 463, Address: 0x10248b8, Func Offset: 0x98
	// Line 465, Address: 0x10248c8, Func Offset: 0xa8
	// Line 467, Address: 0x10248d8, Func Offset: 0xb8
	// Line 470, Address: 0x10248e0, Func Offset: 0xc0
	// Line 471, Address: 0x10248f8, Func Offset: 0xd8
	// Line 472, Address: 0x1024920, Func Offset: 0x100
	// Line 473, Address: 0x1024940, Func Offset: 0x120
	// Line 474, Address: 0x102494c, Func Offset: 0x12c
	// Line 475, Address: 0x102497c, Func Offset: 0x15c
	// Line 477, Address: 0x102498c, Func Offset: 0x16c
	// Func End, Address: 0x10249ac, Func Offset: 0x18c
}

// 
// Start address: 0x10249b0
int FadeProc()
{
	// Line 482, Address: 0x10249b0, Func Offset: 0
	// Line 483, Address: 0x10249b8, Func Offset: 0x8
	// Line 485, Address: 0x10249fc, Func Offset: 0x4c
	// Line 487, Address: 0x1024a0c, Func Offset: 0x5c
	// Line 489, Address: 0x1024a1c, Func Offset: 0x6c
	// Line 491, Address: 0x1024a2c, Func Offset: 0x7c
	// Line 493, Address: 0x1024a3c, Func Offset: 0x8c
	// Line 495, Address: 0x1024a40, Func Offset: 0x90
	// Func End, Address: 0x1024a50, Func Offset: 0xa0
}

