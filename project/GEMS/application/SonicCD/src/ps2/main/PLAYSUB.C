typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;


typedef _anon9 type_0[20];
typedef _anon0* type_1[0];
typedef _anon9 type_2[0];
typedef unsigned char* type_3[0];
typedef unsigned char* type_4[4];
typedef _anon0* type_5[0];
typedef unsigned char type_6[6];
typedef unsigned char* type_7[0];
typedef unsigned char type_8[4];
typedef _anon0* type_9[0];
typedef unsigned char* type_10[0];
typedef _anon2 type_11[192];
typedef unsigned char type_12[2];
typedef _anon0* type_13[8];
typedef unsigned char type_14[22];
typedef unsigned char type_15[3];
typedef short type_16[128];
typedef unsigned char type_17[4];
typedef unsigned char type_18[6];
typedef unsigned char type_19[766];
typedef _anon1 type_20[128];
typedef _anon0* type_21[0];
typedef unsigned char* type_22[0];
typedef _anon0* type_23[0];
typedef unsigned char* type_24[0];
typedef _anon0* type_25[0];
typedef unsigned char* type_26[0];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
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

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char chibi_s;
unsigned char chibi_flag;
int pltime_s;
_anon2 pltime;
unsigned char waterflag_s;
unsigned char waterflag;
short waterposi_m_s;
short waterposi_m;
short scrz_v_posit_s;
_anon2 scrz_v_posit;
short scrz_h_posit_s;
_anon2 scrz_h_posit;
short scrc_v_posit_s;
_anon2 scrc_v_posit;
short scrc_h_posit_s;
_anon2 scrc_h_posit;
short scrb_v_posit_s;
_anon2 scrb_v_posit;
short scrb_h_posit_s;
_anon2 scrb_h_posit;
short scra_v_posit_s;
_anon2 scra_v_posit;
short scra_h_posit_s;
_anon2 scra_h_posit;
short scralim_down_s;
short scralim_down;
unsigned char water_flag_s;
unsigned char water_flag;
short plyposi_s;
short plxposi_s;
unsigned char plflag_s;
unsigned char plflag;
_anon0* markerpat[0];
unsigned char markerno;
_anon1 actwk[128];
unsigned char* markerchg[0];
_anon0* bariapat[0];
unsigned char* bariachg[0];
_anon0* bakupat[0];
unsigned char* bakuchg[0];
unsigned char flowchg0[4];
unsigned char flowchg1[6];
unsigned char flowchg2[6];
unsigned char flowchg3[4];
unsigned char* flowchg[4];
_anon0 flo00;
_anon0 flo01;
_anon0 flo02;
_anon0 flo03;
_anon0 flo04;
_anon0 flo05;
_anon0 flo06;
_anon0 flo07;
_anon0* flow_pat[8];
unsigned char flagworkcnt;
_anon2 flowerposi[192];
unsigned char flowercnt[3];
unsigned char time_flag;
unsigned char flagwork[766];
_anon0* mizukipat[0];
unsigned char* mizukichg[0];
_anon0* futapat[0];
unsigned char* futachg[0];
_anon0* exit2pat[0];
unsigned char* exit2chg[0];
_anon5 stageno;
unsigned char prio_flag;
unsigned char plpower_m;
unsigned char plpower_a;
unsigned char plpower_b;
short playposiwk[128];
_anon7 plposiwkadr;
unsigned char plsubchg_flag;
_anon7 swdata1;
_anon5 editmode;

void patchg(_anon1* patchgwk, unsigned char** pat_dat);
void playsave0(_anon1* savewk);
void marker(_anon1* markerwk);
void marker_init(_anon1* markerwk);
void marker_move0(_anon1* markerwk);
void marker_move1(_anon1* markerwk);
void marker_move2(_anon1* markerwk);
void plairset();
void test_act(_anon1* testwk);
void test_init(_anon1* testwk);
void test_move(_anon1* testwk);
void tensuu_set(_anon1* tensuuwk);
void tensuu0(_anon1* tensuuwk, unsigned char uf_data);
void bakuha(_anon1* bakuhawk);
void baku_init(_anon1* bakuhawk);
void baku_move(_anon1* bakuhawk);
void baku_die(_anon1* bakuhawk);
void flower(_anon1* flowerwk);
void flow_init(_anon1* flowerwk);
void flow_move0(_anon1* flowerwk);
void flow_move1(_anon1* flowerwk);
unsigned char* flow_sub(_anon1* flowerwk);
short flow_sub1(unsigned char fl_counter);
void flow_move2(_anon1* flowerwk);
void flow_move3(_anon1* flowerwk);
void mizukiri(_anon1* mizukiwk);
void mizuki_init(_anon1* mizukiwk);
void mizuki_move(_anon1* mizukiwk);
void mizuki_move2(_anon1* mizukiwk);
void futa(_anon1* futawk);
void ride_on_chk_f(_anon1* futawk, _anon1* sonicwk);
void futa_init(_anon1* futawk);
void futa_move(_anon1* futawk);
void futa_move2(_anon1* futawk);
void futa_move3(_anon1* futawk);
void exit2_set(_anon1* testwk);
char col_chk(_anon1* thingwk, _anon1* sonicwk);
void exit2(_anon1* exitwk);
void exit2_init(_anon1* exitwk);
void exit2_move(_anon1* exitwk);
void exit2_erase(_anon1* exitwk);
void baria(_anon1* bariawk);
void bariainit(_anon1* bariawk);
void bariamove(_anon1* bariawk);
void mutekimove(_anon1* bariawk);
void backtomove(_anon1* bariawk);
void muteki_sub(_anon1* bariawk);
void actionsub0(_anon1* bariawk);
void ball(_anon1* ballwk);
void ball_init(_anon1* ballwk);
void ball_move(_anon1* ballwk);
void ball_ball();
void ball_rd7(_anon1* ballwk);
unsigned char ball_coli(_anon1* ballwk);

// 
// Start address: 0x10150d0
void patchg(_anon1* patchgwk, unsigned char** pat_dat)
{
	unsigned char pat_no;
	unsigned char* sprpat_adr;
	short search_end;
	// Line 24, Address: 0x10150d0, Func Offset: 0
	// Line 29, Address: 0x10150f0, Func Offset: 0x20
	// Line 30, Address: 0x1015118, Func Offset: 0x48
	// Line 31, Address: 0x1015128, Func Offset: 0x58
	// Line 34, Address: 0x101513c, Func Offset: 0x6c
	// Line 35, Address: 0x1015168, Func Offset: 0x98
	// Line 37, Address: 0x1015188, Func Offset: 0xb8
	// Line 38, Address: 0x101518c, Func Offset: 0xbc
	// Line 39, Address: 0x10151bc, Func Offset: 0xec
	// Line 43, Address: 0x1015220, Func Offset: 0x150
	// Line 45, Address: 0x101524c, Func Offset: 0x17c
	// Line 46, Address: 0x1015260, Func Offset: 0x190
	// Line 48, Address: 0x1015268, Func Offset: 0x198
	// Line 49, Address: 0x1015278, Func Offset: 0x1a8
	// Line 50, Address: 0x1015280, Func Offset: 0x1b0
	// Line 51, Address: 0x1015290, Func Offset: 0x1c0
	// Line 52, Address: 0x10152a0, Func Offset: 0x1d0
	// Line 53, Address: 0x10152b0, Func Offset: 0x1e0
	// Line 55, Address: 0x10152b8, Func Offset: 0x1e8
	// Line 57, Address: 0x10152e8, Func Offset: 0x218
	// Line 58, Address: 0x10152f0, Func Offset: 0x220
	// Line 59, Address: 0x10152f8, Func Offset: 0x228
	// Line 62, Address: 0x1015300, Func Offset: 0x230
	// Line 63, Address: 0x101531c, Func Offset: 0x24c
	// Line 64, Address: 0x101533c, Func Offset: 0x26c
	// Line 65, Address: 0x1015358, Func Offset: 0x288
	// Line 68, Address: 0x1015360, Func Offset: 0x290
	// Line 69, Address: 0x1015380, Func Offset: 0x2b0
	// Line 71, Address: 0x1015388, Func Offset: 0x2b8
	// Line 72, Address: 0x1015398, Func Offset: 0x2c8
	// Line 74, Address: 0x10153a0, Func Offset: 0x2d0
	// Line 75, Address: 0x10153b4, Func Offset: 0x2e4
	// Line 77, Address: 0x10153bc, Func Offset: 0x2ec
	// Line 82, Address: 0x10153cc, Func Offset: 0x2fc
	// Func End, Address: 0x10153ec, Func Offset: 0x31c
}

// 
// Start address: 0x10153f0
void playsave0(_anon1* savewk)
{
	// Line 86, Address: 0x10153f0, Func Offset: 0
	// Line 87, Address: 0x10153f8, Func Offset: 0x8
	// Line 88, Address: 0x1015408, Func Offset: 0x18
	// Line 89, Address: 0x1015418, Func Offset: 0x28
	// Line 90, Address: 0x1015428, Func Offset: 0x38
	// Line 91, Address: 0x1015438, Func Offset: 0x48
	// Line 92, Address: 0x1015448, Func Offset: 0x58
	// Line 93, Address: 0x1015458, Func Offset: 0x68
	// Line 94, Address: 0x1015468, Func Offset: 0x78
	// Line 95, Address: 0x1015478, Func Offset: 0x88
	// Line 96, Address: 0x1015488, Func Offset: 0x98
	// Line 97, Address: 0x1015498, Func Offset: 0xa8
	// Line 98, Address: 0x10154a8, Func Offset: 0xb8
	// Line 99, Address: 0x10154b8, Func Offset: 0xc8
	// Line 100, Address: 0x10154c8, Func Offset: 0xd8
	// Line 101, Address: 0x10154d8, Func Offset: 0xe8
	// Line 102, Address: 0x10154e8, Func Offset: 0xf8
	// Line 103, Address: 0x1015514, Func Offset: 0x124
	// Line 104, Address: 0x1015524, Func Offset: 0x134
	// Line 105, Address: 0x1015534, Func Offset: 0x144
	// Func End, Address: 0x1015540, Func Offset: 0x150
}

// 
// Start address: 0x1015540
void marker(_anon1* markerwk)
{
	// Line 119, Address: 0x1015540, Func Offset: 0
	// Line 120, Address: 0x101554c, Func Offset: 0xc
	// Line 122, Address: 0x101558c, Func Offset: 0x4c
	// Line 123, Address: 0x1015598, Func Offset: 0x58
	// Line 125, Address: 0x10155a0, Func Offset: 0x60
	// Line 126, Address: 0x10155ac, Func Offset: 0x6c
	// Line 128, Address: 0x10155b4, Func Offset: 0x74
	// Line 129, Address: 0x10155c0, Func Offset: 0x80
	// Line 131, Address: 0x10155c8, Func Offset: 0x88
	// Line 136, Address: 0x10155d4, Func Offset: 0x94
	// Line 137, Address: 0x10155e0, Func Offset: 0xa0
	// Line 138, Address: 0x10155ec, Func Offset: 0xac
	// Func End, Address: 0x10155fc, Func Offset: 0xbc
}

// 
// Start address: 0x1015600
void marker_init(_anon1* markerwk)
{
	_anon1* new_actwk;
	_anon1** parent;
	unsigned short marker_yposi_m_buf;
	// Line 141, Address: 0x1015600, Func Offset: 0
	// Line 145, Address: 0x1015614, Func Offset: 0x14
	// Line 146, Address: 0x1015624, Func Offset: 0x24
	// Line 147, Address: 0x1015634, Func Offset: 0x34
	// Line 148, Address: 0x1015640, Func Offset: 0x40
	// Line 149, Address: 0x101564c, Func Offset: 0x4c
	// Line 150, Address: 0x1015658, Func Offset: 0x58
	// Line 151, Address: 0x1015664, Func Offset: 0x64
	// Line 153, Address: 0x1015670, Func Offset: 0x70
	// Line 154, Address: 0x1015698, Func Offset: 0x98
	// Line 156, Address: 0x10156ac, Func Offset: 0xac
	// Line 157, Address: 0x10156b8, Func Offset: 0xb8
	// Line 158, Address: 0x10156e0, Func Offset: 0xe0
	// Line 159, Address: 0x10156ec, Func Offset: 0xec
	// Line 160, Address: 0x10156fc, Func Offset: 0xfc
	// Line 161, Address: 0x1015720, Func Offset: 0x120
	// Line 162, Address: 0x1015730, Func Offset: 0x130
	// Line 163, Address: 0x101573c, Func Offset: 0x13c
	// Line 164, Address: 0x1015748, Func Offset: 0x148
	// Line 165, Address: 0x1015754, Func Offset: 0x154
	// Line 166, Address: 0x1015760, Func Offset: 0x160
	// Line 167, Address: 0x101576c, Func Offset: 0x16c
	// Line 168, Address: 0x1015778, Func Offset: 0x178
	// Line 169, Address: 0x1015780, Func Offset: 0x180
	// Line 170, Address: 0x1015788, Func Offset: 0x188
	// Line 171, Address: 0x1015798, Func Offset: 0x198
	// Line 172, Address: 0x10157bc, Func Offset: 0x1bc
	// Line 173, Address: 0x10157cc, Func Offset: 0x1cc
	// Line 174, Address: 0x10157e8, Func Offset: 0x1e8
	// Line 175, Address: 0x10157f0, Func Offset: 0x1f0
	// Func End, Address: 0x1015808, Func Offset: 0x208
}

// 
// Start address: 0x1015810
void marker_move0(_anon1* markerwk)
{
	// Line 178, Address: 0x1015810, Func Offset: 0
	// Line 181, Address: 0x101581c, Func Offset: 0xc
	// Line 189, Address: 0x1015830, Func Offset: 0x20
	// Line 190, Address: 0x1015844, Func Offset: 0x34
	// Line 191, Address: 0x101584c, Func Offset: 0x3c
	// Line 192, Address: 0x1015858, Func Offset: 0x48
	// Line 193, Address: 0x1015868, Func Offset: 0x58
	// Line 194, Address: 0x1015874, Func Offset: 0x64
	// Line 195, Address: 0x1015884, Func Offset: 0x74
	// Line 196, Address: 0x1015890, Func Offset: 0x80
	// Func End, Address: 0x10158a0, Func Offset: 0x90
}

// 
// Start address: 0x10158a0
void marker_move1(_anon1* markerwk)
{
	int sin_data;
	int cos_data;
	short sin_tmp;
	short cos_tmp;
	_anon1** parent;
	_anon1* new_actwk;
	// Line 199, Address: 0x10158a0, Func Offset: 0
	// Line 204, Address: 0x10158bc, Func Offset: 0x1c
	// Line 205, Address: 0x10158d0, Func Offset: 0x30
	// Line 206, Address: 0x10158d8, Func Offset: 0x38
	// Line 207, Address: 0x10158dc, Func Offset: 0x3c
	// Line 208, Address: 0x10158ec, Func Offset: 0x4c
	// Line 211, Address: 0x10158f8, Func Offset: 0x58
	// Line 212, Address: 0x1015908, Func Offset: 0x68
	// Line 213, Address: 0x1015920, Func Offset: 0x80
	// Line 214, Address: 0x101592c, Func Offset: 0x8c
	// Line 215, Address: 0x1015938, Func Offset: 0x98
	// Line 216, Address: 0x101593c, Func Offset: 0x9c
	// Line 217, Address: 0x1015958, Func Offset: 0xb8
	// Line 218, Address: 0x1015968, Func Offset: 0xc8
	// Line 219, Address: 0x1015980, Func Offset: 0xe0
	// Line 220, Address: 0x1015988, Func Offset: 0xe8
	// Line 221, Address: 0x10159a4, Func Offset: 0x104
	// Line 222, Address: 0x10159b4, Func Offset: 0x114
	// Line 223, Address: 0x10159cc, Func Offset: 0x12c
	// Line 224, Address: 0x10159f0, Func Offset: 0x150
	// Func End, Address: 0x1015a10, Func Offset: 0x170
}

// 
// Start address: 0x1015a10
void marker_move2(_anon1* markerwk)
{
	// Line 227, Address: 0x1015a10, Func Offset: 0
	// Line 228, Address: 0x1015a1c, Func Offset: 0xc
	// Line 229, Address: 0x1015a30, Func Offset: 0x20
	// Func End, Address: 0x1015a40, Func Offset: 0x30
}

// 
// Start address: 0x1015a40
void plairset()
{
	// Line 236, Address: 0x1015a40, Func Offset: 0
	// Func End, Address: 0x1015a48, Func Offset: 0x8
}

// 
// Start address: 0x1015a50
void test_act(_anon1* testwk)
{
	// Line 240, Address: 0x1015a50, Func Offset: 0
	// Line 241, Address: 0x1015a5c, Func Offset: 0xc
	// Line 243, Address: 0x1015a84, Func Offset: 0x34
	// Line 244, Address: 0x1015a90, Func Offset: 0x40
	// Line 246, Address: 0x1015a98, Func Offset: 0x48
	// Line 251, Address: 0x1015aa4, Func Offset: 0x54
	// Func End, Address: 0x1015ab4, Func Offset: 0x64
}

// 
// Start address: 0x1015ac0
void test_init(_anon1* testwk)
{
	// Line 255, Address: 0x1015ac0, Func Offset: 0
	// Line 256, Address: 0x1015acc, Func Offset: 0xc
	// Line 257, Address: 0x1015af8, Func Offset: 0x38
	// Line 258, Address: 0x1015b08, Func Offset: 0x48
	// Line 259, Address: 0x1015b14, Func Offset: 0x54
	// Line 260, Address: 0x1015b20, Func Offset: 0x60
	// Line 261, Address: 0x1015b30, Func Offset: 0x70
	// Line 262, Address: 0x1015b3c, Func Offset: 0x7c
	// Line 263, Address: 0x1015b4c, Func Offset: 0x8c
	// Line 264, Address: 0x1015b5c, Func Offset: 0x9c
	// Line 265, Address: 0x1015b68, Func Offset: 0xa8
	// Line 266, Address: 0x1015b74, Func Offset: 0xb4
	// Func End, Address: 0x1015b84, Func Offset: 0xc4
}

// 
// Start address: 0x1015b90
void test_move(_anon1* testwk)
{
	unsigned short cal0;
	unsigned short cal1;
	// Line 269, Address: 0x1015b90, Func Offset: 0
	// Line 272, Address: 0x1015ba4, Func Offset: 0x14
	// Line 273, Address: 0x1015bbc, Func Offset: 0x2c
	// Line 274, Address: 0x1015be4, Func Offset: 0x54
	// Line 276, Address: 0x1015c10, Func Offset: 0x80
	// Line 277, Address: 0x1015c24, Func Offset: 0x94
	// Line 278, Address: 0x1015c30, Func Offset: 0xa0
	// Func End, Address: 0x1015c48, Func Offset: 0xb8
}

// 
// Start address: 0x1015c50
void tensuu_set(_anon1* tensuuwk)
{
	unsigned char score_tmp;
	// Line 282, Address: 0x1015c50, Func Offset: 0
	// Line 285, Address: 0x1015c60, Func Offset: 0x10
	// Line 286, Address: 0x1015c74, Func Offset: 0x24
	// Line 287, Address: 0x1015c84, Func Offset: 0x34
	// Line 288, Address: 0x1015cb0, Func Offset: 0x60
	// Func End, Address: 0x1015cc4, Func Offset: 0x74
}

// 
// Start address: 0x1015cd0
void tensuu0(_anon1* tensuuwk, unsigned char uf_data)
{
	_anon1* new_actwk;
	// Line 291, Address: 0x1015cd0, Func Offset: 0
	// Line 294, Address: 0x1015ce0, Func Offset: 0x10
	// Line 295, Address: 0x1015cec, Func Offset: 0x1c
	// Line 296, Address: 0x1015d00, Func Offset: 0x30
	// Line 297, Address: 0x1015d0c, Func Offset: 0x3c
	// Line 298, Address: 0x1015d1c, Func Offset: 0x4c
	// Line 299, Address: 0x1015d2c, Func Offset: 0x5c
	// Line 300, Address: 0x1015d38, Func Offset: 0x68
	// Func End, Address: 0x1015d48, Func Offset: 0x78
}

// 
// Start address: 0x1015d50
void bakuha(_anon1* bakuhawk)
{
	// Line 309, Address: 0x1015d50, Func Offset: 0
	// Line 310, Address: 0x1015d5c, Func Offset: 0xc
	// Line 312, Address: 0x1015d90, Func Offset: 0x40
	// Line 313, Address: 0x1015d9c, Func Offset: 0x4c
	// Line 315, Address: 0x1015da4, Func Offset: 0x54
	// Line 316, Address: 0x1015db0, Func Offset: 0x60
	// Line 318, Address: 0x1015db8, Func Offset: 0x68
	// Line 323, Address: 0x1015dc4, Func Offset: 0x74
	// Func End, Address: 0x1015dd4, Func Offset: 0x84
}

// 
// Start address: 0x1015de0
void baku_init(_anon1* bakuhawk)
{
	// Line 326, Address: 0x1015de0, Func Offset: 0
	// Line 327, Address: 0x1015dec, Func Offset: 0xc
	// Line 328, Address: 0x1015dfc, Func Offset: 0x1c
	// Line 329, Address: 0x1015e0c, Func Offset: 0x2c
	// Line 330, Address: 0x1015e18, Func Offset: 0x38
	// Line 331, Address: 0x1015e24, Func Offset: 0x44
	// Line 333, Address: 0x1015e4c, Func Offset: 0x6c
	// Line 334, Address: 0x1015e5c, Func Offset: 0x7c
	// Line 335, Address: 0x1015e68, Func Offset: 0x88
	// Line 336, Address: 0x1015e70, Func Offset: 0x90
	// Line 337, Address: 0x1015e78, Func Offset: 0x98
	// Line 338, Address: 0x1015e80, Func Offset: 0xa0
	// Line 339, Address: 0x1015e88, Func Offset: 0xa8
	// Line 340, Address: 0x1015eac, Func Offset: 0xcc
	// Line 341, Address: 0x1015eb8, Func Offset: 0xd8
	// Func End, Address: 0x1015ec8, Func Offset: 0xe8
}

// 
// Start address: 0x1015ed0
void baku_move(_anon1* bakuhawk)
{
	// Line 344, Address: 0x1015ed0, Func Offset: 0
	// Line 345, Address: 0x1015edc, Func Offset: 0xc
	// Line 346, Address: 0x1015ef0, Func Offset: 0x20
	// Line 347, Address: 0x1015efc, Func Offset: 0x2c
	// Func End, Address: 0x1015f0c, Func Offset: 0x3c
}

// 
// Start address: 0x1015f10
void baku_die(_anon1* bakuhawk)
{
	// Line 350, Address: 0x1015f10, Func Offset: 0
	// Line 351, Address: 0x1015f1c, Func Offset: 0xc
	// Line 352, Address: 0x1015f44, Func Offset: 0x34
	// Line 353, Address: 0x1015f50, Func Offset: 0x40
	// Line 354, Address: 0x1015f58, Func Offset: 0x48
	// Func End, Address: 0x1015f68, Func Offset: 0x58
}

// 
// Start address: 0x1015f70
void flower(_anon1* flowerwk)
{
	// Line 403, Address: 0x1015f70, Func Offset: 0
	// Line 404, Address: 0x1015f7c, Func Offset: 0xc
	// Line 406, Address: 0x1015fc8, Func Offset: 0x58
	// Line 407, Address: 0x1015fd4, Func Offset: 0x64
	// Line 409, Address: 0x1015fdc, Func Offset: 0x6c
	// Line 410, Address: 0x1015fe8, Func Offset: 0x78
	// Line 412, Address: 0x1015ff0, Func Offset: 0x80
	// Line 413, Address: 0x1015ffc, Func Offset: 0x8c
	// Line 415, Address: 0x1016004, Func Offset: 0x94
	// Line 416, Address: 0x1016010, Func Offset: 0xa0
	// Line 418, Address: 0x1016018, Func Offset: 0xa8
	// Line 423, Address: 0x1016024, Func Offset: 0xb4
	// Line 424, Address: 0x1016030, Func Offset: 0xc0
	// Func End, Address: 0x1016040, Func Offset: 0xd0
}

// 
// Start address: 0x1016040
void flow_init(_anon1* flowerwk)
{
	unsigned char* fwcnt_adr;
	// Line 428, Address: 0x1016040, Func Offset: 0
	// Line 430, Address: 0x1016050, Func Offset: 0x10
	// Line 432, Address: 0x1016058, Func Offset: 0x18
	// Line 433, Address: 0x1016068, Func Offset: 0x28
	// Line 434, Address: 0x1016074, Func Offset: 0x34
	// Line 435, Address: 0x101607c, Func Offset: 0x3c
	// Line 437, Address: 0x1016088, Func Offset: 0x48
	// Line 439, Address: 0x10160b0, Func Offset: 0x70
	// Line 440, Address: 0x10160c0, Func Offset: 0x80
	// Line 441, Address: 0x10160d8, Func Offset: 0x98
	// Line 442, Address: 0x10160e8, Func Offset: 0xa8
	// Line 443, Address: 0x10160f4, Func Offset: 0xb4
	// Line 444, Address: 0x1016100, Func Offset: 0xc0
	// Line 446, Address: 0x1016128, Func Offset: 0xe8
	// Line 447, Address: 0x1016134, Func Offset: 0xf4
	// Line 448, Address: 0x1016140, Func Offset: 0x100
	// Line 449, Address: 0x101614c, Func Offset: 0x10c
	// Line 450, Address: 0x1016158, Func Offset: 0x118
	// Func End, Address: 0x101616c, Func Offset: 0x12c
}

// 
// Start address: 0x1016170
void flow_move0(_anon1* flowerwk)
{
	short y_move;
	short flower_index;
	unsigned char* fwcnt_adr;
	// Line 453, Address: 0x1016170, Func Offset: 0
	// Line 454, Address: 0x1016188, Func Offset: 0x18
	// Line 457, Address: 0x1016190, Func Offset: 0x20
	// Line 458, Address: 0x10161a4, Func Offset: 0x34
	// Line 459, Address: 0x10161b4, Func Offset: 0x44
	// Line 460, Address: 0x10161c4, Func Offset: 0x54
	// Line 461, Address: 0x10161dc, Func Offset: 0x6c
	// Line 462, Address: 0x10161ec, Func Offset: 0x7c
	// Line 463, Address: 0x1016224, Func Offset: 0xb4
	// Line 464, Address: 0x1016248, Func Offset: 0xd8
	// Line 466, Address: 0x101626c, Func Offset: 0xfc
	// Line 467, Address: 0x1016278, Func Offset: 0x108
	// Line 468, Address: 0x1016284, Func Offset: 0x114
	// Line 469, Address: 0x1016290, Func Offset: 0x120
	// Line 470, Address: 0x101629c, Func Offset: 0x12c
	// Line 471, Address: 0x10162a4, Func Offset: 0x134
	// Line 472, Address: 0x10162b4, Func Offset: 0x144
	// Line 475, Address: 0x10162c0, Func Offset: 0x150
	// Func End, Address: 0x10162dc, Func Offset: 0x16c
}

// 
// Start address: 0x10162e0
void flow_move1(_anon1* flowerwk)
{
	// Line 478, Address: 0x10162e0, Func Offset: 0
	// Line 479, Address: 0x10162ec, Func Offset: 0xc
	// Line 480, Address: 0x1016300, Func Offset: 0x20
	// Func End, Address: 0x1016310, Func Offset: 0x30
}

// 
// Start address: 0x1016310
unsigned char* flow_sub(_anon1* flowerwk)
{
	short index;
	// Line 483, Address: 0x1016310, Func Offset: 0
	// Line 486, Address: 0x101631c, Func Offset: 0xc
	// Line 487, Address: 0x1016364, Func Offset: 0x54
	// Line 488, Address: 0x1016378, Func Offset: 0x68
	// Func End, Address: 0x1016388, Func Offset: 0x78
}

// 
// Start address: 0x1016390
short flow_sub1(unsigned char fl_counter)
{
	short flower_index;
	// Line 491, Address: 0x1016390, Func Offset: 0
	// Line 494, Address: 0x101639c, Func Offset: 0xc
	// Line 497, Address: 0x10163dc, Func Offset: 0x4c
	// Line 498, Address: 0x10163e0, Func Offset: 0x50
	// Func End, Address: 0x10163f0, Func Offset: 0x60
}

// 
// Start address: 0x10163f0
void flow_move2(_anon1* flowerwk)
{
	// Line 501, Address: 0x10163f0, Func Offset: 0
	// Line 502, Address: 0x10163fc, Func Offset: 0xc
	// Line 504, Address: 0x1016408, Func Offset: 0x18
	// Line 505, Address: 0x1016414, Func Offset: 0x24
	// Line 506, Address: 0x1016420, Func Offset: 0x30
	// Func End, Address: 0x1016430, Func Offset: 0x40
}

// 
// Start address: 0x1016430
void flow_move3(_anon1* flowerwk)
{
	// Line 509, Address: 0x1016430, Func Offset: 0
	// Line 510, Address: 0x101643c, Func Offset: 0xc
	// Line 511, Address: 0x1016448, Func Offset: 0x18
	// Line 512, Address: 0x1016454, Func Offset: 0x24
	// Line 513, Address: 0x1016460, Func Offset: 0x30
	// Func End, Address: 0x1016470, Func Offset: 0x40
}

// 
// Start address: 0x1016470
void mizukiri(_anon1* mizukiwk)
{
	// Line 521, Address: 0x1016470, Func Offset: 0
	// Line 522, Address: 0x101647c, Func Offset: 0xc
	// Line 524, Address: 0x10164b0, Func Offset: 0x40
	// Line 525, Address: 0x10164bc, Func Offset: 0x4c
	// Line 527, Address: 0x10164c4, Func Offset: 0x54
	// Line 528, Address: 0x10164d0, Func Offset: 0x60
	// Line 530, Address: 0x10164d8, Func Offset: 0x68
	// Line 535, Address: 0x10164e4, Func Offset: 0x74
	// Func End, Address: 0x10164f4, Func Offset: 0x84
}

// 
// Start address: 0x1016500
void mizuki_init(_anon1* mizukiwk)
{
	// Line 538, Address: 0x1016500, Func Offset: 0
	// Line 539, Address: 0x101650c, Func Offset: 0xc
	// Line 540, Address: 0x101651c, Func Offset: 0x1c
	// Line 541, Address: 0x101652c, Func Offset: 0x2c
	// Line 542, Address: 0x101653c, Func Offset: 0x3c
	// Line 543, Address: 0x1016548, Func Offset: 0x48
	// Line 544, Address: 0x1016568, Func Offset: 0x68
	// Line 545, Address: 0x1016574, Func Offset: 0x74
	// Line 546, Address: 0x1016580, Func Offset: 0x80
	// Func End, Address: 0x1016590, Func Offset: 0x90
}

// 
// Start address: 0x1016590
void mizuki_move(_anon1* mizukiwk)
{
	// Line 549, Address: 0x1016590, Func Offset: 0
	// Line 550, Address: 0x101659c, Func Offset: 0xc
	// Line 551, Address: 0x10165b0, Func Offset: 0x20
	// Line 552, Address: 0x10165bc, Func Offset: 0x2c
	// Func End, Address: 0x10165cc, Func Offset: 0x3c
}

// 
// Start address: 0x10165d0
void mizuki_move2(_anon1* mizukiwk)
{
	// Line 555, Address: 0x10165d0, Func Offset: 0
	// Line 556, Address: 0x10165dc, Func Offset: 0xc
	// Line 557, Address: 0x10165e8, Func Offset: 0x18
	// Func End, Address: 0x10165f8, Func Offset: 0x28
}

// 
// Start address: 0x1016600
void futa(_anon1* futawk)
{
	// Line 565, Address: 0x1016600, Func Offset: 0
	// Line 566, Address: 0x101660c, Func Offset: 0xc
	// Line 568, Address: 0x101664c, Func Offset: 0x4c
	// Line 569, Address: 0x1016658, Func Offset: 0x58
	// Line 571, Address: 0x1016660, Func Offset: 0x60
	// Line 572, Address: 0x101666c, Func Offset: 0x6c
	// Line 574, Address: 0x1016674, Func Offset: 0x74
	// Line 575, Address: 0x1016680, Func Offset: 0x80
	// Line 577, Address: 0x1016688, Func Offset: 0x88
	// Line 582, Address: 0x1016694, Func Offset: 0x94
	// Line 583, Address: 0x10166a0, Func Offset: 0xa0
	// Line 584, Address: 0x10166ac, Func Offset: 0xac
	// Func End, Address: 0x10166bc, Func Offset: 0xbc
}

// 
// Start address: 0x10166c0
void ride_on_chk_f(_anon1* futawk, _anon1* sonicwk)
{
	_anon1* new_actwk;
	// Line 587, Address: 0x10166c0, Func Offset: 0
	// Line 590, Address: 0x10166d0, Func Offset: 0x10
	// Line 591, Address: 0x10166e8, Func Offset: 0x28
	// Line 592, Address: 0x1016704, Func Offset: 0x44
	// Line 593, Address: 0x1016724, Func Offset: 0x64
	// Line 594, Address: 0x1016740, Func Offset: 0x80
	// Line 595, Address: 0x101674c, Func Offset: 0x8c
	// Line 596, Address: 0x1016764, Func Offset: 0xa4
	// Line 597, Address: 0x1016778, Func Offset: 0xb8
	// Line 598, Address: 0x1016784, Func Offset: 0xc4
	// Line 599, Address: 0x1016794, Func Offset: 0xd4
	// Line 600, Address: 0x10167b8, Func Offset: 0xf8
	// Line 601, Address: 0x10167c4, Func Offset: 0x104
	// Func End, Address: 0x10167d4, Func Offset: 0x114
}

// 
// Start address: 0x10167e0
void futa_init(_anon1* futawk)
{
	// Line 605, Address: 0x10167e0, Func Offset: 0
	// Line 606, Address: 0x10167ec, Func Offset: 0xc
	// Line 607, Address: 0x10167fc, Func Offset: 0x1c
	// Line 608, Address: 0x101680c, Func Offset: 0x2c
	// Line 609, Address: 0x1016818, Func Offset: 0x38
	// Line 610, Address: 0x1016824, Func Offset: 0x44
	// Line 611, Address: 0x1016834, Func Offset: 0x54
	// Line 612, Address: 0x1016840, Func Offset: 0x60
	// Line 613, Address: 0x1016868, Func Offset: 0x88
	// Line 614, Address: 0x1016874, Func Offset: 0x94
	// Line 615, Address: 0x1016884, Func Offset: 0xa4
	// Line 616, Address: 0x1016890, Func Offset: 0xb0
	// Func End, Address: 0x10168a0, Func Offset: 0xc0
}

// 
// Start address: 0x10168a0
void futa_move(_anon1* futawk)
{
	// Line 619, Address: 0x10168a0, Func Offset: 0
	// Line 620, Address: 0x10168ac, Func Offset: 0xc
	// Line 621, Address: 0x10168c0, Func Offset: 0x20
	// Line 622, Address: 0x10168d4, Func Offset: 0x34
	// Func End, Address: 0x10168e4, Func Offset: 0x44
}

// 
// Start address: 0x10168f0
void futa_move2(_anon1* futawk)
{
	// Line 625, Address: 0x10168f0, Func Offset: 0
	// Line 626, Address: 0x10168fc, Func Offset: 0xc
	// Line 627, Address: 0x1016910, Func Offset: 0x20
	// Func End, Address: 0x1016920, Func Offset: 0x30
}

// 
// Start address: 0x1016920
void futa_move3(_anon1* futawk)
{
	// Line 630, Address: 0x1016920, Func Offset: 0
	// Line 631, Address: 0x1016928, Func Offset: 0x8
	// Line 632, Address: 0x1016934, Func Offset: 0x14
	// Line 633, Address: 0x101693c, Func Offset: 0x1c
	// Line 634, Address: 0x101694c, Func Offset: 0x2c
	// Func End, Address: 0x1016958, Func Offset: 0x38
}

// 
// Start address: 0x1016960
void exit2_set(_anon1* testwk)
{
	char a;
	// Line 641, Address: 0x1016960, Func Offset: 0
	// Line 644, Address: 0x1016970, Func Offset: 0x10
	// Line 645, Address: 0x101698c, Func Offset: 0x2c
	// Func End, Address: 0x10169a0, Func Offset: 0x40
}

// 
// Start address: 0x10169a0
char col_chk(_anon1* thingwk, _anon1* sonicwk)
{
	short cal_posi;
	// Line 653, Address: 0x10169a0, Func Offset: 0
	// Line 656, Address: 0x10169b0, Func Offset: 0x10
	// Line 657, Address: 0x10169fc, Func Offset: 0x5c
	// Line 658, Address: 0x1016a18, Func Offset: 0x78
	// Line 659, Address: 0x1016a48, Func Offset: 0xa8
	// Line 660, Address: 0x1016a94, Func Offset: 0xf4
	// Line 661, Address: 0x1016ab0, Func Offset: 0x110
	// Line 662, Address: 0x1016ae0, Func Offset: 0x140
	// Line 663, Address: 0x1016ae4, Func Offset: 0x144
	// Func End, Address: 0x1016af4, Func Offset: 0x154
}

// 
// Start address: 0x1016b00
void exit2(_anon1* exitwk)
{
	// Line 671, Address: 0x1016b00, Func Offset: 0
	// Line 672, Address: 0x1016b0c, Func Offset: 0xc
	// Line 674, Address: 0x1016b40, Func Offset: 0x40
	// Line 675, Address: 0x1016b4c, Func Offset: 0x4c
	// Line 677, Address: 0x1016b54, Func Offset: 0x54
	// Line 678, Address: 0x1016b60, Func Offset: 0x60
	// Line 680, Address: 0x1016b68, Func Offset: 0x68
	// Line 685, Address: 0x1016b74, Func Offset: 0x74
	// Func End, Address: 0x1016b84, Func Offset: 0x84
}

// 
// Start address: 0x1016b90
void exit2_init(_anon1* exitwk)
{
	// Line 688, Address: 0x1016b90, Func Offset: 0
	// Line 689, Address: 0x1016b9c, Func Offset: 0xc
	// Line 690, Address: 0x1016bac, Func Offset: 0x1c
	// Line 691, Address: 0x1016bb8, Func Offset: 0x28
	// Line 692, Address: 0x1016bc4, Func Offset: 0x34
	// Line 693, Address: 0x1016bd4, Func Offset: 0x44
	// Line 694, Address: 0x1016be4, Func Offset: 0x54
	// Line 695, Address: 0x1016bf4, Func Offset: 0x64
	// Line 696, Address: 0x1016c24, Func Offset: 0x94
	// Line 697, Address: 0x1016c30, Func Offset: 0xa0
	// Line 698, Address: 0x1016c3c, Func Offset: 0xac
	// Func End, Address: 0x1016c4c, Func Offset: 0xbc
}

// 
// Start address: 0x1016c50
void exit2_move(_anon1* exitwk)
{
	// Line 701, Address: 0x1016c50, Func Offset: 0
	// Line 702, Address: 0x1016c5c, Func Offset: 0xc
	// Line 703, Address: 0x1016c70, Func Offset: 0x20
	// Line 704, Address: 0x1016c7c, Func Offset: 0x2c
	// Func End, Address: 0x1016c8c, Func Offset: 0x3c
}

// 
// Start address: 0x1016c90
void exit2_erase(_anon1* exitwk)
{
	// Line 707, Address: 0x1016c90, Func Offset: 0
	// Line 708, Address: 0x1016c9c, Func Offset: 0xc
	// Line 709, Address: 0x1016ca8, Func Offset: 0x18
	// Func End, Address: 0x1016cb8, Func Offset: 0x28
}

// 
// Start address: 0x1016cc0
void baria(_anon1* bariawk)
{
	// Line 719, Address: 0x1016cc0, Func Offset: 0
	// Line 720, Address: 0x1016ccc, Func Offset: 0xc
	// Line 722, Address: 0x1016d0c, Func Offset: 0x4c
	// Line 723, Address: 0x1016d18, Func Offset: 0x58
	// Line 725, Address: 0x1016d20, Func Offset: 0x60
	// Line 726, Address: 0x1016d2c, Func Offset: 0x6c
	// Line 728, Address: 0x1016d34, Func Offset: 0x74
	// Line 729, Address: 0x1016d40, Func Offset: 0x80
	// Line 731, Address: 0x1016d48, Func Offset: 0x88
	// Line 736, Address: 0x1016d54, Func Offset: 0x94
	// Line 737, Address: 0x1016d84, Func Offset: 0xc4
	// Line 738, Address: 0x1016d94, Func Offset: 0xd4
	// Line 739, Address: 0x1016dc0, Func Offset: 0x100
	// Func End, Address: 0x1016dd0, Func Offset: 0x110
}

// 
// Start address: 0x1016dd0
void bariainit(_anon1* bariawk)
{
	// Line 742, Address: 0x1016dd0, Func Offset: 0
	// Line 743, Address: 0x1016dd8, Func Offset: 0x8
	// Line 744, Address: 0x1016de8, Func Offset: 0x18
	// Line 745, Address: 0x1016df8, Func Offset: 0x28
	// Line 746, Address: 0x1016e04, Func Offset: 0x34
	// Line 747, Address: 0x1016e10, Func Offset: 0x40
	// Line 748, Address: 0x1016e1c, Func Offset: 0x4c
	// Line 749, Address: 0x1016e28, Func Offset: 0x58
	// Line 750, Address: 0x1016e40, Func Offset: 0x70
	// Line 751, Address: 0x1016e50, Func Offset: 0x80
	// Line 752, Address: 0x1016e6c, Func Offset: 0x9c
	// Line 753, Address: 0x1016e7c, Func Offset: 0xac
	// Func End, Address: 0x1016e88, Func Offset: 0xb8
}

// 
// Start address: 0x1016e90
void bariamove(_anon1* bariawk)
{
	// Line 756, Address: 0x1016e90, Func Offset: 0
	// Line 757, Address: 0x1016e9c, Func Offset: 0xc
	// Line 758, Address: 0x1016ec4, Func Offset: 0x34
	// Line 759, Address: 0x1016ef4, Func Offset: 0x64
	// Line 760, Address: 0x1016f04, Func Offset: 0x74
	// Line 761, Address: 0x1016f14, Func Offset: 0x84
	// Line 762, Address: 0x1016f24, Func Offset: 0x94
	// Line 763, Address: 0x1016f40, Func Offset: 0xb0
	// Line 764, Address: 0x1016f50, Func Offset: 0xc0
	// Line 765, Address: 0x1016f64, Func Offset: 0xd4
	// Line 767, Address: 0x1016f74, Func Offset: 0xe4
	// Line 768, Address: 0x1016f88, Func Offset: 0xf8
	// Line 769, Address: 0x1016f94, Func Offset: 0x104
	// Func End, Address: 0x1016fa4, Func Offset: 0x114
}

// 
// Start address: 0x1016fb0
void mutekimove(_anon1* bariawk)
{
	// Line 772, Address: 0x1016fb0, Func Offset: 0
	// Line 773, Address: 0x1016fbc, Func Offset: 0xc
	// Line 774, Address: 0x1016fd0, Func Offset: 0x20
	// Line 775, Address: 0x1016ff8, Func Offset: 0x48
	// Line 776, Address: 0x1017004, Func Offset: 0x54
	// Func End, Address: 0x1017014, Func Offset: 0x64
}

// 
// Start address: 0x1017020
void backtomove(_anon1* bariawk)
{
	// Line 779, Address: 0x1017020, Func Offset: 0
	// Line 780, Address: 0x101702c, Func Offset: 0xc
	// Line 781, Address: 0x1017054, Func Offset: 0x34
	// Line 782, Address: 0x1017060, Func Offset: 0x40
	// Func End, Address: 0x1017070, Func Offset: 0x50
}

// 
// Start address: 0x1017070
void muteki_sub(_anon1* bariawk)
{
	_anon7 ppw_offset;
	unsigned char cal_no;
	// Line 786, Address: 0x1017070, Func Offset: 0
	// Line 790, Address: 0x1017080, Func Offset: 0x10
	// Line 791, Address: 0x101709c, Func Offset: 0x2c
	// Line 792, Address: 0x10170ac, Func Offset: 0x3c
	// Line 793, Address: 0x10170c0, Func Offset: 0x50
	// Line 796, Address: 0x10170d0, Func Offset: 0x60
	// Line 797, Address: 0x10170dc, Func Offset: 0x6c
	// Line 798, Address: 0x10170f8, Func Offset: 0x88
	// Line 799, Address: 0x1017110, Func Offset: 0xa0
	// Line 800, Address: 0x101712c, Func Offset: 0xbc
	// Line 801, Address: 0x1017144, Func Offset: 0xd4
	// Line 802, Address: 0x1017150, Func Offset: 0xe0
	// Line 803, Address: 0x1017168, Func Offset: 0xf8
	// Line 804, Address: 0x1017188, Func Offset: 0x118
	// Line 806, Address: 0x1017190, Func Offset: 0x120
	// Line 807, Address: 0x10171cc, Func Offset: 0x15c
	// Line 809, Address: 0x101720c, Func Offset: 0x19c
	// Line 810, Address: 0x101721c, Func Offset: 0x1ac
	// Line 811, Address: 0x1017230, Func Offset: 0x1c0
	// Line 812, Address: 0x101723c, Func Offset: 0x1cc
	// Func End, Address: 0x1017250, Func Offset: 0x1e0
}

// 
// Start address: 0x1017250
void actionsub0(_anon1* bariawk)
{
	// Line 816, Address: 0x1017250, Func Offset: 0
	// Line 817, Address: 0x101725c, Func Offset: 0xc
	// Line 819, Address: 0x1017278, Func Offset: 0x28
	// Line 820, Address: 0x10172a8, Func Offset: 0x58
	// Line 821, Address: 0x10172b4, Func Offset: 0x64
	// Func End, Address: 0x10172c4, Func Offset: 0x74
}

// 
// Start address: 0x10172d0
void ball(_anon1* ballwk)
{
	// Line 835, Address: 0x10172d0, Func Offset: 0
	// Line 836, Address: 0x10172dc, Func Offset: 0xc
	// Line 838, Address: 0x1017304, Func Offset: 0x34
	// Line 839, Address: 0x1017310, Func Offset: 0x40
	// Line 841, Address: 0x1017318, Func Offset: 0x48
	// Line 848, Address: 0x1017324, Func Offset: 0x54
	// Line 849, Address: 0x1017330, Func Offset: 0x60
	// Func End, Address: 0x1017340, Func Offset: 0x70
}

// 
// Start address: 0x1017340
void ball_init(_anon1* ballwk)
{
	// Line 853, Address: 0x1017340, Func Offset: 0
	// Line 854, Address: 0x101734c, Func Offset: 0xc
	// Line 855, Address: 0x101735c, Func Offset: 0x1c
	// Line 856, Address: 0x101736c, Func Offset: 0x2c
	// Line 857, Address: 0x1017378, Func Offset: 0x38
	// Line 858, Address: 0x1017388, Func Offset: 0x48
	// Line 859, Address: 0x10173a8, Func Offset: 0x68
	// Line 860, Address: 0x10173b4, Func Offset: 0x74
	// Func End, Address: 0x10173c4, Func Offset: 0x84
}

// 
// Start address: 0x10173d0
void ball_move(_anon1* ballwk)
{
	short cal_speed0;
	short cal_speed1;
	// Line 863, Address: 0x10173d0, Func Offset: 0
	// Line 866, Address: 0x10173e4, Func Offset: 0x14
	// Line 867, Address: 0x1017400, Func Offset: 0x30
	// Line 868, Address: 0x1017418, Func Offset: 0x48
	// Line 870, Address: 0x1017430, Func Offset: 0x60
	// Line 871, Address: 0x1017448, Func Offset: 0x78
	// Line 872, Address: 0x1017484, Func Offset: 0xb4
	// Line 873, Address: 0x1017490, Func Offset: 0xc0
	// Line 874, Address: 0x10174b8, Func Offset: 0xe8
	// Line 875, Address: 0x10174dc, Func Offset: 0x10c
	// Line 876, Address: 0x1017510, Func Offset: 0x140
	// Line 877, Address: 0x1017520, Func Offset: 0x150
	// Line 878, Address: 0x1017544, Func Offset: 0x174
	// Line 879, Address: 0x1017568, Func Offset: 0x198
	// Line 880, Address: 0x1017570, Func Offset: 0x1a0
	// Line 881, Address: 0x10175a0, Func Offset: 0x1d0
	// Line 882, Address: 0x10175dc, Func Offset: 0x20c
	// Line 883, Address: 0x10175fc, Func Offset: 0x22c
	// Line 884, Address: 0x1017630, Func Offset: 0x260
	// Line 885, Address: 0x1017640, Func Offset: 0x270
	// Line 887, Address: 0x1017654, Func Offset: 0x284
	// Line 888, Address: 0x101765c, Func Offset: 0x28c
	// Func End, Address: 0x1017674, Func Offset: 0x2a4
}

// 
// Start address: 0x1017680
void ball_ball()
{
	// Line 892, Address: 0x1017680, Func Offset: 0
	// Line 893, Address: 0x1017698, Func Offset: 0x18
	// Line 894, Address: 0x10176ac, Func Offset: 0x2c
	// Line 895, Address: 0x10176b8, Func Offset: 0x38
	// Line 896, Address: 0x10176c4, Func Offset: 0x44
	// Line 897, Address: 0x10176d8, Func Offset: 0x58
	// Line 899, Address: 0x10176e4, Func Offset: 0x64
	// Func End, Address: 0x10176ec, Func Offset: 0x6c
}

// 
// Start address: 0x10176f0
void ball_rd7(_anon1* ballwk)
{
	short cal_speed0;
	// Line 902, Address: 0x10176f0, Func Offset: 0
	// Line 905, Address: 0x1017700, Func Offset: 0x10
	// Line 906, Address: 0x101771c, Func Offset: 0x2c
	// Line 907, Address: 0x1017738, Func Offset: 0x48
	// Line 910, Address: 0x1017760, Func Offset: 0x70
	// Line 911, Address: 0x1017788, Func Offset: 0x98
	// Line 912, Address: 0x1017794, Func Offset: 0xa4
	// Line 913, Address: 0x10177ac, Func Offset: 0xbc
	// Line 914, Address: 0x10177d4, Func Offset: 0xe4
	// Line 916, Address: 0x10177f0, Func Offset: 0x100
	// Line 917, Address: 0x1017820, Func Offset: 0x130
	// Line 918, Address: 0x1017830, Func Offset: 0x140
	// Line 919, Address: 0x1017838, Func Offset: 0x148
	// Line 920, Address: 0x1017840, Func Offset: 0x150
	// Line 921, Address: 0x1017868, Func Offset: 0x178
	// Line 922, Address: 0x1017890, Func Offset: 0x1a0
	// Line 923, Address: 0x10178ac, Func Offset: 0x1bc
	// Line 924, Address: 0x10178c0, Func Offset: 0x1d0
	// Line 926, Address: 0x10178c8, Func Offset: 0x1d8
	// Func End, Address: 0x10178dc, Func Offset: 0x1ec
}

// 
// Start address: 0x10178e0
unsigned char ball_coli(_anon1* ballwk)
{
	short cal_posi;
	// Line 929, Address: 0x10178e0, Func Offset: 0
	// Line 932, Address: 0x10178ec, Func Offset: 0xc
	// Line 933, Address: 0x1017910, Func Offset: 0x30
	// Line 934, Address: 0x1017948, Func Offset: 0x68
	// Line 935, Address: 0x1017964, Func Offset: 0x84
	// Line 936, Address: 0x1017984, Func Offset: 0xa4
	// Line 937, Address: 0x10179bc, Func Offset: 0xdc
	// Line 938, Address: 0x10179d8, Func Offset: 0xf8
	// Line 939, Address: 0x10179f8, Func Offset: 0x118
	// Line 940, Address: 0x10179fc, Func Offset: 0x11c
	// Func End, Address: 0x1017a0c, Func Offset: 0x12c
}

