big one: look back at all the assumptions we made in our docs, test them, and update them
- all the tdi "mirrors" - are they actually just mirrors? how does writing to them work?
- the way that bitfield clears work (write 1s to clear, 0s to leave untouched)

- ~~document all the csrs~~
- figure out how to send code to the ipu card
- figure out how sending between tiles works
- figure out debugging on the ipu card
- try compiling with the graphcore toolchain 
- write test programs that link against the core libraries, and disassemble them to figure out how stuff like communication actually works

future fun stuff:
- extend llvm to support the spooky secret instructions (sync, send, sans)
- reverse engineer the icu!
