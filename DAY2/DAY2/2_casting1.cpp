#include <iostream>

// C 스타일의 () 캐스팅 : 대부분의 경우 성공한다.
//						  근데, 너무 위험하다.



int main()
{

	double d = 3.4;
	//int n = d;      // ok. 경고 발생
	int n = (int)d; // ok. 경고 없음


	// void* -> int* 로 변경 :필요한 작업.
	int* p = (int*)malloc(100);
	free(p);

	// int* => double* 로 변환 : 너무 위헙하다.
	//                           그런데, C 캐스팅은 허용
	//double* p1 = &n; // error
	double* p1 = (double*)&n; // error
//	*p1 = 3.4;


	const int c = 10;
	//int* p2 = &c; // error. 상수를 비상수로 가르키는 포인터에 담을 수 없다.
	
	int* p2 = (int*)&c; // error. 상수를 비상수로 가르키는 포인터에 담을 수 없다.
	*p2 = 20;

	std::cout << c << std::endl; // 10 보통 컴파일러가 기가맥히게 마지막에 돌려놔줌
	std::cout << *p2 << std::endl; // 20 


}