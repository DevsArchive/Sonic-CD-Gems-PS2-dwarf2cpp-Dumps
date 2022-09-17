typedef struct tagPALETTEENTRY;



struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

unsigned char colorcnt;
unsigned char startcolor;
int* lpFadeFlag;
int FadeCount;
tagPALETTEENTRY* lpcolorwk0;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk1;
tagPALETTEENTRY* lpcolorwk3;
unsigned char flash_flg;

void fadein();
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
int FadeProc();

// 
// Start address: 0x10039f0
void fadein()
{
	// Line 46, Address: 0x10039f0, Func Offset: 0
	// Line 47, Address: 0x10039f8, Func Offset: 0x8
	// Line 48, Address: 0x1003a00, Func Offset: 0x10
	// Line 49, Address: 0x1003a0c, Func Offset: 0x1c
	// Line 50, Address: 0x1003a14, Func Offset: 0x24
	// Func End, Address: 0x1003a24, Func Offset: 0x34
}

// 
// Start address: 0x1003a30
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 53, Address: 0x1003a30, Func Offset: 0
	// Line 57, Address: 0x1003a3c, Func Offset: 0xc
	// Line 59, Address: 0x1003a70, Func Offset: 0x40
	// Line 60, Address: 0x1003a7c, Func Offset: 0x4c
	// Line 61, Address: 0x1003a80, Func Offset: 0x50
	// Line 62, Address: 0x1003a84, Func Offset: 0x54
	// Line 63, Address: 0x1003a88, Func Offset: 0x58
	// Line 64, Address: 0x1003a90, Func Offset: 0x60
	// Line 65, Address: 0x1003a94, Func Offset: 0x64
	// Line 66, Address: 0x1003ab0, Func Offset: 0x80
	// Line 67, Address: 0x1003ab8, Func Offset: 0x88
	// Line 69, Address: 0x1003ac8, Func Offset: 0x98
	// Func End, Address: 0x1003adc, Func Offset: 0xac
}

// 
// Start address: 0x1003ae0
int fadein0_new()
{
	// Line 73, Address: 0x1003ae0, Func Offset: 0
	// Line 75, Address: 0x1003ae8, Func Offset: 0x8
	// Line 77, Address: 0x1003af4, Func Offset: 0x14
	// Line 80, Address: 0x1003afc, Func Offset: 0x1c
	// Line 81, Address: 0x1003b1c, Func Offset: 0x3c
	// Line 82, Address: 0x1003b24, Func Offset: 0x44
	// Line 84, Address: 0x1003b30, Func Offset: 0x50
	// Line 85, Address: 0x1003b34, Func Offset: 0x54
	// Func End, Address: 0x1003b44, Func Offset: 0x64
}

// 
// Start address: 0x1003b50
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 89, Address: 0x1003b50, Func Offset: 0
	// Line 93, Address: 0x1003b64, Func Offset: 0x14
	// Line 94, Address: 0x1003b98, Func Offset: 0x48
	// Line 96, Address: 0x1003bcc, Func Offset: 0x7c
	// Line 97, Address: 0x1003bd8, Func Offset: 0x88
	// Line 98, Address: 0x1003be8, Func Offset: 0x98
	// Line 99, Address: 0x1003bec, Func Offset: 0x9c
	// Line 100, Address: 0x1003bf0, Func Offset: 0xa0
	// Line 111, Address: 0x1003c0c, Func Offset: 0xbc
	// Func End, Address: 0x1003c28, Func Offset: 0xd8
}

// 
// Start address: 0x1003c30
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 115, Address: 0x1003c30, Func Offset: 0
	// Line 116, Address: 0x1003c3c, Func Offset: 0xc
	// Line 119, Address: 0x1003c9c, Func Offset: 0x6c
	// Line 120, Address: 0x1003cc0, Func Offset: 0x90
	// Line 121, Address: 0x1003cd0, Func Offset: 0xa0
	// Line 122, Address: 0x1003cd8, Func Offset: 0xa8
	// Line 123, Address: 0x1003cfc, Func Offset: 0xcc
	// Line 124, Address: 0x1003d0c, Func Offset: 0xdc
	// Line 125, Address: 0x1003d14, Func Offset: 0xe4
	// Line 126, Address: 0x1003d38, Func Offset: 0x108
	// Line 130, Address: 0x1003d4c, Func Offset: 0x11c
	// Func End, Address: 0x1003d58, Func Offset: 0x128
}

// 
// Start address: 0x1003d60
void fadeout()
{
	// Line 134, Address: 0x1003d60, Func Offset: 0
	// Line 135, Address: 0x1003d68, Func Offset: 0x8
	// Line 137, Address: 0x1003d74, Func Offset: 0x14
	// Line 138, Address: 0x1003d7c, Func Offset: 0x1c
	// Line 140, Address: 0x1003d8c, Func Offset: 0x2c
	// Func End, Address: 0x1003d94, Func Offset: 0x34
}

// 
// Start address: 0x1003da0
int fadeout_new()
{
	// Line 144, Address: 0x1003da0, Func Offset: 0
	// Line 146, Address: 0x1003da8, Func Offset: 0x8
	// Line 148, Address: 0x1003db4, Func Offset: 0x14
	// Line 151, Address: 0x1003dbc, Func Offset: 0x1c
	// Line 152, Address: 0x1003ddc, Func Offset: 0x3c
	// Line 153, Address: 0x1003de4, Func Offset: 0x44
	// Line 155, Address: 0x1003df0, Func Offset: 0x50
	// Line 156, Address: 0x1003df4, Func Offset: 0x54
	// Func End, Address: 0x1003e04, Func Offset: 0x64
}

// 
// Start address: 0x1003e10
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 159, Address: 0x1003e10, Func Offset: 0
	// Line 163, Address: 0x1003e20, Func Offset: 0x10
	// Line 165, Address: 0x1003e54, Func Offset: 0x44
	// Line 166, Address: 0x1003e60, Func Offset: 0x50
	// Line 167, Address: 0x1003e6c, Func Offset: 0x5c
	// Line 168, Address: 0x1003e70, Func Offset: 0x60
	// Line 169, Address: 0x1003e8c, Func Offset: 0x7c
	// Line 171, Address: 0x1003ec0, Func Offset: 0xb0
	// Line 172, Address: 0x1003ecc, Func Offset: 0xbc
	// Line 173, Address: 0x1003ed8, Func Offset: 0xc8
	// Line 174, Address: 0x1003edc, Func Offset: 0xcc
	// Line 177, Address: 0x1003ef8, Func Offset: 0xe8
	// Func End, Address: 0x1003f10, Func Offset: 0x100
}

// 
// Start address: 0x1003f10
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 180, Address: 0x1003f10, Func Offset: 0
	// Line 181, Address: 0x1003f18, Func Offset: 0x8
	// Line 182, Address: 0x1003f28, Func Offset: 0x18
	// Line 183, Address: 0x1003f3c, Func Offset: 0x2c
	// Line 184, Address: 0x1003f44, Func Offset: 0x34
	// Line 185, Address: 0x1003f54, Func Offset: 0x44
	// Line 186, Address: 0x1003f64, Func Offset: 0x54
	// Line 187, Address: 0x1003f6c, Func Offset: 0x5c
	// Line 188, Address: 0x1003f7c, Func Offset: 0x6c
	// Line 191, Address: 0x1003f8c, Func Offset: 0x7c
	// Func End, Address: 0x1003f98, Func Offset: 0x88
}

// 
// Start address: 0x1003fa0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 196, Address: 0x1003fa0, Func Offset: 0
	// Line 200, Address: 0x1003fac, Func Offset: 0xc
	// Line 201, Address: 0x1003fb4, Func Offset: 0x14
	// Line 203, Address: 0x1003fc0, Func Offset: 0x20
	// Line 205, Address: 0x1003ff4, Func Offset: 0x54
	// Line 206, Address: 0x1004000, Func Offset: 0x60
	// Line 207, Address: 0x1004008, Func Offset: 0x68
	// Line 208, Address: 0x1004010, Func Offset: 0x70
	// Line 209, Address: 0x1004018, Func Offset: 0x78
	// Line 210, Address: 0x1004020, Func Offset: 0x80
	// Line 211, Address: 0x1004024, Func Offset: 0x84
	// Line 212, Address: 0x1004040, Func Offset: 0xa0
	// Line 213, Address: 0x1004048, Func Offset: 0xa8
	// Line 215, Address: 0x1004058, Func Offset: 0xb8
	// Func End, Address: 0x100406c, Func Offset: 0xcc
}

// 
// Start address: 0x1004070
int flashin_new()
{
	// Line 217, Address: 0x1004070, Func Offset: 0
	// Line 219, Address: 0x1004078, Func Offset: 0x8
	// Line 221, Address: 0x1004084, Func Offset: 0x14
	// Line 224, Address: 0x100408c, Func Offset: 0x1c
	// Line 225, Address: 0x10040ac, Func Offset: 0x3c
	// Line 226, Address: 0x10040b4, Func Offset: 0x44
	// Line 228, Address: 0x10040c0, Func Offset: 0x50
	// Line 229, Address: 0x10040c4, Func Offset: 0x54
	// Func End, Address: 0x10040d4, Func Offset: 0x64
}

// 
// Start address: 0x10040e0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 231, Address: 0x10040e0, Func Offset: 0
	// Line 235, Address: 0x10040f4, Func Offset: 0x14
	// Line 236, Address: 0x1004128, Func Offset: 0x48
	// Line 238, Address: 0x100415c, Func Offset: 0x7c
	// Line 239, Address: 0x1004168, Func Offset: 0x88
	// Line 240, Address: 0x1004178, Func Offset: 0x98
	// Line 241, Address: 0x100417c, Func Offset: 0x9c
	// Line 242, Address: 0x1004180, Func Offset: 0xa0
	// Line 253, Address: 0x100419c, Func Offset: 0xbc
	// Func End, Address: 0x10041b8, Func Offset: 0xd8
}

// 
// Start address: 0x10041c0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 257, Address: 0x10041c0, Func Offset: 0
	// Line 258, Address: 0x10041cc, Func Offset: 0xc
	// Line 261, Address: 0x100422c, Func Offset: 0x6c
	// Line 262, Address: 0x1004250, Func Offset: 0x90
	// Line 263, Address: 0x1004260, Func Offset: 0xa0
	// Line 264, Address: 0x1004268, Func Offset: 0xa8
	// Line 265, Address: 0x100428c, Func Offset: 0xcc
	// Line 266, Address: 0x100429c, Func Offset: 0xdc
	// Line 267, Address: 0x10042a4, Func Offset: 0xe4
	// Line 268, Address: 0x10042c8, Func Offset: 0x108
	// Line 272, Address: 0x10042dc, Func Offset: 0x11c
	// Func End, Address: 0x10042e8, Func Offset: 0x128
}

// 
// Start address: 0x10042f0
void flashout()
{
	// Line 276, Address: 0x10042f0, Func Offset: 0
	// Line 277, Address: 0x10042f8, Func Offset: 0x8
	// Line 279, Address: 0x1004304, Func Offset: 0x14
	// Line 280, Address: 0x100430c, Func Offset: 0x1c
	// Line 282, Address: 0x100431c, Func Offset: 0x2c
	// Func End, Address: 0x1004324, Func Offset: 0x34
}

// 
// Start address: 0x1004330
int flashout_new()
{
	// Line 284, Address: 0x1004330, Func Offset: 0
	// Line 286, Address: 0x1004338, Func Offset: 0x8
	// Line 288, Address: 0x1004344, Func Offset: 0x14
	// Line 291, Address: 0x100434c, Func Offset: 0x1c
	// Line 292, Address: 0x100436c, Func Offset: 0x3c
	// Line 293, Address: 0x1004374, Func Offset: 0x44
	// Line 295, Address: 0x1004380, Func Offset: 0x50
	// Line 296, Address: 0x1004384, Func Offset: 0x54
	// Func End, Address: 0x1004394, Func Offset: 0x64
}

// 
// Start address: 0x10043a0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 299, Address: 0x10043a0, Func Offset: 0
	// Line 303, Address: 0x10043b0, Func Offset: 0x10
	// Line 305, Address: 0x10043e4, Func Offset: 0x44
	// Line 306, Address: 0x10043f0, Func Offset: 0x50
	// Line 307, Address: 0x10043fc, Func Offset: 0x5c
	// Line 308, Address: 0x1004400, Func Offset: 0x60
	// Line 309, Address: 0x100441c, Func Offset: 0x7c
	// Line 311, Address: 0x1004450, Func Offset: 0xb0
	// Line 312, Address: 0x100445c, Func Offset: 0xbc
	// Line 313, Address: 0x1004468, Func Offset: 0xc8
	// Line 314, Address: 0x100446c, Func Offset: 0xcc
	// Line 317, Address: 0x1004488, Func Offset: 0xe8
	// Func End, Address: 0x10044a0, Func Offset: 0x100
}

// 
// Start address: 0x10044a0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 320, Address: 0x10044a0, Func Offset: 0
	// Line 321, Address: 0x10044a8, Func Offset: 0x8
	// Line 322, Address: 0x10044c0, Func Offset: 0x20
	// Line 323, Address: 0x10044d4, Func Offset: 0x34
	// Line 324, Address: 0x10044dc, Func Offset: 0x3c
	// Line 325, Address: 0x10044f4, Func Offset: 0x54
	// Line 326, Address: 0x1004504, Func Offset: 0x64
	// Line 327, Address: 0x100450c, Func Offset: 0x6c
	// Line 328, Address: 0x1004524, Func Offset: 0x84
	// Line 332, Address: 0x1004534, Func Offset: 0x94
	// Func End, Address: 0x1004540, Func Offset: 0xa0
}

// 
// Start address: 0x1004540
int FadeProc()
{
	int ret;
	// Line 335, Address: 0x1004540, Func Offset: 0
	// Line 338, Address: 0x100454c, Func Offset: 0xc
	// Line 340, Address: 0x1004590, Func Offset: 0x50
	// Line 341, Address: 0x100459c, Func Offset: 0x5c
	// Line 344, Address: 0x10045a4, Func Offset: 0x64
	// Line 345, Address: 0x10045b0, Func Offset: 0x70
	// Line 348, Address: 0x10045b8, Func Offset: 0x78
	// Line 349, Address: 0x10045c4, Func Offset: 0x84
	// Line 352, Address: 0x10045cc, Func Offset: 0x8c
	// Line 353, Address: 0x10045d8, Func Offset: 0x98
	// Line 356, Address: 0x10045e0, Func Offset: 0xa0
	// Line 360, Address: 0x10045e4, Func Offset: 0xa4
	// Line 361, Address: 0x10045ec, Func Offset: 0xac
	// Line 362, Address: 0x10045fc, Func Offset: 0xbc
	// Line 363, Address: 0x1004600, Func Offset: 0xc0
	// Func End, Address: 0x1004614, Func Offset: 0xd4
}

