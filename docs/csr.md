Document status: under construction!
TODO:
- Clone the rest of the structures and definitions from the ISA documentation to this file
- Document as many fields as possible

# Control and Status registers

From the Graphcore Tile Vertex ISA 1.2.3:

> The *Control and Status Register* sets (CSRs) form part of an execution context. They present pertinent information related to the status of an execution context as well as controlling specific execution behaviour. CSRs are accessed via a specific CSR address space, which is split into 2 halves:
> - The lower CSR space, spanning the address range from 0 to 255 (inclusive): Control and Status registers within this region can be read using the get instruction. Some Control and Status registers in this region can be written using the put instructions
> - The upper CSR space, spanning the address range from 256 to 511 (inclusive): Control and Status registers within this region can be read using the uget instruction. Some Control and Status registers in this region can be written using the uput instruction.

Unfortunately, the Tile Vertex ISA doesn't describe all the CSRs, particularly some that are only useful for the low-level implementation of the supervisor and SDK. But we want all of those, so we're making our own docs!

## Common CSRs

NOTE: in `iai_ipu.h`, common CSRs have both a supervisor and a worker component, but they appear to be identical in both cases.

### `$PC (0x00)`

Documented, see Graphcore ISA docs.

### `$DBG_DATA (0x70)`

Documented (as part of the worker CSR), see Graphcore ISA docs.

### `$DBG_BRK_ID (0x71)` 

Documented (as part of the worker CSR), see Graphcore ISA docs.

## Supervisor CSRs

### `$SSR (0x01)`

Unknown function. NOTE: seems to store a bunch of flags, also referenced by the documentation a few times. Potentially: supervisor state register

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|LC|[0]|???|???|Unknown|
|GC|[1]|???|???|Unknown|
|ANS|[2]|???|???|Unknown|
|RAERR|[3]|???|???|Unknown|
|ETYPE|[7:4]|???|???|Unknown|
|PERR|[9]|???|???|Unknown|

### `$CR (0x02)`

Unknown function.

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|LC_CLR|[0]|???|???|Unknown|
|LC_SET|[1]|???|???|Unknown|
|ZCWEI|[2]|???|???|Unknown|

### `$TILE_ID (0x03)`

The tile ID that the supervisor is running on. Read-only, presumably.

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|TILE_ID|[10:0]|???|???|Unknown|

### `$FP_ICTL (0x20)`

Documented, see Graphcore ISA docs.

### `$WORKER0_BASE (0x21)`
### `$WORKER1_BASE (0x22)`
### `$WORKER2_BASE (0x23)`
### `$WORKER3_BASE (0x24)`
### `$WORKER4_BASE (0x25)`
### `$WORKER5_BASE (0x26)`

Holds the `$WORKER_BASE` CSR for each individual worker (see Graphcore's docs). Docs say that each worker's `$WORKER_BASE` is a read alias of this. Unclear if these are writable by any means other than the `run` and `runall` instructions.

### `$CCCSLOAD (0x50)`

Documented, see Graphcore ISA docs.

### `$SCOUNT_L (0x60)`
### `$SCOUNT_U (0x61)`

Documented (as part of the worker CSR), see Graphcore ISA docs.

### `$CTXT_STS (0x72)`

Context status for the supervisor and all of its workers, alongside some error flags. Documented, see Graphcore's ISA docs. 

### `$DBG_CTL (0x73)`

Unknown function. Speculation: an enable/disable for "debugging channels" (individual units that can set breakpoints?)

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|CHAN_EN|[1:0]|???|???|Unknown|

### `$DBG_ECSR (0x74)`

Unknown function. Probably related to all the other debugging stuff.

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| EPCM       | [0]       | ???         | ???              | Unknown     |
| CTXT       | [3:1]     | ???         | ???              | Unknown     |
| BOS        | [5]       | ???         | ???              | Unknown     |

### `$DBG_ECLR (0x75)`

Unknown function. Probably related to debug, responsible for clearing some sort of flag?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|CLR|[6:0]|???|???|Unknown|

### `$DBG_IBRK0_CTL (0x80)`

Unknown function. Probably a control register for setting instruction breakpoints.

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|ENS|[0]|???|???|Unknown|
|ENW|[1]|???|???|Unknown|
|EVM|[2]|???|???|Unknown|

### `$DBG_IBRK0_PC (0x81)`

Unknown function. Probably defines the program counter to break at for instruction breakpoints.

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|ADDR|[18:2]|???|???|Unknown|

### `$DBG_IBRK0_VERT (0x82)`

Unknown function. Related to its sister registers `DBG_IBRK0`.

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| ADDR       | [18:2]    | ???         | ???              | Unknown     |

### `$DBG_DBRK0_CTL (0x90)`

Unknown function. Probably a control register for setting data breakpoints.

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|MLD|[0]|???|???|Unknown|
|MSTNI|[1]|???|???|Unknown|
|SIC|[2]|???|???|Unknown|
|SIZE|[5:3]|???|???|Unknown|
|MDNR|[6]|???|???|Unknown|
|CTXT|[21:15]|???|???|Unknown|

### `$DBG_DBRK0_BASE (0x91)`

Unknown function. Probably related to setting data breakpoints.

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| ADDR       | [18:0]    | ???         | ???              | Unknown     |

###  `$DBG_DBRK0_SIDA (0x92)`

Unknown function. Probably related to setting data breakpoints.

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|VALUE|[18:0]|???|???|Unknown|

### `$INCOMING_MUX (0xa0)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|TILE_ID|[10:0]|???|???|Unknown|

### `$INCOMING_MUXPAIR (0xa1)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|TILE_ID|[10:0]|???|???|Unknown|

### `$INCOMING_DELTA (0xa2)`

Unknown function. Probably related to communications?

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| ADDR       | [18:2]    | ???         | ???              | Unknown     |

### `$INCOMING_FORMAT (0xa3)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|VALUE|[1:0]|???|???|Unknown|

### `$INCOMING_BASE (0xa4)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|ADDR|[18:2]|???|???|Unknown|

### `$INCOMINGS_SINIT (0xa5)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|ADDR|[18:2]|???|???|Unknown|

### `$INCOMING_DCOUNT (0xa6)`

Unknown function. Probably related to communications?

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| VALUE      | [16:0]    | ???         | ???              | Unknown     |

### `$OUTGOING_BASE (0xa7)`

Unknown function. Probably related to communications?

| Field name | Bit field | Reset value | Access semantics | Description |
| ---------- | --------- | ----------- | ---------------- | ----------- |
| ADDR       | [18:2]    | ???         | ???              | Unknown     |

### `$OUTGOING_DELTA (0xa8)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|ADDR|[18:2]|???|???|Unknown|

### `$EXCHANGE_CTL (0xa9)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|ACTV|[0]|???|???|Unknown|
|SEV|[1]|???|???|Unknown|
|SWV|[2]|???|???|Unknown|
|S64|[3]|???|???|Unknown|
|ATMC|[4]|???|???|Unknown|

### `$ANS_DCOUNT (0xaa)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|VALUE|[18:0]|???|???|Unknown|

### `$EXCHANGE_ADJ (0xab)`

Unknown function. Probably related to communications?

|Field name|Bit field|Reset value|Access semantics|Description|
|-|-|-|-|-|
|COFF|[3:0]|???|???|Unknown|
|SEWS|[4]|???|???|Unknown|

## Worker CSRs

### `$WSR (0x01)`

Documented, see Graphcore's ISA docs. 

### `$VERTEX_BASE (0x02)`

Documented, see Graphcore's ISA docs. 

### `$WORKER_BASE (0x03)`

Documented, see Graphcore's ISA docs. 

### `$REPEAT_COUNT (0x04)`

Documented, see Graphcore's ISA docs. 

### `$REPEAT_FIRST (0x05)`

Documented, see Graphcore's ISA docs. 

### `$REPEAT_END (0x06)`

Documented, see Graphcore's ISA docs. 

### `$COUNT_L (0x60)`

Documented, see Graphcore's ISA docs. 

### `$COUNT_U (0x61)`

Documented, see Graphcore's ISA docs. 

### `$FP_STS (0x100)`

Documented, see Graphcore's ISA docs. 

### `$FP_CLR (0x101)`

Documented, see Graphcore's ISA docs. 

### `$FP_CTL (0x102)`

Documented, see Graphcore's ISA docs. 

### `$PRNG_0_0 (0x103)`

Documented, see Graphcore's ISA docs. 

### `$PRNG_0_1 (0x104)`

Documented, see Graphcore's ISA docs. 

### `$PRNG_1_0 (0x105)`

Documented, see Graphcore's ISA docs. 

### `$PRNG_1_1 (0x106)`

Documented, see Graphcore's ISA docs. 
