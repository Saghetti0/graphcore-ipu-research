big one: look back at all the assumptions we made in our docs, test them, and update them
- all the tdi "mirrors" - are they actually just mirrors? how does writing to them work?
- the way that bitfield clears work (write 1s to clear, 0s to leave untouched)
- what are master/slave global sync zones?
	- why does the host have two interrupts for the same global sync zone?
	- do they fire differently?
- how does sync work?
	- what the hell is the ANS sync zone? is it related to the sans instruction?
	- does invoking sync on an external sync zone require the host to do something?
- what are the arguments to send?

less guess-focused tasks
- do some light reading (4.1.6 Memory)
- ~~document all the csrs~~
- figure out how to send code to the ipu card
	- see target access lib for that, it has everything required to interface with a card
- figure out how sending between tiles works
- figure out debugging on the ipu card
- ~~try compiling with the graphcore toolchain~~
- ~~write test programs that link against the core libraries, and disassemble them to figure out how stuff like communication actually works~~

future fun stuff:
- ~~extend llvm to support the spooky secret instructions (sync, send, sans)~~
	- ~~sync seems to be for waiting on execution barriers. you can sync with SYNCZONE_LOCAL to wait for all workers to complete(?)~~
- reverse engineer the icu!
