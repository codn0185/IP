#include <iostream>

using namespace std;


void printMean(int* grades, int n) {
	// 모든 성적을 더함
	float sum = 0.;
	for (int i = 0; i < n; i++)
		sum += grades[i]; 

	// 평균
	float mean = sum / n;
	cout << "Mean: " << mean;
}


void main() {
	// 학생 수 입력
	int n;
	cout << "How many students ? ";
	cin >> n;

	// 배열에 성적 입력
	int* grades = new int[n];
	for (int i = 0; i < n; i++) {
		int mark;
		cout << "Input Grade for Student" << (i + 1) << "? : ";
		cin >> mark;
		grades[i] = mark;
	}

	// 함수 실행
	printMean(grades, n);
}