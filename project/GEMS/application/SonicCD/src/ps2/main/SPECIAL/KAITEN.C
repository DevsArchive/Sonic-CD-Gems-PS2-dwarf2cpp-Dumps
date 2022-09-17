typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[0];
typedef _anon3 type_1[48];
typedef int type_2[192];
typedef _anon2* type_3[64];
typedef short type_4[128];
typedef unsigned char type_5[3];
typedef unsigned char type_6[48];
typedef _anon7 type_7[20];

struct _anon0
{
	unsigned char cnt;
	char timer;
	_anon2* spr[64];
};

struct _anon1
{
	short x;
	short y;
	short z;
	short ax;
	short sx;
	short cx;
	short az;
	short sz;
	short cz;
	short msz;
	short mcz;
	short h;
	short i;
	int hsxsz;
	int hsxcz;
	int hcxcz;
	int hcxsz;
	int hcx;
	int hzsx;
	_anon4 hsz;
	_anon4 hcz;
	_anon4 zcx;
	_anon4 hisxsz;
	_anon4 hisxcz;
	_anon4 cxsz;
	_anon4 cxcz;
	_anon4 sxsz;
	_anon4 sxcz;
};

struct _anon2
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

struct _anon3
{
	unsigned char actno;
	unsigned char cgno;
	unsigned char actflg;
	unsigned char exeno;
	unsigned short sprcolor;
	_anon0** pattbl;
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

union _anon4
{
	int l;
	_anon5 w;
	_anon6 b;
};

struct _anon5
{
	short l;
	short h;
};

struct _anon6
{
	char b4;
	char b3;
	char b2;
	char b1;
};

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon1 zoomwk;
_anon3 actwk[48];
int tv_adr[192];

void scalinit();
void scal(_anon3* pActwk);
void cal_kaiten();
void kaiten_init();
void init_3dpara();
void kaiten();
short k_sin(short iD3);
short k_cos(short iD3);

// 
// Start address: 0x1009180
void scalinit()
{
	_anon4 lD0;
	// Line 42, Address: 0x1009180, Func Offset: 0
	// Line 45, Address: 0x1009184, Func Offset: 0x4
	// Line 46, Address: 0x10091ac, Func Offset: 0x2c
	// Line 47, Address: 0x10091b8, Func Offset: 0x38
	// Line 48, Address: 0x10091c4, Func Offset: 0x44
	// Line 49, Address: 0x10091ec, Func Offset: 0x6c
	// Line 50, Address: 0x10091f8, Func Offset: 0x78
	// Line 51, Address: 0x1009204, Func Offset: 0x84
	// Func End, Address: 0x1009210, Func Offset: 0x90
}

// 
// Start address: 0x1009210
void scal(_anon3* pActwk)
{
	_anon4 lD0;
	_anon4 lD1;
	_anon4 lD2;
	_anon4 lD3;
	_anon4 lD4;
	// Line 63, Address: 0x1009210, Func Offset: 0
	// Line 65, Address: 0x1009218, Func Offset: 0x8
	// Line 66, Address: 0x100921c, Func Offset: 0xc
	// Line 67, Address: 0x1009220, Func Offset: 0x10
	// Line 69, Address: 0x1009224, Func Offset: 0x14
	// Line 70, Address: 0x1009254, Func Offset: 0x44
	// Line 72, Address: 0x1009284, Func Offset: 0x74
	// Line 73, Address: 0x10092b4, Func Offset: 0xa4
	// Line 74, Address: 0x10092d8, Func Offset: 0xc8
	// Line 75, Address: 0x10092e4, Func Offset: 0xd4
	// Line 76, Address: 0x10092f4, Func Offset: 0xe4
	// Line 77, Address: 0x1009318, Func Offset: 0x108
	// Line 78, Address: 0x1009324, Func Offset: 0x114
	// Line 79, Address: 0x1009334, Func Offset: 0x124
	// Line 80, Address: 0x1009348, Func Offset: 0x138
	// Line 82, Address: 0x1009350, Func Offset: 0x140
	// Line 83, Address: 0x1009374, Func Offset: 0x164
	// Line 84, Address: 0x1009398, Func Offset: 0x188
	// Line 85, Address: 0x10093a8, Func Offset: 0x198
	// Line 86, Address: 0x10093d0, Func Offset: 0x1c0
	// Line 87, Address: 0x10093dc, Func Offset: 0x1cc
	// Line 88, Address: 0x10093e8, Func Offset: 0x1d8
	// Line 89, Address: 0x1009410, Func Offset: 0x200
	// Line 90, Address: 0x100941c, Func Offset: 0x20c
	// Line 91, Address: 0x1009444, Func Offset: 0x234
	// Line 92, Address: 0x1009450, Func Offset: 0x240
	// Line 93, Address: 0x100945c, Func Offset: 0x24c
	// Func End, Address: 0x1009468, Func Offset: 0x258
}

// 
// Start address: 0x1009470
void cal_kaiten()
{
	short i;
	short iD6;
	int lsv1;
	int lsv2;
	int lsv3;
	int lsv4;
	_anon4 lD0;
	_anon4 lD1;
	_anon4 lD2;
	_anon4 lD3;
	_anon4 lD4;
	_anon4 lD5;
	short* ptv_adr;
	// Line 105, Address: 0x1009470, Func Offset: 0
	// Line 113, Address: 0x1009490, Func Offset: 0x20
	// Line 115, Address: 0x100949c, Func Offset: 0x2c
	// Line 116, Address: 0x10094bc, Func Offset: 0x4c
	// Line 118, Address: 0x10094dc, Func Offset: 0x6c
	// Line 119, Address: 0x10094e4, Func Offset: 0x74
	// Line 121, Address: 0x10094f4, Func Offset: 0x84
	// Line 122, Address: 0x100951c, Func Offset: 0xac
	// Line 123, Address: 0x1009528, Func Offset: 0xb8
	// Line 124, Address: 0x1009534, Func Offset: 0xc4
	// Line 125, Address: 0x100955c, Func Offset: 0xec
	// Line 126, Address: 0x1009568, Func Offset: 0xf8
	// Line 128, Address: 0x1009574, Func Offset: 0x104
	// Line 129, Address: 0x100959c, Func Offset: 0x12c
	// Line 130, Address: 0x10095c0, Func Offset: 0x150
	// Line 131, Address: 0x10095cc, Func Offset: 0x15c
	// Line 133, Address: 0x10095d8, Func Offset: 0x168
	// Line 134, Address: 0x1009600, Func Offset: 0x190
	// Line 135, Address: 0x1009624, Func Offset: 0x1b4
	// Line 136, Address: 0x1009630, Func Offset: 0x1c0
	// Line 137, Address: 0x100963c, Func Offset: 0x1cc
	// Line 138, Address: 0x1009664, Func Offset: 0x1f4
	// Line 140, Address: 0x1009670, Func Offset: 0x200
	// Line 141, Address: 0x100968c, Func Offset: 0x21c
	// Line 142, Address: 0x1009694, Func Offset: 0x224
	// Line 143, Address: 0x10096b0, Func Offset: 0x240
	// Line 144, Address: 0x10096b8, Func Offset: 0x248
	// Line 145, Address: 0x10096d4, Func Offset: 0x264
	// Line 146, Address: 0x10096dc, Func Offset: 0x26c
	// Line 147, Address: 0x10096f8, Func Offset: 0x288
	// Line 149, Address: 0x1009700, Func Offset: 0x290
	// Line 150, Address: 0x1009728, Func Offset: 0x2b8
	// Line 151, Address: 0x1009734, Func Offset: 0x2c4
	// Line 152, Address: 0x1009764, Func Offset: 0x2f4
	// Line 153, Address: 0x1009778, Func Offset: 0x308
	// Line 154, Address: 0x1009784, Func Offset: 0x314
	// Line 155, Address: 0x10097ac, Func Offset: 0x33c
	// Line 156, Address: 0x10097b8, Func Offset: 0x348
	// Line 157, Address: 0x10097e8, Func Offset: 0x378
	// Line 158, Address: 0x10097fc, Func Offset: 0x38c
	// Line 161, Address: 0x1009808, Func Offset: 0x398
	// Line 163, Address: 0x1009814, Func Offset: 0x3a4
	// Line 164, Address: 0x1009820, Func Offset: 0x3b0
	// Line 165, Address: 0x1009830, Func Offset: 0x3c0
	// Line 166, Address: 0x100983c, Func Offset: 0x3cc
	// Line 167, Address: 0x1009848, Func Offset: 0x3d8
	// Line 171, Address: 0x1009868, Func Offset: 0x3f8
	// Line 173, Address: 0x1009874, Func Offset: 0x404
	// Line 174, Address: 0x1009898, Func Offset: 0x428
	// Line 175, Address: 0x10098ac, Func Offset: 0x43c
	// Line 176, Address: 0x10098b8, Func Offset: 0x448
	// Line 177, Address: 0x10098cc, Func Offset: 0x45c
	// Line 179, Address: 0x10098d4, Func Offset: 0x464
	// Line 180, Address: 0x10098f8, Func Offset: 0x488
	// Line 181, Address: 0x1009910, Func Offset: 0x4a0
	// Line 182, Address: 0x1009924, Func Offset: 0x4b4
	// Line 183, Address: 0x1009940, Func Offset: 0x4d0
	// Line 184, Address: 0x1009968, Func Offset: 0x4f8
	// Line 185, Address: 0x1009978, Func Offset: 0x508
	// Line 186, Address: 0x100998c, Func Offset: 0x51c
	// Line 188, Address: 0x100999c, Func Offset: 0x52c
	// Line 189, Address: 0x10099c0, Func Offset: 0x550
	// Line 190, Address: 0x10099d8, Func Offset: 0x568
	// Line 191, Address: 0x10099ec, Func Offset: 0x57c
	// Line 192, Address: 0x1009a08, Func Offset: 0x598
	// Line 193, Address: 0x1009a30, Func Offset: 0x5c0
	// Line 194, Address: 0x1009a40, Func Offset: 0x5d0
	// Line 195, Address: 0x1009a54, Func Offset: 0x5e4
	// Line 197, Address: 0x1009a64, Func Offset: 0x5f4
	// Line 198, Address: 0x1009a88, Func Offset: 0x618
	// Line 199, Address: 0x1009aa0, Func Offset: 0x630
	// Line 200, Address: 0x1009ab4, Func Offset: 0x644
	// Line 201, Address: 0x1009ad0, Func Offset: 0x660
	// Line 202, Address: 0x1009af8, Func Offset: 0x688
	// Line 203, Address: 0x1009b08, Func Offset: 0x698
	// Line 204, Address: 0x1009b1c, Func Offset: 0x6ac
	// Line 205, Address: 0x1009b2c, Func Offset: 0x6bc
	// Line 207, Address: 0x1009b40, Func Offset: 0x6d0
	// Line 208, Address: 0x1009b64, Func Offset: 0x6f4
	// Line 209, Address: 0x1009b7c, Func Offset: 0x70c
	// Line 210, Address: 0x1009b90, Func Offset: 0x720
	// Line 211, Address: 0x1009bac, Func Offset: 0x73c
	// Line 212, Address: 0x1009bd4, Func Offset: 0x764
	// Line 213, Address: 0x1009be4, Func Offset: 0x774
	// Line 214, Address: 0x1009bf8, Func Offset: 0x788
	// Line 215, Address: 0x1009c08, Func Offset: 0x798
	// Line 216, Address: 0x1009c1c, Func Offset: 0x7ac
	// Line 217, Address: 0x1009c48, Func Offset: 0x7d8
	// Func End, Address: 0x1009c70, Func Offset: 0x800
}

// 
// Start address: 0x1009c70
void kaiten_init()
{
	// Line 230, Address: 0x1009c70, Func Offset: 0
	// Line 231, Address: 0x1009c7c, Func Offset: 0xc
	// Line 232, Address: 0x1009c88, Func Offset: 0x18
	// Func End, Address: 0x1009c90, Func Offset: 0x20
}

// 
// Start address: 0x1009c90
void init_3dpara()
{
	// Line 244, Address: 0x1009c90, Func Offset: 0
	// Line 245, Address: 0x1009c98, Func Offset: 0x8
	// Line 246, Address: 0x1009cb0, Func Offset: 0x20
	// Line 247, Address: 0x1009cc8, Func Offset: 0x38
	// Line 248, Address: 0x1009ce0, Func Offset: 0x50
	// Line 249, Address: 0x1009cf8, Func Offset: 0x68
	// Line 250, Address: 0x1009d24, Func Offset: 0x94
	// Line 251, Address: 0x1009d50, Func Offset: 0xc0
	// Func End, Address: 0x1009d60, Func Offset: 0xd0
}

// 
// Start address: 0x1009d60
void kaiten()
{
	// Line 263, Address: 0x1009d60, Func Offset: 0
	// Line 264, Address: 0x1009d68, Func Offset: 0x8
	// Line 265, Address: 0x1009d70, Func Offset: 0x10
	// Func End, Address: 0x1009d80, Func Offset: 0x20
}

// 
// Start address: 0x1009d80
short k_sin(short iD3)
{
	short sin_tbl[128];
	short iD4;
	// Line 277, Address: 0x1009d80, Func Offset: 0
	// Line 278, Address: 0x1009d8c, Func Offset: 0xc
	// Line 291, Address: 0x1009dc0, Func Offset: 0x40
	// Line 292, Address: 0x1009dcc, Func Offset: 0x4c
	// Line 293, Address: 0x1009dd8, Func Offset: 0x58
	// Line 294, Address: 0x1009df0, Func Offset: 0x70
	// Line 296, Address: 0x1009e0c, Func Offset: 0x8c
	// Line 297, Address: 0x1009e18, Func Offset: 0x98
	// Line 298, Address: 0x1009e34, Func Offset: 0xb4
	// Line 299, Address: 0x1009e4c, Func Offset: 0xcc
	// Line 301, Address: 0x1009e68, Func Offset: 0xe8
	// Line 302, Address: 0x1009e6c, Func Offset: 0xec
	// Func End, Address: 0x1009e7c, Func Offset: 0xfc
}

// 
// Start address: 0x1009e80
short k_cos(short iD3)
{
	// Line 304, Address: 0x1009e80, Func Offset: 0
	// Line 305, Address: 0x1009e8c, Func Offset: 0xc
	// Line 306, Address: 0x1009eac, Func Offset: 0x2c
	// Func End, Address: 0x1009ebc, Func Offset: 0x3c
}

