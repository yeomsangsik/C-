#pragma once

// Car.h
class Car {

	int speed;
	static int cnt;

public:
	Car();
	~Car();

	static int get_count();
};