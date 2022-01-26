
#include <iostream>

// Car 객체가 몇개나 생성되었는지 조사하고 싶다.
// 방법 1. 멤버데이터 사용
//      => 멤버 데이터는 객체당 한개(110page 그림) 가 생성된다.
//      => 객체의 갯수 파악 실패!

// 방법 2. 전역변수 도입
//      => 모든 객체가 공유한다.
//      => Car 객체의 갯수 파악 성공!!
// 
//   그런데..
//   단점1. 전역변수는 누구나 접근 가능하므로 안전하지 않다.
//			Car 이 멤버만 접근할 수 있도록 보호할 수 없을까?
//			Private 를 사용할 수 없을까?? - 전역 변수는 멤버가 아니므로 안됨.

//   단점2. Truck 클래스 갯수도 파악하려면 역시 전역변수 필요
//			'cnt' 말고 다른 이름 필요!! "truck_cnt" 등으로!




int cnt = 0;

class Car {

	int speed;
public:
	
	Car() { ++cnt; }
	~Car() { --cnt; }

	int getSpeed() { return speed; }

};

int main()
{

	Car c1;
	Car c2;

	cnt = 100;// 사용자가 실수했드아아!?

	std::cout << cnt << std::endl;
	//std::cout << c1.getSpeed() << std::endl;



}

