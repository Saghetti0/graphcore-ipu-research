# Tile Debug Interface

The Tile Debug Interface (TDI) is a way for a host inspect and modify the state of a tile. In the library `libgraphcore_target_access.a`, there's a class called `GraphcoreDeiceAccessDebugLLD` with functions `readTDIRegister(tile_id, register)` and `writeTDIRegister(tile_id, register, value)`. These registers can do all sorts of interesting things, including arbitrary code execution!

Observations
- `TDI_CTXT_STS` mirrors `CSR_S_CTXT_STS`
- `TDI_DBG_RBRK` does not have an associated csr, but trace amounts are in the documentation for "RBRK" - "Retriement Break"
- `TDI_DBG_IEXEC` does not have an associated csr, but it exists in a *very* interesting place in the docs(!!) - (see Tile ISA 1.2.3 section 2.6.2)
- `TDI_DBG_IOWNER` has no clear info
- `TDI_DBG_ECSR` mirrors `CSR_S_DBG_ECSR`
- `TDI_DBG_ECLR` mirrors `CSR_S_DBG_ECLR`
- `TDI_DBG_DATA` mirrors `CSR_C_DBG_DATA`
- `TDI_TDI_STS` and `TDI_TDI_CLR` have no clear info
- `TDI_INCOMING_DCOUNT` mirrors `CSR_S_INCOMING_DCOUNT`
- `TDI_EXCHANGE_CTL` mirrors `CSR_S_EXCHANGE_CTL`
- `TDI_TDI_CTL` has no clear info associated

---

**Theories**
- Inject instructions into a tile! Write the context ID (an integer between 0 and 6, where 0 is the supervisor and 1-6 are the workers) into `TDI_DBG_IOWNER`, and then write a 32-bit instruction word into `TDI_DBG_IEXEC`. This will inject the instruction into the specified context. Only works if the context is either in the 
- Various abbreviations
	- IBRK -> instruction break
	- DBRK -> data break
	- RBRK -> retirement break
