
#include <iostream>

// 6_����������-74page

// ���� ������ : ��������͸� �ܺο��� ���� �����ϸ� ��ü�� ���°� �Ҿ��� ���� �ִ�.
//				 �����͸� private ������ ���Ƽ� �ܺο� �߸��� ����� ���´�.

// ĸ��ȭ(encapsulation), ���� ����(information hiding)

// ��� ����
// ��ü(object) : ���� �����ϴ� ��� �繰
//				  ���α׷����� ����, �Լ�� ��� Object ����
// ����������
// int n;  // "����" ��� �մϴ�.
// Bike b; // "��ü(object)" ��� �� ����մϴ�.


// C++ ���� Struct vs Class �������� �Ʒ� �� �Ѱ��� �Դϴ�.
// C#, java ���� �ٸ� ���� �������� ���� �����ϴ�.
// struct : ���������� ������ Public  �� ����Ʈ
// class  : ���������� ������ private �� ����Ʈ



// struct Bike
class Bike
{

//private:				// private ���� ������
						// ��� �Լ������� ������ �� �ְ� �ܺο����� ������ �� ����.
	int speed;
	int gear;

public:					// public ���� ������
						// �ܺο��� ���� �����ϴ�.
	void setGear(int value)
	{
		if( value >0)			// ���ڰ��� ��ȿ���� Ȯ���Ŀ�
			gear = value;		// ���¸� �����Ѵ�.
	}


};


int main()
{
	Bike b;
	
//	b.speed = 30; // error
//	b.gear = -10; // error

	b.setGear(-10);



}
