#include <iostream>

// Find size of fundamental data types
void main()
{
	std::cout << "Find size of fundamental data types" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	// sizeof를 사용하여 각 타입의 크기를 구해 출력
	std::cout << "The sizeof(char) is: " << sizeof(char) << " bytes" << std::endl;
	std::cout << "The sizeof(short) is: " << sizeof(short) << " bytes" << std::endl;
	std::cout << "The sizeof(int) is: " << sizeof(int) << " bytes" << std::endl;
	std::cout << "The sizeof(long) is: " << sizeof(long) << " bytes" << std::endl;
	std::cout << "The sizeof(long long) is: " << sizeof(long long) << " bytes" << std::endl;
	std::cout << "The sizeof(float) is: " << sizeof(float) << " bytes" << std::endl;
	std::cout << "The sizeof(double) is: " << sizeof(double) << " bytes" << std::endl;
	std::cout << "The sizeof(long double) is: " << sizeof(long double) << " bytes" << std::endl;
	std::cout << "The sizeof(bool) is: " << sizeof(bool) << " bytes" << std::endl;
}