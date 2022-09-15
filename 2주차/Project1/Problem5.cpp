#include <iostream>


// Draw following patterns by using while loop (Pyramid, Diamond)
void main()
{
	// Problem #5-1 
	// make Pyramid
	int height = 5, i = 1;
	while (i <= height) {
		std::string star(i * 2 - 1, '*'); // 출력되는 각 줄의 가운데 있는 *을 구함
		std::string blank(height - i, ' '); // 출력되는 각 줄의 양쪽에 있는 각 공백을 구함
		std::cout << blank << star << blank << std::endl; // 각 줄을 출력
		i++;
	}

	std::cout << "\n\n" << std::endl;

	// Problem #5-2
	// make Diamond
	int half_height = 6, p = 1; // half_height: 중앙부터 윗부분까지의 높이
	// 다이아몬드의 윗부분 (중앙 포함)
	while (p <= half_height) {
		if (p == 1) { // 맨 윗부분일 때 (*이 단 한개라 따로 조건문으로 구분)
			std::string side_blank(half_height - p, ' '); // * 양쪽에 있는 각 공백을 구함
			std::cout << side_blank << "*" << side_blank << std::endl; // 각 줄을 출력
		}
		else { // 맨 윗부분이 아닐 때 (*이 두 개)
			std::string side_blank(half_height - p, ' '); // 각 줄의 양 끝에 있는 각 공백을 구함
			std::string middle_blank(p * 2 - 3, ' '); // 두 개의 * 사이에 있는 공백을 구함
			std::cout << side_blank << "*" << middle_blank << "*" << side_blank << std::endl; // 각 줄을 출력
		}
		p++;
	}
	p -= 1; // 중앙이 이미 만들어졌기 때문에 1 빼서 중앙 제외
	// 다이아몬드의 아랫부분 (중앙 제외)
	while (p >= 1) {
		if (p == 1) { // 맨 아랫부분일 때 (*이 단 한개라 따로 조건문으로 구분)
			std::string side_blank(half_height - p, ' '); // * 양쪽에 있는 각 공백을 구함
			std::cout << side_blank << "*" << side_blank << std::endl; // 각 줄을 출력
		}
		else { // 맨 아랫부분이 아닐 때 (*이 두 개)
			std::string side_blank(half_height - p, ' '); // 각 줄의 양 끝에 있는 각 공백을 구함
			std::string middle_blank(p * 2 - 3, ' '); // 두 개의 * 사이에 있는 공백을 구함
			std::cout << side_blank << "*" << middle_blank << "*" << side_blank << std::endl; // 각 줄을 출력
		}
		p--;
	}
}