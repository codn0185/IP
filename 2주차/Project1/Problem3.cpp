#include <iostream>

// Print the factorial of 10 (10!)
void main()
{
	int n = 10; // ���ϰ� ���� ���丮���� ��

	// Problem #3-1 : use for loop
	int result_1 = 1; //���丮�� ���� �� (���� 3-1)
	for (int i = 1; i < n + 1; ++i) // i�� 1 ���� �����Ͽ� 1�� �����Ͽ� 10 ������ for �ݺ����� �۵�
		result_1 *= i; // 1���� ���ʴ�� i�� ���� ���Ͽ� ���丮���� ����
	std::cout << "Problem #3-1" << std::endl;
	std::cout << n << "! = " << result_1 << std::endl; // ��� ���

	std::cout << std::endl;

	// Problem #3-2 : use while loop
	int result_2 = 1, p = 1; //���丮�� ���� �� (���� 3-2), while �ݺ����� ����� p�� 1�� ����
	while (p < n + 1) {
		result_2 *= p; // 1���� ���ʴ�� p�� ���� ���Ͽ� ���丮���� ����
		p++;
	}
	std::cout << "Problem #3-2" << std::endl;
	std::cout << n << "! = " << result_2 << std::endl; // ��� ���

}