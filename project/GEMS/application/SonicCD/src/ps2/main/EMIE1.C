typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_8)(_anon0*);
typedef void(*type_10)(_anon0*);

typedef _anon9 type_0[20];
typedef _anon9 type_1[0];
typedef tagPALETTEENTRY type_2[0];
typedef _anon1* type_3[0];
typedef tagPALETTEENTRY type_4[16];
typedef char* type_5[0];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef void(*type_9)(_anon0*)[2];
typedef void(*type_11)(_anon0*)[5];
typedef _anon0 type_12[128];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon2 xposi;
	_anon2 yposi;
	_anon5 xspeed;
	_anon5 yspeed;
	_anon5 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon5 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon5 direc;
	_anon5 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
	};
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

union _anon2
{
	int l;
	_anon3 w;
	_anon4 b;
};

struct _anon3
{
	short l;
	short h;
};

struct _anon4
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon5
{
	short w;
	_anon6 b;
};

struct _anon6
{
	char l;
	char h;
};

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

void(*em1_tbl)(_anon0*)[5];
tagPALETTEENTRY zone1colora[0];
unsigned char ta_flag;
char* em_pchg[0];
_anon0 actwk[128];
_anon1* emie1pat[0];
_anon2 pltime;
_anon7 swdata;
_anon7 swdata1;
unsigned char plpower_m;
unsigned char plpower_a;
unsigned char plpower_b;
_anon5 editmode;
tagPALETTEENTRY emie1_clr[16];
tagPALETTEENTRY* lpcolorwk;
void(*ht1_tbl)(_anon0*)[2];

void emie1(_anon0* pActwk);
void emie1_init(_anon0* pActwk);
void emie1_matu(_anon0* pActwk);
void emie1_dakii(_anon0* pActwk);
void emie1_tobii(_anon0* pActwk);
void emie1_tobim(_anon0* pActwk);
void emie_play(_anon0* pEmiewk, _anon0* pSonicwk);
void setdirect(_anon0* pEmiewk, _anon0* pSonicwk);
void speedset(_anon0* pActwk);
void speedsetx(_anon0* pActwk);
void speedsety(_anon0* pActwk);
void jumpchk_d();
void pljumpset();
void dakicheck(_anon0* pActwk);
void empatchg(_anon0* pActwk, char** pPattbl);
void emie1clrset();
void emie1clrsetx(tagPALETTEENTRY* pPalet);
void heartset(_anon0* pActwk);
void heart1(_anon0* pActwk);
void heart1_init(_anon0* pActwk);
void heart1_move(_anon0* pActwk);

// 
// Start address: 0x10052b0
void emie1(_anon0* pActwk)
{
	// Line 146, Address: 0x10052b0, Func Offset: 0
	// Line 147, Address: 0x10052bc, Func Offset: 0xc
	// Line 148, Address: 0x10052cc, Func Offset: 0x1c
	// Line 149, Address: 0x10052dc, Func Offset: 0x2c
	// Line 150, Address: 0x10052e4, Func Offset: 0x34
	// Line 151, Address: 0x1005328, Func Offset: 0x78
	// Line 153, Address: 0x1005334, Func Offset: 0x84
	// Line 154, Address: 0x1005340, Func Offset: 0x90
	// Line 156, Address: 0x100534c, Func Offset: 0x9c
	// Line 157, Address: 0x1005364, Func Offset: 0xb4
	// Line 160, Address: 0x1005374, Func Offset: 0xc4
	// Func End, Address: 0x1005384, Func Offset: 0xd4
}

// 
// Start address: 0x1005390
void emie1_init(_anon0* pActwk)
{
	short iScd;
	short xwk;
	// Line 166, Address: 0x1005390, Func Offset: 0
	// Line 169, Address: 0x10053a4, Func Offset: 0x14
	// Line 170, Address: 0x10053b4, Func Offset: 0x24
	// Line 171, Address: 0x10053c0, Func Offset: 0x30
	// Line 172, Address: 0x10053cc, Func Offset: 0x3c
	// Line 174, Address: 0x10053dc, Func Offset: 0x4c
	// Line 175, Address: 0x10053e8, Func Offset: 0x58
	// Line 176, Address: 0x10053f4, Func Offset: 0x64
	// Line 178, Address: 0x1005404, Func Offset: 0x74
	// Line 180, Address: 0x100540c, Func Offset: 0x7c
	// Line 181, Address: 0x1005414, Func Offset: 0x84
	// Line 182, Address: 0x1005424, Func Offset: 0x94
	// Line 184, Address: 0x1005450, Func Offset: 0xc0
	// Line 186, Address: 0x1005464, Func Offset: 0xd4
	// Line 187, Address: 0x1005474, Func Offset: 0xe4
	// Line 188, Address: 0x10054a0, Func Offset: 0x110
	// Line 191, Address: 0x10054bc, Func Offset: 0x12c
	// Line 192, Address: 0x10054d0, Func Offset: 0x140
	// Line 195, Address: 0x10054e0, Func Offset: 0x150
	// Line 196, Address: 0x10054ec, Func Offset: 0x15c
	// Line 197, Address: 0x1005500, Func Offset: 0x170
	// Func End, Address: 0x1005518, Func Offset: 0x188
}

// 
// Start address: 0x1005520
void emie1_matu(_anon0* pActwk)
{
	short lenwk;
	unsigned char dakiflgwk;
	// Line 203, Address: 0x1005520, Func Offset: 0
	// Line 207, Address: 0x1005534, Func Offset: 0x14
	// Line 209, Address: 0x1005548, Func Offset: 0x28
	// Line 210, Address: 0x1005594, Func Offset: 0x74
	// Line 213, Address: 0x10055b0, Func Offset: 0x90
	// Line 215, Address: 0x10055bc, Func Offset: 0x9c
	// Line 219, Address: 0x10055f0, Func Offset: 0xd0
	// Line 221, Address: 0x1005600, Func Offset: 0xe0
	// Line 224, Address: 0x1005614, Func Offset: 0xf4
	// Line 225, Address: 0x100561c, Func Offset: 0xfc
	// Line 226, Address: 0x1005638, Func Offset: 0x118
	// Line 227, Address: 0x1005644, Func Offset: 0x124
	// Line 228, Address: 0x1005658, Func Offset: 0x138
	// Line 231, Address: 0x1005660, Func Offset: 0x140
	// Line 237, Address: 0x1005670, Func Offset: 0x150
	// Line 238, Address: 0x1005688, Func Offset: 0x168
	// Line 239, Address: 0x1005698, Func Offset: 0x178
	// Line 240, Address: 0x10056a0, Func Offset: 0x180
	// Line 243, Address: 0x10056b0, Func Offset: 0x190
	// Line 244, Address: 0x10056cc, Func Offset: 0x1ac
	// Line 245, Address: 0x10056d8, Func Offset: 0x1b8
	// Line 246, Address: 0x10056fc, Func Offset: 0x1dc
	// Line 251, Address: 0x1005708, Func Offset: 0x1e8
	// Line 253, Address: 0x1005720, Func Offset: 0x200
	// Line 257, Address: 0x1005750, Func Offset: 0x230
	// Line 259, Address: 0x1005764, Func Offset: 0x244
	// Line 260, Address: 0x100578c, Func Offset: 0x26c
	// Line 261, Address: 0x100579c, Func Offset: 0x27c
	// Line 262, Address: 0x10057a8, Func Offset: 0x288
	// Line 264, Address: 0x10057b4, Func Offset: 0x294
	// Line 265, Address: 0x10057c0, Func Offset: 0x2a0
	// Line 266, Address: 0x10057d4, Func Offset: 0x2b4
	// Line 271, Address: 0x10057dc, Func Offset: 0x2bc
	// Line 275, Address: 0x100580c, Func Offset: 0x2ec
	// Line 277, Address: 0x1005820, Func Offset: 0x300
	// Line 278, Address: 0x1005848, Func Offset: 0x328
	// Line 279, Address: 0x1005858, Func Offset: 0x338
	// Line 280, Address: 0x1005864, Func Offset: 0x344
	// Line 282, Address: 0x1005870, Func Offset: 0x350
	// Line 283, Address: 0x100587c, Func Offset: 0x35c
	// Line 284, Address: 0x1005890, Func Offset: 0x370
	// Line 289, Address: 0x1005898, Func Offset: 0x378
	// Line 291, Address: 0x10058a8, Func Offset: 0x388
	// Line 292, Address: 0x10058b8, Func Offset: 0x398
	// Line 295, Address: 0x10058c0, Func Offset: 0x3a0
	// Line 296, Address: 0x10058dc, Func Offset: 0x3bc
	// Line 297, Address: 0x10058e8, Func Offset: 0x3c8
	// Line 298, Address: 0x10058fc, Func Offset: 0x3dc
	// Line 303, Address: 0x1005904, Func Offset: 0x3e4
	// Line 305, Address: 0x100590c, Func Offset: 0x3ec
	// Line 308, Address: 0x100591c, Func Offset: 0x3fc
	// Line 309, Address: 0x100592c, Func Offset: 0x40c
	// Line 311, Address: 0x1005944, Func Offset: 0x424
	// Line 312, Address: 0x1005968, Func Offset: 0x448
	// Line 316, Address: 0x1005970, Func Offset: 0x450
	// Line 317, Address: 0x1005980, Func Offset: 0x460
	// Line 318, Address: 0x100598c, Func Offset: 0x46c
	// Line 319, Address: 0x10059a0, Func Offset: 0x480
	// Line 323, Address: 0x10059a8, Func Offset: 0x488
	// Line 324, Address: 0x10059b4, Func Offset: 0x494
	// Line 328, Address: 0x10059c4, Func Offset: 0x4a4
	// Line 329, Address: 0x10059d0, Func Offset: 0x4b0
	// Line 331, Address: 0x10059e0, Func Offset: 0x4c0
	// Line 332, Address: 0x10059f8, Func Offset: 0x4d8
	// Line 333, Address: 0x1005a04, Func Offset: 0x4e4
	// Line 334, Address: 0x1005a0c, Func Offset: 0x4ec
	// Line 337, Address: 0x1005a18, Func Offset: 0x4f8
	// Line 339, Address: 0x1005a34, Func Offset: 0x514
	// Line 340, Address: 0x1005a3c, Func Offset: 0x51c
	// Line 341, Address: 0x1005a4c, Func Offset: 0x52c
	// Line 343, Address: 0x1005a5c, Func Offset: 0x53c
	// Line 345, Address: 0x1005a64, Func Offset: 0x544
	// Line 346, Address: 0x1005a80, Func Offset: 0x560
	// Line 347, Address: 0x1005a8c, Func Offset: 0x56c
	// Line 352, Address: 0x1005aa0, Func Offset: 0x580
	// Func End, Address: 0x1005ab8, Func Offset: 0x598
}

// 
// Start address: 0x1005ac0
void emie1_dakii(_anon0* pActwk)
{
	// Line 358, Address: 0x1005ac0, Func Offset: 0
	// Line 362, Address: 0x1005acc, Func Offset: 0xc
	// Line 364, Address: 0x1005ae0, Func Offset: 0x20
	// Line 365, Address: 0x1005aec, Func Offset: 0x2c
	// Line 367, Address: 0x1005b00, Func Offset: 0x40
	// Line 369, Address: 0x1005b14, Func Offset: 0x54
	// Line 370, Address: 0x1005b2c, Func Offset: 0x6c
	// Line 371, Address: 0x1005b50, Func Offset: 0x90
	// Line 372, Address: 0x1005b58, Func Offset: 0x98
	// Line 375, Address: 0x1005b7c, Func Offset: 0xbc
	// Line 377, Address: 0x1005b8c, Func Offset: 0xcc
	// Line 378, Address: 0x1005ba4, Func Offset: 0xe4
	// Line 379, Address: 0x1005bac, Func Offset: 0xec
	// Line 381, Address: 0x1005bc4, Func Offset: 0x104
	// Line 382, Address: 0x1005bd4, Func Offset: 0x114
	// Line 383, Address: 0x1005be0, Func Offset: 0x120
	// Line 385, Address: 0x1005c04, Func Offset: 0x144
	// Line 386, Address: 0x1005c0c, Func Offset: 0x14c
	// Line 387, Address: 0x1005c1c, Func Offset: 0x15c
	// Line 388, Address: 0x1005c28, Func Offset: 0x168
	// Line 389, Address: 0x1005c30, Func Offset: 0x170
	// Line 390, Address: 0x1005c3c, Func Offset: 0x17c
	// Line 392, Address: 0x1005c50, Func Offset: 0x190
	// Func End, Address: 0x1005c60, Func Offset: 0x1a0
}

// 
// Start address: 0x1005c60
void emie1_tobii(_anon0* pActwk)
{
	short lenwk;
	// Line 398, Address: 0x1005c60, Func Offset: 0
	// Line 401, Address: 0x1005c70, Func Offset: 0x10
	// Line 403, Address: 0x1005c7c, Func Offset: 0x1c
	// Line 405, Address: 0x1005cc8, Func Offset: 0x68
	// Line 408, Address: 0x1005ce4, Func Offset: 0x84
	// Line 409, Address: 0x1005cf8, Func Offset: 0x98
	// Line 410, Address: 0x1005d00, Func Offset: 0xa0
	// Line 411, Address: 0x1005d08, Func Offset: 0xa8
	// Line 413, Address: 0x1005d20, Func Offset: 0xc0
	// Line 414, Address: 0x1005d2c, Func Offset: 0xcc
	// Line 415, Address: 0x1005d34, Func Offset: 0xd4
	// Line 419, Address: 0x1005d40, Func Offset: 0xe0
	// Line 420, Address: 0x1005d4c, Func Offset: 0xec
	// Line 422, Address: 0x1005d5c, Func Offset: 0xfc
	// Line 423, Address: 0x1005d68, Func Offset: 0x108
	// Func End, Address: 0x1005d7c, Func Offset: 0x11c
}

// 
// Start address: 0x1005d80
void emie1_tobim(_anon0* pActwk)
{
	// Line 429, Address: 0x1005d80, Func Offset: 0
	// Line 430, Address: 0x1005d8c, Func Offset: 0xc
	// Line 431, Address: 0x1005d98, Func Offset: 0x18
	// Line 432, Address: 0x1005dc0, Func Offset: 0x40
	// Line 435, Address: 0x1005dcc, Func Offset: 0x4c
	// Line 437, Address: 0x1005de8, Func Offset: 0x68
	// Line 438, Address: 0x1005df0, Func Offset: 0x70
	// Line 440, Address: 0x1005df8, Func Offset: 0x78
	// Line 441, Address: 0x1005e1c, Func Offset: 0x9c
	// Line 442, Address: 0x1005e2c, Func Offset: 0xac
	// Line 445, Address: 0x1005e34, Func Offset: 0xb4
	// Line 446, Address: 0x1005e44, Func Offset: 0xc4
	// Line 448, Address: 0x1005e50, Func Offset: 0xd0
	// Func End, Address: 0x1005e60, Func Offset: 0xe0
}

// 
// Start address: 0x1005e60
void emie_play(_anon0* pEmiewk, _anon0* pSonicwk)
{
	// Line 465, Address: 0x1005e60, Func Offset: 0
	// Line 466, Address: 0x1005e70, Func Offset: 0x10
	// Line 467, Address: 0x1005e80, Func Offset: 0x20
	// Line 468, Address: 0x1005e8c, Func Offset: 0x2c
	// Line 470, Address: 0x1005ea8, Func Offset: 0x48
	// Line 472, Address: 0x1005ec0, Func Offset: 0x60
	// Line 473, Address: 0x1005edc, Func Offset: 0x7c
	// Line 474, Address: 0x1005eec, Func Offset: 0x8c
	// Line 475, Address: 0x1005ef4, Func Offset: 0x94
	// Line 477, Address: 0x1005efc, Func Offset: 0x9c
	// Line 479, Address: 0x1005f04, Func Offset: 0xa4
	// Line 480, Address: 0x1005f20, Func Offset: 0xc0
	// Line 481, Address: 0x1005f30, Func Offset: 0xd0
	// Line 482, Address: 0x1005f38, Func Offset: 0xd8
	// Line 486, Address: 0x1005f40, Func Offset: 0xe0
	// Func End, Address: 0x1005f50, Func Offset: 0xf0
}

// 
// Start address: 0x1005f50
void setdirect(_anon0* pEmiewk, _anon0* pSonicwk)
{
	// Line 500, Address: 0x1005f50, Func Offset: 0
	// Line 501, Address: 0x1005f5c, Func Offset: 0xc
	// Line 503, Address: 0x1005f88, Func Offset: 0x38
	// Line 504, Address: 0x1005f98, Func Offset: 0x48
	// Line 505, Address: 0x1005fa8, Func Offset: 0x58
	// Line 507, Address: 0x1005fb0, Func Offset: 0x60
	// Line 508, Address: 0x1005fc0, Func Offset: 0x70
	// Line 510, Address: 0x1005fd0, Func Offset: 0x80
	// Func End, Address: 0x1005fdc, Func Offset: 0x8c
}

// 
// Start address: 0x1005fe0
void speedset(_anon0* pActwk)
{
	// Line 522, Address: 0x1005fe0, Func Offset: 0
	// Line 523, Address: 0x1005fec, Func Offset: 0xc
	// Line 524, Address: 0x1005ff8, Func Offset: 0x18
	// Line 525, Address: 0x1006004, Func Offset: 0x24
	// Func End, Address: 0x1006014, Func Offset: 0x34
}

// 
// Start address: 0x1006020
void speedsetx(_anon0* pActwk)
{
	// Line 528, Address: 0x1006020, Func Offset: 0
	// Line 529, Address: 0x1006028, Func Offset: 0x8
	// Line 530, Address: 0x100604c, Func Offset: 0x2c
	// Func End, Address: 0x1006058, Func Offset: 0x38
}

// 
// Start address: 0x1006060
void speedsety(_anon0* pActwk)
{
	// Line 533, Address: 0x1006060, Func Offset: 0
	// Line 534, Address: 0x1006068, Func Offset: 0x8
	// Line 535, Address: 0x100608c, Func Offset: 0x2c
	// Func End, Address: 0x1006098, Func Offset: 0x38
}

// 
// Start address: 0x10060a0
void jumpchk_d()
{
	// Line 548, Address: 0x10060a0, Func Offset: 0
	// Line 550, Address: 0x10060a8, Func Offset: 0x8
	// Line 555, Address: 0x10060c0, Func Offset: 0x20
	// Line 556, Address: 0x10060c8, Func Offset: 0x28
	// Func End, Address: 0x10060d8, Func Offset: 0x38
}

// 
// Start address: 0x10060e0
void pljumpset()
{
	short sinwk;
	short coswk;
	// Line 559, Address: 0x10060e0, Func Offset: 0
	// Line 562, Address: 0x10060e8, Func Offset: 0x8
	// Line 563, Address: 0x10060f0, Func Offset: 0x10
	// Line 564, Address: 0x1006118, Func Offset: 0x38
	// Line 565, Address: 0x1006148, Func Offset: 0x68
	// Line 566, Address: 0x1006160, Func Offset: 0x80
	// Line 567, Address: 0x1006190, Func Offset: 0xb0
	// Line 569, Address: 0x10061a8, Func Offset: 0xc8
	// Line 570, Address: 0x10061bc, Func Offset: 0xdc
	// Line 571, Address: 0x10061d0, Func Offset: 0xf0
	// Line 572, Address: 0x10061dc, Func Offset: 0xfc
	// Line 574, Address: 0x10061e4, Func Offset: 0x104
	// Line 577, Address: 0x10061fc, Func Offset: 0x11c
	// Line 578, Address: 0x1006208, Func Offset: 0x128
	// Line 579, Address: 0x1006214, Func Offset: 0x134
	// Line 580, Address: 0x1006228, Func Offset: 0x148
	// Line 581, Address: 0x1006230, Func Offset: 0x150
	// Line 582, Address: 0x100623c, Func Offset: 0x15c
	// Line 583, Address: 0x1006248, Func Offset: 0x168
	// Line 584, Address: 0x100625c, Func Offset: 0x17c
	// Line 585, Address: 0x1006270, Func Offset: 0x190
	// Line 587, Address: 0x100627c, Func Offset: 0x19c
	// Func End, Address: 0x100628c, Func Offset: 0x1ac
}

// 
// Start address: 0x1006290
void dakicheck(_anon0* pActwk)
{
	short lenwk;
	// Line 599, Address: 0x1006290, Func Offset: 0
	// Line 605, Address: 0x10062a0, Func Offset: 0x10
	// Line 607, Address: 0x10062b8, Func Offset: 0x28
	// Line 612, Address: 0x10062e8, Func Offset: 0x58
	// Line 614, Address: 0x10062f0, Func Offset: 0x60
	// Line 621, Address: 0x1006320, Func Offset: 0x90
	// Line 625, Address: 0x100633c, Func Offset: 0xac
	// Line 629, Address: 0x100634c, Func Offset: 0xbc
	// Line 631, Address: 0x1006364, Func Offset: 0xd4
	// Line 635, Address: 0x10063b0, Func Offset: 0x120
	// Line 636, Address: 0x10063b8, Func Offset: 0x128
	// Line 642, Address: 0x1006404, Func Offset: 0x174
	// Line 643, Address: 0x100642c, Func Offset: 0x19c
	// Line 646, Address: 0x1006434, Func Offset: 0x1a4
	// Line 647, Address: 0x100646c, Func Offset: 0x1dc
	// Line 649, Address: 0x1006490, Func Offset: 0x200
	// Line 652, Address: 0x1006498, Func Offset: 0x208
	// Line 653, Address: 0x10064b8, Func Offset: 0x228
	// Line 656, Address: 0x10064d4, Func Offset: 0x244
	// Line 662, Address: 0x1006540, Func Offset: 0x2b0
	// Line 663, Address: 0x100654c, Func Offset: 0x2bc
	// Line 667, Address: 0x1006554, Func Offset: 0x2c4
	// Line 668, Address: 0x1006564, Func Offset: 0x2d4
	// Line 669, Address: 0x100657c, Func Offset: 0x2ec
	// Line 670, Address: 0x1006588, Func Offset: 0x2f8
	// Line 675, Address: 0x1006594, Func Offset: 0x304
	// Line 677, Address: 0x10065a0, Func Offset: 0x310
	// Func End, Address: 0x10065b4, Func Offset: 0x324
}

// 
// Start address: 0x10065c0
void empatchg(_anon0* pActwk, char** pPattbl)
{
	char* pPatdat;
	char patnowk;
	// Line 690, Address: 0x10065c0, Func Offset: 0
	// Line 693, Address: 0x10065d4, Func Offset: 0x14
	// Line 695, Address: 0x10065fc, Func Offset: 0x3c
	// Line 696, Address: 0x100660c, Func Offset: 0x4c
	// Line 697, Address: 0x1006614, Func Offset: 0x54
	// Line 700, Address: 0x100661c, Func Offset: 0x5c
	// Line 701, Address: 0x1006648, Func Offset: 0x88
	// Line 702, Address: 0x1006668, Func Offset: 0xa8
	// Line 704, Address: 0x1006694, Func Offset: 0xd4
	// Line 705, Address: 0x100669c, Func Offset: 0xdc
	// Line 709, Address: 0x10066b8, Func Offset: 0xf8
	// Line 712, Address: 0x10066d0, Func Offset: 0x110
	// Line 713, Address: 0x10066e0, Func Offset: 0x120
	// Line 717, Address: 0x1006724, Func Offset: 0x164
	// Line 720, Address: 0x1006744, Func Offset: 0x184
	// Line 722, Address: 0x1006754, Func Offset: 0x194
	// Func End, Address: 0x1006768, Func Offset: 0x1a8
}

// 
// Start address: 0x1006770
void emie1clrset()
{
	// Line 744, Address: 0x1006770, Func Offset: 0
	// Line 745, Address: 0x1006778, Func Offset: 0x8
	// Line 746, Address: 0x1006788, Func Offset: 0x18
	// Func End, Address: 0x1006798, Func Offset: 0x28
}

// 
// Start address: 0x10067a0
void emie1clrsetx(tagPALETTEENTRY* pPalet)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 758, Address: 0x10067a0, Func Offset: 0
	// Line 763, Address: 0x10067b0, Func Offset: 0x10
	// Line 765, Address: 0x10067bc, Func Offset: 0x1c
	// Line 766, Address: 0x10067c8, Func Offset: 0x28
	// Line 767, Address: 0x10067ec, Func Offset: 0x4c
	// Line 768, Address: 0x10067f0, Func Offset: 0x50
	// Line 769, Address: 0x10067fc, Func Offset: 0x5c
	// Line 770, Address: 0x100681c, Func Offset: 0x7c
	// Func End, Address: 0x1006830, Func Offset: 0x90
}

// 
// Start address: 0x1006830
void heartset(_anon0* pActwk)
{
	_anon0* pHeartact;
	short wk;
	// Line 782, Address: 0x1006830, Func Offset: 0
	// Line 786, Address: 0x1006840, Func Offset: 0x10
	// Line 788, Address: 0x1006858, Func Offset: 0x28
	// Line 789, Address: 0x1006880, Func Offset: 0x50
	// Line 790, Address: 0x1006890, Func Offset: 0x60
	// Line 793, Address: 0x10068a4, Func Offset: 0x74
	// Line 794, Address: 0x10068ac, Func Offset: 0x7c
	// Line 795, Address: 0x10068d4, Func Offset: 0xa4
	// Line 796, Address: 0x10068e4, Func Offset: 0xb4
	// Line 801, Address: 0x10068f8, Func Offset: 0xc8
	// Line 807, Address: 0x100690c, Func Offset: 0xdc
	// Line 808, Address: 0x1006918, Func Offset: 0xe8
	// Line 809, Address: 0x1006930, Func Offset: 0x100
	// Line 810, Address: 0x100693c, Func Offset: 0x10c
	// Line 811, Address: 0x1006944, Func Offset: 0x114
	// Line 814, Address: 0x1006950, Func Offset: 0x120
	// Line 815, Address: 0x1006968, Func Offset: 0x138
	// Line 818, Address: 0x1006984, Func Offset: 0x154
	// Line 819, Address: 0x10069b0, Func Offset: 0x180
	// Line 820, Address: 0x10069d4, Func Offset: 0x1a4
	// Func End, Address: 0x10069e8, Func Offset: 0x1b8
}

// 
// Start address: 0x10069f0
void heart1(_anon0* pActwk)
{
	// Line 841, Address: 0x10069f0, Func Offset: 0
	// Line 842, Address: 0x10069fc, Func Offset: 0xc
	// Line 843, Address: 0x1006a40, Func Offset: 0x50
	// Line 844, Address: 0x1006a4c, Func Offset: 0x5c
	// Line 845, Address: 0x1006a58, Func Offset: 0x68
	// Func End, Address: 0x1006a68, Func Offset: 0x78
}

// 
// Start address: 0x1006a70
void heart1_init(_anon0* pActwk)
{
	// Line 851, Address: 0x1006a70, Func Offset: 0
	// Line 852, Address: 0x1006a7c, Func Offset: 0xc
	// Line 853, Address: 0x1006a8c, Func Offset: 0x1c
	// Line 854, Address: 0x1006a9c, Func Offset: 0x2c
	// Line 855, Address: 0x1006aa8, Func Offset: 0x38
	// Line 856, Address: 0x1006ab8, Func Offset: 0x48
	// Line 857, Address: 0x1006ac4, Func Offset: 0x54
	// Line 858, Address: 0x1006ad0, Func Offset: 0x60
	// Line 860, Address: 0x1006adc, Func Offset: 0x6c
	// Line 861, Address: 0x1006ae8, Func Offset: 0x78
	// Func End, Address: 0x1006af8, Func Offset: 0x88
}

// 
// Start address: 0x1006b00
void heart1_move(_anon0* pActwk)
{
	short sinwk;
	short coswk;
	// Line 867, Address: 0x1006b00, Func Offset: 0
	// Line 870, Address: 0x1006b0c, Func Offset: 0xc
	// Line 871, Address: 0x1006b1c, Func Offset: 0x1c
	// Line 872, Address: 0x1006b44, Func Offset: 0x44
	// Line 876, Address: 0x1006b64, Func Offset: 0x64
	// Line 877, Address: 0x1006b70, Func Offset: 0x70
	// Line 878, Address: 0x1006b94, Func Offset: 0x94
	// Line 879, Address: 0x1006ba4, Func Offset: 0xa4
	// Line 880, Address: 0x1006bc4, Func Offset: 0xc4
	// Line 881, Address: 0x1006bd4, Func Offset: 0xd4
	// Line 882, Address: 0x1006bec, Func Offset: 0xec
	// Line 883, Address: 0x1006bf8, Func Offset: 0xf8
	// Line 884, Address: 0x1006c18, Func Offset: 0x118
	// Line 886, Address: 0x1006c24, Func Offset: 0x124
	// Func End, Address: 0x1006c34, Func Offset: 0x134
}

