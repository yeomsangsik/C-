#include <iostream>


class Test {

	int data;
public:
	void f1(int n )			// void f1(Test* this) 로 컴파일시 변경
	{
		std::cout << this << std::endl;
		data = 10;     // this -> data = 10 으로 변경
	}
	static void f2(int n)	// 컴파일 해도 void f2() 입니다.
	{
		std::cout << this << std::endl; // error. 따라서 this 없습니다.
		data = 10;						// this -> data = 10 으로 변경해야 하는데..
									    //			this 가 없습니다.
									    // 그래서 static 멤버 함수에서는
									    // 인스턴스 멤버에 접근 안됩니다.
	}
};

int main()
{
	Test t;
	t.f1(10);		// f1을 호출하려면 객체가 필요합니다.
					// 컴파일시에 "f1(&t)" 로 변경되는 원리입니다.

	Test::f2(10); // 객체없이 호출했습니다.
				  // 따라서, 컴파일 되어도 "f2()" 입니다.
				  // 즉, 인자가 추가될 수 없습니다.
}