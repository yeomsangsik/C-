
#include <iostream>

// Car ��ü�� ��� �����Ǿ����� �����ϰ� �ʹ�.
// ��� 1. ��������� ���
//      => ��� �����ʹ� ��ü�� �Ѱ�(110page �׸�) �� �����ȴ�.
//      => ��ü�� ���� �ľ� ����!

class Car {

	int speed;
public:
	int cnt = 0;
	Car()  { ++cnt; }
	~Car() { --cnt; }

	int getSpeed() { return speed; }

};

int main()
{

	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl;
	//std::cout << c1.getSpeed() << std::endl;



}

