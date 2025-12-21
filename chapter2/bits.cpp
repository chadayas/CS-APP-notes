#include<iostream>
#include<vector>
#include<cmath>
#include<bitset>
int find_decimal(std::vector<int> &b_num){
	int len = b_num.size();
	int i;
	int dec_num = 0;	
	for (i = len; i != 0; i--){
		dec_num += b_num[i] * std::pow(2,(i-1));
	}
	return dec_num;




}

int main(){
	std::vector<int> b_vec = {1,0,0,0};
	std::cout << find_decimal(b_vec) << std::endl;

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
