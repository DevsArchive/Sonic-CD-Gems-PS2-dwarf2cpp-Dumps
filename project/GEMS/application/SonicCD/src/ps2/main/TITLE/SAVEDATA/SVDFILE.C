typedef struct _anon0;
typedef struct _anon1;

typedef unsigned int(*type_0)(int, char*, unsigned int);
typedef unsigned int(*type_1)(int, char*, unsigned int);
typedef unsigned int(*type_2)(int);
typedef unsigned int(*type_3)(unsigned int);
typedef int(*type_5)(unsigned int);
typedef unsigned int(*type_6)(int, unsigned int);
typedef void(*type_13)(void*, void*, int);

typedef char type_4[4];
typedef char type_7[12];
typedef _anon0 type_8[3];
typedef _anon0 type_9[3][3];
typedef _anon0 type_10[3][3][7];
typedef _anon0 type_11[3];
typedef _anon0 type_12[3][7];
typedef _anon1 type_14[6];

struct _anon0
{
	unsigned int time;
	char name[4];
};

struct _anon1
{
	unsigned int saved;
	char player[12];
	unsigned int roundNo;
	unsigned short year;
	unsigned short month;
	unsigned short date;
	unsigned short hour;
	unsigned short min;
	unsigned short sec;
	_anon0 timeattack[3][3][7];
	_anon0 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

unsigned int(*ReadScore)(int, char*, unsigned int);
_anon1 saveData[6];
unsigned int(*CloseScore)(unsigned int);
int nSelectFileNumber;
int(*ReadIndx)(unsigned int);
unsigned int(*OpenScore)(int);
void(*sMemCpy)(void*, void*, int);
_anon1* lpCrntScorData;
unsigned int(*WriteScore)(int, char*, unsigned int);
unsigned int(*WriteIndx)(int, unsigned int);

void ReadDataFile();
void WriteDataFile();

// 
// Start address: 0x1001ed0
void ReadDataFile()
{
	int n;
	int indx;
	unsigned int hFile;
	// Line 33, Address: 0x1001ed0, Func Offset: 0
	// Line 38, Address: 0x1001ee4, Func Offset: 0x14
	// Line 41, Address: 0x1001efc, Func Offset: 0x2c
	// Line 42, Address: 0x1001f14, Func Offset: 0x44
	// Line 43, Address: 0x1001f28, Func Offset: 0x58
	// Line 44, Address: 0x1001f30, Func Offset: 0x60
	// Line 45, Address: 0x1001f38, Func Offset: 0x68
	// Line 46, Address: 0x1001f4c, Func Offset: 0x7c
	// Line 48, Address: 0x1001f58, Func Offset: 0x88
	// Line 49, Address: 0x1001f90, Func Offset: 0xc0
	// Line 51, Address: 0x1001fa0, Func Offset: 0xd0
	// Func End, Address: 0x1001fbc, Func Offset: 0xec
}

// 
// Start address: 0x1001fc0
void WriteDataFile()
{
	int n;
	unsigned int hFile;
	// Line 56, Address: 0x1001fc0, Func Offset: 0
	// Line 60, Address: 0x1001fd0, Func Offset: 0x10
	// Line 67, Address: 0x1001fe8, Func Offset: 0x28
	// Line 68, Address: 0x1002004, Func Offset: 0x44
	// Line 69, Address: 0x1002018, Func Offset: 0x58
	// Line 71, Address: 0x1002024, Func Offset: 0x64
	// Line 72, Address: 0x100205c, Func Offset: 0x9c
	// Line 74, Address: 0x100206c, Func Offset: 0xac
	// Line 75, Address: 0x10020b0, Func Offset: 0xf0
	// Func End, Address: 0x10020c8, Func Offset: 0x108
}

