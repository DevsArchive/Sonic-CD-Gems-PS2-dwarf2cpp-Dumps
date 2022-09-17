typedef struct _anon0;
typedef struct tagPOINT;
typedef struct _anon1;


typedef _anon1 type_0[68];
typedef unsigned int type_1[16];
typedef unsigned int* type_2[1];
typedef unsigned int type_3[1];
typedef _anon0 type_4[1];

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
_anon1 infoSprtBmp[68];
unsigned short NUM_BMP;
_anon0 infoGridBmp[1];
unsigned short NUM_GRIDBMP;
unsigned int hGridBack;
unsigned int hTileBack[1];
unsigned int* hBmpBack[1];
unsigned int hSprBG[16];
unsigned int hSprDummy;


