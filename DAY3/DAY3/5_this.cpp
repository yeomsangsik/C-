#include <iostream>


class Point {

	int x;
	int y;

public:
	/*
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	*/
};

// ��� �Լ� set�� �Ʒ�ó�� �Ϲ� �Լ��� �����մϴ�.
void set(Point* this, int a, int b)
{
	this-> x = a;
	this-> y = b;
}

int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // set(&p1, 10, 20)
	p2.set(10, 20); // set(&p2, 10, 20)  ó�� �����Ϸ��� �����մϴ�.

}