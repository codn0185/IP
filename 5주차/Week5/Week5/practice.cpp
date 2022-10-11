#include <iostream>

using namespace std;


void initialize(int list[], int size, int value) {
	for (int i = 0; i < size; i++)
		list[i] = value;
}

int* addElement(int list[], int& size, int value) {
	int* newlist = new int[size + 1];
	for (int i = 0; i < size; i++)
		newlist[i] = list[i];
	if (size)
		delete[] list;
	newlist[size] = value;
	size++;
	return newlist;
}

int* deleteFirst(int list[], int& size) {
	int* newlist = new int[size - 1];
	for (int i = 1; i < size; i++)
		newlist[i - 1] = list[i];
	delete[] list;
	size--;
	return newlist;
}

void print(int list[], int size) {
	std::cout << "[ ";
	for (int i = 0; i < size; i++)
		std::cout << list[i] << " ";
	std::cout << "]" << std::endl;
}

int main() {

	int n;
	cin >> n;
	int* A = new int[n];
	initialize(A, n, 0);
	print(A, n);
	A = addElement(A, n, 5);
	print(A, n);
	A = deleteFirst(A, n);
	print(A, n);
	return 0;
}