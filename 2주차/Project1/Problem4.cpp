#include <iostream>

// Get the age of A and B, then determine the older one
void main()
{
	int a, b;
	std::cout << "Enter an age of A: ";
	std::cin >> a; // A의 나이를 입력받음
	std::cout << "Enter an age of B: ";
	std::cin >> b; // B의 나이를 입력받음

	if (a < b) std::cout << "B is order than A" << std::endl; // A의 나이가 B보다 작을 때
	else if (a > b) std::cout << "A is order than B" << std::endl; // B의 나이가 A보다 작을 때
	else if (a == b) std::cout << "A and B are the same age" << std::endl; // A와 B의 나이가 같을 때
}