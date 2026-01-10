# Tile Debug Interface

The Tile Debug Interface (TDI) is a way for a host inspect and modify the state of a tile. In the library `libgraphcore_target_access.a`, there's a class called `GraphcoreDeiceAccessDebugLLD` with functions `readTDIRegister(tile_id, register)` and `writeTDIRegister(tile_id, register, value)`. These registers can do all sorts of interesting things, including arbitrary code execution!

## TDI Userland

TODO: figure out how to talk to the driver, and/or how to use `libgraphcore_target_access.a`

## TDI Registers

### `$CTXT_STS (0x00)`

Mirror of [[csr#`$CTXT_STS (0x72)`|$CTXT_SYS]].

### `$DBG_RBRK (0x01)`

Unknown function. Probably related to retirement break, there are some references of it in docs. TODO: fill this out!

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| EN         | [6:0]     | ???         | ???              | Unknown     |
| ATOV       | [30]      | ???         | ???              | Unknown     |
| VM_EN      | [31]      | ???         | ???              | Unknown     |
| ADDR       | [18:2]    | ???         | ???              | Unknown     |

### `$DBG_IEXEC (0x03)`

Used to inject an instruction into an execution context. The context must be either Inactive or Excepted for this to work. Writes to this register trigger the execution (TODO: verify this).

| Field name | Bit field | Reset value | Access semantics | Description                      |
| ---------- | --------- | ----------- | ---------------- | -------------------------------- |
| INST       | [31:0]    | ???         | ???              | The instruction word to execute. |

### `$DBG_IOWNER (0x04)`

Used to select which context to inject instructions into via `$DBG_IEXEC`.

| Field name | Bit field | Reset value | Access semantics | Description                                   |
| ---------- | --------- | ----------- | ---------------- | --------------------------------------------- |
| CTXT       | [2:0]     | ???         | ???              | The context ID to inject an instruction into. |

### `$DBG_ECSR (0x05)`

Some sort of status register? Documentation states that `$DBG_ECSR:BUSY` should exist and should be set to 0 when an injected instruction is done running, but it doesn't show up in the bitfield docs... Maybe a really obscure ipu1 vs ipu2 change?

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| EPCM       | [0]       | ???         | ???              | Unknown     |
| CTXT       | [3:1]     | ???         | ???              | Unknown     |
| BOS        | [5]       | ???         | ???              | Unknown     |

### `$DBG_ECLR (0x06)`

Unknown function. My guess is that this is a register for clearing the exception states for any of the 7 contexts, by writing a 1 to the corresponding bit in CLR.

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| CLR        | [6:0]     | ???         | ???              | Unknown     |

### `$DBG_DATA (0x07)`

Mirror of [[csr#`$DBG_DATA (0x70)`|$DBG_DATA]].

### `$TDI_STS (0x08)`

TDI status register of some sort. Earlier, the documentation probably meant to say `$TDI_STS:BUSY` rather than `$DBG_ECSR:BUSY`.

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| CNQ        | [0]       | ???         | ???              | Unknown     |
| INV        | [1]       | ???         | ???              | Unknown     |
| DBLE       | [2]       | ???         | ???              | Unknown     |
| BUSY       | [3]       | ???         | ???              | Unknown     |

### `$TDI_CLR (0x09)`

Probably a register to allow clearing bits from `$TDI_STS`. Write 1s in this bitfield to clear the corresponding bits, write 0 to leave unchanged.

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| CNQ        | [0]       | ???         | ???              | Unknown     |
| INV        | [1]       | ???         | ???              | Unknown     |
| DBLE       | [2]       | ???         | ???              | Unknown     |

### `$INCOMING_DCOUNT (0x0a)`

Mirror of [[csr#`$INCOMING_DCOUNT (0xa6)`|$INCOMING_DCOUNT]].

### `$EXCHANGE_CTL (0x0b)`

Mirror of [[csr#`$EXCHANGE_CTL (0xa9)`|$EXCHANGE_CTL]].

### `$TDI_CTL (0x0c)`

TDI control register of some sort.

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| SEPEX      | [0]       | ???         | ???              | Unknown     |
| DISRC      | [1]       | ???         | ???              | Unknown     |

---

**Theories**
- Inject instructions into a tile! Write the context ID (an integer between 0 and 6, where 0 is the supervisor and 1-6 are the workers) into `TDI_DBG_IOWNER`, and then write a 32-bit instruction word into `TDI_DBG_IEXEC`. This will inject the instruction into the specified context. Only works if the context is either in the 
- Various abbreviations
	- IBRK -> instruction break
	- DBRK -> data break
	- RBRK -> retirement break
