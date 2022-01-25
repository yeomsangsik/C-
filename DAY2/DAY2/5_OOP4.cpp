#include <iostream>

// 핵심 1. 필요한 타입을 먼저 설계하자
// 핵심 2. 상태를 나타내는 데이터와 상태를 가지고 연산을 수행하는 함수를
//         묶어서 타입을 설계하자.
//         C++ 구조체는 함수를 포함할 수 있다.

struct Rect
{

	// 멤버 데이터 (다른 언어는 필드(field) 라고도 합니다.)
	int left;
	int top;
	int right;
	int bottom;


	// 멤버 함수( 메소드(method)라고 합니다.)
	int getArea() // 사실은 int getArea(Rect* this)
	{
		return (right - left) * (top - bottom); // this->right - this->left
	}

	// 결론 : 모든 멤버함수는 컴파일 되면 인자로 Rect* 가 추가되는 원리입니다.
	void draw()  // void draw(Rect* this)
	{
		std::cout << "draw rect" << std::endl;
	}
};


int main()
{
	Rect rc1 = { 1, 1, 10, 10 };
	Rect rc2 = { 2, 2, 5, 5 };

	rc1.getArea(); // C++ 컴파일러가
				   // 객체를 함수 인자 처럼 전달해 줍니다.
				   // getArea(&rc1)



}
