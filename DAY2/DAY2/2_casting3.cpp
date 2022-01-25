#include <iostream>

// C++은 용도 별로 사용하기위해 "4개"의 캐스팅이 제공 - 50page 위

// 2. reinterpret_cast : 주소 캐스팅용임니다!!!
// 
//    1. 서로 다른 타입의 주소 캐스팅
//    2. 정수 <=> 주소 사이의 캐스팅

int main()
{

	int n = 10;

//  double* p1 = static_cast<double*>(&n); // Compile error
	double* p1 = reinterpret_cast<double*>(&n); // ok

//	*p1 = 3.4; // 단, 캐스팅 되어도 이렇게 사용하지는 마세요..

//	int* p2 = 1000; // error
	int* p2 = (int*)1000; //ok.. 근데 위험
	int* p2 = static_cast<int*>(1000); // error.. 
	int* p2 = reinterpret_cast<int*>(1000); //ok


	int n2 = reinterpret_cast<int>(3.4); // error
										 // 용도에 맞지 않다.
										 // static_cast를 사용하거나
										 // 캐스팅 자체를 제거하며 된다.

}