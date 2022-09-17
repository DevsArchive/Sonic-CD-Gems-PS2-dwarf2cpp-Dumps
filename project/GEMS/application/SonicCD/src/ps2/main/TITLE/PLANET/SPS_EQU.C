typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;



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
unsigned char lp_cgflg;
unsigned char push_flg_s;
_anon3 rotspeed;
unsigned short rotflg;
short zoomflg;
unsigned char lpcg_chg;
unsigned char int1_flg;


