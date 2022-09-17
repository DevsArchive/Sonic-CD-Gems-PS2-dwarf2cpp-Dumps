typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef char type_2[4];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
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

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

char dirstk[4];

unsigned int swap(int lSrc);
short dircolm(_anon1* pActwk, char* cpDirec);
short dircol(_anon1* pActwk, char* cpDirec);
short dircol2(_anon1* pActwk, char* cpDirec);
short dircol_d(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3);
short dircol_d3(_anon1* pActwk, short iXposi, short iYposi);
short dircol_r(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3);
short dircol_r2(_anon1* pActwk);
short dircol_r3(_anon1* pActwk, short iXposi, short iYposi);
short dircol_l(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3);
short dircol_l2(_anon1* pActwk);
short dircol_l3(_anon1* pActwk, short iXposi, short iYposi);
short dircol_u(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3);
short dircol_u2(_anon1* pActwk);
short dircol_u3(_anon1* pActwk, short iXposi, short iYposi);
short emycol_u(_anon1* pActwk);
short emycol_d(_anon1* pActwk);
short emycol_d2(_anon1* pActwk, short iXposi);
short emycol_d3(_anon1* pActwk, short iXposi, short iYposi);
short emycol_l(_anon1* pActwk, unsigned char sprhs);
short emycol_l3(_anon1* pActwk, short iXposi, short iYposi);
short emycol_r(_anon1* pActwk, unsigned char sprhs);
short emycol_r3(_anon1* pActwk, short iXposi, short iYposi);
short dircolchk(short* ipD0, short* ipD1, short* ipD3, char* cpDirec);
short dircolchk1(char cDirec);

// 
// Start address: 0x100dab0
unsigned int swap(int lSrc)
{
	unsigned short iHi;
	unsigned short iLow;
	// Line 26, Address: 0x100dab0, Func Offset: 0
	// Line 27, Address: 0x100dac0, Func Offset: 0x10
	// Line 28, Address: 0x100dad8, Func Offset: 0x28
	// Line 29, Address: 0x100dae8, Func Offset: 0x38
	// Line 30, Address: 0x100daf8, Func Offset: 0x48
	// Func End, Address: 0x100db0c, Func Offset: 0x5c
}

// 
// Start address: 0x100db10
short dircolm(_anon1* pActwk, char* cpDirec)
{
	// Line 46, Address: 0x100db10, Func Offset: 0
	// Line 47, Address: 0x100db20, Func Offset: 0x10
	// Line 48, Address: 0x100db30, Func Offset: 0x20
	// Func End, Address: 0x100db40, Func Offset: 0x30
}

// 
// Start address: 0x100db40
short dircol(_anon1* pActwk, char* cpDirec)
{
	unsigned char bDirwk;
	unsigned char bDirSave;
	short iXposi;
	short iYposi;
	_anon2 lXposi;
	_anon2 lYposi;
	_anon2 iXspeed;
	_anon2 iYspeed;
	// Line 50, Address: 0x100db40, Func Offset: 0
	// Line 56, Address: 0x100db60, Func Offset: 0x20
	// Line 57, Address: 0x100db6c, Func Offset: 0x2c
	// Line 58, Address: 0x100db78, Func Offset: 0x38
	// Line 59, Address: 0x100db90, Func Offset: 0x50
	// Line 60, Address: 0x100dba8, Func Offset: 0x68
	// Line 61, Address: 0x100dbb8, Func Offset: 0x78
	// Line 63, Address: 0x100dbc8, Func Offset: 0x88
	// Line 64, Address: 0x100dbd4, Func Offset: 0x94
	// Line 66, Address: 0x100dbe0, Func Offset: 0xa0
	// Line 67, Address: 0x100dbec, Func Offset: 0xac
	// Line 68, Address: 0x100dbf0, Func Offset: 0xb0
	// Line 69, Address: 0x100dbf8, Func Offset: 0xb8
	// Line 70, Address: 0x100dc00, Func Offset: 0xc0
	// Line 72, Address: 0x100dc20, Func Offset: 0xe0
	// Line 73, Address: 0x100dc40, Func Offset: 0x100
	// Line 74, Address: 0x100dc48, Func Offset: 0x108
	// Line 77, Address: 0x100dc50, Func Offset: 0x110
	// Line 78, Address: 0x100dc70, Func Offset: 0x130
	// Line 82, Address: 0x100dc78, Func Offset: 0x138
	// Line 84, Address: 0x100dc88, Func Offset: 0x148
	// Line 85, Address: 0x100dc94, Func Offset: 0x154
	// Line 86, Address: 0x100dcb0, Func Offset: 0x170
	// Line 87, Address: 0x100dcc0, Func Offset: 0x180
	// Line 88, Address: 0x100dcdc, Func Offset: 0x19c
	// Line 89, Address: 0x100dce4, Func Offset: 0x1a4
	// Line 90, Address: 0x100dcfc, Func Offset: 0x1bc
	// Line 91, Address: 0x100dd0c, Func Offset: 0x1cc
	// Line 93, Address: 0x100dd28, Func Offset: 0x1e8
	// Line 94, Address: 0x100dd3c, Func Offset: 0x1fc
	// Func End, Address: 0x100dd5c, Func Offset: 0x21c
}

// 
// Start address: 0x100dd60
short dircol2(_anon1* pActwk, char* cpDirec)
{
	short iDirect;
	short iD0;
	short iD1;
	short iD3;
	unsigned char bDirwk;
	// Line 107, Address: 0x100dd60, Func Offset: 0
	// Line 112, Address: 0x100dd78, Func Offset: 0x18
	// Line 113, Address: 0x100dd88, Func Offset: 0x28
	// Line 114, Address: 0x100dd98, Func Offset: 0x38
	// Line 115, Address: 0x100ddbc, Func Offset: 0x5c
	// Line 116, Address: 0x100dde0, Func Offset: 0x80
	// Line 118, Address: 0x100ddec, Func Offset: 0x8c
	// Line 121, Address: 0x100de1c, Func Offset: 0xbc
	// Line 122, Address: 0x100de3c, Func Offset: 0xdc
	// Line 124, Address: 0x100de44, Func Offset: 0xe4
	// Line 125, Address: 0x100de64, Func Offset: 0x104
	// Line 127, Address: 0x100de6c, Func Offset: 0x10c
	// Line 128, Address: 0x100de8c, Func Offset: 0x12c
	// Line 130, Address: 0x100de94, Func Offset: 0x134
	// Line 133, Address: 0x100deb4, Func Offset: 0x154
	// Line 134, Address: 0x100deb8, Func Offset: 0x158
	// Func End, Address: 0x100ded0, Func Offset: 0x170
}

// 
// Start address: 0x100ded0
short dircol_d(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3)
{
	short iXwork;
	short iYwork;
	char cDirect;
	char* cpDirStk;
	// Line 153, Address: 0x100ded0, Func Offset: 0
	// Line 159, Address: 0x100def4, Func Offset: 0x24
	// Line 160, Address: 0x100df2c, Func Offset: 0x5c
	// Line 161, Address: 0x100df64, Func Offset: 0x94
	// Line 162, Address: 0x100df6c, Func Offset: 0x9c
	// Line 165, Address: 0x100df98, Func Offset: 0xc8
	// Line 166, Address: 0x100dfc8, Func Offset: 0xf8
	// Line 167, Address: 0x100dff8, Func Offset: 0x128
	// Line 168, Address: 0x100e000, Func Offset: 0x130
	// Line 170, Address: 0x100e02c, Func Offset: 0x15c
	// Line 171, Address: 0x100e030, Func Offset: 0x160
	// Line 172, Address: 0x100e048, Func Offset: 0x178
	// Func End, Address: 0x100e064, Func Offset: 0x194
}

// 
// Start address: 0x100e070
short dircol_d3(_anon1* pActwk, short iXposi, short iYposi)
{
	short iScd;
	char* cpDirStk;
	// Line 189, Address: 0x100e070, Func Offset: 0
	// Line 191, Address: 0x100e08c, Func Offset: 0x1c
	// Line 193, Address: 0x100e094, Func Offset: 0x24
	// Line 194, Address: 0x100e0a0, Func Offset: 0x30
	// Line 195, Address: 0x100e0cc, Func Offset: 0x5c
	// Line 196, Address: 0x100e0d8, Func Offset: 0x68
	// Line 197, Address: 0x100e0dc, Func Offset: 0x6c
	// Func End, Address: 0x100e0f4, Func Offset: 0x84
}

// 
// Start address: 0x100e100
short dircol_r(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3)
{
	short iXwork;
	short iYwork;
	char cDirect;
	char* cpDirStk;
	// Line 216, Address: 0x100e100, Func Offset: 0
	// Line 222, Address: 0x100e124, Func Offset: 0x24
	// Line 223, Address: 0x100e15c, Func Offset: 0x5c
	// Line 224, Address: 0x100e194, Func Offset: 0x94
	// Line 225, Address: 0x100e19c, Func Offset: 0x9c
	// Line 228, Address: 0x100e1c8, Func Offset: 0xc8
	// Line 229, Address: 0x100e200, Func Offset: 0x100
	// Line 230, Address: 0x100e238, Func Offset: 0x138
	// Line 231, Address: 0x100e240, Func Offset: 0x140
	// Line 233, Address: 0x100e26c, Func Offset: 0x16c
	// Line 234, Address: 0x100e274, Func Offset: 0x174
	// Line 235, Address: 0x100e28c, Func Offset: 0x18c
	// Func End, Address: 0x100e2a8, Func Offset: 0x1a8
}

// 
// Start address: 0x100e2b0
short dircol_r2(_anon1* pActwk)
{
	// Line 247, Address: 0x100e2b0, Func Offset: 0
	// Line 248, Address: 0x100e2bc, Func Offset: 0xc
	// Line 249, Address: 0x100e2d8, Func Offset: 0x28
	// Func End, Address: 0x100e2e8, Func Offset: 0x38
}

// 
// Start address: 0x100e2f0
short dircol_r3(_anon1* pActwk, short iXposi, short iYposi)
{
	short iScd;
	char* cpDirStk;
	// Line 266, Address: 0x100e2f0, Func Offset: 0
	// Line 267, Address: 0x100e30c, Func Offset: 0x1c
	// Line 268, Address: 0x100e310, Func Offset: 0x20
	// Line 270, Address: 0x100e318, Func Offset: 0x28
	// Line 271, Address: 0x100e324, Func Offset: 0x34
	// Line 272, Address: 0x100e350, Func Offset: 0x60
	// Line 273, Address: 0x100e35c, Func Offset: 0x6c
	// Line 274, Address: 0x100e360, Func Offset: 0x70
	// Func End, Address: 0x100e378, Func Offset: 0x88
}

// 
// Start address: 0x100e380
short dircol_l(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3)
{
	short iXwork;
	short iYwork;
	char cDirect;
	char* cpDirstk;
	// Line 294, Address: 0x100e380, Func Offset: 0
	// Line 300, Address: 0x100e3a4, Func Offset: 0x24
	// Line 301, Address: 0x100e3dc, Func Offset: 0x5c
	// Line 302, Address: 0x100e418, Func Offset: 0x98
	// Line 303, Address: 0x100e420, Func Offset: 0xa0
	// Line 306, Address: 0x100e44c, Func Offset: 0xcc
	// Line 307, Address: 0x100e484, Func Offset: 0x104
	// Line 308, Address: 0x100e4c0, Func Offset: 0x140
	// Line 309, Address: 0x100e4c8, Func Offset: 0x148
	// Line 311, Address: 0x100e4f4, Func Offset: 0x174
	// Line 312, Address: 0x100e4fc, Func Offset: 0x17c
	// Line 313, Address: 0x100e514, Func Offset: 0x194
	// Func End, Address: 0x100e530, Func Offset: 0x1b0
}

// 
// Start address: 0x100e530
short dircol_l2(_anon1* pActwk)
{
	// Line 325, Address: 0x100e530, Func Offset: 0
	// Line 326, Address: 0x100e53c, Func Offset: 0xc
	// Line 327, Address: 0x100e558, Func Offset: 0x28
	// Func End, Address: 0x100e568, Func Offset: 0x38
}

// 
// Start address: 0x100e570
short dircol_l3(_anon1* pActwk, short iXposi, short iYposi)
{
	char* cpDirStk;
	short iScd;
	// Line 344, Address: 0x100e570, Func Offset: 0
	// Line 345, Address: 0x100e58c, Func Offset: 0x1c
	// Line 348, Address: 0x100e594, Func Offset: 0x24
	// Line 349, Address: 0x100e5b4, Func Offset: 0x44
	// Line 350, Address: 0x100e5e0, Func Offset: 0x70
	// Line 351, Address: 0x100e5ec, Func Offset: 0x7c
	// Line 352, Address: 0x100e5f0, Func Offset: 0x80
	// Func End, Address: 0x100e608, Func Offset: 0x98
}

// 
// Start address: 0x100e610
short dircol_u(_anon1* pActwk, short* ipD0, short* ipD1, short* ipD3)
{
	short iXwork;
	short iYwork;
	char cDirect;
	char* cpDirStk;
	// Line 371, Address: 0x100e610, Func Offset: 0
	// Line 377, Address: 0x100e634, Func Offset: 0x24
	// Line 378, Address: 0x100e670, Func Offset: 0x60
	// Line 379, Address: 0x100e6a8, Func Offset: 0x98
	// Line 380, Address: 0x100e6b0, Func Offset: 0xa0
	// Line 383, Address: 0x100e6dc, Func Offset: 0xcc
	// Line 384, Address: 0x100e718, Func Offset: 0x108
	// Line 385, Address: 0x100e750, Func Offset: 0x140
	// Line 386, Address: 0x100e758, Func Offset: 0x148
	// Line 388, Address: 0x100e784, Func Offset: 0x174
	// Line 389, Address: 0x100e78c, Func Offset: 0x17c
	// Line 390, Address: 0x100e7a4, Func Offset: 0x194
	// Func End, Address: 0x100e7c0, Func Offset: 0x1b0
}

// 
// Start address: 0x100e7c0
short dircol_u2(_anon1* pActwk)
{
	// Line 402, Address: 0x100e7c0, Func Offset: 0
	// Line 403, Address: 0x100e7cc, Func Offset: 0xc
	// Line 404, Address: 0x100e7e8, Func Offset: 0x28
	// Func End, Address: 0x100e7f8, Func Offset: 0x38
}

// 
// Start address: 0x100e800
short dircol_u3(_anon1* pActwk, short iXposi, short iYposi)
{
	short iScd;
	char* cpDirStk;
	// Line 421, Address: 0x100e800, Func Offset: 0
	// Line 423, Address: 0x100e81c, Func Offset: 0x1c
	// Line 425, Address: 0x100e824, Func Offset: 0x24
	// Line 426, Address: 0x100e844, Func Offset: 0x44
	// Line 427, Address: 0x100e870, Func Offset: 0x70
	// Line 428, Address: 0x100e87c, Func Offset: 0x7c
	// Line 429, Address: 0x100e880, Func Offset: 0x80
	// Func End, Address: 0x100e898, Func Offset: 0x98
}

// 
// Start address: 0x100e8a0
short emycol_u(_anon1* pActwk)
{
	short iXwork;
	short iYwork;
	short iScd;
	char* cpDirStk;
	// Line 441, Address: 0x100e8a0, Func Offset: 0
	// Line 443, Address: 0x100e8bc, Func Offset: 0x1c
	// Line 445, Address: 0x100e8c4, Func Offset: 0x24
	// Line 446, Address: 0x100e8f8, Func Offset: 0x58
	// Line 447, Address: 0x100e908, Func Offset: 0x68
	// Line 450, Address: 0x100e934, Func Offset: 0x94
	// Line 451, Address: 0x100e938, Func Offset: 0x98
	// Func End, Address: 0x100e958, Func Offset: 0xb8
}

// 
// Start address: 0x100e960
short emycol_d(_anon1* pActwk)
{
	// Line 463, Address: 0x100e960, Func Offset: 0
	// Line 464, Address: 0x100e96c, Func Offset: 0xc
	// Line 465, Address: 0x100e980, Func Offset: 0x20
	// Func End, Address: 0x100e990, Func Offset: 0x30
}

// 
// Start address: 0x100e990
short emycol_d2(_anon1* pActwk, short iXposi)
{
	short iYposi;
	// Line 477, Address: 0x100e990, Func Offset: 0
	// Line 480, Address: 0x100e9a4, Func Offset: 0x14
	// Line 481, Address: 0x100e9e8, Func Offset: 0x58
	// Line 482, Address: 0x100e9fc, Func Offset: 0x6c
	// Func End, Address: 0x100ea10, Func Offset: 0x80
}

// 
// Start address: 0x100ea10
short emycol_d3(_anon1* pActwk, short iXposi, short iYposi)
{
	short iScd;
	char* cpDirStk;
	// Line 495, Address: 0x100ea10, Func Offset: 0
	// Line 497, Address: 0x100ea2c, Func Offset: 0x1c
	// Line 499, Address: 0x100ea34, Func Offset: 0x24
	// Line 500, Address: 0x100ea38, Func Offset: 0x28
	// Line 503, Address: 0x100ea64, Func Offset: 0x54
	// Line 504, Address: 0x100ea68, Func Offset: 0x58
	// Func End, Address: 0x100ea80, Func Offset: 0x70
}

// 
// Start address: 0x100ea80
short emycol_l(_anon1* pActwk, unsigned char sprhs)
{
	short iXwork;
	char cSprhs;
	// Line 517, Address: 0x100ea80, Func Offset: 0
	// Line 521, Address: 0x100ea98, Func Offset: 0x18
	// Line 522, Address: 0x100eaa4, Func Offset: 0x24
	// Line 523, Address: 0x100ead8, Func Offset: 0x58
	// Line 524, Address: 0x100eaf0, Func Offset: 0x70
	// Func End, Address: 0x100eb08, Func Offset: 0x88
}

// 
// Start address: 0x100eb10
short emycol_l3(_anon1* pActwk, short iXposi, short iYposi)
{
	short iScd;
	char* cpDirStk;
	// Line 538, Address: 0x100eb10, Func Offset: 0
	// Line 540, Address: 0x100eb2c, Func Offset: 0x1c
	// Line 542, Address: 0x100eb34, Func Offset: 0x24
	// Line 543, Address: 0x100eb38, Func Offset: 0x28
	// Line 546, Address: 0x100eb64, Func Offset: 0x54
	// Line 547, Address: 0x100eb68, Func Offset: 0x58
	// Func End, Address: 0x100eb80, Func Offset: 0x70
}

// 
// Start address: 0x100eb80
short emycol_r(_anon1* pActwk, unsigned char sprhs)
{
	short iXwork;
	char cSprhs;
	// Line 559, Address: 0x100eb80, Func Offset: 0
	// Line 563, Address: 0x100eb98, Func Offset: 0x18
	// Line 564, Address: 0x100eba4, Func Offset: 0x24
	// Line 565, Address: 0x100ebd8, Func Offset: 0x58
	// Line 566, Address: 0x100ebf0, Func Offset: 0x70
	// Func End, Address: 0x100ec08, Func Offset: 0x88
}

// 
// Start address: 0x100ec10
short emycol_r3(_anon1* pActwk, short iXposi, short iYposi)
{
	short iScd;
	char* cpDirStk;
	// Line 579, Address: 0x100ec10, Func Offset: 0
	// Line 581, Address: 0x100ec2c, Func Offset: 0x1c
	// Line 583, Address: 0x100ec34, Func Offset: 0x24
	// Line 586, Address: 0x100ec60, Func Offset: 0x50
	// Line 587, Address: 0x100ec64, Func Offset: 0x54
	// Func End, Address: 0x100ec7c, Func Offset: 0x6c
}

// 
// Start address: 0x100ec80
short dircolchk(short* ipD0, short* ipD1, short* ipD3, char* cpDirec)
{
	short iWork;
	// Line 607, Address: 0x100ec80, Func Offset: 0
	// Line 611, Address: 0x100ec98, Func Offset: 0x18
	// Line 613, Address: 0x100ecc4, Func Offset: 0x44
	// Line 614, Address: 0x100ecd4, Func Offset: 0x54
	// Line 615, Address: 0x100ece4, Func Offset: 0x64
	// Line 616, Address: 0x100ecec, Func Offset: 0x6c
	// Line 617, Address: 0x100ed04, Func Offset: 0x84
	// Line 619, Address: 0x100ed0c, Func Offset: 0x8c
	// Line 621, Address: 0x100ed24, Func Offset: 0xa4
	// Line 622, Address: 0x100ed40, Func Offset: 0xc0
	// Line 623, Address: 0x100ed58, Func Offset: 0xd8
	// Line 624, Address: 0x100ed60, Func Offset: 0xe0
	// Func End, Address: 0x100ed70, Func Offset: 0xf0
}

// 
// Start address: 0x100ed70
short dircolchk1(char cDirec)
{
	char cDirWk;
	// Line 636, Address: 0x100ed70, Func Offset: 0
	// Line 637, Address: 0x100ed7c, Func Offset: 0xc
	// Line 639, Address: 0x100ed8c, Func Offset: 0x1c
	// Line 640, Address: 0x100edac, Func Offset: 0x3c
	// Line 641, Address: 0x100edb4, Func Offset: 0x44
	// Func End, Address: 0x100edc4, Func Offset: 0x54
}

