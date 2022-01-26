
#include <iostream>


class Car {

	int speed;
	static int cnt;

public:


	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; } // 인스턴스 메소드
									// 반드시 객체가 있어야 호출가능하다.
									// c1.get_count()

	static int get_count() { return cnt; } // 정적(class) 메소드
										   // 객체 없이 호출가능한 멤버함수(메소드)
										   // 일반함수랑 뭐가다르지?? =>> Car class 의 private 에 접근 가능한 일반 함수

};


int Car::cnt = 0; // private 인데 왜 되요!?
				  // 문법상 허용해줍니다
				  
int main()
{
	std::cout << Car::get_count() << std::endl;


	Car c1;
	Car c2;

	// static 멤버 함수는 2가지 방법으로 사용가능합니다.
	std::cout << Car::get_count() << std::endl; // <== 권장
	std::cout << c1::get_count() << std::endl;

	// std::cout << c1::get_count() << std::endl;
	


}

