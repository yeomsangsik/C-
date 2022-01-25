#include <iostream>

// �ٽ� 1. �ʿ��� Ÿ���� ���� ��������
// �ٽ� 2. ���¸� ��Ÿ���� �����Ϳ� ���¸� ������ ������ �����ϴ� �Լ���
//         ��� Ÿ���� ��������.
//         C++ ����ü�� �Լ��� ������ �� �ִ�.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea()
	{
		return (right - left) * (top - bottom);
	}

	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};


int main()
{
	Rect rc = { 1, 1, 10, 10 };
//	int area = getRectArea(rc);
	int area = rc.getArea();
	rc.draw();
}
