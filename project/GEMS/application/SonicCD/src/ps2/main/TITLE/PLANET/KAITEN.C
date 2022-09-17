typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;


typedef short type[0];

struct _anon0
{
	short k_sin;
	short k_cos;
	short k_rx;
	short k_ry;
	short k_s;
	short k_msx;
	short k_msy;
	short k_dx;
	short k_dy;
	short k_x_rx;
	short k_y_ry;
	int k_xt_c;
	int k_yt_c;
	short k_s2;
	short k_eyelen;
};

struct _anon1
{
	short actno;
	unsigned char actflg;
	unsigned char ACT_NO;
	short spdcnt;
	short k_kaku;
	short x_kaku;
	_anon3 x_posi;
	_anon3 y_posi;
	_anon3 z_posi;
	_anon3 k_speed;
	_anon3 x_speed;
	_anon3 y_speed;
	_anon3 z_speed;
};

struct _anon2
{
	short x;
	short y;
	short z;
	short az;
	short sz;
	short cz;
	short xscale;
	short yscale;
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

_anon2 zoomwk;
_anon1 playwk;
_anon0 k_wk;
short tv_adr[0];

void kaiten0();
void kaiten_init();
void k_3d();
int calc_xt_r();
int calc_xt_s(int scale);
int calc_yt_r();
int calc_yt_s(int scale);

// 
// Start address: 0x1004620
void kaiten0()
{
	// Line 48, Address: 0x1004620, Func Offset: 0
	// Line 49, Address: 0x1004628, Func Offset: 0x8
	// Line 50, Address: 0x1004638, Func Offset: 0x18
	// Line 51, Address: 0x1004648, Func Offset: 0x28
	// Line 52, Address: 0x1004658, Func Offset: 0x38
	// Line 53, Address: 0x1004668, Func Offset: 0x48
	// Line 56, Address: 0x1004670, Func Offset: 0x50
	// Func End, Address: 0x1004680, Func Offset: 0x60
}

// 
// Start address: 0x1004680
void kaiten_init()
{
	// Line 71, Address: 0x1004680, Func Offset: 0
	// Func End, Address: 0x1004688, Func Offset: 0x8
}

// 
// Start address: 0x1004690
void k_3d()
{
	_anon3 lD0;
	_anon3 lD1;
	short i;
	short* ptv_adr;
	// Line 108, Address: 0x1004690, Func Offset: 0
	// Line 113, Address: 0x10046a0, Func Offset: 0x10
	// Line 114, Address: 0x10046ac, Func Offset: 0x1c
	// Line 115, Address: 0x10046b8, Func Offset: 0x28
	// Line 116, Address: 0x10046c4, Func Offset: 0x34
	// Line 119, Address: 0x10046d0, Func Offset: 0x40
	// Line 120, Address: 0x10046d4, Func Offset: 0x44
	// Line 121, Address: 0x10046f4, Func Offset: 0x64
	// Line 122, Address: 0x1004704, Func Offset: 0x74
	// Line 123, Address: 0x1004748, Func Offset: 0xb8
	// Line 124, Address: 0x1004770, Func Offset: 0xe0
	// Line 126, Address: 0x100477c, Func Offset: 0xec
	// Line 127, Address: 0x1004780, Func Offset: 0xf0
	// Line 128, Address: 0x10047a0, Func Offset: 0x110
	// Line 129, Address: 0x10047b0, Func Offset: 0x120
	// Line 130, Address: 0x10047b8, Func Offset: 0x128
	// Line 131, Address: 0x10047e0, Func Offset: 0x150
	// Line 134, Address: 0x10047ec, Func Offset: 0x15c
	// Line 136, Address: 0x1004804, Func Offset: 0x174
	// Line 139, Address: 0x100481c, Func Offset: 0x18c
	// Line 141, Address: 0x1004844, Func Offset: 0x1b4
	// Line 142, Address: 0x1004850, Func Offset: 0x1c0
	// Line 145, Address: 0x100485c, Func Offset: 0x1cc
	// Line 147, Address: 0x1004884, Func Offset: 0x1f4
	// Line 148, Address: 0x1004890, Func Offset: 0x200
	// Line 151, Address: 0x100489c, Func Offset: 0x20c
	// Line 152, Address: 0x10048cc, Func Offset: 0x23c
	// Line 154, Address: 0x10048d8, Func Offset: 0x248
	// Line 155, Address: 0x1004908, Func Offset: 0x278
	// Line 157, Address: 0x1004914, Func Offset: 0x284
	// Line 158, Address: 0x1004928, Func Offset: 0x298
	// Line 159, Address: 0x1004934, Func Offset: 0x2a4
	// Line 160, Address: 0x1004940, Func Offset: 0x2b0
	// Line 161, Address: 0x1004954, Func Offset: 0x2c4
	// Line 162, Address: 0x1004960, Func Offset: 0x2d0
	// Line 163, Address: 0x100496c, Func Offset: 0x2dc
	// Line 169, Address: 0x1004980, Func Offset: 0x2f0
	// Line 170, Address: 0x1004998, Func Offset: 0x308
	// Line 172, Address: 0x10049a4, Func Offset: 0x314
	// Line 173, Address: 0x10049c0, Func Offset: 0x330
	// Line 176, Address: 0x10049cc, Func Offset: 0x33c
	// Line 177, Address: 0x10049e4, Func Offset: 0x354
	// Line 179, Address: 0x10049f0, Func Offset: 0x360
	// Line 180, Address: 0x1004a0c, Func Offset: 0x37c
	// Line 183, Address: 0x1004a18, Func Offset: 0x388
	// Line 184, Address: 0x1004a4c, Func Offset: 0x3bc
	// Line 186, Address: 0x1004a80, Func Offset: 0x3f0
	// Line 188, Address: 0x1004a88, Func Offset: 0x3f8
	// Line 190, Address: 0x1004a94, Func Offset: 0x404
	// Line 191, Address: 0x1004aa0, Func Offset: 0x410
	// Line 192, Address: 0x1004ab0, Func Offset: 0x420
	// Line 194, Address: 0x1004ac0, Func Offset: 0x430
	// Line 195, Address: 0x1004acc, Func Offset: 0x43c
	// Line 196, Address: 0x1004adc, Func Offset: 0x44c
	// Line 198, Address: 0x1004aec, Func Offset: 0x45c
	// Line 199, Address: 0x1004b00, Func Offset: 0x470
	// Line 200, Address: 0x1004b14, Func Offset: 0x484
	// Line 201, Address: 0x1004b28, Func Offset: 0x498
	// Line 202, Address: 0x1004b48, Func Offset: 0x4b8
	// Func End, Address: 0x1004b60, Func Offset: 0x4d0
}

// 
// Start address: 0x1004b60
int calc_xt_r()
{
	_anon3 lD0;
	_anon3 lD1;
	_anon3 lD2;
	// Line 214, Address: 0x1004b60, Func Offset: 0
	// Line 218, Address: 0x1004b64, Func Offset: 0x4
	// Line 220, Address: 0x1004b8c, Func Offset: 0x2c
	// Line 222, Address: 0x1004bb4, Func Offset: 0x54
	// Line 225, Address: 0x1004bc4, Func Offset: 0x64
	// Line 226, Address: 0x1004bc8, Func Offset: 0x68
	// Line 227, Address: 0x1004bd4, Func Offset: 0x74
	// Line 228, Address: 0x1004be4, Func Offset: 0x84
	// Line 229, Address: 0x1004c28, Func Offset: 0xc8
	// Line 230, Address: 0x1004c38, Func Offset: 0xd8
	// Line 231, Address: 0x1004c44, Func Offset: 0xe4
	// Line 232, Address: 0x1004c48, Func Offset: 0xe8
	// Func End, Address: 0x1004c54, Func Offset: 0xf4
}

// 
// Start address: 0x1004c60
int calc_xt_s(int scale)
{
	_anon3 lD0;
	_anon3 lD1;
	_anon3 lD2;
	// Line 244, Address: 0x1004c60, Func Offset: 0
	// Line 247, Address: 0x1004c68, Func Offset: 0x8
	// Line 248, Address: 0x1004c84, Func Offset: 0x24
	// Line 250, Address: 0x1004c90, Func Offset: 0x30
	// Line 252, Address: 0x1004cb8, Func Offset: 0x58
	// Line 253, Address: 0x1004cc4, Func Offset: 0x64
	// Line 254, Address: 0x1004cd4, Func Offset: 0x74
	// Line 257, Address: 0x1004d18, Func Offset: 0xb8
	// Line 258, Address: 0x1004d28, Func Offset: 0xc8
	// Line 261, Address: 0x1004d34, Func Offset: 0xd4
	// Line 262, Address: 0x1004d44, Func Offset: 0xe4
	// Line 263, Address: 0x1004d48, Func Offset: 0xe8
	// Func End, Address: 0x1004d54, Func Offset: 0xf4
}

// 
// Start address: 0x1004d60
int calc_yt_r()
{
	_anon3 lD0;
	_anon3 lD1;
	_anon3 lD2;
	// Line 275, Address: 0x1004d60, Func Offset: 0
	// Line 279, Address: 0x1004d64, Func Offset: 0x4
	// Line 282, Address: 0x1004d8c, Func Offset: 0x2c
	// Line 285, Address: 0x1004db4, Func Offset: 0x54
	// Line 288, Address: 0x1004dc4, Func Offset: 0x64
	// Line 289, Address: 0x1004dc8, Func Offset: 0x68
	// Line 290, Address: 0x1004dd4, Func Offset: 0x74
	// Line 291, Address: 0x1004de4, Func Offset: 0x84
	// Line 293, Address: 0x1004e28, Func Offset: 0xc8
	// Line 294, Address: 0x1004e38, Func Offset: 0xd8
	// Line 295, Address: 0x1004e44, Func Offset: 0xe4
	// Line 296, Address: 0x1004e48, Func Offset: 0xe8
	// Func End, Address: 0x1004e54, Func Offset: 0xf4
}

// 
// Start address: 0x1004e60
int calc_yt_s(int scale)
{
	_anon3 lD0;
	_anon3 lD1;
	_anon3 lD2;
	// Line 308, Address: 0x1004e60, Func Offset: 0
	// Line 312, Address: 0x1004e68, Func Offset: 0x8
	// Line 313, Address: 0x1004e84, Func Offset: 0x24
	// Line 315, Address: 0x1004e90, Func Offset: 0x30
	// Line 317, Address: 0x1004eb8, Func Offset: 0x58
	// Line 318, Address: 0x1004ec4, Func Offset: 0x64
	// Line 319, Address: 0x1004ed4, Func Offset: 0x74
	// Line 322, Address: 0x1004f18, Func Offset: 0xb8
	// Line 323, Address: 0x1004f28, Func Offset: 0xc8
	// Line 326, Address: 0x1004f34, Func Offset: 0xd4
	// Line 327, Address: 0x1004f44, Func Offset: 0xe4
	// Line 328, Address: 0x1004f48, Func Offset: 0xe8
	// Func End, Address: 0x1004f54, Func Offset: 0xf4
}

