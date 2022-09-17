typedef struct tagPALETTEENTRY;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef unsigned short type_0[1024];
typedef unsigned int type_1[128];
typedef unsigned short type_2[128];
typedef unsigned short type_3[128];
typedef unsigned char type_4[4096];
typedef tagPALETTEENTRY type_5[64];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

union _anon0
{
	int l;
	_anon1 w;
	_anon2 b;
};

struct _anon1
{
	short l;
	short h;
};

struct _anon2
{
	char b4;
	char b3;
	char b2;
	char b1;
};

_anon0 overint;
unsigned char* demoadr;
int hsdata5;
int hsdata4;
int hsdata3;
int hsdata2;
int hsdata1;
int hsdata0;
unsigned short sonicup_no;
short gmtime1;
short gmtime0;
unsigned short intmode;
unsigned char spgmmode_tmp;
unsigned char clfflg;
unsigned char demoflg;
unsigned char pauseflg;
tagPALETTEENTRY colorsave[64];
unsigned char demowk[4096];
unsigned short dummy100[128];
unsigned short dummy000[128];
unsigned int hdatabuf_l[128];
unsigned int* hdatabuf;
unsigned short mpopenwk[1024];
unsigned char rlscrflg_save;


