
#include <iostream>


class Car {

	int speed;
	static int cnt;

public:


	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; } // �ν��Ͻ� �޼ҵ�
									// �ݵ�� ��ü�� �־�� ȣ�Ⱑ���ϴ�.
									// c1.get_count()

	static int get_count() { return cnt; } // ����(class) �޼ҵ�
										   // ��ü ���� ȣ�Ⱑ���� ����Լ�(�޼ҵ�)
										   // �Ϲ��Լ��� �����ٸ���?? =>> Car class �� private �� ���� ������ �Ϲ� �Լ�

};


int Car::cnt = 0; // private �ε� �� �ǿ�!?
				  // ������ ������ݴϴ�
				  
int main()
{
	std::cout << Car::get_count() << std::endl;


	Car c1;
	Car c2;

	// static ��� �Լ��� 2���� ������� ��밡���մϴ�.
	std::cout << Car::get_count() << std::endl; // <== ����
	std::cout << c1::get_count() << std::endl;

	// std::cout << c1::get_count() << std::endl;
	


}

