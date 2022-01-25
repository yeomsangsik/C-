#include <iostream>

// OOP : ��ü���� ���α׷��� (Object Oriented Programming)
// 1. Ÿ���� ���� �����ض�!

// Ÿ�Կ��� "Rect", "Point", "Person", ���� �͸� �ִ� ���� �ƴմϴ�.
// "�����迭" �̶�� Ÿ���� ������ ���ô�.

class Vector
{

	int* buff;
	int size;
public:
	Vector(int sz) : size(sz)
	{
		buff = new int[size];
	}
	~Vector() {
		delete[] buff;
	}

	void setAt(int idx, int value)
	{
		buff[idx] = value;
	}
	int getAt(int idx)
	{
		return buff[idx];
	}
};

int main()
{
	Vector v(5);

	v.setAt(0, 10);
	int n = v.getAt(0);

	std::cout << n << std::endl;


}