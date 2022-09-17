typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);
typedef void(*type_6)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon0*)[3];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef void(*type_7)(_anon0*)[4];
typedef _anon0 type_8[128];
typedef _anon1* type_9[10];

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
		_anon7 spra[20];
		_anon7 spr[0];
	};
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

_anon1 pat_00;
_anon1 pat_01;
_anon1 pat_02;
_anon1 pat_03;
_anon1 pat_04;
_anon1 pat_05;
_anon1 pat_06;
_anon1 pat_07;
_anon1 pat_08;
_anon1 pat_09;
_anon1* pat_kuzure_a[10];
void(*kuzure5_act_tbl)(_anon0*)[4];
void(*parts_act_tbl)(_anon0*)[3];
_anon5 stageno;
_anon0 actwk[128];

void kuzure5(_anon0* pActwk);
void main_ini(_anon0* pActwk);
void main_check(_anon0* pActwk);
void main_wait(_anon0* pActwk);
void main_break(_anon0* pActwk);
void parts_ini(_anon0* pActwk);
void parts_wait(_anon0* pActwk);
void parts_fall(_anon0* pActwk);

// 
// Start address: 0x101b940
void kuzure5(_anon0* pActwk)
{
	// Line 146, Address: 0x101b940, Func Offset: 0
	// Line 147, Address: 0x101b94c, Func Offset: 0xc
	// Line 149, Address: 0x101b95c, Func Offset: 0x1c
	// Line 150, Address: 0x101b9a0, Func Offset: 0x60
	// Line 152, Address: 0x101b9a8, Func Offset: 0x68
	// Line 154, Address: 0x101b9ec, Func Offset: 0xac
	// Func End, Address: 0x101b9fc, Func Offset: 0xbc
}

// 
// Start address: 0x101ba00
void main_ini(_anon0* pActwk)
{
	// Line 160, Address: 0x101ba00, Func Offset: 0
	// Line 161, Address: 0x101ba0c, Func Offset: 0xc
	// Line 162, Address: 0x101ba1c, Func Offset: 0x1c
	// Line 163, Address: 0x101ba28, Func Offset: 0x28
	// Line 164, Address: 0x101ba38, Func Offset: 0x38
	// Line 165, Address: 0x101ba44, Func Offset: 0x44
	// Line 167, Address: 0x101ba50, Func Offset: 0x50
	// Line 168, Address: 0x101ba6c, Func Offset: 0x6c
	// Line 169, Address: 0x101ba78, Func Offset: 0x78
	// Line 170, Address: 0x101ba80, Func Offset: 0x80
	// Line 173, Address: 0x101ba8c, Func Offset: 0x8c
	// Line 174, Address: 0x101baac, Func Offset: 0xac
	// Line 175, Address: 0x101bad8, Func Offset: 0xd8
	// Line 176, Address: 0x101bae4, Func Offset: 0xe4
	// Func End, Address: 0x101baf4, Func Offset: 0xf4
}

// 
// Start address: 0x101bb00
void main_check(_anon0* pActwk)
{
	// Line 182, Address: 0x101bb00, Func Offset: 0
	// Line 183, Address: 0x101bb0c, Func Offset: 0xc
	// Line 184, Address: 0x101bb28, Func Offset: 0x28
	// Line 185, Address: 0x101bb38, Func Offset: 0x38
	// Line 186, Address: 0x101bb40, Func Offset: 0x40
	// Line 188, Address: 0x101bb4c, Func Offset: 0x4c
	// Line 189, Address: 0x101bb64, Func Offset: 0x64
	// Line 190, Address: 0x101bb70, Func Offset: 0x70
	// Line 191, Address: 0x101bb78, Func Offset: 0x78
	// Line 194, Address: 0x101bb84, Func Offset: 0x84
	// Line 198, Address: 0x101bb90, Func Offset: 0x90
	// Line 199, Address: 0x101bb9c, Func Offset: 0x9c
	// Line 200, Address: 0x101bba8, Func Offset: 0xa8
	// Func End, Address: 0x101bbb8, Func Offset: 0xb8
}

// 
// Start address: 0x101bbc0
void main_wait(_anon0* pActwk)
{
	// Line 206, Address: 0x101bbc0, Func Offset: 0
	// Line 207, Address: 0x101bbcc, Func Offset: 0xc
	// Line 209, Address: 0x101bbe0, Func Offset: 0x20
	// Line 210, Address: 0x101bc08, Func Offset: 0x48
	// Line 214, Address: 0x101bc18, Func Offset: 0x58
	// Line 215, Address: 0x101bc24, Func Offset: 0x64
	// Func End, Address: 0x101bc34, Func Offset: 0x74
}

// 
// Start address: 0x101bc40
void main_break(_anon0* pActwk)
{
	unsigned char flagwk;
	short xwk;
	short ywk;
	_anon0* pNewact;
	// Line 221, Address: 0x101bc40, Func Offset: 0
	// Line 229, Address: 0x101bc58, Func Offset: 0x18
	// Line 230, Address: 0x101bc60, Func Offset: 0x20
	// Line 231, Address: 0x101bc6c, Func Offset: 0x2c
	// Line 233, Address: 0x101bc9c, Func Offset: 0x5c
	// Line 234, Address: 0x101bcb4, Func Offset: 0x74
	// Line 238, Address: 0x101bcc0, Func Offset: 0x80
	// Line 241, Address: 0x101bcd4, Func Offset: 0x94
	// Line 242, Address: 0x101bce4, Func Offset: 0xa4
	// Line 243, Address: 0x101bcf4, Func Offset: 0xb4
	// Line 244, Address: 0x101bd04, Func Offset: 0xc4
	// Line 245, Address: 0x101bd14, Func Offset: 0xd4
	// Line 246, Address: 0x101bd24, Func Offset: 0xe4
	// Line 249, Address: 0x101bd34, Func Offset: 0xf4
	// Line 250, Address: 0x101bd3c, Func Offset: 0xfc
	// Line 251, Address: 0x101bd4c, Func Offset: 0x10c
	// Line 252, Address: 0x101bd5c, Func Offset: 0x11c
	// Line 253, Address: 0x101bd68, Func Offset: 0x128
	// Line 255, Address: 0x101bd74, Func Offset: 0x134
	// Line 258, Address: 0x101bd88, Func Offset: 0x148
	// Line 259, Address: 0x101bd98, Func Offset: 0x158
	// Line 260, Address: 0x101bda8, Func Offset: 0x168
	// Line 261, Address: 0x101bdb8, Func Offset: 0x178
	// Line 262, Address: 0x101bdc8, Func Offset: 0x188
	// Line 263, Address: 0x101bdd8, Func Offset: 0x198
	// Line 266, Address: 0x101bde8, Func Offset: 0x1a8
	// Line 267, Address: 0x101bdf0, Func Offset: 0x1b0
	// Line 268, Address: 0x101be00, Func Offset: 0x1c0
	// Line 269, Address: 0x101be10, Func Offset: 0x1d0
	// Line 274, Address: 0x101be1c, Func Offset: 0x1dc
	// Line 275, Address: 0x101be38, Func Offset: 0x1f8
	// Line 279, Address: 0x101be4c, Func Offset: 0x20c
	// Line 280, Address: 0x101be74, Func Offset: 0x234
	// Line 281, Address: 0x101be80, Func Offset: 0x240
	// Line 282, Address: 0x101be88, Func Offset: 0x248
	// Line 283, Address: 0x101be98, Func Offset: 0x258
	// Line 284, Address: 0x101bea8, Func Offset: 0x268
	// Line 285, Address: 0x101beb8, Func Offset: 0x278
	// Line 286, Address: 0x101bec8, Func Offset: 0x288
	// Line 287, Address: 0x101bed4, Func Offset: 0x294
	// Line 288, Address: 0x101beec, Func Offset: 0x2ac
	// Line 289, Address: 0x101bf00, Func Offset: 0x2c0
	// Line 291, Address: 0x101bf0c, Func Offset: 0x2cc
	// Func End, Address: 0x101bf28, Func Offset: 0x2e8
}

// 
// Start address: 0x101bf30
void parts_ini(_anon0* pActwk)
{
	// Line 301, Address: 0x101bf30, Func Offset: 0
	// Line 302, Address: 0x101bf3c, Func Offset: 0xc
	// Line 303, Address: 0x101bf4c, Func Offset: 0x1c
	// Line 304, Address: 0x101bf58, Func Offset: 0x28
	// Line 305, Address: 0x101bf70, Func Offset: 0x40
	// Line 306, Address: 0x101bf7c, Func Offset: 0x4c
	// Line 307, Address: 0x101bf88, Func Offset: 0x58
	// Func End, Address: 0x101bf98, Func Offset: 0x68
}

// 
// Start address: 0x101bfa0
void parts_wait(_anon0* pActwk)
{
	// Line 313, Address: 0x101bfa0, Func Offset: 0
	// Line 314, Address: 0x101bfac, Func Offset: 0xc
	// Line 315, Address: 0x101bfd4, Func Offset: 0x34
	// Line 319, Address: 0x101bfe4, Func Offset: 0x44
	// Line 320, Address: 0x101bff0, Func Offset: 0x50
	// Func End, Address: 0x101c000, Func Offset: 0x60
}

// 
// Start address: 0x101c000
void parts_fall(_anon0* pActwk)
{
	int spdwk;
	// Line 326, Address: 0x101c000, Func Offset: 0
	// Line 329, Address: 0x101c010, Func Offset: 0x10
	// Line 330, Address: 0x101c028, Func Offset: 0x28
	// Line 331, Address: 0x101c034, Func Offset: 0x34
	// Line 332, Address: 0x101c03c, Func Offset: 0x3c
	// Line 333, Address: 0x101c058, Func Offset: 0x58
	// Line 334, Address: 0x101c074, Func Offset: 0x74
	// Line 336, Address: 0x101c078, Func Offset: 0x78
	// Line 337, Address: 0x101c080, Func Offset: 0x80
	// Line 338, Address: 0x101c090, Func Offset: 0x90
	// Line 340, Address: 0x101c09c, Func Offset: 0x9c
	// Func End, Address: 0x101c0b0, Func Offset: 0xb0
}

