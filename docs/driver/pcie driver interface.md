The driver is provided with the Poplar SDK, and can be built with DKMS. The userland counterpart is libipu_user, which can be found in the cli-tools. The library opens and memory maps several devices for every IPU registered by the driver. libgraphcore_target_access invokes libipu_user for lower level operations, while providing a clean interface for probing for devices, debugging tiles, flashing the [[icu|ICU]]'s firmware, and many other diagnostics features.
%%TODO: point to archival links for both the driver/sdk and the cli tools%%
# devices
these show up with their IPU id in the device name. (/dev/ipu0, /dev/ipu0_ex, and /dev/ipu0_mem)
### `/dev/ipu`
The PCIe config space BAR, always memory mapped by libipu_user. This is the region used for interfacing with the numerous registers defined in the IPUArchInfo type, including [[tdi]]'s registers. 
### `/dev/ipu_ex`
The PCIe exchange space BAR, always memory mapped by libipu_user. Possibly a buffer used to exchange data with individual tiles.
### `/dev/ipu_mem`
The PCIe continuous memory space. Currently unclear what this is meant for.
# ioctls
%%TODO%%

# interrupt signals
A process attached to the driver can listen for signals using POSIX signals. This allows the process to handle exceptions, ICU mesages, and more.
### `PCIE_IPU_EXCEPTION_SIG (44)`

### `PCIE_ICU_DR_SIG (45)`
ICU mailbox doorbell. Sent when there is an ICU message in the queue to be processed.
## `PCIE_HSPGS1E0_SIG (46)`, `PCIE_HSPGS1E1_SIG (47)`
Fired when there is a GS1 sync. Unclear why these are separate, may be the Master-Slave distinction in the [[sync zones]], namely `TEXCH_SYNCZONE_GS1` and `TEXCH_SYNCZONE_GS1_MSR`
## `PCIE_HSPGS2E0_SIG (48)`, `PCIE_HSPGS2E1_SIG (49)`
See [[pcie driver interface#`PCIE_HSPGS1E0_SIG (46)`, `PCIE_HSPGS1E1_SIG (47)`|previous interrupt signals]] for an explanation/speculation.

# ioctls

## `ATTACH (10)`
Attaches the process to the device
## `ATTACH_BUFFER (11)`
Unknown, most likely makes a buffer accessible to 
## `SET_IPU_ID`
Sets a user defined id for the IPU. Sent back to the user in `siginfo.si_int` to allow the user to handle signals from multiple IPUS