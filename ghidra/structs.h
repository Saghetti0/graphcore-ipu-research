struct CSR_S_t { // namespace for CSR_S
  class CSR_S_PC_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_PC_t(unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &ADDR,
               const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PC", index, valid, validFields), ADDR("ADDR", ADDR) {}
  } PC; // end of register

  class CSR_S_DBG_DATA_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_S_DBG_DATA_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_DATA", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } DBG_DATA; // end of register

  class CSR_S_DBG_BRK_ID_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CHAN_ID;
    CSR_S_DBG_BRK_ID_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &CHAN_ID,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_BRK_ID", index, valid, validFields),
          CHAN_ID("CHAN_ID", CHAN_ID) {}
  } DBG_BRK_ID; // end of register

  class CSR_S_SSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LC;
    const ArchInfo::RegField GC;
    const ArchInfo::RegField ANS;
    const ArchInfo::RegField RAERR;
    const ArchInfo::RegField ETYPE;
    const ArchInfo::RegField PERR;
    CSR_S_SSR_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &LC,
                const ArchInfo::RegFieldDefinition &GC,
                const ArchInfo::RegFieldDefinition &ANS,
                const ArchInfo::RegFieldDefinition &RAERR,
                const ArchInfo::RegFieldDefinition &ETYPE,
                const ArchInfo::RegFieldDefinition &PERR,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("SSR", index, valid, validFields), LC("LC", LC),
          GC("GC", GC), ANS("ANS", ANS), RAERR("RAERR", RAERR),
          ETYPE("ETYPE", ETYPE), PERR("PERR", PERR) {}
  } SSR; // end of register

  class CSR_S_CR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LC_CLR;
    const ArchInfo::RegField LC_SET;
    const ArchInfo::RegField ZCWEI;
    CSR_S_CR_t(unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &LC_CLR,
               const ArchInfo::RegFieldDefinition &LC_SET,
               const ArchInfo::RegFieldDefinition &ZCWEI,
               const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CR", index, valid, validFields), LC_CLR("LC_CLR", LC_CLR),
          LC_SET("LC_SET", LC_SET), ZCWEI("ZCWEI", ZCWEI) {}
  } CR; // end of register

  class CSR_S_TILE_ID_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField TILE_ID;
    CSR_S_TILE_ID_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &TILE_ID,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("TILE_ID", index, valid, validFields),
          TILE_ID("TILE_ID", TILE_ID) {}
  } TILE_ID; // end of register

  class CSR_S_FP_ICTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INV;
    const ArchInfo::RegField DIV0;
    const ArchInfo::RegField OFLO;
    const ArchInfo::RegField RND;
    const ArchInfo::RegField ESR;
    const ArchInfo::RegField NANOO;
    CSR_S_FP_ICTL_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &INV,
                    const ArchInfo::RegFieldDefinition &DIV0,
                    const ArchInfo::RegFieldDefinition &OFLO,
                    const ArchInfo::RegFieldDefinition &RND,
                    const ArchInfo::RegFieldDefinition &ESR,
                    const ArchInfo::RegFieldDefinition &NANOO,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_ICTL", index, valid, validFields), INV("INV", INV),
          DIV0("DIV0", DIV0), OFLO("OFLO", OFLO), RND("RND", RND),
          ESR("ESR", ESR), NANOO("NANOO", NANOO) {}
  } FP_ICTL; // end of register

  class CSR_S_WORKER0_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_WORKER0_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WORKER0_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } WORKER0_BASE; // end of register

  class CSR_S_WORKER1_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_WORKER1_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WORKER1_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } WORKER1_BASE; // end of register

  class CSR_S_WORKER2_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_WORKER2_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WORKER2_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } WORKER2_BASE; // end of register

  class CSR_S_WORKER3_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_WORKER3_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WORKER3_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } WORKER3_BASE; // end of register

  class CSR_S_WORKER4_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_WORKER4_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WORKER4_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } WORKER4_BASE; // end of register

  class CSR_S_WORKER5_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_WORKER5_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WORKER5_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } WORKER5_BASE; // end of register

  class CSR_S_CCCSLOAD_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_CCCSLOAD_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &ADDR,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCCSLOAD", index, valid, validFields), ADDR("ADDR", ADDR) {}
  } CCCSLOAD; // end of register

  class CSR_S_SCOUNT_L_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_S_SCOUNT_L_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("SCOUNT_L", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } SCOUNT_L; // end of register

  class CSR_S_SCOUNT_U_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_S_SCOUNT_U_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("SCOUNT_U", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } SCOUNT_U; // end of register

  class CSR_S_CTXT_STS_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SU;
    const ArchInfo::RegField W0;
    const ArchInfo::RegField W1;
    const ArchInfo::RegField W2;
    const ArchInfo::RegField W3;
    const ArchInfo::RegField W4;
    const ArchInfo::RegField W5;
    const ArchInfo::RegField ERERR;
    const ArchInfo::RegField EERR;
    const ArchInfo::RegField MERR;
    CSR_S_CTXT_STS_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &SU,
                     const ArchInfo::RegFieldDefinition &W0,
                     const ArchInfo::RegFieldDefinition &W1,
                     const ArchInfo::RegFieldDefinition &W2,
                     const ArchInfo::RegFieldDefinition &W3,
                     const ArchInfo::RegFieldDefinition &W4,
                     const ArchInfo::RegFieldDefinition &W5,
                     const ArchInfo::RegFieldDefinition &ERERR,
                     const ArchInfo::RegFieldDefinition &EERR,
                     const ArchInfo::RegFieldDefinition &MERR,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CTXT_STS", index, valid, validFields), SU("SU", SU),
          W0("W0", W0), W1("W1", W1), W2("W2", W2), W3("W3", W3), W4("W4", W4),
          W5("W5", W5), ERERR("ERERR", ERERR), EERR("EERR", EERR),
          MERR("MERR", MERR) {}
  } CTXT_STS; // end of register

  class CSR_S_DBG_CTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CHAN_EN;
    CSR_S_DBG_CTL_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &CHAN_EN,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_CTL", index, valid, validFields),
          CHAN_EN("CHAN_EN", CHAN_EN) {}
  } DBG_CTL; // end of register

  class CSR_S_DBG_ECSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EPCM;
    const ArchInfo::RegField CTXT;
    const ArchInfo::RegField BOS;
    CSR_S_DBG_ECSR_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &EPCM,
                     const ArchInfo::RegFieldDefinition &CTXT,
                     const ArchInfo::RegFieldDefinition &BOS,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_ECSR", index, valid, validFields), EPCM("EPCM", EPCM),
          CTXT("CTXT", CTXT), BOS("BOS", BOS) {}
  } DBG_ECSR; // end of register

  class CSR_S_DBG_ECLR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CLR;
    CSR_S_DBG_ECLR_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &CLR,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_ECLR", index, valid, validFields), CLR("CLR", CLR) {}
  } DBG_ECLR; // end of register

  class CSR_S_DBG_IBRK0_CTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ENS;
    const ArchInfo::RegField ENW;
    const ArchInfo::RegField EVM;
    CSR_S_DBG_IBRK0_CTL_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ENS,
        const ArchInfo::RegFieldDefinition &ENW,
        const ArchInfo::RegFieldDefinition &EVM,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_IBRK0_CTL", index, valid, validFields), ENS("ENS", ENS),
          ENW("ENW", ENW), EVM("EVM", EVM) {}
  } DBG_IBRK0_CTL; // end of register

  class CSR_S_DBG_IBRK0_PC_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_DBG_IBRK0_PC_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_IBRK0_PC", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } DBG_IBRK0_PC; // end of register

  class CSR_S_DBG_IBRK0_VERT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_DBG_IBRK0_VERT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_IBRK0_VERT", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } DBG_IBRK0_VERT; // end of register

  class CSR_S_DBG_DBRK0_CTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField MLD;
    const ArchInfo::RegField MSTNI;
    const ArchInfo::RegField SIC;
    const ArchInfo::RegField SIZE;
    const ArchInfo::RegField MDNR;
    const ArchInfo::RegField CTXT;
    CSR_S_DBG_DBRK0_CTL_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &MLD,
        const ArchInfo::RegFieldDefinition &MSTNI,
        const ArchInfo::RegFieldDefinition &SIC,
        const ArchInfo::RegFieldDefinition &SIZE,
        const ArchInfo::RegFieldDefinition &MDNR,
        const ArchInfo::RegFieldDefinition &CTXT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_DBRK0_CTL", index, valid, validFields), MLD("MLD", MLD),
          MSTNI("MSTNI", MSTNI), SIC("SIC", SIC), SIZE("SIZE", SIZE),
          MDNR("MDNR", MDNR), CTXT("CTXT", CTXT) {}
  } DBG_DBRK0_CTL; // end of register

  class CSR_S_DBG_DBRK0_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_DBG_DBRK0_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_DBRK0_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } DBG_DBRK0_BASE; // end of register

  class CSR_S_DBG_DBRK0_SIDA_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_S_DBG_DBRK0_SIDA_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &VALUE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_DBRK0_SIDA", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } DBG_DBRK0_SIDA; // end of register

  class CSR_S_INCOMING_MUX_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField TILE_ID;
    CSR_S_INCOMING_MUX_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &TILE_ID,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_MUX", index, valid, validFields),
          TILE_ID("TILE_ID", TILE_ID) {}
  } INCOMING_MUX; // end of register

  class CSR_S_INCOMING_MUXPAIR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField TILE_ID;
    CSR_S_INCOMING_MUXPAIR_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &TILE_ID,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_MUXPAIR", index, valid, validFields),
          TILE_ID("TILE_ID", TILE_ID) {}
  } INCOMING_MUXPAIR; // end of register

  class CSR_S_INCOMING_DELTA_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_INCOMING_DELTA_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_DELTA", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } INCOMING_DELTA; // end of register

  class CSR_S_INCOMING_FORMAT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_S_INCOMING_FORMAT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &VALUE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_FORMAT", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } INCOMING_FORMAT; // end of register

  class CSR_S_INCOMING_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_INCOMING_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } INCOMING_BASE; // end of register

  class CSR_S_INCOMING_SINIT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_INCOMING_SINIT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_SINIT", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } INCOMING_SINIT; // end of register

  class CSR_S_INCOMING_DCOUNT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_S_INCOMING_DCOUNT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &VALUE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_DCOUNT", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } INCOMING_DCOUNT; // end of register

  class CSR_S_OUTGOING_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_OUTGOING_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("OUTGOING_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } OUTGOING_BASE; // end of register

  class CSR_S_OUTGOING_DELTA_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_S_OUTGOING_DELTA_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("OUTGOING_DELTA", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } OUTGOING_DELTA; // end of register

  class CSR_S_EXCHANGE_CTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ACTV;
    const ArchInfo::RegField SEV;
    const ArchInfo::RegField SWV;
    const ArchInfo::RegField S64;
    const ArchInfo::RegField ATMC;
    CSR_S_EXCHANGE_CTL_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ACTV,
        const ArchInfo::RegFieldDefinition &SEV,
        const ArchInfo::RegFieldDefinition &SWV,
        const ArchInfo::RegFieldDefinition &S64,
        const ArchInfo::RegFieldDefinition &ATMC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("EXCHANGE_CTL", index, valid, validFields),
          ACTV("ACTV", ACTV), SEV("SEV", SEV), SWV("SWV", SWV), S64("S64", S64),
          ATMC("ATMC", ATMC) {}
  } EXCHANGE_CTL; // end of register

  class CSR_S_ANS_DCOUNT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_S_ANS_DCOUNT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &VALUE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ANS_DCOUNT", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } ANS_DCOUNT; // end of register

  class CSR_S_EXCHANGE_ADJ_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COFF;
    const ArchInfo::RegField SEWS;
    CSR_S_EXCHANGE_ADJ_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &COFF,
        const ArchInfo::RegFieldDefinition &SEWS,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("EXCHANGE_ADJ", index, valid, validFields),
          COFF("COFF", COFF), SEWS("SEWS", SEWS) {}
  } EXCHANGE_ADJ; // end of register

  class CSR_S_SNOTIFY_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField A;
    CSR_S_SNOTIFY_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &A,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("SNOTIFY", index, valid, validFields), A("A", A) {}
  } SNOTIFY; // end of register

  class CSR_S_FP_INFMT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CWEI_FMT;
    const ArchInfo::RegField ARF_FMT;
    CSR_S_FP_INFMT_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &CWEI_FMT,
                     const ArchInfo::RegFieldDefinition &ARF_FMT,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_INFMT", index, valid, validFields),
          CWEI_FMT("CWEI_FMT", CWEI_FMT), ARF_FMT("ARF_FMT", ARF_FMT) {}
  } FP_INFMT; // end of register

  class CSR_S_FP_ISCL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SCALE;
    CSR_S_FP_ISCL_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &SCALE,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_ISCL", index, valid, validFields),
          SCALE("SCALE", SCALE) {}
  } FP_ISCL; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} CSR_S; // end of register block

struct CSR_W_t { // namespace for CSR_W
  class CSR_W_PC_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_W_PC_t(unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &ADDR,
               const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PC", index, valid, validFields), ADDR("ADDR", ADDR) {}
  } PC; // end of register

  class CSR_W_DBG_DATA_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_DBG_DATA_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_DATA", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } DBG_DATA; // end of register

  class CSR_W_DBG_BRK_ID_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CHAN_ID;
    CSR_W_DBG_BRK_ID_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &CHAN_ID,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_BRK_ID", index, valid, validFields),
          CHAN_ID("CHAN_ID", CHAN_ID) {}
  } DBG_BRK_ID; // end of register

  class CSR_W_WSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CTXTID_M1;
    const ArchInfo::RegField ETYPE;
    const ArchInfo::RegField ERPT;
    CSR_W_WSR_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &CTXTID_M1,
                const ArchInfo::RegFieldDefinition &ETYPE,
                const ArchInfo::RegFieldDefinition &ERPT,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WSR", index, valid, validFields),
          CTXTID_M1("CTXTID_M1", CTXTID_M1), ETYPE("ETYPE", ETYPE),
          ERPT("ERPT", ERPT) {}
  } WSR; // end of register

  class CSR_W_VERTEX_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_W_VERTEX_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("VERTEX_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } VERTEX_BASE; // end of register

  class CSR_W_WORKER_BASE_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_W_WORKER_BASE_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("WORKER_BASE", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } WORKER_BASE; // end of register

  class CSR_W_REPEAT_COUNT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_REPEAT_COUNT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &VALUE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("REPEAT_COUNT", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } REPEAT_COUNT; // end of register

  class CSR_W_REPEAT_FIRST_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_W_REPEAT_FIRST_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("REPEAT_FIRST", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } REPEAT_FIRST; // end of register

  class CSR_W_REPEAT_END_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    CSR_W_REPEAT_END_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("REPEAT_END", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } REPEAT_END; // end of register

  class CSR_W_COUNT_L_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_COUNT_L_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &VALUE,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("COUNT_L", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } COUNT_L; // end of register

  class CSR_W_COUNT_U_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_COUNT_U_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &VALUE,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("COUNT_U", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } COUNT_U; // end of register

  class CSR_W_FP_STS_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INV;
    const ArchInfo::RegField DIV0;
    const ArchInfo::RegField OFLO;
    CSR_W_FP_STS_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &INV,
                   const ArchInfo::RegFieldDefinition &DIV0,
                   const ArchInfo::RegFieldDefinition &OFLO,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_STS", index, valid, validFields), INV("INV", INV),
          DIV0("DIV0", DIV0), OFLO("OFLO", OFLO) {}
  } FP_STS; // end of register

  class CSR_W_FP_CLR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INV;
    const ArchInfo::RegField DIV0;
    const ArchInfo::RegField OFLO;
    const ArchInfo::RegField ZAACC;
    CSR_W_FP_CLR_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &INV,
                   const ArchInfo::RegFieldDefinition &DIV0,
                   const ArchInfo::RegFieldDefinition &OFLO,
                   const ArchInfo::RegFieldDefinition &ZAACC,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_CLR", index, valid, validFields), INV("INV", INV),
          DIV0("DIV0", DIV0), OFLO("OFLO", OFLO), ZAACC("ZAACC", ZAACC) {}
  } FP_CLR; // end of register

  class CSR_W_FP_CTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INV;
    const ArchInfo::RegField DIV0;
    const ArchInfo::RegField OFLO;
    const ArchInfo::RegField RND;
    const ArchInfo::RegField ESR;
    const ArchInfo::RegField NANOO;
    CSR_W_FP_CTL_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &INV,
                   const ArchInfo::RegFieldDefinition &DIV0,
                   const ArchInfo::RegFieldDefinition &OFLO,
                   const ArchInfo::RegFieldDefinition &RND,
                   const ArchInfo::RegFieldDefinition &ESR,
                   const ArchInfo::RegFieldDefinition &NANOO,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_CTL", index, valid, validFields), INV("INV", INV),
          DIV0("DIV0", DIV0), OFLO("OFLO", OFLO), RND("RND", RND),
          ESR("ESR", ESR), NANOO("NANOO", NANOO) {}
  } FP_CTL; // end of register

  class CSR_W_PRNG_0_0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_PRNG_0_0_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PRNG_0_0", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } PRNG_0_0; // end of register

  class CSR_W_PRNG_0_1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_PRNG_0_1_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PRNG_0_1", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } PRNG_0_1; // end of register

  class CSR_W_PRNG_1_0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_PRNG_1_0_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PRNG_1_0", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } PRNG_1_0; // end of register

  class CSR_W_PRNG_1_1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_PRNG_1_1_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &VALUE,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PRNG_1_1", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } PRNG_1_1; // end of register

  class CSR_W_PRNG_SEED_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    CSR_W_PRNG_SEED_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &VALUE,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PRNG_SEED", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } PRNG_SEED; // end of register

  class CSR_W_TAS_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField F16_0;
    const ArchInfo::RegField F16_16;
    CSR_W_TAS_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &F16_0,
                const ArchInfo::RegFieldDefinition &F16_16,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("TAS", index, valid, validFields), F16_0("F16_0", F16_0),
          F16_16("F16_16", F16_16) {}
  } TAS; // end of register

  class CSR_W_FP_NFMT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CWEI_FMT;
    const ArchInfo::RegField ARF_FMT;
    CSR_W_FP_NFMT_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &CWEI_FMT,
                    const ArchInfo::RegFieldDefinition &ARF_FMT,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_NFMT", index, valid, validFields),
          CWEI_FMT("CWEI_FMT", CWEI_FMT), ARF_FMT("ARF_FMT", ARF_FMT) {}
  } FP_NFMT; // end of register

  class CSR_W_FP_SCL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SCALE;
    CSR_W_FP_SCL_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &SCALE,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("FP_SCL", index, valid, validFields), SCALE("SCALE", SCALE) {
    }
  } FP_SCL; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} CSR_W; // end of register block

struct TDI_t { // namespace for TDI
  class TDI_CTXT_STS_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SU;
    const ArchInfo::RegField W0;
    const ArchInfo::RegField W1;
    const ArchInfo::RegField W2;
    const ArchInfo::RegField W3;
    const ArchInfo::RegField W4;
    const ArchInfo::RegField W5;
    const ArchInfo::RegField ERERR;
    const ArchInfo::RegField EERR;
    const ArchInfo::RegField MERR;
    TDI_CTXT_STS_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &SU,
                   const ArchInfo::RegFieldDefinition &W0,
                   const ArchInfo::RegFieldDefinition &W1,
                   const ArchInfo::RegFieldDefinition &W2,
                   const ArchInfo::RegFieldDefinition &W3,
                   const ArchInfo::RegFieldDefinition &W4,
                   const ArchInfo::RegFieldDefinition &W5,
                   const ArchInfo::RegFieldDefinition &ERERR,
                   const ArchInfo::RegFieldDefinition &EERR,
                   const ArchInfo::RegFieldDefinition &MERR,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CTXT_STS", index, valid, validFields), SU("SU", SU),
          W0("W0", W0), W1("W1", W1), W2("W2", W2), W3("W3", W3), W4("W4", W4),
          W5("W5", W5), ERERR("ERERR", ERERR), EERR("EERR", EERR),
          MERR("MERR", MERR) {}
  } CTXT_STS; // end of register

  class TDI_DBG_RBRK_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EN;
    const ArchInfo::RegField ATOV;
    const ArchInfo::RegField VM_EN;
    TDI_DBG_RBRK_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &EN,
                   const ArchInfo::RegFieldDefinition &ATOV,
                   const ArchInfo::RegFieldDefinition &VM_EN,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_RBRK", index, valid, validFields), EN("EN", EN),
          ATOV("ATOV", ATOV), VM_EN("VM_EN", VM_EN) {}
  } DBG_RBRK; // end of register

  class TDI_DBG_RBRK_VERT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    TDI_DBG_RBRK_VERT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_RBRK_VERT", index, valid, validFields),
          ADDR("ADDR", ADDR) {}
  } DBG_RBRK_VERT; // end of register

  class TDI_DBG_IEXEC_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INST;
    TDI_DBG_IEXEC_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &INST,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_IEXEC", index, valid, validFields), INST("INST", INST) {
    }
  } DBG_IEXEC; // end of register

  class TDI_DBG_IOWNER_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CTXT;
    TDI_DBG_IOWNER_t(unsigned index, bool valid,
                     const ArchInfo::RegFieldDefinition &CTXT,
                     const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_IOWNER", index, valid, validFields),
          CTXT("CTXT", CTXT) {}
  } DBG_IOWNER; // end of register

  class TDI_DBG_ECSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EPCM;
    const ArchInfo::RegField CTXT;
    const ArchInfo::RegField BOS;
    TDI_DBG_ECSR_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &EPCM,
                   const ArchInfo::RegFieldDefinition &CTXT,
                   const ArchInfo::RegFieldDefinition &BOS,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_ECSR", index, valid, validFields), EPCM("EPCM", EPCM),
          CTXT("CTXT", CTXT), BOS("BOS", BOS) {}
  } DBG_ECSR; // end of register

  class TDI_DBG_ECLR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CLR;
    TDI_DBG_ECLR_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &CLR,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_ECLR", index, valid, validFields), CLR("CLR", CLR) {}
  } DBG_ECLR; // end of register

  class TDI_DBG_DATA_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    TDI_DBG_DATA_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &VALUE,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DBG_DATA", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } DBG_DATA; // end of register

  class TDI_TDI_STS_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CNQ;
    const ArchInfo::RegField INV;
    const ArchInfo::RegField DBLE;
    const ArchInfo::RegField BUSY;
    TDI_TDI_STS_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &CNQ,
                  const ArchInfo::RegFieldDefinition &INV,
                  const ArchInfo::RegFieldDefinition &DBLE,
                  const ArchInfo::RegFieldDefinition &BUSY,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("TDI_STS", index, valid, validFields), CNQ("CNQ", CNQ),
          INV("INV", INV), DBLE("DBLE", DBLE), BUSY("BUSY", BUSY) {}
  } TDI_STS; // end of register

  class TDI_TDI_CLR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CNQ;
    const ArchInfo::RegField INV;
    const ArchInfo::RegField DBLE;
    TDI_TDI_CLR_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &CNQ,
                  const ArchInfo::RegFieldDefinition &INV,
                  const ArchInfo::RegFieldDefinition &DBLE,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("TDI_CLR", index, valid, validFields), CNQ("CNQ", CNQ),
          INV("INV", INV), DBLE("DBLE", DBLE) {}
  } TDI_CLR; // end of register

  class TDI_INCOMING_DCOUNT_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField VALUE;
    TDI_INCOMING_DCOUNT_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &VALUE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("INCOMING_DCOUNT", index, valid, validFields),
          VALUE("VALUE", VALUE) {}
  } INCOMING_DCOUNT; // end of register

  class TDI_EXCHANGE_CTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ACTV;
    const ArchInfo::RegField SEV;
    const ArchInfo::RegField SWV;
    const ArchInfo::RegField S64;
    const ArchInfo::RegField ATMC;
    TDI_EXCHANGE_CTL_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &ACTV,
        const ArchInfo::RegFieldDefinition &SEV,
        const ArchInfo::RegFieldDefinition &SWV,
        const ArchInfo::RegFieldDefinition &S64,
        const ArchInfo::RegFieldDefinition &ATMC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("EXCHANGE_CTL", index, valid, validFields),
          ACTV("ACTV", ACTV), SEV("SEV", SEV), SWV("SWV", SWV), S64("S64", S64),
          ATMC("ATMC", ATMC) {}
  } EXCHANGE_CTL; // end of register

  class TDI_TDI_CTL_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SEPEX;
    const ArchInfo::RegField DISRC;
    TDI_TDI_CTL_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &SEPEX,
                  const ArchInfo::RegFieldDefinition &DISRC,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("TDI_CTL", index, valid, validFields), SEPEX("SEPEX", SEPEX),
          DISRC("DISRC", DISRC) {}
  } TDI_CTL; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} TDI; // end of register block

struct TR_t { // namespace for TR
  class TR_CSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField TREN;
    const ArchInfo::RegField ERRSTATUS;
    const ArchInfo::RegField ERRCODE;
    const ArchInfo::RegField _ERROR;
    TR_CSR_t(unsigned index, bool valid,
             const ArchInfo::RegFieldDefinition &TREN,
             const ArchInfo::RegFieldDefinition &ERRSTATUS,
             const ArchInfo::RegFieldDefinition &ERRCODE,
             const ArchInfo::RegFieldDefinition &_ERROR,
             const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CSR", index, valid, validFields), TREN("TREN", TREN),
          ERRSTATUS("ERRSTATUS", ERRSTATUS), ERRCODE("ERRCODE", ERRCODE),
          _ERROR("_ERROR", _ERROR) {}
  } CSR; // end of register

  class TR_XEGRNR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EGLANE;
    const ArchInfo::RegField PCIEG;
    const ArchInfo::RegField TILEMEN;
    const ArchInfo::RegField IPUMEN;
    const ArchInfo::RegField TILEBM;
    const ArchInfo::RegField IPUBM;
    TR_XEGRNR_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &EGLANE,
                const ArchInfo::RegFieldDefinition &PCIEG,
                const ArchInfo::RegFieldDefinition &TILEMEN,
                const ArchInfo::RegFieldDefinition &IPUMEN,
                const ArchInfo::RegFieldDefinition &TILEBM,
                const ArchInfo::RegFieldDefinition &IPUBM,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XEGRNR", index, valid, validFields),
          EGLANE("EGLANE", EGLANE), PCIEG("PCIEG", PCIEG),
          TILEMEN("TILEMEN", TILEMEN), IPUMEN("IPUMEN", IPUMEN),
          TILEBM("TILEBM", TILEBM), IPUBM("IPUBM", IPUBM) {}
  } XEGRNR; // end of register

  class TR_XEGRSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EGLANE;
    const ArchInfo::RegField PCIEG;
    const ArchInfo::RegField TILEMEN;
    const ArchInfo::RegField IPUMEN;
    const ArchInfo::RegField TILEBM;
    const ArchInfo::RegField IPUBM;
    TR_XEGRSR_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &EGLANE,
                const ArchInfo::RegFieldDefinition &PCIEG,
                const ArchInfo::RegFieldDefinition &TILEMEN,
                const ArchInfo::RegFieldDefinition &IPUMEN,
                const ArchInfo::RegFieldDefinition &TILEBM,
                const ArchInfo::RegFieldDefinition &IPUBM,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XEGRSR", index, valid, validFields),
          EGLANE("EGLANE", EGLANE), PCIEG("PCIEG", PCIEG),
          TILEMEN("TILEMEN", TILEMEN), IPUMEN("IPUMEN", IPUMEN),
          TILEBM("TILEBM", TILEBM), IPUBM("IPUBM", IPUBM) {}
  } XEGRSR; // end of register

  class TR_XIGLRR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField NTILEMEN;
    const ArchInfo::RegField STILEMEN;
    const ArchInfo::RegField NOMATCHEN;
    const ArchInfo::RegField TID0LANE;
    const ArchInfo::RegField TID1LANE;
    const ArchInfo::RegField TID2LANE;
    const ArchInfo::RegField TID3LANE;
    const ArchInfo::RegField TID4LANE;
    const ArchInfo::RegField TID5LANE;
    const ArchInfo::RegField TID6LANE;
    const ArchInfo::RegField TID7LANE;
    const ArchInfo::RegField LANENTM;
    const ArchInfo::RegField LANEPCI;
    TR_XIGLRR_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &NTILEMEN,
                const ArchInfo::RegFieldDefinition &STILEMEN,
                const ArchInfo::RegFieldDefinition &NOMATCHEN,
                const ArchInfo::RegFieldDefinition &TID0LANE,
                const ArchInfo::RegFieldDefinition &TID1LANE,
                const ArchInfo::RegFieldDefinition &TID2LANE,
                const ArchInfo::RegFieldDefinition &TID3LANE,
                const ArchInfo::RegFieldDefinition &TID4LANE,
                const ArchInfo::RegFieldDefinition &TID5LANE,
                const ArchInfo::RegFieldDefinition &TID6LANE,
                const ArchInfo::RegFieldDefinition &TID7LANE,
                const ArchInfo::RegFieldDefinition &LANENTM,
                const ArchInfo::RegFieldDefinition &LANEPCI,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XIGLRR", index, valid, validFields),
          NTILEMEN("NTILEMEN", NTILEMEN), STILEMEN("STILEMEN", STILEMEN),
          NOMATCHEN("NOMATCHEN", NOMATCHEN), TID0LANE("TID0LANE", TID0LANE),
          TID1LANE("TID1LANE", TID1LANE), TID2LANE("TID2LANE", TID2LANE),
          TID3LANE("TID3LANE", TID3LANE), TID4LANE("TID4LANE", TID4LANE),
          TID5LANE("TID5LANE", TID5LANE), TID6LANE("TID6LANE", TID6LANE),
          TID7LANE("TID7LANE", TID7LANE), LANENTM("LANENTM", LANENTM),
          LANEPCI("LANEPCI", LANEPCI) {}
  } XIGLRR; // end of register

  class TR_ERECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    TR_ERECR0_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &REC,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR0", index, valid, validFields), REC("REC", REC) {}
  } ERECR0; // end of register

  class TR_ERECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    TR_ERECR1_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &REC,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR1", index, valid, validFields), REC("REC", REC) {}
  } ERECR1; // end of register

  class TR_ERECR2_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    TR_ERECR2_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &REC,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR2", index, valid, validFields), REC("REC", REC) {}
  } ERECR2; // end of register

  class TR_ERECR3_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    TR_ERECR3_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &REC,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR3", index, valid, validFields), REC("REC", REC) {}
  } ERECR3; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} TR; // end of register block

struct XB_t { // namespace for XB
  class XB_CSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EN;
    const ArchInfo::RegField ECRCEN;
    const ArchInfo::RegField PCIROUTING;
    const ArchInfo::RegField IPUID;
    const ArchInfo::RegField DISPATCH;
    const ArchInfo::RegField ERRFLGS;
    const ArchInfo::RegField ERRSTATUS;
    const ArchInfo::RegField ERRCODE;
    const ArchInfo::RegField ERRSRC;
    const ArchInfo::RegField _ERROR;
    const ArchInfo::RegField TLINKTIM_DIS;
    const ArchInfo::RegField XREQTIM_DIS;
    XB_CSR_t(unsigned index, bool valid, const ArchInfo::RegFieldDefinition &EN,
             const ArchInfo::RegFieldDefinition &ECRCEN,
             const ArchInfo::RegFieldDefinition &PCIROUTING,
             const ArchInfo::RegFieldDefinition &IPUID,
             const ArchInfo::RegFieldDefinition &DISPATCH,
             const ArchInfo::RegFieldDefinition &ERRFLGS,
             const ArchInfo::RegFieldDefinition &ERRSTATUS,
             const ArchInfo::RegFieldDefinition &ERRCODE,
             const ArchInfo::RegFieldDefinition &ERRSRC,
             const ArchInfo::RegFieldDefinition &_ERROR,
             const ArchInfo::RegFieldDefinition &TLINKTIM_DIS,
             const ArchInfo::RegFieldDefinition &XREQTIM_DIS,
             const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CSR", index, valid, validFields), EN("EN", EN),
          ECRCEN("ECRCEN", ECRCEN), PCIROUTING("PCIROUTING", PCIROUTING),
          IPUID("IPUID", IPUID), DISPATCH("DISPATCH", DISPATCH),
          ERRFLGS("ERRFLGS", ERRFLGS), ERRSTATUS("ERRSTATUS", ERRSTATUS),
          ERRCODE("ERRCODE", ERRCODE), ERRSRC("ERRSRC", ERRSRC),
          _ERROR("_ERROR", _ERROR), TLINKTIM_DIS("TLINKTIM_DIS", TLINKTIM_DIS),
          XREQTIM_DIS("XREQTIM_DIS", XREQTIM_DIS) {}
  } CSR; // end of register

  class XB_DCXCR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DCXHWM;
    const ArchInfo::RegField DCX0XREQID;
    const ArchInfo::RegField DCX1XREQID;
    const ArchInfo::RegField DCX2XREQID;
    const ArchInfo::RegField DCX3XREQID;
    XB_DCXCR_t(unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &DCXHWM,
               const ArchInfo::RegFieldDefinition &DCX0XREQID,
               const ArchInfo::RegFieldDefinition &DCX1XREQID,
               const ArchInfo::RegFieldDefinition &DCX2XREQID,
               const ArchInfo::RegFieldDefinition &DCX3XREQID,
               const std::vector<const ArchInfo::RegField *> validFields)
        : Register("DCXCR", index, valid, validFields),
          DCXHWM("DCXHWM", DCXHWM), DCX0XREQID("DCX0XREQID", DCX0XREQID),
          DCX1XREQID("DCX1XREQID", DCX1XREQID),
          DCX2XREQID("DCX2XREQID", DCX2XREQID),
          DCX3XREQID("DCX3XREQID", DCX3XREQID) {}
  } DCXCR; // end of register

  class XB_XERDR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField NORTH;
    const ArchInfo::RegField SOUTH;
    XB_XERDR_t(unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &NORTH,
               const ArchInfo::RegFieldDefinition &SOUTH,
               const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XERDR", index, valid, validFields), NORTH("NORTH", NORTH),
          SOUTH("SOUTH", SOUTH) {}
  } XERDR; // end of register

  class XB_CCX0RECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX0RECR0_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX0RECR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX0RECR0; // end of register

  class XB_CCX1RECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX1RECR0_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX1RECR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX1RECR0; // end of register

  class XB_CCX2RECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX2RECR0_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX2RECR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX2RECR0; // end of register

  class XB_CCX3RECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX3RECR0_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX3RECR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX3RECR0; // end of register

  class XB_CCX3RECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX3RECR1_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX3RECR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX3RECR1; // end of register

  class XB_CCX1RECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX1RECR1_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX1RECR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX1RECR1; // end of register

  class XB_CCX2RECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX2RECR1_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX2RECR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX2RECR1; // end of register

  class XB_CCX0RECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_CCX0RECR1_t(unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RECORD,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CCX0RECR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } CCX0RECR1; // end of register

  class XB_ERECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_ERECR0_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &RECORD,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } ERECR0; // end of register

  class XB_ERECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_ERECR1_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &RECORD,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } ERECR1; // end of register

  class XB_ERECR2_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_ERECR2_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &RECORD,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR2", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } ERECR2; // end of register

  class XB_ERECR3_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_ERECR3_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &RECORD,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR3", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } ERECR3; // end of register

  class XB_XREQ0RR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ0RR0_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ0RR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ0RR0; // end of register

  class XB_XREQ0RR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ0RR1_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ0RR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ0RR1; // end of register

  class XB_XREQ1RR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ1RR0_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ1RR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ1RR0; // end of register

  class XB_XREQ1RR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ1RR1_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ1RR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ1RR1; // end of register

  class XB_XREQ2RR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ2RR0_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ2RR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ2RR0; // end of register

  class XB_XREQ2RR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ2RR1_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ2RR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ2RR1; // end of register

  class XB_XREQ3RR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ3RR0_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ3RR0", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ3RR0; // end of register

  class XB_XREQ3RR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RECORD;
    XB_XREQ3RR1_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RECORD,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XREQ3RR1", index, valid, validFields),
          RECORD("RECORD", RECORD) {}
  } XREQ3RR1; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} XB; // end of register block

struct NLC_t { // namespace for NLC
  class NLC_CSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EN;
    const ArchInfo::RegField DBICS2;
    const ArchInfo::RegField DBIADDR0;
    const ArchInfo::RegField IPUID;
    const ArchInfo::RegField CORERRCNT;
    const ArchInfo::RegField CORERROR;
    const ArchInfo::RegField ERRCODE;
    const ArchInfo::RegField ERRSTATUS;
    const ArchInfo::RegField _ERROR;
    NLC_CSR_t(unsigned index, bool valid,
              const ArchInfo::RegFieldDefinition &EN,
              const ArchInfo::RegFieldDefinition &DBICS2,
              const ArchInfo::RegFieldDefinition &DBIADDR0,
              const ArchInfo::RegFieldDefinition &IPUID,
              const ArchInfo::RegFieldDefinition &CORERRCNT,
              const ArchInfo::RegFieldDefinition &CORERROR,
              const ArchInfo::RegFieldDefinition &ERRCODE,
              const ArchInfo::RegFieldDefinition &ERRSTATUS,
              const ArchInfo::RegFieldDefinition &_ERROR,
              const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CSR", index, valid, validFields), EN("EN", EN),
          DBICS2("DBICS2", DBICS2), DBIADDR0("DBIADDR0", DBIADDR0),
          IPUID("IPUID", IPUID), CORERRCNT("CORERRCNT", CORERRCNT),
          CORERROR("CORERROR", CORERROR), ERRCODE("ERRCODE", ERRCODE),
          ERRSTATUS("ERRSTATUS", ERRSTATUS), _ERROR("_ERROR", _ERROR) {}
  } CSR; // end of register

  class NLC_LCSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LINKDN;
    const ArchInfo::RegField COREDN;
    const ArchInfo::RegField LTSSMSTATE;
    const ArchInfo::RegField PMSTATE;
    const ArchInfo::RegField LTSSMEN;
    const ArchInfo::RegField RXLANEFLIP;
    const ArchInfo::RegField TXLANEFLIP;
    const ArchInfo::RegField SRISEN;
    const ArchInfo::RegField FASTLINK;
    const ArchInfo::RegField RPMODE;
    const ArchInfo::RegField PCIEN;
    const ArchInfo::RegField DCTERM;
    const ArchInfo::RegField TUNEREQ;
    const ArchInfo::RegField TUNEACK;
    const ArchInfo::RegField VPHNOM;
    const ArchInfo::RegField CORERRTHRESH;
    const ArchInfo::RegField FWUSESRAM;
    const ArchInfo::RegField SRAMLDDONE;
    const ArchInfo::RegField SRAMINITDONE;
    const ArchInfo::RegField CMNREFCKMODE;
    NLC_LCSR_t(unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &LINKDN,
               const ArchInfo::RegFieldDefinition &COREDN,
               const ArchInfo::RegFieldDefinition &LTSSMSTATE,
               const ArchInfo::RegFieldDefinition &PMSTATE,
               const ArchInfo::RegFieldDefinition &LTSSMEN,
               const ArchInfo::RegFieldDefinition &RXLANEFLIP,
               const ArchInfo::RegFieldDefinition &TXLANEFLIP,
               const ArchInfo::RegFieldDefinition &SRISEN,
               const ArchInfo::RegFieldDefinition &FASTLINK,
               const ArchInfo::RegFieldDefinition &RPMODE,
               const ArchInfo::RegFieldDefinition &PCIEN,
               const ArchInfo::RegFieldDefinition &DCTERM,
               const ArchInfo::RegFieldDefinition &TUNEREQ,
               const ArchInfo::RegFieldDefinition &TUNEACK,
               const ArchInfo::RegFieldDefinition &VPHNOM,
               const ArchInfo::RegFieldDefinition &CORERRTHRESH,
               const ArchInfo::RegFieldDefinition &FWUSESRAM,
               const ArchInfo::RegFieldDefinition &SRAMLDDONE,
               const ArchInfo::RegFieldDefinition &SRAMINITDONE,
               const ArchInfo::RegFieldDefinition &CMNREFCKMODE,
               const std::vector<const ArchInfo::RegField *> validFields)
        : Register("LCSR", index, valid, validFields), LINKDN("LINKDN", LINKDN),
          COREDN("COREDN", COREDN), LTSSMSTATE("LTSSMSTATE", LTSSMSTATE),
          PMSTATE("PMSTATE", PMSTATE), LTSSMEN("LTSSMEN", LTSSMEN),
          RXLANEFLIP("RXLANEFLIP", RXLANEFLIP),
          TXLANEFLIP("TXLANEFLIP", TXLANEFLIP), SRISEN("SRISEN", SRISEN),
          FASTLINK("FASTLINK", FASTLINK), RPMODE("RPMODE", RPMODE),
          PCIEN("PCIEN", PCIEN), DCTERM("DCTERM", DCTERM),
          TUNEREQ("TUNEREQ", TUNEREQ), TUNEACK("TUNEACK", TUNEACK),
          VPHNOM("VPHNOM", VPHNOM), CORERRTHRESH("CORERRTHRESH", CORERRTHRESH),
          FWUSESRAM("FWUSESRAM", FWUSESRAM),
          SRAMLDDONE("SRAMLDDONE", SRAMLDDONE),
          SRAMINITDONE("SRAMINITDONE", SRAMINITDONE),
          CMNREFCKMODE("CMNREFCKMODE", CMNREFCKMODE) {}
  } LCSR; // end of register

  class NLC_XERDR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField NORTH;
    const ArchInfo::RegField SOUTH;
    NLC_XERDR_t(unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &NORTH,
                const ArchInfo::RegFieldDefinition &SOUTH,
                const std::vector<const ArchInfo::RegField *> validFields)
        : Register("XERDR", index, valid, validFields), NORTH("NORTH", NORTH),
          SOUTH("SOUTH", SOUTH) {}
  } XERDR; // end of register

  class NLC_ERECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    NLC_ERECR0_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR0", index, valid, validFields), REC("REC", REC) {}
  } ERECR0; // end of register

  class NLC_ERECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    NLC_ERECR1_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR1", index, valid, validFields), REC("REC", REC) {}
  } ERECR1; // end of register

  class NLC_ERECR2_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    NLC_ERECR2_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR2", index, valid, validFields), REC("REC", REC) {}
  } ERECR2; // end of register

  class NLC_ERECR3_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    NLC_ERECR3_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR3", index, valid, validFields), REC("REC", REC) {}
  } ERECR3; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} NLC; // end of register block

struct SS_t { // namespace for SS
  class SS_SILSETPCI_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EMAA2P;
    const ArchInfo::RegField EMAB2P;
    const ArchInfo::RegField EMASA2P;
    const ArchInfo::RegField STOV2P;
    const ArchInfo::RegField EMA1P;
    const ArchInfo::RegField EMAW1P;
    const ArchInfo::RegField EMAS1P;
    const ArchInfo::RegField STOV1P;
    const ArchInfo::RegField RMEA_2P;
    const ArchInfo::RegField RMEB_2P;
    const ArchInfo::RegField RMA_2P;
    const ArchInfo::RegField RMB_2P;
    const ArchInfo::RegField RA_2P;
    const ArchInfo::RegField TEST1A_2P;
    const ArchInfo::RegField TEST1B_2P;
    const ArchInfo::RegField RME_1P;
    const ArchInfo::RegField RM_1P;
    const ArchInfo::RegField RA_1P;
    const ArchInfo::RegField TEST1_1P;
    const ArchInfo::RegField ROM_RME;
    const ArchInfo::RegField ROM_RM;
    SS_SILSETPCI_t(uint32_t baseAddress, unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &EMAA2P,
                   const ArchInfo::RegFieldDefinition &EMAB2P,
                   const ArchInfo::RegFieldDefinition &EMASA2P,
                   const ArchInfo::RegFieldDefinition &STOV2P,
                   const ArchInfo::RegFieldDefinition &EMA1P,
                   const ArchInfo::RegFieldDefinition &EMAW1P,
                   const ArchInfo::RegFieldDefinition &EMAS1P,
                   const ArchInfo::RegFieldDefinition &STOV1P,
                   const ArchInfo::RegFieldDefinition &RMEA_2P,
                   const ArchInfo::RegFieldDefinition &RMEB_2P,
                   const ArchInfo::RegFieldDefinition &RMA_2P,
                   const ArchInfo::RegFieldDefinition &RMB_2P,
                   const ArchInfo::RegFieldDefinition &RA_2P,
                   const ArchInfo::RegFieldDefinition &TEST1A_2P,
                   const ArchInfo::RegFieldDefinition &TEST1B_2P,
                   const ArchInfo::RegFieldDefinition &RME_1P,
                   const ArchInfo::RegFieldDefinition &RM_1P,
                   const ArchInfo::RegFieldDefinition &RA_1P,
                   const ArchInfo::RegFieldDefinition &TEST1_1P,
                   const ArchInfo::RegFieldDefinition &ROM_RME,
                   const ArchInfo::RegFieldDefinition &ROM_RM,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETPCI", baseAddress, index, valid,
                                        validFields),
          EMAA2P("EMAA2P", EMAA2P), EMAB2P("EMAB2P", EMAB2P),
          EMASA2P("EMASA2P", EMASA2P), STOV2P("STOV2P", STOV2P),
          EMA1P("EMA1P", EMA1P), EMAW1P("EMAW1P", EMAW1P),
          EMAS1P("EMAS1P", EMAS1P), STOV1P("STOV1P", STOV1P),
          RMEA_2P("RMEA_2P", RMEA_2P), RMEB_2P("RMEB_2P", RMEB_2P),
          RMA_2P("RMA_2P", RMA_2P), RMB_2P("RMB_2P", RMB_2P),
          RA_2P("RA_2P", RA_2P), TEST1A_2P("TEST1A_2P", TEST1A_2P),
          TEST1B_2P("TEST1B_2P", TEST1B_2P), RME_1P("RME_1P", RME_1P),
          RM_1P("RM_1P", RM_1P), RA_1P("RA_1P", RA_1P),
          TEST1_1P("TEST1_1P", TEST1_1P), ROM_RME("ROM_RME", ROM_RME),
          ROM_RM("ROM_RM", ROM_RM) {}
  } SILSETPCI; // end of register

  class SS_SILSETSYS_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EMAA2P;
    const ArchInfo::RegField EMAB2P;
    const ArchInfo::RegField EMASA2P;
    const ArchInfo::RegField STOV2P;
    const ArchInfo::RegField EMA1P;
    const ArchInfo::RegField EMAW1P;
    const ArchInfo::RegField EMAS1P;
    const ArchInfo::RegField STOV1P;
    const ArchInfo::RegField PADMISCDS;
    const ArchInfo::RegField PADMISCSLEN;
    const ArchInfo::RegField PADREFCKODS;
    const ArchInfo::RegField PADREFCKOSLEN;
    const ArchInfo::RegField BISRDISABLE;
    const ArchInfo::RegField FUSEBUFSEL;
    const ArchInfo::RegField BISRLOAD;
    const ArchInfo::RegField BISRLOADED;
    const ArchInfo::RegField BISRDONE;
    const ArchInfo::RegField BISRPASS;
    const ArchInfo::RegField RMEA_2P;
    const ArchInfo::RegField RMEB_2P;
    const ArchInfo::RegField RMA_2P;
    const ArchInfo::RegField RMB_2P;
    const ArchInfo::RegField RA_2P;
    const ArchInfo::RegField TEST1A_2P;
    const ArchInfo::RegField TEST1B_2P;
    const ArchInfo::RegField RME_1P;
    const ArchInfo::RegField RM_1P;
    const ArchInfo::RegField RA_1P;
    const ArchInfo::RegField TEST1_1P;
    SS_SILSETSYS_t(uint32_t baseAddress, unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &EMAA2P,
                   const ArchInfo::RegFieldDefinition &EMAB2P,
                   const ArchInfo::RegFieldDefinition &EMASA2P,
                   const ArchInfo::RegFieldDefinition &STOV2P,
                   const ArchInfo::RegFieldDefinition &EMA1P,
                   const ArchInfo::RegFieldDefinition &EMAW1P,
                   const ArchInfo::RegFieldDefinition &EMAS1P,
                   const ArchInfo::RegFieldDefinition &STOV1P,
                   const ArchInfo::RegFieldDefinition &PADMISCDS,
                   const ArchInfo::RegFieldDefinition &PADMISCSLEN,
                   const ArchInfo::RegFieldDefinition &PADREFCKODS,
                   const ArchInfo::RegFieldDefinition &PADREFCKOSLEN,
                   const ArchInfo::RegFieldDefinition &BISRDISABLE,
                   const ArchInfo::RegFieldDefinition &FUSEBUFSEL,
                   const ArchInfo::RegFieldDefinition &BISRLOAD,
                   const ArchInfo::RegFieldDefinition &BISRLOADED,
                   const ArchInfo::RegFieldDefinition &BISRDONE,
                   const ArchInfo::RegFieldDefinition &BISRPASS,
                   const ArchInfo::RegFieldDefinition &RMEA_2P,
                   const ArchInfo::RegFieldDefinition &RMEB_2P,
                   const ArchInfo::RegFieldDefinition &RMA_2P,
                   const ArchInfo::RegFieldDefinition &RMB_2P,
                   const ArchInfo::RegFieldDefinition &RA_2P,
                   const ArchInfo::RegFieldDefinition &TEST1A_2P,
                   const ArchInfo::RegFieldDefinition &TEST1B_2P,
                   const ArchInfo::RegFieldDefinition &RME_1P,
                   const ArchInfo::RegFieldDefinition &RM_1P,
                   const ArchInfo::RegFieldDefinition &RA_1P,
                   const ArchInfo::RegFieldDefinition &TEST1_1P,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETSYS", baseAddress, index, valid,
                                        validFields),
          EMAA2P("EMAA2P", EMAA2P), EMAB2P("EMAB2P", EMAB2P),
          EMASA2P("EMASA2P", EMASA2P), STOV2P("STOV2P", STOV2P),
          EMA1P("EMA1P", EMA1P), EMAW1P("EMAW1P", EMAW1P),
          EMAS1P("EMAS1P", EMAS1P), STOV1P("STOV1P", STOV1P),
          PADMISCDS("PADMISCDS", PADMISCDS),
          PADMISCSLEN("PADMISCSLEN", PADMISCSLEN),
          PADREFCKODS("PADREFCKODS", PADREFCKODS),
          PADREFCKOSLEN("PADREFCKOSLEN", PADREFCKOSLEN),
          BISRDISABLE("BISRDISABLE", BISRDISABLE),
          FUSEBUFSEL("FUSEBUFSEL", FUSEBUFSEL), BISRLOAD("BISRLOAD", BISRLOAD),
          BISRLOADED("BISRLOADED", BISRLOADED), BISRDONE("BISRDONE", BISRDONE),
          BISRPASS("BISRPASS", BISRPASS), RMEA_2P("RMEA_2P", RMEA_2P),
          RMEB_2P("RMEB_2P", RMEB_2P), RMA_2P("RMA_2P", RMA_2P),
          RMB_2P("RMB_2P", RMB_2P), RA_2P("RA_2P", RA_2P),
          TEST1A_2P("TEST1A_2P", TEST1A_2P), TEST1B_2P("TEST1B_2P", TEST1B_2P),
          RME_1P("RME_1P", RME_1P), RM_1P("RM_1P", RM_1P),
          RA_1P("RA_1P", RA_1P), TEST1_1P("TEST1_1P", TEST1_1P) {}
  } SILSETSYS; // end of register

  class SS_SILSETIPU_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField EMAA2P;
    const ArchInfo::RegField EMAB2P;
    const ArchInfo::RegField EMASA2P;
    const ArchInfo::RegField STOV2P;
    const ArchInfo::RegField EMA1P;
    const ArchInfo::RegField EMAW1P;
    const ArchInfo::RegField EMAS1P;
    const ArchInfo::RegField STOV1P;
    const ArchInfo::RegField PADGSADS;
    const ArchInfo::RegField PADGSASLEN;
    const ArchInfo::RegField PADGSBDS;
    const ArchInfo::RegField PADGSBSLEN;
    const ArchInfo::RegField PADGSCDS;
    const ArchInfo::RegField PADGSCSLEN;
    const ArchInfo::RegField BISRENABLE;
    const ArchInfo::RegField BISRLOADED;
    const ArchInfo::RegField RME_1P;
    const ArchInfo::RegField RM_1P;
    const ArchInfo::RegField RA_1P;
    const ArchInfo::RegField TEST1_1P;
    SS_SILSETIPU_t(uint32_t baseAddress, unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &EMAA2P,
                   const ArchInfo::RegFieldDefinition &EMAB2P,
                   const ArchInfo::RegFieldDefinition &EMASA2P,
                   const ArchInfo::RegFieldDefinition &STOV2P,
                   const ArchInfo::RegFieldDefinition &EMA1P,
                   const ArchInfo::RegFieldDefinition &EMAW1P,
                   const ArchInfo::RegFieldDefinition &EMAS1P,
                   const ArchInfo::RegFieldDefinition &STOV1P,
                   const ArchInfo::RegFieldDefinition &PADGSADS,
                   const ArchInfo::RegFieldDefinition &PADGSASLEN,
                   const ArchInfo::RegFieldDefinition &PADGSBDS,
                   const ArchInfo::RegFieldDefinition &PADGSBSLEN,
                   const ArchInfo::RegFieldDefinition &PADGSCDS,
                   const ArchInfo::RegFieldDefinition &PADGSCSLEN,
                   const ArchInfo::RegFieldDefinition &BISRENABLE,
                   const ArchInfo::RegFieldDefinition &BISRLOADED,
                   const ArchInfo::RegFieldDefinition &RME_1P,
                   const ArchInfo::RegFieldDefinition &RM_1P,
                   const ArchInfo::RegFieldDefinition &RA_1P,
                   const ArchInfo::RegFieldDefinition &TEST1_1P,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETIPU", baseAddress, index, valid,
                                        validFields),
          EMAA2P("EMAA2P", EMAA2P), EMAB2P("EMAB2P", EMAB2P),
          EMASA2P("EMASA2P", EMASA2P), STOV2P("STOV2P", STOV2P),
          EMA1P("EMA1P", EMA1P), EMAW1P("EMAW1P", EMAW1P),
          EMAS1P("EMAS1P", EMAS1P), STOV1P("STOV1P", STOV1P),
          PADGSADS("PADGSADS", PADGSADS), PADGSASLEN("PADGSASLEN", PADGSASLEN),
          PADGSBDS("PADGSBDS", PADGSBDS), PADGSBSLEN("PADGSBSLEN", PADGSBSLEN),
          PADGSCDS("PADGSCDS", PADGSCDS), PADGSCSLEN("PADGSCSLEN", PADGSCSLEN),
          BISRENABLE("BISRENABLE", BISRENABLE),
          BISRLOADED("BISRLOADED", BISRLOADED), RME_1P("RME_1P", RME_1P),
          RM_1P("RM_1P", RM_1P), RA_1P("RA_1P", RA_1P),
          TEST1_1P("TEST1_1P", TEST1_1P) {}
  } SILSETIPU; // end of register

  class SS_TILEREPAIR_0_5_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COLUMN0;
    const ArchInfo::RegField COLUMN1;
    const ArchInfo::RegField COLUMN2;
    const ArchInfo::RegField COLUMN3;
    const ArchInfo::RegField COLUMN4;
    const ArchInfo::RegField COLUMN5;
    SS_TILEREPAIR_0_5_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &COLUMN0,
        const ArchInfo::RegFieldDefinition &COLUMN1,
        const ArchInfo::RegFieldDefinition &COLUMN2,
        const ArchInfo::RegFieldDefinition &COLUMN3,
        const ArchInfo::RegFieldDefinition &COLUMN4,
        const ArchInfo::RegFieldDefinition &COLUMN5,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("TILEREPAIR_0_5", baseAddress, index,
                                        valid, validFields),
          COLUMN0("COLUMN0", COLUMN0), COLUMN1("COLUMN1", COLUMN1),
          COLUMN2("COLUMN2", COLUMN2), COLUMN3("COLUMN3", COLUMN3),
          COLUMN4("COLUMN4", COLUMN4), COLUMN5("COLUMN5", COLUMN5) {}
  } TILEREPAIR_0_5; // end of register

  class SS_TILEREPAIR_6_11_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COLUMN6;
    const ArchInfo::RegField COLUMN7;
    const ArchInfo::RegField COLUMN8;
    const ArchInfo::RegField COLUMN9;
    const ArchInfo::RegField COLUMN10;
    const ArchInfo::RegField COLUMN11;
    SS_TILEREPAIR_6_11_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &COLUMN6,
        const ArchInfo::RegFieldDefinition &COLUMN7,
        const ArchInfo::RegFieldDefinition &COLUMN8,
        const ArchInfo::RegFieldDefinition &COLUMN9,
        const ArchInfo::RegFieldDefinition &COLUMN10,
        const ArchInfo::RegFieldDefinition &COLUMN11,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("TILEREPAIR_6_11", baseAddress, index,
                                        valid, validFields),
          COLUMN6("COLUMN6", COLUMN6), COLUMN7("COLUMN7", COLUMN7),
          COLUMN8("COLUMN8", COLUMN8), COLUMN9("COLUMN9", COLUMN9),
          COLUMN10("COLUMN10", COLUMN10), COLUMN11("COLUMN11", COLUMN11) {}
  } TILEREPAIR_6_11; // end of register

  class SS_TILEREPAIR_12_15_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COLUMN12;
    const ArchInfo::RegField COLUMN13;
    const ArchInfo::RegField COLUMN14;
    const ArchInfo::RegField COLUMN15;
    SS_TILEREPAIR_12_15_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &COLUMN12,
        const ArchInfo::RegFieldDefinition &COLUMN13,
        const ArchInfo::RegFieldDefinition &COLUMN14,
        const ArchInfo::RegFieldDefinition &COLUMN15,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("TILEREPAIR_12_15", baseAddress, index,
                                        valid, validFields),
          COLUMN12("COLUMN12", COLUMN12), COLUMN13("COLUMN13", COLUMN13),
          COLUMN14("COLUMN14", COLUMN14), COLUMN15("COLUMN15", COLUMN15) {}
  } TILEREPAIR_12_15; // end of register

  class SS_SILSETPVT0CR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    const ArchInfo::RegField VALID;
    const ArchInfo::RegField PVTSAMPLE;
    const ArchInfo::RegField TRIMG;
    const ArchInfo::RegField TRIMO;
    const ArchInfo::RegField EN;
    const ArchInfo::RegField OTS;
    SS_SILSETPVT0CR_t(uint32_t baseAddress, unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &DATA,
                      const ArchInfo::RegFieldDefinition &VALID,
                      const ArchInfo::RegFieldDefinition &PVTSAMPLE,
                      const ArchInfo::RegFieldDefinition &TRIMG,
                      const ArchInfo::RegFieldDefinition &TRIMO,
                      const ArchInfo::RegFieldDefinition &EN,
                      const ArchInfo::RegFieldDefinition &OTS,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETPVT0CR", baseAddress, index,
                                        valid, validFields),
          DATA("DATA", DATA), VALID("VALID", VALID),
          PVTSAMPLE("PVTSAMPLE", PVTSAMPLE), TRIMG("TRIMG", TRIMG),
          TRIMO("TRIMO", TRIMO), EN("EN", EN), OTS("OTS", OTS) {}
  } SILSETPVT0CR; // end of register

  class SS_SILSETPVT1CR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    const ArchInfo::RegField VALID;
    const ArchInfo::RegField PVTSAMPLE;
    const ArchInfo::RegField TRIMG;
    const ArchInfo::RegField TRIMO;
    const ArchInfo::RegField EN;
    const ArchInfo::RegField OTS;
    SS_SILSETPVT1CR_t(uint32_t baseAddress, unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &DATA,
                      const ArchInfo::RegFieldDefinition &VALID,
                      const ArchInfo::RegFieldDefinition &PVTSAMPLE,
                      const ArchInfo::RegFieldDefinition &TRIMG,
                      const ArchInfo::RegFieldDefinition &TRIMO,
                      const ArchInfo::RegFieldDefinition &EN,
                      const ArchInfo::RegFieldDefinition &OTS,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETPVT1CR", baseAddress, index,
                                        valid, validFields),
          DATA("DATA", DATA), VALID("VALID", VALID),
          PVTSAMPLE("PVTSAMPLE", PVTSAMPLE), TRIMG("TRIMG", TRIMG),
          TRIMO("TRIMO", TRIMO), EN("EN", EN), OTS("OTS", OTS) {}
  } SILSETPVT1CR; // end of register

  class SS_SILSETPVT2CR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    const ArchInfo::RegField VALID;
    const ArchInfo::RegField PVTSAMPLE;
    const ArchInfo::RegField TRIMG;
    const ArchInfo::RegField TRIMO;
    const ArchInfo::RegField EN;
    const ArchInfo::RegField OTS;
    SS_SILSETPVT2CR_t(uint32_t baseAddress, unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &DATA,
                      const ArchInfo::RegFieldDefinition &VALID,
                      const ArchInfo::RegFieldDefinition &PVTSAMPLE,
                      const ArchInfo::RegFieldDefinition &TRIMG,
                      const ArchInfo::RegFieldDefinition &TRIMO,
                      const ArchInfo::RegFieldDefinition &EN,
                      const ArchInfo::RegFieldDefinition &OTS,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETPVT2CR", baseAddress, index,
                                        valid, validFields),
          DATA("DATA", DATA), VALID("VALID", VALID),
          PVTSAMPLE("PVTSAMPLE", PVTSAMPLE), TRIMG("TRIMG", TRIMG),
          TRIMO("TRIMO", TRIMO), EN("EN", EN), OTS("OTS", OTS) {}
  } SILSETPVT2CR; // end of register

  class SS_SILSETSYSPLLBWAR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADJ;
    SS_SILSETSYSPLLBWAR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADJ,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETSYSPLLBWAR", baseAddress, index,
                                        valid, validFields),
          ADJ("ADJ", ADJ) {}
  } SILSETSYSPLLBWAR; // end of register

  class SS_SILSETSIPUPLLBWAR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADJ;
    SS_SILSETSIPUPLLBWAR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADJ,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETSIPUPLLBWAR", baseAddress, index,
                                        valid, validFields),
          ADJ("ADJ", ADJ) {}
  } SILSETSIPUPLLBWAR; // end of register

  class SS_SILSETFIPUPLLBWAR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADJ;
    SS_SILSETFIPUPLLBWAR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADJ,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETFIPUPLLBWAR", baseAddress, index,
                                        valid, validFields),
          ADJ("ADJ", ADJ) {}
  } SILSETFIPUPLLBWAR; // end of register

  class SS_LOCKR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SILLOCK;
    const ArchInfo::RegField HOSTLOCK;
    SS_LOCKR_t(uint32_t baseAddress, unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &SILLOCK,
               const ArchInfo::RegFieldDefinition &HOSTLOCK,
               const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("LOCKR", baseAddress, index, valid,
                                        validFields),
          SILLOCK("SILLOCK", SILLOCK), HOSTLOCK("HOSTLOCK", HOSTLOCK) {}
  } LOCKR; // end of register

  class SS_SYSPLLCR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RESET;
    const ArchInfo::RegField PWRDN;
    const ArchInfo::RegField BYPN;
    const ArchInfo::RegField TEST;
    const ArchInfo::RegField FASTEN;
    const ArchInfo::RegField ENSAT;
    const ArchInfo::RegField CLKR;
    const ArchInfo::RegField CLKF;
    const ArchInfo::RegField CLKOD;
    const ArchInfo::RegField DIVR;
    const ArchInfo::RegField DIVF;
    const ArchInfo::RegField DIVQ;
    SS_SYSPLLCR_t(uint32_t baseAddress, unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &RESET,
                  const ArchInfo::RegFieldDefinition &PWRDN,
                  const ArchInfo::RegFieldDefinition &BYPN,
                  const ArchInfo::RegFieldDefinition &TEST,
                  const ArchInfo::RegFieldDefinition &FASTEN,
                  const ArchInfo::RegFieldDefinition &ENSAT,
                  const ArchInfo::RegFieldDefinition &CLKR,
                  const ArchInfo::RegFieldDefinition &CLKF,
                  const ArchInfo::RegFieldDefinition &CLKOD,
                  const ArchInfo::RegFieldDefinition &DIVR,
                  const ArchInfo::RegFieldDefinition &DIVF,
                  const ArchInfo::RegFieldDefinition &DIVQ,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SYSPLLCR", baseAddress, index, valid,
                                        validFields),
          RESET("RESET", RESET), PWRDN("PWRDN", PWRDN), BYPN("BYPN", BYPN),
          TEST("TEST", TEST), FASTEN("FASTEN", FASTEN), ENSAT("ENSAT", ENSAT),
          CLKR("CLKR", CLKR), CLKF("CLKF", CLKF), CLKOD("CLKOD", CLKOD),
          DIVR("DIVR", DIVR), DIVF("DIVF", DIVF), DIVQ("DIVQ", DIVQ) {}
  } SYSPLLCR; // end of register

  class SS_SIPUPLLCR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RESET;
    const ArchInfo::RegField PWRDN;
    const ArchInfo::RegField BYPN;
    const ArchInfo::RegField TEST;
    const ArchInfo::RegField FASTEN;
    const ArchInfo::RegField ENSAT;
    const ArchInfo::RegField CLKR;
    const ArchInfo::RegField CLKF;
    const ArchInfo::RegField CLKOD;
    const ArchInfo::RegField IPUCLKCNTEN;
    const ArchInfo::RegField DIVR;
    const ArchInfo::RegField DIVF;
    const ArchInfo::RegField DIVQ;
    SS_SIPUPLLCR_t(uint32_t baseAddress, unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RESET,
                   const ArchInfo::RegFieldDefinition &PWRDN,
                   const ArchInfo::RegFieldDefinition &BYPN,
                   const ArchInfo::RegFieldDefinition &TEST,
                   const ArchInfo::RegFieldDefinition &FASTEN,
                   const ArchInfo::RegFieldDefinition &ENSAT,
                   const ArchInfo::RegFieldDefinition &CLKR,
                   const ArchInfo::RegFieldDefinition &CLKF,
                   const ArchInfo::RegFieldDefinition &CLKOD,
                   const ArchInfo::RegFieldDefinition &IPUCLKCNTEN,
                   const ArchInfo::RegFieldDefinition &DIVR,
                   const ArchInfo::RegFieldDefinition &DIVF,
                   const ArchInfo::RegFieldDefinition &DIVQ,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SIPUPLLCR", baseAddress, index, valid,
                                        validFields),
          RESET("RESET", RESET), PWRDN("PWRDN", PWRDN), BYPN("BYPN", BYPN),
          TEST("TEST", TEST), FASTEN("FASTEN", FASTEN), ENSAT("ENSAT", ENSAT),
          CLKR("CLKR", CLKR), CLKF("CLKF", CLKF), CLKOD("CLKOD", CLKOD),
          IPUCLKCNTEN("IPUCLKCNTEN", IPUCLKCNTEN), DIVR("DIVR", DIVR),
          DIVF("DIVF", DIVF), DIVQ("DIVQ", DIVQ) {}
  } SIPUPLLCR; // end of register

  class SS_FIPUPLLCR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField RESET;
    const ArchInfo::RegField PWRDN;
    const ArchInfo::RegField BYPN;
    const ArchInfo::RegField TEST;
    const ArchInfo::RegField FASTEN;
    const ArchInfo::RegField ENSAT;
    const ArchInfo::RegField CLKR;
    const ArchInfo::RegField CLKF;
    const ArchInfo::RegField CLKOD;
    const ArchInfo::RegField DIVR;
    const ArchInfo::RegField DIVF;
    const ArchInfo::RegField DIVQ;
    SS_FIPUPLLCR_t(uint32_t baseAddress, unsigned index, bool valid,
                   const ArchInfo::RegFieldDefinition &RESET,
                   const ArchInfo::RegFieldDefinition &PWRDN,
                   const ArchInfo::RegFieldDefinition &BYPN,
                   const ArchInfo::RegFieldDefinition &TEST,
                   const ArchInfo::RegFieldDefinition &FASTEN,
                   const ArchInfo::RegFieldDefinition &ENSAT,
                   const ArchInfo::RegFieldDefinition &CLKR,
                   const ArchInfo::RegFieldDefinition &CLKF,
                   const ArchInfo::RegFieldDefinition &CLKOD,
                   const ArchInfo::RegFieldDefinition &DIVR,
                   const ArchInfo::RegFieldDefinition &DIVF,
                   const ArchInfo::RegFieldDefinition &DIVQ,
                   const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("FIPUPLLCR", baseAddress, index, valid,
                                        validFields),
          RESET("RESET", RESET), PWRDN("PWRDN", PWRDN), BYPN("BYPN", BYPN),
          TEST("TEST", TEST), FASTEN("FASTEN", FASTEN), ENSAT("ENSAT", ENSAT),
          CLKR("CLKR", CLKR), CLKF("CLKF", CLKF), CLKOD("CLKOD", CLKOD),
          DIVR("DIVR", DIVR), DIVF("DIVF", DIVF), DIVQ("DIVQ", DIVQ) {}
  } FIPUPLLCR; // end of register

  class SS_SYSCR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField IPURSTN;
    const ArchInfo::RegField SYSCLKSRC;
    const ArchInfo::RegField IPUCLKSRC;
    const ArchInfo::RegField TEMPTHRESH;
    const ArchInfo::RegField EMTHRESH;
    const ArchInfo::RegField GSPINTEN;
    const ArchInfo::RegField LOCKINTEN;
    const ArchInfo::RegField SLIPINTEN;
    const ArchInfo::RegField EMINTEN;
    const ArchInfo::RegField NEWMANRSTN;
    SS_SYSCR_t(uint32_t baseAddress, unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &IPURSTN,
               const ArchInfo::RegFieldDefinition &SYSCLKSRC,
               const ArchInfo::RegFieldDefinition &IPUCLKSRC,
               const ArchInfo::RegFieldDefinition &TEMPTHRESH,
               const ArchInfo::RegFieldDefinition &EMTHRESH,
               const ArchInfo::RegFieldDefinition &GSPINTEN,
               const ArchInfo::RegFieldDefinition &LOCKINTEN,
               const ArchInfo::RegFieldDefinition &SLIPINTEN,
               const ArchInfo::RegFieldDefinition &EMINTEN,
               const ArchInfo::RegFieldDefinition &NEWMANRSTN,
               const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SYSCR", baseAddress, index, valid,
                                        validFields),
          IPURSTN("IPURSTN", IPURSTN), SYSCLKSRC("SYSCLKSRC", SYSCLKSRC),
          IPUCLKSRC("IPUCLKSRC", IPUCLKSRC),
          TEMPTHRESH("TEMPTHRESH", TEMPTHRESH), EMTHRESH("EMTHRESH", EMTHRESH),
          GSPINTEN("GSPINTEN", GSPINTEN), LOCKINTEN("LOCKINTEN", LOCKINTEN),
          SLIPINTEN("SLIPINTEN", SLIPINTEN), EMINTEN("EMINTEN", EMINTEN),
          NEWMANRSTN("NEWMANRSTN", NEWMANRSTN) {}
  } SYSCR; // end of register

  class SS_SYSSR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SYSPLLLOCK;
    const ArchInfo::RegField SIPUPLLLOCK;
    const ArchInfo::RegField FIPUPLLLOCK;
    const ArchInfo::RegField SYSLOCKLOST;
    const ArchInfo::RegField SIPULOCKLOST;
    const ArchInfo::RegField FIPULOCKLOST;
    const ArchInfo::RegField SYSSLIP;
    const ArchInfo::RegField SIPUSLIP;
    const ArchInfo::RegField FIPUSLIP;
    const ArchInfo::RegField EMSHUTDN;
    SS_SYSSR_t(uint32_t baseAddress, unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &SYSPLLLOCK,
               const ArchInfo::RegFieldDefinition &SIPUPLLLOCK,
               const ArchInfo::RegFieldDefinition &FIPUPLLLOCK,
               const ArchInfo::RegFieldDefinition &SYSLOCKLOST,
               const ArchInfo::RegFieldDefinition &SIPULOCKLOST,
               const ArchInfo::RegFieldDefinition &FIPULOCKLOST,
               const ArchInfo::RegFieldDefinition &SYSSLIP,
               const ArchInfo::RegFieldDefinition &SIPUSLIP,
               const ArchInfo::RegFieldDefinition &FIPUSLIP,
               const ArchInfo::RegFieldDefinition &EMSHUTDN,
               const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SYSSR", baseAddress, index, valid,
                                        validFields),
          SYSPLLLOCK("SYSPLLLOCK", SYSPLLLOCK),
          SIPUPLLLOCK("SIPUPLLLOCK", SIPUPLLLOCK),
          FIPUPLLLOCK("FIPUPLLLOCK", FIPUPLLLOCK),
          SYSLOCKLOST("SYSLOCKLOST", SYSLOCKLOST),
          SIPULOCKLOST("SIPULOCKLOST", SIPULOCKLOST),
          FIPULOCKLOST("FIPULOCKLOST", FIPULOCKLOST),
          SYSSLIP("SYSSLIP", SYSSLIP), SIPUSLIP("SIPUSLIP", SIPUSLIP),
          FIPUSLIP("FIPUSLIP", FIPUSLIP), EMSHUTDN("EMSHUTDN", EMSHUTDN) {}
  } SYSSR; // end of register

  class SS_IPUCLKCOUNTLSBR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COUNT;
    SS_IPUCLKCOUNTLSBR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &COUNT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("IPUCLKCOUNTLSBR", baseAddress, index,
                                        valid, validFields),
          COUNT("COUNT", COUNT) {}
  } IPUCLKCOUNTLSBR; // end of register

  class SS_IPUCLKCOUNTMSBR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COUNT;
    SS_IPUCLKCOUNTMSBR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &COUNT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("IPUCLKCOUNTMSBR", baseAddress, index,
                                        valid, validFields),
          COUNT("COUNT", COUNT) {}
  } IPUCLKCOUNTMSBR; // end of register

  class SS_GSPCR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField GSAYDRIVEN;
    const ArchInfo::RegField GSAGS1DIR;
    const ArchInfo::RegField GSAGS2DIR;
    const ArchInfo::RegField GSBYDRIVEN;
    const ArchInfo::RegField GSBGS1DIR;
    const ArchInfo::RegField GSBGS2DIR;
    const ArchInfo::RegField GSCYDRIVEN;
    const ArchInfo::RegField GSCGS1DIR;
    const ArchInfo::RegField GSCGS2DIR;
    const ArchInfo::RegField _ERROR;
    const ArchInfo::RegField GSAGS3DIR;
    const ArchInfo::RegField GSAGS4DIR;
    const ArchInfo::RegField GSBGS3DIR;
    const ArchInfo::RegField GSBGS4DIR;
    const ArchInfo::RegField GSCGS3DIR;
    const ArchInfo::RegField GSCGS4DIR;
    SS_GSPCR_t(uint32_t baseAddress, unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &GSAYDRIVEN,
               const ArchInfo::RegFieldDefinition &GSAGS1DIR,
               const ArchInfo::RegFieldDefinition &GSAGS2DIR,
               const ArchInfo::RegFieldDefinition &GSBYDRIVEN,
               const ArchInfo::RegFieldDefinition &GSBGS1DIR,
               const ArchInfo::RegFieldDefinition &GSBGS2DIR,
               const ArchInfo::RegFieldDefinition &GSCYDRIVEN,
               const ArchInfo::RegFieldDefinition &GSCGS1DIR,
               const ArchInfo::RegFieldDefinition &GSCGS2DIR,
               const ArchInfo::RegFieldDefinition &_ERROR,
               const ArchInfo::RegFieldDefinition &GSAGS3DIR,
               const ArchInfo::RegFieldDefinition &GSAGS4DIR,
               const ArchInfo::RegFieldDefinition &GSBGS3DIR,
               const ArchInfo::RegFieldDefinition &GSBGS4DIR,
               const ArchInfo::RegFieldDefinition &GSCGS3DIR,
               const ArchInfo::RegFieldDefinition &GSCGS4DIR,
               const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("GSPCR", baseAddress, index, valid,
                                        validFields),
          GSAYDRIVEN("GSAYDRIVEN", GSAYDRIVEN),
          GSAGS1DIR("GSAGS1DIR", GSAGS1DIR), GSAGS2DIR("GSAGS2DIR", GSAGS2DIR),
          GSBYDRIVEN("GSBYDRIVEN", GSBYDRIVEN),
          GSBGS1DIR("GSBGS1DIR", GSBGS1DIR), GSBGS2DIR("GSBGS2DIR", GSBGS2DIR),
          GSCYDRIVEN("GSCYDRIVEN", GSCYDRIVEN),
          GSCGS1DIR("GSCGS1DIR", GSCGS1DIR), GSCGS2DIR("GSCGS2DIR", GSCGS2DIR),
          _ERROR("_ERROR", _ERROR), GSAGS3DIR("GSAGS3DIR", GSAGS3DIR),
          GSAGS4DIR("GSAGS4DIR", GSAGS4DIR), GSBGS3DIR("GSBGS3DIR", GSBGS3DIR),
          GSBGS4DIR("GSBGS4DIR", GSBGS4DIR), GSCGS3DIR("GSCGS3DIR", GSCGS3DIR),
          GSCGS4DIR("GSCGS4DIR", GSCGS4DIR) {}
  } GSPCR; // end of register

  class SS_GSPSR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField GSAYIN;
    const ArchInfo::RegField GSAXIN;
    const ArchInfo::RegField GSAYOUT;
    const ArchInfo::RegField GSAXOUT;
    const ArchInfo::RegField GSBYIN;
    const ArchInfo::RegField GSBXIN;
    const ArchInfo::RegField GSBYOUT;
    const ArchInfo::RegField GSBXOUT;
    const ArchInfo::RegField GSCYIN;
    const ArchInfo::RegField GSCXIN;
    const ArchInfo::RegField GSCYOUT;
    const ArchInfo::RegField GSCXOUT;
    const ArchInfo::RegField IPUSREQ;
    const ArchInfo::RegField IPUPAYL;
    const ArchInfo::RegField SREQEQ;
    const ArchInfo::RegField HSPACK;
    SS_GSPSR_t(uint32_t baseAddress, unsigned index, bool valid,
               const ArchInfo::RegFieldDefinition &GSAYIN,
               const ArchInfo::RegFieldDefinition &GSAXIN,
               const ArchInfo::RegFieldDefinition &GSAYOUT,
               const ArchInfo::RegFieldDefinition &GSAXOUT,
               const ArchInfo::RegFieldDefinition &GSBYIN,
               const ArchInfo::RegFieldDefinition &GSBXIN,
               const ArchInfo::RegFieldDefinition &GSBYOUT,
               const ArchInfo::RegFieldDefinition &GSBXOUT,
               const ArchInfo::RegFieldDefinition &GSCYIN,
               const ArchInfo::RegFieldDefinition &GSCXIN,
               const ArchInfo::RegFieldDefinition &GSCYOUT,
               const ArchInfo::RegFieldDefinition &GSCXOUT,
               const ArchInfo::RegFieldDefinition &IPUSREQ,
               const ArchInfo::RegFieldDefinition &IPUPAYL,
               const ArchInfo::RegFieldDefinition &SREQEQ,
               const ArchInfo::RegFieldDefinition &HSPACK,
               const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("GSPSR", baseAddress, index, valid,
                                        validFields),
          GSAYIN("GSAYIN", GSAYIN), GSAXIN("GSAXIN", GSAXIN),
          GSAYOUT("GSAYOUT", GSAYOUT), GSAXOUT("GSAXOUT", GSAXOUT),
          GSBYIN("GSBYIN", GSBYIN), GSBXIN("GSBXIN", GSBXIN),
          GSBYOUT("GSBYOUT", GSBYOUT), GSBXOUT("GSBXOUT", GSBXOUT),
          GSCYIN("GSCYIN", GSCYIN), GSCXIN("GSCXIN", GSCXIN),
          GSCYOUT("GSCYOUT", GSCYOUT), GSCXOUT("GSCXOUT", GSCXOUT),
          IPUSREQ("IPUSREQ", IPUSREQ), IPUPAYL("IPUPAYL", IPUPAYL),
          SREQEQ("SREQEQ", SREQEQ), HSPACK("HSPACK", HSPACK) {}
  } GSPSR; // end of register

  class SS_GSPCR2_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField GSDYDRIVEN;
    const ArchInfo::RegField GSDGS1DIR;
    const ArchInfo::RegField GSDGS2DIR;
    const ArchInfo::RegField GSDGS3DIR;
    const ArchInfo::RegField GSDGS4DIR;
    SS_GSPCR2_t(uint32_t baseAddress, unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &GSDYDRIVEN,
                const ArchInfo::RegFieldDefinition &GSDGS1DIR,
                const ArchInfo::RegFieldDefinition &GSDGS2DIR,
                const ArchInfo::RegFieldDefinition &GSDGS3DIR,
                const ArchInfo::RegFieldDefinition &GSDGS4DIR,
                const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("GSPCR2", baseAddress, index, valid,
                                        validFields),
          GSDYDRIVEN("GSDYDRIVEN", GSDYDRIVEN),
          GSDGS1DIR("GSDGS1DIR", GSDGS1DIR), GSDGS2DIR("GSDGS2DIR", GSDGS2DIR),
          GSDGS3DIR("GSDGS3DIR", GSDGS3DIR), GSDGS4DIR("GSDGS4DIR", GSDGS4DIR) {
    }
  } GSPCR2; // end of register

  class SS_GSPSR2_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField GSDYIN;
    const ArchInfo::RegField GSDXIN;
    const ArchInfo::RegField GSDYOUT;
    const ArchInfo::RegField GSDXOUT;
    SS_GSPSR2_t(uint32_t baseAddress, unsigned index, bool valid,
                const ArchInfo::RegFieldDefinition &GSDYIN,
                const ArchInfo::RegFieldDefinition &GSDXIN,
                const ArchInfo::RegFieldDefinition &GSDYOUT,
                const ArchInfo::RegFieldDefinition &GSDXOUT,
                const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("GSPSR2", baseAddress, index, valid,
                                        validFields),
          GSDYIN("GSDYIN", GSDYIN), GSDXIN("GSDXIN", GSDXIN),
          GSDYOUT("GSDYOUT", GSDYOUT), GSDXOUT("GSDXOUT", GSDXOUT) {}
  } GSPSR2; // end of register

  class SS_BISRCSR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SOCBISRDISABLE;
    const ArchInfo::RegField SOCFUSEBUFSEL;
    const ArchInfo::RegField SOCBISRINIT_N;
    const ArchInfo::RegField SOCBISRLOADED;
    const ArchInfo::RegField SOCBISRDONE;
    const ArchInfo::RegField SOCBISRPASS;
    const ArchInfo::RegField IPUBISRDISABLE;
    const ArchInfo::RegField IPUBISRLOADED;
    SS_BISRCSR_t(uint32_t baseAddress, unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &SOCBISRDISABLE,
                 const ArchInfo::RegFieldDefinition &SOCFUSEBUFSEL,
                 const ArchInfo::RegFieldDefinition &SOCBISRINIT_N,
                 const ArchInfo::RegFieldDefinition &SOCBISRLOADED,
                 const ArchInfo::RegFieldDefinition &SOCBISRDONE,
                 const ArchInfo::RegFieldDefinition &SOCBISRPASS,
                 const ArchInfo::RegFieldDefinition &IPUBISRDISABLE,
                 const ArchInfo::RegFieldDefinition &IPUBISRLOADED,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("BISRCSR", baseAddress, index, valid,
                                        validFields),
          SOCBISRDISABLE("SOCBISRDISABLE", SOCBISRDISABLE),
          SOCFUSEBUFSEL("SOCFUSEBUFSEL", SOCFUSEBUFSEL),
          SOCBISRINIT_N("SOCBISRINIT_N", SOCBISRINIT_N),
          SOCBISRLOADED("SOCBISRLOADED", SOCBISRLOADED),
          SOCBISRDONE("SOCBISRDONE", SOCBISRDONE),
          SOCBISRPASS("SOCBISRPASS", SOCBISRPASS),
          IPUBISRDISABLE("IPUBISRDISABLE", IPUBISRDISABLE),
          IPUBISRLOADED("IPUBISRLOADED", IPUBISRLOADED) {}
  } BISRCSR; // end of register

  class SS_SILSETPADS_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField PADGSADS;
    const ArchInfo::RegField PADGSASLEN;
    const ArchInfo::RegField PADGSBDS;
    const ArchInfo::RegField PADGSBSLEN;
    const ArchInfo::RegField PADGSCDS;
    const ArchInfo::RegField PADGSCSLEN;
    const ArchInfo::RegField PADGSDDS;
    const ArchInfo::RegField PADGSDSLEN;
    const ArchInfo::RegField PADMISCDS;
    const ArchInfo::RegField PADMISCSLEN;
    const ArchInfo::RegField PADREFCKODS;
    const ArchInfo::RegField PADREFCKOSLEN;
    SS_SILSETPADS_t(uint32_t baseAddress, unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &PADGSADS,
                    const ArchInfo::RegFieldDefinition &PADGSASLEN,
                    const ArchInfo::RegFieldDefinition &PADGSBDS,
                    const ArchInfo::RegFieldDefinition &PADGSBSLEN,
                    const ArchInfo::RegFieldDefinition &PADGSCDS,
                    const ArchInfo::RegFieldDefinition &PADGSCSLEN,
                    const ArchInfo::RegFieldDefinition &PADGSDDS,
                    const ArchInfo::RegFieldDefinition &PADGSDSLEN,
                    const ArchInfo::RegFieldDefinition &PADMISCDS,
                    const ArchInfo::RegFieldDefinition &PADMISCSLEN,
                    const ArchInfo::RegFieldDefinition &PADREFCKODS,
                    const ArchInfo::RegFieldDefinition &PADREFCKOSLEN,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("SILSETPADS", baseAddress, index, valid,
                                        validFields),
          PADGSADS("PADGSADS", PADGSADS), PADGSASLEN("PADGSASLEN", PADGSASLEN),
          PADGSBDS("PADGSBDS", PADGSBDS), PADGSBSLEN("PADGSBSLEN", PADGSBSLEN),
          PADGSCDS("PADGSCDS", PADGSCDS), PADGSCSLEN("PADGSCSLEN", PADGSCSLEN),
          PADGSDDS("PADGSDDS", PADGSDDS), PADGSDSLEN("PADGSDSLEN", PADGSDSLEN),
          PADMISCDS("PADMISCDS", PADMISCDS),
          PADMISCSLEN("PADMISCSLEN", PADMISCSLEN),
          PADREFCKODS("PADREFCKODS", PADREFCKODS),
          PADREFCKOSLEN("PADREFCKOSLEN", PADREFCKOSLEN) {}
  } SILSETPADS; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} SS; // end of register block

struct PCI_COMPLEX_t { // namespace for PCI_COMPLEX
  class PCI_COMPLEX_CCSR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField CPLMODE;
    const ArchInfo::RegField NOSNOOP;
    const ArchInfo::RegField DUALPCI;
    const ArchInfo::RegField DBICS2;
    const ArchInfo::RegField DBIADDR0;
    const ArchInfo::RegField IPUID;
    const ArchInfo::RegField GWMODE;
    const ArchInfo::RegField ELINKECRCEN;
    const ArchInfo::RegField CPLBUFMRGN;
    const ArchInfo::RegField HUGEPAGE;
    PCI_COMPLEX_CCSR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &CPLMODE,
        const ArchInfo::RegFieldDefinition &NOSNOOP,
        const ArchInfo::RegFieldDefinition &DUALPCI,
        const ArchInfo::RegFieldDefinition &DBICS2,
        const ArchInfo::RegFieldDefinition &DBIADDR0,
        const ArchInfo::RegFieldDefinition &IPUID,
        const ArchInfo::RegFieldDefinition &GWMODE,
        const ArchInfo::RegFieldDefinition &ELINKECRCEN,
        const ArchInfo::RegFieldDefinition &CPLBUFMRGN,
        const ArchInfo::RegFieldDefinition &HUGEPAGE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CCSR", baseAddress, index, valid,
                                        validFields),
          CPLMODE("CPLMODE", CPLMODE), NOSNOOP("NOSNOOP", NOSNOOP),
          DUALPCI("DUALPCI", DUALPCI), DBICS2("DBICS2", DBICS2),
          DBIADDR0("DBIADDR0", DBIADDR0), IPUID("IPUID", IPUID),
          GWMODE("GWMODE", GWMODE), ELINKECRCEN("ELINKECRCEN", ELINKECRCEN),
          CPLBUFMRGN("CPLBUFMRGN", CPLBUFMRGN), HUGEPAGE("HUGEPAGE", HUGEPAGE) {
    }
  } CCSR; // end of register

  class PCI_COMPLEX_CIUERRVR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SOC0PGMERR;
    const ArchInfo::RegField SOC1PGMERR;
    const ArchInfo::RegField ELINKPGMERR;
    const ArchInfo::RegField HEXOVERFLOWERR;
    const ArchInfo::RegField MCUPGMERR;
    const ArchInfo::RegField SOC0SOFTERR;
    const ArchInfo::RegField SOC1SOFTERR;
    const ArchInfo::RegField ELINKSOFTERR;
    const ArchInfo::RegField IPUSOFTERR;
    const ArchInfo::RegField NMLINKDN0;
    const ArchInfo::RegField NMLINKDN1;
    const ArchInfo::RegField MCUSOFTERR;
    const ArchInfo::RegField FIRSTERROR;
    PCI_COMPLEX_CIUERRVR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &SOC0PGMERR,
        const ArchInfo::RegFieldDefinition &SOC1PGMERR,
        const ArchInfo::RegFieldDefinition &ELINKPGMERR,
        const ArchInfo::RegFieldDefinition &HEXOVERFLOWERR,
        const ArchInfo::RegFieldDefinition &MCUPGMERR,
        const ArchInfo::RegFieldDefinition &SOC0SOFTERR,
        const ArchInfo::RegFieldDefinition &SOC1SOFTERR,
        const ArchInfo::RegFieldDefinition &ELINKSOFTERR,
        const ArchInfo::RegFieldDefinition &IPUSOFTERR,
        const ArchInfo::RegFieldDefinition &NMLINKDN0,
        const ArchInfo::RegFieldDefinition &NMLINKDN1,
        const ArchInfo::RegFieldDefinition &MCUSOFTERR,
        const ArchInfo::RegFieldDefinition &FIRSTERROR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CIUERRVR", baseAddress, index, valid,
                                        validFields),
          SOC0PGMERR("SOC0PGMERR", SOC0PGMERR),
          SOC1PGMERR("SOC1PGMERR", SOC1PGMERR),
          ELINKPGMERR("ELINKPGMERR", ELINKPGMERR),
          HEXOVERFLOWERR("HEXOVERFLOWERR", HEXOVERFLOWERR),
          MCUPGMERR("MCUPGMERR", MCUPGMERR),
          SOC0SOFTERR("SOC0SOFTERR", SOC0SOFTERR),
          SOC1SOFTERR("SOC1SOFTERR", SOC1SOFTERR),
          ELINKSOFTERR("ELINKSOFTERR", ELINKSOFTERR),
          IPUSOFTERR("IPUSOFTERR", IPUSOFTERR),
          NMLINKDN0("NMLINKDN0", NMLINKDN0), NMLINKDN1("NMLINKDN1", NMLINKDN1),
          MCUSOFTERR("MCUSOFTERR", MCUSOFTERR),
          FIRSTERROR("FIRSTERROR", FIRSTERROR) {}
  } CIUERRVR; // end of register

  class PCI_COMPLEX_CICERRVR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField MCUCORERR;
    const ArchInfo::RegField CORLINKERR;
    PCI_COMPLEX_CICERRVR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &MCUCORERR,
        const ArchInfo::RegFieldDefinition &CORLINKERR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CICERRVR", baseAddress, index, valid,
                                        validFields),
          MCUCORERR("MCUCORERR", MCUCORERR),
          CORLINKERR("CORLINKERR", CORLINKERR) {}
  } CICERRVR; // end of register

  class PCI_COMPLEX_CMGMTEVVR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField NMLINKDN0;
    const ArchInfo::RegField NMLINKDN1;
    const ArchInfo::RegField CPORTERR;
    const ArchInfo::RegField PCIDRVALID;
    const ArchInfo::RegField PCICOREDN;
    const ArchInfo::RegField PCILINKDN;
    const ArchInfo::RegField PCIERR;
    const ArchInfo::RegField SSPL;
    const ArchInfo::RegField DSTATENOTD0;
    const ArchInfo::RegField DSTATENOTD3;
    const ArchInfo::RegField PMTURNOFF;
    const ArchInfo::RegField OVERTEMP;
    const ArchInfo::RegField SECEXP;
    const ArchInfo::RegField FLR;
    PCI_COMPLEX_CMGMTEVVR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &NMLINKDN0,
        const ArchInfo::RegFieldDefinition &NMLINKDN1,
        const ArchInfo::RegFieldDefinition &CPORTERR,
        const ArchInfo::RegFieldDefinition &PCIDRVALID,
        const ArchInfo::RegFieldDefinition &PCICOREDN,
        const ArchInfo::RegFieldDefinition &PCILINKDN,
        const ArchInfo::RegFieldDefinition &PCIERR,
        const ArchInfo::RegFieldDefinition &SSPL,
        const ArchInfo::RegFieldDefinition &DSTATENOTD0,
        const ArchInfo::RegFieldDefinition &DSTATENOTD3,
        const ArchInfo::RegFieldDefinition &PMTURNOFF,
        const ArchInfo::RegFieldDefinition &OVERTEMP,
        const ArchInfo::RegFieldDefinition &SECEXP,
        const ArchInfo::RegFieldDefinition &FLR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CMGMTEVVR", baseAddress, index, valid,
                                        validFields),
          NMLINKDN0("NMLINKDN0", NMLINKDN0), NMLINKDN1("NMLINKDN1", NMLINKDN1),
          CPORTERR("CPORTERR", CPORTERR), PCIDRVALID("PCIDRVALID", PCIDRVALID),
          PCICOREDN("PCICOREDN", PCICOREDN), PCILINKDN("PCILINKDN", PCILINKDN),
          PCIERR("PCIERR", PCIERR), SSPL("SSPL", SSPL),
          DSTATENOTD0("DSTATENOTD0", DSTATENOTD0),
          DSTATENOTD3("DSTATENOTD3", DSTATENOTD3),
          PMTURNOFF("PMTURNOFF", PMTURNOFF), OVERTEMP("OVERTEMP", OVERTEMP),
          SECEXP("SECEXP", SECEXP), FLR("FLR", FLR) {}
  } CMGMTEVVR; // end of register

  class PCI_COMPLEX_CMGMTEVMSKR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField NMLINKDN0;
    const ArchInfo::RegField NMLINKDN1;
    const ArchInfo::RegField CPORTERR;
    const ArchInfo::RegField PCIDRVALID;
    const ArchInfo::RegField PCICOREDN;
    const ArchInfo::RegField PCILINKDN;
    const ArchInfo::RegField PCIERR;
    const ArchInfo::RegField SSPL;
    const ArchInfo::RegField DSTATENOTD0;
    const ArchInfo::RegField DSTATENOTD3;
    const ArchInfo::RegField PMTURNOFF;
    const ArchInfo::RegField SECEXP;
    const ArchInfo::RegField FLR;
    PCI_COMPLEX_CMGMTEVMSKR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &NMLINKDN0,
        const ArchInfo::RegFieldDefinition &NMLINKDN1,
        const ArchInfo::RegFieldDefinition &CPORTERR,
        const ArchInfo::RegFieldDefinition &PCIDRVALID,
        const ArchInfo::RegFieldDefinition &PCICOREDN,
        const ArchInfo::RegFieldDefinition &PCILINKDN,
        const ArchInfo::RegFieldDefinition &PCIERR,
        const ArchInfo::RegFieldDefinition &SSPL,
        const ArchInfo::RegFieldDefinition &DSTATENOTD0,
        const ArchInfo::RegFieldDefinition &DSTATENOTD3,
        const ArchInfo::RegFieldDefinition &PMTURNOFF,
        const ArchInfo::RegFieldDefinition &SECEXP,
        const ArchInfo::RegFieldDefinition &FLR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CMGMTEVMSKR", baseAddress, index,
                                        valid, validFields),
          NMLINKDN0("NMLINKDN0", NMLINKDN0), NMLINKDN1("NMLINKDN1", NMLINKDN1),
          CPORTERR("CPORTERR", CPORTERR), PCIDRVALID("PCIDRVALID", PCIDRVALID),
          PCICOREDN("PCICOREDN", PCICOREDN), PCILINKDN("PCILINKDN", PCILINKDN),
          PCIERR("PCIERR", PCIERR), SSPL("SSPL", SSPL),
          DSTATENOTD0("DSTATENOTD0", DSTATENOTD0),
          DSTATENOTD3("DSTATENOTD3", DSTATENOTD3),
          PMTURNOFF("PMTURNOFF", PMTURNOFF), SECEXP("SECEXP", SECEXP),
          FLR("FLR", FLR) {}
  } CMGMTEVMSKR; // end of register

  class PCI_COMPLEX_CSYSEVVR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField IPUEX;
    const ArchInfo::RegField MCUDRVALID;
    const ArchInfo::RegField HSPGS1NOTIFY0;
    const ArchInfo::RegField HSPGS1NOTIFY1;
    const ArchInfo::RegField HSPGS2NOTIFY0;
    const ArchInfo::RegField HSPGS2NOTIFY1;
    PCI_COMPLEX_CSYSEVVR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &IPUEX,
        const ArchInfo::RegFieldDefinition &MCUDRVALID,
        const ArchInfo::RegFieldDefinition &HSPGS1NOTIFY0,
        const ArchInfo::RegFieldDefinition &HSPGS1NOTIFY1,
        const ArchInfo::RegFieldDefinition &HSPGS2NOTIFY0,
        const ArchInfo::RegFieldDefinition &HSPGS2NOTIFY1,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CSYSEVVR", baseAddress, index, valid,
                                        validFields),
          IPUEX("IPUEX", IPUEX), MCUDRVALID("MCUDRVALID", MCUDRVALID),
          HSPGS1NOTIFY0("HSPGS1NOTIFY0", HSPGS1NOTIFY0),
          HSPGS1NOTIFY1("HSPGS1NOTIFY1", HSPGS1NOTIFY1),
          HSPGS2NOTIFY0("HSPGS2NOTIFY0", HSPGS2NOTIFY0),
          HSPGS2NOTIFY1("HSPGS2NOTIFY1", HSPGS2NOTIFY1) {}
  } CSYSEVVR; // end of register

  class PCI_COMPLEX_CLCR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LTSSMSTATE;
    const ArchInfo::RegField DSTATE;
    const ArchInfo::RegField BUSMASTEREN;
    const ArchInfo::RegField MSIEN;
    const ArchInfo::RegField LTSSMEN;
    const ArchInfo::RegField PCIEN;
    const ArchInfo::RegField RXLANEFLIP;
    const ArchInfo::RegField TXLANEFLIP;
    const ArchInfo::RegField SRISEN;
    const ArchInfo::RegField FASTLINK;
    const ArchInfo::RegField NOTURNOFF;
    const ArchInfo::RegField READYCFG;
    const ArchInfo::RegField TUNEREQ;
    const ArchInfo::RegField TUNEACK;
    const ArchInfo::RegField VPHNOM;
    const ArchInfo::RegField FWUSESRAM;
    const ArchInfo::RegField SRAMLDDONE;
    const ArchInfo::RegField SRAMINITDONE;
    const ArchInfo::RegField CMNREFCKMODE;
    PCI_COMPLEX_CLCR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &LTSSMSTATE,
        const ArchInfo::RegFieldDefinition &DSTATE,
        const ArchInfo::RegFieldDefinition &BUSMASTEREN,
        const ArchInfo::RegFieldDefinition &MSIEN,
        const ArchInfo::RegFieldDefinition &LTSSMEN,
        const ArchInfo::RegFieldDefinition &PCIEN,
        const ArchInfo::RegFieldDefinition &RXLANEFLIP,
        const ArchInfo::RegFieldDefinition &TXLANEFLIP,
        const ArchInfo::RegFieldDefinition &SRISEN,
        const ArchInfo::RegFieldDefinition &FASTLINK,
        const ArchInfo::RegFieldDefinition &NOTURNOFF,
        const ArchInfo::RegFieldDefinition &READYCFG,
        const ArchInfo::RegFieldDefinition &TUNEREQ,
        const ArchInfo::RegFieldDefinition &TUNEACK,
        const ArchInfo::RegFieldDefinition &VPHNOM,
        const ArchInfo::RegFieldDefinition &FWUSESRAM,
        const ArchInfo::RegFieldDefinition &SRAMLDDONE,
        const ArchInfo::RegFieldDefinition &SRAMINITDONE,
        const ArchInfo::RegFieldDefinition &CMNREFCKMODE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CLCR", baseAddress, index, valid,
                                        validFields),
          LTSSMSTATE("LTSSMSTATE", LTSSMSTATE), DSTATE("DSTATE", DSTATE),
          BUSMASTEREN("BUSMASTEREN", BUSMASTEREN), MSIEN("MSIEN", MSIEN),
          LTSSMEN("LTSSMEN", LTSSMEN), PCIEN("PCIEN", PCIEN),
          RXLANEFLIP("RXLANEFLIP", RXLANEFLIP),
          TXLANEFLIP("TXLANEFLIP", TXLANEFLIP), SRISEN("SRISEN", SRISEN),
          FASTLINK("FASTLINK", FASTLINK), NOTURNOFF("NOTURNOFF", NOTURNOFF),
          READYCFG("READYCFG", READYCFG), TUNEREQ("TUNEREQ", TUNEREQ),
          TUNEACK("TUNEACK", TUNEACK), VPHNOM("VPHNOM", VPHNOM),
          FWUSESRAM("FWUSESRAM", FWUSESRAM),
          SRAMLDDONE("SRAMLDDONE", SRAMLDDONE),
          SRAMINITDONE("SRAMINITDONE", SRAMINITDONE),
          CMNREFCKMODE("CMNREFCKMODE", CMNREFCKMODE) {}
  } CLCR; // end of register

  class PCI_COMPLEX_MCUCMDR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COMMAND;
    PCI_COMPLEX_MCUCMDR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &COMMAND,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("MCUCMDR", baseAddress, index, valid,
                                        validFields),
          COMMAND("COMMAND", COMMAND) {}
  } MCUCMDR; // end of register

  class PCI_COMPLEX_MCUDATR0_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_MCUDATR0_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("MCUDATR0", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } MCUDATR0; // end of register

  class PCI_COMPLEX_MCUDATR1_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_MCUDATR1_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("MCUDATR1", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } MCUDATR1; // end of register

  class PCI_COMPLEX_MCUDATR2_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_MCUDATR2_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("MCUDATR2", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } MCUDATR2; // end of register

  class PCI_COMPLEX_MCUDATR3_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_MCUDATR3_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("MCUDATR3", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } MCUDATR3; // end of register

  class PCI_COMPLEX_CPBR0_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR0_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR0", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR0; // end of register

  class PCI_COMPLEX_CPBR1_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR1_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR1", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR1; // end of register

  class PCI_COMPLEX_CPBR2_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR2_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR2", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR2; // end of register

  class PCI_COMPLEX_CPBR3_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR3_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR3", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR3; // end of register

  class PCI_COMPLEX_CPBR4_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR4_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR4", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR4; // end of register

  class PCI_COMPLEX_CPBR5_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR5_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR5", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR5; // end of register

  class PCI_COMPLEX_CPBR6_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR6_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR6", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR6; // end of register

  class PCI_COMPLEX_CPBR7_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_CPBR7_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CPBR7", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } CPBR7; // end of register

  class PCI_COMPLEX_PCICMDR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField COMMAND;
    PCI_COMPLEX_PCICMDR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &COMMAND,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("PCICMDR", baseAddress, index, valid,
                                        validFields),
          COMMAND("COMMAND", COMMAND) {}
  } PCICMDR; // end of register

  class PCI_COMPLEX_PCIDATR0_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_PCIDATR0_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("PCIDATR0", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } PCIDATR0; // end of register

  class PCI_COMPLEX_PCIDATR1_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_PCIDATR1_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("PCIDATR1", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } PCIDATR1; // end of register

  class PCI_COMPLEX_PCIDATR2_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_PCIDATR2_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("PCIDATR2", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } PCIDATR2; // end of register

  class PCI_COMPLEX_PCIDATR3_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_PCIDATR3_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("PCIDATR3", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } PCIDATR3; // end of register

  class PCI_COMPLEX_HSPGS1CR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField MARK;
    const ArchInfo::RegField HOSTEXST;
    const ArchInfo::RegField EXSTCOND;
    const ArchInfo::RegField COLEXST;
    const ArchInfo::RegField NOTIFY;
    const ArchInfo::RegField FLAG;
    PCI_COMPLEX_HSPGS1CR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &MARK,
        const ArchInfo::RegFieldDefinition &HOSTEXST,
        const ArchInfo::RegFieldDefinition &EXSTCOND,
        const ArchInfo::RegFieldDefinition &COLEXST,
        const ArchInfo::RegFieldDefinition &NOTIFY,
        const ArchInfo::RegFieldDefinition &FLAG,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HSPGS1CR", baseAddress, index, valid,
                                        validFields),
          MARK("MARK", MARK), HOSTEXST("HOSTEXST", HOSTEXST),
          EXSTCOND("EXSTCOND", EXSTCOND), COLEXST("COLEXST", COLEXST),
          NOTIFY("NOTIFY", NOTIFY), FLAG("FLAG", FLAG) {}
  } HSPGS1CR; // end of register

  class PCI_COMPLEX_HSPGS2CR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField MARK;
    const ArchInfo::RegField HOSTEXST;
    const ArchInfo::RegField EXSTCOND;
    const ArchInfo::RegField COLEXST;
    const ArchInfo::RegField NOTIFY;
    const ArchInfo::RegField FLAG;
    PCI_COMPLEX_HSPGS2CR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &MARK,
        const ArchInfo::RegFieldDefinition &HOSTEXST,
        const ArchInfo::RegFieldDefinition &EXSTCOND,
        const ArchInfo::RegFieldDefinition &COLEXST,
        const ArchInfo::RegFieldDefinition &NOTIFY,
        const ArchInfo::RegFieldDefinition &FLAG,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HSPGS2CR", baseAddress, index, valid,
                                        validFields),
          MARK("MARK", MARK), HOSTEXST("HOSTEXST", HOSTEXST),
          EXSTCOND("EXSTCOND", EXSTCOND), COLEXST("COLEXST", COLEXST),
          NOTIFY("NOTIFY", NOTIFY), FLAG("FLAG", FLAG) {}
  } HSPGS2CR; // end of register

  class PCI_COMPLEX_HEXOPTDBGI_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INDEX;
    const ArchInfo::RegField UPPER;
    const ArchInfo::RegField WRITE;
    const ArchInfo::RegField READ;
    PCI_COMPLEX_HEXOPTDBGI_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &INDEX,
        const ArchInfo::RegFieldDefinition &UPPER,
        const ArchInfo::RegFieldDefinition &WRITE,
        const ArchInfo::RegFieldDefinition &READ,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HEXOPTDBGI", baseAddress, index, valid,
                                        validFields),
          INDEX("INDEX", INDEX), UPPER("UPPER", UPPER), WRITE("WRITE", WRITE),
          READ("READ", READ) {}
  } HEXOPTDBGI; // end of register

  class PCI_COMPLEX_HEXOPTDBGD_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_HEXOPTDBGD_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HEXOPTDBGD", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA) {}
  } HEXOPTDBGD; // end of register

  class PCI_COMPLEX_HSPGS1LR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    PCI_COMPLEX_HSPGS1LR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HSPGS1LR", baseAddress, index, valid,
                                        validFields),
          ADDR("ADDR", ADDR) {}
  } HSPGS1LR; // end of register

  class PCI_COMPLEX_HSPGS2LR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    PCI_COMPLEX_HSPGS2LR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HSPGS2LR", baseAddress, index, valid,
                                        validFields),
          ADDR("ADDR", ADDR) {}
  } HSPGS2LR; // end of register

  class PCI_COMPLEX_ERECR0_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    PCI_COMPLEX_ERECR0_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &REC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("ERECR0", baseAddress, index, valid,
                                        validFields),
          REC("REC", REC) {}
  } ERECR0; // end of register

  class PCI_COMPLEX_ERECR1_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    PCI_COMPLEX_ERECR1_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &REC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("ERECR1", baseAddress, index, valid,
                                        validFields),
          REC("REC", REC) {}
  } ERECR1; // end of register

  class PCI_COMPLEX_ERECR2_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    PCI_COMPLEX_ERECR2_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &REC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("ERECR2", baseAddress, index, valid,
                                        validFields),
          REC("REC", REC) {}
  } ERECR2; // end of register

  class PCI_COMPLEX_ERECR3_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    PCI_COMPLEX_ERECR3_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &REC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("ERECR3", baseAddress, index, valid,
                                        validFields),
          REC("REC", REC) {}
  } ERECR3; // end of register

  class PCI_COMPLEX_CBUSRDRQR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    PCI_COMPLEX_CBUSRDRQR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CBUSRDRQR", baseAddress, index, valid,
                                        validFields),
          ADDR("ADDR", ADDR) {}
  } CBUSRDRQR; // end of register

  class PCI_COMPLEX_CBUSRDRSPR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    const ArchInfo::RegField STATUS;
    PCI_COMPLEX_CBUSRDRSPR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const ArchInfo::RegFieldDefinition &STATUS,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CBUSRDRSPR", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA), STATUS("STATUS", STATUS) {}
  } CBUSRDRSPR; // end of register

  class PCI_COMPLEX_CBUSWRRQR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    const ArchInfo::RegField ADDR;
    PCI_COMPLEX_CBUSWRRQR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CBUSWRRQR", baseAddress, index, valid,
                                        validFields),
          DATA("DATA", DATA), ADDR("ADDR", ADDR) {}
  } CBUSWRRQR; // end of register

  class PCI_COMPLEX_CBUSWRRSPR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField STATUS;
    PCI_COMPLEX_CBUSWRRSPR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &STATUS,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CBUSWRRSPR", baseAddress, index, valid,
                                        validFields),
          STATUS("STATUS", STATUS) {}
  } CBUSWRRSPR; // end of register

  class PCI_COMPLEX_HSPGS1HILR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    PCI_COMPLEX_HSPGS1HILR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HSPGS1HILR", baseAddress, index, valid,
                                        validFields),
          ADDR("ADDR", ADDR) {}
  } HSPGS1HILR; // end of register

  class PCI_COMPLEX_HSPGS2HILR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDR;
    PCI_COMPLEX_HSPGS2HILR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HSPGS2HILR", baseAddress, index, valid,
                                        validFields),
          ADDR("ADDR", ADDR) {}
  } HSPGS2HILR; // end of register

  class PCI_COMPLEX_CSECEXPMASKR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SOC0PGMERR;
    const ArchInfo::RegField SOC1PGMERR;
    const ArchInfo::RegField ELINKPGMERR;
    const ArchInfo::RegField HEXOVERFLOWERR;
    const ArchInfo::RegField SOC0SOFTERR;
    const ArchInfo::RegField SOC1SOFTERR;
    const ArchInfo::RegField ELINKSOFTERR;
    const ArchInfo::RegField NMLINKDN0;
    const ArchInfo::RegField NMLINKDN1;
    const ArchInfo::RegField CPORTERR;
    const ArchInfo::RegField PCILINKDN;
    const ArchInfo::RegField PCIERR;
    PCI_COMPLEX_CSECEXPMASKR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &SOC0PGMERR,
        const ArchInfo::RegFieldDefinition &SOC1PGMERR,
        const ArchInfo::RegFieldDefinition &ELINKPGMERR,
        const ArchInfo::RegFieldDefinition &HEXOVERFLOWERR,
        const ArchInfo::RegFieldDefinition &SOC0SOFTERR,
        const ArchInfo::RegFieldDefinition &SOC1SOFTERR,
        const ArchInfo::RegFieldDefinition &ELINKSOFTERR,
        const ArchInfo::RegFieldDefinition &NMLINKDN0,
        const ArchInfo::RegFieldDefinition &NMLINKDN1,
        const ArchInfo::RegFieldDefinition &CPORTERR,
        const ArchInfo::RegFieldDefinition &PCILINKDN,
        const ArchInfo::RegFieldDefinition &PCIERR,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("CSECEXPMASKR", baseAddress, index,
                                        valid, validFields),
          SOC0PGMERR("SOC0PGMERR", SOC0PGMERR),
          SOC1PGMERR("SOC1PGMERR", SOC1PGMERR),
          ELINKPGMERR("ELINKPGMERR", ELINKPGMERR),
          HEXOVERFLOWERR("HEXOVERFLOWERR", HEXOVERFLOWERR),
          SOC0SOFTERR("SOC0SOFTERR", SOC0SOFTERR),
          SOC1SOFTERR("SOC1SOFTERR", SOC1SOFTERR),
          ELINKSOFTERR("ELINKSOFTERR", ELINKSOFTERR),
          NMLINKDN0("NMLINKDN0", NMLINKDN0), NMLINKDN1("NMLINKDN1", NMLINKDN1),
          CPORTERR("CPORTERR", CPORTERR), PCILINKDN("PCILINKDN", PCILINKDN),
          PCIERR("PCIERR", PCIERR) {}
  } CSECEXPMASKR; // end of register

  class PCI_COMPLEX_AUTOLDCSR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LOADPTR;
    const ArchInfo::RegField GO;
    const ArchInfo::RegField CURNTTILE;
    const ArchInfo::RegField DATAPRESENT;
    PCI_COMPLEX_AUTOLDCSR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &LOADPTR,
        const ArchInfo::RegFieldDefinition &GO,
        const ArchInfo::RegFieldDefinition &CURNTTILE,
        const ArchInfo::RegFieldDefinition &DATAPRESENT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("AUTOLDCSR", baseAddress, index, valid,
                                        validFields),
          LOADPTR("LOADPTR", LOADPTR), GO("GO", GO),
          CURNTTILE("CURNTTILE", CURNTTILE),
          DATAPRESENT("DATAPRESENT", DATAPRESENT) {}
  } AUTOLDCSR; // end of register

  class PCI_COMPLEX_AUTOLDTRGTR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField STARTADDR_19_10;
    const ArchInfo::RegField ENDADDR_19_10;
    const ArchInfo::RegField ZONE;
    PCI_COMPLEX_AUTOLDTRGTR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &STARTADDR_19_10,
        const ArchInfo::RegFieldDefinition &ENDADDR_19_10,
        const ArchInfo::RegFieldDefinition &ZONE,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("AUTOLDTRGTR", baseAddress, index,
                                        valid, validFields),
          STARTADDR_19_10("STARTADDR_19_10", STARTADDR_19_10),
          ENDADDR_19_10("ENDADDR_19_10", ENDADDR_19_10), ZONE("ZONE", ZONE) {}
  } AUTOLDTRGTR; // end of register

  class PCI_COMPLEX_AUTOLDDATAR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    PCI_COMPLEX_AUTOLDDATAR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &DATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("AUTOLDDATAR", baseAddress, index,
                                        valid, validFields),
          DATA("DATA", DATA) {}
  } AUTOLDDATAR; // end of register

  class PCI_COMPLEX_LOCKR_t : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField SILLOCK;
    const ArchInfo::RegField SECURITY_MODE;
    const ArchInfo::RegField IPUDBGDIS;
    const ArchInfo::RegField TESTDIS;
    PCI_COMPLEX_LOCKR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &SILLOCK,
        const ArchInfo::RegFieldDefinition &SECURITY_MODE,
        const ArchInfo::RegFieldDefinition &IPUDBGDIS,
        const ArchInfo::RegFieldDefinition &TESTDIS,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("LOCKR", baseAddress, index, valid,
                                        validFields),
          SILLOCK("SILLOCK", SILLOCK),
          SECURITY_MODE("SECURITY_MODE", SECURITY_MODE),
          IPUDBGDIS("IPUDBGDIS", IPUDBGDIS), TESTDIS("TESTDIS", TESTDIS) {}
  } LOCKR; // end of register

  class PCI_COMPLEX_EXCHWINDOWBASER_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INDEX;
    const ArchInfo::RegField HEXOPT;
    PCI_COMPLEX_EXCHWINDOWBASER_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &INDEX,
        const ArchInfo::RegFieldDefinition &HEXOPT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("EXCHWINDOWBASER", baseAddress, index,
                                        valid, validFields),
          INDEX("INDEX", INDEX), HEXOPT("HEXOPT", HEXOPT) {}
  } EXCHWINDOWBASER; // end of register

  class PCI_COMPLEX_HEXOPTUPDINDEXR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LASTINDEX;
    PCI_COMPLEX_HEXOPTUPDINDEXR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &LASTINDEX,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HEXOPTUPDINDEXR", baseAddress, index,
                                        valid, validFields),
          LASTINDEX("LASTINDEX", LASTINDEX) {}
  } HEXOPTUPDINDEXR; // end of register

  class PCI_COMPLEX_HEXOPTUPDDATAHIR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LASTDATA;
    PCI_COMPLEX_HEXOPTUPDDATAHIR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &LASTDATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HEXOPTUPDDATAHIR", baseAddress, index,
                                        valid, validFields),
          LASTDATA("LASTDATA", LASTDATA) {}
  } HEXOPTUPDDATAHIR; // end of register

  class PCI_COMPLEX_HEXOPTUPDDATALOR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LASTDATA;
    PCI_COMPLEX_HEXOPTUPDDATALOR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &LASTDATA,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("HEXOPTUPDDATALOR", baseAddress, index,
                                        valid, validFields),
          LASTDATA("LASTDATA", LASTDATA) {}
  } HEXOPTUPDDATALOR; // end of register

  class PCI_COMPLEX_TILEUPDR_t
      : public ArchInfo::RegisterWithSingleBaseAddress {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LASTADDR;
    const ArchInfo::RegField LASTTILEID;
    PCI_COMPLEX_TILEUPDR_t(
        uint32_t baseAddress, unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &LASTADDR,
        const ArchInfo::RegFieldDefinition &LASTTILEID,
        const std::vector<const ArchInfo::RegField *> validFields)
        : RegisterWithSingleBaseAddress("TILEUPDR", baseAddress, index, valid,
                                        validFields),
          LASTADDR("LASTADDR", LASTADDR), LASTTILEID("LASTTILEID", LASTTILEID) {
    }
  } TILEUPDR; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} PCI_COMPLEX; // end of register block

struct SS_E_t { // namespace for SS_E
  class SS_E_PVTECR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField DATA;
    const ArchInfo::RegField VALID;
    const ArchInfo::RegField PVTSAMPLE;
    const ArchInfo::RegField TRIMG;
    const ArchInfo::RegField TRIMO;
    const ArchInfo::RegField EN;
    SS_E_PVTECR_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &DATA,
                  const ArchInfo::RegFieldDefinition &VALID,
                  const ArchInfo::RegFieldDefinition &PVTSAMPLE,
                  const ArchInfo::RegFieldDefinition &TRIMG,
                  const ArchInfo::RegFieldDefinition &TRIMO,
                  const ArchInfo::RegFieldDefinition &EN,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("PVTECR", index, valid, validFields), DATA("DATA", DATA),
          VALID("VALID", VALID), PVTSAMPLE("PVTSAMPLE", PVTSAMPLE),
          TRIMG("TRIMG", TRIMG), TRIMO("TRIMO", TRIMO), EN("EN", EN) {}
  } PVTECR; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} SS_E; // end of register block

struct SXP_t { // namespace for SXP
  class SXP_CSR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField HOST_MODE;
    const ArchInfo::RegField IPU_MODE;
    const ArchInfo::RegField ECRCEN;
    const ArchInfo::RegField HOST_RXBYTELIMITEN;
    const ArchInfo::RegField IPU_TXBYTELIMITEN;
    const ArchInfo::RegField SEC_FEATURE_DIS;
    const ArchInfo::RegField SECEXPST;
    const ArchInfo::RegField SECEXP;
    SXP_CSR_t(unsigned index, bool valid,
              const ArchInfo::RegFieldDefinition &HOST_MODE,
              const ArchInfo::RegFieldDefinition &IPU_MODE,
              const ArchInfo::RegFieldDefinition &ECRCEN,
              const ArchInfo::RegFieldDefinition &HOST_RXBYTELIMITEN,
              const ArchInfo::RegFieldDefinition &IPU_TXBYTELIMITEN,
              const ArchInfo::RegFieldDefinition &SEC_FEATURE_DIS,
              const ArchInfo::RegFieldDefinition &SECEXPST,
              const ArchInfo::RegFieldDefinition &SECEXP,
              const std::vector<const ArchInfo::RegField *> validFields)
        : Register("CSR", index, valid, validFields),
          HOST_MODE("HOST_MODE", HOST_MODE), IPU_MODE("IPU_MODE", IPU_MODE),
          ECRCEN("ECRCEN", ECRCEN),
          HOST_RXBYTELIMITEN("HOST_RXBYTELIMITEN", HOST_RXBYTELIMITEN),
          IPU_TXBYTELIMITEN("IPU_TXBYTELIMITEN", IPU_TXBYTELIMITEN),
          SEC_FEATURE_DIS("SEC_FEATURE_DIS", SEC_FEATURE_DIS),
          SECEXPST("SECEXPST", SECEXPST), SECEXP("SECEXP", SECEXP) {}
  } CSR; // end of register

  class SXP_HOST_RXBYTELIMITR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LIMIT;
    SXP_HOST_RXBYTELIMITR_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &LIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("HOST_RXBYTELIMITR", index, valid, validFields),
          LIMIT("LIMIT", LIMIT) {}
  } HOST_RXBYTELIMITR; // end of register

  class SXP_HOST_RXBYTELIMITW_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INC;
    SXP_HOST_RXBYTELIMITW_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &INC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("HOST_RXBYTELIMITW", index, valid, validFields),
          INC("INC", INC) {}
  } HOST_RXBYTELIMITW; // end of register

  class SXP_IPU_TXBYTELIMITR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField LIMIT;
    SXP_IPU_TXBYTELIMITR_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &LIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("IPU_TXBYTELIMITR", index, valid, validFields),
          LIMIT("LIMIT", LIMIT) {}
  } IPU_TXBYTELIMITR; // end of register

  class SXP_IPU_TXBYTELIMITW_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField INC;
    SXP_IPU_TXBYTELIMITW_t(
        unsigned index, bool valid, const ArchInfo::RegFieldDefinition &INC,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("IPU_TXBYTELIMITW", index, valid, validFields),
          INC("INC", INC) {}
  } IPU_TXBYTELIMITW; // end of register

  class SXP_KLOAD0R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD0R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD0R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD0R; // end of register

  class SXP_KLOAD1R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD1R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD1R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD1R; // end of register

  class SXP_KLOAD2R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD2R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD2R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD2R; // end of register

  class SXP_KLOAD3R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD3R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD3R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD3R; // end of register

  class SXP_KLOAD4R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD4R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD4R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD4R; // end of register

  class SXP_KLOAD5R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD5R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD5R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD5R; // end of register

  class SXP_KLOAD6R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD6R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD6R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD6R; // end of register

  class SXP_KLOAD7R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYDATA;
    SXP_KLOAD7R_t(unsigned index, bool valid,
                  const ArchInfo::RegFieldDefinition &KEYDATA,
                  const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KLOAD7R", index, valid, validFields),
          KEYDATA("KEYDATA", KEYDATA) {}
  } KLOAD7R; // end of register

  class SXP_KCTXTR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYINDEX;
    SXP_KCTXTR_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &KEYINDEX,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KCTXTR", index, valid, validFields),
          KEYINDEX("KEYINDEX", KEYINDEX) {}
  } KCTXTR; // end of register

  class SXP_KCTXTINVALR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField KEYINDEX;
    SXP_KCTXTINVALR_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &KEYINDEX,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KCTXTINVALR", index, valid, validFields),
          KEYINDEX("KEYINDEX", KEYINDEX) {}
  } KCTXTINVALR; // end of register

  class SXP_KSELLIMITCR_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMITCR_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMITCR", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMITCR; // end of register

  class SXP_KSELLIMIT0R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT0R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT0R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT0R; // end of register

  class SXP_KSELLIMIT1R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT1R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT1R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT1R; // end of register

  class SXP_KSELLIMIT2R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT2R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT2R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT2R; // end of register

  class SXP_KSELLIMIT3R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT3R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT3R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT3R; // end of register

  class SXP_KSELLIMIT4R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT4R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT4R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT4R; // end of register

  class SXP_KSELLIMIT5R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT5R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT5R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT5R; // end of register

  class SXP_KSELLIMIT6R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT6R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT6R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT6R; // end of register

  class SXP_KSELLIMIT7R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT7R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT7R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT7R; // end of register

  class SXP_KSELLIMIT8R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT8R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT8R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT8R; // end of register

  class SXP_KSELLIMIT9R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT9R_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &ADDRLIMIT,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT9R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT9R; // end of register

  class SXP_KSELLIMIT10R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT10R_t(
        unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDRLIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT10R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT10R; // end of register

  class SXP_KSELLIMIT11R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT11R_t(
        unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDRLIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT11R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT11R; // end of register

  class SXP_KSELLIMIT12R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT12R_t(
        unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDRLIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT12R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT12R; // end of register

  class SXP_KSELLIMIT13R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT13R_t(
        unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDRLIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT13R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT13R; // end of register

  class SXP_KSELLIMIT14R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT14R_t(
        unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDRLIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT14R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT14R; // end of register

  class SXP_KSELLIMIT15R_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField ADDRLIMIT;
    SXP_KSELLIMIT15R_t(
        unsigned index, bool valid,
        const ArchInfo::RegFieldDefinition &ADDRLIMIT,
        const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KSELLIMIT15R", index, valid, validFields),
          ADDRLIMIT("ADDRLIMIT", ADDRLIMIT) {}
  } KSELLIMIT15R; // end of register

  class SXP_KPHYSMAP0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField PKEY0_KREG;
    const ArchInfo::RegField PKEY1_KREG;
    const ArchInfo::RegField PKEY2_KREG;
    const ArchInfo::RegField PKEY3_KREG;
    const ArchInfo::RegField PKEY4_KREG;
    const ArchInfo::RegField PKEY5_KREG;
    const ArchInfo::RegField PKEY6_KREG;
    const ArchInfo::RegField PKEY7_KREG;
    SXP_KPHYSMAP0_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &PKEY0_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY1_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY2_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY3_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY4_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY5_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY6_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY7_KREG,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KPHYSMAP0", index, valid, validFields),
          PKEY0_KREG("PKEY0_KREG", PKEY0_KREG),
          PKEY1_KREG("PKEY1_KREG", PKEY1_KREG),
          PKEY2_KREG("PKEY2_KREG", PKEY2_KREG),
          PKEY3_KREG("PKEY3_KREG", PKEY3_KREG),
          PKEY4_KREG("PKEY4_KREG", PKEY4_KREG),
          PKEY5_KREG("PKEY5_KREG", PKEY5_KREG),
          PKEY6_KREG("PKEY6_KREG", PKEY6_KREG),
          PKEY7_KREG("PKEY7_KREG", PKEY7_KREG) {}
  } KPHYSMAP0; // end of register

  class SXP_KPHYSMAP1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField PKEY8_KREG;
    const ArchInfo::RegField PKEY9_KREG;
    const ArchInfo::RegField PKEY10_KREG;
    const ArchInfo::RegField PKEY11_KREG;
    const ArchInfo::RegField PKEY12_KREG;
    const ArchInfo::RegField PKEY13_KREG;
    const ArchInfo::RegField PKEY14_KREG;
    const ArchInfo::RegField PKEY15_KREG;
    SXP_KPHYSMAP1_t(unsigned index, bool valid,
                    const ArchInfo::RegFieldDefinition &PKEY8_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY9_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY10_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY11_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY12_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY13_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY14_KREG,
                    const ArchInfo::RegFieldDefinition &PKEY15_KREG,
                    const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KPHYSMAP1", index, valid, validFields),
          PKEY8_KREG("PKEY8_KREG", PKEY8_KREG),
          PKEY9_KREG("PKEY9_KREG", PKEY9_KREG),
          PKEY10_KREG("PKEY10_KREG", PKEY10_KREG),
          PKEY11_KREG("PKEY11_KREG", PKEY11_KREG),
          PKEY12_KREG("PKEY12_KREG", PKEY12_KREG),
          PKEY13_KREG("PKEY13_KREG", PKEY13_KREG),
          PKEY14_KREG("PKEY14_KREG", PKEY14_KREG),
          PKEY15_KREG("PKEY15_KREG", PKEY15_KREG) {}
  } KPHYSMAP1; // end of register

  class SXP_KXBCTXTMAP0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField XBCTXT0_PKEY;
    const ArchInfo::RegField XBCTXT1_PKEY;
    const ArchInfo::RegField XBCTXT2_PKEY;
    const ArchInfo::RegField XBCTXT3_PKEY;
    const ArchInfo::RegField XBCTXT4_PKEY;
    const ArchInfo::RegField XBCTXT5_PKEY;
    const ArchInfo::RegField XBCTXT6_PKEY;
    const ArchInfo::RegField XBCTXT7_PKEY;
    SXP_KXBCTXTMAP0_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &XBCTXT0_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT1_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT2_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT3_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT4_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT5_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT6_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT7_PKEY,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KXBCTXTMAP0", index, valid, validFields),
          XBCTXT0_PKEY("XBCTXT0_PKEY", XBCTXT0_PKEY),
          XBCTXT1_PKEY("XBCTXT1_PKEY", XBCTXT1_PKEY),
          XBCTXT2_PKEY("XBCTXT2_PKEY", XBCTXT2_PKEY),
          XBCTXT3_PKEY("XBCTXT3_PKEY", XBCTXT3_PKEY),
          XBCTXT4_PKEY("XBCTXT4_PKEY", XBCTXT4_PKEY),
          XBCTXT5_PKEY("XBCTXT5_PKEY", XBCTXT5_PKEY),
          XBCTXT6_PKEY("XBCTXT6_PKEY", XBCTXT6_PKEY),
          XBCTXT7_PKEY("XBCTXT7_PKEY", XBCTXT7_PKEY) {}
  } KXBCTXTMAP0; // end of register

  class SXP_KXBCTXTMAP1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField XBCTXT8_PKEY;
    const ArchInfo::RegField XBCTXT9_PKEY;
    const ArchInfo::RegField XBCTXT10_PKEY;
    const ArchInfo::RegField XBCTXT11_PKEY;
    const ArchInfo::RegField XBCTXT12_PKEY;
    const ArchInfo::RegField XBCTXT13_PKEY;
    const ArchInfo::RegField XBCTXT14_PKEY;
    const ArchInfo::RegField XBCTXT15_PKEY;
    SXP_KXBCTXTMAP1_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &XBCTXT8_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT9_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT10_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT11_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT12_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT13_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT14_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT15_PKEY,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KXBCTXTMAP1", index, valid, validFields),
          XBCTXT8_PKEY("XBCTXT8_PKEY", XBCTXT8_PKEY),
          XBCTXT9_PKEY("XBCTXT9_PKEY", XBCTXT9_PKEY),
          XBCTXT10_PKEY("XBCTXT10_PKEY", XBCTXT10_PKEY),
          XBCTXT11_PKEY("XBCTXT11_PKEY", XBCTXT11_PKEY),
          XBCTXT12_PKEY("XBCTXT12_PKEY", XBCTXT12_PKEY),
          XBCTXT13_PKEY("XBCTXT13_PKEY", XBCTXT13_PKEY),
          XBCTXT14_PKEY("XBCTXT14_PKEY", XBCTXT14_PKEY),
          XBCTXT15_PKEY("XBCTXT15_PKEY", XBCTXT15_PKEY) {}
  } KXBCTXTMAP1; // end of register

  class SXP_KXBCTXTMAP2_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField XBCTXT16_PKEY;
    const ArchInfo::RegField XBCTXT17_PKEY;
    const ArchInfo::RegField XBCTXT18_PKEY;
    const ArchInfo::RegField XBCTXT19_PKEY;
    const ArchInfo::RegField XBCTXT20_PKEY;
    const ArchInfo::RegField XBCTXT21_PKEY;
    const ArchInfo::RegField XBCTXT22_PKEY;
    const ArchInfo::RegField XBCTXT23_PKEY;
    SXP_KXBCTXTMAP2_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &XBCTXT16_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT17_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT18_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT19_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT20_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT21_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT22_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT23_PKEY,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KXBCTXTMAP2", index, valid, validFields),
          XBCTXT16_PKEY("XBCTXT16_PKEY", XBCTXT16_PKEY),
          XBCTXT17_PKEY("XBCTXT17_PKEY", XBCTXT17_PKEY),
          XBCTXT18_PKEY("XBCTXT18_PKEY", XBCTXT18_PKEY),
          XBCTXT19_PKEY("XBCTXT19_PKEY", XBCTXT19_PKEY),
          XBCTXT20_PKEY("XBCTXT20_PKEY", XBCTXT20_PKEY),
          XBCTXT21_PKEY("XBCTXT21_PKEY", XBCTXT21_PKEY),
          XBCTXT22_PKEY("XBCTXT22_PKEY", XBCTXT22_PKEY),
          XBCTXT23_PKEY("XBCTXT23_PKEY", XBCTXT23_PKEY) {}
  } KXBCTXTMAP2; // end of register

  class SXP_KXBCTXTMAP3_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField XBCTXT24_PKEY;
    const ArchInfo::RegField XBCTXT25_PKEY;
    const ArchInfo::RegField XBCTXT26_PKEY;
    const ArchInfo::RegField XBCTXT27_PKEY;
    const ArchInfo::RegField XBCTXT28_PKEY;
    const ArchInfo::RegField XBCTXT29_PKEY;
    const ArchInfo::RegField XBCTXT30_PKEY;
    const ArchInfo::RegField XBCTXT31_PKEY;
    SXP_KXBCTXTMAP3_t(unsigned index, bool valid,
                      const ArchInfo::RegFieldDefinition &XBCTXT24_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT25_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT26_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT27_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT28_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT29_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT30_PKEY,
                      const ArchInfo::RegFieldDefinition &XBCTXT31_PKEY,
                      const std::vector<const ArchInfo::RegField *> validFields)
        : Register("KXBCTXTMAP3", index, valid, validFields),
          XBCTXT24_PKEY("XBCTXT24_PKEY", XBCTXT24_PKEY),
          XBCTXT25_PKEY("XBCTXT25_PKEY", XBCTXT25_PKEY),
          XBCTXT26_PKEY("XBCTXT26_PKEY", XBCTXT26_PKEY),
          XBCTXT27_PKEY("XBCTXT27_PKEY", XBCTXT27_PKEY),
          XBCTXT28_PKEY("XBCTXT28_PKEY", XBCTXT28_PKEY),
          XBCTXT29_PKEY("XBCTXT29_PKEY", XBCTXT29_PKEY),
          XBCTXT30_PKEY("XBCTXT30_PKEY", XBCTXT30_PKEY),
          XBCTXT31_PKEY("XBCTXT31_PKEY", XBCTXT31_PKEY) {}
  } KXBCTXTMAP3; // end of register

  class SXP_ERECR0_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    SXP_ERECR0_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR0", index, valid, validFields), REC("REC", REC) {}
  } ERECR0; // end of register

  class SXP_ERECR1_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    SXP_ERECR1_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR1", index, valid, validFields), REC("REC", REC) {}
  } ERECR1; // end of register

  class SXP_ERECR2_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    SXP_ERECR2_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR2", index, valid, validFields), REC("REC", REC) {}
  } ERECR2; // end of register

  class SXP_ERECR3_t : public ArchInfo::Register {
  private:
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;

  public:
    const ArchInfo::RegField REC;
    SXP_ERECR3_t(unsigned index, bool valid,
                 const ArchInfo::RegFieldDefinition &REC,
                 const std::vector<const ArchInfo::RegField *> validFields)
        : Register("ERECR3", index, valid, validFields), REC("REC", REC) {}
  } ERECR3; // end of register

  const ArchInfo::RegisterBlock registers;
  const ArchInfo::RegisterBlockGroup instances;

private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;
} SXP; // end of register block

/////////// TLink Packet declarations ///////////
class XREQ_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField XBITMAP1;
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField XBITMAP0;
  XREQ_t(int numWords, bool valid,
         const ArchInfo::TLinkFieldDefinition &XBITMAP1,
         const ArchInfo::TLinkFieldDefinition &FMT,
         const ArchInfo::TLinkFieldDefinition &XBITMAP0,
         const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XREQ", numWords, valid, validFields),
        XBITMAP1("XBITMAP1", XBITMAP1), FMT("FMT", FMT),
        XBITMAP0("XBITMAP0", XBITMAP0) {}
} XREQ; // end of TLink packet

class XFC_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField DSTTILEID;
  XFC_t(int numWords, bool valid, const ArchInfo::TLinkFieldDefinition &FMT,
        const ArchInfo::TLinkFieldDefinition &DSTTILEID,
        const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XFC", numWords, valid, validFields), FMT("FMT", FMT),
        DSTTILEID("DSTTILEID", DSTTILEID) {}
} XFC; // end of TLink packet

class XTWRS_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField TILEADDR1;
  const ArchInfo::TLinkField BCASTBITMAP;
  const ArchInfo::TLinkField LENGTH;
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField CC;
  const ArchInfo::TLinkField LAST;
  const ArchInfo::TLinkField PEN;
  const ArchInfo::TLinkField DSTTILEID;
  const ArchInfo::TLinkField TILEADDR0;
  XTWRS_t(int numWords, bool valid,
          const ArchInfo::TLinkFieldDefinition &TILEADDR1,
          const ArchInfo::TLinkFieldDefinition &BCASTBITMAP,
          const ArchInfo::TLinkFieldDefinition &LENGTH,
          const ArchInfo::TLinkFieldDefinition &FMT,
          const ArchInfo::TLinkFieldDefinition &CC,
          const ArchInfo::TLinkFieldDefinition &LAST,
          const ArchInfo::TLinkFieldDefinition &PEN,
          const ArchInfo::TLinkFieldDefinition &DSTTILEID,
          const ArchInfo::TLinkFieldDefinition &TILEADDR0,
          const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XTWRS", numWords, valid, validFields),
        TILEADDR1("TILEADDR1", TILEADDR1),
        BCASTBITMAP("BCASTBITMAP", BCASTBITMAP), LENGTH("LENGTH", LENGTH),
        FMT("FMT", FMT), CC("CC", CC), LAST("LAST", LAST), PEN("PEN", PEN),
        DSTTILEID("DSTTILEID", DSTTILEID), TILEADDR0("TILEADDR0", TILEADDR0) {}
} XTWRS; // end of TLink packet

class XTWRL_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField TILEADDR1;
  const ArchInfo::TLinkField BCASTBITMAP;
  const ArchInfo::TLinkField LENGTH;
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField CC;
  const ArchInfo::TLinkField LAST;
  const ArchInfo::TLinkField PEN;
  const ArchInfo::TLinkField DSTTILEID;
  const ArchInfo::TLinkField TILEADDR0;
  XTWRL_t(int numWords, bool valid,
          const ArchInfo::TLinkFieldDefinition &TILEADDR1,
          const ArchInfo::TLinkFieldDefinition &BCASTBITMAP,
          const ArchInfo::TLinkFieldDefinition &LENGTH,
          const ArchInfo::TLinkFieldDefinition &FMT,
          const ArchInfo::TLinkFieldDefinition &CC,
          const ArchInfo::TLinkFieldDefinition &LAST,
          const ArchInfo::TLinkFieldDefinition &PEN,
          const ArchInfo::TLinkFieldDefinition &DSTTILEID,
          const ArchInfo::TLinkFieldDefinition &TILEADDR0,
          const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XTWRL", numWords, valid, validFields),
        TILEADDR1("TILEADDR1", TILEADDR1),
        BCASTBITMAP("BCASTBITMAP", BCASTBITMAP), LENGTH("LENGTH", LENGTH),
        FMT("FMT", FMT), CC("CC", CC), LAST("LAST", LAST), PEN("PEN", PEN),
        DSTTILEID("DSTTILEID", DSTTILEID), TILEADDR0("TILEADDR0", TILEADDR0) {}
} XTWRL; // end of TLink packet

class XPWRS_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField XADDR;
  const ArchInfo::TLinkField LENGTH;
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField CC;
  const ArchInfo::TLinkField LAST;
  const ArchInfo::TLinkField PEN;
  const ArchInfo::TLinkField SRCTILEID;
  XPWRS_t(int numWords, bool valid, const ArchInfo::TLinkFieldDefinition &XADDR,
          const ArchInfo::TLinkFieldDefinition &LENGTH,
          const ArchInfo::TLinkFieldDefinition &FMT,
          const ArchInfo::TLinkFieldDefinition &CC,
          const ArchInfo::TLinkFieldDefinition &LAST,
          const ArchInfo::TLinkFieldDefinition &PEN,
          const ArchInfo::TLinkFieldDefinition &SRCTILEID,
          const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XPWRS", numWords, valid, validFields),
        XADDR("XADDR", XADDR), LENGTH("LENGTH", LENGTH), FMT("FMT", FMT),
        CC("CC", CC), LAST("LAST", LAST), PEN("PEN", PEN),
        SRCTILEID("SRCTILEID", SRCTILEID) {}
} XPWRS; // end of TLink packet

class XPWRL_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField XADDR;
  const ArchInfo::TLinkField LENGTH;
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField CC;
  const ArchInfo::TLinkField LAST;
  const ArchInfo::TLinkField PEN;
  const ArchInfo::TLinkField SRCTILEID;
  XPWRL_t(int numWords, bool valid, const ArchInfo::TLinkFieldDefinition &XADDR,
          const ArchInfo::TLinkFieldDefinition &LENGTH,
          const ArchInfo::TLinkFieldDefinition &FMT,
          const ArchInfo::TLinkFieldDefinition &CC,
          const ArchInfo::TLinkFieldDefinition &LAST,
          const ArchInfo::TLinkFieldDefinition &PEN,
          const ArchInfo::TLinkFieldDefinition &SRCTILEID,
          const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XPWRL", numWords, valid, validFields),
        XADDR("XADDR", XADDR), LENGTH("LENGTH", LENGTH), FMT("FMT", FMT),
        CC("CC", CC), LAST("LAST", LAST), PEN("PEN", PEN),
        SRCTILEID("SRCTILEID", SRCTILEID) {}
} XPWRL; // end of TLink packet

class XPRDS_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField XADDR;
  const ArchInfo::TLinkField LENGTH;
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField CC;
  const ArchInfo::TLinkField LAST;
  const ArchInfo::TLinkField PEN;
  const ArchInfo::TLinkField SRCTILEID;
  const ArchInfo::TLinkField TILEADDR0;
  XPRDS_t(int numWords, bool valid, const ArchInfo::TLinkFieldDefinition &XADDR,
          const ArchInfo::TLinkFieldDefinition &LENGTH,
          const ArchInfo::TLinkFieldDefinition &FMT,
          const ArchInfo::TLinkFieldDefinition &CC,
          const ArchInfo::TLinkFieldDefinition &LAST,
          const ArchInfo::TLinkFieldDefinition &PEN,
          const ArchInfo::TLinkFieldDefinition &SRCTILEID,
          const ArchInfo::TLinkFieldDefinition &TILEADDR0,
          const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XPRDS", numWords, valid, validFields),
        XADDR("XADDR", XADDR), LENGTH("LENGTH", LENGTH), FMT("FMT", FMT),
        CC("CC", CC), LAST("LAST", LAST), PEN("PEN", PEN),
        SRCTILEID("SRCTILEID", SRCTILEID), TILEADDR0("TILEADDR0", TILEADDR0) {}
} XPRDS; // end of TLink packet

class XPRDL_t : public ArchInfo::TLinkPacket {
private:
  static void *operator new(size_t) = delete;
  static void *operator new[](size_t) = delete;

public:
  const ArchInfo::TLinkField XADDR;
  const ArchInfo::TLinkField LENGTH;
  const ArchInfo::TLinkField FMT;
  const ArchInfo::TLinkField CC;
  const ArchInfo::TLinkField LAST;
  const ArchInfo::TLinkField PEN;
  const ArchInfo::TLinkField SRCTILEID;
  const ArchInfo::TLinkField TILEADDR0;
  XPRDL_t(int numWords, bool valid, const ArchInfo::TLinkFieldDefinition &XADDR,
          const ArchInfo::TLinkFieldDefinition &LENGTH,
          const ArchInfo::TLinkFieldDefinition &FMT,
          const ArchInfo::TLinkFieldDefinition &CC,
          const ArchInfo::TLinkFieldDefinition &LAST,
          const ArchInfo::TLinkFieldDefinition &PEN,
          const ArchInfo::TLinkFieldDefinition &SRCTILEID,
          const ArchInfo::TLinkFieldDefinition &TILEADDR0,
          const std::vector<const ArchInfo::TLinkField *> validFields)
      : TLinkPacket("XPRDL", numWords, valid, validFields),
        XADDR("XADDR", XADDR), LENGTH("LENGTH", LENGTH), FMT("FMT", FMT),
        CC("CC", CC), LAST("LAST", LAST), PEN("PEN", PEN),
        SRCTILEID("SRCTILEID", SRCTILEID), TILEADDR0("TILEADDR0", TILEADDR0) {}
} XPRDL; // end of TLink packet
