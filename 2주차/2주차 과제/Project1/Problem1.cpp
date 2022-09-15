#include <iostream>

// Get two numbers and print the sum of two numbers
void main() 
{
	int a, b; // 입력 받을 두 수를 정의 
	std::cout << "Input two numbers" << std::endl;
	std::cin >> a >> b; // 두 수를 입력 받음
	std::cout << a << " + " << b << " = " << a + b << std::endl; // 입력 받은 두 수의 합을 출력
}