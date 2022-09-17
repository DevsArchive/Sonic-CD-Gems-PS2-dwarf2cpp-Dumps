typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef union _anon12;
typedef struct _anon13;
typedef struct _anon14;


typedef _anon14 type_0[0];
typedef _anon4* type_1[64];
typedef short type_2[4];
typedef unsigned char type_3[640];
typedef short type_4[3];
typedef unsigned char type_5[1024];
typedef unsigned char type_6[3];
typedef unsigned char type_7[48];
typedef _anon5 type_8[48];
typedef unsigned short type_9[512];
typedef unsigned char type_10[768];
typedef _anon14 type_11[20];

struct _anon0
{
	short base;
	short data[4];
};

struct _anon1
{
	short base;
	short data[3];
};

struct _anon2
{
	unsigned char cnt;
	char timer;
	_anon4* spr[64];
};

struct _anon3
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
	_anon6 hsz;
	_anon6 hcz;
	_anon6 zcx;
	_anon6 hisxsz;
	_anon6 hisxcz;
	_anon6 cxsz;
	_anon6 cxcz;
	_anon6 sxsz;
	_anon6 sxcz;
};

struct _anon4
{
	unsigned char cnt;
	union
	{
		_anon14 spra[20];
		_anon14 spr[0];
	};
};

struct _anon5
{
	unsigned char actno;
	unsigned char cgno;
	unsigned char actflg;
	unsigned char exeno;
	unsigned short sprcolor;
	_anon2** pattbl;
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
	_anon6 x_posi;
	_anon6 y_posi;
	_anon6 z_posi;
	_anon6 sx_posi;
	_anon6 sy_posi;
	_anon6 x_speed;
	_anon6 y_speed;
	_anon6 z_speed;
	_anon6 sx_speed;
	_anon6 sy_speed;
	unsigned char colliflg;
	unsigned char dummy[3];
	unsigned char actfree[48];
};

union _anon6
{
	int l;
	_anon7 w;
	_anon8 b;
};

struct _anon7
{
	short l;
	short h;
};

struct _anon8
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon9
{
	unsigned int l;
	_anon10 w;
	_anon11 b;
};

struct _anon10
{
	unsigned short l;
	unsigned short h;
};

struct _anon11
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon12
{
	unsigned short w;
	_anon13 b;
};

struct _anon13
{
	unsigned char l;
	unsigned char h;
};

struct _anon14
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char plcgwk[1024];
unsigned char rlscrflg;
unsigned char cgchgflg;
_anon9 se_no;
unsigned char sprbuf[640];
_anon3 zoomwk;
short hane_cnt;
short damage_cnt;
short chg_timer;
unsigned short hane_nm;
_anon1* hane_adr;
unsigned short damage_nm;
_anon0* damage_adr;
unsigned char pmflag;
_anon12 swdata_pl;
short jmpswcnt;
short rufo_getnm;
unsigned char time_stop;
unsigned char game_start;
unsigned char tcnt20;
unsigned char tdecflg;
unsigned char gmclrflg;
unsigned char pldeadflg;
unsigned int ranum;
unsigned char* colliadr;
short bpsave_y;
short bpsave_x;
unsigned short linkdata;
unsigned int sbufadr;
unsigned char demoend;
unsigned char int1_flg;
unsigned char tv_save[768];
unsigned short z_buffer[512];
_anon5 actwk[48];


