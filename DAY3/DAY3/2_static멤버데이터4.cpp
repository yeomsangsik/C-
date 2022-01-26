
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

// 방법 3. static member data (정적 멤버 데이터)

// 클래스당 한개씩 사용하는 전역변수로 볼 수 있습니다.
// 접근지정자를 사용가능한 전역변수



class Car {

	int speed;      // 객체당 한개, "인스턴스 필드(멤버데이터)" 라는 용어 사용
public:

	static int cnt; // 모든 (Car)객체가 공유. "클래스 필드(멤버데이터) 라는 용어사용

	Car() { ++cnt; }
	~Car() { --cnt; }

	int getSpeed() { return speed; }

};
// static 멤버 데이터는 외부 선언이 필요합니다. 초기화도 여기서.


class Truck {

	int speed;
public:

	static int cnt; // static 멤버 데이터
					// = 0 등으로 초기화 안됩니다.

	Truck() { ++cnt; }
	~Truck() { --cnt; }

	int getSpeed() { return speed; }

};

int Car::cnt = 0; // 객체 내부의 메모리에서 잡히지않고, 전역변수 메모리 공간에 잡힌다.
int Truck::cnt = 0; // 객체 내부의 메모리에서 잡히지않고, 전역변수 메모리 공간에 잡힌다.

int main()
{

}

