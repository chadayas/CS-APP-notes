

## Programs in different forms
C, created in Bell labs by Dennis Ritchie and others, was created a human readable 
programming language in which compilation transaltes the `.c` source code into other 
types of files.

## Compilation process 

### Preprocesser stage 
the C preprocesser finds and reads the header files `.h` and inserts them into 
into the program code, I say C but im sure this is the same process for C++ as well
(more of what I use). The preprocesser creates a `.i` file for further processing.

### Compilation stage
The `.i` files are translated in to assembly source code files `.s`. assembly is seen 
as a base language for all high level languages as Fortran and C compile to the 
same assembly language. Assembly is a language for CPU instructions, the 
CPU cannot execute from the `.s` file.

### Assembly stage
This is where we get our executable file from, by default it is `a.out` or a name can be
given with `gcc -o <name> file.c`. In this stage the assembly is translated into machine
code, a binary file unreadable for humans but is understood by computers. the output is
an object file , a binary file that includes the instructions in our function `main()`
in our C source code file `.c`.



### Linker stage
Files ending in `.ld` is linker source code, I figured this out while doing the bare metal
project. The linker is self explainatory, as it combines all C source code programs. 
Its easy to think there is just one, but all functions and usage of functions from the 
`<stdio.h>` have their own source code as well.

## Running a program 
We see when running programs different hardware components must communicate in order for
the program to run effieciently. A simple `hello.c` program, where the text "hello, world"
is printed to the shell is a process in itself. The `hello.c` program gets copied from
disk into main memory as data (data is represented in bytes). The instructions of the 
`main()` function in our `hello.c` program is read by the CPU, the string "hello, world\n"
is extracted from the main memory and is printed onto the shell.

## Memory Hierarchy
The processor-memory gap is imminent within modern systems, designers include memory 
connnected to the processor by buses called caches. Caches offer a faster way of storing
instructions used by the CPU at a later time. L1 caches sits closest to the CPU and could
be accessed the fastest. L2 cache also sits near the processor, but may take longer
for the processor to access any of its data, L1 is preferred for faster access. Both 
are implemented with SRAM (static random access memory).
