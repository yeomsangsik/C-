
#include <iostream>

// C++11
class Car {

	int speed = 0;		// 인스턴스 멤버데이터는 C++11 부터 필드초기화 가능
//	static int cnt= 0;  // error. static 멤버 데이터는 반드시 외부 선언에서
						// 초기화 해야한다.

	static int cnt;     // 반드시 외부 선언 필요하고, 초기화도 외부선언에서.

public:

	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};

int Car::cnt = 0; 


// C++17 에서 "inline static" 이라는 문법 등장
class Car {

	int speed = 0;		
	inline static int cnt= 0;  // 외부 선언 필요 없고, 여기서 초기화도 가능
						
public:

	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};


int main()
{


}

