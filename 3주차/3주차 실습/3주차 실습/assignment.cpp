#include <iostream>

int fact(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1); // n���� �����ؼ� 1�� �� ������ ���Ѵ� 
}

int main() {
	int number;
	std::cout << "Input the number: ";
	std::cin >> number;
	std::cout << "Factorial of " << number << " : " << fact(number) << std::endl;
	return 0;
}

