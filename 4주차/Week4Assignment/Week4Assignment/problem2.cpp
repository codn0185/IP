#include <iostream>

int addition_1(int a, int b) { return a + b; } // ���� ���� ���� a, b�� ���� a + b �� �����Ѵ�.
void addition_2(int a, int b, int* result) { *result = a + b; } // result�� result2�� �ּ��̹Ƿ�, �� *result�� reult2�� ��Ÿ����.
void addition_3(int a, int b, int& result) { result = a + b; } // result�� result3�� reference�̹Ƿ�, result�� result3�� ��Ÿ����. 

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

