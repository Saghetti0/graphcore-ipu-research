#include <stdint.h>

const uint32_t IPU_CHIP_DIE_COUNT = 0x1;
const uint32_t IPU_TILES_PER_REPAIR_UNIT_SLICE = 0x4;
const uint32_t IPU_REDUNDANCY_PER_REPAIR_SET = 0x1;
const uint32_t IPU_REPAIR_UNITS_PER_SET_NO_REPAIR = 0x14;
const uint32_t IPU_REPAIR_SETS_PER_COLUMN = 0x1;
const uint32_t IPU_REPAIR_SETS = 0x10;
const uint32_t IPU_NUM_COLUMNS = 0x10;
const uint32_t IPU_REPAIR_UNITS_PER_SET_WITH_REPAIR = 0x13;
const uint32_t IPU_REPAIR_UNITS_PER_COLUMN_NO_REPAIR = 0x14;
const uint32_t IPU_REPAIR_UNITS_PER_COLUMN_WITH_REPAIR = 0x13;
const uint32_t IPU_TILES_PER_REPAIR_UNIT_SLICE_NO_REPAIR = 0x50;
const uint32_t IPU_TILES_PER_REPAIR_UNIT_SLICE_WITH_REPAIR = 0x4c;
const uint32_t IPU_REDUNDANCY_PER_COLUMN = 0x1;
const uint32_t IPU_TILES_PER_COLUMN = 0x50;
const uint32_t IPU_TILES_PER_COLUMN_WITH_REPAIR = 0x4c;
const uint32_t IPU_TILE_INSTANCES_NO_REPAIR = 0x500;
const uint32_t IPU_TILE_INSTANCES_WITH_REPAIR = 0x4c0;
const uint32_t IPU_CHIP_TILE_INSTANCES_NO_REPAIR = 0x500;
const uint32_t IPU_CHIP_TILE_INSTANCES_WITH_REPAIR = 0x4c0;
const uint32_t IPU_TILES_PER_SUPERTILE = 0x4;
const uint32_t IPU_REPAIR_SUPERTILES_PER_COLUMN = 0x1;
const uint32_t IPU_SUPERTILES_PER_COLUMN_NO_REPAIR = 0x14;
const uint32_t IPU_SUPERTILES_PER_COLUMN_WITH_REPAIR = 0x13;
const uint32_t IPU_COLUMNS_PER_SLICE = 0x2;
const uint32_t TILE_ID_BITWIDTH = 0xb;
const uint32_t INCOMING_MUX_BITWIDTH = 0xb;
const uint32_t TILE_ID_NULL = 0x600;
const uint32_t TILE_ID_MAX_NULL = 0x7ff;
const uint32_t F32_LOG_DEFAULT_LATENCY = 0x6;
const uint32_t TFPU_AMP_UNITS_PER_SET = 0x8;
const uint32_t TFPU_AMP_UNITS_PER_ENGINE = 0x2;
const uint32_t TFPU_AACC_PER_AMP_UNIT = 0x2;
const uint32_t TFPU_NUM_AMP_SETS = 0x1;
const uint32_t TFPU_NUM_ACCUM = 0x10;
const uint32_t NO_STATE_UPDATE = 0x0;
const uint32_t TAMP_M_INTERNAL_PRECISION_REDUCTION = 0x0;
const uint32_t TAMP_M_MULT_OUTPUT_WIDTH_F16 = 0x16;
const uint32_t TAMP_M_ADDER_INPUT_WIDTH = 0x21;
const uint32_t TAMP_M_ADDED_PRECISION_F16 = 0xb;
const uint32_t TAMP_M_FRACTION_WIDTH_F16 = 0x1f;
const uint32_t TAMP_M_MULT_OUTPUT_WIDTH_F8 = 0x8;
const uint32_t TAMP_M_ADDED_PRECISION_F8 = 0x19;
const uint32_t TAMP_M_FRACTION_WIDTH_F8 = 0x1f;
const uint32_t TAMP_M_ADDER_OUTPUT_WIDTH = 0x24;
const uint32_t TEXCPT_ENUM_BITWIDTH = 0x4;
const uint32_t CTXT_WORKERS = 0x6;
const uint32_t CTXT_TOTAL = 0x7;
const uint32_t CTXT_TOTAL_BITWIDTH = 0x3;

const uint32_t TMEM_MESONS_PER_ATOM = 0x2;
const uint32_t TMEM_MESON_DATA_SIZE = 0x20;
const uint32_t TMEM_MESON_PARITY_SIZE = 0x1;
const uint32_t TMEM_ATOMSIZE = 0x40;
const uint32_t TMEM_ELEM_DEPTH = 0x800;
const uint32_t TMEM_ELEMSIZE = 0x10;
const uint32_t TMEM_REGION0_SIZE = 0x80;
const uint32_t TMEM_REGION1_SIZE = 0x80;
const uint32_t TMEM_SIZE = 0x100;
const uint32_t TMEM_SIZE_WORDS = 0x10000;
const uint32_t TMEM_REGION0_BASE_ADDR = 0x40000;
const uint32_t TMEM_BASE_ADDR = 0x40000;
const uint32_t TMEM_BASE_ADDR_WORD = 0x10000;
const uint32_t TMEM_BYTE_MAX_ADDRESS_WIDTH = 0x15;
const uint32_t TMEM_FULL_ADDRESS_MASK = 0x1fffff;
const uint32_t TMEM_BYTE_ADDRESS_WIDTH = 0x13;
const uint32_t TMEM_WORD_ADDRESS_WIDTH = 0x11;
const uint32_t TMEM_HALF_WORD_ADDRESS_WIDTH = 0x12;
const uint32_t TMEM_DWORD_ADDRESS_WIDTH = 0x10;
const uint32_t TMEM_ELEM_ENABLE_WIDTH = 0x2;
const uint32_t TMEM_ELEM_PARITY_WIDTH = 0x2;
const uint32_t TMEM_ELEM_DATA_WIDTH = 0x42;
const uint32_t TMEM_ELEM_ARRAY_SIZE = 0x10;
const uint32_t TMEM_NUM_ELEM_ARRAYS = 0x2;
const uint32_t TMEM_ELEM_OFFSET_SIZE = 0xe;
const uint32_t TMEM_NUM_REGIONS = 0x2;
const uint32_t TMEM_REGION0_INTERLEAVE_FACTOR = 0x1;
const uint32_t TMEM_REGION1_INTERLEAVE_FACTOR = 0x2;
const uint32_t TMEM_REGION0_EFFCTV_ELEMSIZE = 0x10;
const uint32_t TMEM_REGION1_EFFCTV_ELEMSIZE = 0x20;

const uint32_t MAX_NUM_LOAD_STORES_PER_INSN = 0x3;
const uint32_t TRF_ACCESS_SIZE_MAX = 0x4;
const uint32_t TREG_UPPER_CSR_SPACE_BASE = 0x100;

const uint32_t MRF_CAPACITY = 0x10;
const uint32_t MRF_GP_REGISTERS = 0xc;

const uint32_t ARF_CAPACITY = 0x10;
const uint32_t ARF_GP_REGISTERS = 0x8;
const uint32_t ARF_MAX_ACCESS_SIZE = 0x4;

const uint32_t TDBG_IBRK_CHANNELS = 0x1;
const uint32_t TDBG_IBRK_IDBASE = 0x0;
const uint32_t TDBG_DBRK_CHANNELS = 0x1;
const uint32_t TDBG_DBRK_IDBASE = 0x1;
const uint32_t TDBG_DBRK_SIDA_WIDTH = 0x13;
const uint32_t TDBG_TOTAL_CHANNELS = 0x2;
const uint32_t TDBG_TOTAL_CHANNELS_CEIL_LOG2 = 0x1;
const uint32_t TDBG_TDI_REGISTER_WIDTH = 0x4;
const uint32_t TDBG_TDI_APERTURE_SPACE = 0x10;

const uint32_t TEXCH_SENDOFF_INTERNAL_COUNT_LIMIT = 0x40;
const uint32_t TEXCH_MAX_XTWR_RX_PAYLOAD_LEN = 0x40;
const uint32_t TEXCH_NUM_XBS = 0x10;
const uint32_t TEXCH_NUM_BUNDLES = 0x20;
const uint32_t TEXCH_EXTS_PER_BUNDLE = 0x2;
const uint32_t TEXCH_BUSES_PER_BUNDLE = 0x2a;
const uint32_t TEXCH_NUM_CONTEXTS_PER_XB = 0x4;
const uint32_t TEXCH_DATA_WIDTH = 0x20;
const uint32_t TEXCH_XB_NUM_IDS = 0x40;
const uint32_t TEXCH_NUM_TILES_PER_XB_CONTEXT = 0x28;
const uint32_t TEXCH_NUM_TILES_PER_XB_CONTEXT_WITH_REPAIR = 0x26;
const uint32_t TEXCH_NUM_INTERNAL_SYNCZONES = 0x1;
const uint32_t TEXCH_NUM_EXTERNAL_SYNCZONES = 0x4;
const uint32_t TEXCH_NUM_SYNCZONE = 0x8;
const uint32_t TEXCH_SYNCZONE_GS1 = 0x4;
const uint32_t TEXCH_SYNCZONE_GS1_MSR = 0xc;
const uint32_t TEXCH_SYNCZONE_GS1H = 0x5;
const uint32_t TEXCH_SYNCZONE_GS1H_MSR = 0xd;
const uint32_t TEXCH_SYNCZONE_GS2 = 0x6;
const uint32_t TEXCH_SYNCZONE_GS2_MSR = 0xe;
const uint32_t TEXCH_SYNCZONE_GS2H = 0x7;
const uint32_t TEXCH_SYNCZONE_GS2H_MSR = 0xf;

const uint32_t TILE_INCOMING_MUX__RESET0 = 0x500;
const uint32_t TEXCH_MUXPAIRWRITEDLY = 0x1;

const uint32_t BNET_TILEID__SUBID__SHIFT = 0x0;
const uint32_t BNET_TILEID__SUBID__SIZE = 0x2;
const uint32_t BNET_TILEID__COLID__SHIFT = 0x2;
const uint32_t BNET_TILEID__COLID__SIZE = 0x4;
const uint32_t BNET_TILEID__SUPTID__SHIFT = 0x6;
const uint32_t BNET_TILEID__SUPTID__SIZE = 0x5;
const uint32_t BNET_NUM_COLUMNS = 0x10;
const uint32_t BNET_NUM_VERTICAL_COLUMNS = 0x8;
const uint32_t BNET_TILES_PER_EXCHANGE_SLICE = 0x4;
const uint32_t BNET_EXCHANGE_SLICES_PER_COLUMN_NO_REPAIR = 0x14;
const uint32_t BNET_EXCHANGE_SLICES_PER_COLUMN_WITH_REPAIR = 0x13;
const uint32_t BNET_SUPERTILES_PER_COLUMN_NO_REPAIR = 0x14;
const uint32_t BNET_SUPERTILES_PER_COLUMN_WITH_REPAIR = 0x13;
const uint32_t BNET_TILES_PER_SUPERTILE = 0x4;
const uint32_t BNET_SENDTOEXCHOUTDLY = 0x8;
const uint32_t BNET_MINEXCHIN2LDDLY = 0x2;
const uint32_t BNET_PUTIOUTDLY = 0x8;
const uint32_t BNET_COLBASE2OPPOSIDEDLY = 0x11;
const uint32_t BNET_OPPOSIDE2COLBASEDLY = 0x13;
const uint32_t BNET_MMP = 0x7;
const uint32_t BNET_FDLY = 0x9;
const uint32_t BNET_ERUN2RCV = 0x7;
const int32_t BNET_SACK_DELAY_NORM_ADD = -0x5;
const uint32_t BNET_RSAK_MAX = 0x36;
const uint32_t BNET_SCTRL_DELAY = 0x0;

const uint32_t TEXCH_TLINK_PUT_IMUX_EXCEPTION = 0x0;
const uint32_t TEXCH_TLINK_MAX_PAYLOAD_BYTES = 0x400;

const uint32_t CSR_C_PC__INDEX = 0x0;
const uint32_t CSR_C_PC__ADDR__SHIFT = 0x2;
const uint32_t CSR_C_PC__ADDR__SIZE = 0x11;
const uint32_t CSR_C_PC__ADDR__MASK = 0x1ffff;

const uint32_t CSR_C_DBG_DATA__INDEX = 0x70;
const uint32_t CSR_C_DBG_DATA__VALUE__SHIFT = 0x0;
const uint32_t CSR_C_DBG_DATA__VALUE__SIZE = 0x20;
const uint32_t CSR_C_DBG_DATA__VALUE__MASK = 0xffffffff;
const uint32_t CSR_C_DBG_BRK_ID__INDEX = 0x71;
const uint32_t CSR_C_DBG_BRK_ID__CHAN_ID__SHIFT = 0x0;
const uint32_t CSR_C_DBG_BRK_ID__CHAN_ID__SIZE = 0x1;
const uint32_t CSR_C_DBG_BRK_ID__CHAN_ID__MASK = 0x1;

const uint32_t CSR_S_SSR__INDEX = 0x1;
const uint32_t CSR_S_SSR__LC__SHIFT = 0x0;
const uint32_t CSR_S_SSR__LC__SIZE = 0x1;
const uint32_t CSR_S_SSR__LC__MASK = 0x1;
const uint32_t CSR_S_SSR__GC__SHIFT = 0x1;
const uint32_t CSR_S_SSR__GC__SIZE = 0x1;
const uint32_t CSR_S_SSR__GC__MASK = 0x1;
const uint32_t CSR_S_SSR__ANS__SHIFT = 0x2;
const uint32_t CSR_S_SSR__ANS__SIZE = 0x1;
const uint32_t CSR_S_SSR__ANS__MASK = 0x1;
const uint32_t CSR_S_SSR__RAERR__SHIFT = 0x3;
const uint32_t CSR_S_SSR__RAERR__SIZE = 0x1;
const uint32_t CSR_S_SSR__RAERR__MASK = 0x1;
const uint32_t CSR_S_SSR__ETYPE__SHIFT = 0x4;
const uint32_t CSR_S_SSR__ETYPE__SIZE = 0x4;
const uint32_t CSR_S_SSR__ETYPE__MASK = 0xf;
const uint32_t CSR_S_SSR__PERR__SHIFT = 0x9;
const uint32_t CSR_S_SSR__PERR__SIZE = 0x1;
const uint32_t CSR_S_SSR__PERR__MASK = 0x1;

const uint32_t CSR_S_CR__INDEX = 0x2;
const uint32_t CSR_S_CR__LC_CLR__SHIFT = 0x0;
const uint32_t CSR_S_CR__LC_CLR__SIZE = 0x1;
const uint32_t CSR_S_CR__LC_CLR__MASK = 0x1;
const uint32_t CSR_S_CR__LC_SET__SHIFT = 0x1;
const uint32_t CSR_S_CR__LC_SET__SIZE = 0x1;
const uint32_t CSR_S_CR__LC_SET__MASK = 0x1;
const uint32_t CSR_S_CR__ZCWEI__SHIFT = 0x2;
const uint32_t CSR_S_CR__ZCWEI__SIZE = 0x1;
const uint32_t CSR_S_CR__ZCWEI__MASK = 0x1;

const uint32_t CSR_S_TILE_ID__INDEX = 0x3;
const uint32_t CSR_S_TILE_ID__TILE_ID__SHIFT = 0x0;
const uint32_t CSR_S_TILE_ID__TILE_ID__SIZE = 0xb;
const uint32_t CSR_S_TILE_ID__TILE_ID__MASK = 0x7ff;

const uint32_t CSR_S_FP_ICTL__INDEX = 0x20;
const uint32_t CSR_S_FP_ICTL__INV__SHIFT = 0x0;
const uint32_t CSR_S_FP_ICTL__INV__SIZE = 0x1;
const uint32_t CSR_S_FP_ICTL__INV__MASK = 0x1;
const uint32_t CSR_S_FP_ICTL__DIV0__SHIFT = 0x1;
const uint32_t CSR_S_FP_ICTL__DIV0__SIZE = 0x1;
const uint32_t CSR_S_FP_ICTL__DIV0__MASK = 0x1;
const uint32_t CSR_S_FP_ICTL__OFLO__SHIFT = 0x2;
const uint32_t CSR_S_FP_ICTL__OFLO__SIZE = 0x1;
const uint32_t CSR_S_FP_ICTL__OFLO__MASK = 0x1;
const uint32_t CSR_S_FP_ICTL__RND__SHIFT = 0x10;
const uint32_t CSR_S_FP_ICTL__RND__SIZE = 0x3;
const uint32_t CSR_S_FP_ICTL__RND__MASK = 0x7;
const uint32_t CSR_S_FP_ICTL__ESR__SHIFT = 0x13;
const uint32_t CSR_S_FP_ICTL__ESR__SIZE = 0x1;
const uint32_t CSR_S_FP_ICTL__ESR__MASK = 0x1;
const uint32_t CSR_S_FP_ICTL__NANOO__SHIFT = 0x14;
const uint32_t CSR_S_FP_ICTL__NANOO__SIZE = 0x1;
const uint32_t CSR_S_FP_ICTL__NANOO__MASK = 0x1;

const uint32_t CSR_S_WORKER0_BASE__INDEX = 0x21;
const uint32_t CSR_S_WORKER0_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_WORKER0_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_S_WORKER0_BASE__ADDR__MASK = 0x7ffff;

const uint32_t CSR_S_WORKER1_BASE__INDEX = 0x22;
const uint32_t CSR_S_WORKER1_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_WORKER1_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_S_WORKER1_BASE__ADDR__MASK = 0x7ffff;

const uint32_t CSR_S_WORKER2_BASE__INDEX = 0x23;
const uint32_t CSR_S_WORKER2_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_WORKER2_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_S_WORKER2_BASE__ADDR__MASK = 0x7ffff;

const uint32_t CSR_S_WORKER3_BASE__INDEX = 0x24;
const uint32_t CSR_S_WORKER3_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_WORKER3_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_S_WORKER3_BASE__ADDR__MASK = 0x7ffff;

const uint32_t CSR_S_WORKER4_BASE__INDEX = 0x25;
const uint32_t CSR_S_WORKER4_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_WORKER4_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_S_WORKER4_BASE__ADDR__MASK = 0x7ffff;

const uint32_t CSR_S_WORKER5_BASE__INDEX = 0x26;
const uint32_t CSR_S_WORKER5_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_WORKER5_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_S_WORKER5_BASE__ADDR__MASK = 0x7ffff;

const uint32_t CSR_S_CCCSLOAD__INDEX = 0x50;
const uint32_t CSR_S_CCCSLOAD__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_CCCSLOAD__ADDR__SIZE = 0x13;
const uint32_t CSR_S_CCCSLOAD__ADDR__MASK = 0x7ffff;

const uint32_t CSR_S_SCOUNT_L__INDEX = 0x60;
const uint32_t CSR_S_SCOUNT_L__VALUE__SHIFT = 0x0;
const uint32_t CSR_S_SCOUNT_L__VALUE__SIZE = 0x20;
const uint32_t CSR_S_SCOUNT_L__VALUE__MASK = 0xffffffff;
const uint32_t CSR_S_SCOUNT_U__INDEX = 0x61;
const uint32_t CSR_S_SCOUNT_U__VALUE__SHIFT = 0x0;
const uint32_t CSR_S_SCOUNT_U__VALUE__SIZE = 0x20;
const uint32_t CSR_S_SCOUNT_U__VALUE__MASK = 0xffffffff;

const uint32_t CSR_S_CTXT_STS__INDEX = 0x72;
const uint32_t CSR_S_CTXT_STS__SU__SHIFT = 0x0;
const uint32_t CSR_S_CTXT_STS__SU__SIZE = 0x2;
const uint32_t CSR_S_CTXT_STS__SU__MASK = 0x3;
const uint32_t CSR_S_CTXT_STS__W0__SHIFT = 0x2;
const uint32_t CSR_S_CTXT_STS__W0__SIZE = 0x2;
const uint32_t CSR_S_CTXT_STS__W0__MASK = 0x3;
const uint32_t CSR_S_CTXT_STS__W1__SHIFT = 0x4;
const uint32_t CSR_S_CTXT_STS__W1__SIZE = 0x2;
const uint32_t CSR_S_CTXT_STS__W1__MASK = 0x3;
const uint32_t CSR_S_CTXT_STS__W2__SHIFT = 0x6;
const uint32_t CSR_S_CTXT_STS__W2__SIZE = 0x2;
const uint32_t CSR_S_CTXT_STS__W2__MASK = 0x3;
const uint32_t CSR_S_CTXT_STS__W3__SHIFT = 0x8;
const uint32_t CSR_S_CTXT_STS__W3__SIZE = 0x2;
const uint32_t CSR_S_CTXT_STS__W3__MASK = 0x3;
const uint32_t CSR_S_CTXT_STS__W4__SHIFT = 0xa;
const uint32_t CSR_S_CTXT_STS__W4__SIZE = 0x2;
const uint32_t CSR_S_CTXT_STS__W4__MASK = 0x3;
const uint32_t CSR_S_CTXT_STS__W5__SHIFT = 0xc;
const uint32_t CSR_S_CTXT_STS__W5__SIZE = 0x2;
const uint32_t CSR_S_CTXT_STS__W5__MASK = 0x3;
const uint32_t CSR_S_CTXT_STS__ERERR__SHIFT = 0x1b;
const uint32_t CSR_S_CTXT_STS__ERERR__SIZE = 0x3;
const uint32_t CSR_S_CTXT_STS__ERERR__MASK = 0x7;
const uint32_t CSR_S_CTXT_STS__EERR__SHIFT = 0x1e;
const uint32_t CSR_S_CTXT_STS__EERR__SIZE = 0x1;
const uint32_t CSR_S_CTXT_STS__EERR__MASK = 0x1;
const uint32_t CSR_S_CTXT_STS__MERR__SHIFT = 0x1f;
const uint32_t CSR_S_CTXT_STS__MERR__SIZE = 0x1;
const uint32_t CSR_S_CTXT_STS__MERR__MASK = 0x1;

const uint32_t CSR_S_DBG_CTL__INDEX = 0x73;
const uint32_t CSR_S_DBG_CTL__CHAN_EN__SHIFT = 0x0;
const uint32_t CSR_S_DBG_CTL__CHAN_EN__SIZE = 0x2;
const uint32_t CSR_S_DBG_CTL__CHAN_EN__MASK = 0x3;
const uint32_t CSR_S_DBG_ECSR__INDEX = 0x74;
const uint32_t CSR_S_DBG_ECSR__EPCM__SHIFT = 0x0;
const uint32_t CSR_S_DBG_ECSR__EPCM__SIZE = 0x1;
const uint32_t CSR_S_DBG_ECSR__EPCM__MASK = 0x1;
const uint32_t CSR_S_DBG_ECSR__CTXT__SHIFT = 0x1;
const uint32_t CSR_S_DBG_ECSR__CTXT__SIZE = 0x3;
const uint32_t CSR_S_DBG_ECSR__CTXT__MASK = 0x7;
const uint32_t CSR_S_DBG_ECSR__BOS__SHIFT = 0x5;
const uint32_t CSR_S_DBG_ECSR__BOS__SIZE = 0x1;
const uint32_t CSR_S_DBG_ECSR__BOS__MASK = 0x1;
const uint32_t CSR_S_DBG_ECLR__INDEX = 0x75;
const uint32_t CSR_S_DBG_ECLR__CLR__SHIFT = 0x0;
const uint32_t CSR_S_DBG_ECLR__CLR__SIZE = 0x7;
const uint32_t CSR_S_DBG_ECLR__CLR__MASK = 0x7f;
const uint32_t CSR_S_DBG_IBRK0_CTL__INDEX = 0x80;
const uint32_t CSR_S_DBG_IBRK0_CTL__ENS__SHIFT = 0x0;
const uint32_t CSR_S_DBG_IBRK0_CTL__ENS__SIZE = 0x1;
const uint32_t CSR_S_DBG_IBRK0_CTL__ENS__MASK = 0x1;
const uint32_t CSR_S_DBG_IBRK0_CTL__ENW__SHIFT = 0x1;
const uint32_t CSR_S_DBG_IBRK0_CTL__ENW__SIZE = 0x1;
const uint32_t CSR_S_DBG_IBRK0_CTL__ENW__MASK = 0x1;
const uint32_t CSR_S_DBG_IBRK0_CTL__EVM__SHIFT = 0x2;
const uint32_t CSR_S_DBG_IBRK0_CTL__EVM__SIZE = 0x1;
const uint32_t CSR_S_DBG_IBRK0_CTL__EVM__MASK = 0x1;
const uint32_t CSR_S_DBG_IBRK0_PC__INDEX = 0x81;
const uint32_t CSR_S_DBG_IBRK0_PC__ADDR__SHIFT = 0x2;
const uint32_t CSR_S_DBG_IBRK0_PC__ADDR__SIZE = 0x11;
const uint32_t CSR_S_DBG_IBRK0_PC__ADDR__MASK = 0x1ffff;
const uint32_t CSR_S_DBG_IBRK0_VERT__INDEX = 0x82;
const uint32_t CSR_S_DBG_IBRK0_VERT__ADDR__SHIFT = 0x2;
const uint32_t CSR_S_DBG_IBRK0_VERT__ADDR__SIZE = 0x11;
const uint32_t CSR_S_DBG_IBRK0_VERT__ADDR__MASK = 0x1ffff;
const uint32_t CSR_S_DBG_DBRK0_CTL__INDEX = 0x90;
const uint32_t CSR_S_DBG_DBRK0_CTL__MLD__SHIFT = 0x0;
const uint32_t CSR_S_DBG_DBRK0_CTL__MLD__SIZE = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__MLD__MASK = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__MSTNI__SHIFT = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__MSTNI__SIZE = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__MSTNI__MASK = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__SIC__SHIFT = 0x2;
const uint32_t CSR_S_DBG_DBRK0_CTL__SIC__SIZE = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__SIC__MASK = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__SIZE__SHIFT = 0x3;
const uint32_t CSR_S_DBG_DBRK0_CTL__SIZE__SIZE = 0x3;
const uint32_t CSR_S_DBG_DBRK0_CTL__SIZE__MASK = 0x7;
const uint32_t CSR_S_DBG_DBRK0_CTL__MDNR__SHIFT = 0x6;
const uint32_t CSR_S_DBG_DBRK0_CTL__MDNR__SIZE = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__MDNR__MASK = 0x1;
const uint32_t CSR_S_DBG_DBRK0_CTL__CTXT__SHIFT = 0xf;
const uint32_t CSR_S_DBG_DBRK0_CTL__CTXT__SIZE = 0x7;
const uint32_t CSR_S_DBG_DBRK0_CTL__CTXT__MASK = 0x7f;
const uint32_t CSR_S_DBG_DBRK0_BASE__INDEX = 0x91;
const uint32_t CSR_S_DBG_DBRK0_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_S_DBG_DBRK0_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_S_DBG_DBRK0_BASE__ADDR__MASK = 0x7ffff;
const uint32_t CSR_S_DBG_DBRK0_SIDA__INDEX = 0x92;
const uint32_t CSR_S_DBG_DBRK0_SIDA__VALUE__SHIFT = 0x0;
const uint32_t CSR_S_DBG_DBRK0_SIDA__VALUE__SIZE = 0x13;
const uint32_t CSR_S_DBG_DBRK0_SIDA__VALUE__MASK = 0x7ffff;

const uint32_t CSR_S_INCOMING_MUX__INDEX = 0xa0;
const uint32_t CSR_S_INCOMING_MUX__TILE_ID__SHIFT = 0x0;
const uint32_t CSR_S_INCOMING_MUX__TILE_ID__SIZE = 0xb;
const uint32_t CSR_S_INCOMING_MUX__TILE_ID__MASK = 0x7ff;

const uint32_t CSR_S_INCOMING_MUXPAIR__INDEX = 0xa1;
const uint32_t CSR_S_INCOMING_MUXPAIR__TILE_ID__SHIFT = 0x0;
const uint32_t CSR_S_INCOMING_MUXPAIR__TILE_ID__SIZE = 0xb;
const uint32_t CSR_S_INCOMING_MUXPAIR__TILE_ID__MASK = 0x7ff;

const uint32_t CSR_S_INCOMING_DELTA__INDEX = 0xa2;
const uint32_t CSR_S_INCOMING_DELTA__ADDR__SHIFT = 0x2;
const uint32_t CSR_S_INCOMING_DELTA__ADDR__SIZE = 0x11;
const uint32_t CSR_S_INCOMING_DELTA__ADDR__MASK = 0x1ffff;

const uint32_t CSR_S_INCOMING_FORMAT__INDEX = 0xa3;
const uint32_t CSR_S_INCOMING_FORMAT__VALUE__SHIFT = 0x0;
const uint32_t CSR_S_INCOMING_FORMAT__VALUE__SIZE = 0x2;
const uint32_t CSR_S_INCOMING_FORMAT__VALUE__MASK = 0x3;

const uint32_t CSR_S_INCOMING_BASE__INDEX = 0xa4;
const uint32_t CSR_S_INCOMING_BASE__ADDR__SHIFT = 0x2;
const uint32_t CSR_S_INCOMING_BASE__ADDR__SIZE = 0x11;
const uint32_t CSR_S_INCOMING_BASE__ADDR__MASK = 0x1ffff;

const uint32_t CSR_S_INCOMING_SINIT__INDEX = 0xa5;
const uint32_t CSR_S_INCOMING_SINIT__ADDR__SHIFT = 0x2;
const uint32_t CSR_S_INCOMING_SINIT__ADDR__SIZE = 0x11;
const uint32_t CSR_S_INCOMING_SINIT__ADDR__MASK = 0x1ffff;

const uint32_t CSR_S_INCOMING_DCOUNT__INDEX = 0xa6;
const uint32_t CSR_S_INCOMING_DCOUNT__VALUE__SHIFT = 0x0;
const uint32_t CSR_S_INCOMING_DCOUNT__VALUE__SIZE = 0x11;
const uint32_t CSR_S_INCOMING_DCOUNT__VALUE__MASK = 0x1ffff;

const uint32_t CSR_S_OUTGOING_BASE__INDEX = 0xa7;
const uint32_t CSR_S_OUTGOING_BASE__ADDR__SHIFT = 0x2;
const uint32_t CSR_S_OUTGOING_BASE__ADDR__SIZE = 0x11;
const uint32_t CSR_S_OUTGOING_BASE__ADDR__MASK = 0x1ffff;

const uint32_t CSR_S_OUTGOING_DELTA__INDEX = 0xa8;
const uint32_t CSR_S_OUTGOING_DELTA__ADDR__SHIFT = 0x2;
const uint32_t CSR_S_OUTGOING_DELTA__ADDR__SIZE = 0x11;
const uint32_t CSR_S_OUTGOING_DELTA__ADDR__MASK = 0x1ffff;

const uint32_t CSR_S_EXCHANGE_CTL__INDEX = 0xa9;
const uint32_t CSR_S_EXCHANGE_CTL__ACTV__SHIFT = 0x0;
const uint32_t CSR_S_EXCHANGE_CTL__ACTV__SIZE = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__ACTV__MASK = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__SEV__SHIFT = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__SEV__SIZE = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__SEV__MASK = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__SWV__SHIFT = 0x2;
const uint32_t CSR_S_EXCHANGE_CTL__SWV__SIZE = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__SWV__MASK = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__S64__SHIFT = 0x3;
const uint32_t CSR_S_EXCHANGE_CTL__S64__SIZE = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__S64__MASK = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__ATMC__SHIFT = 0x4;
const uint32_t CSR_S_EXCHANGE_CTL__ATMC__SIZE = 0x1;
const uint32_t CSR_S_EXCHANGE_CTL__ATMC__MASK = 0x1;

const uint32_t CSR_S_ANS_DCOUNT__INDEX = 0xaa;
const uint32_t CSR_S_ANS_DCOUNT__VALUE__SHIFT = 0x0;
const uint32_t CSR_S_ANS_DCOUNT__VALUE__SIZE = 0x13;
const uint32_t CSR_S_ANS_DCOUNT__VALUE__MASK = 0x7ffff;

const uint32_t CSR_S_EXCHANGE_ADJ__INDEX = 0xab;
const uint32_t CSR_S_EXCHANGE_ADJ__COFF__SHIFT = 0x0;
const uint32_t CSR_S_EXCHANGE_ADJ__COFF__SIZE = 0x4;
const uint32_t CSR_S_EXCHANGE_ADJ__COFF__MASK = 0xf;
const uint32_t CSR_S_EXCHANGE_ADJ__SEWS__SHIFT = 0x4;
const uint32_t CSR_S_EXCHANGE_ADJ__SEWS__SIZE = 0x1;
const uint32_t CSR_S_EXCHANGE_ADJ__SEWS__MASK = 0x1;

const uint32_t CSR_W_WSR__INDEX = 0x1;
const uint32_t CSR_W_WSR__CTXTID_M1__SHIFT = 0x0;
const uint32_t CSR_W_WSR__CTXTID_M1__SIZE = 0x3;
const uint32_t CSR_W_WSR__CTXTID_M1__MASK = 0x7;
const uint32_t CSR_W_WSR__ETYPE__SHIFT = 0x4;
const uint32_t CSR_W_WSR__ETYPE__SIZE = 0x4;
const uint32_t CSR_W_WSR__ETYPE__MASK = 0xf;
const uint32_t CSR_W_WSR__ERPT__SHIFT = 0x9;
const uint32_t CSR_W_WSR__ERPT__SIZE = 0x1;
const uint32_t CSR_W_WSR__ERPT__MASK = 0x1;

const uint32_t CSR_W_VERTEX_BASE__INDEX = 0x2;
const uint32_t CSR_W_VERTEX_BASE__ADDR__SHIFT = 0x2;
const uint32_t CSR_W_VERTEX_BASE__ADDR__SIZE = 0x11;
const uint32_t CSR_W_VERTEX_BASE__ADDR__MASK = 0x1ffff;

const uint32_t CSR_W_WORKER_BASE__INDEX = 0x3;
const uint32_t CSR_W_WORKER_BASE__ADDR__SHIFT = 0x0;
const uint32_t CSR_W_WORKER_BASE__ADDR__SIZE = 0x13;
const uint32_t CSR_W_WORKER_BASE__ADDR__MASK = 0x7ffff;

const uint32_t CSR_W_REPEAT_COUNT__INDEX = 0x4;
const uint32_t CSR_W_REPEAT_COUNT__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_REPEAT_COUNT__VALUE__SIZE = 0xc;
const uint32_t CSR_W_REPEAT_COUNT__VALUE__MASK = 0xfff;

const uint32_t CSR_W_REPEAT_FIRST__INDEX = 0x5;
const uint32_t CSR_W_REPEAT_FIRST__ADDR__SHIFT = 0x3;
const uint32_t CSR_W_REPEAT_FIRST__ADDR__SIZE = 0x10;
const uint32_t CSR_W_REPEAT_FIRST__ADDR__MASK = 0xffff;

const uint32_t CSR_W_REPEAT_END__INDEX = 0x6;
const uint32_t CSR_W_REPEAT_END__ADDR__SHIFT = 0x3;
const uint32_t CSR_W_REPEAT_END__ADDR__SIZE = 0x10;
const uint32_t CSR_W_REPEAT_END__ADDR__MASK = 0xffff;

const uint32_t CSR_W_COUNT_L__INDEX = 0x60;
const uint32_t CSR_W_COUNT_L__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_COUNT_L__VALUE__SIZE = 0x20;
const uint32_t CSR_W_COUNT_L__VALUE__MASK = 0xffffffff;

const uint32_t CSR_W_COUNT_U__INDEX = 0x61;
const uint32_t CSR_W_COUNT_U__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_COUNT_U__VALUE__SIZE = 0x20;
const uint32_t CSR_W_COUNT_U__VALUE__MASK = 0xffffffff;

const uint32_t CSR_W_FP_STS__INDEX = 0x100;
const uint32_t CSR_W_FP_STS__INV__SHIFT = 0x0;
const uint32_t CSR_W_FP_STS__INV__SIZE = 0x1;
const uint32_t CSR_W_FP_STS__INV__MASK = 0x1;
const uint32_t CSR_W_FP_STS__DIV0__SHIFT = 0x1;
const uint32_t CSR_W_FP_STS__DIV0__SIZE = 0x1;
const uint32_t CSR_W_FP_STS__DIV0__MASK = 0x1;
const uint32_t CSR_W_FP_STS__OFLO__SHIFT = 0x2;
const uint32_t CSR_W_FP_STS__OFLO__SIZE = 0x1;
const uint32_t CSR_W_FP_STS__OFLO__MASK = 0x1;
const uint32_t CSR_W_FP_CLR__INDEX = 0x101;
const uint32_t CSR_W_FP_CLR__INV__SHIFT = 0x0;
const uint32_t CSR_W_FP_CLR__INV__SIZE = 0x1;
const uint32_t CSR_W_FP_CLR__INV__MASK = 0x1;
const uint32_t CSR_W_FP_CLR__DIV0__SHIFT = 0x1;
const uint32_t CSR_W_FP_CLR__DIV0__SIZE = 0x1;
const uint32_t CSR_W_FP_CLR__DIV0__MASK = 0x1;
const uint32_t CSR_W_FP_CLR__OFLO__SHIFT = 0x2;
const uint32_t CSR_W_FP_CLR__OFLO__SIZE = 0x1;
const uint32_t CSR_W_FP_CLR__OFLO__MASK = 0x1;
const uint32_t CSR_W_FP_CLR__ZAACC__SHIFT = 0x3;
const uint32_t CSR_W_FP_CLR__ZAACC__SIZE = 0x1;
const uint32_t CSR_W_FP_CLR__ZAACC__MASK = 0x1;
const uint32_t CSR_W_FP_CTL__INDEX = 0x102;
const uint32_t CSR_W_FP_CTL__INV__SHIFT = 0x0;
const uint32_t CSR_W_FP_CTL__INV__SIZE = 0x1;
const uint32_t CSR_W_FP_CTL__INV__MASK = 0x1;
const uint32_t CSR_W_FP_CTL__DIV0__SHIFT = 0x1;
const uint32_t CSR_W_FP_CTL__DIV0__SIZE = 0x1;
const uint32_t CSR_W_FP_CTL__DIV0__MASK = 0x1;
const uint32_t CSR_W_FP_CTL__OFLO__SHIFT = 0x2;
const uint32_t CSR_W_FP_CTL__OFLO__SIZE = 0x1;
const uint32_t CSR_W_FP_CTL__OFLO__MASK = 0x1;
const uint32_t CSR_W_FP_CTL__RND__SHIFT = 0x10;
const uint32_t CSR_W_FP_CTL__RND__SIZE = 0x3;
const uint32_t CSR_W_FP_CTL__RND__MASK = 0x7;
const uint32_t CSR_W_FP_CTL__ESR__SHIFT = 0x13;
const uint32_t CSR_W_FP_CTL__ESR__SIZE = 0x1;
const uint32_t CSR_W_FP_CTL__ESR__MASK = 0x1;
const uint32_t CSR_W_FP_CTL__NANOO__SHIFT = 0x14;
const uint32_t CSR_W_FP_CTL__NANOO__SIZE = 0x1;
const uint32_t CSR_W_FP_CTL__NANOO__MASK = 0x1;

const uint32_t CSR_W_PRNG_0_0__INDEX = 0x103;
const uint32_t CSR_W_PRNG_0_0__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_PRNG_0_0__VALUE__SIZE = 0x20;
const uint32_t CSR_W_PRNG_0_0__VALUE__MASK = 0xffffffff;

const uint32_t CSR_W_PRNG_0_1__INDEX = 0x104;
const uint32_t CSR_W_PRNG_0_1__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_PRNG_0_1__VALUE__SIZE = 0x20;
const uint32_t CSR_W_PRNG_0_1__VALUE__MASK = 0xffffffff;

const uint32_t CSR_W_PRNG_1_0__INDEX = 0x105;
const uint32_t CSR_W_PRNG_1_0__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_PRNG_1_0__VALUE__SIZE = 0x20;
const uint32_t CSR_W_PRNG_1_0__VALUE__MASK = 0xffffffff;

const uint32_t CSR_W_PRNG_1_1__INDEX = 0x106;
const uint32_t CSR_W_PRNG_1_1__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_PRNG_1_1__VALUE__SIZE = 0x20;
const uint32_t CSR_W_PRNG_1_1__VALUE__MASK = 0xffffffff;

const uint32_t CSR_W_PRNG_SEED__INDEX = 0x107;
const uint32_t CSR_W_PRNG_SEED__VALUE__SHIFT = 0x0;
const uint32_t CSR_W_PRNG_SEED__VALUE__SIZE = 0x20;
const uint32_t CSR_W_PRNG_SEED__VALUE__MASK = 0xffffffff;

const uint32_t CSR_W_TAS__INDEX = 0x108;
const uint32_t CSR_W_TAS__F16_0__SHIFT = 0x0;
const uint32_t CSR_W_TAS__F16_0__SIZE = 0x10;
const uint32_t CSR_W_TAS__F16_0__MASK = 0xffff;
const uint32_t CSR_W_TAS__F16_16__SHIFT = 0x10;
const uint32_t CSR_W_TAS__F16_16__SIZE = 0x10;
const uint32_t CSR_W_TAS__F16_16__MASK = 0xffff;

const uint32_t TDI_CTXT_STS__INDEX = 0x0;
const uint32_t TDI_CTXT_STS__SU__SHIFT = 0x0;
const uint32_t TDI_CTXT_STS__SU__SIZE = 0x2;
const uint32_t TDI_CTXT_STS__SU__MASK = 0x3;
const uint32_t TDI_CTXT_STS__W0__SHIFT = 0x2;
const uint32_t TDI_CTXT_STS__W0__SIZE = 0x2;
const uint32_t TDI_CTXT_STS__W0__MASK = 0x3;
const uint32_t TDI_CTXT_STS__W1__SHIFT = 0x4;
const uint32_t TDI_CTXT_STS__W1__SIZE = 0x2;
const uint32_t TDI_CTXT_STS__W1__MASK = 0x3;
const uint32_t TDI_CTXT_STS__W2__SHIFT = 0x6;
const uint32_t TDI_CTXT_STS__W2__SIZE = 0x2;
const uint32_t TDI_CTXT_STS__W2__MASK = 0x3;
const uint32_t TDI_CTXT_STS__W3__SHIFT = 0x8;
const uint32_t TDI_CTXT_STS__W3__SIZE = 0x2;
const uint32_t TDI_CTXT_STS__W3__MASK = 0x3;
const uint32_t TDI_CTXT_STS__W4__SHIFT = 0xa;
const uint32_t TDI_CTXT_STS__W4__SIZE = 0x2;
const uint32_t TDI_CTXT_STS__W4__MASK = 0x3;
const uint32_t TDI_CTXT_STS__W5__SHIFT = 0xc;
const uint32_t TDI_CTXT_STS__W5__SIZE = 0x2;
const uint32_t TDI_CTXT_STS__W5__MASK = 0x3;
const uint32_t TDI_CTXT_STS__ERERR__SHIFT = 0x1b;
const uint32_t TDI_CTXT_STS__ERERR__SIZE = 0x3;
const uint32_t TDI_CTXT_STS__ERERR__MASK = 0x7;
const uint32_t TDI_CTXT_STS__EERR__SHIFT = 0x1e;
const uint32_t TDI_CTXT_STS__EERR__SIZE = 0x1;
const uint32_t TDI_CTXT_STS__EERR__MASK = 0x1;
const uint32_t TDI_CTXT_STS__MERR__SHIFT = 0x1f;
const uint32_t TDI_CTXT_STS__MERR__SIZE = 0x1;
const uint32_t TDI_CTXT_STS__MERR__MASK = 0x1;

const uint32_t TDI_DBG_RBRK__INDEX = 0x1;
const uint32_t TDI_DBG_RBRK__EN__SHIFT = 0x0;
const uint32_t TDI_DBG_RBRK__EN__SIZE = 0x7;
const uint32_t TDI_DBG_RBRK__EN__MASK = 0x7f;
const uint32_t TDI_DBG_RBRK__ATOV__SHIFT = 0x1e;
const uint32_t TDI_DBG_RBRK__ATOV__SIZE = 0x1;
const uint32_t TDI_DBG_RBRK__ATOV__MASK = 0x1;
const uint32_t TDI_DBG_RBRK__VM_EN__SHIFT = 0x1f;
const uint32_t TDI_DBG_RBRK__VM_EN__SIZE = 0x1;
const uint32_t TDI_DBG_RBRK__VM_EN__MASK = 0x1;
const uint32_t TDI_DBG_RBRK_VERT__INDEX = 0x2;
const uint32_t TDI_DBG_RBRK_VERT__ADDR__SHIFT = 0x2;
const uint32_t TDI_DBG_RBRK_VERT__ADDR__SIZE = 0x11;
const uint32_t TDI_DBG_RBRK_VERT__ADDR__MASK = 0x1ffff;
const uint32_t TDI_DBG_IEXEC__INDEX = 0x3;
const uint32_t TDI_DBG_IEXEC__INST__SHIFT = 0x0;
const uint32_t TDI_DBG_IEXEC__INST__SIZE = 0x20;
const uint32_t TDI_DBG_IEXEC__INST__MASK = 0xffffffff;
const uint32_t TDI_DBG_IOWNER__INDEX = 0x4;
const uint32_t TDI_DBG_IOWNER__CTXT__SHIFT = 0x0;
const uint32_t TDI_DBG_IOWNER__CTXT__SIZE = 0x3;
const uint32_t TDI_DBG_IOWNER__CTXT__MASK = 0x7;
const uint32_t TDI_DBG_ECSR__INDEX = 0x5;
const uint32_t TDI_DBG_ECSR__EPCM__SHIFT = 0x0;
const uint32_t TDI_DBG_ECSR__EPCM__SIZE = 0x1;
const uint32_t TDI_DBG_ECSR__EPCM__MASK = 0x1;
const uint32_t TDI_DBG_ECSR__CTXT__SHIFT = 0x1;
const uint32_t TDI_DBG_ECSR__CTXT__SIZE = 0x3;
const uint32_t TDI_DBG_ECSR__CTXT__MASK = 0x7;
const uint32_t TDI_DBG_ECSR__BOS__SHIFT = 0x5;
const uint32_t TDI_DBG_ECSR__BOS__SIZE = 0x1;
const uint32_t TDI_DBG_ECSR__BOS__MASK = 0x1;
const uint32_t TDI_DBG_ECLR__INDEX = 0x6;
const uint32_t TDI_DBG_ECLR__CLR__SHIFT = 0x0;
const uint32_t TDI_DBG_ECLR__CLR__SIZE = 0x7;
const uint32_t TDI_DBG_ECLR__CLR__MASK = 0x7f;
const uint32_t TDI_DBG_DATA__INDEX = 0x7;
const uint32_t TDI_DBG_DATA__VALUE__SHIFT = 0x0;
const uint32_t TDI_DBG_DATA__VALUE__SIZE = 0x20;
const uint32_t TDI_DBG_DATA__VALUE__MASK = 0xffffffff;

const uint32_t TDI_TDI_STS__INDEX = 0x8;
const uint32_t TDI_TDI_STS__CNQ__SHIFT = 0x0;
const uint32_t TDI_TDI_STS__CNQ__SIZE = 0x1;
const uint32_t TDI_TDI_STS__CNQ__MASK = 0x1;
const uint32_t TDI_TDI_STS__INV__SHIFT = 0x1;
const uint32_t TDI_TDI_STS__INV__SIZE = 0x1;
const uint32_t TDI_TDI_STS__INV__MASK = 0x1;
const uint32_t TDI_TDI_STS__DBLE__SHIFT = 0x2;
const uint32_t TDI_TDI_STS__DBLE__SIZE = 0x1;
const uint32_t TDI_TDI_STS__DBLE__MASK = 0x1;
const uint32_t TDI_TDI_STS__BUSY__SHIFT = 0x3;
const uint32_t TDI_TDI_STS__BUSY__SIZE = 0x1;
const uint32_t TDI_TDI_STS__BUSY__MASK = 0x1;
const uint32_t TDI_TDI_CLR__INDEX = 0x9;
const uint32_t TDI_TDI_CLR__CNQ__SHIFT = 0x0;
const uint32_t TDI_TDI_CLR__CNQ__SIZE = 0x1;
const uint32_t TDI_TDI_CLR__CNQ__MASK = 0x1;
const uint32_t TDI_TDI_CLR__INV__SHIFT = 0x1;
const uint32_t TDI_TDI_CLR__INV__SIZE = 0x1;
const uint32_t TDI_TDI_CLR__INV__MASK = 0x1;
const uint32_t TDI_TDI_CLR__DBLE__SHIFT = 0x2;
const uint32_t TDI_TDI_CLR__DBLE__SIZE = 0x1;
const uint32_t TDI_TDI_CLR__DBLE__MASK = 0x1;

const uint32_t TDI_INCOMING_DCOUNT__INDEX = 0xa;
const uint32_t TDI_INCOMING_DCOUNT__VALUE__SHIFT = 0x0;
const uint32_t TDI_INCOMING_DCOUNT__VALUE__SIZE = 0x11;
const uint32_t TDI_INCOMING_DCOUNT__VALUE__MASK = 0x1ffff;

const uint32_t TDI_EXCHANGE_CTL__INDEX = 0xb;
const uint32_t TDI_EXCHANGE_CTL__ACTV__SHIFT = 0x0;
const uint32_t TDI_EXCHANGE_CTL__ACTV__SIZE = 0x1;
const uint32_t TDI_EXCHANGE_CTL__ACTV__MASK = 0x1;
const uint32_t TDI_EXCHANGE_CTL__SEV__SHIFT = 0x1;
const uint32_t TDI_EXCHANGE_CTL__SEV__SIZE = 0x1;
const uint32_t TDI_EXCHANGE_CTL__SEV__MASK = 0x1;
const uint32_t TDI_EXCHANGE_CTL__SWV__SHIFT = 0x2;
const uint32_t TDI_EXCHANGE_CTL__SWV__SIZE = 0x1;
const uint32_t TDI_EXCHANGE_CTL__SWV__MASK = 0x1;
const uint32_t TDI_EXCHANGE_CTL__S64__SHIFT = 0x3;
const uint32_t TDI_EXCHANGE_CTL__S64__SIZE = 0x1;
const uint32_t TDI_EXCHANGE_CTL__S64__MASK = 0x1;
const uint32_t TDI_EXCHANGE_CTL__ATMC__SHIFT = 0x4;
const uint32_t TDI_EXCHANGE_CTL__ATMC__SIZE = 0x1;
const uint32_t TDI_EXCHANGE_CTL__ATMC__MASK = 0x1;

const uint32_t TDI_TDI_CTL__INDEX = 0xc;
const uint32_t TDI_TDI_CTL__SEPEX__SHIFT = 0x0;
const uint32_t TDI_TDI_CTL__SEPEX__SIZE = 0x1;
const uint32_t TDI_TDI_CTL__SEPEX__MASK = 0x1;
const uint32_t TDI_TDI_CTL__DISRC__SHIFT = 0x1;
const uint32_t TDI_TDI_CTL__DISRC__SIZE = 0x1;
const uint32_t TDI_TDI_CTL__DISRC__MASK = 0x1;

const uint32_t DATAFMT_SEND_SCTL3__EV__SHIFT = 0x0;
const uint32_t DATAFMT_SEND_SCTL3__EV__SIZE = 0x1;
const uint32_t DATAFMT_SEND_SCTL3__EV__MASK = 0x1;
const uint32_t DATAFMT_SEND_SCTL3__WV__SHIFT = 0x1;
const uint32_t DATAFMT_SEND_SCTL3__WV__SIZE = 0x1;
const uint32_t DATAFMT_SEND_SCTL3__WV__MASK = 0x1;
const uint32_t DATAFMT_SEND_SCTL3__64BITS__SHIFT = 0x2;
const uint32_t DATAFMT_SEND_SCTL3__64BITS__SIZE = 0x1;
const uint32_t DATAFMT_SEND_SCTL3__64BITS__MASK = 0x1;

const uint32_t SOC_IPU_MEM_TILE_STRIDE = 0x40;
const uint32_t SOC_PCI_COMPLEX_BASE = 0x0;
const uint32_t SOC_PCI_COMPLEX_SEC_BASE = 0x0;
const uint32_t SOC_CBUS0_BASE = 0x4000;
const uint32_t SOC_SS_BASE = 0x4000;

const uint32_t SOC_XB_W_0_BASE = 0x4400;
const uint32_t SOC_XB_W_1_BASE = 0x4800;
const uint32_t SOC_XB_W_2_BASE = 0x4c00;
const uint32_t SOC_XB_W_3_BASE = 0x5000;
const uint32_t SOC_XB_W_4_BASE = 0x5400;
const uint32_t SOC_XB_W_5_BASE = 0x5800;
const uint32_t SOC_XB_W_6_BASE = 0x5c00;
const uint32_t SOC_XB_W_7_BASE = 0x6000;

const uint32_t SOC_NLC_W_1B_BASE = 0x6400;
const uint32_t SOC_NLC_W_1C_BASE = 0x8800;

const uint32_t SOC_TR_W_1X_BASE = 0xac00;
const uint32_t SOC_TR_W_1C_BASE = 0xb000;
const uint32_t SOC_TR_W_1B_BASE = 0xb400;
const uint32_t SOC_TR_W_PCI_SEC_BASE = 0xb800;
const uint32_t SOC_TR_W_7_BASE = 0xbc00;
const uint32_t SOC_TR_W_6_BASE = 0xc000;
const uint32_t SOC_TR_W_5_BASE = 0xc400;
const uint32_t SOC_TR_W_4_BASE = 0xc800;
const uint32_t SOC_TR_W_3_BASE = 0xcc00;
const uint32_t SOC_TR_W_2_BASE = 0xd000;
const uint32_t SOC_TR_W_1_BASE = 0xd400;
const uint32_t SOC_TR_W_0_BASE = 0xd800;
const uint32_t SOC_TR_W_PCI_BASE = 0xdc00;

const uint32_t SOC_CBUS1_BASE = 0x10000;

const uint32_t SOC_NLC_W_0B_BASE = 0x10000;
const uint32_t SOC_NLC_W_0C_BASE = 0x12400;
const uint32_t SOC_NLC_E_2C_BASE = 0x14800;
const uint32_t SOC_NLC_E_2B_BASE = 0x16c00;
const uint32_t SOC_NLC_E_2A_BASE = 0x19000;

const uint32_t SOC_SS_E_BASE = 0x1b400;

const uint32_t SOC_XB_E_0_BASE = 0x1b800;
const uint32_t SOC_XB_E_1_BASE = 0x1bc00;
const uint32_t SOC_XB_E_2_BASE = 0x1c000;
const uint32_t SOC_XB_E_3_BASE = 0x1c400;
const uint32_t SOC_XB_E_4_BASE = 0x1c800;
const uint32_t SOC_XB_E_5_BASE = 0x1cc00;
const uint32_t SOC_XB_E_6_BASE = 0x1d000;
const uint32_t SOC_XB_E_7_BASE = 0x1d400;

const uint32_t SOC_NLC_E_3A_BASE = 0x1d800;
const uint32_t SOC_NLC_E_3B_BASE = 0x1fc00;
const uint32_t SOC_NLC_E_3C_BASE = 0x22000;

const uint32_t SOC_TR_E_3X_BASE = 0x24400;
const uint32_t SOC_TR_E_3C_BASE = 0x24800;
const uint32_t SOC_TR_E_3B_BASE = 0x24c00;
const uint32_t SOC_TR_E_3A_BASE = 0x25000;
const uint32_t SOC_TR_E_7_BASE = 0x25400;
const uint32_t SOC_TR_E_6_BASE = 0x25800;
const uint32_t SOC_TR_E_5_BASE = 0x25c00;
const uint32_t SOC_TR_E_4_BASE = 0x26000;
const uint32_t SOC_TR_E_3_BASE = 0x26400;
const uint32_t SOC_TR_E_2_BASE = 0x26800;
const uint32_t SOC_TR_E_1_BASE = 0x26c00;
const uint32_t SOC_TR_E_0_BASE = 0x27000;
const uint32_t SOC_TR_E_2A_BASE = 0x27400;
const uint32_t SOC_TR_E_2B_BASE = 0x27800;
const uint32_t SOC_TR_E_2C_BASE = 0x27c00;
const uint32_t SOC_TR_E_2X_BASE = 0x28000;
const uint32_t SOC_TR_W_0X_BASE = 0x28400;
const uint32_t SOC_TR_W_0C_BASE = 0x28800;
const uint32_t SOC_TR_W_0B_BASE = 0x28c00;

const uint32_t SOC_CBUS2_BASE = 0x30000;

const uint32_t SOC_MSIX_TABLE_BAR = 0x4;
const uint32_t SOC_MSIX_PBA_BAR = 0x5;
const uint32_t SOC_MSIX_TABLE_OFFSET = 0x0;
const uint32_t SOC_MSIX_PBA_OFFSET = 0x0;
const uint32_t SOC_MSIX_NUM_INTERRUPTS = 0x8;

const uint32_t SOC_HOST_PCI_SPACE_ONE_PCI_CPLX_EXCHANGE_BAR = 0x2;
const uint32_t SOC_HOST_PCI_SPACE_ONE_PCI_CPLX_BAR_SIZE = 0x20000000;
const uint32_t SOC_HOST_PCI_SPACE_ONE_PCI_CPLX_IPU_BASE = 0xc000000;
const uint32_t SOC_HOST_PCI_SPACE_ONE_PCI_CPLX_IPU_RANGE = 0x14000000;

const uint32_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_BASE_ADDR = 0x0;
const uint32_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_RANGE_SMALL = 0x40000000;
const uint64_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_RANGE_LARGE = 0x400000000;
const uint32_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_OPT_BASE_ADDR = 0x0;
const uint32_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_OPT_RANGE = 0x8000000;
const uint32_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_OAT_BASE_ADDR = 0x8000000;
const uint32_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_OAT_NUM_REGIONS = 0x8;
const uint32_t SOC_TILE_PCI_SPACE_ONE_PCI_CPLX_PRI_OAT_MIN_REGION_SIZE_BYTES = 0x1000;

const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_BASE_ADDR = 0x0;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_RANGE_SMALL = 0x20000000;
const uint64_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_RANGE_LARGE = 0x200000000;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_OPT_BASE_ADDR = 0x0;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_OPT_RANGE = 0x8000000;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_OAT_BASE_ADDR = 0x8000000;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_OAT_NUM_REGIONS = 0x8;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_PRI_OAT_MIN_REGION_SIZE_BYTES = 0x1000;

const uint64_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_SEC_BASE_ADDR = 0x200000000;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_SEC_RANGE_SMALL = 0x20000000;
const uint64_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_SEC_RANGE_LARGE = 0x200000000;
const uint64_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_SEC_OPT_BASE_ADDR = 0x200000000;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_SEC_OPT_RANGE = 0x8000000;
const uint64_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_SEC_OAT_BASE_ADDR = 0x208000000;
const uint32_t SOC_TILE_PCI_SPACE_TWO_PCI_CPLX_SEC_OAT_NUM_REGIONS = 0x8;

const uint32_t SOC_TLINK_PACKET_XREQ_HDR_WORDS = 0x2;
const uint32_t SOC_TLINK_PACKET_XFC_HDR_WORDS = 0x1;
const uint32_t SOC_TLINK_PACKET_XTWRS_HDR_WORDS = 0x2;
const uint32_t SOC_TLINK_PACKET_XTWRL_HDR_WORDS = 0x2;
const uint32_t SOC_TLINK_PACKET_XPWRS_HDR_WORDS = 0x2;
const uint32_t SOC_TLINK_PACKET_XPWRL_HDR_WORDS = 0x2;
const uint32_t SOC_TLINK_PACKET_XPRDS_HDR_WORDS = 0x2;
const uint32_t SOC_TLINK_PACKET_XPRDL_HDR_WORDS = 0x2;
const uint32_t SOC_ELINK_PACKET_ETWR_HDR_WORDS = 0x4;
const uint32_t SOC_ELINK_PACKET_EPRD_HDR_WORDS = 0x4;

const uint32_t SOC_IPU_MEM_BASE = 0x30000;

enum TileRunMode {
  TRUNM_INACTIVE = 0,
  TRUNM_EXECUTING = 1,
  TRUNM_EXCEPTED = 2,
  TRUNM_REPEATING = 3,
  TRUNM_EXECUTE_INJECT = 4,
  TRUNM_SUSPENDED_NWE = 5,
  TRUNM_SUSPENDED_WE = 6,
  TRUNM_EXCHANGE_SEND = 7,
  TRUNM_DELAY = 8,
  TRUNM_WAIT_EXCHANGE = 9,
  TRUNM_WAIT_ANS = 10,
  TRUNM_WAIT_WORKERS = 11,
  TRUNM_WAIT_ISYNCACK = 12,
  TRUNM_WAIT_ESYNCACK = 13,
};

enum TileInstrPhase {
  TPHASE_FETCH = 0,
  TPHASE_ISSUE = 1,
  TPHASE_EXECUTE = 2,
  TPHASE_RETIRE = 3,
};

enum TileFloatTestTypes {
  TFPU_KIND_NAN = 0,
  TFPU_KIND_INF = 1,
  TFPU_KIND_FINITE = 2,
  TFPU_KIND_MAXM = 3,
};

enum TileFloatTestSign {
  TFPU_SIGN_IGNORE = 0,
  TFPU_SIGN_POSITIVE = 2,
  TFPU_SIGN_NEGATIVE = 3,
};

enum TileFloatNormTypes {
  TFPU_NORM_NOP = 0,
  TFPU_NORM_SQACC = 1,
  TFPU_NORM_ACC = 2,
  TFPU_NORM_ABSACC = 3,
};

enum TileFP16Fmt {
  TFPU_FP16FMT_HALF = 0,
  TFPU_FP16FMT_BFLT = 1,
  TFPU_FP16FMT_UNKNOWN = 2,
};

enum TileFP32Prec {
  TFPU_FP32PREC_F32 = 0,
  TFPU_FP32PREC_FF32 = 1,
  TFPU_FP32PREC_UNKNOWN = 2,
};

enum HalfSaturationMode {
  TFPU_HSATURATE_NONE = 0,
  TFPU_HSATURATE_MAX = 1,
  TFPU_HSATURATE_NAN = 2,
};

enum InfPropMode {
  TFPU_PROP_NEITHER = 0,
  TFPU_PROP_INF = 1,
  TFPU_PROP_NEGINF = 2,
  TFPU_PROP_POSINF = 3,
};

enum TileExceptionCause {
  CAUSEID_NONE = 0,
  CAUSEID_ANS_WOULD_OVERFLOW = 1,
  CAUSEID_PBRK0 = 2,
  CAUSEID_PBRK1 = 3,
  CAUSEID_INCOMING_MUX_PAIR = 4,
  CAUSEID_RECEIVING_TLINK = 5,
  CAUSEID_BREAK_ON_SYNC = 6,
  CAUSEID_CONFLICT_EA0 = 7,
  CAUSEID_CONFLICT_EA1 = 8,
  CAUSEID_CONFLICT_EA2 = 9,
  CAUSEID_CONFLICT_EA3 = 10,
  CAUSEID_CONFLICT_EA4 = 11,
  CAUSEID_CONFLICT_EA5 = 12,
  CAUSEID_CONFLICT_EAINDEX = 13,
  CAUSEID_CONFLICT_EAINDEX0 = 14,
  CAUSEID_CONFLICT_EAINDEX1 = 15,
  CAUSEID_DIV_BY_0 = 16,
  CAUSEID_DIV_OVERFLOW = 17,
  CAUSEID_END_PC_INVALID = 18,
  CAUSEID_END_PC_NOT_EXECUTABLE = 19,
  CAUSEID_EXECUTABLE_ADDRESS_EA1 = 20,
  CAUSEID_EXTERNAL_SYNC_INTERNAL_MUX = 21,
  CAUSEID_FLOATING_POINT = 22,
  CAUSEID_ILLEGAL_INSTRUCTION = 23,
  CAUSEID_INCOMING_MUX_EXTERNAL = 24,
  CAUSEID_INCOMING_MUX_EXTERNAL_RANGE = 25,
  CAUSEID_INSTR_IN_REPEAT = 26,
  CAUSEID_INVALID_ADDRESS_EA0 = 27,
  CAUSEID_INVALID_ADDRESS_EA1 = 28,
  CAUSEID_INVALID_ADDRESS_EA2 = 29,
  CAUSEID_INVALID_ADDRESS_EA3 = 30,
  CAUSEID_INVALID_ADDRESS_EA4 = 31,
  CAUSEID_INVALID_ADDRESS_EA5 = 32,
  CAUSEID_INVALID_ADDRESS_EAINDEX = 33,
  CAUSEID_INVALID_ADDRESS_EAINDEX0 = 34,
  CAUSEID_INVALID_ADDRESS_EAINDEX1 = 35,
  CAUSEID_INVALID_CCCS_0 = 36,
  CAUSEID_INVALID_CCCS_1 = 37,
  CAUSEID_INVALID_CCCS_2 = 38,
  CAUSEID_INVALID_CCCS_3 = 39,
  CAUSEID_INVALID_CCCS_MISALIGNED = 40,
  CAUSEID_INVALID_CSR = 41,
  CAUSEID_INVALID_PAIR_DELAY_0 = 42,
  CAUSEID_INVALID_REGION_EA0 = 43,
  CAUSEID_INVALID_REGION_EA1 = 44,
  CAUSEID_INVALID_REGION_EA2 = 45,
  CAUSEID_INVALID_REGION_EA3 = 46,
  CAUSEID_INVALID_REGION_EA4 = 47,
  CAUSEID_INVALID_REGION_EA5 = 48,
  CAUSEID_INVALID_REGION_EAINDEX0 = 49,
  CAUSEID_INVALID_REGION_EAINDEX1 = 50,
  CAUSEID_INVALID_SET_MUX = 51,
  CAUSEID_INVALID_TOP = 52,
  CAUSEID_INVALID_WORKER_CSR = 53,
  CAUSEID_INVALID_WORKER_PC = 54,
  CAUSEID_INVALID_WORKER_VERTEX_BASE = 55,
  CAUSEID_MESSAGE_COUNT_TOO_GREAT = 56,
  CAUSEID_MISALIGNED_ADDRESS = 57,
  CAUSEID_MISALIGNED_EA0 = 58,
  CAUSEID_MISALIGNED_EA1 = 59,
  CAUSEID_MISALIGNED_EA2 = 60,
  CAUSEID_MISALIGNED_EA3 = 61,
  CAUSEID_MISALIGNED_EA4 = 62,
  CAUSEID_MISALIGNED_EA5 = 63,
  CAUSEID_MISALIGNED_EAINDEX = 64,
  CAUSEID_MISALIGNED_EAINDEX0 = 65,
  CAUSEID_MISALIGNED_EAINDEX1 = 66,
  CAUSEID_MISALIGNED_EXEBUNDLE = 67,
  CAUSEID_MISALIGNED_WORKER_PC = 68,
  CAUSEID_MISALIGNED_WORKER_VERTEX_BASE = 69,
  CAUSEID_NEXT_PC_INVALID = 70,
  CAUSEID_NEXT_PC_NOT_EXECUTABLE = 71,
  CAUSEID_INVALID_TOPK_SRCDST = 72,
  CAUSEID_NON_EXECUTABLE_WORKER_PC = 73,
  CAUSEID_PAIRED_64_BIT = 74,
  CAUSEID_PC_MISALIGNED = 75,
  CAUSEID_PC_NOT_EXECUTABLE = 76,
  CAUSEID_PC_NOT_VALID = 77,
  CAUSEID_SYNC_ANS_ACTIVE = 78,
  CAUSEID_INVALID_SYNCZONE = 79,
  CAUSEID_WORKER_ACTIVE = 80,
};

enum TileException {
  TEXCPT_IBRK = 15,
  TEXCPT_MEMERR = 14,
  TEXCPT_EXERR = 13,
  TEXCPT_INVALID_INSTR = 12,
  TEXCPT_DBRK = 11,
  TEXCPT_INVALID_PC = 10,
  TEXCPT_INVALID_OP = 9,
  TEXCPT_INVALID_ADDR = 8,
  TEXCPT_EXCONF = 7,
  TEXCPT_CONFLICT = 6,
  TEXCPT_FP = 5,
  TEXCPT_BOS = 4,
  TEXCPT_PBRK1 = 3,
  TEXCPT_PBRK0 = 2,
  TEXCPT_RBRK = 1,
  TEXCPT_NONE = 0,
};

enum TileCtxtStatus {
  TCTXT_STATUS_INACTIVE = 0,
  TCTXT_STATUS_WAEX = 0,
  TCTXT_STATUS_ACTIVE = 1,
  TCTXT_STATUS_EXCEPTED_DBG = 2,
  TCTXT_STATUS_EXCEPTED_NDBG = 3,
};

enum IpuSyncZone {
  IPU_ZONE_ERROR = 0,
  IPU_ZONE_IPU = 1,
  IPU_ZONE_GS1 = 2,
  IPU_ZONE_GS1H = 3,
  IPU_ZONE_GS2 = 4,
  IPU_ZONE_GS2H = 5,
  IPU_ZONE_ANY = 7,
};

enum TileSyncZone {
  TEXCH_SYNCZONE_RECV = 0,
  TEXCH_SYNCZONE_ANS = 1,
  TEXCH_SYNCZONE_LOCAL = 2,
  TEXCH_SYNCZONE_INTERNAL = 3,
  TEXCH_SYNCZONE_INTERNAL0 = 3,
  TEXCH_SYNCZONE_EXTERNAL0_SLV = 4,
  TEXCH_SYNCZONE_EXTERNAL1_SLV = 5,
  TEXCH_SYNCZONE_EXTERNAL2_SLV = 6,
  TEXCH_SYNCZONE_EXTERNAL3_SLV = 7,
  TEXCH_SYNCZONE_EXTERNAL0_MSR = 12,
  TEXCH_SYNCZONE_EXTERNAL1_MSR = 13,
  TEXCH_SYNCZONE_EXTERNAL2_MSR = 14,
  TEXCH_SYNCZONE_EXTERNAL3_MSR = 15,
};

enum TileIncomingFormat {
  TEXCH_IFMT_32I = 0,
  TEXCH_IFMT_64E = 1,
  TEXCH_IFMT_64W = 2,
  TEXCH_IFMT_SPARE = 3,
};

enum TileExchangeReceiveError {
  TEXCH_RERR_NONE = 0,
  TEXCH_RERR_CLASH_INSTR = 1,
  TEXCH_RERR_CLASH_IFETCH = 2,
  TEXCH_RERR_ADDR = 3,
  TEXCH_RERR_WORKERS = 4,
  TEXCH_RERR_DBRK = 5,
  TEXCH_RERR_CONF = 6,
  TEXCH_RERR_MODI = 7,
};

enum TLinkPacketFormat {
  TEXCH_TLINK_FMT_XREQ = 0,
  TEXCH_TLINK_FMT_XFC = 1,
  TEXCH_TLINK_FMT_XTWRS = 2,
  TEXCH_TLINK_FMT_XTWRL = 3,
  TEXCH_TLINK_FMT_XPWRS = 4,
  TEXCH_TLINK_FMT_XPWRL = 5,
  TEXCH_TLINK_FMT_XPRDS = 6,
  TEXCH_TLINK_FMT_XPRDL = 7,
  TEXCH_TLINK_NUM_FMTS = 8,
};

enum SOC_TR_CSR_ERRSTATUS {
  SOC_TR_CSR_ERRSTATUS_BMPARITY = 0,
  SOC_TR_CSR_ERRSTATUS_MALFORMED = 1,
  SOC_TR_CSR_ERRSTATUS_TRDISABLED = 2,
  SOC_TR_CSR_ERRSTATUS_IGNOMATCH = 3,
  SOC_TR_CSR_ERRSTATUS_MAXHOPCOUNT = 4,
};

enum SOC_TR_CSR_ERRCODE {
  SOC_TR_CSR_ERRCODE_NONE = 0,
  SOC_TR_CSR_ERRCODE_UR = 1,
  SOC_TR_CSR_ERRCODE_CA = 2,
};

enum SOC_TR_XEGRNR_EGLANESEL {
  SOC_TR_XEGRNR_EGLANESEL_LANEA = 0,
  SOC_TR_XEGRNR_EGLANESEL_LANEB = 1,
  SOC_TR_XEGRNR_EGLANESEL_LANEC = 2,
  SOC_TR_XEGRNR_EGLANESEL_LANED = 3,
};

enum SOC_TR_XEGRSR_EGLANESEL {
  SOC_TR_XEGRSR_EGLANESEL_LANEA = 0,
  SOC_TR_XEGRSR_EGLANESEL_LANEB = 1,
  SOC_TR_XEGRSR_EGLANESEL_LANEC = 2,
  SOC_TR_XEGRSR_EGLANESEL_LANED = 3,
};

enum SOC_TR_XIGLRR_IGLANESEL {
  SOC_TR_XIGLRR_IGLANESEL_LANEA = 0,
  SOC_TR_XIGLRR_IGLANESEL_LANEB = 1,
  SOC_TR_XIGLRR_IGLANESEL_LANEC = 2,
  SOC_TR_XIGLRR_IGLANESEL_LANED = 3,
};

enum SOC_XB_CSR_ERRSTATUS {
  SOC_XB_CSR_ERRSTATUS_XFM_IG_ECRC = 0,
  SOC_XB_CSR_ERRSTATUS_XFM_IG_PARITY = 1,
  SOC_XB_CSR_ERRSTATUS_DCX_PARITYERR_TLINK = 2,
  SOC_XB_CSR_ERRSTATUS_DCX_TLINK_TIMING_ERR = 3,
  SOC_XB_CSR_ERRSTATUS_DCX_DB_OVERFLOW = 4,
  SOC_XB_CSR_ERRSTATUS_XFM_PKT_WHEN_DISABLED = 5,
  SOC_XB_CSR_ERRSTATUS_DCX_EG_NOERDR_MATCH = 6,
  SOC_XB_CSR_ERRSTATUS_DCX_MALFORMED_TLINK = 7,
  SOC_XB_CSR_ERRSTATUS_DCX_UNEXPECTED_XREQ = 8,
  SOC_XB_CSR_ERRSTATUS_XFM_MALFORMED_ELINK = 9,
};

enum SOC_XB_CSR_ERRCODE {
  SOC_XB_CSR_ERRCODE_NONE = 0,
  SOC_XB_CSR_ERRCODE_UR = 1,
  SOC_XB_CSR_ERRCODE_CA = 2,
};

enum SOC_XB_CSR_ERRSRC {
  SOC_XB_CSR_ERRSRC_CONTEXT0 = 0,
  SOC_XB_CSR_ERRSRC_CONTEXT1 = 1,
  SOC_XB_CSR_ERRSRC_CONTEXT2 = 2,
  SOC_XB_CSR_ERRSRC_CONTEXT3 = 3,
  SOC_XB_CSR_ERRSRC_XFM = 4,
};

enum SOC_NLC_CSR_ERRSTATUS {
  SOC_NLC_CSR_ERRSTATUS_RESERVED = 0,
  SOC_NLC_CSR_ERRSTATUS_PCIERR = 1,
  SOC_NLC_CSR_ERRSTATUS_MALFORMED = 2,
  SOC_NLC_CSR_ERRSTATUS_PARITY = 3,
  SOC_NLC_CSR_ERRSTATUS_IGDISABLED = 4,
  SOC_NLC_CSR_ERRSTATUS_IGBADIPU = 5,
  SOC_NLC_CSR_ERRSTATUS_EGRTGNS = 6,
  SOC_NLC_CSR_ERRSTATUS_EGRNOMATCH = 7,
  SOC_NLC_CSR_ERRSTATUS_PCIUNSTLP = 8,
};

enum SOC_NLC_CSR_ERRCODE {
  SOC_NLC_CSR_ERRCODE_NONE = 0,
  SOC_NLC_CSR_ERRCODE_UR = 1,
  SOC_NLC_CSR_ERRCODE_CA = 2,
};

enum SOC_SS_SILSETPVT0CR_PVTSAMPLE {
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_TEMP = 0,
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_LVT = 1,
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_ULVT = 2,
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_SVT = 3,
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_VOLT = 4,
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_VOLT1 = 5,
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_VOLT2 = 6,
  SOC_SS_SILSETPVT0CR_PVTSAMPLE_VOLT4 = 7,
};

enum SOC_SS_SILSETPVT1CR_PVTSAMPLE {
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_TEMP = 0,
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_LVT = 1,
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_ULVT = 2,
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_SVT = 3,
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_VOLT = 4,
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_VOLT1 = 5,
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_VOLT2 = 6,
  SOC_SS_SILSETPVT1CR_PVTSAMPLE_VOLT4 = 7,
};

enum SOC_SS_SILSETPVT2CR_PVTSAMPLE {
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_TEMP = 0,
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_LVT = 1,
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_ULVT = 2,
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_SVT = 3,
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_VOLT = 4,
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_VOLT1 = 5,
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_VOLT2 = 6,
  SOC_SS_SILSETPVT2CR_PVTSAMPLE_VOLT4 = 7,
};

enum SOC_SS_SYSCR_IPUCLK {
  SOC_SS_SYSCR_IPUCLK_IPU_DISABLED0 = 0,
  SOC_SS_SYSCR_IPUCLK_IPU_BYPASS = 1,
  SOC_SS_SYSCR_IPUCLK_IPU_SLOW_PLL = 2,
  SOC_SS_SYSCR_IPUCLK_IPU_SLOW_OR_FAST_PLL = 3,
};

enum SOC_SS_SYSCR_SYSCLK {
  SOC_SS_SYSCR_SYSCLK_SYS_DISABLED0 = 0,
  SOC_SS_SYSCR_SYSCLK_SYS_BYPASS = 1,
  SOC_SS_SYSCR_SYSCLK_SYS_PLL = 2,
  SOC_SS_SYSCR_SYSCLK_SYS_DISABLED1 = 3,
};

enum SOC_SS_GSPCR_CFGDIR {
  SOC_SS_GSPCR_CFGDIR_DISABLED0 = 0,
  SOC_SS_GSPCR_CFGDIR_SREQ_INPUT = 1,
  SOC_SS_GSPCR_CFGDIR_SREQ_OUTPUT = 2,
  SOC_SS_GSPCR_CFGDIR_DISABLED1 = 3,
};

enum SOC_SS_GSPCR_CFGIO {
  SOC_SS_GSPCR_CFGIO_XDRIVEN = 0,
  SOC_SS_GSPCR_CFGIO_YDRIVEN = 1,
};

enum SOC_PCI_COMPLEX_MSIX_VECTORS {
  SOC_PCI_COMPLEX_MSIX_VECTORS_IPUEX = 0,
  SOC_PCI_COMPLEX_MSIX_VECTORS_MCUDRVALID = 1,
  SOC_PCI_COMPLEX_MSIX_VECTORS_HSPGS1E0IRQ = 2,
  SOC_PCI_COMPLEX_MSIX_VECTORS_HSPGS1E1IRQ = 3,
  SOC_PCI_COMPLEX_MSIX_VECTORS_HSPGS2E0IRQ = 4,
  SOC_PCI_COMPLEX_MSIX_VECTORS_HSPGS2E1IRQ = 5,
  SOC_PCI_COMPLEX_MSIX_VECTORS_RESERVED = 7,
};

enum SOC_PCI_COMPLEX_IATU_REGISTERS {
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_0 = 0,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_0 = 4,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_0 = 8,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_0 = 12,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_0 = 16,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_0 = 20,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_0 = 24,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_0 = 32,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_1 = 512,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_1 = 516,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_1 = 520,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_1 = 524,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_1 = 528,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_1 = 532,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_1 = 536,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_1 = 544,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_2 = 1024,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_2 = 1028,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_2 = 1032,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_2 = 1036,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_2 = 1040,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_2 = 1044,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_2 = 1048,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_2 = 1056,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_3 = 1536,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_3 = 1540,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_3 = 1544,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_3 = 1548,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_3 = 1552,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_3 = 1556,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_3 = 1560,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_3 = 1568,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_4 = 2048,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_4 = 2052,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_4 = 2056,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_4 = 2060,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_4 = 2064,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_4 = 2068,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_4 = 2072,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_4 = 2080,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_5 = 2560,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_5 = 2564,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_5 = 2568,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_5 = 2572,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_5 = 2576,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_5 = 2580,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_5 = 2584,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_5 = 2592,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_6 = 3072,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_6 = 3076,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_6 = 3080,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_6 = 3084,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_6 = 3088,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_6 = 3092,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_6 = 3096,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_6 = 3104,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_1_OFF_OUTBOUND_7 = 3584,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_REGION_CTRL_2_OFF_OUTBOUND_7 = 3588,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_BASE_ADDR_OFF_OUTBOUND_7 = 3592,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_BASE_ADDR_OFF_OUTBOUND_7 = 3596,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LIMIT_ADDR_OFF_OUTBOUND_7 = 3600,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_LWR_TARGET_ADDR_OFF_OUTBOUND_7 = 3604,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPER_TARGET_ADDR_OFF_OUTBOUND_7 = 3608,
  SOC_PCI_COMPLEX_IATU_REGISTERS_UNROLL_IATU_UPPR_LIMIT_ADDR_OFF_OUTBOUND_7 = 3616,
};

enum SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR {
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_NOERROR = 0,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_SOC0PGMERR = 1,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_SOC1PGMERR = 2,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_ELINKPGMERR = 3,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_HEXOVERFLOWERR = 4,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_MCUPGMERR = 5,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_SOC0SOFTERR = 6,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_SOC1SOFTERR = 7,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_ELINKSOFTERR = 8,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_IPUSOFTERR = 9,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_NMLINKDN0 = 10,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_NMLINKDN1 = 11,
  SOC_PCI_COMPLEX_CIUERRVR_FIRSTERROR_MCUSOFTERR = 12,
};

enum SOC_PCI_COMPLEX_CBUSRDRSPR_CBUSJTAGRDSTATUS {
  SOC_PCI_COMPLEX_CBUSRDRSPR_CBUSJTAGRDSTATUS_NOTCOMPLETE = 0,
  SOC_PCI_COMPLEX_CBUSRDRSPR_CBUSJTAGRDSTATUS_SUCCESS = 1,
  SOC_PCI_COMPLEX_CBUSRDRSPR_CBUSJTAGRDSTATUS_UR = 2,
  SOC_PCI_COMPLEX_CBUSRDRSPR_CBUSJTAGRDSTATUS_TIMEOUT = 3,
};

enum SOC_PCI_COMPLEX_CBUSWRRSPR_CBUSJTAGWRSTATUS {
  SOC_PCI_COMPLEX_CBUSWRRSPR_CBUSJTAGWRSTATUS_NOTCOMPLETE = 0,
  SOC_PCI_COMPLEX_CBUSWRRSPR_CBUSJTAGWRSTATUS_SUCCESS = 1,
  SOC_PCI_COMPLEX_CBUSWRRSPR_CBUSJTAGWRSTATUS_UR = 2,
  SOC_PCI_COMPLEX_CBUSWRRSPR_CBUSJTAGWRSTATUS_TIMEOUT = 3,
};

enum SOC_SS_E_PVTECR_PVTSAMPLE {
  SOC_SS_E_PVTECR_PVTSAMPLE_TEMP = 0,
  SOC_SS_E_PVTECR_PVTSAMPLE_LVT = 1,
  SOC_SS_E_PVTECR_PVTSAMPLE_ULVT = 2,
  SOC_SS_E_PVTECR_PVTSAMPLE_SVT = 3,
  SOC_SS_E_PVTECR_PVTSAMPLE_VOLT = 4,
  SOC_SS_E_PVTECR_PVTSAMPLE_VOLT1 = 5,
  SOC_SS_E_PVTECR_PVTSAMPLE_VOLT2 = 6,
  SOC_SS_E_PVTECR_PVTSAMPLE_VOLT4 = 7,
};
