#include "stdafx.h"

const _EXT CPU_Props::exts[ISA_LAST] = {
// Name								xcr0			feat
	{"---GPR----------",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"RDTSC",						_XCR0_EMPTY,	_FEAT01_EDX_RDTSC},
	{"RDTSCP",						_XCR0_EMPTY,	_EFEAT01_EDX_RDTSCP},
	{"CMOV",						_XCR0_EMPTY,	_FEAT01_EDX_CMOV},
	{"CMPX8",						_XCR0_EMPTY,	_FEAT01_EDX_CMPX8},
	{"CMPX16",						_XCR0_EMPTY,	_FEAT01_ECX_CMPX16},
	{"AMD64",						_XCR0_EMPTY,	_EFEAT01_EDX_AMD64},
	{"LAHF",						_XCR0_EMPTY,	_EFEAT01_ECX_LAHF},
	{"MOVBE",						_XCR0_EMPTY,	_FEAT01_ECX_MOVBE},
	{"ABM",							_XCR0_EMPTY,	_EFEAT01_ECX_ABM},
	{"POPCNT",						_XCR0_EMPTY,	_FEAT01_ECX_POPCNT},
	{"RDRAND",						_XCR0_EMPTY,	_FEAT01_ECX_RDRAND},
	{"RDSEED",						_XCR0_EMPTY,	_FEAT07_EBX_RDSEED},
	{"ADX",							_XCR0_EMPTY,	_FEAT07_EBX_ADX},
	{"BMI",							_XCR0_EMPTY,	_FEAT07_EBX_BMI},
	{"BMI2",						_XCR0_EMPTY,	_FEAT07_EBX_BMI2},
	{"MOVDIRI",						_XCR0_EMPTY,	_FEAT07_ECX_MOVDIRI},
	{"MOVDIR64B",					_XCR0_EMPTY,	_FEAT07_ECX_MOVDIR64B},
	{"RAO-INT",						_XCR0_EMPTY,	_FEAT0701_EAX_RAO_INT},
	{"CMPCCXADD",					_XCR0_EMPTY,	_FEAT0701_EAX_CMPCCXADD},
	{"---SIMD---------",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"SSE",							_XCR0_EMPTY,	_FEAT01_EDX_SSE},
	{"SSE2",						_XCR0_EMPTY,	_FEAT01_EDX_SSE2},
	{"SSE3",						_XCR0_EMPTY,	_FEAT01_ECX_SSE3},
	{"SSSE3",						_XCR0_EMPTY,	_FEAT01_ECX_SSSE3},
	{"SSE41",						_XCR0_EMPTY,	_FEAT01_ECX_SSE41},
	{"SSE42",						_XCR0_EMPTY,	_FEAT01_ECX_SSE42},
	{"SSE4A",						_XCR0_EMPTY,	_EFEAT01_ECX_SSE4A},
	{"CLMUL",						_XCR0_EMPTY,	_FEAT01_ECX_CLMUL},
	{"AES",							_XCR0_EMPTY,	_FEAT01_ECX_AESNI},
	{"SHA",							_XCR0_EMPTY,	_FEAT07_EBX_SHA},
	{"GFNI",						_XCR0_EMPTY,	_FEAT07_ECX_GFNI},
	{"--VEX-SIMD------",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"AVX",							_XCR0_AVX,		_FEAT01_ECX_AVX},
	{"AVX2",						_XCR0_AVX,		_FEAT07_EBX_AVX2},
	{"FMA",							_XCR0_AVX,		_FEAT01_ECX_FMA3},
	{"F16C",						_XCR0_AVX,		_FEAT01_ECX_F16C},
	{"AVX+GFNI",					_XCR0_AVX,		_FEAT07_ECX_GFNI},
	{"AVX+VAES",					_XCR0_AVX,		_FEAT07_ECX_VAES},
	{"AVX+VPCLMULQDQ",				_XCR0_AVX,		_FEAT07_ECX_VPCLMULQDQ},
	{"AVX_VNNI",					_XCR0_AVX,		_FEAT0701_EAX_AVX_VNNI},
	{"AVX_VNNI_INT8",				_XCR0_AVX,		_FEAT0701_EDX_AVX_VNNI_INT8},
	{"AVX_VNNI_INT16",				_XCR0_AVX,		_FEAT0701_EDX_AVX_VNNI_INT16},
	{"AVX_IFMA",					_XCR0_AVX,		_FEAT0701_EAX_AVX_IFMA},
	{"AVX_NE_CONVERT",				_XCR0_AVX,		_FEAT0701_EDX_AVX_NE_CONVERT},
	{"SHA512",						_XCR0_AVX,		_FEAT0701_EAX_SHA512},
	{"SM3",							_XCR0_AVX,		_FEAT0701_EAX_SM3},
	{"SM4",							_XCR0_AVX,		_FEAT0701_EAX_SM4},
	{"--EVEX-SIMD-----",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"AVX512F",						_XCR0_AVX512,	_FEAT07_EBX_AVX512F},
	{"AVX512CD",					_XCR0_AVX512,	_FEAT07_EBX_AVX512CD},
	{"AVX512ER",					_XCR0_AVX512,	_FEAT07_EBX_AVX512ER},
	{"AVX512PF",					_XCR0_AVX512,	_FEAT07_EBX_AVX512PF},
	{"AVX512BW",					_XCR0_AVX512,	_FEAT07_EBX_AVX512BW},
	{"AVX512DQ",					_XCR0_AVX512,	_FEAT07_EBX_AVX512DQ},
	{"AVX512VL",					_XCR0_AVX512,	_FEAT07_EBX_AVX512VL},
	{"AVX512VBMI",					_XCR0_AVX512,	_FEAT07_ECX_AVX512_VBMI},
	{"AVX512IFMA",					_XCR0_AVX512,	_FEAT07_EBX_AVX512_IFMA},
	{"AVX512VNNI",					_XCR0_AVX512,	_FEAT07_ECX_AVX512_VNNI},
	{"AVX512_4VNNIW",				_XCR0_AVX512,	_FEAT07_EDX_AVX512_4VNNIW},
	{"AVX512_4FMAPS",				_XCR0_AVX512,	_FEAT07_EDX_AVX512_4FMAPS},
	{"AVX512_VPOPCNTDQ",			_XCR0_AVX512,	_FEAT07_ECX_AVX512_VPOPCNTDQ},
	{"AVX512+GFNI",					_XCR0_AVX512,	_FEAT07_ECX_GFNI},
	{"AVX512+VAES",					_XCR0_AVX512,	_FEAT07_ECX_VAES},
	{"AVX512+VPCLMULQDQ",			_XCR0_AVX512,	_FEAT07_ECX_VPCLMULQDQ},
	{"AVX512_BITALG",				_XCR0_AVX512,	_FEAT07_ECX_AVX512_BITALG},
	{"AVX512_VBMI2",				_XCR0_AVX512,	_FEAT07_ECX_AVX512_VBMI2},
	{"AVX512_BF16",					_XCR0_AVX512,	_FEAT0701_EAX_AVX512_BF16},
	{"AVX512_VP2INTERSECT",			_XCR0_AVX512,	_FEAT07_EDX_AVX512_VP2INTERSECT},
	{"AVX512_FP16",					_XCR0_AVX512,	_FEAT07_EDX_AVX512_FP16},
	{"---AMX----------",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"AMX-BF16",					_XCR0_AMX,		_FEAT07_EDX_AMX_BF16},
	{"AMX-INT8",					_XCR0_AMX,		_FEAT07_EDX_AMX_INT8},
	{"AMX-TILE",					_XCR0_AMX,		_FEAT07_EDX_AMX_TILE},
	{"AMX-FP16",					_XCR0_AMX,		_FEAT0701_EAX_AMX_FP16},
	{"AMX-COMPLEX",					_XCR0_AMX,		_FEAT0701_EDX_AMX_COMPLEX},
	{"---CacheLine----",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"PREFETCHW",					_XCR0_EMPTY,	_EFEAT01_ECX_3DNOWPREF},
	{"PREFETCHWT1",					_XCR0_EMPTY,	_FEAT07_ECX_PWT1},
	{"PREFETCHI",					_XCR0_EMPTY,	_FEAT0701_EDX_PREFETCHI},
	{"CLFLUSH",						_XCR0_EMPTY,	_FEAT01_EDX_CLFLUSH},
	{"CLFLUSHOPT",					_XCR0_EMPTY,	_FEAT07_EBX_CLFLUSHOPT},
	{"CLWB",						_XCR0_EMPTY,	_FEAT07_EBX_CLWB},
	{"CLZERO",						_XCR0_EMPTY,	_EFEAT008_EBX_CLZERO},
	{"CLDEMOTE",					_XCR0_EMPTY,	_FEAT07_ECX_CLDEMOTE},
	{"---uCode--------",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"Enh REP MOVSB/STOSB",			_XCR0_EMPTY,	_FEAT07_EBX_ERMS_ENH_REP_MOVSB_STOSB},
	{"Fast short REP MOV",			_XCR0_EMPTY,	_FEAT07_EDX_FSRM_FAST_SHORT_RRP_MOV},
	{"Fast zero-length MOVSB",		_XCR0_EMPTY,	_FEAT0701_EAX_FZLM_FAST_ZERO_LEN_MOVSB},
	{"Fast short REP STOSB",		_XCR0_EMPTY,	_FEAT0701_EAX_FSRS_FAST_SHORT_REP_STOSB},
	{"Fast short REP CMPSB/SCASB",	_XCR0_EMPTY,	_FEAT0701_EAX_FSRC_FAST_SHORT_REP_CMPSB_SCASB},
	{"Fast Short REPE CMPSB",		_XCR0_EMPTY,	_EFEAT21_EAX_FSRC_FAST_SHORT_REPE_CMPSB},
	{"Fast Short REP STOSB/AMD",	_XCR0_EMPTY,	_EFEAT21_EAX_FSRS_FAST_SHORT_REP_STOSB},
	{"---Keylocker----",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"KEYLOCK",						_XCR0_EMPTY,	_FEAT07_ECX_KEYLOCK},
	{"AESKLE",						_KEYLOCK,		_FEAT19_EBX_AESKLE},
	{"WIDE_KL",						_KEYLOCK,		_FEAT19_EBX_WIDE_KL},
	{"---Uncategorized",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"X86",							_XCR0_EMPTY,	_FEAT_NOFEAT},
	{"LNOP",						_XCR0_EMPTY,	_FEAT_NOFEAT},
	{"SERIALIZE",					_XCR0_EMPTY,	_FEAT07_EDX_SERIALIZE},
	{"HYBRID",						_XCR0_EMPTY,	_FEAT07_EDX_HYBRID},
	{"RDPID",						_XCR0_EMPTY,	_FEAT07_ECX_RDPID},
	{"RDPRU",						_XCR0_EMPTY,	_EFEAT008_EBX_RDPRU},
	{"MCOMMIT",						_XCR0_EMPTY,	_EFEAT008_EBX_MCOMMIT},
	{"PCONFIG",						_XCR0_EMPTY,	_FEAT07_EDX_PCONFIG},
	{"---Deprecated---",			_XCR0_EMPTY,	_FEAT_SKIP},
	{"X87",							_XCR0_EMPTY,	_FEAT01_EDX_X87},
	{"MMX",							_XCR0_EMPTY,	_FEAT01_EDX_MMX},
	{"MMX+",						_XCR0_EMPTY,	_EFEAT01_EDX_MMXP},
	{"3DNow!",						_XCR0_EMPTY,	_EFEAT01_EDX_3DNOW},
	{"3DNow!+",						_XCR0_EMPTY,	_EFEAT01_EDX_3DNOWP},
	{"XOP",							_XCR0_AVX,		_EFEAT01_ECX_XOP},
	{"FMA4",						_XCR0_AVX,		_EFEAT01_ECX_FMA4},
	{"TBM",							_XCR0_EMPTY,	_EFEAT01_ECX_TBM},
	{"MPX",							_XCR0_EMPTY,	_FEAT07_EBX_MPX},
	{"HLE",							_XCR0_EMPTY,	_FEAT07_EBX_HLE},
	{"PCOMMIT",						_XCR0_EMPTY,	_FEAT07_EBX_PCOMMIT},
};

const _CPUID_VENDOR CPU_Props::vendors[_VENDOR_LAST] = {
	{_VENDOR_AMD,		{0x69444D41, 0x74656273, 0x21726574}},		//"AMDisbetter!"
	{_VENDOR_AMD,		{0x68747541, 0x69746E65, 0x444D4163}},		//"AuthenticAMD"
	{_VENDOR_CENTAUR,	{0x20414956, 0x20414956, 0x20414956}},		//"VIA VIA VIA "
	{_VENDOR_CENTAUR,	{0x746E6543, 0x48727561, 0x736C7561}},		//"CentaurHauls"
	{_VENDOR_CYRIX,		{0x69727943, 0x736E4978, 0x64616574}},		//"CyrixInstead"
	{_VENDOR_HYGON,		{0x6F677948, 0x6E656273, 0x656E6975}},		//"HygonGenuine"
	{_VENDOR_INTEL,		{0x756E6547, 0x49656E69, 0x6C65746E}},		//"GenuineIntel"
	{_VENDOR_NATIONAL,	{0x646F6547, 0x79622065, 0x43534E20}},		//"Geode by NSC"
	{_VENDOR_NEXGEN,	{0x4778654E, 0x72446E65, 0x6E657669}},		//"NexGenDriven"
	{_VENDOR_SIS,		{0x20536953, 0x20536953, 0x20536953}},		//"SiS SiS SiS "
	{_VENDOR_RDC,		{0x756E6547, 0x43445220, 0x20656E69}},		//"Genuine  RDC"
	{_VENDOR_RISE,		{0x65736952, 0x65736952, 0x65736952}},		//"RiseRiseRise"
	{_VENDOR_TMTA,		{0x6E617254, 0x74656D73, 0x55504361}},		//"TransmetaCPU"
	{_VENDOR_TMTA,		{0x756E6547, 0x54656E69, 0x3638784D}},		//"GenuineTMx86"
	{_VENDOR_UMC,		{0x20434D55, 0x20434D55, 0x20434D55}},		//"UMC UMC UMC "
	{_VENDOR_VORTEX,	{0x74726F56, 0x436F5320, 0x36387865}},		//"Vortex86 SoC"
	{_VENDOR_ZHAOXIN,	{0x68532020, 0x68676E61, 0x20206961}},		//"  Shanghai  "
};

CPU_Props::CPU_Props() : family(0), model(0), stepping(0), hexID(0), fms(0) {
	int level00[4]			= {0, 0, 0, 0};
	int level01[4]			= {0, 0, 0, 0};
	int level07[4]			= {0, 0, 0, 0};
	int level0701[4]		= {0, 0, 0, 0};
	int level19[4]			= {0, 0, 0, 0};
	int level1D[4]			= {0, 0, 0, 0};
	int level1E[4]			= {0, 0, 0, 0};
	int extLevel00[4]		= {0, 0, 0, 0};
	int extLevel01[4]		= {0, 0, 0, 0};
	int extLevel08[4]		= {0, 0, 0, 0};
	int extLevel21[4]		= {0, 0, 0, 0};
	unsigned __int64 xcr0	= 0;

	__cpuid(level00, 0x0);
	if (level00[_REG_EAX] >= 1)
		__cpuid(level01, 0x1);
	if (level00[_REG_EAX] >= 7)
		__cpuid(level07, 0x7);
	if (level07[_REG_EAX] > 0)
		__cpuidex(level0701, 0x7, 1);
	if (level00[_REG_EAX] >= 0x19)
		__cpuid(level19, 0x19);
	if (level00[_REG_EAX] >= 0x1D) {
		__cpuid(level1D, 0x1D);
		const unsigned int maxPalette = level1D[_REG_EAX];
		for (unsigned int p = 0; p < maxPalette; p++) {
			__cpuidex(level1D, 0x1D, p + 1);
			AMX_palette[p].total_tile_bytes	= level1D[_REG_EAX] & 0xffff;
			AMX_palette[p].bytes_per_tile	= level1D[_REG_EAX] >> 16;
			AMX_palette[p].bytes_per_row	= level1D[_REG_EBX] & 0xffff;
			AMX_palette[p].max_names		= level1D[_REG_EBX] >> 16;
			AMX_palette[p].max_rows			= level1D[_REG_ECX] & 0xffff;

			std::cout << std::dec;
			std::cout << "AMX_palette[" << p <<"].total_tile_bytes: " << AMX_palette[p].total_tile_bytes << std::endl;
			std::cout << "AMX_palette[" << p <<"].bytes_per_tile:   " << AMX_palette[p].bytes_per_tile << std::endl;
			std::cout << "AMX_palette[" << p <<"].bytes_per_row:    " << AMX_palette[p].bytes_per_row << std::endl;
			std::cout << "AMX_palette[" << p <<"].max_names:        " << AMX_palette[p].max_names << std::endl;
			std::cout << "AMX_palette[" << p <<"].max_rows:         " << AMX_palette[p].max_rows << std::endl;
		}
		if (level00[_REG_EAX] >= 0x1E) {
			__cpuid(level1E, 0x1E);
			if (level1E[_REG_EBX] != 0) {
				AMX_TMUL.tmul_maxk	= level1E[_REG_EBX] & 0xff;
				AMX_TMUL.tmul_maxn	= (level1E[_REG_EBX] >> 8) & 0xffff;
				std::cout << "AMX_TMUL.tmul_maxk: " << (unsigned int)AMX_TMUL.tmul_maxk << std::endl;
				std::cout << "AMX_TMUL.tmul_maxn: " << (unsigned int)AMX_TMUL.tmul_maxn << std::endl;
			}
		}
	}
	
	__cpuid(extLevel00, 0x80000000);
	if (extLevel00[_REG_EAX] >= 0x80000001)
		__cpuid(extLevel01, 0x80000001);
	if (extLevel00[_REG_EAX] >= 0x80000008)
		__cpuid(extLevel08, 0x80000008);
	if (extLevel00[_REG_EAX] >= 0x80000021)
		__cpuid(extLevel21, 0x80000021);

	if ((level01[_REG_ECX] & _FEAT01_ECX_OSXSAVE) == _FEAT01_ECX_OSXSAVE)  //OSXSAVE
		xcr0 = _xgetbv(0);

	vendor_num[0] = level00[_REG_EBX];
	vendor_num[1] = level00[_REG_EDX];
	vendor_num[2] = level00[_REG_ECX];

	for (int v = 0; v < _VENDOR_LAST; v++) {
		if ((vendors[v].vendor[0] == vendor_num[0]) && 
			(vendors[v].vendor[1] == vendor_num[1]) &&
			(vendors[v].vendor[2] == vendor_num[2])) {
			vendor = vendors[v].v;
			break;
		}
	}

	family		= ((level01[_REG_EAX] >> 8) & 0xf) + ((level01[_REG_EAX] >> 20) & 0xf);
	model		= (((level01[_REG_EAX] >> 4) & 0xf) | ((level01[_REG_EAX] >> 12) & 0xf0));
	stepping	= (level01[_REG_EAX] & 0xf);
	hexID		= level01[_REG_EAX];

	fms = level01[_REG_EAX];

	if (extLevel00[_REG_EAX] >= 0x80000004) {
		__cpuid(brand_num[0], 0x80000002);
		__cpuid(brand_num[1], 0x80000003);
		__cpuid(brand_num[2], 0x80000004);
	}

	_CPUID_RES c = {xcr0, 
					level01[_REG_EAX], level01[_REG_ECX], level01[_REG_EDX], 
					level07[_REG_EBX], level07[_REG_ECX], level07[_REG_EDX], level0701[_REG_EAX], level0701[_REG_EDX],
					level19[_REG_EBX],
					extLevel01[_REG_ECX], extLevel01[_REG_EDX], 
					extLevel08[_REG_EBX], extLevel21[_REG_EAX]};

	for (int featInd = 0; featInd < sizeof(exts) / sizeof(_EXT); featInd++) {
		unsigned long place	= (unsigned long)(exts[featInd].featbit >> 32);
		unsigned long fbit	= (unsigned long)(exts[featInd].featbit & ~0UL);
		unsigned __int64 f_low	= 1ULL << (featInd & 0x3f);
		unsigned __int64 f_high	= (featInd & ~0x3f) >> 6;
		switch (place) {
			case _FEAT_SKIP:
				continue;
			case CPUID_NOPLACE: 
				switch (featInd) { //special LNOP detection
					case ISA_LNOP: {
						unsigned int fam = (level01[_REG_EAX] >> 8) & 0xf;
						if ((fam == 0x6) || (fam == 0x7) || (fam == 0xf))
							f[f_high] |= f_low;
					} break;
					case ISA_X86: { //ISA_X86 always present
						f[f_high] |= f_low;
					} break;
					default:
						break;
				}		
				break;
			default:
				if ((c.cpuid_res[place] & fbit) == fbit) {
					switch (exts[featInd].xcr0) {
						case _XCR0_EMPTY:
							f[f_high] |= f_low;
							break;
						case _KEYLOCK:
							if (IsFeat(ISA_KEYLOCK))
								f[f_high] |= f_low;
							break;
						default:
							if ((c.xcr0 & exts[featInd].xcr0) == exts[featInd].xcr0)
								f[f_high] |= f_low;
							else
								f_disabled[f_high] |= f_low;
							break;
					}
				}
				break;
		}
	}
	if (IsFeat(ISA_HYBRID)) {
		HybridMasks(bigCoreMask, littleCoreMask, systemAffMask);
	}
}

using namespace std;

void CPU_Props::PrintVendor(void) const {
	cout << "Vendor: \"" << std::setw(VENDOR_STRING_SIZE) << vendor_string << "\"" << endl;
	cout << "Family:" << family;
	cout << " Model:" << model;
	cout << " Stepping:" << stepping;
	cout << " (" << hex << hexID << ')';
	cout << endl;
} 

void CPU_Props::PrintBrand(void) const {
	cout << "Brand: \"" << std::setw(48) << brand_string << "\"" << endl;
}

void CPU_Props::PrintSupportStatus(bool supp) const {
	if (supp)
		cout << ": supported";
	else
		cout << ": unsupported";
}

void CPU_Props::PrintOSStatus(bool enadisa) const {
	if (enadisa)
		cout << ", OS enabled";
	else
		cout << ", OS disabled";
}

void CPU_Props::PrintFeat(uint64_t f) const {
	cout << left << exts[f].name;
}

void CPU_Props::PrintFeat(bool feat, unsigned __int64 f_low, unsigned __int64 f_high) const {
	if (feat && ((f_disabled[f_high] & f_low) != 0)) {
		PrintSupportStatus(true);
		PrintOSStatus(false);
	} else {
		if ((f[f_high] & f_low) == 0) {
			PrintSupportStatus(false);
		} else {
			PrintSupportStatus(true);
			PrintOSStatus(true);
		}
	}
}

void CPU_Props::PrintFeats(void) const {
	for (int featInd = 0; featInd < sizeof(exts) / sizeof(_EXT); featInd++) {
		cout << left << std::setw(FEAT_NAME_SIZE) << exts[featInd].name;

		if(exts[featInd].featbit != _FEAT_SKIP) {
			unsigned __int64 f_low	= 1ULL << (featInd & 0x3f);
			unsigned __int64 f_high	= (featInd & ~0x3f) >> 6;
			switch(exts[featInd].xcr0) {
				case _XCR0_AVX:
					PrintFeat(IsFeat(ISA_AVX), f_low, f_high);
					break;
				case _XCR0_AVX512:
					PrintFeat(IsFeat(ISA_AVX512F), f_low, f_high);
					break;
				case _XCR0_AMX:
				case _KEYLOCK:
					PrintFeat(true, f_low, f_high);
					break;
				case _XCR0_EMPTY:
				default:
					PrintSupportStatus((f[f_high] & f_low) != 0);
					break;
			}
		}
		cout << endl;
	}
}

bool CPU_Props::IsFeat(int feat) const {
	const unsigned __int64 f_low	= 1ULL << (feat & 0x3f);
	const unsigned __int64 f_high	= (feat & ~0x3f) >> 6;
	return ((f[f_high] & f_low) == f_low);
}

bool CPU_Props::IsZen2(void) const {
	return (family == 0x17) && (vendor_num[1] == 0x69746e65);
}

bool CPU_Props::IsZen3(void) const {
	return (family == 0x19) && (vendor_num[1] == 0x69746e65);
}

int CPU_Props::GetFamMod(void) const {
	return fms & 0xfffffff0;
}

int CPU_Props::GetStepping(void) const {
	return fms & 0xf;
}

bool CPU_Props::IsInBrand(const char * str) const {
	return (0 != strstr(brand_string, str));
}

_VENDOR CPU_Props::GetVendor(void) const {
	return vendor;
}

unsigned int CPU_Props::GetAMXPalette_TotalTileBytes(unsigned int p = 0) const {
	return AMX_palette[p].total_tile_bytes;
};

unsigned int CPU_Props::GetAMXPalette_MaxName(unsigned int p = 0) const {
	return AMX_palette[p].max_names;
};

unsigned int CPU_Props::GetAMXRows() const {
	return AMX_TMUL.tmul_maxk;
};

unsigned int CPU_Props::GetAMXCols() const {
	return AMX_TMUL.tmul_maxn;
};

bool CPU_Props::HybridMasks(DWORD_PTR &bigCoreMask, DWORD_PTR &littleCoreMask, DWORD_PTR &systemMask) const {
	DWORD_PTR processMask = 0, systemAffMask = 0;
	BOOL affFlag = GetProcessAffinityMask(GetCurrentProcess(), &processMask, &systemAffMask);
	if (affFlag != 0) {
		systemMask = systemAffMask;
#if defined (_M_X64)
		const DWORD_PTR threads = _mm_popcnt_u64(systemAffMask);
#else
		const DWORD_PTR threads = _mm_popcnt_u32(systemAffMask);
#endif
		DWORD_PTR origThreadMask = SetThreadAffinityMask(GetCurrentThread(), 1);
		for (unsigned int th = 0; th < threads; th++) {
			DWORD_PTR testMask = ((DWORD_PTR) 1 << th);
			SetThreadAffinityMask(GetCurrentThread(), testMask);
			Sleep(0);
			int level1A[4] = {0, 0, 0, 0};
			__cpuid(level1A, 0x1A);
			switch (level1A[_REG_EAX] >> 24) {
				case 0x20: littleCoreMask	|= testMask;  break;
				case 0x40: bigCoreMask		|= testMask; break;
				default:break;
			}
		}
		SetThreadAffinityMask(GetCurrentThread(), origThreadMask);
		return true;
	} else {
		return false;
	}
}

void CPU_Props::ForcedAVX512(void) const {
	if (IsFeat(ISA_AVX512F)) {
		DWORD_PTR processMask = 0, systemAffMask = 0;
		BOOL affFlag = GetProcessAffinityMask(GetCurrentProcess(), &processMask, &systemAffMask);
		if (affFlag != 0) {
#if defined (_M_X64)
			const DWORD_PTR threads = _mm_popcnt_u64(systemAffMask);
#else
			const DWORD_PTR threads = _mm_popcnt_u32(systemAffMask);
#endif
			DWORD_PTR origThreadMask = SetThreadAffinityMask(GetCurrentThread(), 1);
			for (unsigned int th = 0; th < threads; th++) {
				DWORD_PTR testMask = ((DWORD_PTR) 1 << th);
				SetThreadAffinityMask(GetCurrentThread(), testMask);
				Sleep(0);
				__m512i test =  _mm512_set1_epi32(th);
				cout << "AVX512F VPBROADCASTD zmm, gpr executed on thread " << test.m512i_u32[0] << endl;
			}
			SetThreadAffinityMask(GetCurrentThread(), origThreadMask);
			return;
		}
	}
}

void CPU_Props::PrintHybridMasks(void) const {
	if (IsFeat(ISA_HYBRID)) {
		cout << "--Hybrid info--" << endl;
			cout << "systemAffinityMask: 0x" << hex << setw(sizeof(DWORD_PTR) * 2) << setfill('0') << right << systemAffMask << endl;
			cout << "littleCoreMask    : 0x" << hex << setw(sizeof(DWORD_PTR) * 2) << setfill('0') << right << littleCoreMask << endl;
			cout << "bigCoreMask       : 0x" << hex << setw(sizeof(DWORD_PTR) * 2) << setfill('0') << right << bigCoreMask << endl;
			cout << setfill(' ');
		}
	}

DWORD_PTR CPU_Props::GetBigCoreMask(void) const {
	return bigCoreMask;
};

DWORD_PTR CPU_Props::GetLittleCoreMask(void) const {
	return littleCoreMask;
};

DWORD_PTR CPU_Props::GetSystemAffMask(void) const {
	return systemAffMask;
};

#if defined (_M_X64)
void CPU_Props::Print_512bFMA_DP_Ports(void) const {
	cout << "512b FPU DP ports: " << Get_512bFMA_DP_Ports() << endl;
}

//based on 
//https://github.com/jeffhammond/vpu-count
//https://ark.intel.com/content/www/us/en/ark/products/codename/37572/skylake.html#@Server
//https://ark.intel.com/content/www/us/en/ark/products/codename/124664/cascade-lake.html
//https://ark.intel.com/content/www/us/en/ark/products/codename/189143/cooper-lake.html
//https://ark.intel.com/content/www/us/en/ark/products/codename/74979/ice-lake.html
//06_55h / CPUID 6065x stepping info:
//https://software.intel.com/security-software-guidance/processors-affected-transient-execution-attack-mitigation-product-cpu-model
//Future CPUIDs:
//https://www.reddit.com/user/Komachi_ENSAKA/comments/iy9avs/memo/
//CPU notation:
//https://github.com/torvalds/linux/blob/master/arch/x86/include/asm/intel-family.h
//Jintide CPUs:
//https://www.montage-tech.com/Jintide_Platform/Jintide_CPU 
//https://old.hotchips.org/hc31/HC31_2.11_Jintide_Server_CPU_final_r6.0.pdf
//46th Intel ISA Future Programming Reference 319433-046.pdf:
//https://cdrdv2.intel.com/v1/dl/getContent/671368
//Xeon 3450C source:
//https://twitter.com/OneRaichu/status/1613202364256882688
//
// Actual Intel brand strings CPUID 80000003h-80000005h
// 00000000001111111111222222222233333333334444444
// 01234567890123456789012345678901234567890123456
//"Intel(R) Core(TM) i9-7980XE CPU @ 2.60GHz"
//"Intel(R) Core(TM) i9-7900X CPU @ 3.30GHz"
//"Intel(R) Core(TM) i7-7820X CPU @ 3.60GHz"
//"Intel(R) Core(TM) i7-7800X CPU @ 3.50GHz"
//"Intel(R) Xeon(R) Platinum 8268 CPU @ 2.90GHz"
//"Intel(R) Xeon(R) Platinum 8180 CPU @ 2.50GHz"
//"Intel(R) Xeon(R) Platinum 8176 CPU @ 2.10GHz"
//"Intel(R) Xeon(R) Platinum 8170 CPU @ 2.10GHz"
//"Intel(R) Xeon(R) Gold 6258R CPU @ 2.70GHz"
//"Intel(R) Xeon(R) Gold 6250 CPU @ 3.90GHz"
//"Intel(R) Xeon(R) Gold 6240C CPU @ 2.60GHz"
//"Intel(R) Xeon(R) Gold 6212U CPU @ 2.40GHz"
//"Intel(R) Xeon(R) Gold 6154 CPU @ 3.00GHz"
//"Intel(R) Xeon(R) Gold 6154 CPU @ 3.00GHz"
//"Intel(R) Xeon(R) Gold 6149 CPU @ 3.10GHz"
//"Intel(R) Xeon(R) Gold 6130 CPU @ 2.10GHz"
//"Intel(R) Xeon(R) Gold 5220R CPU @ 2.20GHz"
//"Intel(R) Xeon(R) Gold 5218 CPU @ 2.30GHz"
//"Intel(R) Xeon(R) Gold 5215 CPU @ 2.50GHz"
//                       ^^^^
// 00000000001111111111222222222233333333334444444
// 01234567890123456789012345678901234567890123456
//"Intel(R) Xeon(R) Silver 4214 CPU @ 2.20GHz"
//"Intel(R) Xeon(R) Silver 4108 CPU @ 1.80GHz"
//"Intel(R) Xeon(R) Bronze 3104 CPU @ 1.70GHz"
//"Intel(R) Xeon(R) D-2183IT CPU @ 2.20GHz"
//"Intel(R) Xeon(R) W-3275 CPU @ 2.50GHz"
//"Intel(R) Xeon(R) W-3175X CPU @ 3.10GHz"
//"Intel(R) Xeon(R) W-2295 CPU @ 3.00GHz"
//"Intel(R) Xeon(R) W-2191B CPU @ 2.30GHz"
//"Intel(R) Xeon(R) W-2155 CPU @ 3.30GHz"
//"Intel(R) Xeon(R) W-2125 CPU @ 4.00GHz"
//                  ^   ^
// 00000000001111111111222222222233333333334444444
// 01234567890123456789012345678901234567890123456
//"Montage(R) Jintide(R) C2460 1"
//"Genuine Intel(R) CPU 0000%@"
//"" <empty>

int CPU_Props::Get_512bFMA_DP_Ports(void) const { //v0100
	if (IsFeat(ISA_AVX512F)) {
		switch(GetVendor()) {
			case _VENDOR_INTEL:
				switch(GetFamMod()) {
					case 0x00050650: {	//SKYLAKE_X
							switch (GetStepping()) {
								case 0: case 1: case 2:		//SkyLake-X/W/D/SP ES
								case 3: case 4:				//SkyLake-X/W/D/SP
								case 5: case 6: case 7: {	//Cascade Lake-X/W/D/SP
									if (IsInBrand("Core"))
										return 2;
									else if (IsInBrand("Xeon")) 
										if (IsInBrand("Platinum"))
											return 2;
										else if (IsInBrand("Silver") ||	IsInBrand("Bronze"))
											return 1;
										else if (IsInBrand("Gold"))
											if (brand_string[22] == '5')  {
												if ((10 * (brand_string[24] - '0')) + (brand_string[25] - '0') == 22) 
													return 2; //Xeon Gold 5222, 5122
												else
													return 1;
											} else {//Xeon Gold 6xxx
												return 2;
											}
										else
											switch (brand_string[17]) {
												case 'W':
													if (brand_string[21] == '0') //Xeon W-2104, W-2102
														return 1;
													else 
														return 2;
												case 'D':
													return 1;
												default: //unknown Xeon
													return 2;
											}
									else //unknown brand string, 
										//e.g.1 "Genuine Intel(R) CPU 0000%@"
										//e.g.2 "Montage(R) Jintide(R) C2460 1", 
										return Get_512bFMA_DP_Ports_FromOptimGuide();
										//return 2;
								}
								case 0xa: case 0xb: //Cooper Lake
								default: 
									return 2;
							}
						} break;
					case 0x000806F0: {	//Golden Cove              / SAPPHIRERAPIDS_X 
						if (IsInBrand("3408U") || IsInBrand("3450C")) //Intel Xeon Bronze 3408U; Xeon 3450C Processor
							return 1;
						else
							return 2;
						} break;
					case 0x00060660:	//Palm Cove                / CANNONLAKE_L 
					case 0x00060670:	//Palm Cove                / CANNONLAKE - cancelled ?
					case 0x000606C0:	//Sunny Cove               / ICELAKE_D
					case 0x000706D0: 	//Sunny Cove               / ICELAKE - cancelled ?
					case 0x000706E0: 	//Sunny Cove               / ICELAKE_L
					case 0x00080650:	//Silvermont               / XEON_PHI_KNM 1 for DP, 2 for SP
					case 0x000806C0: 	//Willow Cove              / TIGERLAKE_L
					case 0x000806D0: 	//Willow Cove              / TIGERLAKE
					case 0x00090670:	//Golden Cove + Gracemont  / ALDERLAKE
					case 0x000906A0:	//Golden Cove + Gracemont  / ALDERLAKE_L
					case 0x000A0670: 	//Cypress Cove             / ROCKETLAKE
					case 0x000A0680: 	//Cypress Cove             / ROCKETLAKE_L - cancelled ?
					case 0x000A06A0:	//Redwood Cove + Crestmont / METEORLAKE_L
					case 0x000A06C0:	//Redwood Cove + Crestmont / METEORLAKE
					case 0x000A06E0:	//Redwood Cove             / GRANITERAPIDS_D
						return 1;
					case 0x00050670:	//Silvermont               / XEON_PHI_KNL
					case 0x000606A0:	//Sunny Cove               / ICELAKE_X
					case 0x000A06D0:	//Redwood Cove             / GRANITERAPIDS_X
					case 0x000C06F0:	//Raptor Cove              / EMERALDRAPIDS_X
						return 2;
					case 0x000806A0:	//Sunny Cove + Tremont     / LAKEFIELD, AVX512 disabled
					case 0x000A06F0:	//Crestmont                / SIERRAFOREST_X
					case 0x000B0650:	//Crestmont                / METEORLAKE_N
					case 0x000B0660:	//Crestmont                / GRANDRIDGE
					case 0x000B0670:	//Raptor Cove + Gracemont  / RAPTORLAKE
					case 0x000B06A0:	//Raptor Cove + Gracemont  / RAPTORLAKE_P
					case 0x000B06C0:	//   ?                     / LUNARLAKE
					case 0x000B06D0:	//   ?                     / LUNARLAKE_M
					case 0x000B06E0:	//Gracemont                / ALDERLAKE_N
					case 0x000B06F0:	//Golden Cove + Gracemont  / RAPTORLAKE_S
					case 0x000C0650:	//   ?                     / ARROW_LAKE
					case 0x000C0660:	//   ?                     / ARROW_LAKE_S
					default:			//on other cores, AVX512F unsupported
						return 0;
					//future
					//case 0x000906D0:	//Sunny Cove   / ICELAKE_NNPI / Spring Hill - cancelled ?
					//case 0x000906F0:	//Sunny Cove   / ICELAKE_R ?
				}
				break;
			case _VENDOR_AMD:
				switch(GetFamMod() & 0xffffff00) {
					case 0x00A10F00:	//Genoa, Storm Peak
					case 0x00A60F00:	//Raphael
					case 0x00A70F00:	//Phoenix, Phoenix2
					case 0x00AA0F00:	//Bergamo
						return 1;
					default:
						return 0;
				}
			case _VENDOR_CENTAUR:
			case _VENDOR_ZHAOXIN:
				switch(GetFamMod() & 0xfffffff0) {
					case 0x00040670:	//CNS
					case 0x000507B0:	//ZX-F
						return 1;
					default:
						return 0;
				}
			default:
				return 0;
		} // switch(GetVendor()) 
	} else { //if (IsFeat(ISA_AVX512F)) 
		return 0;
	}
}

#endif