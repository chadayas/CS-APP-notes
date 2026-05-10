#include<iostream>

int main(){

	union Chad{
		char pops[3] = "Dad";
		char moms[3] = "Mom";
	};
	
	Chad chad;
	std::cout << chad.pops << std::endl;
	
}
