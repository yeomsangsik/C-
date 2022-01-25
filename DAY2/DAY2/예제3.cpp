#include <iostream>

// OOP : 객체지향 프로그래밍 (Object Oriented Programming)
// 1. 타입을 먼저 설계해라!

// 타입에는 "Rect", "Point", "Person", 같은 것만 있는 것은 아닙니다.
// "동적배열" 이라는 타입을 설계해 봅시다.

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