#include <iostream>

// Get the age of A and B, then determine the older one
void main()
{
	int a, b;
	std::cout << "Enter an age of A: ";
	std::cin >> a; // A�� ���̸� �Է¹���
	std::cout << "Enter an age of B: ";
	std::cin >> b; // B�� ���̸� �Է¹���

	if (a < b) std::cout << "B is order than A" << std::endl; // A�� ���̰� B���� ���� ��
	else if (a > b) std::cout << "A is order than B" << std::endl; // B�� ���̰� A���� ���� ��
	else if (a == b) std::cout << "A and B are the same age" << std::endl; // A�� B�� ���̰� ���� ��
}