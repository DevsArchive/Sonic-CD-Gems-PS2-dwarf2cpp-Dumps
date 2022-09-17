typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(short, short, unsigned short, unsigned short, unsigned short);
typedef void(*type_6)(_anon1*);
typedef void(*type_9)(void*, unsigned char, int);

typedef _anon0 type_0[20];
typedef _anon1 type_1[48];
typedef _anon0 type_2[0];
typedef unsigned short type_4[512];
typedef _anon6 type_5[700];
typedef void(*type_7)(_anon1*)[16];
typedef _anon2* type_8[64];
typedef unsigned char type_10[3];
typedef unsigned char type_11[48];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char actno;
	unsigned char cgno;
	unsigned char actflg;
	unsigned char exeno;
	unsigned short sprcolor;
	_anon3** pattbl;
	unsigned char pattblno;
	unsigned char patno;
	char pctime;
	char pctime_b;
	unsigned char scno_ce;
	unsigned char scno_ul;
	unsigned char scno_ur;
	unsigned char scno_dr;
	unsigned char scno_dl;
	unsigned char scno_sdir;
	short spdcnt;
	short spdcnt_shock;
	short spdcnt_max;
	_anon4 x_posi;
	_anon4 y_posi;
	_anon4 z_posi;
	_anon4 sx_posi;
	_anon4 sy_posi;
	_anon4 x_speed;
	_anon4 y_speed;
	_anon4 z_speed;
	_anon4 sx_speed;
	_anon4 sy_speed;
	unsigned char colliflg;
	unsigned char dummy[3];
	unsigned char actfree[48];
};

struct _anon2
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon3
{
	unsigned char cnt;
	char timer;
	_anon2* spr[64];
};

union _anon4
{
	int l;
	_anon5 w;
	_anon7 b;
};

struct _anon5
{
	short l;
	short h;
};

struct _anon6
{
	unsigned char xs;
	unsigned char ys;
	unsigned char ofs;
};

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

void(*act_tbl)(_anon1*)[16];
void(*EAsprset)(short, short, unsigned short, unsigned short, unsigned short);
unsigned short linkdata;
_anon1 actwk[48];
void(*sMemSet)(void*, unsigned char, int);
unsigned short z_buffer[512];
_anon6 SprBmp[700];

void action();
void actmain(_anon1* work);
void zbuf_init();
void zbuf_set(_anon1* work, int length);
void zbuf_patset();
void zpatset(short z_buffer_start);
short zpatset_call(short z_buffer_number);
void patinit(_anon1* work, unsigned char pattbl_number);
void patinit1(_anon1* work, unsigned char pattbl_number);
void patset(_anon1* work);
void n_patset(_anon1* work, _anon2* sprpat_adr);

// 
// Start address: 0x1000000
void action()
{
	short i;
	// Line 38, Address: 0x1000000, Func Offset: 0
	// Line 41, Address: 0x100000c, Func Offset: 0xc
	// Line 42, Address: 0x1000014, Func Offset: 0x14
	// Line 44, Address: 0x100001c, Func Offset: 0x1c
	// Line 46, Address: 0x1000074, Func Offset: 0x74
	// Line 47, Address: 0x1000084, Func Offset: 0x84
	// Line 49, Address: 0x1000094, Func Offset: 0x94
	// Line 58, Address: 0x10000ec, Func Offset: 0xec
	// Line 60, Address: 0x10000f4, Func Offset: 0xf4
	// Line 62, Address: 0x100014c, Func Offset: 0x14c
	// Line 63, Address: 0x100016c, Func Offset: 0x16c
	// Line 64, Address: 0x1000190, Func Offset: 0x190
	// Line 65, Address: 0x10001b0, Func Offset: 0x1b0
	// Func End, Address: 0x10001c4, Func Offset: 0x1c4
}

// 
// Start address: 0x10001d0
void actmain(_anon1* work)
{
	// Line 69, Address: 0x10001d0, Func Offset: 0
	// Line 70, Address: 0x10001dc, Func Offset: 0xc
	// Line 71, Address: 0x10001f0, Func Offset: 0x20
	// Line 72, Address: 0x1000220, Func Offset: 0x50
	// Line 73, Address: 0x1000238, Func Offset: 0x68
	// Line 74, Address: 0x1000254, Func Offset: 0x84
	// Func End, Address: 0x1000264, Func Offset: 0x94
}

// 
// Start address: 0x1000270
void zbuf_init()
{
	short i;
	// Line 80, Address: 0x1000270, Func Offset: 0
	// Line 83, Address: 0x1000278, Func Offset: 0x8
	// Line 84, Address: 0x10002c0, Func Offset: 0x50
	// Func End, Address: 0x10002d0, Func Offset: 0x60
}

// 
// Start address: 0x10002d0
void zbuf_set(_anon1* work, int length)
{
	short i;
	// Line 93, Address: 0x10002d0, Func Offset: 0
	// Line 94, Address: 0x10002e0, Func Offset: 0x10
	// Line 96, Address: 0x10002e4, Func Offset: 0x14
	// Line 97, Address: 0x10002fc, Func Offset: 0x2c
	// Line 100, Address: 0x1000324, Func Offset: 0x54
	// Line 101, Address: 0x1000330, Func Offset: 0x60
	// Line 102, Address: 0x1000360, Func Offset: 0x90
	// Line 103, Address: 0x1000380, Func Offset: 0xb0
	// Line 104, Address: 0x10003d0, Func Offset: 0x100
	// Line 105, Address: 0x10003f8, Func Offset: 0x128
	// Func End, Address: 0x1000408, Func Offset: 0x138
}

// 
// Start address: 0x1000410
void zbuf_patset()
{
	short i;
	// Line 111, Address: 0x1000410, Func Offset: 0
	// Line 114, Address: 0x100041c, Func Offset: 0xc
	// Line 115, Address: 0x1000454, Func Offset: 0x44
	// Func End, Address: 0x1000468, Func Offset: 0x58
}

// 
// Start address: 0x1000470
void zpatset(short z_buffer_start)
{
	short i;
	// Line 118, Address: 0x1000470, Func Offset: 0
	// Line 121, Address: 0x1000480, Func Offset: 0x10
	// Line 122, Address: 0x100048c, Func Offset: 0x1c
	// Line 123, Address: 0x10004e4, Func Offset: 0x74
	// Func End, Address: 0x10004f8, Func Offset: 0x88
}

// 
// Start address: 0x1000500
short zpatset_call(short z_buffer_number)
{
	unsigned short actwk_number;
	// Line 126, Address: 0x1000500, Func Offset: 0
	// Line 128, Address: 0x1000510, Func Offset: 0x10
	// Line 130, Address: 0x100054c, Func Offset: 0x4c
	// Line 131, Address: 0x1000570, Func Offset: 0x70
	// Line 132, Address: 0x1000574, Func Offset: 0x74
	// Func End, Address: 0x1000588, Func Offset: 0x88
}

// 
// Start address: 0x1000590
void patinit(_anon1* work, unsigned char pattbl_number)
{
	_anon3** patchg_tbl;
	_anon3* patchg;
	// Line 144, Address: 0x1000590, Func Offset: 0
	// Line 148, Address: 0x10005a4, Func Offset: 0x14
	// Line 149, Address: 0x10005b0, Func Offset: 0x20
	// Line 150, Address: 0x10005b8, Func Offset: 0x28
	// Line 151, Address: 0x10005c0, Func Offset: 0x30
	// Line 152, Address: 0x10005d4, Func Offset: 0x44
	// Line 154, Address: 0x10005e8, Func Offset: 0x58
	// Func End, Address: 0x10005fc, Func Offset: 0x6c
}

// 
// Start address: 0x1000600
void patinit1(_anon1* work, unsigned char pattbl_number)
{
	_anon3** patchg_tbl;
	_anon3* patchg;
	// Line 157, Address: 0x1000600, Func Offset: 0
	// Line 161, Address: 0x1000614, Func Offset: 0x14
	// Line 162, Address: 0x1000620, Func Offset: 0x20
	// Line 163, Address: 0x1000628, Func Offset: 0x28
	// Line 164, Address: 0x100063c, Func Offset: 0x3c
	// Line 166, Address: 0x1000650, Func Offset: 0x50
	// Func End, Address: 0x1000664, Func Offset: 0x64
}

// 
// Start address: 0x1000670
void patset(_anon1* work)
{
	_anon3** patchg_tbl;
	_anon3* patchg;
	_anon2* sprpat_adr;
	// Line 172, Address: 0x1000670, Func Offset: 0
	// Line 177, Address: 0x1000688, Func Offset: 0x18
	// Line 178, Address: 0x1000698, Func Offset: 0x28
	// Line 179, Address: 0x10006a0, Func Offset: 0x30
	// Line 180, Address: 0x10006b8, Func Offset: 0x48
	// Line 181, Address: 0x10006e0, Func Offset: 0x70
	// Line 182, Address: 0x10006f8, Func Offset: 0x88
	// Line 183, Address: 0x1000720, Func Offset: 0xb0
	// Line 184, Address: 0x100072c, Func Offset: 0xbc
	// Line 187, Address: 0x1000760, Func Offset: 0xf0
	// Line 188, Address: 0x1000778, Func Offset: 0x108
	// Line 189, Address: 0x1000790, Func Offset: 0x120
	// Line 194, Address: 0x10007a0, Func Offset: 0x130
	// Line 196, Address: 0x10007b0, Func Offset: 0x140
	// Func End, Address: 0x10007cc, Func Offset: 0x15c
}

// 
// Start address: 0x10007d0
void n_patset(_anon1* work, _anon2* sprpat_adr)
{
	short x_posi;
	short y_posi;
	short i;
	short sx;
	short sy;
	unsigned short rev;
	_anon0 sprdat;
	// Line 200, Address: 0x10007d0, Func Offset: 0
	// Line 205, Address: 0x10007f8, Func Offset: 0x28
	// Line 207, Address: 0x1000810, Func Offset: 0x40
	// Line 208, Address: 0x100081c, Func Offset: 0x4c
	// Line 210, Address: 0x1000858, Func Offset: 0x88
	// Line 211, Address: 0x100089c, Func Offset: 0xcc
	// Line 213, Address: 0x10008ac, Func Offset: 0xdc
	// Line 215, Address: 0x10008ec, Func Offset: 0x11c
	// Line 216, Address: 0x100091c, Func Offset: 0x14c
	// Line 217, Address: 0x100094c, Func Offset: 0x17c
	// Line 218, Address: 0x1000950, Func Offset: 0x180
	// Line 220, Address: 0x1000958, Func Offset: 0x188
	// Line 221, Address: 0x1000988, Func Offset: 0x1b8
	// Line 223, Address: 0x10009e8, Func Offset: 0x218
	// Line 224, Address: 0x10009f0, Func Offset: 0x220
	// Line 226, Address: 0x10009f8, Func Offset: 0x228
	// Line 228, Address: 0x1000a58, Func Offset: 0x288
	// Line 229, Address: 0x1000a88, Func Offset: 0x2b8
	// Line 230, Address: 0x1000a90, Func Offset: 0x2c0
	// Line 232, Address: 0x1000a98, Func Offset: 0x2c8
	// Line 234, Address: 0x1000af8, Func Offset: 0x328
	// Line 236, Address: 0x1000b58, Func Offset: 0x388
	// Line 237, Address: 0x1000b60, Func Offset: 0x390
	// Line 239, Address: 0x1000b68, Func Offset: 0x398
	// Line 240, Address: 0x1000b7c, Func Offset: 0x3ac
	// Line 244, Address: 0x1000b80, Func Offset: 0x3b0
	// Line 248, Address: 0x1000c30, Func Offset: 0x460
	// Line 253, Address: 0x1000c64, Func Offset: 0x494
	// Line 254, Address: 0x1000c90, Func Offset: 0x4c0
	// Func End, Address: 0x1000cb8, Func Offset: 0x4e8
}

