#include <iostream>
#include <random>

using namespace std;


void main() {
	// 받을 수의 개수 n개 입력
	int n;
	cout << "Input total number of elements: ";
	cin >> n;

	// 0 ~ 99 범위의 정수 생성
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 99);

	// 크기 n으로 동적 할당 후 랜덤 값 할당
	int* ary = new int[n];
	for (int i = 0; i < n; i++)
		*(ary + i) = dis(gen);

	// 출력
	cout << "Random number: ";
	for (int i = 0; i < n; i++) {
		cout << *(ary + i);
		if (i != n - 1)
			cout << ", ";
	}

}