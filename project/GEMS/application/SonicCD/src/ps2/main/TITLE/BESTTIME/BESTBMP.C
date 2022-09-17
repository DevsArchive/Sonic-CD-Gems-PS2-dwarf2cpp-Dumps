typedef struct _anon0;
typedef struct tagPOINT;
typedef struct _anon1;


typedef unsigned int* type_0[1];
typedef unsigned int type_1[1];
typedef _anon1 type_2[100];
typedef _anon0 type_3[1];
typedef unsigned int type_4[22];
typedef unsigned int type_5[24];

struct _anon0
{
	unsigned short totalNum;
	unsigned short w;
	unsigned short h;
	tagPOINT point;
	int order;
	unsigned char palOff;
	unsigned int** lphBmp;
	unsigned int* lphTile;
	unsigned int* lphGrid;
};

struct tagPOINT
{
	int x;
	int y;
};

struct _anon1
{
	unsigned short w;
	unsigned short h;
	tagPOINT point;
	int order;
	unsigned char palOff;
	unsigned int* hBmp;
	unsigned short timing;
	unsigned int* lphSpr;
};

char* SprCmpFileName;
char* TileCmpFileName;
_anon1 infoSprtBmp[100];
unsigned short NUM_BMP;
_anon0 infoGridBmp[1];
unsigned short NUM_GRIDBMP;
unsigned int hGridBack;
unsigned int hTileBack[1];
unsigned int* hBmpBack[1];
unsigned int hSprBG[24];
unsigned int hSprTitle[22];
unsigned int hSprDummy;


