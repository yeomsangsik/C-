#include <iostream>

class Point
{
	int x;
	int y;
public:
	// ����ڰ� �����ڸ� ������ ������, �����Ϸ��� �ϳ� ������ش� -> ���ڰ� ���� ������
	// �̸� ����Ʈ �����ڶ�� �մϴ�.
	// �����Ϸ��� �����ϴ� �����ڴ� �⺻�����δ� �ƹ� �ϵ� �����ʽ��ϴ�.
	// �����Լ��� �ִ� ��� "�����Լ� ���̺� �ʱ�ȭ" �� �մϴ�.

	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};
int main()
{
	// ��� ��ü�� �����Ǹ� �ݵ�� �����ڰ� ȣ��Ǿ���մϴ�.

	Point p1;			// 1�������� ȣ��
//	Point p2(1, 2);		// 2�������� ȣ��

	Point arr1[5]; // 1�� ������ 5ȸ ȣ��
	Point arr2[5] = { {1,2,}, {0,0,} }; // 2�� ������ 2ȸ, 1�� ������ 3ȸ

	Point* p; // ��ü ���� �ƴ�.. ������ ȣ�� �ȵ�.

	p = static_cast<Point*>(malloc(sizeof(Point))); // ������ ȣ�� �ȵ�
													// Point Ÿ�������� �ƴ� "ũ��8" ����

	free(p);

	// new�� ������ ȣ��� -80 page

	p = new Point;
	delete p;

	p = new Point(1,2);
	delete p;

	// C++11 ���ʹ� �Ʒ� ǥ�⵵ ����
	Point* p3(1,1); // C++98 ����
	Point* p5{1,1}; // C++11 ����
	Point* p6 = {1, 1}; // C++11 ����

}