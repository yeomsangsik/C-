
#include <iostream>

class Point {

	int x = 0;
	int y = 0;

public:
	Point() { std::cout << "Point()" << std::endl; }

	// �Ҹ��� : "~Ŭ���� �̸�" ����� �Լ�
	//          ���ڿ� ��ȯ���� ��� ����.
	//          �Ѱ��� ���� �� �ִ�.
	//          ��ü�� �ı��ɶ� ȣ��ȴ�.
	// 
	//			�����ڿ��� DB ���� ���� �ڿ��� ��� �ϴ� ��찡 ���涧, ���������� ���� ��밡��
	//			�ʿ��� ��츸 ����� �ǰ�, �ʿ���ٸ� �����ʿ� ����

	~Point(){ std::cout << "~Point()" << std::endl; } 

};

int main()
{
	{
		Point pt;

	} // <= pt �ı�
    std::cout << "----------" << std::endl;

}