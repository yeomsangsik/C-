#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 사용자가 생성자를 만들지 않으면, 컴파일러가 하나 만들어준다 -> 인자가 없는 생성자
	// 이를 디폴트 생성자라고 합니다.
	// 컴파일러가 제공하는 생성자는 기본적으로는 아무 일도 하지않습니다.
	// 가상함수가 있는 경우 "가상함수 테이블 초기화" 를 합니다.

	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};
int main()
{
	// 모든 객체는 생성되면 반드시 생성자가 호출되어야합니다.

	Point p1;			// 1번생성자 호출
//	Point p2(1, 2);		// 2번생성자 호출

	Point arr1[5]; // 1번 생성자 5회 호출
	Point arr2[5] = { {1,2,}, {0,0,} }; // 2번 생성자 2회, 1번 생성자 3회

	Point* p; // 객체 생성 아님.. 생성자 호출 안됨.

	p = static_cast<Point*>(malloc(sizeof(Point))); // 생성자 호출 안됨
													// Point 타입전달이 아닌 "크기8" 전달

	free(p);

	// new는 생성자 호출됨 -80 page

	p = new Point;
	delete p;

	p = new Point(1,2);
	delete p;

	// C++11 부터는 아래 표기도 가능
	Point* p3(1,1); // C++98 시절
	Point* p5{1,1}; // C++11 시절
	Point* p6 = {1, 1}; // C++11 시절

}