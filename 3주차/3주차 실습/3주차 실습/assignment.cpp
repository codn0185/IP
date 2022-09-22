#include <iostream>

int fact(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1); // n부터 시작해서 1이 될 때까지 곱한다 
}

int main() {
	int number;
	std::cout << "Input the number: ";
	std::cin >> number;
	std::cout << "Factorial of " << number << " : " << fact(number) << std::endl;
	return 0;
}

