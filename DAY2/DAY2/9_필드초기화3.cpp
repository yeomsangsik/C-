#include <iostream>

class Point
{
	int x;
	int y;
public:

	//	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom{0, 0}; // 구문 해석시 "함수 모양" 해석해서 실패 (0,0) -> {0,0}
	Point ptTo{0, 0};   // 구문 해석시 "함수 모양" 해석해서 실패  (0,0) -> {0,0}

public:
	Rect() {}
	Rect(int x1, int y1, int x2, int y2) : ptFrom(x1, y1), ptTo(x2, y2)
	{
		std::cout << "Rect()" << std::endl;
	}

};

int main()
{
	Rect rc1;
	Rect rc2(1, 1, 10, 10);
}

// 91 page 아래부분