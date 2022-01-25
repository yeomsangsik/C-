
#include <iostream>

class Point {

	int x = 0;
	int y = 0;

public:
	Point() { std::cout << "Point()" << std::endl; }

	// 소멸자 : "~클래스 이름" 모양의 함수
	//          인자와 반환값이 모두 없다.
	//          한개만 만들 수 있다.
	//          객체가 파괴될때 호출된다.
	// 
	//			생성자에서 DB 접근 등의 자원을 사용 하는 경우가 생길때, 연결해지를 위해 사용가능
	//			필요한 경우만 만들면 되고, 필요없다면 만들필요 없다

	~Point(){ std::cout << "~Point()" << std::endl; } 

};

int main()
{
	{
		Point pt;

	} // <= pt 파괴
    std::cout << "----------" << std::endl;

}