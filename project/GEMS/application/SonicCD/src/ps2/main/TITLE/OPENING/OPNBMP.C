typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPOINT;


typedef unsigned int* type_0[1];
typedef unsigned int type_1[1];
typedef unsigned int type_2[34];
typedef unsigned int type_3[10];
typedef unsigned int* type_4[320];
typedef unsigned int type_5[320];
typedef unsigned int* type_6[512];
typedef unsigned int type_7[512];
typedef _anon0 type_8[34];
typedef _anon1 type_9[3];

struct _anon0
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

struct _anon1
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

char* SprCmpFileName;
char* TileCmpFileName;
_anon0 infoSprtBmp[34];
unsigned short NUM_BMP;
_anon1 infoGridBmp[3];
unsigned short NUM_GRIDBMP;
unsigned int hGridKumo;
unsigned int hGridMizu;
unsigned int hTileKumo[512];
unsigned int* hBmpKumo[512];
unsigned int hTileMizu[320];
unsigned int* hBmpMizu[320];
unsigned int hGridBack;
unsigned int hTileBack[1];
unsigned int* hBmpBack[1];
unsigned int hGrid[10];
unsigned int hSpr[34];


