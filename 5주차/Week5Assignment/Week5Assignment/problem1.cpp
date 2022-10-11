#include <iostream>
#include <random>

using namespace std;


void main() {
	// ���� ���� ���� n�� �Է�
	int n;
	cout << "Input total number of elements: ";
	cin >> n;

	// 0 ~ 99 ������ ���� ����
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 99);

	// ũ�� n���� ���� �Ҵ� �� ���� �� �Ҵ�
	int* ary = new int[n];
	for (int i = 0; i < n; i++)
		*(ary + i) = dis(gen);

	// ���
	cout << "Random number: ";
	for (int i = 0; i < n; i++) {
		cout << *(ary + i);
		if (i != n - 1)
			cout << ", ";
	}

}