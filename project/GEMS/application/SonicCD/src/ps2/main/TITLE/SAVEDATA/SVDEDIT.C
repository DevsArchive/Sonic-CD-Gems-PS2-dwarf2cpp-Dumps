typedef struct _anon0;
typedef struct _anon1;

typedef void(*type_7)(char*, char*);
typedef void(*type_8)(short);

typedef char type_0[12];
typedef _anon1 type_1[3];
typedef _anon1 type_2[3][3];
typedef _anon1 type_3[3][3][7];
typedef _anon1 type_4[3];
typedef _anon1 type_5[3][7];
typedef char type_6[256];
typedef char type_9[12];
typedef _anon0 type_10[6];
typedef char type_11[4];

struct _anon0
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
	_anon1 timeattack[3][3][7];
	_anon1 special[3][7];
	unsigned int total;
	unsigned char clrspflg_save;
	unsigned char clrgood;
	unsigned char stagenm;
	unsigned char reserved1;
	unsigned char reserved2;
	unsigned int checkSum;
};

struct _anon1
{
	unsigned int time;
	char name[4];
};

unsigned int bEditMode;
unsigned short swData1;
int nFileNumber;
char editBuf[12];
void(*WaveRequest)(short);
void(*sPrintf)(char*, char*);
_anon0 saveData[6];
int nSelectFileNumber;

int Edit();
void DispSaveData(int indx);
void DispAll();

// 
// Start address: 0x1000c50
int Edit()
{
	int posi;
	// Line 52, Address: 0x1000c50, Func Offset: 0
	// Line 55, Address: 0x1000c64, Func Offset: 0x14
	// Line 56, Address: 0x1000c70, Func Offset: 0x20
	// Line 58, Address: 0x1000c88, Func Offset: 0x38
	// Line 59, Address: 0x1000c9c, Func Offset: 0x4c
	// Line 60, Address: 0x1000ca8, Func Offset: 0x58
	// Line 61, Address: 0x1000cc8, Func Offset: 0x78
	// Line 62, Address: 0x1000cd0, Func Offset: 0x80
	// Line 63, Address: 0x1000cdc, Func Offset: 0x8c
	// Line 64, Address: 0x1000ce8, Func Offset: 0x98
	// Line 65, Address: 0x1000cf0, Func Offset: 0xa0
	// Line 67, Address: 0x1000d08, Func Offset: 0xb8
	// Line 68, Address: 0x1000d1c, Func Offset: 0xcc
	// Line 69, Address: 0x1000d28, Func Offset: 0xd8
	// Line 70, Address: 0x1000d4c, Func Offset: 0xfc
	// Line 71, Address: 0x1000d54, Func Offset: 0x104
	// Line 72, Address: 0x1000d60, Func Offset: 0x110
	// Line 73, Address: 0x1000d6c, Func Offset: 0x11c
	// Line 74, Address: 0x1000d74, Func Offset: 0x124
	// Line 76, Address: 0x1000d8c, Func Offset: 0x13c
	// Line 77, Address: 0x1000da0, Func Offset: 0x150
	// Line 78, Address: 0x1000dac, Func Offset: 0x15c
	// Line 79, Address: 0x1000dec, Func Offset: 0x19c
	// Line 80, Address: 0x1000e2c, Func Offset: 0x1dc
	// Line 81, Address: 0x1000e6c, Func Offset: 0x21c
	// Line 82, Address: 0x1000eac, Func Offset: 0x25c
	// Line 83, Address: 0x1000ec4, Func Offset: 0x274
	// Line 84, Address: 0x1000edc, Func Offset: 0x28c
	// Line 85, Address: 0x1000f08, Func Offset: 0x2b8
	// Line 86, Address: 0x1000f14, Func Offset: 0x2c4
	// Line 87, Address: 0x1000f1c, Func Offset: 0x2cc
	// Line 89, Address: 0x1000f34, Func Offset: 0x2e4
	// Line 90, Address: 0x1000f48, Func Offset: 0x2f8
	// Line 91, Address: 0x1000f54, Func Offset: 0x304
	// Line 92, Address: 0x1000f94, Func Offset: 0x344
	// Line 93, Address: 0x1000fd4, Func Offset: 0x384
	// Line 94, Address: 0x1001014, Func Offset: 0x3c4
	// Line 95, Address: 0x1001054, Func Offset: 0x404
	// Line 96, Address: 0x100106c, Func Offset: 0x41c
	// Line 97, Address: 0x1001084, Func Offset: 0x434
	// Line 98, Address: 0x10010b0, Func Offset: 0x460
	// Line 99, Address: 0x10010bc, Func Offset: 0x46c
	// Line 100, Address: 0x10010c4, Func Offset: 0x474
	// Line 102, Address: 0x10010dc, Func Offset: 0x48c
	// Line 103, Address: 0x10010e4, Func Offset: 0x494
	// Line 104, Address: 0x10010ec, Func Offset: 0x49c
	// Line 106, Address: 0x10010f8, Func Offset: 0x4a8
	// Line 108, Address: 0x1001110, Func Offset: 0x4c0
	// Line 109, Address: 0x1001118, Func Offset: 0x4c8
	// Line 110, Address: 0x1001120, Func Offset: 0x4d0
	// Line 112, Address: 0x100112c, Func Offset: 0x4dc
	// Line 113, Address: 0x1001130, Func Offset: 0x4e0
	// Func End, Address: 0x100114c, Func Offset: 0x4fc
}

// 
// Start address: 0x1001150
void DispSaveData(int indx)
{
	char str[256];
	int round;
	// Line 154, Address: 0x1001150, Func Offset: 0
	// Line 160, Address: 0x1001160, Func Offset: 0x10
	// Line 162, Address: 0x1001190, Func Offset: 0x40
	// Line 164, Address: 0x10011d0, Func Offset: 0x80
	// Line 166, Address: 0x1001270, Func Offset: 0x120
	// Line 168, Address: 0x100128c, Func Offset: 0x13c
	// Line 169, Address: 0x10012b8, Func Offset: 0x168
	// Line 170, Address: 0x10012c8, Func Offset: 0x178
	// Line 171, Address: 0x10012e8, Func Offset: 0x198
	// Line 175, Address: 0x1001304, Func Offset: 0x1b4
	// Line 187, Address: 0x10013a4, Func Offset: 0x254
	// Line 189, Address: 0x10013c0, Func Offset: 0x270
	// Line 190, Address: 0x10013d0, Func Offset: 0x280
	// Line 194, Address: 0x10013d8, Func Offset: 0x288
	// Line 195, Address: 0x10013f8, Func Offset: 0x2a8
	// Line 197, Address: 0x1001408, Func Offset: 0x2b8
	// Func End, Address: 0x100141c, Func Offset: 0x2cc
}

// 
// Start address: 0x1001420
void DispAll()
{
	int i;
	// Line 224, Address: 0x1001420, Func Offset: 0
	// Line 227, Address: 0x100142c, Func Offset: 0xc
	// Line 228, Address: 0x1001434, Func Offset: 0x14
	// Line 229, Address: 0x1001440, Func Offset: 0x20
	// Line 230, Address: 0x100144c, Func Offset: 0x2c
	// Line 231, Address: 0x1001458, Func Offset: 0x38
	// Line 232, Address: 0x1001464, Func Offset: 0x44
	// Line 233, Address: 0x1001470, Func Offset: 0x50
	// Line 235, Address: 0x100147c, Func Offset: 0x5c
	// Line 236, Address: 0x1001488, Func Offset: 0x68
	// Line 237, Address: 0x100149c, Func Offset: 0x7c
	// Line 239, Address: 0x10014b0, Func Offset: 0x90
	// Func End, Address: 0x10014c4, Func Offset: 0xa4
}

