#include <iostream>
#define STR_MAX 100

void main() {
	char str[STR_MAX];
	char* p_str = &str[0];
	int count = 0;
	std::cout << "Enter the string: ";
	std::cin.getline(str, STR_MAX); // SeoulTech => 9, C++ Programming => 15

	while (*(p_str + count)) { // 길이 n에 대하여 문자열 str은 str[0]부터 str[n-1]까지 가능하다. 즉 str[0]의 포인터인 p_str에 대해 *(p_str + 0) ~ *(p_str + n - 1)까지 값이 있다. 
		count++; // count를 길이 n까지 늘리는 것을 반복한다.
	}

	std::cout << "Length of string : " << count << std::endl;
}

