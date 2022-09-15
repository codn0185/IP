#include <iostream>


// Draw following patterns by using while loop (Pyramid, Diamond)
void main()
{
	// Problem #5-1 
	// make Pyramid
	int height = 5, i = 1;
	while (i <= height) {
		std::string star(i * 2 - 1, '*'); // ��µǴ� �� ���� ��� �ִ� *�� ����
		std::string blank(height - i, ' '); // ��µǴ� �� ���� ���ʿ� �ִ� �� ������ ����
		std::cout << blank << star << blank << std::endl; // �� ���� ���
		i++;
	}

	std::cout << "\n\n" << std::endl;

	// Problem #5-2
	// make Diamond
	int half_height = 6, p = 1; // half_height: �߾Ӻ��� ���κб����� ����
	// ���̾Ƹ���� ���κ� (�߾� ����)
	while (p <= half_height) {
		if (p == 1) { // �� ���κ��� �� (*�� �� �Ѱ��� ���� ���ǹ����� ����)
			std::string side_blank(half_height - p, ' '); // * ���ʿ� �ִ� �� ������ ����
			std::cout << side_blank << "*" << side_blank << std::endl; // �� ���� ���
		}
		else { // �� ���κ��� �ƴ� �� (*�� �� ��)
			std::string side_blank(half_height - p, ' '); // �� ���� �� ���� �ִ� �� ������ ����
			std::string middle_blank(p * 2 - 3, ' '); // �� ���� * ���̿� �ִ� ������ ����
			std::cout << side_blank << "*" << middle_blank << "*" << side_blank << std::endl; // �� ���� ���
		}
		p++;
	}
	p -= 1; // �߾��� �̹� ��������� ������ 1 ���� �߾� ����
	// ���̾Ƹ���� �Ʒ��κ� (�߾� ����)
	while (p >= 1) {
		if (p == 1) { // �� �Ʒ��κ��� �� (*�� �� �Ѱ��� ���� ���ǹ����� ����)
			std::string side_blank(half_height - p, ' '); // * ���ʿ� �ִ� �� ������ ����
			std::cout << side_blank << "*" << side_blank << std::endl; // �� ���� ���
		}
		else { // �� �Ʒ��κ��� �ƴ� �� (*�� �� ��)
			std::string side_blank(half_height - p, ' '); // �� ���� �� ���� �ִ� �� ������ ����
			std::string middle_blank(p * 2 - 3, ' '); // �� ���� * ���̿� �ִ� ������ ����
			std::cout << side_blank << "*" << middle_blank << "*" << side_blank << std::endl; // �� ���� ���
		}
		p--;
	}
}