typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon0* type_4[2];
typedef _anon0* type_5[2];
typedef void(*type_7)(_anon1*)[4];

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

void(*batta_tbl)(_anon1*)[4];
_anon0* pat_batta_b[2];
_anon0* pat_batta_e[2];
_anon0 ep_batta0;
_anon0 ep_batta1;
_anon0 bp_batta0;
_anon0 bp_batta1;

void batta(_anon1* pActwk);
void batta_init(_anon1* pActwk);
short emylr_jump(_anon1* pActwk, unsigned char byD3);
void batta_down(_anon1* pActwk);
void batta_floor(_anon1* pActwk);
void batta_wait(_anon1* pActwk);
void batta_up(_anon1* pActwk);
void batta_ceiling(_anon1* pActwk);
void batta_fall(_anon1* pActwk);
void batta_wall(_anon1* pActwk);
void batta_patexg(_anon1* pActwk);

// 
// Start address: 0x10220d0
void batta(_anon1* pActwk)
{
	// Line 90, Address: 0x10220d0, Func Offset: 0
	// Line 91, Address: 0x10220dc, Func Offset: 0xc
	// Line 92, Address: 0x10220f0, Func Offset: 0x20
	// Line 93, Address: 0x1022134, Func Offset: 0x64
	// Line 94, Address: 0x1022140, Func Offset: 0x70
	// Line 95, Address: 0x102214c, Func Offset: 0x7c
	// Func End, Address: 0x102215c, Func Offset: 0x8c
}

// 
// Start address: 0x1022160
void batta_init(_anon1* pActwk)
{
	// Line 107, Address: 0x1022160, Func Offset: 0
	// Line 108, Address: 0x102216c, Func Offset: 0xc
	// Line 109, Address: 0x102217c, Func Offset: 0x1c
	// Line 110, Address: 0x102218c, Func Offset: 0x2c
	// Line 111, Address: 0x1022198, Func Offset: 0x38
	// Line 112, Address: 0x10221a4, Func Offset: 0x44
	// Line 113, Address: 0x10221b0, Func Offset: 0x50
	// Line 114, Address: 0x10221bc, Func Offset: 0x5c
	// Line 115, Address: 0x10221cc, Func Offset: 0x6c
	// Line 116, Address: 0x10221d8, Func Offset: 0x78
	// Line 117, Address: 0x10221e4, Func Offset: 0x84
	// Line 119, Address: 0x10221f0, Func Offset: 0x90
	// Line 120, Address: 0x10221fc, Func Offset: 0x9c
	// Line 122, Address: 0x1022214, Func Offset: 0xb4
	// Line 123, Address: 0x1022224, Func Offset: 0xc4
	// Line 124, Address: 0x1022238, Func Offset: 0xd8
	// Line 125, Address: 0x1022244, Func Offset: 0xe4
	// Line 126, Address: 0x1022250, Func Offset: 0xf0
	// Line 129, Address: 0x1022258, Func Offset: 0xf8
	// Line 130, Address: 0x1022268, Func Offset: 0x108
	// Line 131, Address: 0x1022278, Func Offset: 0x118
	// Line 132, Address: 0x1022284, Func Offset: 0x124
	// Line 135, Address: 0x1022290, Func Offset: 0x130
	// Line 136, Address: 0x10222a0, Func Offset: 0x140
	// Func End, Address: 0x10222b0, Func Offset: 0x150
}

// 
// Start address: 0x10222b0
short emylr_jump(_anon1* pActwk, unsigned char byD3)
{
	// Line 140, Address: 0x10222b0, Func Offset: 0
	// Line 141, Address: 0x10222c0, Func Offset: 0x10
	// Line 142, Address: 0x10222d8, Func Offset: 0x28
	// Line 144, Address: 0x10222f0, Func Offset: 0x40
	// Line 145, Address: 0x1022300, Func Offset: 0x50
	// Func End, Address: 0x1022310, Func Offset: 0x60
}

// 
// Start address: 0x1022310
void batta_down(_anon1* pActwk)
{
	short iD1;
	short iD3;
	// Line 156, Address: 0x1022310, Func Offset: 0
	// Line 159, Address: 0x1022324, Func Offset: 0x14
	// Line 160, Address: 0x1022340, Func Offset: 0x30
	// Line 162, Address: 0x102235c, Func Offset: 0x4c
	// Line 163, Address: 0x1022370, Func Offset: 0x60
	// Line 164, Address: 0x1022378, Func Offset: 0x68
	// Line 165, Address: 0x1022388, Func Offset: 0x78
	// Line 166, Address: 0x10223a0, Func Offset: 0x90
	// Line 168, Address: 0x10223b0, Func Offset: 0xa0
	// Line 170, Address: 0x10223c8, Func Offset: 0xb8
	// Line 171, Address: 0x10223d4, Func Offset: 0xc4
	// Line 173, Address: 0x10223dc, Func Offset: 0xcc
	// Line 174, Address: 0x1022400, Func Offset: 0xf0
	// Line 176, Address: 0x1022414, Func Offset: 0x104
	// Line 177, Address: 0x1022420, Func Offset: 0x110
	// Line 180, Address: 0x1022428, Func Offset: 0x118
	// Line 182, Address: 0x1022440, Func Offset: 0x130
	// Line 183, Address: 0x102244c, Func Offset: 0x13c
	// Line 185, Address: 0x1022454, Func Offset: 0x144
	// Line 186, Address: 0x102246c, Func Offset: 0x15c
	// Line 187, Address: 0x1022488, Func Offset: 0x178
	// Line 189, Address: 0x1022498, Func Offset: 0x188
	// Func End, Address: 0x10224b0, Func Offset: 0x1a0
}

// 
// Start address: 0x10224b0
void batta_floor(_anon1* pActwk)
{
	// Line 201, Address: 0x10224b0, Func Offset: 0
	// Line 202, Address: 0x10224b8, Func Offset: 0x8
	// Line 203, Address: 0x10224c8, Func Offset: 0x18
	// Line 204, Address: 0x10224e0, Func Offset: 0x30
	// Line 205, Address: 0x10224f8, Func Offset: 0x48
	// Line 207, Address: 0x102250c, Func Offset: 0x5c
	// Line 208, Address: 0x1022518, Func Offset: 0x68
	// Func End, Address: 0x1022524, Func Offset: 0x74
}

// 
// Start address: 0x1022530
void batta_wait(_anon1* pActwk)
{
	short iD6;
	// Line 220, Address: 0x1022530, Func Offset: 0
	// Line 223, Address: 0x1022540, Func Offset: 0x10
	// Line 225, Address: 0x1022558, Func Offset: 0x28
	// Line 226, Address: 0x1022564, Func Offset: 0x34
	// Line 230, Address: 0x10225ac, Func Offset: 0x7c
	// Line 233, Address: 0x10225c8, Func Offset: 0x98
	// Line 234, Address: 0x10225d8, Func Offset: 0xa8
	// Line 241, Address: 0x10225e4, Func Offset: 0xb4
	// Line 242, Address: 0x10225f4, Func Offset: 0xc4
	// Line 244, Address: 0x102260c, Func Offset: 0xdc
	// Line 245, Address: 0x102261c, Func Offset: 0xec
	// Line 246, Address: 0x102262c, Func Offset: 0xfc
	// Line 247, Address: 0x1022638, Func Offset: 0x108
	// Line 248, Address: 0x1022650, Func Offset: 0x120
	// Line 250, Address: 0x1022668, Func Offset: 0x138
	// Line 251, Address: 0x1022678, Func Offset: 0x148
	// Line 252, Address: 0x1022688, Func Offset: 0x158
	// Line 253, Address: 0x10226a0, Func Offset: 0x170
	// Line 255, Address: 0x10226ac, Func Offset: 0x17c
	// Func End, Address: 0x10226c0, Func Offset: 0x190
}

// 
// Start address: 0x10226c0
void batta_up(_anon1* pActwk)
{
	short iD1;
	short iD3;
	// Line 267, Address: 0x10226c0, Func Offset: 0
	// Line 270, Address: 0x10226d4, Func Offset: 0x14
	// Line 271, Address: 0x10226f0, Func Offset: 0x30
	// Line 272, Address: 0x102270c, Func Offset: 0x4c
	// Line 273, Address: 0x1022720, Func Offset: 0x60
	// Line 274, Address: 0x1022728, Func Offset: 0x68
	// Line 275, Address: 0x1022738, Func Offset: 0x78
	// Line 276, Address: 0x1022750, Func Offset: 0x90
	// Line 278, Address: 0x1022760, Func Offset: 0xa0
	// Line 281, Address: 0x102279c, Func Offset: 0xdc
	// Line 282, Address: 0x10227a8, Func Offset: 0xe8
	// Line 284, Address: 0x10227b0, Func Offset: 0xf0
	// Line 285, Address: 0x10227bc, Func Offset: 0xfc
	// Line 288, Address: 0x10227c4, Func Offset: 0x104
	// Line 290, Address: 0x10227dc, Func Offset: 0x11c
	// Line 291, Address: 0x10227e8, Func Offset: 0x128
	// Line 293, Address: 0x10227f0, Func Offset: 0x130
	// Line 294, Address: 0x1022808, Func Offset: 0x148
	// Line 295, Address: 0x102281c, Func Offset: 0x15c
	// Line 296, Address: 0x1022828, Func Offset: 0x168
	// Func End, Address: 0x1022840, Func Offset: 0x180
}

// 
// Start address: 0x1022840
void batta_ceiling(_anon1* pActwk)
{
	// Line 308, Address: 0x1022840, Func Offset: 0
	// Line 309, Address: 0x102284c, Func Offset: 0xc
	// Line 310, Address: 0x1022864, Func Offset: 0x24
	// Line 311, Address: 0x1022870, Func Offset: 0x30
	// Line 312, Address: 0x102287c, Func Offset: 0x3c
	// Func End, Address: 0x102288c, Func Offset: 0x4c
}

// 
// Start address: 0x1022890
void batta_fall(_anon1* pActwk)
{
	// Line 324, Address: 0x1022890, Func Offset: 0
	// Line 325, Address: 0x102289c, Func Offset: 0xc
	// Line 326, Address: 0x10228ac, Func Offset: 0x1c
	// Line 327, Address: 0x10228bc, Func Offset: 0x2c
	// Line 328, Address: 0x10228c8, Func Offset: 0x38
	// Func End, Address: 0x10228d8, Func Offset: 0x48
}

// 
// Start address: 0x10228e0
void batta_wall(_anon1* pActwk)
{
	// Line 340, Address: 0x10228e0, Func Offset: 0
	// Line 341, Address: 0x10228e8, Func Offset: 0x8
	// Line 342, Address: 0x10228f8, Func Offset: 0x18
	// Line 343, Address: 0x1022908, Func Offset: 0x28
	// Line 344, Address: 0x1022918, Func Offset: 0x38
	// Line 345, Address: 0x1022944, Func Offset: 0x64
	// Line 346, Address: 0x1022968, Func Offset: 0x88
	// Line 347, Address: 0x1022980, Func Offset: 0xa0
	// Line 349, Address: 0x1022994, Func Offset: 0xb4
	// Line 350, Address: 0x10229a0, Func Offset: 0xc0
	// Func End, Address: 0x10229ac, Func Offset: 0xcc
}

// 
// Start address: 0x10229b0
void batta_patexg(_anon1* pActwk)
{
	// Line 362, Address: 0x10229b0, Func Offset: 0
	// Line 363, Address: 0x10229b8, Func Offset: 0x8
	// Line 365, Address: 0x10229cc, Func Offset: 0x1c
	// Line 366, Address: 0x10229d4, Func Offset: 0x24
	// Line 367, Address: 0x10229e0, Func Offset: 0x30
	// Line 368, Address: 0x10229ec, Func Offset: 0x3c
	// Line 371, Address: 0x10229f4, Func Offset: 0x44
	// Line 372, Address: 0x1022a00, Func Offset: 0x50
	// Line 373, Address: 0x1022a0c, Func Offset: 0x5c
	// Line 375, Address: 0x1022a18, Func Offset: 0x68
	// Func End, Address: 0x1022a24, Func Offset: 0x74
}

