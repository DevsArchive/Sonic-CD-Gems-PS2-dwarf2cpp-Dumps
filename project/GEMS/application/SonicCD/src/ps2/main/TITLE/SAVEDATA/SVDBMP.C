typedef struct _anon0;
typedef struct tagPOINT;
typedef struct _anon1;
typedef struct _anon2;


typedef _anon1 type_0[10];
typedef _anon0 type_1[1];
typedef unsigned int type_2[4];
typedef unsigned int type_3[7];
typedef int type_4[27];
typedef unsigned int type_5[3];
typedef tagPOINT type_6[56];
typedef unsigned int type_7[3];
typedef _anon2 type_8[209];
typedef unsigned int* type_9[1];
typedef unsigned int type_10[56];
typedef unsigned int type_11[56][6];
typedef unsigned int type_12[27];
typedef unsigned int type_13[1];
typedef unsigned int type_14[5];

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
	char code;
	int yello816;
	int white88;
	int yello88;
	int whitex16;
};

struct _anon2
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
int nPosiXSprMes[27];
tagPOINT nPosiXSprFile[56];
int PRIO_MAX;
_anon2 infoSprtBmp[209];
unsigned short NUM_BMP;
_anon1 markTable[10];
int PLAYERCHAR_W;
_anon0 infoGridBmp[1];
unsigned short NUM_GRIDBMP;
unsigned short IDX_GDBMP_BACK;
unsigned int hGridBack;
unsigned int hTileBack[1];
unsigned int* hBmpBack[1];
unsigned int hSprSonicRun[3];
unsigned int hSprSonicStop[3];
unsigned int hSprCursol;
unsigned int hSprFileMark[7];
unsigned int hSprBG[4];
unsigned int hSprFileBG;
unsigned int hSprDummy;
unsigned int hSprCmd[5];
unsigned int hSprMes[27];
unsigned int hSprFile[56][6];


