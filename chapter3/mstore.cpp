

// Example code from section 3.2, talks about programs encoding and 
// the translation from c/c++ code into machine code.

long mult2(long, long);

void multstore(long x, long y, long *dest) 
{
	long t = mult2(x,y);
	*dest = t;

}
