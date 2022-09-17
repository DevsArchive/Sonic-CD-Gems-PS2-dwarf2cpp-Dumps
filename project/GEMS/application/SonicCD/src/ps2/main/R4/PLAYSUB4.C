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

typedef void(*type_13)(_anon0*);
typedef void(*type_19)(_anon0*);
typedef void(*type_22)(_anon0*);

typedef unsigned char* type_0[0];
typedef _anon9 type_1[20];
typedef unsigned char* type_2[1];
typedef unsigned char* type_3[4];
typedef unsigned char type_4[9];
typedef _anon1* type_5[8];
typedef _anon9 type_6[0];
typedef _anon1* type_7[0];
typedef unsigned char type_8[6];
typedef unsigned char type_9[9];
typedef unsigned char type_10[4];
typedef unsigned char* type_11[0];
typedef unsigned char type_12[9];
typedef void(*type_14)(_anon0*)[9];
typedef _anon1* type_15[0];
typedef unsigned char* type_16[0];
typedef short type_17[2];
typedef _anon1* type_18[0];
typedef void(*type_20)(_anon0*)[2];
typedef unsigned char* type_21[0];
typedef void(*type_23)(_anon0*)[4];
typedef unsigned char type_24[6];
typedef _anon1* type_25[8];
typedef unsigned char type_26[8];
typedef unsigned char type_27[8];
typedef _anon2 type_28[192];
typedef unsigned char type_29[2];
typedef unsigned char type_30[22];
typedef unsigned char type_31[8];
typedef unsigned char type_32[3];
typedef unsigned char type_33[5];
typedef unsigned char type_34[50];
typedef _anon1* type_35[2];
typedef unsigned char type_36[4];
typedef unsigned char type_37[9];
typedef unsigned char type_38[6];
typedef unsigned char type_39[9];
typedef unsigned char type_40[9];
typedef short type_41[128];
typedef _anon0 type_42[128];
typedef unsigned char type_43[766];
typedef unsigned char* type_44[16];
typedef _anon1* type_45[23];
typedef unsigned char type_46[2];
typedef unsigned char type_47[8];
typedef unsigned char type_48[0];
typedef unsigned char type_49[8];
typedef _anon1* type_50[0];
typedef unsigned char type_51[8];

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
		_anon9 spra[20];
		_anon9 spr[0];
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
_anon1* markerpat[0];
unsigned char markerno;
unsigned char* markerchg[0];
_anon1* bakupat[0];
unsigned char* bakuchg[0];
unsigned char flowchg0[4];
unsigned char flowchg1[6];
unsigned char flowchg2[6];
unsigned char flowchg3[4];
unsigned char* flowchg[4];
_anon1 flo00;
_anon1 flo01;
_anon1 flo02;
_anon1 flo03;
_anon1 flo04;
_anon1 flo05;
_anon1 flo06;
_anon1 flo07;
_anon1* flow_pat[8];
unsigned char flagworkcnt;
_anon2 flowerposi[192];
unsigned char flowercnt[3];
unsigned char time_flag;
unsigned char flagwork[766];
_anon1* exit2pat[0];
unsigned char* exit2chg[0];
short waterposi;
_anon1* bariapat[0];
unsigned char* bariachg[0];
_anon0 actwk[128];
unsigned char plpower_m;
unsigned char plpower_a;
unsigned char plpower_b;
short playposiwk[128];
_anon7 plposiwkadr;
unsigned char plsubchg_flag;
short pl_air;
unsigned char bossstart;
_anon5 stageno;
_anon1 boupat0;
_anon1 boupat1;
_anon1* boupat[2];
_anon1 wavepat0;
_anon1 wavepat1;
_anon1 wavepat2;
_anon1 wavepat3;
_anon1* wavepat[8];
_anon1 awasp0;
_anon1 awasp1;
_anon1 awasp2;
_anon1 awasp3;
_anon1 awasp4;
_anon1 awasp5;
_anon1 awasp6;
_anon1 awasp7;
_anon1 awasp8;
_anon1 awasp9;
_anon1 awasp10;
_anon1 awasp11;
_anon1 awasp12;
_anon1 awasp13;
_anon1 awasp14;
_anon1 awasp15;
_anon1 awasp16;
_anon1 awasp17;
_anon1 awasp18;
_anon1 awasp19;
_anon1 awasp20;
_anon1 awasp21;
_anon1 awasp22;
_anon1* awapat[23];
unsigned char plawachg0[9];
unsigned char plawachg1[9];
unsigned char plawachg2[9];
unsigned char plawachg3[9];
unsigned char plawachg4[9];
unsigned char plawachg5[9];
unsigned char plawachg6[5];
unsigned char plawachg7[8];
unsigned char plawachg8[8];
unsigned char plawachg9[8];
unsigned char plawachg10[8];
unsigned char plawachg11[8];
unsigned char plawachg12[8];
unsigned char plawachg13[2];
unsigned char plawachg14[6];
unsigned char* plawachg[16];
unsigned char wavechg0[50];
unsigned char* wavechg[1];
_anon5 scroll_start;
_anon5 gametimer;
unsigned char awasintbl[0];
unsigned char watercoliflag;
_anon7 swdata1;
_anon5 editmode;

void patchg(_anon0* patchgwk, unsigned char** pat_dat);
void playsave0(_anon0* savewk);
void marker(_anon0* markerwk);
void marker_init(_anon0* markerwk);
void marker_move0(_anon0* markerwk);
void marker_move1(_anon0* markerwk);
void marker_move2(_anon0* markerwk);
void tensuu_set(_anon0* tensuuwk);
void tensuu0(_anon0* tensuuwk, unsigned char uf_data);
void bakuha(_anon0* bakuhawk);
void baku_init(_anon0* bakuhawk);
void baku_move(_anon0* bakuhawk);
void baku_die(_anon0* bakuhawk);
void flower(_anon0* flowerwk);
void flow_init(_anon0* flowerwk);
void flow_move0(_anon0* flowerwk);
void flow_move1(_anon0* flowerwk);
unsigned char* flow_sub(_anon0* flowerwk);
short flow_sub1(unsigned char fl_counter);
void flow_move2(_anon0* flowerwk);
void flow_move3(_anon0* flowerwk);
void exit2(_anon0* exitwk);
void exit2_init(_anon0* exitwk);
void exit2_move(_anon0* exitwk);
void exit2_erase(_anon0* exitwk);
void baria(_anon0* bariawk);
void bariainit(_anon0* bariawk);
void bariamove(_anon0* bariawk);
void mutekimove(_anon0* bariawk);
void backtomove(_anon0* bariawk);
void muteki_sub(_anon0* bariawk);
void actionsub0(_anon0* bariawk);
void test_act(_anon0* testwk);
void mizukiri(_anon0* mizukiwk);
void futa(_anon0* futawk);
void exit2_set(_anon0* testwk);
void plairset();
void plawamaster(_anon0* pActwk);
void plawamaster_jump0(_anon0* pActwk);
void plawamaster_jump(_anon0* pActwk);
void plawamaster_jump2(_anon0* pActwk);
void plawa(_anon0* pActwk);
void plawainit(_anon0* pActwk);
void plawamove(_anon0* pActwk);
void plawamove2(_anon0* pActwk);
void plawamove3(_anon0* pActwk);
void plawamove4(_anon0* pActwk);
void plawamove5(_anon0* pActwk);
void plawasub(_anon0* pActwk);
void wave(_anon0* pActwk);
void wave_init(_anon0* pActwk);
void wave_move(_anon0* pActwk);
void bou(_anon0* pActwk);
void bou_init(_anon0* pActwk);
void bou_move0(_anon0* pActwk);
void bou_move1(_anon0* pActwk);
void bou_move2();
int bou_coli(_anon0* pActwk);

// 
// Start address: 0x101a2b0
void patchg(_anon0* patchgwk, unsigned char** pat_dat)
{
	unsigned char pat_no;
	unsigned char* sprpat_adr;
	// Line 30, Address: 0x101a2b0, Func Offset: 0
	// Line 34, Address: 0x101a2c8, Func Offset: 0x18
	// Line 35, Address: 0x101a2f0, Func Offset: 0x40
	// Line 36, Address: 0x101a300, Func Offset: 0x50
	// Line 39, Address: 0x101a314, Func Offset: 0x64
	// Line 40, Address: 0x101a340, Func Offset: 0x90
	// Line 42, Address: 0x101a360, Func Offset: 0xb0
	// Line 43, Address: 0x101a364, Func Offset: 0xb4
	// Line 44, Address: 0x101a390, Func Offset: 0xe0
	// Line 45, Address: 0x101a3ac, Func Offset: 0xfc
	// Line 47, Address: 0x101a3e4, Func Offset: 0x134
	// Line 49, Address: 0x101a3f0, Func Offset: 0x140
	// Line 51, Address: 0x101a41c, Func Offset: 0x16c
	// Line 52, Address: 0x101a430, Func Offset: 0x180
	// Line 54, Address: 0x101a438, Func Offset: 0x188
	// Line 55, Address: 0x101a448, Func Offset: 0x198
	// Line 56, Address: 0x101a450, Func Offset: 0x1a0
	// Line 57, Address: 0x101a460, Func Offset: 0x1b0
	// Line 58, Address: 0x101a470, Func Offset: 0x1c0
	// Line 59, Address: 0x101a480, Func Offset: 0x1d0
	// Line 61, Address: 0x101a488, Func Offset: 0x1d8
	// Line 63, Address: 0x101a4b8, Func Offset: 0x208
	// Line 64, Address: 0x101a4c0, Func Offset: 0x210
	// Line 65, Address: 0x101a4c8, Func Offset: 0x218
	// Line 68, Address: 0x101a4d0, Func Offset: 0x220
	// Line 69, Address: 0x101a4ec, Func Offset: 0x23c
	// Line 70, Address: 0x101a50c, Func Offset: 0x25c
	// Line 71, Address: 0x101a528, Func Offset: 0x278
	// Line 74, Address: 0x101a530, Func Offset: 0x280
	// Line 75, Address: 0x101a550, Func Offset: 0x2a0
	// Line 77, Address: 0x101a558, Func Offset: 0x2a8
	// Line 78, Address: 0x101a568, Func Offset: 0x2b8
	// Line 80, Address: 0x101a570, Func Offset: 0x2c0
	// Line 81, Address: 0x101a584, Func Offset: 0x2d4
	// Line 83, Address: 0x101a58c, Func Offset: 0x2dc
	// Line 88, Address: 0x101a59c, Func Offset: 0x2ec
	// Func End, Address: 0x101a5b4, Func Offset: 0x304
}

// 
// Start address: 0x101a5c0
void playsave0(_anon0* savewk)
{
	// Line 92, Address: 0x101a5c0, Func Offset: 0
	// Line 93, Address: 0x101a5c8, Func Offset: 0x8
	// Line 94, Address: 0x101a5d8, Func Offset: 0x18
	// Line 95, Address: 0x101a5e8, Func Offset: 0x28
	// Line 96, Address: 0x101a5f8, Func Offset: 0x38
	// Line 97, Address: 0x101a608, Func Offset: 0x48
	// Line 98, Address: 0x101a618, Func Offset: 0x58
	// Line 99, Address: 0x101a628, Func Offset: 0x68
	// Line 100, Address: 0x101a638, Func Offset: 0x78
	// Line 101, Address: 0x101a648, Func Offset: 0x88
	// Line 102, Address: 0x101a658, Func Offset: 0x98
	// Line 103, Address: 0x101a668, Func Offset: 0xa8
	// Line 104, Address: 0x101a678, Func Offset: 0xb8
	// Line 105, Address: 0x101a688, Func Offset: 0xc8
	// Line 106, Address: 0x101a698, Func Offset: 0xd8
	// Line 107, Address: 0x101a6a8, Func Offset: 0xe8
	// Line 108, Address: 0x101a6b8, Func Offset: 0xf8
	// Line 109, Address: 0x101a6e4, Func Offset: 0x124
	// Line 111, Address: 0x101a6f4, Func Offset: 0x134
	// Func End, Address: 0x101a700, Func Offset: 0x140
}

// 
// Start address: 0x101a700
void marker(_anon0* markerwk)
{
	// Line 125, Address: 0x101a700, Func Offset: 0
	// Line 126, Address: 0x101a70c, Func Offset: 0xc
	// Line 128, Address: 0x101a74c, Func Offset: 0x4c
	// Line 129, Address: 0x101a758, Func Offset: 0x58
	// Line 131, Address: 0x101a760, Func Offset: 0x60
	// Line 132, Address: 0x101a76c, Func Offset: 0x6c
	// Line 134, Address: 0x101a774, Func Offset: 0x74
	// Line 135, Address: 0x101a780, Func Offset: 0x80
	// Line 137, Address: 0x101a788, Func Offset: 0x88
	// Line 142, Address: 0x101a794, Func Offset: 0x94
	// Line 143, Address: 0x101a7a0, Func Offset: 0xa0
	// Line 144, Address: 0x101a7ac, Func Offset: 0xac
	// Func End, Address: 0x101a7bc, Func Offset: 0xbc
}

// 
// Start address: 0x101a7c0
void marker_init(_anon0* markerwk)
{
	_anon0* new_actwk;
	_anon0** parent;
	unsigned short marker_yposi_m_buf;
	// Line 147, Address: 0x101a7c0, Func Offset: 0
	// Line 151, Address: 0x101a7d4, Func Offset: 0x14
	// Line 152, Address: 0x101a7e4, Func Offset: 0x24
	// Line 153, Address: 0x101a7f4, Func Offset: 0x34
	// Line 154, Address: 0x101a800, Func Offset: 0x40
	// Line 155, Address: 0x101a80c, Func Offset: 0x4c
	// Line 156, Address: 0x101a818, Func Offset: 0x58
	// Line 157, Address: 0x101a824, Func Offset: 0x64
	// Line 159, Address: 0x101a830, Func Offset: 0x70
	// Line 160, Address: 0x101a858, Func Offset: 0x98
	// Line 162, Address: 0x101a86c, Func Offset: 0xac
	// Line 163, Address: 0x101a878, Func Offset: 0xb8
	// Line 164, Address: 0x101a8a0, Func Offset: 0xe0
	// Line 165, Address: 0x101a8ac, Func Offset: 0xec
	// Line 166, Address: 0x101a8bc, Func Offset: 0xfc
	// Line 167, Address: 0x101a8e0, Func Offset: 0x120
	// Line 168, Address: 0x101a8f0, Func Offset: 0x130
	// Line 169, Address: 0x101a8fc, Func Offset: 0x13c
	// Line 170, Address: 0x101a908, Func Offset: 0x148
	// Line 171, Address: 0x101a914, Func Offset: 0x154
	// Line 172, Address: 0x101a920, Func Offset: 0x160
	// Line 173, Address: 0x101a92c, Func Offset: 0x16c
	// Line 174, Address: 0x101a938, Func Offset: 0x178
	// Line 175, Address: 0x101a940, Func Offset: 0x180
	// Line 176, Address: 0x101a948, Func Offset: 0x188
	// Line 177, Address: 0x101a958, Func Offset: 0x198
	// Line 178, Address: 0x101a97c, Func Offset: 0x1bc
	// Line 179, Address: 0x101a98c, Func Offset: 0x1cc
	// Line 180, Address: 0x101a9a8, Func Offset: 0x1e8
	// Line 181, Address: 0x101a9b0, Func Offset: 0x1f0
	// Func End, Address: 0x101a9c8, Func Offset: 0x208
}

// 
// Start address: 0x101a9d0
void marker_move0(_anon0* markerwk)
{
	// Line 184, Address: 0x101a9d0, Func Offset: 0
	// Line 187, Address: 0x101a9dc, Func Offset: 0xc
	// Line 195, Address: 0x101a9f0, Func Offset: 0x20
	// Line 196, Address: 0x101aa04, Func Offset: 0x34
	// Line 197, Address: 0x101aa0c, Func Offset: 0x3c
	// Line 198, Address: 0x101aa18, Func Offset: 0x48
	// Line 199, Address: 0x101aa28, Func Offset: 0x58
	// Line 200, Address: 0x101aa34, Func Offset: 0x64
	// Line 201, Address: 0x101aa40, Func Offset: 0x70
	// Line 202, Address: 0x101aa4c, Func Offset: 0x7c
	// Func End, Address: 0x101aa5c, Func Offset: 0x8c
}

// 
// Start address: 0x101aa60
void marker_move1(_anon0* markerwk)
{
	int sin_data;
	int cos_data;
	short sin_tmp;
	short cos_tmp;
	_anon0** parent;
	_anon0* new_actwk;
	// Line 205, Address: 0x101aa60, Func Offset: 0
	// Line 210, Address: 0x101aa7c, Func Offset: 0x1c
	// Line 211, Address: 0x101aa90, Func Offset: 0x30
	// Line 212, Address: 0x101aa98, Func Offset: 0x38
	// Line 213, Address: 0x101aa9c, Func Offset: 0x3c
	// Line 214, Address: 0x101aaac, Func Offset: 0x4c
	// Line 217, Address: 0x101aab8, Func Offset: 0x58
	// Line 218, Address: 0x101aac8, Func Offset: 0x68
	// Line 219, Address: 0x101aae0, Func Offset: 0x80
	// Line 220, Address: 0x101aaec, Func Offset: 0x8c
	// Line 221, Address: 0x101aaf8, Func Offset: 0x98
	// Line 222, Address: 0x101aafc, Func Offset: 0x9c
	// Line 223, Address: 0x101ab18, Func Offset: 0xb8
	// Line 224, Address: 0x101ab28, Func Offset: 0xc8
	// Line 225, Address: 0x101ab40, Func Offset: 0xe0
	// Line 226, Address: 0x101ab48, Func Offset: 0xe8
	// Line 227, Address: 0x101ab64, Func Offset: 0x104
	// Line 228, Address: 0x101ab74, Func Offset: 0x114
	// Line 229, Address: 0x101ab8c, Func Offset: 0x12c
	// Line 230, Address: 0x101abb0, Func Offset: 0x150
	// Func End, Address: 0x101abd0, Func Offset: 0x170
}

// 
// Start address: 0x101abd0
void marker_move2(_anon0* markerwk)
{
	// Line 233, Address: 0x101abd0, Func Offset: 0
	// Line 234, Address: 0x101abdc, Func Offset: 0xc
	// Line 235, Address: 0x101abf0, Func Offset: 0x20
	// Func End, Address: 0x101ac00, Func Offset: 0x30
}

// 
// Start address: 0x101ac00
void tensuu_set(_anon0* tensuuwk)
{
	// Line 290, Address: 0x101ac00, Func Offset: 0
	// Line 291, Address: 0x101ac0c, Func Offset: 0xc
	// Line 292, Address: 0x101ac20, Func Offset: 0x20
	// Line 293, Address: 0x101ac40, Func Offset: 0x40
	// Func End, Address: 0x101ac50, Func Offset: 0x50
}

// 
// Start address: 0x101ac50
void tensuu0(_anon0* tensuuwk, unsigned char uf_data)
{
	_anon0* new_actwk;
	// Line 296, Address: 0x101ac50, Func Offset: 0
	// Line 299, Address: 0x101ac60, Func Offset: 0x10
	// Line 300, Address: 0x101ac6c, Func Offset: 0x1c
	// Line 301, Address: 0x101ac80, Func Offset: 0x30
	// Line 302, Address: 0x101ac8c, Func Offset: 0x3c
	// Line 303, Address: 0x101ac9c, Func Offset: 0x4c
	// Line 304, Address: 0x101acac, Func Offset: 0x5c
	// Line 305, Address: 0x101acb8, Func Offset: 0x68
	// Func End, Address: 0x101acc8, Func Offset: 0x78
}

// 
// Start address: 0x101acd0
void bakuha(_anon0* bakuhawk)
{
	// Line 314, Address: 0x101acd0, Func Offset: 0
	// Line 315, Address: 0x101acdc, Func Offset: 0xc
	// Line 317, Address: 0x101ad10, Func Offset: 0x40
	// Line 318, Address: 0x101ad1c, Func Offset: 0x4c
	// Line 320, Address: 0x101ad24, Func Offset: 0x54
	// Line 321, Address: 0x101ad30, Func Offset: 0x60
	// Line 323, Address: 0x101ad38, Func Offset: 0x68
	// Line 328, Address: 0x101ad44, Func Offset: 0x74
	// Func End, Address: 0x101ad54, Func Offset: 0x84
}

// 
// Start address: 0x101ad60
void baku_init(_anon0* bakuhawk)
{
	// Line 331, Address: 0x101ad60, Func Offset: 0
	// Line 332, Address: 0x101ad6c, Func Offset: 0xc
	// Line 333, Address: 0x101ad7c, Func Offset: 0x1c
	// Line 334, Address: 0x101ad8c, Func Offset: 0x2c
	// Line 336, Address: 0x101ad98, Func Offset: 0x38
	// Line 339, Address: 0x101ada4, Func Offset: 0x44
	// Line 340, Address: 0x101adb4, Func Offset: 0x54
	// Line 341, Address: 0x101adc0, Func Offset: 0x60
	// Line 342, Address: 0x101adc8, Func Offset: 0x68
	// Line 343, Address: 0x101add0, Func Offset: 0x70
	// Line 344, Address: 0x101add8, Func Offset: 0x78
	// Line 345, Address: 0x101ade0, Func Offset: 0x80
	// Line 346, Address: 0x101ae04, Func Offset: 0xa4
	// Line 347, Address: 0x101ae10, Func Offset: 0xb0
	// Func End, Address: 0x101ae20, Func Offset: 0xc0
}

// 
// Start address: 0x101ae20
void baku_move(_anon0* bakuhawk)
{
	// Line 350, Address: 0x101ae20, Func Offset: 0
	// Line 351, Address: 0x101ae2c, Func Offset: 0xc
	// Line 352, Address: 0x101ae40, Func Offset: 0x20
	// Line 353, Address: 0x101ae4c, Func Offset: 0x2c
	// Func End, Address: 0x101ae5c, Func Offset: 0x3c
}

// 
// Start address: 0x101ae60
void baku_die(_anon0* bakuhawk)
{
	// Line 356, Address: 0x101ae60, Func Offset: 0
	// Line 357, Address: 0x101ae6c, Func Offset: 0xc
	// Line 358, Address: 0x101ae94, Func Offset: 0x34
	// Line 359, Address: 0x101aea0, Func Offset: 0x40
	// Line 360, Address: 0x101aea8, Func Offset: 0x48
	// Func End, Address: 0x101aeb8, Func Offset: 0x58
}

// 
// Start address: 0x101aec0
void flower(_anon0* flowerwk)
{
	// Line 409, Address: 0x101aec0, Func Offset: 0
	// Line 410, Address: 0x101aecc, Func Offset: 0xc
	// Line 412, Address: 0x101af18, Func Offset: 0x58
	// Line 413, Address: 0x101af24, Func Offset: 0x64
	// Line 415, Address: 0x101af2c, Func Offset: 0x6c
	// Line 416, Address: 0x101af38, Func Offset: 0x78
	// Line 418, Address: 0x101af40, Func Offset: 0x80
	// Line 419, Address: 0x101af4c, Func Offset: 0x8c
	// Line 421, Address: 0x101af54, Func Offset: 0x94
	// Line 422, Address: 0x101af60, Func Offset: 0xa0
	// Line 424, Address: 0x101af68, Func Offset: 0xa8
	// Line 429, Address: 0x101af74, Func Offset: 0xb4
	// Line 430, Address: 0x101af80, Func Offset: 0xc0
	// Func End, Address: 0x101af90, Func Offset: 0xd0
}

// 
// Start address: 0x101af90
void flow_init(_anon0* flowerwk)
{
	unsigned char* fwcnt_adr;
	// Line 434, Address: 0x101af90, Func Offset: 0
	// Line 436, Address: 0x101afa0, Func Offset: 0x10
	// Line 438, Address: 0x101afa8, Func Offset: 0x18
	// Line 439, Address: 0x101afb8, Func Offset: 0x28
	// Line 440, Address: 0x101afc4, Func Offset: 0x34
	// Line 442, Address: 0x101afcc, Func Offset: 0x3c
	// Line 446, Address: 0x101afd8, Func Offset: 0x48
	// Line 447, Address: 0x101afe8, Func Offset: 0x58
	// Line 448, Address: 0x101b000, Func Offset: 0x70
	// Line 449, Address: 0x101b010, Func Offset: 0x80
	// Line 450, Address: 0x101b01c, Func Offset: 0x8c
	// Line 451, Address: 0x101b028, Func Offset: 0x98
	// Line 453, Address: 0x101b050, Func Offset: 0xc0
	// Line 454, Address: 0x101b05c, Func Offset: 0xcc
	// Line 455, Address: 0x101b068, Func Offset: 0xd8
	// Line 456, Address: 0x101b074, Func Offset: 0xe4
	// Line 457, Address: 0x101b080, Func Offset: 0xf0
	// Func End, Address: 0x101b094, Func Offset: 0x104
}

// 
// Start address: 0x101b0a0
void flow_move0(_anon0* flowerwk)
{
	short y_move;
	short flower_index;
	unsigned char* fwcnt_adr;
	// Line 460, Address: 0x101b0a0, Func Offset: 0
	// Line 461, Address: 0x101b0b8, Func Offset: 0x18
	// Line 464, Address: 0x101b0c0, Func Offset: 0x20
	// Line 465, Address: 0x101b0d4, Func Offset: 0x34
	// Line 466, Address: 0x101b0e4, Func Offset: 0x44
	// Line 467, Address: 0x101b0f4, Func Offset: 0x54
	// Line 468, Address: 0x101b10c, Func Offset: 0x6c
	// Line 469, Address: 0x101b11c, Func Offset: 0x7c
	// Line 470, Address: 0x101b154, Func Offset: 0xb4
	// Line 471, Address: 0x101b178, Func Offset: 0xd8
	// Line 473, Address: 0x101b19c, Func Offset: 0xfc
	// Line 474, Address: 0x101b1a8, Func Offset: 0x108
	// Line 475, Address: 0x101b1b4, Func Offset: 0x114
	// Line 476, Address: 0x101b1c0, Func Offset: 0x120
	// Line 477, Address: 0x101b1cc, Func Offset: 0x12c
	// Line 478, Address: 0x101b1d4, Func Offset: 0x134
	// Line 479, Address: 0x101b1e4, Func Offset: 0x144
	// Line 482, Address: 0x101b1f0, Func Offset: 0x150
	// Func End, Address: 0x101b20c, Func Offset: 0x16c
}

// 
// Start address: 0x101b210
void flow_move1(_anon0* flowerwk)
{
	// Line 485, Address: 0x101b210, Func Offset: 0
	// Line 486, Address: 0x101b21c, Func Offset: 0xc
	// Line 487, Address: 0x101b230, Func Offset: 0x20
	// Func End, Address: 0x101b240, Func Offset: 0x30
}

// 
// Start address: 0x101b240
unsigned char* flow_sub(_anon0* flowerwk)
{
	short index;
	// Line 490, Address: 0x101b240, Func Offset: 0
	// Line 493, Address: 0x101b24c, Func Offset: 0xc
	// Line 494, Address: 0x101b294, Func Offset: 0x54
	// Line 495, Address: 0x101b2a8, Func Offset: 0x68
	// Func End, Address: 0x101b2b8, Func Offset: 0x78
}

// 
// Start address: 0x101b2c0
short flow_sub1(unsigned char fl_counter)
{
	short flower_index;
	// Line 498, Address: 0x101b2c0, Func Offset: 0
	// Line 501, Address: 0x101b2cc, Func Offset: 0xc
	// Line 504, Address: 0x101b30c, Func Offset: 0x4c
	// Line 505, Address: 0x101b310, Func Offset: 0x50
	// Func End, Address: 0x101b320, Func Offset: 0x60
}

// 
// Start address: 0x101b320
void flow_move2(_anon0* flowerwk)
{
	// Line 508, Address: 0x101b320, Func Offset: 0
	// Line 509, Address: 0x101b32c, Func Offset: 0xc
	// Line 511, Address: 0x101b338, Func Offset: 0x18
	// Line 512, Address: 0x101b344, Func Offset: 0x24
	// Line 513, Address: 0x101b350, Func Offset: 0x30
	// Func End, Address: 0x101b360, Func Offset: 0x40
}

// 
// Start address: 0x101b360
void flow_move3(_anon0* flowerwk)
{
	// Line 516, Address: 0x101b360, Func Offset: 0
	// Line 517, Address: 0x101b36c, Func Offset: 0xc
	// Line 518, Address: 0x101b378, Func Offset: 0x18
	// Line 519, Address: 0x101b384, Func Offset: 0x24
	// Line 520, Address: 0x101b390, Func Offset: 0x30
	// Func End, Address: 0x101b3a0, Func Offset: 0x40
}

// 
// Start address: 0x101b3a0
void exit2(_anon0* exitwk)
{
	// Line 679, Address: 0x101b3a0, Func Offset: 0
	// Line 680, Address: 0x101b3ac, Func Offset: 0xc
	// Line 682, Address: 0x101b3e0, Func Offset: 0x40
	// Line 683, Address: 0x101b3ec, Func Offset: 0x4c
	// Line 685, Address: 0x101b3f4, Func Offset: 0x54
	// Line 686, Address: 0x101b400, Func Offset: 0x60
	// Line 688, Address: 0x101b408, Func Offset: 0x68
	// Line 693, Address: 0x101b414, Func Offset: 0x74
	// Func End, Address: 0x101b424, Func Offset: 0x84
}

// 
// Start address: 0x101b430
void exit2_init(_anon0* exitwk)
{
	// Line 696, Address: 0x101b430, Func Offset: 0
	// Line 697, Address: 0x101b43c, Func Offset: 0xc
	// Line 698, Address: 0x101b44c, Func Offset: 0x1c
	// Line 699, Address: 0x101b458, Func Offset: 0x28
	// Line 700, Address: 0x101b464, Func Offset: 0x34
	// Line 701, Address: 0x101b474, Func Offset: 0x44
	// Line 702, Address: 0x101b480, Func Offset: 0x50
	// Line 704, Address: 0x101b490, Func Offset: 0x60
	// Line 705, Address: 0x101b4c0, Func Offset: 0x90
	// Line 706, Address: 0x101b4cc, Func Offset: 0x9c
	// Line 707, Address: 0x101b4d8, Func Offset: 0xa8
	// Func End, Address: 0x101b4e8, Func Offset: 0xb8
}

// 
// Start address: 0x101b4f0
void exit2_move(_anon0* exitwk)
{
	// Line 710, Address: 0x101b4f0, Func Offset: 0
	// Line 711, Address: 0x101b4fc, Func Offset: 0xc
	// Line 712, Address: 0x101b50c, Func Offset: 0x1c
	// Line 713, Address: 0x101b51c, Func Offset: 0x2c
	// Line 714, Address: 0x101b530, Func Offset: 0x40
	// Line 715, Address: 0x101b53c, Func Offset: 0x4c
	// Func End, Address: 0x101b54c, Func Offset: 0x5c
}

// 
// Start address: 0x101b550
void exit2_erase(_anon0* exitwk)
{
	// Line 718, Address: 0x101b550, Func Offset: 0
	// Line 719, Address: 0x101b55c, Func Offset: 0xc
	// Line 720, Address: 0x101b568, Func Offset: 0x18
	// Func End, Address: 0x101b578, Func Offset: 0x28
}

// 
// Start address: 0x101b580
void baria(_anon0* bariawk)
{
	// Line 730, Address: 0x101b580, Func Offset: 0
	// Line 731, Address: 0x101b58c, Func Offset: 0xc
	// Line 733, Address: 0x101b5cc, Func Offset: 0x4c
	// Line 734, Address: 0x101b5d8, Func Offset: 0x58
	// Line 736, Address: 0x101b5e0, Func Offset: 0x60
	// Line 737, Address: 0x101b5ec, Func Offset: 0x6c
	// Line 739, Address: 0x101b5f4, Func Offset: 0x74
	// Line 740, Address: 0x101b600, Func Offset: 0x80
	// Line 742, Address: 0x101b608, Func Offset: 0x88
	// Line 747, Address: 0x101b614, Func Offset: 0x94
	// Func End, Address: 0x101b624, Func Offset: 0xa4
}

// 
// Start address: 0x101b630
void bariainit(_anon0* bariawk)
{
	// Line 750, Address: 0x101b630, Func Offset: 0
	// Line 751, Address: 0x101b638, Func Offset: 0x8
	// Line 752, Address: 0x101b648, Func Offset: 0x18
	// Line 753, Address: 0x101b658, Func Offset: 0x28
	// Line 754, Address: 0x101b664, Func Offset: 0x34
	// Line 755, Address: 0x101b670, Func Offset: 0x40
	// Line 756, Address: 0x101b67c, Func Offset: 0x4c
	// Line 757, Address: 0x101b688, Func Offset: 0x58
	// Line 758, Address: 0x101b6a0, Func Offset: 0x70
	// Line 759, Address: 0x101b6b0, Func Offset: 0x80
	// Line 760, Address: 0x101b6cc, Func Offset: 0x9c
	// Line 761, Address: 0x101b6dc, Func Offset: 0xac
	// Func End, Address: 0x101b6e8, Func Offset: 0xb8
}

// 
// Start address: 0x101b6f0
void bariamove(_anon0* bariawk)
{
	// Line 764, Address: 0x101b6f0, Func Offset: 0
	// Line 765, Address: 0x101b6fc, Func Offset: 0xc
	// Line 766, Address: 0x101b724, Func Offset: 0x34
	// Line 767, Address: 0x101b754, Func Offset: 0x64
	// Line 768, Address: 0x101b764, Func Offset: 0x74
	// Line 769, Address: 0x101b774, Func Offset: 0x84
	// Line 777, Address: 0x101b784, Func Offset: 0x94
	// Line 778, Address: 0x101b798, Func Offset: 0xa8
	// Line 779, Address: 0x101b7a4, Func Offset: 0xb4
	// Func End, Address: 0x101b7b4, Func Offset: 0xc4
}

// 
// Start address: 0x101b7c0
void mutekimove(_anon0* bariawk)
{
	// Line 782, Address: 0x101b7c0, Func Offset: 0
	// Line 783, Address: 0x101b7cc, Func Offset: 0xc
	// Line 784, Address: 0x101b7e0, Func Offset: 0x20
	// Line 785, Address: 0x101b808, Func Offset: 0x48
	// Line 786, Address: 0x101b814, Func Offset: 0x54
	// Func End, Address: 0x101b824, Func Offset: 0x64
}

// 
// Start address: 0x101b830
void backtomove(_anon0* bariawk)
{
	// Line 789, Address: 0x101b830, Func Offset: 0
	// Line 790, Address: 0x101b83c, Func Offset: 0xc
	// Line 791, Address: 0x101b864, Func Offset: 0x34
	// Line 792, Address: 0x101b870, Func Offset: 0x40
	// Func End, Address: 0x101b880, Func Offset: 0x50
}

// 
// Start address: 0x101b880
void muteki_sub(_anon0* bariawk)
{
	_anon7 ppw_offset;
	unsigned char cal_no;
	// Line 796, Address: 0x101b880, Func Offset: 0
	// Line 807, Address: 0x101b890, Func Offset: 0x10
	// Line 808, Address: 0x101b89c, Func Offset: 0x1c
	// Line 809, Address: 0x101b8b8, Func Offset: 0x38
	// Line 810, Address: 0x101b8d0, Func Offset: 0x50
	// Line 811, Address: 0x101b8ec, Func Offset: 0x6c
	// Line 812, Address: 0x101b904, Func Offset: 0x84
	// Line 813, Address: 0x101b910, Func Offset: 0x90
	// Line 814, Address: 0x101b928, Func Offset: 0xa8
	// Line 815, Address: 0x101b948, Func Offset: 0xc8
	// Line 817, Address: 0x101b950, Func Offset: 0xd0
	// Line 818, Address: 0x101b98c, Func Offset: 0x10c
	// Line 820, Address: 0x101b9cc, Func Offset: 0x14c
	// Line 821, Address: 0x101b9dc, Func Offset: 0x15c
	// Line 822, Address: 0x101b9f0, Func Offset: 0x170
	// Line 823, Address: 0x101b9fc, Func Offset: 0x17c
	// Func End, Address: 0x101ba10, Func Offset: 0x190
}

// 
// Start address: 0x101ba10
void actionsub0(_anon0* bariawk)
{
	// Line 827, Address: 0x101ba10, Func Offset: 0
	// Line 828, Address: 0x101ba1c, Func Offset: 0xc
	// Line 830, Address: 0x101ba38, Func Offset: 0x28
	// Line 831, Address: 0x101ba68, Func Offset: 0x58
	// Line 832, Address: 0x101ba74, Func Offset: 0x64
	// Func End, Address: 0x101ba84, Func Offset: 0x74
}

// 
// Start address: 0x101ba90
void test_act(_anon0* testwk)
{
	// Line 957, Address: 0x101ba90, Func Offset: 0
	// Line 958, Address: 0x101ba9c, Func Offset: 0xc
	// Line 959, Address: 0x101baa8, Func Offset: 0x18
	// Func End, Address: 0x101bab8, Func Offset: 0x28
}

// 
// Start address: 0x101bac0
void mizukiri(_anon0* mizukiwk)
{
	// Line 962, Address: 0x101bac0, Func Offset: 0
	// Line 963, Address: 0x101bacc, Func Offset: 0xc
	// Line 964, Address: 0x101bad8, Func Offset: 0x18
	// Func End, Address: 0x101bae8, Func Offset: 0x28
}

// 
// Start address: 0x101baf0
void futa(_anon0* futawk)
{
	// Line 967, Address: 0x101baf0, Func Offset: 0
	// Line 968, Address: 0x101bafc, Func Offset: 0xc
	// Line 969, Address: 0x101bb08, Func Offset: 0x18
	// Func End, Address: 0x101bb18, Func Offset: 0x28
}

// 
// Start address: 0x101bb20
void exit2_set(_anon0* testwk)
{
	// Line 972, Address: 0x101bb20, Func Offset: 0
	// Line 973, Address: 0x101bb2c, Func Offset: 0xc
	// Line 974, Address: 0x101bb38, Func Offset: 0x18
	// Func End, Address: 0x101bb48, Func Offset: 0x28
}

// 
// Start address: 0x101bb50
void plairset()
{
	short wD0;
	// Line 977, Address: 0x101bb50, Func Offset: 0
	// Line 980, Address: 0x101bb5c, Func Offset: 0xc
	// Line 981, Address: 0x101bb78, Func Offset: 0x28
	// Line 982, Address: 0x101bb84, Func Offset: 0x34
	// Line 984, Address: 0x101bbac, Func Offset: 0x5c
	// Line 986, Address: 0x101bbc8, Func Offset: 0x78
	// Line 988, Address: 0x101bbe4, Func Offset: 0x94
	// Line 991, Address: 0x101bbf0, Func Offset: 0xa0
	// Line 992, Address: 0x101bbfc, Func Offset: 0xac
	// Line 993, Address: 0x101bc04, Func Offset: 0xb4
	// Func End, Address: 0x101bc18, Func Offset: 0xc8
}

// 
// Start address: 0x101bc20
void plawamaster(_anon0* pActwk)
{
	// Line 1207, Address: 0x101bc20, Func Offset: 0
	// Line 1208, Address: 0x101bc2c, Func Offset: 0xc
	// Line 1209, Address: 0x101bc3c, Func Offset: 0x1c
	// Line 1210, Address: 0x101bc54, Func Offset: 0x34
	// Line 1211, Address: 0x101bc6c, Func Offset: 0x4c
	// Line 1212, Address: 0x101bc94, Func Offset: 0x74
	// Line 1213, Address: 0x101bca0, Func Offset: 0x80
	// Line 1215, Address: 0x101bca8, Func Offset: 0x88
	// Line 1216, Address: 0x101bcb4, Func Offset: 0x94
	// Line 1217, Address: 0x101bcc0, Func Offset: 0xa0
	// Line 1219, Address: 0x101bcd8, Func Offset: 0xb8
	// Line 1220, Address: 0x101bcf4, Func Offset: 0xd4
	// Line 1221, Address: 0x101bd10, Func Offset: 0xf0
	// Line 1222, Address: 0x101bd2c, Func Offset: 0x10c
	// Line 1224, Address: 0x101bd48, Func Offset: 0x128
	// Line 1226, Address: 0x101bd70, Func Offset: 0x150
	// Line 1227, Address: 0x101bd94, Func Offset: 0x174
	// Line 1228, Address: 0x101bda4, Func Offset: 0x184
	// Line 1236, Address: 0x101bdb4, Func Offset: 0x194
	// Line 1237, Address: 0x101bde0, Func Offset: 0x1c0
	// Line 1238, Address: 0x101bdec, Func Offset: 0x1cc
	// Line 1241, Address: 0x101bdf4, Func Offset: 0x1d4
	// Line 1242, Address: 0x101bdfc, Func Offset: 0x1dc
	// Line 1243, Address: 0x101be08, Func Offset: 0x1e8
	// Line 1244, Address: 0x101be14, Func Offset: 0x1f4
	// Line 1245, Address: 0x101be20, Func Offset: 0x200
	// Line 1246, Address: 0x101be2c, Func Offset: 0x20c
	// Line 1248, Address: 0x101be38, Func Offset: 0x218
	// Line 1249, Address: 0x101be40, Func Offset: 0x220
	// Line 1250, Address: 0x101be4c, Func Offset: 0x22c
	// Line 1253, Address: 0x101be60, Func Offset: 0x240
	// Line 1254, Address: 0x101be74, Func Offset: 0x254
	// Line 1255, Address: 0x101be7c, Func Offset: 0x25c
	// Line 1256, Address: 0x101be84, Func Offset: 0x264
	// Line 1257, Address: 0x101be8c, Func Offset: 0x26c
	// Line 1258, Address: 0x101be94, Func Offset: 0x274
	// Line 1259, Address: 0x101bea0, Func Offset: 0x280
	// Line 1262, Address: 0x101bea8, Func Offset: 0x288
	// Line 1263, Address: 0x101bec8, Func Offset: 0x2a8
	// Line 1264, Address: 0x101bed4, Func Offset: 0x2b4
	// Line 1267, Address: 0x101bedc, Func Offset: 0x2bc
	// Line 1268, Address: 0x101beec, Func Offset: 0x2cc
	// Line 1269, Address: 0x101bf00, Func Offset: 0x2e0
	// Line 1270, Address: 0x101bf0c, Func Offset: 0x2ec
	// Func End, Address: 0x101bf1c, Func Offset: 0x2fc
}

// 
// Start address: 0x101bf20
void plawamaster_jump0(_anon0* pActwk)
{
	// Line 1274, Address: 0x101bf20, Func Offset: 0
	// Line 1275, Address: 0x101bf2c, Func Offset: 0xc
	// Line 1276, Address: 0x101bf38, Func Offset: 0x18
	// Func End, Address: 0x101bf48, Func Offset: 0x28
}

// 
// Start address: 0x101bf50
void plawamaster_jump(_anon0* pActwk)
{
	// Line 1280, Address: 0x101bf50, Func Offset: 0
	// Line 1281, Address: 0x101bf5c, Func Offset: 0xc
	// Line 1282, Address: 0x101bf6c, Func Offset: 0x1c
	// Line 1283, Address: 0x101bf94, Func Offset: 0x44
	// Line 1284, Address: 0x101bfa0, Func Offset: 0x50
	// Func End, Address: 0x101bfb0, Func Offset: 0x60
}

// 
// Start address: 0x101bfb0
void plawamaster_jump2(_anon0* pActwk)
{
	_anon0* pNewactwk;
	short wD0;
	// Line 1288, Address: 0x101bfb0, Func Offset: 0
	// Line 1292, Address: 0x101bfc0, Func Offset: 0x10
	// Line 1293, Address: 0x101bfe4, Func Offset: 0x34
	// Line 1294, Address: 0x101bff8, Func Offset: 0x48
	// Line 1295, Address: 0x101c004, Func Offset: 0x54
	// Line 1296, Address: 0x101c014, Func Offset: 0x64
	// Line 1297, Address: 0x101c020, Func Offset: 0x70
	// Line 1298, Address: 0x101c038, Func Offset: 0x88
	// Line 1299, Address: 0x101c044, Func Offset: 0x94
	// Line 1302, Address: 0x101c050, Func Offset: 0xa0
	// Line 1303, Address: 0x101c060, Func Offset: 0xb0
	// Line 1304, Address: 0x101c070, Func Offset: 0xc0
	// Line 1306, Address: 0x101c07c, Func Offset: 0xcc
	// Line 1307, Address: 0x101c08c, Func Offset: 0xdc
	// Line 1308, Address: 0x101c09c, Func Offset: 0xec
	// Line 1309, Address: 0x101c0a0, Func Offset: 0xf0
	// Line 1310, Address: 0x101c0c4, Func Offset: 0x114
	// Line 1311, Address: 0x101c0e0, Func Offset: 0x130
	// Line 1312, Address: 0x101c108, Func Offset: 0x158
	// Line 1315, Address: 0x101c110, Func Offset: 0x160
	// Line 1316, Address: 0x101c128, Func Offset: 0x178
	// Line 1317, Address: 0x101c134, Func Offset: 0x184
	// Line 1318, Address: 0x101c148, Func Offset: 0x198
	// Line 1319, Address: 0x101c160, Func Offset: 0x1b0
	// Line 1320, Address: 0x101c170, Func Offset: 0x1c0
	// Line 1321, Address: 0x101c198, Func Offset: 0x1e8
	// Line 1324, Address: 0x101c1a4, Func Offset: 0x1f4
	// Line 1325, Address: 0x101c1b4, Func Offset: 0x204
	// Line 1326, Address: 0x101c1cc, Func Offset: 0x21c
	// Line 1327, Address: 0x101c1dc, Func Offset: 0x22c
	// Line 1328, Address: 0x101c204, Func Offset: 0x254
	// Line 1334, Address: 0x101c210, Func Offset: 0x260
	// Line 1338, Address: 0x101c23c, Func Offset: 0x28c
	// Func End, Address: 0x101c250, Func Offset: 0x2a0
}

// 
// Start address: 0x101c250
void plawa(_anon0* pActwk)
{
	void(*plawa_move_tbl)(_anon0*)[9];
	// Line 1347, Address: 0x101c250, Func Offset: 0
	// Line 1348, Address: 0x101c25c, Func Offset: 0xc
	// Line 1360, Address: 0x101c288, Func Offset: 0x38
	// Line 1361, Address: 0x101c2c4, Func Offset: 0x74
	// Func End, Address: 0x101c2d4, Func Offset: 0x84
}

// 
// Start address: 0x101c2e0
void plawainit(_anon0* pActwk)
{
	// Line 1370, Address: 0x101c2e0, Func Offset: 0
	// Line 1371, Address: 0x101c2ec, Func Offset: 0xc
	// Line 1372, Address: 0x101c2fc, Func Offset: 0x1c
	// Line 1373, Address: 0x101c30c, Func Offset: 0x2c
	// Line 1374, Address: 0x101c31c, Func Offset: 0x3c
	// Line 1375, Address: 0x101c328, Func Offset: 0x48
	// Line 1376, Address: 0x101c334, Func Offset: 0x54
	// Line 1377, Address: 0x101c340, Func Offset: 0x60
	// Line 1378, Address: 0x101c35c, Func Offset: 0x7c
	// Line 1379, Address: 0x101c36c, Func Offset: 0x8c
	// Line 1380, Address: 0x101c37c, Func Offset: 0x9c
	// Line 1381, Address: 0x101c38c, Func Offset: 0xac
	// Line 1382, Address: 0x101c3ac, Func Offset: 0xcc
	// Line 1383, Address: 0x101c3b8, Func Offset: 0xd8
	// Line 1386, Address: 0x101c3c0, Func Offset: 0xe0
	// Line 1387, Address: 0x101c3d0, Func Offset: 0xf0
	// Line 1388, Address: 0x101c3e0, Func Offset: 0x100
	// Line 1389, Address: 0x101c3ec, Func Offset: 0x10c
	// Line 1391, Address: 0x101c3f8, Func Offset: 0x118
	// Func End, Address: 0x101c408, Func Offset: 0x128
}

// 
// Start address: 0x101c410
void plawamove(_anon0* pActwk)
{
	// Line 1400, Address: 0x101c410, Func Offset: 0
	// Line 1401, Address: 0x101c41c, Func Offset: 0xc
	// Line 1402, Address: 0x101c430, Func Offset: 0x20
	// Line 1403, Address: 0x101c43c, Func Offset: 0x2c
	// Func End, Address: 0x101c44c, Func Offset: 0x3c
}

// 
// Start address: 0x101c450
void plawamove2(_anon0* pActwk)
{
	// Line 1412, Address: 0x101c450, Func Offset: 0
	// Line 1413, Address: 0x101c45c, Func Offset: 0xc
	// Line 1416, Address: 0x101c488, Func Offset: 0x38
	// Line 1417, Address: 0x101c494, Func Offset: 0x44
	// Line 1418, Address: 0x101c4a4, Func Offset: 0x54
	// Line 1420, Address: 0x101c4cc, Func Offset: 0x7c
	// Line 1421, Address: 0x101c4d8, Func Offset: 0x88
	// Line 1425, Address: 0x101c4e0, Func Offset: 0x90
	// Line 1427, Address: 0x101c500, Func Offset: 0xb0
	// Line 1429, Address: 0x101c56c, Func Offset: 0x11c
	// Line 1430, Address: 0x101c578, Func Offset: 0x128
	// Line 1432, Address: 0x101c584, Func Offset: 0x134
	// Line 1433, Address: 0x101c5b0, Func Offset: 0x160
	// Line 1434, Address: 0x101c5bc, Func Offset: 0x16c
	// Func End, Address: 0x101c5cc, Func Offset: 0x17c
}

// 
// Start address: 0x101c5d0
void plawamove3(_anon0* pActwk)
{
	// Line 1443, Address: 0x101c5d0, Func Offset: 0
	// Line 1444, Address: 0x101c5dc, Func Offset: 0xc
	// Line 1445, Address: 0x101c5e8, Func Offset: 0x18
	// Line 1446, Address: 0x101c5fc, Func Offset: 0x2c
	// Line 1447, Address: 0x101c608, Func Offset: 0x38
	// Func End, Address: 0x101c618, Func Offset: 0x48
}

// 
// Start address: 0x101c620
void plawamove4(_anon0* pActwk)
{
	// Line 1456, Address: 0x101c620, Func Offset: 0
	// Line 1457, Address: 0x101c62c, Func Offset: 0xc
	// Line 1458, Address: 0x101c638, Func Offset: 0x18
	// Func End, Address: 0x101c648, Func Offset: 0x28
}

// 
// Start address: 0x101c650
void plawamove5(_anon0* pActwk)
{
	// Line 1467, Address: 0x101c650, Func Offset: 0
	// Line 1468, Address: 0x101c65c, Func Offset: 0xc
	// Line 1469, Address: 0x101c678, Func Offset: 0x28
	// Line 1470, Address: 0x101c684, Func Offset: 0x34
	// Line 1472, Address: 0x101c68c, Func Offset: 0x3c
	// Line 1473, Address: 0x101c6ac, Func Offset: 0x5c
	// Line 1474, Address: 0x101c6b8, Func Offset: 0x68
	// Line 1475, Address: 0x101c6c8, Func Offset: 0x78
	// Line 1477, Address: 0x101c6f0, Func Offset: 0xa0
	// Line 1478, Address: 0x101c6fc, Func Offset: 0xac
	// Line 1481, Address: 0x101c704, Func Offset: 0xb4
	// Line 1482, Address: 0x101c718, Func Offset: 0xc8
	// Line 1483, Address: 0x101c744, Func Offset: 0xf4
	// Line 1484, Address: 0x101c750, Func Offset: 0x100
	// Func End, Address: 0x101c760, Func Offset: 0x110
}

// 
// Start address: 0x101c760
void plawasub(_anon0* pActwk)
{
	// Line 1493, Address: 0x101c760, Func Offset: 0
	// Line 1494, Address: 0x101c768, Func Offset: 0x8
	// Line 1495, Address: 0x101c778, Func Offset: 0x18
	// Line 1496, Address: 0x101c798, Func Offset: 0x38
	// Line 1497, Address: 0x101c7b4, Func Offset: 0x54
	// Line 1498, Address: 0x101c7c0, Func Offset: 0x60
	// Line 1499, Address: 0x101c7c8, Func Offset: 0x68
	// Line 1500, Address: 0x101c7d4, Func Offset: 0x74
	// Line 1501, Address: 0x101c80c, Func Offset: 0xac
	// Line 1502, Address: 0x101c844, Func Offset: 0xe4
	// Line 1507, Address: 0x101c850, Func Offset: 0xf0
	// Func End, Address: 0x101c85c, Func Offset: 0xfc
}

// 
// Start address: 0x101c860
void wave(_anon0* pActwk)
{
	void(*wave_move_tbl)(_anon0*)[2];
	// Line 1517, Address: 0x101c860, Func Offset: 0
	// Line 1518, Address: 0x101c86c, Func Offset: 0xc
	// Line 1523, Address: 0x101c888, Func Offset: 0x28
	// Line 1524, Address: 0x101c8c4, Func Offset: 0x64
	// Line 1525, Address: 0x101c8d0, Func Offset: 0x70
	// Func End, Address: 0x101c8e0, Func Offset: 0x80
}

// 
// Start address: 0x101c8e0
void wave_init(_anon0* pActwk)
{
	// Line 1534, Address: 0x101c8e0, Func Offset: 0
	// Line 1535, Address: 0x101c8ec, Func Offset: 0xc
	// Line 1536, Address: 0x101c8fc, Func Offset: 0x1c
	// Line 1537, Address: 0x101c908, Func Offset: 0x28
	// Line 1538, Address: 0x101c918, Func Offset: 0x38
	// Line 1539, Address: 0x101c928, Func Offset: 0x48
	// Line 1540, Address: 0x101c934, Func Offset: 0x54
	// Func End, Address: 0x101c944, Func Offset: 0x64
}

// 
// Start address: 0x101c950
void wave_move(_anon0* pActwk)
{
	short wave_tbl[2];
	// Line 1549, Address: 0x101c950, Func Offset: 0
	// Line 1550, Address: 0x101c95c, Func Offset: 0xc
	// Line 1554, Address: 0x101c978, Func Offset: 0x28
	// Line 1555, Address: 0x101c99c, Func Offset: 0x4c
	// Line 1557, Address: 0x101c9a4, Func Offset: 0x54
	// Line 1558, Address: 0x101ca04, Func Offset: 0xb4
	// Line 1559, Address: 0x101ca28, Func Offset: 0xd8
	// Line 1560, Address: 0x101ca3c, Func Offset: 0xec
	// Func End, Address: 0x101ca4c, Func Offset: 0xfc
}

// 
// Start address: 0x101ca50
void bou(_anon0* pActwk)
{
	void(*bou_move_tbl)(_anon0*)[4];
	// Line 1569, Address: 0x101ca50, Func Offset: 0
	// Line 1570, Address: 0x101ca5c, Func Offset: 0xc
	// Line 1577, Address: 0x101ca88, Func Offset: 0x38
	// Line 1578, Address: 0x101cac4, Func Offset: 0x74
	// Line 1579, Address: 0x101cad0, Func Offset: 0x80
	// Line 1580, Address: 0x101cadc, Func Offset: 0x8c
	// Func End, Address: 0x101caec, Func Offset: 0x9c
}

// 
// Start address: 0x101caf0
void bou_init(_anon0* pActwk)
{
	// Line 1589, Address: 0x101caf0, Func Offset: 0
	// Line 1590, Address: 0x101cafc, Func Offset: 0xc
	// Line 1591, Address: 0x101cb0c, Func Offset: 0x1c
	// Line 1592, Address: 0x101cb18, Func Offset: 0x28
	// Line 1593, Address: 0x101cb28, Func Offset: 0x38
	// Line 1594, Address: 0x101cb38, Func Offset: 0x48
	// Line 1595, Address: 0x101cb44, Func Offset: 0x54
	// Func End, Address: 0x101cb54, Func Offset: 0x64
}

// 
// Start address: 0x101cb60
void bou_move0(_anon0* pActwk)
{
	short wD0;
	short wD1;
	// Line 1604, Address: 0x101cb60, Func Offset: 0
	// Line 1607, Address: 0x101cb74, Func Offset: 0x14
	// Line 1608, Address: 0x101cb88, Func Offset: 0x28
	// Line 1610, Address: 0x101cb9c, Func Offset: 0x3c
	// Line 1612, Address: 0x101cbac, Func Offset: 0x4c
	// Line 1613, Address: 0x101cbb0, Func Offset: 0x50
	// Line 1615, Address: 0x101cbbc, Func Offset: 0x5c
	// Line 1616, Address: 0x101cbd4, Func Offset: 0x74
	// Line 1617, Address: 0x101cbe0, Func Offset: 0x80
	// Line 1620, Address: 0x101cbec, Func Offset: 0x8c
	// Line 1621, Address: 0x101cc00, Func Offset: 0xa0
	// Line 1622, Address: 0x101cc18, Func Offset: 0xb8
	// Line 1623, Address: 0x101cc2c, Func Offset: 0xcc
	// Line 1624, Address: 0x101cc40, Func Offset: 0xe0
	// Line 1625, Address: 0x101cc4c, Func Offset: 0xec
	// Line 1626, Address: 0x101cc58, Func Offset: 0xf8
	// Line 1630, Address: 0x101cc74, Func Offset: 0x114
	// Line 1632, Address: 0x101cc84, Func Offset: 0x124
	// Func End, Address: 0x101cc9c, Func Offset: 0x13c
}

// 
// Start address: 0x101cca0
void bou_move1(_anon0* pActwk)
{
	// Line 1641, Address: 0x101cca0, Func Offset: 0
	// Line 1644, Address: 0x101cca8, Func Offset: 0x8
	// Line 1646, Address: 0x101ccc8, Func Offset: 0x28
	// Line 1647, Address: 0x101cce0, Func Offset: 0x40
	// Line 1648, Address: 0x101ccf8, Func Offset: 0x58
	// Line 1649, Address: 0x101cd3c, Func Offset: 0x9c
	// Line 1650, Address: 0x101cd60, Func Offset: 0xc0
	// Line 1653, Address: 0x101cd68, Func Offset: 0xc8
	// Line 1654, Address: 0x101cd80, Func Offset: 0xe0
	// Line 1655, Address: 0x101cdc4, Func Offset: 0x124
	// Line 1658, Address: 0x101cde8, Func Offset: 0x148
	// Line 1662, Address: 0x101cdf0, Func Offset: 0x150
	// Line 1663, Address: 0x101ce04, Func Offset: 0x164
	// Line 1664, Address: 0x101ce10, Func Offset: 0x170
	// Line 1665, Address: 0x101ce20, Func Offset: 0x180
	// Func End, Address: 0x101ce2c, Func Offset: 0x18c
}

// 
// Start address: 0x101ce30
void bou_move2()
{
	// Line 1674, Address: 0x101ce30, Func Offset: 0
	// Line 1676, Address: 0x101ce34, Func Offset: 0x4
	// Func End, Address: 0x101ce40, Func Offset: 0x10
}

// 
// Start address: 0x101ce40
int bou_coli(_anon0* pActwk)
{
	short wD0;
	// Line 1686, Address: 0x101ce40, Func Offset: 0
	// Line 1689, Address: 0x101ce4c, Func Offset: 0xc
	// Line 1691, Address: 0x101ce68, Func Offset: 0x28
	// Line 1692, Address: 0x101cea0, Func Offset: 0x60
	// Line 1693, Address: 0x101cebc, Func Offset: 0x7c
	// Line 1695, Address: 0x101cedc, Func Offset: 0x9c
	// Line 1696, Address: 0x101cf14, Func Offset: 0xd4
	// Line 1697, Address: 0x101cf30, Func Offset: 0xf0
	// Line 1699, Address: 0x101cf50, Func Offset: 0x110
	// Line 1700, Address: 0x101cf54, Func Offset: 0x114
	// Func End, Address: 0x101cf64, Func Offset: 0x124
}

