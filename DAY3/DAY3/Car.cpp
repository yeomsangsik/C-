// Car.cpp
#include "Car.h"

int Car::cnt = 0;

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

int Car::get_count() // static ����Լ��� �ܺ� ���� �� ����
{
	return cnt;
}