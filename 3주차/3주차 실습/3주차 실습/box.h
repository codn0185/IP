#ifndef _BOX_CAR_
#define _BOX_CAR_

#include <iostream>

class Box {
public:
	void print() { std::cout << height << " " << width << " " << length; }
	double height, width, length;
};

#endif // !_BOX_CAR_