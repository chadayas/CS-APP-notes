# Information Representation
Computers represent information in base-2 1 and 0. This makes building more complicated 
structures on top simpler. the 0 and 1 digits associated with computer data is called
bits, a more consie way to information is stored is with bytes, 8 bits. Humans use base-10
to represent numbers. A single byte in bits ranges from 00000000 to 11111111 in decimal
or base-10 it is 0 to 255. Machine code is a filled of arrays of bytes representing 
program data (types, structs, and etc).  

# Hexadecimal numbers
Hex numbers are base-16, we use this to represent bytes since using decimal or bit 
representation is cumbersome. Hex numbers range from numbers 1-9 and letters A-F. Four
bits can represent a single number so 0000 is 0 and 1000 is 8.
```
_______________________
Decimal | Binary | Hex  
_______________________
0       |  0000  |  0   
1       |  0001  |  1   
2       |  0010  |  2   
3       |  0011  |  3
4       |  0100  |  4
5       |  0101  |  5
6       |  0110  |  6
7       |  0111  |  7
8       |  1000  |  8
9       |  1001  |  9
10      |  1010  |  A
11      |  1011  |  B
12      |  1100  |  C
13      |  1011  |  D
14      |  1110  |  E
15      |  1111  |  F
______________________
```

## Practice problem 2.1
*0x25B9D2 to binary*
Each hex number is a 4 bits starting from the rightmost side 
A: `000101011011100111010001`
*binary 1010111001001001 to hexadecimal*
Start from rightmost side
A: `0xAE49`
*binary 11 0010 0010 1101 1001 0110 to hexadecimal*
Start from rightmost side
A: `0x322D95`

# Data Sizes
Word size, amount of bits a CPU can process or the amount of pointer data. A computer
usually has a 32-bit or 64-bit word size, newer technologies are usually 64-bit. 
pointer data contains the virtual addresses, the size of this virtual address is 
$2^w - 1$ on a $w$-bit machine.

## Byte ordering
Two conventions of byte ordering occuring from the placement of most significant bit.
little endian is ordered where the least significant bit is first and big endian is when
the most significant bit it first.

