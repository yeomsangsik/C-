// Car.cpp
#include "Car.h"

int Car::cnt = 0;

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

int Car::get_count() // static 멤버함수는 외부 구현 시 뺀다
{
	return cnt;
}