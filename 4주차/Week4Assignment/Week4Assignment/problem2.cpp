#include <iostream>

int addition_1(int a, int b) { return a + b; } // 전달 받은 정수 a, b를 통해 a + b 를 리턴한다.
void addition_2(int a, int b, int* result) { *result = a + b; } // result는 result2의 주소이므로, 즉 *result는 reult2를 나타낸다.
void addition_3(int a, int b, int& result) { result = a + b; } // result는 result3의 reference이므로, result는 result3을 나타낸다. 

int main() {
	int result1, result2, result3;
	result1 = addition_1(3, 4);
	addition_2(5, 6, &result2);
	addition_3(7, 8, result3);
	std::cout << result1 << std::endl;
	std::cout << result2 << std::endl;
	std::cout << result3 << std::endl;
	return 0;
}

