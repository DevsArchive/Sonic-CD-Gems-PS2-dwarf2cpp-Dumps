typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;

typedef char*(*type_2)(char*, char*);
typedef void(*type_11)(void*, unsigned char, int);
typedef void(*type_12)(void*, void*, int);
typedef void(*type_14)();
typedef int(*type_16)(void*, void*, int);

typedef char type_0[4];
typedef char type_1[12];
typedef _anon0 type_3[3];
typedef _anon0 type_4[3][3];
typedef _anon0 type_5[3][3][7];
typedef _anon0 type_6[3];
typedef _anon0 type_7[3][7];
typedef char type_8[4];
typedef _anon2 type_9[84];
typedef char type_10[4];
typedef short type_13[8];
typedef void(*type_15)()[2];

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

struct _anon2
{
	short pts;
	char name[4];
};

union _anon3
{
	short w;
	_anon4 b;
};

struct _anon4
{
	char l;
	char h;
};

short prg_mode;
short actset_tm[8];
char*(*sStrcpy)(char*, char*);
_anon2 score[84];
char GreatestPlayer[4];
_anon1* lpScorData;
void(*sMemSet)(void*, unsigned char, int);
void(*sMemCpy)(void*, void*, int);
int(*sMemCmp)(void*, void*, int);
unsigned char quit_flg;
_anon3 swdata1;

void mainloop();
void get_tmdata();
void get_keydata();
void get_usrname();
void pointcnt(char* name, short pts);
int isdigit(int c);
int isupper(int c);
void dsp_usrname();
void player();

// 
// Start address: 0x10008f0
void mainloop()
{
	void(*prg_tbl)()[2];
	// Line 50, Address: 0x10008f0, Func Offset: 0
	// Line 51, Address: 0x10008f8, Func Offset: 0x8
	// Line 57, Address: 0x1000914, Func Offset: 0x24
	// Line 58, Address: 0x1000938, Func Offset: 0x48
	// Func End, Address: 0x1000948, Func Offset: 0x58
}

// 
// Start address: 0x1000950
void get_tmdata()
{
	// Line 63, Address: 0x1000950, Func Offset: 0
	// Line 64, Address: 0x1000958, Func Offset: 0x8
	// Line 65, Address: 0x1000960, Func Offset: 0x10
	// Line 67, Address: 0x1000968, Func Offset: 0x18
	// Line 68, Address: 0x1000974, Func Offset: 0x24
	// Line 69, Address: 0x100097c, Func Offset: 0x2c
	// Line 70, Address: 0x1000984, Func Offset: 0x34
	// Line 71, Address: 0x100098c, Func Offset: 0x3c
	// Line 72, Address: 0x1000994, Func Offset: 0x44
	// Line 73, Address: 0x100099c, Func Offset: 0x4c
	// Line 74, Address: 0x10009a4, Func Offset: 0x54
	// Line 76, Address: 0x10009b0, Func Offset: 0x60
	// Line 77, Address: 0x10009bc, Func Offset: 0x6c
	// Func End, Address: 0x10009cc, Func Offset: 0x7c
}

// 
// Start address: 0x10009d0
void get_keydata()
{
	// Line 82, Address: 0x10009d0, Func Offset: 0
	// Line 83, Address: 0x10009d8, Func Offset: 0x8
	// Line 84, Address: 0x10009e0, Func Offset: 0x10
	// Line 85, Address: 0x10009e8, Func Offset: 0x18
	// Line 86, Address: 0x10009f0, Func Offset: 0x20
	// Func End, Address: 0x1000a00, Func Offset: 0x30
}

// 
// Start address: 0x1000a00
void get_usrname()
{
	short round;
	short zone;
	short i;
	short gp;
	// Line 91, Address: 0x1000a00, Func Offset: 0
	// Line 95, Address: 0x1000a18, Func Offset: 0x18
	// Line 97, Address: 0x1000a38, Func Offset: 0x38
	// Line 99, Address: 0x1000a44, Func Offset: 0x44
	// Line 101, Address: 0x1000a50, Func Offset: 0x50
	// Line 102, Address: 0x1000a98, Func Offset: 0x98
	// Line 103, Address: 0x1000ae0, Func Offset: 0xe0
	// Line 104, Address: 0x1000b28, Func Offset: 0x128
	// Line 105, Address: 0x1000b48, Func Offset: 0x148
	// Line 106, Address: 0x1000b68, Func Offset: 0x168
	// Line 108, Address: 0x1000b74, Func Offset: 0x174
	// Line 109, Address: 0x1000ba4, Func Offset: 0x1a4
	// Line 110, Address: 0x1000bd4, Func Offset: 0x1d4
	// Line 111, Address: 0x1000c04, Func Offset: 0x204
	// Line 114, Address: 0x1000c24, Func Offset: 0x224
	// Line 115, Address: 0x1000c28, Func Offset: 0x228
	// Line 117, Address: 0x1000c34, Func Offset: 0x234
	// Line 118, Address: 0x1000c68, Func Offset: 0x268
	// Line 120, Address: 0x1000ccc, Func Offset: 0x2cc
	// Line 122, Address: 0x1000cd4, Func Offset: 0x2d4
	// Line 123, Address: 0x1000cf4, Func Offset: 0x2f4
	// Line 124, Address: 0x1000d30, Func Offset: 0x330
	// Func End, Address: 0x1000d50, Func Offset: 0x350
}

// 
// Start address: 0x1000d50
void pointcnt(char* name, short pts)
{
	short i;
	// Line 129, Address: 0x1000d50, Func Offset: 0
	// Line 132, Address: 0x1000d64, Func Offset: 0x14
	// Line 134, Address: 0x1000d70, Func Offset: 0x20
	// Line 136, Address: 0x1000d9c, Func Offset: 0x4c
	// Line 138, Address: 0x1000de0, Func Offset: 0x90
	// Line 139, Address: 0x1000e10, Func Offset: 0xc0
	// Line 144, Address: 0x1000e18, Func Offset: 0xc8
	// Line 145, Address: 0x1000e40, Func Offset: 0xf0
	// Line 146, Address: 0x1000e7c, Func Offset: 0x12c
	// Line 147, Address: 0x1000ea0, Func Offset: 0x150
	// Line 149, Address: 0x1000ea8, Func Offset: 0x158
	// Line 150, Address: 0x1000ec8, Func Offset: 0x178
	// Func End, Address: 0x1000edc, Func Offset: 0x18c
}

// 
// Start address: 0x1000ee0
int isdigit(int c)
{
	// Line 158, Address: 0x1000ee0, Func Offset: 0
	// Line 159, Address: 0x1000ee8, Func Offset: 0x8
	// Line 160, Address: 0x1000f08, Func Offset: 0x28
	// Line 162, Address: 0x1000f14, Func Offset: 0x34
	// Line 163, Address: 0x1000f18, Func Offset: 0x38
	// Func End, Address: 0x1000f24, Func Offset: 0x44
}

// 
// Start address: 0x1000f30
int isupper(int c)
{
	// Line 166, Address: 0x1000f30, Func Offset: 0
	// Line 167, Address: 0x1000f38, Func Offset: 0x8
	// Line 168, Address: 0x1000f58, Func Offset: 0x28
	// Line 170, Address: 0x1000f64, Func Offset: 0x34
	// Line 171, Address: 0x1000f68, Func Offset: 0x38
	// Func End, Address: 0x1000f74, Func Offset: 0x44
}

// 
// Start address: 0x1000f80
void dsp_usrname()
{
	short i;
	unsigned short c;
	// Line 174, Address: 0x1000f80, Func Offset: 0
	// Line 178, Address: 0x1000f90, Func Offset: 0x10
	// Line 180, Address: 0x1000f9c, Func Offset: 0x1c
	// Line 182, Address: 0x1000fcc, Func Offset: 0x4c
	// Line 183, Address: 0x1000ff8, Func Offset: 0x78
	// Line 184, Address: 0x1001000, Func Offset: 0x80
	// Line 186, Address: 0x1001030, Func Offset: 0xb0
	// Line 192, Address: 0x100105c, Func Offset: 0xdc
	// Line 193, Address: 0x1001080, Func Offset: 0x100
	// Line 194, Address: 0x10010a0, Func Offset: 0x120
	// Func End, Address: 0x10010b8, Func Offset: 0x138
}

// 
// Start address: 0x10010c0
void player()
{
	// Line 200, Address: 0x10010c0, Func Offset: 0
	// Line 201, Address: 0x10010f0, Func Offset: 0x30
	// Line 202, Address: 0x10010f8, Func Offset: 0x38
	// Func End, Address: 0x1001100, Func Offset: 0x40
}

