typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;



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

union _anon3
{
	unsigned short w;
	_anon4 b;
};

struct _anon4
{
	unsigned char l;
	unsigned char h;
};

_anon3 swdata2;
_anon3 swdata1;
int ranum;
_anon0 hscroll;
_anon0 vscroll;

void SWdataSet(_anon3 sw1, _anon3 sw2);
int random();
void scrinit();

// 
// Start address: 0x1002310
void SWdataSet(_anon3 sw1, _anon3 sw2)
{
	// Line 12, Address: 0x1002310, Func Offset: 0
	// Line 13, Address: 0x100231c, Func Offset: 0xc
	// Line 14, Address: 0x1002328, Func Offset: 0x18
	// Line 16, Address: 0x1002334, Func Offset: 0x24
	// Func End, Address: 0x1002340, Func Offset: 0x30
}

// 
// Start address: 0x1002340
int random()
{
	_anon0 lD0;
	_anon0 lD1;
	unsigned short w;
	// Line 21, Address: 0x1002340, Func Offset: 0
	// Line 25, Address: 0x1002348, Func Offset: 0x8
	// Line 26, Address: 0x1002354, Func Offset: 0x14
	// Line 27, Address: 0x1002370, Func Offset: 0x30
	// Line 28, Address: 0x1002378, Func Offset: 0x38
	// Line 29, Address: 0x1002384, Func Offset: 0x44
	// Line 30, Address: 0x1002390, Func Offset: 0x50
	// Line 31, Address: 0x10023a0, Func Offset: 0x60
	// Line 33, Address: 0x10023a8, Func Offset: 0x68
	// Line 35, Address: 0x10023b4, Func Offset: 0x74
	// Line 36, Address: 0x10023c4, Func Offset: 0x84
	// Line 37, Address: 0x10023d0, Func Offset: 0x90
	// Line 38, Address: 0x10023dc, Func Offset: 0x9c
	// Line 39, Address: 0x10023ec, Func Offset: 0xac
	// Line 41, Address: 0x10023f4, Func Offset: 0xb4
	// Line 43, Address: 0x1002400, Func Offset: 0xc0
	// Line 44, Address: 0x1002410, Func Offset: 0xd0
	// Line 46, Address: 0x1002420, Func Offset: 0xe0
	// Line 47, Address: 0x1002428, Func Offset: 0xe8
	// Line 48, Address: 0x1002430, Func Offset: 0xf0
	// Line 50, Address: 0x1002434, Func Offset: 0xf4
	// Line 51, Address: 0x1002444, Func Offset: 0x104
	// Line 53, Address: 0x100244c, Func Offset: 0x10c
	// Line 54, Address: 0x1002454, Func Offset: 0x114
	// Line 55, Address: 0x100245c, Func Offset: 0x11c
	// Line 57, Address: 0x1002460, Func Offset: 0x120
	// Line 58, Address: 0x100246c, Func Offset: 0x12c
	// Line 59, Address: 0x1002470, Func Offset: 0x130
	// Func End, Address: 0x1002480, Func Offset: 0x140
}

// 
// Start address: 0x1002480
void scrinit()
{
	// Line 63, Address: 0x1002480, Func Offset: 0
	// Line 64, Address: 0x1002488, Func Offset: 0x8
	// Line 65, Address: 0x1002490, Func Offset: 0x10
	// Func End, Address: 0x1002498, Func Offset: 0x18
}

