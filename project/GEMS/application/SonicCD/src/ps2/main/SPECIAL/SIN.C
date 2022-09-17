

typedef short type[128];

short sin_tbl[128];

short sp_sin(unsigned short angle);
short sp_cos(unsigned short angle);

// 
// Start address: 0x100cc10
short sp_sin(unsigned short angle)
{
	short wD4;
	// Line 33, Address: 0x100cc10, Func Offset: 0
	// Line 36, Address: 0x100cc1c, Func Offset: 0xc
	// Line 37, Address: 0x100cc28, Func Offset: 0x18
	// Line 38, Address: 0x100cc34, Func Offset: 0x24
	// Line 39, Address: 0x100cc48, Func Offset: 0x38
	// Line 41, Address: 0x100cc64, Func Offset: 0x54
	// Line 42, Address: 0x100cc70, Func Offset: 0x60
	// Line 43, Address: 0x100cc94, Func Offset: 0x84
	// Line 44, Address: 0x100cca8, Func Offset: 0x98
	// Line 45, Address: 0x100ccc4, Func Offset: 0xb4
	// Line 46, Address: 0x100ccc8, Func Offset: 0xb8
	// Func End, Address: 0x100ccd8, Func Offset: 0xc8
}

// 
// Start address: 0x100cce0
short sp_cos(unsigned short angle)
{
	// Line 58, Address: 0x100cce0, Func Offset: 0
	// Line 59, Address: 0x100ccec, Func Offset: 0xc
	// Line 60, Address: 0x100ccf8, Func Offset: 0x18
	// Line 61, Address: 0x100cd04, Func Offset: 0x24
	// Func End, Address: 0x100cd14, Func Offset: 0x34
}

