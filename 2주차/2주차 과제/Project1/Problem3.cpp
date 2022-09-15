#include <iostream>

// Print the factorial of 10 (10!)
void main()
{
	int n = 10; // 구하고 싶은 팩토리얼의 수

	// Problem #3-1 : use for loop
	int result_1 = 1; //팩토리얼 시작 값 (문제 3-1)
	for (int i = 1; i < n + 1; ++i) // i를 1 부터 시작하여 1씩 증가하여 10 까지만 for 반복문이 작동
		result_1 *= i; // 1부터 차례대로 i를 전부 곱하여 팩토리얼을 구함
	std::cout << "Problem #3-1" << std::endl;
	std::cout << n << "! = " << result_1 << std::endl; // 결과 출력

	std::cout << std::endl;

	// Problem #3-2 : use while loop
	int result_2 = 1, p = 1; //팩토리얼 시작 값 (문제 3-2), while 반복문에 사용할 p를 1로 정의
	while (p < n + 1) {
		result_2 *= p; // 1부터 차례대로 p를 전부 곱하여 팩토리얼을 구함
		p++;
	}
	std::cout << "Problem #3-2" << std::endl;
	std::cout << n << "! = " << result_2 << std::endl; // 결과 출력

}