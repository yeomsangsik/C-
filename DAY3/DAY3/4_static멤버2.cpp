
#include <iostream>

// C++11
class Car {

	int speed = 0;		// �ν��Ͻ� ��������ʹ� C++11 ���� �ʵ��ʱ�ȭ ����
//	static int cnt= 0;  // error. static ��� �����ʹ� �ݵ�� �ܺ� ���𿡼�
						// �ʱ�ȭ �ؾ��Ѵ�.

	static int cnt;     // �ݵ�� �ܺ� ���� �ʿ��ϰ�, �ʱ�ȭ�� �ܺμ��𿡼�.

public:

	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};

int Car::cnt = 0; 


// C++17 ���� "inline static" �̶�� ���� ����
class Car {

	int speed = 0;		
	inline static int cnt= 0;  // �ܺ� ���� �ʿ� ����, ���⼭ �ʱ�ȭ�� ����
						
public:

	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};


int main()
{


}

