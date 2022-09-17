typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef char type_1[6];
typedef _anon7 type_2[0];
typedef unsigned short type_3[11];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef char* type_6[1];
typedef char type_7[64];
typedef _anon0 type_8[128];
typedef _anon1* type_9[8];

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

_anon1 tpat00;
_anon1 tpat01;
_anon1 tpat07;
_anon1 tpat02;
_anon1 tpat03;
_anon1 tpat04;
_anon1 tpat05;
_anon1 tpat06;
_anon1* pat_et[8];
unsigned short tbl0sproffset[11];
char tbl0[64];
char pchg0[6];
char* pchg[1];
unsigned char time_flag;
unsigned char generate_flag;
_anon5 stageno;
_anon0 actwk[128];

void et(_anon0* actionwk);
void m_init(_anon0* actionwk);
void m_wait(_anon0* actionwk);
void m_die(_anon0* actionwk);
void m1wait(_anon0* actionwk);
void a_hover(_anon0* actionwk);

// 
// Start address: 0x101af70
void et(_anon0* actionwk)
{
	// Line 144, Address: 0x101af70, Func Offset: 0
	// Line 145, Address: 0x101af7c, Func Offset: 0xc
	// Line 148, Address: 0x101afbc, Func Offset: 0x4c
	// Line 150, Address: 0x101afc8, Func Offset: 0x58
	// Line 151, Address: 0x101afd4, Func Offset: 0x64
	// Line 153, Address: 0x101afdc, Func Offset: 0x6c
	// Line 154, Address: 0x101afe8, Func Offset: 0x78
	// Line 156, Address: 0x101aff0, Func Offset: 0x80
	// Line 159, Address: 0x101affc, Func Offset: 0x8c
	// Line 160, Address: 0x101b008, Func Offset: 0x98
	// Line 161, Address: 0x101b020, Func Offset: 0xb0
	// Line 163, Address: 0x101b02c, Func Offset: 0xbc
	// Func End, Address: 0x101b03c, Func Offset: 0xcc
}

// 
// Start address: 0x101b040
void m_init(_anon0* actionwk)
{
	unsigned short* a1;
	unsigned short d0;
	// Line 166, Address: 0x101b040, Func Offset: 0
	// Line 170, Address: 0x101b050, Func Offset: 0x10
	// Line 171, Address: 0x101b060, Func Offset: 0x20
	// Line 172, Address: 0x101b070, Func Offset: 0x30
	// Line 173, Address: 0x101b07c, Func Offset: 0x3c
	// Line 174, Address: 0x101b088, Func Offset: 0x48
	// Line 175, Address: 0x101b094, Func Offset: 0x54
	// Line 177, Address: 0x101b0a0, Func Offset: 0x60
	// Line 178, Address: 0x101b0a8, Func Offset: 0x68
	// Line 179, Address: 0x101b0dc, Func Offset: 0x9c
	// Line 185, Address: 0x101b0f4, Func Offset: 0xb4
	// Line 187, Address: 0x101b104, Func Offset: 0xc4
	// Line 188, Address: 0x101b10c, Func Offset: 0xcc
	// Line 189, Address: 0x101b11c, Func Offset: 0xdc
	// Line 190, Address: 0x101b128, Func Offset: 0xe8
	// Line 192, Address: 0x101b134, Func Offset: 0xf4
	// Line 193, Address: 0x101b138, Func Offset: 0xf8
	// Line 194, Address: 0x101b154, Func Offset: 0x114
	// Line 195, Address: 0x101b170, Func Offset: 0x130
	// Line 196, Address: 0x101b17c, Func Offset: 0x13c
	// Line 198, Address: 0x101b1a4, Func Offset: 0x164
	// Line 199, Address: 0x101b1b0, Func Offset: 0x170
	// Line 201, Address: 0x101b1c0, Func Offset: 0x180
	// Func End, Address: 0x101b1d4, Func Offset: 0x194
}

// 
// Start address: 0x101b1e0
void m_wait(_anon0* actionwk)
{
	int d0;
	_anon0* a1;
	// Line 203, Address: 0x101b1e0, Func Offset: 0
	// Line 207, Address: 0x101b1f4, Func Offset: 0x14
	// Line 208, Address: 0x101b224, Func Offset: 0x44
	// Line 210, Address: 0x101b230, Func Offset: 0x50
	// Line 211, Address: 0x101b244, Func Offset: 0x64
	// Line 212, Address: 0x101b24c, Func Offset: 0x6c
	// Line 213, Address: 0x101b254, Func Offset: 0x74
	// Line 214, Address: 0x101b260, Func Offset: 0x80
	// Line 215, Address: 0x101b270, Func Offset: 0x90
	// Line 216, Address: 0x101b27c, Func Offset: 0x9c
	// Line 217, Address: 0x101b280, Func Offset: 0xa0
	// Line 218, Address: 0x101b28c, Func Offset: 0xac
	// Line 219, Address: 0x101b294, Func Offset: 0xb4
	// Line 220, Address: 0x101b2bc, Func Offset: 0xdc
	// Line 222, Address: 0x101b2c4, Func Offset: 0xe4
	// Line 223, Address: 0x101b2d8, Func Offset: 0xf8
	// Line 224, Address: 0x101b2ec, Func Offset: 0x10c
	// Func End, Address: 0x101b304, Func Offset: 0x124
}

// 
// Start address: 0x101b310
void m_die(_anon0* actionwk)
{
	_anon0* a1;
	char d0;
	short d5;
	short d6;
	short a6;
	// Line 226, Address: 0x101b310, Func Offset: 0
	// Line 231, Address: 0x101b32c, Func Offset: 0x1c
	// Line 232, Address: 0x101b33c, Func Offset: 0x2c
	// Line 233, Address: 0x101b36c, Func Offset: 0x5c
	// Line 235, Address: 0x101b37c, Func Offset: 0x6c
	// Line 236, Address: 0x101b38c, Func Offset: 0x7c
	// Line 237, Address: 0x101b398, Func Offset: 0x88
	// Line 239, Address: 0x101b3a0, Func Offset: 0x90
	// Line 240, Address: 0x101b3b0, Func Offset: 0xa0
	// Line 241, Address: 0x101b3d0, Func Offset: 0xc0
	// Line 242, Address: 0x101b408, Func Offset: 0xf8
	// Line 243, Address: 0x101b440, Func Offset: 0x130
	// Line 244, Address: 0x101b448, Func Offset: 0x138
	// Line 245, Address: 0x101b45c, Func Offset: 0x14c
	// Line 246, Address: 0x101b468, Func Offset: 0x158
	// Line 247, Address: 0x101b474, Func Offset: 0x164
	// Line 248, Address: 0x101b48c, Func Offset: 0x17c
	// Line 249, Address: 0x101b4a4, Func Offset: 0x194
	// Line 250, Address: 0x101b4b4, Func Offset: 0x1a4
	// Line 251, Address: 0x101b4c4, Func Offset: 0x1b4
	// Line 252, Address: 0x101b4d0, Func Offset: 0x1c0
	// Line 253, Address: 0x101b4dc, Func Offset: 0x1cc
	// Func End, Address: 0x101b4fc, Func Offset: 0x1ec
}

// 
// Start address: 0x101b500
void m1wait(_anon0* actionwk)
{
	// Line 255, Address: 0x101b500, Func Offset: 0
	// Line 256, Address: 0x101b50c, Func Offset: 0xc
	// Line 257, Address: 0x101b528, Func Offset: 0x28
	// Line 258, Address: 0x101b538, Func Offset: 0x38
	// Line 259, Address: 0x101b548, Func Offset: 0x48
	// Line 260, Address: 0x101b554, Func Offset: 0x54
	// Func End, Address: 0x101b564, Func Offset: 0x64
}

// 
// Start address: 0x101b570
void a_hover(_anon0* actionwk)
{
	unsigned short d0;
	// Line 262, Address: 0x101b570, Func Offset: 0
	// Line 265, Address: 0x101b57c, Func Offset: 0xc
	// Line 266, Address: 0x101b58c, Func Offset: 0x1c
	// Line 267, Address: 0x101b598, Func Offset: 0x28
	// Line 268, Address: 0x101b5a0, Func Offset: 0x30
	// Line 270, Address: 0x101b5ac, Func Offset: 0x3c
	// Line 271, Address: 0x101b5b8, Func Offset: 0x48
	// Line 273, Address: 0x101b5d0, Func Offset: 0x60
	// Line 274, Address: 0x101b5dc, Func Offset: 0x6c
	// Line 275, Address: 0x101b5e4, Func Offset: 0x74
	// Line 276, Address: 0x101b614, Func Offset: 0xa4
	// Func End, Address: 0x101b624, Func Offset: 0xb4
}

