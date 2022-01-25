#include <iostream>

class Point {

public:
	int x;
	int y;

	// 멤버 초기화 리스트는 멤버 선언 순서 대로 작성 되어야 함
	// 컴파일러는 항상 이를 무시하고 멤버 선언 순서 대로 초기화 하기 때문에 아래의 코드는 잘못된 코드 

	Point() : y(0), x(y) {} // undefined
							// "표준 문서에는 사용하지말라고만 되어있고
							// 사용하면 어떻게 된다고는 정의한 적 없는것"
							// 컴파일러마다 현상이 다르다.
};

int main() {

	Point p1;

	std::cout << p1.x << std::endl;
	std::cout << p1.y << std::endl;

}