#include <iostream>

int main() {


	const double d = 3.14;

	char* p1 = (char*)&d;

	// 위의 캐스팅을 C++ 로 해보세요
	//       ㅣ

	char* p2 = reinterpret_cast<char*>(const_cast<double*>(&d)); // 동일 타입의 const 속성만 제거
	char* p3 = const_cast<char*>(reinterpret_cast<const char*>(&d)); // 동일 타입의 const 속성만 제거


}