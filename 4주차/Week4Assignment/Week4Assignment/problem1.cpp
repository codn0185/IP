#include <iostream>
#define STR_MAX 100

void main() {
	char str[STR_MAX];
	char* p_str = &str[0];
	int count = 0;
	std::cout << "Enter the string: ";
	std::cin.getline(str, STR_MAX); // SeoulTech => 9, C++ Programming => 15

	while (*(p_str + count)) { // ���� n�� ���Ͽ� ���ڿ� str�� str[0]���� str[n-1]���� �����ϴ�. �� str[0]�� �������� p_str�� ���� *(p_str + 0) ~ *(p_str + n - 1)���� ���� �ִ�. 
		count++; // count�� ���� n���� �ø��� ���� �ݺ��Ѵ�.
	}

	std::cout << "Length of string : " << count << std::endl;
}

