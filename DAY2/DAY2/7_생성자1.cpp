#include <iostream>

class Bike {

private:
	int speed;
	int gear;

public:
	// ������ : ��ü�� �����ϸ� �ڵ����� ȣ��Ǵ� �Լ� 
	//   Ư¡ : Ŭ���� �̸��� ����
	//          ��ȯ Ÿ���� ���� �ʰ�, ��ȯ�� ���� ����.
	//		    ���ڴ� �־ �ǰ�, ��� �ȴ�.

	Bike()
	{
		std::cout << "Bike()" << std::endl;
		speed = 20;
		gear = 10;
	}
};

int main() 
{

//	Bike b = { 30, 10 }; // �����Ͱ� public�� ������ �̷��� �ʱ�ȭ �����մϴ�.
						 // �ᱹ, class �� struct�� (����) �����ϹǷ�
						 // ������, private �� �ִٸ� ����

	Bike b;
//	b.init();
}
