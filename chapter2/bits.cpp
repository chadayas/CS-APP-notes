#include<iostream>

int main(){
	// practice problem 2.12
	// A
	int x = 0x87654321;
	int mask = 0x21;
	int result = x & mask;
	std::cout << std::hex << result << std::endl;
	// B
	int comp = (~x & ~0xff) | (x & mask );
	std::cout << std::hex << comp << std::endl;	
	// C 
	int c = ( x ^ mask )| 0xff;
	std::cout << std::hex << c << std::endl;	

}
