typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_8)(_anon1*);
typedef void(*type_11)(_anon1*);

typedef _anon7 type_0[20];
typedef char type_1[8];
typedef _anon7 type_2[0];
typedef char type_3[8];
typedef unsigned char type_4[16];
typedef char type_5[4];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef void(*type_9)(_anon1*)[2];
typedef unsigned char type_10[16];
typedef void(*type_12)(_anon1*)[4];
typedef _anon1 type_13[128];
typedef _anon0* type_14[9];

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

_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 pat06;
_anon0 pat07;
_anon0 pat08;
_anon0* rblk4pat[9];
_anon1 actwk[128];
char dirstk[4];

void rblk4(_anon1* pActwk);
void rblk4_init(_anon1* pActwk);
void rblk4_wait(_anon1* pActwk);
void rblk4_move(_anon1* pActwk);
void rblk4_push(_anon1* pActwk);
void rblk4_ract(_anon1* pActwk);
void rblk4_ract_init(_anon1* pActwk);
void rblk4_ract_move(_anon1* pActwk);

// 
// Start address: 0x10244f0
void rblk4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[4];
	// Line 150, Address: 0x10244f0, Func Offset: 0
	// Line 151, Address: 0x10244fc, Func Offset: 0xc
	// Line 159, Address: 0x1024528, Func Offset: 0x38
	// Line 161, Address: 0x1024540, Func Offset: 0x50
	// Line 162, Address: 0x102454c, Func Offset: 0x5c
	// Line 165, Address: 0x1024554, Func Offset: 0x64
	// Line 166, Address: 0x1024590, Func Offset: 0xa0
	// Line 167, Address: 0x102459c, Func Offset: 0xac
	// Line 169, Address: 0x10245a8, Func Offset: 0xb8
	// Func End, Address: 0x10245b8, Func Offset: 0xc8
}

// 
// Start address: 0x10245c0
void rblk4_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	// Line 174, Address: 0x10245c0, Func Offset: 0
	// Line 177, Address: 0x10245cc, Func Offset: 0xc
	// Line 178, Address: 0x10245dc, Func Offset: 0x1c
	// Line 179, Address: 0x10245ec, Func Offset: 0x2c
	// Line 180, Address: 0x10245f8, Func Offset: 0x38
	// Line 181, Address: 0x1024608, Func Offset: 0x48
	// Line 182, Address: 0x1024614, Func Offset: 0x54
	// Line 183, Address: 0x1024620, Func Offset: 0x60
	// Line 185, Address: 0x102462c, Func Offset: 0x6c
	// Line 186, Address: 0x102464c, Func Offset: 0x8c
	// Line 188, Address: 0x102465c, Func Offset: 0x9c
	// Line 190, Address: 0x1024670, Func Offset: 0xb0
	// Line 191, Address: 0x102467c, Func Offset: 0xbc
	// Line 193, Address: 0x1024684, Func Offset: 0xc4
	// Line 194, Address: 0x1024690, Func Offset: 0xd0
	// Line 195, Address: 0x10246a0, Func Offset: 0xe0
	// Line 196, Address: 0x10246dc, Func Offset: 0x11c
	// Line 197, Address: 0x10246e8, Func Offset: 0x128
	// Line 198, Address: 0x10246f0, Func Offset: 0x130
	// Line 200, Address: 0x102472c, Func Offset: 0x16c
	// Line 202, Address: 0x1024740, Func Offset: 0x180
	// Line 203, Address: 0x102474c, Func Offset: 0x18c
	// Line 205, Address: 0x1024754, Func Offset: 0x194
	// Line 206, Address: 0x1024760, Func Offset: 0x1a0
	// Line 207, Address: 0x1024770, Func Offset: 0x1b0
	// Line 208, Address: 0x10247ac, Func Offset: 0x1ec
	// Line 209, Address: 0x10247b8, Func Offset: 0x1f8
	// Line 210, Address: 0x10247c4, Func Offset: 0x204
	// Line 211, Address: 0x1024800, Func Offset: 0x240
	// Func End, Address: 0x1024810, Func Offset: 0x250
}

// 
// Start address: 0x1024810
void rblk4_wait(_anon1* pActwk)
{
	_anon1* pActwk_y;
	_anon1* pPlayerwk;
	char* a4;
	short d0;
	short d1;
	unsigned char d3;
	// Line 216, Address: 0x1024810, Func Offset: 0
	// Line 224, Address: 0x1024834, Func Offset: 0x24
	// Line 225, Address: 0x102485c, Func Offset: 0x4c
	// Line 227, Address: 0x1024870, Func Offset: 0x60
	// Line 228, Address: 0x1024878, Func Offset: 0x68
	// Line 230, Address: 0x1024890, Func Offset: 0x80
	// Line 231, Address: 0x10248a0, Func Offset: 0x90
	// Line 232, Address: 0x10248dc, Func Offset: 0xcc
	// Line 235, Address: 0x10248e4, Func Offset: 0xd4
	// Line 236, Address: 0x10248f4, Func Offset: 0xe4
	// Line 238, Address: 0x1024940, Func Offset: 0x130
	// Line 239, Address: 0x102495c, Func Offset: 0x14c
	// Line 242, Address: 0x1024968, Func Offset: 0x158
	// Line 243, Address: 0x1024970, Func Offset: 0x160
	// Line 244, Address: 0x1024974, Func Offset: 0x164
	// Line 246, Address: 0x10249bc, Func Offset: 0x1ac
	// Line 247, Address: 0x10249c8, Func Offset: 0x1b8
	// Line 249, Address: 0x10249dc, Func Offset: 0x1cc
	// Line 251, Address: 0x10249ec, Func Offset: 0x1dc
	// Line 253, Address: 0x1024a00, Func Offset: 0x1f0
	// Line 254, Address: 0x1024a10, Func Offset: 0x200
	// Line 255, Address: 0x1024a1c, Func Offset: 0x20c
	// Line 256, Address: 0x1024a24, Func Offset: 0x214
	// Line 259, Address: 0x1024a2c, Func Offset: 0x21c
	// Line 260, Address: 0x1024a54, Func Offset: 0x244
	// Line 262, Address: 0x1024a60, Func Offset: 0x250
	// Line 263, Address: 0x1024a6c, Func Offset: 0x25c
	// Line 264, Address: 0x1024a78, Func Offset: 0x268
	// Line 266, Address: 0x1024a80, Func Offset: 0x270
	// Func End, Address: 0x1024aa8, Func Offset: 0x298
}

// 
// Start address: 0x1024ab0
void rblk4_move(_anon1* pActwk)
{
	unsigned char d0;
	unsigned char rkpchg0[16];
	// Line 271, Address: 0x1024ab0, Func Offset: 0
	// Line 273, Address: 0x1024ac0, Func Offset: 0x10
	// Line 281, Address: 0x1024af4, Func Offset: 0x44
	// Line 282, Address: 0x1024b00, Func Offset: 0x50
	// Line 283, Address: 0x1024b10, Func Offset: 0x60
	// Line 284, Address: 0x1024b2c, Func Offset: 0x7c
	// Line 285, Address: 0x1024b3c, Func Offset: 0x8c
	// Line 287, Address: 0x1024b4c, Func Offset: 0x9c
	// Line 288, Address: 0x1024b5c, Func Offset: 0xac
	// Line 289, Address: 0x1024b6c, Func Offset: 0xbc
	// Line 291, Address: 0x1024b74, Func Offset: 0xc4
	// Line 292, Address: 0x1024b7c, Func Offset: 0xcc
	// Line 293, Address: 0x1024b8c, Func Offset: 0xdc
	// Line 297, Address: 0x1024b9c, Func Offset: 0xec
	// Line 298, Address: 0x1024ba8, Func Offset: 0xf8
	// Line 299, Address: 0x1024bb4, Func Offset: 0x104
	// Line 300, Address: 0x1024bc4, Func Offset: 0x114
	// Func End, Address: 0x1024bd8, Func Offset: 0x128
}

// 
// Start address: 0x1024be0
void rblk4_push(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short sd0;
	short sd1;
	unsigned char d0;
	unsigned char pspchg0[16];
	// Line 305, Address: 0x1024be0, Func Offset: 0
	// Line 309, Address: 0x1024bf8, Func Offset: 0x18
	// Line 317, Address: 0x1024c2c, Func Offset: 0x4c
	// Line 318, Address: 0x1024c38, Func Offset: 0x58
	// Line 319, Address: 0x1024c48, Func Offset: 0x68
	// Line 320, Address: 0x1024c64, Func Offset: 0x84
	// Line 321, Address: 0x1024c74, Func Offset: 0x94
	// Line 323, Address: 0x1024c84, Func Offset: 0xa4
	// Line 324, Address: 0x1024c94, Func Offset: 0xb4
	// Line 325, Address: 0x1024ca0, Func Offset: 0xc0
	// Line 327, Address: 0x1024ca8, Func Offset: 0xc8
	// Line 329, Address: 0x1024cb0, Func Offset: 0xd0
	// Line 330, Address: 0x1024cb8, Func Offset: 0xd8
	// Line 331, Address: 0x1024cc8, Func Offset: 0xe8
	// Line 332, Address: 0x1024cdc, Func Offset: 0xfc
	// Line 333, Address: 0x1024ce8, Func Offset: 0x108
	// Line 334, Address: 0x1024cf8, Func Offset: 0x118
	// Line 335, Address: 0x1024d04, Func Offset: 0x124
	// Line 337, Address: 0x1024d08, Func Offset: 0x128
	// Line 338, Address: 0x1024d18, Func Offset: 0x138
	// Line 343, Address: 0x1024d28, Func Offset: 0x148
	// Line 344, Address: 0x1024d34, Func Offset: 0x154
	// Line 345, Address: 0x1024d44, Func Offset: 0x164
	// Line 347, Address: 0x1024d5c, Func Offset: 0x17c
	// Line 348, Address: 0x1024d68, Func Offset: 0x188
	// Line 350, Address: 0x1024d70, Func Offset: 0x190
	// Line 352, Address: 0x1024d88, Func Offset: 0x1a8
	// Line 353, Address: 0x1024d94, Func Offset: 0x1b4
	// Line 355, Address: 0x1024dac, Func Offset: 0x1cc
	// Line 357, Address: 0x1024db8, Func Offset: 0x1d8
	// Line 358, Address: 0x1024dcc, Func Offset: 0x1ec
	// Line 360, Address: 0x1024dd0, Func Offset: 0x1f0
	// Func End, Address: 0x1024dec, Func Offset: 0x20c
}

// 
// Start address: 0x1024df0
void rblk4_ract(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 365, Address: 0x1024df0, Func Offset: 0
	// Line 366, Address: 0x1024dfc, Func Offset: 0xc
	// Line 372, Address: 0x1024e18, Func Offset: 0x28
	// Line 373, Address: 0x1024e54, Func Offset: 0x64
	// Line 374, Address: 0x1024e60, Func Offset: 0x70
	// Line 375, Address: 0x1024e74, Func Offset: 0x84
	// Func End, Address: 0x1024e84, Func Offset: 0x94
}

// 
// Start address: 0x1024e90
void rblk4_ract_init(_anon1* pActwk)
{
	unsigned char d0;
	unsigned char d1;
	// Line 380, Address: 0x1024e90, Func Offset: 0
	// Line 383, Address: 0x1024ea4, Func Offset: 0x14
	// Line 384, Address: 0x1024eb4, Func Offset: 0x24
	// Line 385, Address: 0x1024ec4, Func Offset: 0x34
	// Line 386, Address: 0x1024ed0, Func Offset: 0x40
	// Line 387, Address: 0x1024ee0, Func Offset: 0x50
	// Line 388, Address: 0x1024eec, Func Offset: 0x5c
	// Line 390, Address: 0x1024ef8, Func Offset: 0x68
	// Line 391, Address: 0x1024f00, Func Offset: 0x70
	// Line 392, Address: 0x1024f08, Func Offset: 0x78
	// Line 394, Address: 0x1024f18, Func Offset: 0x88
	// Line 395, Address: 0x1024f20, Func Offset: 0x90
	// Line 397, Address: 0x1024f28, Func Offset: 0x98
	// Line 398, Address: 0x1024f30, Func Offset: 0xa0
	// Line 400, Address: 0x1024f38, Func Offset: 0xa8
	// Line 401, Address: 0x1024f44, Func Offset: 0xb4
	// Func End, Address: 0x1024f5c, Func Offset: 0xcc
}

// 
// Start address: 0x1024f60
void rblk4_ract_move(_anon1* pActwk)
{
	_anon1* pRideact;
	char* a2;
	unsigned char d0;
	char xyofset_tbl1[8];
	char xyofset_tbl2[8];
	// Line 406, Address: 0x1024f60, Func Offset: 0
	// Line 410, Address: 0x1024f78, Func Offset: 0x18
	// Line 417, Address: 0x1024fac, Func Offset: 0x4c
	// Line 425, Address: 0x1024fe0, Func Offset: 0x80
	// Line 426, Address: 0x1025008, Func Offset: 0xa8
	// Line 427, Address: 0x1025010, Func Offset: 0xb0
	// Line 429, Address: 0x1025020, Func Offset: 0xc0
	// Line 430, Address: 0x1025034, Func Offset: 0xd4
	// Line 432, Address: 0x102503c, Func Offset: 0xdc
	// Line 433, Address: 0x1025050, Func Offset: 0xf0
	// Line 434, Address: 0x102505c, Func Offset: 0xfc
	// Line 436, Address: 0x102506c, Func Offset: 0x10c
	// Line 438, Address: 0x1025078, Func Offset: 0x118
	// Line 439, Address: 0x10250b4, Func Offset: 0x154
	// Line 441, Address: 0x10250f0, Func Offset: 0x190
	// Line 442, Address: 0x1025104, Func Offset: 0x1a4
	// Line 444, Address: 0x1025118, Func Offset: 0x1b8
	// Line 445, Address: 0x1025144, Func Offset: 0x1e4
	// Line 446, Address: 0x102514c, Func Offset: 0x1ec
	// Line 449, Address: 0x1025154, Func Offset: 0x1f4
	// Line 451, Address: 0x102516c, Func Offset: 0x20c
	// Line 452, Address: 0x1025174, Func Offset: 0x214
	// Line 453, Address: 0x102517c, Func Offset: 0x21c
	// Line 455, Address: 0x1025184, Func Offset: 0x224
	// Line 457, Address: 0x1025198, Func Offset: 0x238
	// Line 458, Address: 0x10251a4, Func Offset: 0x244
	// Line 459, Address: 0x10251b0, Func Offset: 0x250
	// Line 462, Address: 0x10251c0, Func Offset: 0x260
	// Func End, Address: 0x10251dc, Func Offset: 0x27c
}

