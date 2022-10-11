#include <iostream>

using namespace std;


void printMean(int* grades, int n) {
	// ��� ������ ����
	float sum = 0.;
	for (int i = 0; i < n; i++)
		sum += grades[i]; 

	// ���
	float mean = sum / n;
	cout << "Mean: " << mean;
}


void main() {
	// �л� �� �Է�
	int n;
	cout << "How many students ? ";
	cin >> n;

	// �迭�� ���� �Է�
	int* grades = new int[n];
	for (int i = 0; i < n; i++) {
		int mark;
		cout << "Input Grade for Student" << (i + 1) << "? : ";
		cin >> mark;
		grades[i] = mark;
	}

	// �Լ� ����
	printMean(grades, n);
}