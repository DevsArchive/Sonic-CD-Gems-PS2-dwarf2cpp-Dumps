typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);
typedef void(*type_3)(_anon0*);
typedef void(*type_5)(_anon0*);
typedef void(*type_14)(_anon0*);
typedef void(*type_18)(_anon0*);
typedef void(*type_33)(_anon0*);
typedef void(*type_35)(_anon0*);
typedef void(*type_39)(_anon0*);
typedef void(*type_41)(_anon0*);
typedef void(*type_46)(_anon0*);
typedef void(*type_52)(_anon0*);
typedef void(*type_55)(_anon0*);

typedef void(*type_0)(_anon0*)[2];
typedef _anon7 type_1[20];
typedef _anon1* type_4[4];
typedef unsigned char type_6[6];
typedef void(*type_7)(_anon0*)[2];
typedef char type_8[16];
typedef unsigned char type_9[3];
typedef _anon7 type_10[0];
typedef short type_11[3];
typedef unsigned char type_12[4];
typedef char type_13[8];
typedef void(*type_15)(_anon0*)[2];
typedef _anon1* type_16[12];
typedef short type_17[8];
typedef void(*type_19)(_anon0*)[2];
typedef char type_20[16];
typedef char type_21[6];
typedef short type_22[4];
typedef short type_23[8];
typedef short type_24[3];
typedef _anon1* type_25[1];
typedef _anon1* type_26[7];
typedef char type_27[16];
typedef unsigned char type_28[2];
typedef unsigned char type_29[22];
typedef _anon1* type_30[2];
typedef short type_31[8];
typedef unsigned char type_32[6];
typedef void(*type_34)(_anon0*)[2];
typedef void(*type_36)(_anon0*)[2];
typedef unsigned char type_37[4];
typedef unsigned char type_38[4];
typedef void(*type_40)(_anon0*)[3];
typedef void(*type_42)(_anon0*)[8];
typedef unsigned char type_43[766];
typedef _anon0 type_44[128];
typedef char type_45[6];
typedef void(*type_47)(_anon0*)[2];
typedef char type_48[16];
typedef _anon1* type_49[1];
typedef _anon1* type_50[1];
typedef short type_51[3];
typedef unsigned char type_53[54];
typedef void(*type_54)(_anon0*)[5];
typedef unsigned char type_56[12];
typedef void(*type_57)(_anon0*)[4];
typedef short type_58[8];
typedef char type_59[6];
typedef unsigned char type_60[12];
typedef unsigned char* type_61[5];
typedef void(*type_62)(_anon0*)[4];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon2 xposi;
	_anon2 yposi;
	_anon5 xspeed;
	_anon5 yspeed;
	_anon5 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon5 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon5 direc;
	_anon5 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

union _anon2
{
	int l;
	_anon3 w;
	_anon4 b;
};

struct _anon3
{
	short l;
	short h;
};

struct _anon4
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon5
{
	short w;
	_anon6 b;
};

struct _anon6
{
	char l;
	char h;
};

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon1 har00;
_anon1 har01;
_anon1 har02;
_anon1 har03;
_anon1* harir3pat[4];
_anon2 scra_h_posit;
_anon0 actwk[128];
unsigned char plpower_m;
unsigned char plpower_a;
_anon1 frd00;
_anon1* frdr3pat[1];
unsigned char time_flag;
_anon1 trd00;
_anon1 trd01;
_anon1* trapdr3pat[2];
_anon1 fo00;
_anon1* for3pat[1];
_anon1 gtd00;
_anon1* getdair3pat[1];
unsigned char pchg1[4];
unsigned char pchg2[4];
unsigned char pchg3[4];
unsigned char pchg4[6];
unsigned char pchg5[6];
unsigned char* gandair3_pchg[5];
_anon1 gnd00;
_anon1 gnd01;
_anon1 gnd02;
_anon1 gnd03;
_anon1 gnd04;
_anon1 gnd05;
_anon1* gandair3pat[7];
unsigned char generate_flag;
_anon1 drm00;
_anon1 drm01;
_anon1 drm02;
_anon1 drm03;
_anon1 drm04;
_anon1 drm05;
_anon1 drm06;
_anon1 drm07;
_anon1 drm08;
_anon1 drm09;
_anon1 drm0a;
_anon1 drm0b;
_anon1* drumr3pat[12];
_anon5 gametimer;
unsigned char flagwork[766];

void harir3(_anon0* hariwk);
void harir3_init(_anon0* hariwk);
void harir3_move(_anon0* hariwk);
void harir3_kind(_anon0* hariwk);
void harir3_ymv1(_anon0* hariwk);
void harir3_ymv2(_anon0* hariwk);
void harir3_xmv1(_anon0* hariwk);
void harir3_xmv2(_anon0* hariwk);
void harir3_sub(_anon0* hariwk);
void frdr3(_anon0* floorwk);
void frdr3_init(_anon0* floorwk);
void frdr3_move(_anon0* floorwk);
void trapdr3(_anon0* floorwk);
void trapdr3_init(_anon0* floorwk);
void trapdr3_move(_anon0* floorwk);
void trapdr3_kind(_anon0* floorwk);
void trapdr3_updown(_anon0* floorwk);
void for3(_anon0* floorwk);
void for3_init(_anon0* floorwk);
void for3_move(_anon0* floorwk);
void for3_ridechk(_anon0* thingwk);
void dai3sub(_anon0* floorwk);
void for3_fix(_anon0* floorwk);
void for3_lmv(_anon0* floorwk);
void for3_rmv(_anon0* floorwk);
void for3_umv(_anon0* floorwk);
void for3_dmv(_anon0* floorwk);
void for3_rup(_anon0* floorwk);
void for3_rup1(_anon0* floorwk);
void for3_rup2(_anon0* floorwk);
void for3_rup3(_anon0* floorwk);
void getdair3(_anon0* floorwk);
void getdair3_init(_anon0* floorwk);
void getdair3_move(_anon0* floorwk);
void getdair3_move_sub(_anon0* floorwk);
void gandair3(_anon0* floorwk);
void gandair3_daii(_anon0* floorwk);
void gandair3_daim(_anon0* floorwk);
void gandair3_core(_anon0* corewk);
void gandair3_ridechk(_anon0* floorwk);
void gandair3_init(_anon0* corewk);
void gandair3_wait(_anon0* corewk);
void gandair3_fire(_anon0* corewk);
void gandair3_end(_anon0* corewk);
void gandair3_wait2(_anon0* corewk);
void gandair3_tamaset(_anon0* corewk);
void gandair3_tama(_anon0* bulletwk);
void gandair3_tami(_anon0* bulletwk);
void gandair3_tamm(_anon0* bulletwk);
void drumr3(_anon0* drumwk);
void drumr3_ridechk(_anon0* drumwk);
void drumr3_init(_anon0* drumwk);
void drumr3_move1(_anon0* drumwk);
void drumr3_move2(_anon0* drumwk);
void drumr3_move3(_anon0* drumwk);
void drumr3_addspd(_anon0* drumwk);
void drumr3_cntset(_anon0* drumwk);
void drumr3_priset(_anon0* drumwk);
void tr3_fout(_anon0* thingwk);

// 
// Start address: 0x1020060
void harir3(_anon0* hariwk)
{
	void(*harir3_acttbl)(_anon0*)[2];
	unsigned short ride_no;
	unsigned short cal_x;
	// Line 65, Address: 0x1020060, Func Offset: 0
	// Line 66, Address: 0x1020074, Func Offset: 0x14
	// Line 72, Address: 0x1020090, Func Offset: 0x30
	// Line 73, Address: 0x10200cc, Func Offset: 0x6c
	// Line 75, Address: 0x10200d8, Func Offset: 0x78
	// Line 76, Address: 0x10200f0, Func Offset: 0x90
	// Line 78, Address: 0x1020140, Func Offset: 0xe0
	// Line 81, Address: 0x1020190, Func Offset: 0x130
	// Line 83, Address: 0x10201cc, Func Offset: 0x16c
	// Line 84, Address: 0x10201e8, Func Offset: 0x188
	// Func End, Address: 0x1020200, Func Offset: 0x1a0
}

// 
// Start address: 0x1020200
void harir3_init(_anon0* hariwk)
{
	unsigned char harir3sztbl[12];
	unsigned char cal_index;
	// Line 88, Address: 0x1020200, Func Offset: 0
	// Line 89, Address: 0x1020210, Func Offset: 0x10
	// Line 97, Address: 0x1020244, Func Offset: 0x44
	// Line 98, Address: 0x1020254, Func Offset: 0x54
	// Line 102, Address: 0x1020264, Func Offset: 0x64
	// Line 103, Address: 0x1020270, Func Offset: 0x70
	// Line 105, Address: 0x1020280, Func Offset: 0x80
	// Line 106, Address: 0x1020290, Func Offset: 0x90
	// Line 109, Address: 0x10202a0, Func Offset: 0xa0
	// Line 110, Address: 0x10202c8, Func Offset: 0xc8
	// Line 111, Address: 0x10202dc, Func Offset: 0xdc
	// Line 112, Address: 0x10202f0, Func Offset: 0xf0
	// Line 113, Address: 0x1020308, Func Offset: 0x108
	// Line 114, Address: 0x1020320, Func Offset: 0x120
	// Line 115, Address: 0x102032c, Func Offset: 0x12c
	// Func End, Address: 0x1020340, Func Offset: 0x140
}

// 
// Start address: 0x1020340
void harir3_move(_anon0* hariwk)
{
	// Line 118, Address: 0x1020340, Func Offset: 0
	// Line 119, Address: 0x102034c, Func Offset: 0xc
	// Line 121, Address: 0x1020358, Func Offset: 0x18
	// Line 123, Address: 0x1020388, Func Offset: 0x48
	// Line 124, Address: 0x10203ac, Func Offset: 0x6c
	// Line 126, Address: 0x10203c4, Func Offset: 0x84
	// Line 127, Address: 0x10203d8, Func Offset: 0x98
	// Line 130, Address: 0x10203ec, Func Offset: 0xac
	// Line 132, Address: 0x1020404, Func Offset: 0xc4
	// Line 134, Address: 0x1020418, Func Offset: 0xd8
	// Line 135, Address: 0x1020440, Func Offset: 0x100
	// Line 136, Address: 0x1020454, Func Offset: 0x114
	// Func End, Address: 0x1020464, Func Offset: 0x124
}

// 
// Start address: 0x1020470
void harir3_kind(_anon0* hariwk)
{
	void(*harir3_kndtbl)(_anon0*)[4];
	// Line 140, Address: 0x1020470, Func Offset: 0
	// Line 141, Address: 0x102047c, Func Offset: 0xc
	// Line 147, Address: 0x10204a8, Func Offset: 0x38
	// Line 148, Address: 0x10204c4, Func Offset: 0x54
	// Line 149, Address: 0x10204f0, Func Offset: 0x80
	// Func End, Address: 0x1020500, Func Offset: 0x90
}

// 
// Start address: 0x1020500
void harir3_ymv1(_anon0* hariwk)
{
	// Line 153, Address: 0x1020500, Func Offset: 0
	// Line 154, Address: 0x102050c, Func Offset: 0xc
	// Line 155, Address: 0x1020518, Func Offset: 0x18
	// Line 157, Address: 0x1020550, Func Offset: 0x50
	// Func End, Address: 0x1020560, Func Offset: 0x60
}

// 
// Start address: 0x1020560
void harir3_ymv2(_anon0* hariwk)
{
	// Line 161, Address: 0x1020560, Func Offset: 0
	// Line 162, Address: 0x102056c, Func Offset: 0xc
	// Line 163, Address: 0x1020578, Func Offset: 0x18
	// Line 165, Address: 0x10205b0, Func Offset: 0x50
	// Func End, Address: 0x10205c0, Func Offset: 0x60
}

// 
// Start address: 0x10205c0
void harir3_xmv1(_anon0* hariwk)
{
	// Line 169, Address: 0x10205c0, Func Offset: 0
	// Line 170, Address: 0x10205cc, Func Offset: 0xc
	// Line 171, Address: 0x10205d8, Func Offset: 0x18
	// Line 173, Address: 0x1020610, Func Offset: 0x50
	// Func End, Address: 0x1020620, Func Offset: 0x60
}

// 
// Start address: 0x1020620
void harir3_xmv2(_anon0* hariwk)
{
	// Line 177, Address: 0x1020620, Func Offset: 0
	// Line 178, Address: 0x102062c, Func Offset: 0xc
	// Line 179, Address: 0x1020638, Func Offset: 0x18
	// Line 181, Address: 0x1020670, Func Offset: 0x50
	// Func End, Address: 0x1020680, Func Offset: 0x60
}

// 
// Start address: 0x1020680
void harir3_sub(_anon0* hariwk)
{
	// Line 185, Address: 0x1020680, Func Offset: 0
	// Line 186, Address: 0x102068c, Func Offset: 0xc
	// Line 187, Address: 0x10206a0, Func Offset: 0x20
	// Line 188, Address: 0x10206c0, Func Offset: 0x40
	// Line 191, Address: 0x10206e4, Func Offset: 0x64
	// Line 192, Address: 0x10206f8, Func Offset: 0x78
	// Line 194, Address: 0x1020724, Func Offset: 0xa4
	// Line 195, Address: 0x1020738, Func Offset: 0xb8
	// Line 196, Address: 0x1020744, Func Offset: 0xc4
	// Line 199, Address: 0x102074c, Func Offset: 0xcc
	// Line 200, Address: 0x1020770, Func Offset: 0xf0
	// Line 201, Address: 0x102077c, Func Offset: 0xfc
	// Line 202, Address: 0x1020788, Func Offset: 0x108
	// Line 203, Address: 0x1020794, Func Offset: 0x114
	// Func End, Address: 0x10207a4, Func Offset: 0x124
}

// 
// Start address: 0x10207b0
void frdr3(_anon0* floorwk)
{
	void(*frdr3_acttbl)(_anon0*)[2];
	unsigned short cal_x;
	// Line 248, Address: 0x10207b0, Func Offset: 0
	// Line 249, Address: 0x10207c0, Func Offset: 0x10
	// Line 254, Address: 0x10207dc, Func Offset: 0x2c
	// Line 255, Address: 0x1020818, Func Offset: 0x68
	// Line 256, Address: 0x1020824, Func Offset: 0x74
	// Line 258, Address: 0x1020860, Func Offset: 0xb0
	// Line 259, Address: 0x102087c, Func Offset: 0xcc
	// Func End, Address: 0x1020890, Func Offset: 0xe0
}

// 
// Start address: 0x1020890
void frdr3_init(_anon0* floorwk)
{
	_anon0* new_actwk;
	// Line 263, Address: 0x1020890, Func Offset: 0
	// Line 266, Address: 0x102089c, Func Offset: 0xc
	// Line 267, Address: 0x10208ac, Func Offset: 0x1c
	// Line 269, Address: 0x10208bc, Func Offset: 0x2c
	// Line 270, Address: 0x10208c8, Func Offset: 0x38
	// Line 271, Address: 0x10208d8, Func Offset: 0x48
	// Line 272, Address: 0x10208f0, Func Offset: 0x60
	// Line 273, Address: 0x1020900, Func Offset: 0x70
	// Line 275, Address: 0x1020910, Func Offset: 0x80
	// Line 276, Address: 0x1020940, Func Offset: 0xb0
	// Line 277, Address: 0x1020958, Func Offset: 0xc8
	// Line 278, Address: 0x102096c, Func Offset: 0xdc
	// Line 279, Address: 0x1020978, Func Offset: 0xe8
	// Line 280, Address: 0x1020988, Func Offset: 0xf8
	// Line 281, Address: 0x1020998, Func Offset: 0x108
	// Line 282, Address: 0x10209a4, Func Offset: 0x114
	// Line 283, Address: 0x10209d8, Func Offset: 0x148
	// Line 284, Address: 0x1020a00, Func Offset: 0x170
	// Line 285, Address: 0x1020a0c, Func Offset: 0x17c
	// Func End, Address: 0x1020a1c, Func Offset: 0x18c
}

// 
// Start address: 0x1020a20
void frdr3_move(_anon0* floorwk)
{
	char frdr3_mvtbl0[8];
	short frdr3_mvtbl1[4];
	// Line 289, Address: 0x1020a20, Func Offset: 0
	// Line 291, Address: 0x1020a2c, Func Offset: 0xc
	// Line 296, Address: 0x1020a60, Func Offset: 0x40
	// Line 298, Address: 0x1020a8c, Func Offset: 0x6c
	// Line 299, Address: 0x1020aa0, Func Offset: 0x80
	// Line 302, Address: 0x1020ab4, Func Offset: 0x94
	// Line 303, Address: 0x1020ad0, Func Offset: 0xb0
	// Line 304, Address: 0x1020ae4, Func Offset: 0xc4
	// Line 305, Address: 0x1020b04, Func Offset: 0xe4
	// Line 307, Address: 0x1020b30, Func Offset: 0x110
	// Line 308, Address: 0x1020b50, Func Offset: 0x130
	// Line 311, Address: 0x1020b58, Func Offset: 0x138
	// Line 312, Address: 0x1020b70, Func Offset: 0x150
	// Line 313, Address: 0x1020b80, Func Offset: 0x160
	// Line 319, Address: 0x1020ba4, Func Offset: 0x184
	// Line 320, Address: 0x1020bc4, Func Offset: 0x1a4
	// Line 321, Address: 0x1020be4, Func Offset: 0x1c4
	// Line 322, Address: 0x1020bec, Func Offset: 0x1cc
	// Func End, Address: 0x1020bfc, Func Offset: 0x1dc
}

// 
// Start address: 0x1020c00
void trapdr3(_anon0* floorwk)
{
	void(*trapdr3_acttbl)(_anon0*)[2];
	unsigned short cal_x;
	// Line 370, Address: 0x1020c00, Func Offset: 0
	// Line 371, Address: 0x1020c10, Func Offset: 0x10
	// Line 374, Address: 0x1020c2c, Func Offset: 0x2c
	// Line 375, Address: 0x1020c68, Func Offset: 0x68
	// Line 376, Address: 0x1020c74, Func Offset: 0x74
	// Line 378, Address: 0x1020cb0, Func Offset: 0xb0
	// Line 379, Address: 0x1020ccc, Func Offset: 0xcc
	// Func End, Address: 0x1020ce0, Func Offset: 0xe0
}

// 
// Start address: 0x1020ce0
void trapdr3_init(_anon0* floorwk)
{
	_anon0* new_actwk;
	// Line 382, Address: 0x1020ce0, Func Offset: 0
	// Line 385, Address: 0x1020cec, Func Offset: 0xc
	// Line 387, Address: 0x1020cfc, Func Offset: 0x1c
	// Line 388, Address: 0x1020d08, Func Offset: 0x28
	// Line 389, Address: 0x1020d18, Func Offset: 0x38
	// Line 391, Address: 0x1020d38, Func Offset: 0x58
	// Line 392, Address: 0x1020d44, Func Offset: 0x64
	// Line 393, Address: 0x1020d50, Func Offset: 0x70
	// Line 394, Address: 0x1020d60, Func Offset: 0x80
	// Line 395, Address: 0x1020d70, Func Offset: 0x90
	// Line 397, Address: 0x1020d80, Func Offset: 0xa0
	// Line 399, Address: 0x1020db0, Func Offset: 0xd0
	// Line 400, Address: 0x1020dc8, Func Offset: 0xe8
	// Line 402, Address: 0x1020ddc, Func Offset: 0xfc
	// Line 403, Address: 0x1020e10, Func Offset: 0x130
	// Line 404, Address: 0x1020e1c, Func Offset: 0x13c
	// Line 405, Address: 0x1020e2c, Func Offset: 0x14c
	// Line 406, Address: 0x1020e3c, Func Offset: 0x15c
	// Line 407, Address: 0x1020e70, Func Offset: 0x190
	// Line 408, Address: 0x1020e88, Func Offset: 0x1a8
	// Line 409, Address: 0x1020e94, Func Offset: 0x1b4
	// Line 410, Address: 0x1020ea0, Func Offset: 0x1c0
	// Line 411, Address: 0x1020ea8, Func Offset: 0x1c8
	// Line 412, Address: 0x1020eb4, Func Offset: 0x1d4
	// Line 414, Address: 0x1020ee0, Func Offset: 0x200
	// Line 415, Address: 0x1020eec, Func Offset: 0x20c
	// Func End, Address: 0x1020efc, Func Offset: 0x21c
}

// 
// Start address: 0x1020f00
void trapdr3_move(_anon0* floorwk)
{
	// Line 418, Address: 0x1020f00, Func Offset: 0
	// Line 419, Address: 0x1020f0c, Func Offset: 0xc
	// Line 420, Address: 0x1020f18, Func Offset: 0x18
	// Line 421, Address: 0x1020f2c, Func Offset: 0x2c
	// Func End, Address: 0x1020f3c, Func Offset: 0x3c
}

// 
// Start address: 0x1020f40
void trapdr3_kind(_anon0* floorwk)
{
	// Line 424, Address: 0x1020f40, Func Offset: 0
	// Line 425, Address: 0x1020f4c, Func Offset: 0xc
	// Line 427, Address: 0x1020f68, Func Offset: 0x28
	// Line 428, Address: 0x1020f74, Func Offset: 0x34
	// Line 430, Address: 0x1020fac, Func Offset: 0x6c
	// Line 432, Address: 0x1020fb4, Func Offset: 0x74
	// Line 433, Address: 0x1020fc0, Func Offset: 0x80
	// Line 436, Address: 0x1020ff8, Func Offset: 0xb8
	// Func End, Address: 0x1021008, Func Offset: 0xc8
}

// 
// Start address: 0x1021010
void trapdr3_updown(_anon0* floorwk)
{
	short cal_x;
	// Line 440, Address: 0x1021010, Func Offset: 0
	// Line 443, Address: 0x102101c, Func Offset: 0xc
	// Line 444, Address: 0x1021068, Func Offset: 0x58
	// Line 445, Address: 0x1021078, Func Offset: 0x68
	// Line 449, Address: 0x102108c, Func Offset: 0x7c
	// Line 450, Address: 0x10210c0, Func Offset: 0xb0
	// Line 453, Address: 0x10210c8, Func Offset: 0xb8
	// Line 455, Address: 0x10210f8, Func Offset: 0xe8
	// Func End, Address: 0x1021108, Func Offset: 0xf8
}

// 
// Start address: 0x1021110
void for3(_anon0* floorwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 498, Address: 0x1021110, Func Offset: 0
	// Line 499, Address: 0x102111c, Func Offset: 0xc
	// Line 501, Address: 0x1021138, Func Offset: 0x28
	// Line 502, Address: 0x1021174, Func Offset: 0x64
	// Line 503, Address: 0x1021180, Func Offset: 0x70
	// Func End, Address: 0x1021190, Func Offset: 0x80
}

// 
// Start address: 0x1021190
void for3_init(_anon0* floorwk)
{
	// Line 506, Address: 0x1021190, Func Offset: 0
	// Line 507, Address: 0x102119c, Func Offset: 0xc
	// Line 509, Address: 0x10211ac, Func Offset: 0x1c
	// Line 510, Address: 0x10211b8, Func Offset: 0x28
	// Line 511, Address: 0x10211c8, Func Offset: 0x38
	// Line 512, Address: 0x10211d4, Func Offset: 0x44
	// Line 514, Address: 0x10211e0, Func Offset: 0x50
	// Line 515, Address: 0x10211f0, Func Offset: 0x60
	// Line 516, Address: 0x1021200, Func Offset: 0x70
	// Line 517, Address: 0x1021210, Func Offset: 0x80
	// Line 518, Address: 0x102121c, Func Offset: 0x8c
	// Func End, Address: 0x102122c, Func Offset: 0x9c
}

// 
// Start address: 0x1021230
void for3_move(_anon0* floorwk)
{
	void(*for3_kndtbl)(_anon0*)[8];
	unsigned short cal_x;
	// Line 521, Address: 0x1021230, Func Offset: 0
	// Line 522, Address: 0x1021240, Func Offset: 0x10
	// Line 533, Address: 0x1021274, Func Offset: 0x44
	// Line 534, Address: 0x102129c, Func Offset: 0x6c
	// Line 535, Address: 0x10212a8, Func Offset: 0x78
	// Line 537, Address: 0x10212e4, Func Offset: 0xb4
	// Line 538, Address: 0x1021300, Func Offset: 0xd0
	// Func End, Address: 0x1021314, Func Offset: 0xe4
}

// 
// Start address: 0x1021320
void for3_ridechk(_anon0* thingwk)
{
	// Line 541, Address: 0x1021320, Func Offset: 0
	// Line 542, Address: 0x102132c, Func Offset: 0xc
	// Line 543, Address: 0x1021340, Func Offset: 0x20
	// Func End, Address: 0x1021350, Func Offset: 0x30
}

// 
// Start address: 0x1021350
void dai3sub(_anon0* floorwk)
{
	short tmp_sin;
	short tmp_cos;
	_anon2 cal_sin;
	// Line 547, Address: 0x1021350, Func Offset: 0
	// Line 551, Address: 0x102135c, Func Offset: 0xc
	// Line 553, Address: 0x1021370, Func Offset: 0x20
	// Line 554, Address: 0x1021388, Func Offset: 0x38
	// Line 555, Address: 0x102139c, Func Offset: 0x4c
	// Line 556, Address: 0x10213ac, Func Offset: 0x5c
	// Line 558, Address: 0x10213b4, Func Offset: 0x64
	// Line 559, Address: 0x10213cc, Func Offset: 0x7c
	// Line 561, Address: 0x10213dc, Func Offset: 0x8c
	// Line 562, Address: 0x10213f4, Func Offset: 0xa4
	// Line 563, Address: 0x1021408, Func Offset: 0xb8
	// Line 564, Address: 0x1021438, Func Offset: 0xe8
	// Func End, Address: 0x1021448, Func Offset: 0xf8
}

// 
// Start address: 0x1021450
void for3_fix(_anon0* floorwk)
{
	// Line 568, Address: 0x1021450, Func Offset: 0
	// Line 569, Address: 0x102145c, Func Offset: 0xc
	// Line 570, Address: 0x1021468, Func Offset: 0x18
	// Line 571, Address: 0x1021474, Func Offset: 0x24
	// Func End, Address: 0x1021484, Func Offset: 0x34
}

// 
// Start address: 0x1021490
void for3_lmv(_anon0* floorwk)
{
	// Line 575, Address: 0x1021490, Func Offset: 0
	// Line 576, Address: 0x102149c, Func Offset: 0xc
	// Line 577, Address: 0x10214a8, Func Offset: 0x18
	// Func End, Address: 0x10214b8, Func Offset: 0x28
}

// 
// Start address: 0x10214c0
void for3_rmv(_anon0* floorwk)
{
	char for3_rmvtbl0[16];
	short for3_rmvtbl1[8];
	char for3_lmvtbl0[16];
	short for3_lmvtbl1[8];
	// Line 580, Address: 0x10214c0, Func Offset: 0
	// Line 582, Address: 0x10214cc, Func Offset: 0xc
	// Line 592, Address: 0x1021500, Func Offset: 0x40
	// Line 594, Address: 0x1021534, Func Offset: 0x74
	// Line 604, Address: 0x1021568, Func Offset: 0xa8
	// Line 607, Address: 0x102159c, Func Offset: 0xdc
	// Line 609, Address: 0x10215b0, Func Offset: 0xf0
	// Line 610, Address: 0x10215bc, Func Offset: 0xfc
	// Line 611, Address: 0x10215d8, Func Offset: 0x118
	// Line 612, Address: 0x10215f8, Func Offset: 0x138
	// Line 614, Address: 0x1021624, Func Offset: 0x164
	// Line 616, Address: 0x1021644, Func Offset: 0x184
	// Line 617, Address: 0x1021650, Func Offset: 0x190
	// Line 618, Address: 0x1021658, Func Offset: 0x198
	// Line 619, Address: 0x1021678, Func Offset: 0x1b8
	// Line 621, Address: 0x10216a4, Func Offset: 0x1e4
	// Line 623, Address: 0x10216c4, Func Offset: 0x204
	// Line 625, Address: 0x10216d0, Func Offset: 0x210
	// Line 627, Address: 0x10216d8, Func Offset: 0x218
	// Line 629, Address: 0x1021704, Func Offset: 0x244
	// Line 631, Address: 0x102171c, Func Offset: 0x25c
	// Line 632, Address: 0x1021750, Func Offset: 0x290
	// Line 633, Address: 0x1021780, Func Offset: 0x2c0
	// Line 634, Address: 0x1021788, Func Offset: 0x2c8
	// Func End, Address: 0x1021798, Func Offset: 0x2d8
}

// 
// Start address: 0x10217a0
void for3_umv(_anon0* floorwk)
{
	// Line 637, Address: 0x10217a0, Func Offset: 0
	// Line 638, Address: 0x10217ac, Func Offset: 0xc
	// Line 639, Address: 0x10217b8, Func Offset: 0x18
	// Func End, Address: 0x10217c8, Func Offset: 0x28
}

// 
// Start address: 0x10217d0
void for3_dmv(_anon0* floorwk)
{
	char for3_umvtbl0[16];
	short for3_umvtbl1[8];
	char for3_dmvtbl0[16];
	short for3_dmvtbl1[8];
	// Line 642, Address: 0x10217d0, Func Offset: 0
	// Line 644, Address: 0x10217dc, Func Offset: 0xc
	// Line 653, Address: 0x1021810, Func Offset: 0x40
	// Line 655, Address: 0x1021844, Func Offset: 0x74
	// Line 664, Address: 0x1021878, Func Offset: 0xa8
	// Line 667, Address: 0x10218ac, Func Offset: 0xdc
	// Line 669, Address: 0x10218b8, Func Offset: 0xe8
	// Line 670, Address: 0x10218cc, Func Offset: 0xfc
	// Line 671, Address: 0x10218d4, Func Offset: 0x104
	// Line 672, Address: 0x10218f0, Func Offset: 0x120
	// Line 673, Address: 0x1021910, Func Offset: 0x140
	// Line 675, Address: 0x102193c, Func Offset: 0x16c
	// Line 677, Address: 0x102195c, Func Offset: 0x18c
	// Line 678, Address: 0x1021964, Func Offset: 0x194
	// Line 679, Address: 0x1021984, Func Offset: 0x1b4
	// Line 681, Address: 0x10219b0, Func Offset: 0x1e0
	// Line 684, Address: 0x10219d0, Func Offset: 0x200
	// Line 686, Address: 0x10219d8, Func Offset: 0x208
	// Line 687, Address: 0x10219fc, Func Offset: 0x22c
	// Line 688, Address: 0x1021a14, Func Offset: 0x244
	// Line 689, Address: 0x1021a34, Func Offset: 0x264
	// Line 690, Address: 0x1021a54, Func Offset: 0x284
	// Line 691, Address: 0x1021a84, Func Offset: 0x2b4
	// Line 692, Address: 0x1021a8c, Func Offset: 0x2bc
	// Func End, Address: 0x1021a9c, Func Offset: 0x2cc
}

// 
// Start address: 0x1021aa0
void for3_rup(_anon0* floorwk)
{
	void(*tbl)(_anon0*)[3];
	// Line 706, Address: 0x1021aa0, Func Offset: 0
	// Line 707, Address: 0x1021aac, Func Offset: 0xc
	// Line 709, Address: 0x1021ad0, Func Offset: 0x30
	// Line 711, Address: 0x1021adc, Func Offset: 0x3c
	// Line 712, Address: 0x1021b18, Func Offset: 0x78
	// Func End, Address: 0x1021b28, Func Offset: 0x88
}

// 
// Start address: 0x1021b30
void for3_rup1(_anon0* floorwk)
{
	// Line 716, Address: 0x1021b30, Func Offset: 0
	// Line 717, Address: 0x1021b3c, Func Offset: 0xc
	// Line 719, Address: 0x1021b50, Func Offset: 0x20
	// Line 720, Address: 0x1021b5c, Func Offset: 0x2c
	// Line 721, Address: 0x1021b8c, Func Offset: 0x5c
	// Line 723, Address: 0x1021b94, Func Offset: 0x64
	// Line 724, Address: 0x1021bb4, Func Offset: 0x84
	// Line 725, Address: 0x1021bbc, Func Offset: 0x8c
	// Line 726, Address: 0x1021bcc, Func Offset: 0x9c
	// Func End, Address: 0x1021bdc, Func Offset: 0xac
}

// 
// Start address: 0x1021be0
void for3_rup2(_anon0* floorwk)
{
	char for3_8btbl0[6];
	short for3_8btbl1[3];
	char for3_16btbl0[6];
	short for3_16btbl1[3];
	char for3_28btbl0[6];
	short for3_28btbl1[3];
	// Line 730, Address: 0x1021be0, Func Offset: 0
	// Line 732, Address: 0x1021be8, Func Offset: 0x8
	// Line 736, Address: 0x1021c1c, Func Offset: 0x3c
	// Line 738, Address: 0x1021c40, Func Offset: 0x60
	// Line 742, Address: 0x1021c74, Func Offset: 0x94
	// Line 744, Address: 0x1021c98, Func Offset: 0xb8
	// Line 748, Address: 0x1021ccc, Func Offset: 0xec
	// Line 751, Address: 0x1021cf0, Func Offset: 0x110
	// Line 753, Address: 0x1021d04, Func Offset: 0x124
	// Line 754, Address: 0x1021d20, Func Offset: 0x140
	// Line 755, Address: 0x1021d40, Func Offset: 0x160
	// Line 757, Address: 0x1021d6c, Func Offset: 0x18c
	// Line 759, Address: 0x1021d8c, Func Offset: 0x1ac
	// Line 760, Address: 0x1021db0, Func Offset: 0x1d0
	// Line 761, Address: 0x1021dd0, Func Offset: 0x1f0
	// Line 763, Address: 0x1021dfc, Func Offset: 0x21c
	// Line 765, Address: 0x1021e1c, Func Offset: 0x23c
	// Line 766, Address: 0x1021e24, Func Offset: 0x244
	// Line 767, Address: 0x1021e44, Func Offset: 0x264
	// Line 769, Address: 0x1021e70, Func Offset: 0x290
	// Line 772, Address: 0x1021e90, Func Offset: 0x2b0
	// Line 774, Address: 0x1021e98, Func Offset: 0x2b8
	// Line 775, Address: 0x1021eb0, Func Offset: 0x2d0
	// Line 776, Address: 0x1021ed0, Func Offset: 0x2f0
	// Line 778, Address: 0x1021ef4, Func Offset: 0x314
	// Line 779, Address: 0x1021f14, Func Offset: 0x334
	// Line 781, Address: 0x1021f38, Func Offset: 0x358
	// Line 782, Address: 0x1021f40, Func Offset: 0x360
	// Line 783, Address: 0x1021f4c, Func Offset: 0x36c
	// Line 784, Address: 0x1021f5c, Func Offset: 0x37c
	// Line 785, Address: 0x1021f6c, Func Offset: 0x38c
	// Func End, Address: 0x1021f78, Func Offset: 0x398
}

// 
// Start address: 0x1021f80
void for3_rup3(_anon0* floorwk)
{
	// Line 788, Address: 0x1021f80, Func Offset: 0
	// Line 789, Address: 0x1021f88, Func Offset: 0x8
	// Line 790, Address: 0x1021f98, Func Offset: 0x18
	// Func End, Address: 0x1021fa4, Func Offset: 0x24
}

// 
// Start address: 0x1021fb0
void getdair3(_anon0* floorwk)
{
	void(*tbl)(_anon0*)[2];
	unsigned short cal_x;
	// Line 831, Address: 0x1021fb0, Func Offset: 0
	// Line 832, Address: 0x1021fc0, Func Offset: 0x10
	// Line 837, Address: 0x1021fdc, Func Offset: 0x2c
	// Line 838, Address: 0x1022018, Func Offset: 0x68
	// Line 840, Address: 0x1022024, Func Offset: 0x74
	// Line 842, Address: 0x1022058, Func Offset: 0xa8
	// Line 843, Address: 0x1022074, Func Offset: 0xc4
	// Func End, Address: 0x1022088, Func Offset: 0xd8
}

// 
// Start address: 0x1022090
void getdair3_init(_anon0* floorwk)
{
	unsigned char getdair3_cnttbl[3];
	// Line 846, Address: 0x1022090, Func Offset: 0
	// Line 847, Address: 0x102209c, Func Offset: 0xc
	// Line 849, Address: 0x10220c0, Func Offset: 0x30
	// Line 851, Address: 0x10220d0, Func Offset: 0x40
	// Line 852, Address: 0x10220dc, Func Offset: 0x4c
	// Line 853, Address: 0x10220ec, Func Offset: 0x5c
	// Line 854, Address: 0x10220f8, Func Offset: 0x68
	// Line 856, Address: 0x1022104, Func Offset: 0x74
	// Line 857, Address: 0x1022114, Func Offset: 0x84
	// Line 859, Address: 0x1022124, Func Offset: 0x94
	// Line 861, Address: 0x1022148, Func Offset: 0xb8
	// Line 862, Address: 0x1022158, Func Offset: 0xc8
	// Line 863, Address: 0x1022164, Func Offset: 0xd4
	// Func End, Address: 0x1022174, Func Offset: 0xe4
}

// 
// Start address: 0x1022180
void getdair3_move(_anon0* floorwk)
{
	// Line 866, Address: 0x1022180, Func Offset: 0
	// Line 867, Address: 0x102218c, Func Offset: 0xc
	// Line 869, Address: 0x10221a4, Func Offset: 0x24
	// Line 870, Address: 0x10221b0, Func Offset: 0x30
	// Line 872, Address: 0x10221e8, Func Offset: 0x68
	// Line 874, Address: 0x10221f0, Func Offset: 0x70
	// Line 875, Address: 0x10221fc, Func Offset: 0x7c
	// Line 879, Address: 0x1022234, Func Offset: 0xb4
	// Line 880, Address: 0x1022248, Func Offset: 0xc8
	// Func End, Address: 0x1022258, Func Offset: 0xd8
}

// 
// Start address: 0x1022260
void getdair3_move_sub(_anon0* floorwk)
{
	// Line 883, Address: 0x1022260, Func Offset: 0
	// Line 884, Address: 0x1022268, Func Offset: 0x8
	// Line 886, Address: 0x1022294, Func Offset: 0x34
	// Line 887, Address: 0x10222c0, Func Offset: 0x60
	// Line 889, Address: 0x10222c8, Func Offset: 0x68
	// Line 890, Address: 0x10222e4, Func Offset: 0x84
	// Line 891, Address: 0x10222f8, Func Offset: 0x98
	// Line 892, Address: 0x1022304, Func Offset: 0xa4
	// Line 893, Address: 0x1022310, Func Offset: 0xb0
	// Line 896, Address: 0x1022318, Func Offset: 0xb8
	// Line 897, Address: 0x102233c, Func Offset: 0xdc
	// Line 898, Address: 0x1022348, Func Offset: 0xe8
	// Line 899, Address: 0x1022354, Func Offset: 0xf4
	// Func End, Address: 0x1022360, Func Offset: 0x100
}

// 
// Start address: 0x1022360
void gandair3(_anon0* floorwk)
{
	void(*tbl)(_anon0*)[2];
	unsigned short cal_x;
	// Line 976, Address: 0x1022360, Func Offset: 0
	// Line 977, Address: 0x1022370, Func Offset: 0x10
	// Line 980, Address: 0x102238c, Func Offset: 0x2c
	// Line 981, Address: 0x10223bc, Func Offset: 0x5c
	// Line 983, Address: 0x10223ec, Func Offset: 0x8c
	// Line 984, Address: 0x1022428, Func Offset: 0xc8
	// Line 986, Address: 0x1022434, Func Offset: 0xd4
	// Line 988, Address: 0x1022470, Func Offset: 0x110
	// Line 989, Address: 0x102248c, Func Offset: 0x12c
	// Func End, Address: 0x10224a0, Func Offset: 0x140
}

// 
// Start address: 0x10224a0
void gandair3_daii(_anon0* floorwk)
{
	_anon0* new_actwk;
	// Line 993, Address: 0x10224a0, Func Offset: 0
	// Line 996, Address: 0x10224ac, Func Offset: 0xc
	// Line 998, Address: 0x10224bc, Func Offset: 0x1c
	// Line 999, Address: 0x10224c8, Func Offset: 0x28
	// Line 1000, Address: 0x10224d8, Func Offset: 0x38
	// Line 1001, Address: 0x10224e8, Func Offset: 0x48
	// Line 1002, Address: 0x10224f8, Func Offset: 0x58
	// Line 1004, Address: 0x1022504, Func Offset: 0x64
	// Line 1006, Address: 0x1022518, Func Offset: 0x78
	// Line 1007, Address: 0x1022524, Func Offset: 0x84
	// Line 1008, Address: 0x1022534, Func Offset: 0x94
	// Line 1009, Address: 0x1022558, Func Offset: 0xb8
	// Line 1011, Address: 0x1022564, Func Offset: 0xc4
	// Line 1012, Address: 0x1022574, Func Offset: 0xd4
	// Line 1013, Address: 0x1022580, Func Offset: 0xe0
	// Func End, Address: 0x1022590, Func Offset: 0xf0
}

// 
// Start address: 0x1022590
void gandair3_daim(_anon0* floorwk)
{
	// Line 1016, Address: 0x1022590, Func Offset: 0
	// Line 1017, Address: 0x1022598, Func Offset: 0x8
	// Line 1018, Address: 0x10225a8, Func Offset: 0x18
	// Func End, Address: 0x10225b4, Func Offset: 0x24
}

// 
// Start address: 0x10225c0
void gandair3_core(_anon0* corewk)
{
	void(*tbl)(_anon0*)[5];
	unsigned short cal_x;
	// Line 1022, Address: 0x10225c0, Func Offset: 0
	// Line 1023, Address: 0x10225d0, Func Offset: 0x10
	// Line 1027, Address: 0x10225fc, Func Offset: 0x3c
	// Line 1028, Address: 0x1022638, Func Offset: 0x78
	// Line 1029, Address: 0x1022644, Func Offset: 0x84
	// Line 1031, Address: 0x1022680, Func Offset: 0xc0
	// Line 1032, Address: 0x102269c, Func Offset: 0xdc
	// Func End, Address: 0x10226b0, Func Offset: 0xf0
}

// 
// Start address: 0x10226b0
void gandair3_ridechk(_anon0* floorwk)
{
	// Line 1035, Address: 0x10226b0, Func Offset: 0
	// Line 1036, Address: 0x10226bc, Func Offset: 0xc
	// Line 1037, Address: 0x10226d0, Func Offset: 0x20
	// Func End, Address: 0x10226e0, Func Offset: 0x30
}

// 
// Start address: 0x10226e0
void gandair3_init(_anon0* corewk)
{
	// Line 1041, Address: 0x10226e0, Func Offset: 0
	// Line 1042, Address: 0x10226e8, Func Offset: 0x8
	// Line 1044, Address: 0x10226f8, Func Offset: 0x18
	// Line 1045, Address: 0x1022704, Func Offset: 0x24
	// Line 1046, Address: 0x1022714, Func Offset: 0x34
	// Line 1047, Address: 0x1022720, Func Offset: 0x40
	// Line 1048, Address: 0x102272c, Func Offset: 0x4c
	// Line 1049, Address: 0x102273c, Func Offset: 0x5c
	// Line 1050, Address: 0x102274c, Func Offset: 0x6c
	// Line 1051, Address: 0x1022758, Func Offset: 0x78
	// Line 1052, Address: 0x1022768, Func Offset: 0x88
	// Func End, Address: 0x1022774, Func Offset: 0x94
}

// 
// Start address: 0x1022780
void gandair3_wait(_anon0* corewk)
{
	short cal_x;
	// Line 1056, Address: 0x1022780, Func Offset: 0
	// Line 1059, Address: 0x1022790, Func Offset: 0x10
	// Line 1061, Address: 0x10227a4, Func Offset: 0x24
	// Line 1062, Address: 0x102280c, Func Offset: 0x8c
	// Line 1064, Address: 0x1022834, Func Offset: 0xb4
	// Line 1067, Address: 0x1022840, Func Offset: 0xc0
	// Line 1069, Address: 0x1022860, Func Offset: 0xe0
	// Line 1070, Address: 0x1022874, Func Offset: 0xf4
	// Line 1071, Address: 0x10228a0, Func Offset: 0x120
	// Line 1072, Address: 0x10228b4, Func Offset: 0x134
	// Line 1073, Address: 0x10228c0, Func Offset: 0x140
	// Line 1076, Address: 0x10228c8, Func Offset: 0x148
	// Line 1077, Address: 0x10228dc, Func Offset: 0x15c
	// Line 1078, Address: 0x10228e8, Func Offset: 0x168
	// Line 1079, Address: 0x10228f8, Func Offset: 0x178
	// Func End, Address: 0x102290c, Func Offset: 0x18c
}

// 
// Start address: 0x1022910
void gandair3_fire(_anon0* corewk)
{
	// Line 1083, Address: 0x1022910, Func Offset: 0
	// Line 1084, Address: 0x102291c, Func Offset: 0xc
	// Line 1085, Address: 0x102294c, Func Offset: 0x3c
	// Line 1088, Address: 0x1022984, Func Offset: 0x74
	// Line 1090, Address: 0x10229b0, Func Offset: 0xa0
	// Line 1091, Address: 0x10229bc, Func Offset: 0xac
	// Line 1092, Address: 0x10229e0, Func Offset: 0xd0
	// Line 1093, Address: 0x10229ec, Func Offset: 0xdc
	// Line 1094, Address: 0x10229fc, Func Offset: 0xec
	// Line 1098, Address: 0x1022a04, Func Offset: 0xf4
	// Line 1099, Address: 0x1022a10, Func Offset: 0x100
	// Line 1100, Address: 0x1022a24, Func Offset: 0x114
	// Line 1101, Address: 0x1022a38, Func Offset: 0x128
	// Line 1102, Address: 0x1022a44, Func Offset: 0x134
	// Line 1103, Address: 0x1022a54, Func Offset: 0x144
	// Func End, Address: 0x1022a64, Func Offset: 0x154
}

// 
// Start address: 0x1022a70
void gandair3_end(_anon0* corewk)
{
	// Line 1107, Address: 0x1022a70, Func Offset: 0
	// Line 1108, Address: 0x1022a7c, Func Offset: 0xc
	// Line 1109, Address: 0x1022a90, Func Offset: 0x20
	// Line 1110, Address: 0x1022aa0, Func Offset: 0x30
	// Line 1111, Address: 0x1022aac, Func Offset: 0x3c
	// Line 1113, Address: 0x1022ab4, Func Offset: 0x44
	// Line 1114, Address: 0x1022ae8, Func Offset: 0x78
	// Line 1116, Address: 0x1022b20, Func Offset: 0xb0
	// Line 1117, Address: 0x1022b34, Func Offset: 0xc4
	// Line 1118, Address: 0x1022b40, Func Offset: 0xd0
	// Line 1120, Address: 0x1022b50, Func Offset: 0xe0
	// Line 1121, Address: 0x1022b5c, Func Offset: 0xec
	// Func End, Address: 0x1022b6c, Func Offset: 0xfc
}

// 
// Start address: 0x1022b70
void gandair3_wait2(_anon0* corewk)
{
	// Line 1125, Address: 0x1022b70, Func Offset: 0
	// Line 1126, Address: 0x1022b7c, Func Offset: 0xc
	// Line 1127, Address: 0x1022ba4, Func Offset: 0x34
	// Line 1128, Address: 0x1022bb4, Func Offset: 0x44
	// Line 1129, Address: 0x1022bc0, Func Offset: 0x50
	// Func End, Address: 0x1022bd0, Func Offset: 0x60
}

// 
// Start address: 0x1022bd0
void gandair3_tamaset(_anon0* corewk)
{
	_anon0* new_actwk;
	// Line 1133, Address: 0x1022bd0, Func Offset: 0
	// Line 1136, Address: 0x1022bdc, Func Offset: 0xc
	// Line 1137, Address: 0x1022bf0, Func Offset: 0x20
	// Line 1139, Address: 0x1022c1c, Func Offset: 0x4c
	// Line 1141, Address: 0x1022c30, Func Offset: 0x60
	// Line 1142, Address: 0x1022c3c, Func Offset: 0x6c
	// Line 1143, Address: 0x1022c48, Func Offset: 0x78
	// Line 1144, Address: 0x1022c6c, Func Offset: 0x9c
	// Line 1146, Address: 0x1022c90, Func Offset: 0xc0
	// Line 1148, Address: 0x1022ca4, Func Offset: 0xd4
	// Line 1149, Address: 0x1022cb0, Func Offset: 0xe0
	// Line 1150, Address: 0x1022cbc, Func Offset: 0xec
	// Line 1151, Address: 0x1022ce0, Func Offset: 0x110
	// Line 1152, Address: 0x1022d04, Func Offset: 0x134
	// Line 1154, Address: 0x1022d10, Func Offset: 0x140
	// Func End, Address: 0x1022d20, Func Offset: 0x150
}

// 
// Start address: 0x1022d20
void gandair3_tama(_anon0* bulletwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 1158, Address: 0x1022d20, Func Offset: 0
	// Line 1159, Address: 0x1022d2c, Func Offset: 0xc
	// Line 1161, Address: 0x1022d48, Func Offset: 0x28
	// Line 1162, Address: 0x1022d84, Func Offset: 0x64
	// Line 1163, Address: 0x1022d90, Func Offset: 0x70
	// Line 1164, Address: 0x1022d9c, Func Offset: 0x7c
	// Func End, Address: 0x1022dac, Func Offset: 0x8c
}

// 
// Start address: 0x1022db0
void gandair3_tami(_anon0* bulletwk)
{
	// Line 1168, Address: 0x1022db0, Func Offset: 0
	// Line 1169, Address: 0x1022dbc, Func Offset: 0xc
	// Line 1171, Address: 0x1022dcc, Func Offset: 0x1c
	// Line 1172, Address: 0x1022dd8, Func Offset: 0x28
	// Line 1173, Address: 0x1022de4, Func Offset: 0x34
	// Line 1174, Address: 0x1022df4, Func Offset: 0x44
	// Line 1175, Address: 0x1022e04, Func Offset: 0x54
	// Line 1176, Address: 0x1022e18, Func Offset: 0x68
	// Line 1177, Address: 0x1022e24, Func Offset: 0x74
	// Line 1178, Address: 0x1022e30, Func Offset: 0x80
	// Line 1179, Address: 0x1022e3c, Func Offset: 0x8c
	// Line 1180, Address: 0x1022e44, Func Offset: 0x94
	// Line 1181, Address: 0x1022e50, Func Offset: 0xa0
	// Line 1182, Address: 0x1022e5c, Func Offset: 0xac
	// Line 1184, Address: 0x1022e68, Func Offset: 0xb8
	// Line 1185, Address: 0x1022e78, Func Offset: 0xc8
	// Line 1186, Address: 0x1022e8c, Func Offset: 0xdc
	// Line 1187, Address: 0x1022e98, Func Offset: 0xe8
	// Func End, Address: 0x1022ea8, Func Offset: 0xf8
}

// 
// Start address: 0x1022eb0
void gandair3_tamm(_anon0* bulletwk)
{
	short cal_x;
	// Line 1190, Address: 0x1022eb0, Func Offset: 0
	// Line 1193, Address: 0x1022ec0, Func Offset: 0x10
	// Line 1194, Address: 0x1022ed8, Func Offset: 0x28
	// Line 1195, Address: 0x1022efc, Func Offset: 0x4c
	// Line 1197, Address: 0x1022f10, Func Offset: 0x60
	// Line 1198, Address: 0x1022f44, Func Offset: 0x94
	// Line 1199, Address: 0x1022f70, Func Offset: 0xc0
	// Line 1201, Address: 0x1022f84, Func Offset: 0xd4
	// Line 1202, Address: 0x1022f8c, Func Offset: 0xdc
	// Line 1203, Address: 0x1022fa0, Func Offset: 0xf0
	// Line 1204, Address: 0x1022fb0, Func Offset: 0x100
	// Line 1207, Address: 0x1022fbc, Func Offset: 0x10c
	// Line 1209, Address: 0x1022fdc, Func Offset: 0x12c
	// Line 1210, Address: 0x1022fe8, Func Offset: 0x138
	// Func End, Address: 0x1022ffc, Func Offset: 0x14c
}

// 
// Start address: 0x1023000
void drumr3(_anon0* drumwk)
{
	unsigned short cal_x;
	void(*tbl)(_anon0*)[4];
	// Line 1257, Address: 0x1023000, Func Offset: 0
	// Line 1259, Address: 0x1023010, Func Offset: 0x10
	// Line 1265, Address: 0x102303c, Func Offset: 0x3c
	// Line 1266, Address: 0x1023078, Func Offset: 0x78
	// Line 1268, Address: 0x1023084, Func Offset: 0x84
	// Line 1270, Address: 0x10230c0, Func Offset: 0xc0
	// Line 1271, Address: 0x10230dc, Func Offset: 0xdc
	// Func End, Address: 0x10230f0, Func Offset: 0xf0
}

// 
// Start address: 0x10230f0
void drumr3_ridechk(_anon0* drumwk)
{
	// Line 1274, Address: 0x10230f0, Func Offset: 0
	// Line 1275, Address: 0x10230fc, Func Offset: 0xc
	// Line 1277, Address: 0x1023114, Func Offset: 0x24
	// Line 1278, Address: 0x1023128, Func Offset: 0x38
	// Line 1279, Address: 0x102314c, Func Offset: 0x5c
	// Line 1281, Address: 0x1023188, Func Offset: 0x98
	// Line 1282, Address: 0x102319c, Func Offset: 0xac
	// Func End, Address: 0x10231ac, Func Offset: 0xbc
}

// 
// Start address: 0x10231b0
void drumr3_init(_anon0* drumwk)
{
	// Line 1286, Address: 0x10231b0, Func Offset: 0
	// Line 1287, Address: 0x10231b8, Func Offset: 0x8
	// Line 1289, Address: 0x10231c8, Func Offset: 0x18
	// Line 1290, Address: 0x10231d4, Func Offset: 0x24
	// Line 1291, Address: 0x10231e4, Func Offset: 0x34
	// Line 1292, Address: 0x10231f0, Func Offset: 0x40
	// Line 1293, Address: 0x1023200, Func Offset: 0x50
	// Line 1294, Address: 0x1023210, Func Offset: 0x60
	// Line 1295, Address: 0x1023220, Func Offset: 0x70
	// Line 1296, Address: 0x1023230, Func Offset: 0x80
	// Line 1297, Address: 0x102325c, Func Offset: 0xac
	// Line 1298, Address: 0x1023288, Func Offset: 0xd8
	// Func End, Address: 0x1023294, Func Offset: 0xe4
}

// 
// Start address: 0x10232a0
void drumr3_move1(_anon0* drumwk)
{
	// Line 1302, Address: 0x10232a0, Func Offset: 0
	// Line 1304, Address: 0x10232ac, Func Offset: 0xc
	// Line 1305, Address: 0x10232c0, Func Offset: 0x20
	// Line 1306, Address: 0x10232d4, Func Offset: 0x34
	// Line 1307, Address: 0x10232e0, Func Offset: 0x40
	// Line 1309, Address: 0x10232e8, Func Offset: 0x48
	// Line 1310, Address: 0x10232fc, Func Offset: 0x5c
	// Line 1312, Address: 0x1023320, Func Offset: 0x80
	// Line 1313, Address: 0x102332c, Func Offset: 0x8c
	// Line 1315, Address: 0x102334c, Func Offset: 0xac
	// Line 1316, Address: 0x1023370, Func Offset: 0xd0
	// Line 1317, Address: 0x1023380, Func Offset: 0xe0
	// Func End, Address: 0x1023390, Func Offset: 0xf0
}

// 
// Start address: 0x1023390
void drumr3_move2(_anon0* drumwk)
{
	// Line 1321, Address: 0x1023390, Func Offset: 0
	// Line 1323, Address: 0x102339c, Func Offset: 0xc
	// Line 1324, Address: 0x10233a8, Func Offset: 0x18
	// Line 1325, Address: 0x10233bc, Func Offset: 0x2c
	// Line 1327, Address: 0x10233d0, Func Offset: 0x40
	// Line 1328, Address: 0x10233e4, Func Offset: 0x54
	// Line 1330, Address: 0x1023408, Func Offset: 0x78
	// Line 1331, Address: 0x1023414, Func Offset: 0x84
	// Line 1333, Address: 0x1023434, Func Offset: 0xa4
	// Line 1334, Address: 0x1023458, Func Offset: 0xc8
	// Line 1335, Address: 0x1023468, Func Offset: 0xd8
	// Func End, Address: 0x1023478, Func Offset: 0xe8
}

// 
// Start address: 0x1023480
void drumr3_move3(_anon0* drumwk)
{
	// Line 1339, Address: 0x1023480, Func Offset: 0
	// Line 1341, Address: 0x102348c, Func Offset: 0xc
	// Line 1342, Address: 0x10234a0, Func Offset: 0x20
	// Line 1343, Address: 0x10234b4, Func Offset: 0x34
	// Line 1344, Address: 0x10234c0, Func Offset: 0x40
	// Line 1346, Address: 0x10234c8, Func Offset: 0x48
	// Line 1347, Address: 0x10234dc, Func Offset: 0x5c
	// Line 1349, Address: 0x1023500, Func Offset: 0x80
	// Line 1350, Address: 0x102350c, Func Offset: 0x8c
	// Line 1351, Address: 0x102352c, Func Offset: 0xac
	// Line 1352, Address: 0x1023550, Func Offset: 0xd0
	// Line 1353, Address: 0x1023564, Func Offset: 0xe4
	// Line 1354, Address: 0x1023570, Func Offset: 0xf0
	// Func End, Address: 0x1023580, Func Offset: 0x100
}

// 
// Start address: 0x1023580
void drumr3_addspd(_anon0* drumwk)
{
	// Line 1358, Address: 0x1023580, Func Offset: 0
	// Line 1359, Address: 0x1023588, Func Offset: 0x8
	// Line 1360, Address: 0x1023598, Func Offset: 0x18
	// Line 1361, Address: 0x10235bc, Func Offset: 0x3c
	// Func End, Address: 0x10235c8, Func Offset: 0x48
}

// 
// Start address: 0x10235d0
void drumr3_cntset(_anon0* drumwk)
{
	unsigned char drumr3_mvtbl[54];
	// Line 1365, Address: 0x10235d0, Func Offset: 0
	// Line 1367, Address: 0x10235dc, Func Offset: 0xc
	// Line 1388, Address: 0x1023610, Func Offset: 0x40
	// Line 1390, Address: 0x1023634, Func Offset: 0x64
	// Line 1391, Address: 0x102365c, Func Offset: 0x8c
	// Line 1392, Address: 0x1023684, Func Offset: 0xb4
	// Line 1393, Address: 0x1023690, Func Offset: 0xc0
	// Line 1394, Address: 0x102369c, Func Offset: 0xcc
	// Func End, Address: 0x10236ac, Func Offset: 0xdc
}

// 
// Start address: 0x10236b0
void drumr3_priset(_anon0* drumwk)
{
	unsigned char tbl[12];
	// Line 1398, Address: 0x10236b0, Func Offset: 0
	// Line 1399, Address: 0x10236b8, Func Offset: 0x8
	// Line 1401, Address: 0x10236ec, Func Offset: 0x3c
	// Line 1402, Address: 0x1023708, Func Offset: 0x58
	// Func End, Address: 0x1023714, Func Offset: 0x64
}

// 
// Start address: 0x1023720
void tr3_fout(_anon0* thingwk)
{
	unsigned short flagwork_no;
	// Line 1410, Address: 0x1023720, Func Offset: 0
	// Line 1413, Address: 0x1023730, Func Offset: 0x10
	// Line 1414, Address: 0x1023750, Func Offset: 0x30
	// Line 1415, Address: 0x1023778, Func Offset: 0x58
	// Line 1418, Address: 0x1023794, Func Offset: 0x74
	// Line 1419, Address: 0x10237a0, Func Offset: 0x80
	// Func End, Address: 0x10237b4, Func Offset: 0x94
}

