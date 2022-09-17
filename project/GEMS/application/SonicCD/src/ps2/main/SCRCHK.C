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
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon1 type_4[128];

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

unsigned char limmoveflag;
short scralim_down;
_anon1 actwk[128];
_anon2 scra_v_posit;
short scralim_n_down;
_anon5 stageno;
_anon2 scra_h_posit;
short scralim_left;
short scralim_n_left;
unsigned char pltime_f;
short scra_vline;
unsigned char time_flag;
unsigned char bossflag;
short scralim_up;
short scralim_n_up;
short scralim_right;

void scrchk();
void zone1chk();
void zone11chk();
void zone12chk();
void zone13chk();
void zone3chk();
void zone31chk();
void zone33chk();
void zone6chk();
void zone5chk();
void zone51chk();
void zone53chk();
void zone8chk();
void zone81chk();
void zone83chk();
void zone4chk();
void zone41chk();
void zone42chk();
void zone43chk();
void zone7chk();
void zone71chk();
void zone72chk();
void zone73chk();
int bossclr_scr(unsigned short wD0, unsigned short wD1);
int bossclr_scrset(unsigned short wD1);

// 
// Start address: 0x1017a10
void scrchk()
{
	short sD1;
	// Line 42, Address: 0x1017a10, Func Offset: 0
	// Line 45, Address: 0x1017a1c, Func Offset: 0xc
	// Line 47, Address: 0x1017a54, Func Offset: 0x44
	// Line 49, Address: 0x1017a64, Func Offset: 0x54
	// Line 51, Address: 0x1017a74, Func Offset: 0x64
	// Line 53, Address: 0x1017a84, Func Offset: 0x74
	// Line 55, Address: 0x1017a94, Func Offset: 0x84
	// Line 57, Address: 0x1017aa4, Func Offset: 0x94
	// Line 59, Address: 0x1017ab4, Func Offset: 0xa4
	// Line 63, Address: 0x1017abc, Func Offset: 0xac
	// Line 64, Address: 0x1017ad8, Func Offset: 0xc8
	// Line 65, Address: 0x1017ae8, Func Offset: 0xd8
	// Line 67, Address: 0x1017af8, Func Offset: 0xe8
	// Line 68, Address: 0x1017b04, Func Offset: 0xf4
	// Line 72, Address: 0x1017b2c, Func Offset: 0x11c
	// Line 74, Address: 0x1017b58, Func Offset: 0x148
	// Line 75, Address: 0x1017b64, Func Offset: 0x154
	// Line 76, Address: 0x1017b90, Func Offset: 0x180
	// Line 79, Address: 0x1017bb4, Func Offset: 0x1a4
	// Line 80, Address: 0x1017bc8, Func Offset: 0x1b8
	// Line 82, Address: 0x1017bd4, Func Offset: 0x1c4
	// Line 85, Address: 0x1017bdc, Func Offset: 0x1cc
	// Line 87, Address: 0x1017c14, Func Offset: 0x204
	// Line 88, Address: 0x1017c2c, Func Offset: 0x21c
	// Line 92, Address: 0x1017c38, Func Offset: 0x228
	// Line 93, Address: 0x1017c4c, Func Offset: 0x23c
	// Line 94, Address: 0x1017c58, Func Offset: 0x248
	// Func End, Address: 0x1017c6c, Func Offset: 0x25c
}

// 
// Start address: 0x1017c70
void zone1chk()
{
	// Line 98, Address: 0x1017c70, Func Offset: 0
	// Line 99, Address: 0x1017c78, Func Offset: 0x8
	// Line 101, Address: 0x1017cb0, Func Offset: 0x40
	// Line 103, Address: 0x1017cc0, Func Offset: 0x50
	// Line 105, Address: 0x1017cd0, Func Offset: 0x60
	// Line 109, Address: 0x1017cd8, Func Offset: 0x68
	// Func End, Address: 0x1017ce8, Func Offset: 0x78
}

// 
// Start address: 0x1017cf0
void zone11chk()
{
	// Line 112, Address: 0x1017cf0, Func Offset: 0
	// Line 113, Address: 0x1017cf8, Func Offset: 0x8
	// Line 114, Address: 0x1017d10, Func Offset: 0x20
	// Line 115, Address: 0x1017d18, Func Offset: 0x28
	// Line 117, Address: 0x1017d20, Func Offset: 0x30
	// Line 118, Address: 0x1017d3c, Func Offset: 0x4c
	// Line 119, Address: 0x1017d58, Func Offset: 0x68
	// Line 123, Address: 0x1017d64, Func Offset: 0x74
	// Line 124, Address: 0x1017d70, Func Offset: 0x80
	// Line 128, Address: 0x1017d8c, Func Offset: 0x9c
	// Line 130, Address: 0x1017dbc, Func Offset: 0xcc
	// Line 133, Address: 0x1017dd8, Func Offset: 0xe8
	// Line 134, Address: 0x1017df4, Func Offset: 0x104
	// Line 135, Address: 0x1017e00, Func Offset: 0x110
	// Line 137, Address: 0x1017e08, Func Offset: 0x118
	// Line 141, Address: 0x1017e14, Func Offset: 0x124
	// Func End, Address: 0x1017e24, Func Offset: 0x134
}

// 
// Start address: 0x1017e30
void zone12chk()
{
	// Line 145, Address: 0x1017e30, Func Offset: 0
	// Line 147, Address: 0x1017e3c, Func Offset: 0xc
	// Func End, Address: 0x1017e44, Func Offset: 0x14
}

// 
// Start address: 0x1017e50
void zone13chk()
{
	// Line 150, Address: 0x1017e50, Func Offset: 0
	// Line 151, Address: 0x1017e58, Func Offset: 0x8
	// Line 152, Address: 0x1017e68, Func Offset: 0x18
	// Line 153, Address: 0x1017e74, Func Offset: 0x24
	// Line 154, Address: 0x1017e84, Func Offset: 0x34
	// Func End, Address: 0x1017e94, Func Offset: 0x44
}

// 
// Start address: 0x1017ea0
void zone3chk()
{
	// Line 157, Address: 0x1017ea0, Func Offset: 0
	// Line 158, Address: 0x1017ea8, Func Offset: 0x8
	// Line 160, Address: 0x1017ee0, Func Offset: 0x40
	// Line 162, Address: 0x1017ef0, Func Offset: 0x50
	// Line 164, Address: 0x1017f00, Func Offset: 0x60
	// Line 168, Address: 0x1017f08, Func Offset: 0x68
	// Func End, Address: 0x1017f18, Func Offset: 0x78
}

// 
// Start address: 0x1017f20
void zone31chk()
{
	// Line 172, Address: 0x1017f20, Func Offset: 0
	// Line 174, Address: 0x1017f2c, Func Offset: 0xc
	// Func End, Address: 0x1017f34, Func Offset: 0x14
}

// 
// Start address: 0x1017f40
void zone33chk()
{
	// Line 177, Address: 0x1017f40, Func Offset: 0
	// Line 178, Address: 0x1017f48, Func Offset: 0x8
	// Line 179, Address: 0x1017f58, Func Offset: 0x18
	// Line 180, Address: 0x1017f64, Func Offset: 0x24
	// Line 182, Address: 0x1017f6c, Func Offset: 0x2c
	// Line 185, Address: 0x1017f78, Func Offset: 0x38
	// Func End, Address: 0x1017f88, Func Offset: 0x48
}

// 
// Start address: 0x1017f90
void zone6chk()
{
	unsigned short wD0;
	unsigned short wD1;
	// Line 188, Address: 0x1017f90, Func Offset: 0
	// Line 191, Address: 0x1017fa0, Func Offset: 0x10
	// Line 192, Address: 0x1017fb8, Func Offset: 0x28
	// Line 193, Address: 0x1017fc4, Func Offset: 0x34
	// Line 196, Address: 0x1017fcc, Func Offset: 0x3c
	// Line 201, Address: 0x1017fe4, Func Offset: 0x54
	// Line 203, Address: 0x1018000, Func Offset: 0x70
	// Line 204, Address: 0x1018008, Func Offset: 0x78
	// Line 205, Address: 0x1018010, Func Offset: 0x80
	// Line 207, Address: 0x101802c, Func Offset: 0x9c
	// Line 208, Address: 0x1018034, Func Offset: 0xa4
	// Line 211, Address: 0x101803c, Func Offset: 0xac
	// Line 214, Address: 0x1018044, Func Offset: 0xb4
	// Line 215, Address: 0x1018048, Func Offset: 0xb8
	// Line 216, Address: 0x1018050, Func Offset: 0xc0
	// Line 217, Address: 0x1018064, Func Offset: 0xd4
	// Line 218, Address: 0x101807c, Func Offset: 0xec
	// Line 220, Address: 0x1018098, Func Offset: 0x108
	// Line 221, Address: 0x10180a8, Func Offset: 0x118
	// Line 224, Address: 0x10180b0, Func Offset: 0x120
	// Func End, Address: 0x10180c8, Func Offset: 0x138
}

// 
// Start address: 0x10180d0
void zone5chk()
{
	// Line 227, Address: 0x10180d0, Func Offset: 0
	// Line 228, Address: 0x10180d8, Func Offset: 0x8
	// Line 230, Address: 0x1018110, Func Offset: 0x40
	// Line 232, Address: 0x1018120, Func Offset: 0x50
	// Line 234, Address: 0x1018130, Func Offset: 0x60
	// Line 238, Address: 0x1018138, Func Offset: 0x68
	// Func End, Address: 0x1018148, Func Offset: 0x78
}

// 
// Start address: 0x1018150
void zone51chk()
{
	// Line 241, Address: 0x1018150, Func Offset: 0
	// Line 243, Address: 0x101815c, Func Offset: 0xc
	// Func End, Address: 0x1018164, Func Offset: 0x14
}

// 
// Start address: 0x1018170
void zone53chk()
{
	// Line 245, Address: 0x1018170, Func Offset: 0
	// Line 246, Address: 0x1018178, Func Offset: 0x8
	// Line 250, Address: 0x1018190, Func Offset: 0x20
	// Line 252, Address: 0x10181a0, Func Offset: 0x30
	// Line 253, Address: 0x10181ac, Func Offset: 0x3c
	// Line 255, Address: 0x10181b8, Func Offset: 0x48
	// Line 257, Address: 0x10181c0, Func Offset: 0x50
	// Line 260, Address: 0x10181cc, Func Offset: 0x5c
	// Func End, Address: 0x10181dc, Func Offset: 0x6c
}

// 
// Start address: 0x10181e0
void zone8chk()
{
	// Line 264, Address: 0x10181e0, Func Offset: 0
	// Line 265, Address: 0x10181e8, Func Offset: 0x8
	// Line 267, Address: 0x1018220, Func Offset: 0x40
	// Line 269, Address: 0x1018230, Func Offset: 0x50
	// Line 271, Address: 0x1018240, Func Offset: 0x60
	// Line 275, Address: 0x1018248, Func Offset: 0x68
	// Func End, Address: 0x1018258, Func Offset: 0x78
}

// 
// Start address: 0x1018260
void zone81chk()
{
	// Line 279, Address: 0x1018260, Func Offset: 0
	// Line 281, Address: 0x101826c, Func Offset: 0xc
	// Func End, Address: 0x1018274, Func Offset: 0x14
}

// 
// Start address: 0x1018280
void zone83chk()
{
	// Line 284, Address: 0x1018280, Func Offset: 0
	// Line 286, Address: 0x1018290, Func Offset: 0x10
	// Line 289, Address: 0x10182cc, Func Offset: 0x4c
	// Line 291, Address: 0x10182d4, Func Offset: 0x54
	// Line 294, Address: 0x10182e0, Func Offset: 0x60
	// Func End, Address: 0x10182e8, Func Offset: 0x68
}

// 
// Start address: 0x10182f0
void zone4chk()
{
	// Line 299, Address: 0x10182f0, Func Offset: 0
	// Line 300, Address: 0x10182f8, Func Offset: 0x8
	// Line 302, Address: 0x1018330, Func Offset: 0x40
	// Line 304, Address: 0x1018340, Func Offset: 0x50
	// Line 306, Address: 0x1018350, Func Offset: 0x60
	// Line 310, Address: 0x1018358, Func Offset: 0x68
	// Func End, Address: 0x1018368, Func Offset: 0x78
}

// 
// Start address: 0x1018370
void zone41chk()
{
	// Line 315, Address: 0x1018370, Func Offset: 0
	// Line 317, Address: 0x101837c, Func Offset: 0xc
	// Func End, Address: 0x1018384, Func Offset: 0x14
}

// 
// Start address: 0x1018390
void zone42chk()
{
	// Line 320, Address: 0x1018390, Func Offset: 0
	// Line 322, Address: 0x10183c4, Func Offset: 0x34
	// Line 323, Address: 0x10183d0, Func Offset: 0x40
	// Line 324, Address: 0x10183dc, Func Offset: 0x4c
	// Line 327, Address: 0x10183e4, Func Offset: 0x54
	// Line 328, Address: 0x10183f0, Func Offset: 0x60
	// Line 329, Address: 0x10183fc, Func Offset: 0x6c
	// Line 330, Address: 0x1018418, Func Offset: 0x88
	// Line 331, Address: 0x1018424, Func Offset: 0x94
	// Line 335, Address: 0x1018430, Func Offset: 0xa0
	// Func End, Address: 0x1018438, Func Offset: 0xa8
}

// 
// Start address: 0x1018440
void zone43chk()
{
	// Line 337, Address: 0x1018440, Func Offset: 0
	// Line 338, Address: 0x1018448, Func Offset: 0x8
	// Line 341, Address: 0x1018460, Func Offset: 0x20
	// Line 343, Address: 0x1018470, Func Offset: 0x30
	// Line 344, Address: 0x101847c, Func Offset: 0x3c
	// Line 347, Address: 0x1018488, Func Offset: 0x48
	// Func End, Address: 0x1018498, Func Offset: 0x58
}

// 
// Start address: 0x10184a0
void zone7chk()
{
	// Line 352, Address: 0x10184a0, Func Offset: 0
	// Line 353, Address: 0x10184a8, Func Offset: 0x8
	// Line 355, Address: 0x10184e0, Func Offset: 0x40
	// Line 357, Address: 0x10184f0, Func Offset: 0x50
	// Line 359, Address: 0x1018500, Func Offset: 0x60
	// Line 363, Address: 0x1018508, Func Offset: 0x68
	// Func End, Address: 0x1018518, Func Offset: 0x78
}

// 
// Start address: 0x1018520
void zone71chk()
{
	// Line 368, Address: 0x1018520, Func Offset: 0
	// Line 370, Address: 0x101852c, Func Offset: 0xc
	// Func End, Address: 0x1018534, Func Offset: 0x14
}

// 
// Start address: 0x1018540
void zone72chk()
{
	// Line 373, Address: 0x1018540, Func Offset: 0
	// Line 375, Address: 0x101854c, Func Offset: 0xc
	// Func End, Address: 0x1018554, Func Offset: 0x14
}

// 
// Start address: 0x1018560
void zone73chk()
{
	unsigned short wD1;
	// Line 377, Address: 0x1018560, Func Offset: 0
	// Line 380, Address: 0x1018568, Func Offset: 0x8
	// Line 381, Address: 0x1018584, Func Offset: 0x24
	// Line 382, Address: 0x1018590, Func Offset: 0x30
	// Line 385, Address: 0x1018598, Func Offset: 0x38
	// Line 387, Address: 0x10185b4, Func Offset: 0x54
	// Line 388, Address: 0x10185c0, Func Offset: 0x60
	// Line 391, Address: 0x10185c8, Func Offset: 0x68
	// Line 392, Address: 0x10185d4, Func Offset: 0x74
	// Line 393, Address: 0x10185f4, Func Offset: 0x94
	// Line 394, Address: 0x101860c, Func Offset: 0xac
	// Line 396, Address: 0x1018628, Func Offset: 0xc8
	// Line 397, Address: 0x1018638, Func Offset: 0xd8
	// Line 400, Address: 0x1018644, Func Offset: 0xe4
	// Func End, Address: 0x1018654, Func Offset: 0xf4
}

// 
// Start address: 0x1018660
int bossclr_scr(unsigned short wD0, unsigned short wD1)
{
	// Line 411, Address: 0x1018660, Func Offset: 0
	// Line 412, Address: 0x1018670, Func Offset: 0x10
	// Line 413, Address: 0x10186a0, Func Offset: 0x40
	// Line 415, Address: 0x10186b4, Func Offset: 0x54
	// Line 416, Address: 0x10186b8, Func Offset: 0x58
	// Func End, Address: 0x10186c8, Func Offset: 0x68
}

// 
// Start address: 0x10186d0
int bossclr_scrset(unsigned short wD1)
{
	unsigned short wD0;
	// Line 419, Address: 0x10186d0, Func Offset: 0
	// Line 422, Address: 0x10186dc, Func Offset: 0xc
	// Line 423, Address: 0x10186e8, Func Offset: 0x18
	// Line 424, Address: 0x1018700, Func Offset: 0x30
	// Line 425, Address: 0x101871c, Func Offset: 0x4c
	// Line 427, Address: 0x101873c, Func Offset: 0x6c
	// Line 428, Address: 0x1018750, Func Offset: 0x80
	// Line 430, Address: 0x1018760, Func Offset: 0x90
	// Line 431, Address: 0x101877c, Func Offset: 0xac
	// Line 432, Address: 0x10187a8, Func Offset: 0xd8
	// Line 434, Address: 0x10187b4, Func Offset: 0xe4
	// Line 435, Address: 0x10187e0, Func Offset: 0x110
	// Line 437, Address: 0x10187ec, Func Offset: 0x11c
	// Line 438, Address: 0x10187f4, Func Offset: 0x124
	// Line 439, Address: 0x10187fc, Func Offset: 0x12c
	// Line 440, Address: 0x1018800, Func Offset: 0x130
	// Func End, Address: 0x1018810, Func Offset: 0x140
}

