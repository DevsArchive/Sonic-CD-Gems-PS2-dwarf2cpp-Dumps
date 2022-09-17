typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;


typedef _anon3 type_0[20];
typedef _anon3 type_1[0];
typedef _anon1 type_2[0];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon3 spra[20];
		_anon3 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char sprpri;
	_anon0** patbase;
	unsigned short offset;
	unsigned char userflag_h;
	unsigned char rludrv;
	unsigned char userflag_l;
	unsigned char patno;
};

struct _anon2
{
	char num;
	char dummy;
	_anon1 dat[0];
};

struct _anon3
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon2 edit_tbl;


