#include<iostream>


int main()
{

	float a = 3.14;
	float b = 1e20;
	float c = -1e20;

	float result = (a + b) - c;

	std::cout << result << std::endl;

}
