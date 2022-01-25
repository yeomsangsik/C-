#include <iostream>

// C++은 용도 별로 사용하기위해 "4개"의 캐스팅이 제공 - 50page 위
// 1. static_cast : 논리적으로 맞는 경우만 허용
// 2. 


int main()
{

	double d = 3.4;
//	int n = (int)d; // ok. 경고 없음
	// 1. primitive type 간의 값 캐스팅 허용
	int n = static_cast<int>(d); // ok. 경고 없음

	// 2. void* -> 다른 타입으로* 캐스팅
	int* p = static_cast<int*>(malloc(100));
	free(p);

	// 3. 상속관계 타입끼리의 캐스팅 허용

	// 그외의 경우는 대부분 에러
	// 아래 코드와 같이 서로 연관성 없는 타입의 주소 캐스팅은 모두 에러.
	double* p1 = static_cast<double*>(&n); // Compile error
	
}